// The title's Direct3D 8 calls drawn with Vulkan, on Android. The same semantics the Windows build drew with
// Direct3D 12: targets that live in guest memory, textures decoded and streamed from it, the draw time HLSL compiled
// to SPIR-V, the game's fences and read backs, the gamma ramp and the 4:3 frame at present.
//
// Vulkan maps the game's shaders by their own names: cbuffer c (b0), the draw constants (b1), tex0..3, smp0..3, and
// the blit's B, img, lut, ls, ps. The descriptor sets come from each module's SPIR-V decorations, so whatever sets
// the HLSL front end assigned, the binds follow the shaders instead of an assumption.
#include "vulkan_internal.h"

#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstring>
#include <mutex>
#include <unordered_set>

#include "app/app.h"
#include "gpu/pipeline_cache.h"

namespace gpu::vk {

namespace {

constexpr uint32_t kQuadVertices = 6;  // a quad drawn as two triangles
constexpr float kDepth24Max = 16777215.0f;
constexpr uint64_t kUpscaledMin10 = 101;  // host texels per console texel * 10 past rounding: the target is upscaled
constexpr uint32_t kConsoleShadows = 512;
constexpr float kHeadroom = 8.0f;

// alpha test off: compare always, in Cmp() - 1 terms like the enabled test
constexpr float kAlphaTestAlways = 7.0f;

constexpr uint64_t kDeclarationSalt = 0x10000;
constexpr uint64_t kPretransformedSalt = 0x5A5A;
constexpr uint64_t kQuadSalt = 0xC3C30000;
constexpr uint64_t kPixelKeySalt = 0x9E3779B97F4A7C15ull;

uint32_t SimpleState(const State& s, uint32_t method) { return s.simple[method >> 2]; }

VkCompareOp CmpOp(uint32_t v) {
    uint32_t n = v >= 0x200 && v <= 0x207 ? v - 0x200 : 7;
    return VkCompareOp(n + 1);
}

uint8_t ShadowDepthKind(uint32_t format) {
    return format == 0x2C || format == 0x30 ? 2 : 1;  // D16 and LIN_D16 against the 24 bit rest
}

// a target's key by its surface's data address and depthness
uint64_t TargetKey(uint32_t data, bool depth) { return uint64_t(data) << 1 | (depth ? 1 : 0); }

// the shadow map's depth surface, or with depth false its colour surface
bool IsShadowSurface(const Surface& s, bool depth) {
    const ShadowTargets& sh = g_shadow;
    return sh.blur_hi && s.data == (depth ? sh.map : sh.color);
}

// MemSig hashes a surface up to 64 KiB whole, a bigger one as evenly spaced samples
constexpr uint32_t kSigWholeMax = 65536;
constexpr uint32_t kSigSamples = 64;
constexpr uint32_t kSigSampleBytes = 64;

uint64_t MemSig(uint32_t data, uint32_t total) {
    const uint8_t* p = static_cast<const uint8_t*>(kernel::HostPtr(data));
    uint64_t sig = Hash(&total, sizeof(total));
    if (total <= kSigWholeMax) return Hash(p, total, sig);
    for (uint32_t i = 0; i < kSigSamples; i++) {
        const uint8_t* sample = p + uint64_t(total - kSigSampleBytes) * i / (kSigSamples - 1);
        sig = Hash(sample, kSigSampleBytes, sig);
    }
    return sig;
}

// MemSig samples a big surface and misses small writes (XFONT text): after a Sync every byte is compared
bool Changed(const Target& t) {
    if (t.drawn || t.read.empty()) return false;
    uint32_t row = t.gw * 4;
    uint32_t pitch = GuestPitch(t.gw);
    const uint8_t* p = static_cast<const uint8_t*>(kernel::HostPtr(t.data));
    for (uint32_t y = 0; y < t.gh; y++)
        if (std::memcmp(p + size_t(y) * pitch, &t.read[size_t(y) * row], row)) return true;
    return false;
}

// a lock alone proves nothing, reads lock too: only changed bytes mean the CPU wrote it
bool LatchCpuWrite(Target& t) {
    uint64_t e = DirtyEpoch(t.data);
    if (e <= t.epoch) return false;
    t.epoch = e;
    uint64_t sig = MemSig(t.data, t.bytes);
    if (sig == t.sig && !Changed(t)) return false;
    t.sig = sig;
    return true;
}

// a draw's shaders: what they are made from, their cache keys and the module hashes
struct DrawShaders {
    bool prog = false;            // a vertex program, else the fixed function pipeline
    bool quad = false;
    bool fixed_transform = false; // fixed function on untransformed vertices: the shader reads matrices and lights
    FixedKey fk;
    uint64_t vkey = 0, pkey = 0;  // the source keys, also the module hashes
};

DrawShaders ClassifyShaders(const State& s, const Assembled& a, uint32_t count) {
    DrawShaders sh;
    // a shader made from a declaration alone (no program) is the fixed function pipeline on those inputs
    sh.prog = (s.vs_handle & 1) && s.vs && !s.vs->program.empty();
    sh.quad = count <= kQuadVertices && !s.rs[kRsZEnable];
    sh.fixed_transform = !sh.prog && !a.pretransformed;
    if (!sh.prog) sh.fk = MakeFixedKey(s);
    return sh;
}

// the program's hash is cached in the guest shader object
void EnsureProgramHash(const State& s) {
    if (!s.vs->hash) s.vs->hash = Hash(s.vs->program.data(), s.vs->program.size() * 4) | 1;
}

uint64_t VertexKey(const State& s, const Assembled& a, const DrawShaders& sh) {
    uint64_t seed = sh.prog ? s.vs->hash ^ a.regs : Hash(&s.vs_handle, 4, a.regs | kDeclarationSalt);
    uint64_t vkey = Hash(&a.decode, 8, seed);
    if (!sh.prog && a.pretransformed) vkey ^= kPretransformedSalt;
    if (sh.quad) vkey ^= kQuadSalt;
    if (!sh.prog) vkey = Hash(&sh.fk, sizeof(sh.fk), vkey);
    return vkey;
}

std::string VertexHlsl(const State& s, const Assembled& a, const DrawShaders& sh) {
    if (sh.prog) return VertexProgramHlsl(s.vs->program, a.regs, a.decode);
    return FixedVertexHlsl(a.regs, a.pretransformed, a.decode, sh.fk);
}

// the draw's constants, as the shaders' cbuffer b1 holds them
struct GuestSize {
    uint32_t w = 0, h = 0;
};

void FillSurfaceConstants(const State& s, GuestSize size, DrawConstants& c) {
    c.surf[0] = float(size.w);
    c.surf[1] = float(size.h);
    c.surf[2] = 1.0f / s.zscale;
    if (s.rs[kRsFogEnable]) {
        c.fog[0] = Bits(s.rs[kRsFogStart]);
        c.fog[1] = Bits(s.rs[kRsFogEnd]);
        c.fog[2] = Bits(s.rs[kRsFogDensity]);
        c.fog[3] = float(s.rs[kRsFogTableMode]);
    }
    Color(s.rs[kRsFogColor], c.fog_color);
    c.misc[0] = float(SimpleState(s, kMAlphaRef) & 0xFF);
    c.misc[1] = SimpleState(s, kMAlphaTestEnable) ? float(CmpOp(SimpleState(s, kMAlphaFunc)) - 1) : kAlphaTestAlways;
    c.misc[2] = float(CmpOp(s.rs[kRsShadowFunc]) - 1);
    c.misc[3] = s.rs[kRsSpecularEnable] ? 1.0f : 0.0f;
}

void FillCombinerConstants(const State& s, DrawConstants& c) {
    for (int i = 0; i < 8; i++) {
        Color(SimpleState(s, kMPsConstant0 + i * 4), c.pc[i * 2]);
        Color(SimpleState(s, kMPsConstant1 + i * 4), c.pc[i * 2 + 1]);
    }
    Color(SimpleState(s, kMPsFinalConstant0), c.pc[16]);
    Color(SimpleState(s, kMPsFinalConstant1), c.pc[17]);
    Color(s.rs[kRsTextureFactor], c.tfactor);
}

// colour lands at its value: no HDR target on the console look
void FillHdrConstants(DrawConstants& c) {
    c.hdr[0] = 1.0f;
    c.hdr[1] = kHeadroom;
}

constexpr float kGlowBoxTexels = 3.0f;

void FillTexelConstants(int i, const TextureDesc& d, bool rt_stage, float wide, DrawConstants& c) {
    c.texsize[i][0] = float(d.width);
    c.texsize[i][1] = float(d.height);
    // the console samples pixels at integer positions, Vulkan half a pixel on: targets are read half a texel back
    if (!rt_stage) return;
    c.texsize[i][2] = -0.5f / float(d.width);
    c.texsize[i][3] = -0.5f / float(d.height);
    // a 3 console texel box per tap keeps the console chain's glow width and brightness
    if (wide > 0) {
        float n = std::ceil(kGlowBoxTexels * wide * 0.5f);
        c.spread[i][0] = kGlowBoxTexels / (n * float(d.width));
        c.spread[i][1] = kGlowBoxTexels / (n * float(d.height));
        c.spread[i][2] = n;
    }
}

void FillTextureConstants(const State& s, const std::array<TextureDesc, 4>& descs, const std::array<bool, 4>& rt_stage,
                          const std::array<float, 4>& wide, DrawConstants& c) {
    for (int i = 0; i < 4; i++) {
        if (s.textures[size_t(i)]) FillTexelConstants(i, descs[size_t(i)], rt_stage[size_t(i)], wide[size_t(i)], c);
        const auto& t = s.tss[size_t(i)];
        c.bump[i][0] = Bits(t[kTssBumpEnvMat00]);
        c.bump[i][1] = Bits(t[kTssBumpEnvMat01]);
        c.bump[i][2] = Bits(t[kTssBumpEnvMat10]);
        c.bump[i][3] = Bits(t[kTssBumpEnvMat11]);
        c.bumpl[i][0] = Bits(t[kTssBumpEnvLScale]);
        c.bumpl[i][1] = Bits(t[kTssBumpEnvLOffset]);
    }
}

void MatMul(const float* x, const float* y, float* o) {
    for (int r = 0; r < 4; r++)
        for (int col = 0; col < 4; col++)
            o[r * 4 + col] = x[r * 4] * y[col] + x[r * 4 + 1] * y[4 + col] + x[r * 4 + 2] * y[8 + col] +
                             x[r * 4 + 3] * y[12 + col];
}

// HLSL mul(row vector, matrix) with column major packing wants the transpose
void Transpose(const float* m, float* o) {
    for (int r = 0; r < 4; r++)
        for (int col = 0; col < 4; col++) o[col * 4 + r] = m[r * 4 + col];
}

void InverseTranspose3x3(const float* wv, float* n) {
    float det = wv[0] * (wv[5] * wv[10] - wv[6] * wv[9]) - wv[1] * (wv[4] * wv[10] - wv[6] * wv[8]) +
                wv[2] * (wv[4] * wv[9] - wv[5] * wv[8]);
    float id = det != 0 ? 1.0f / det : 0.0f;
    for (int r = 0; r < 3; r++)
        for (int col = 0; col < 3; col++) {
            int r1 = (r + 1) % 3, r2 = (r + 2) % 3, c1 = (col + 1) % 3, c2 = (col + 2) % 3;
            n[r * 4 + col] = (wv[r1 * 4 + c1] * wv[r2 * 4 + c2] - wv[r1 * 4 + c2] * wv[r2 * 4 + c1]) * id;
        }
}

// D3DTRANSFORMSTATETYPE indices into s.transforms
constexpr size_t kTsView = 2;
constexpr size_t kTsProjection = 3;
constexpr size_t kTsTexture0 = 16;
constexpr size_t kTsWorld = 256;

void FillTransformConstants(const State& s, GuestSize size, DrawConstants& c) {
    uint32_t gw = size.w, gh = size.h;
    float wv[16], wvp[16];
    MatMul(s.transforms[kTsWorld].data(), s.transforms[kTsView].data(), wv);
    MatMul(wv, s.transforms[kTsProjection].data(), wvp);
    const auto& v = s.viewport;
    float sx = float(v.w) / gw, sy = float(v.h) / gh;
    float ox = (2.0f * v.x + v.w) / gw - 1;
    float oy = 1 - (2.0f * v.y + v.h) / gh;
    float vpm[16] = {sx, 0, 0, 0, 0, sy, 0, 0, 0, 0, v.max_z - v.min_z, 0, ox, oy, v.min_z, 1};
    float full[16];
    MatMul(wvp, vpm, full);
    Transpose(full, c.wvp);
    Transpose(wv, c.wv);
    float n[16] = {};
    InverseTranspose3x3(wv, n);
    Transpose(n, c.wvn);
    for (int t = 0; t < 4; t++) Transpose(s.transforms[kTsTexture0 + size_t(t)].data(), c.tm[t]);
}

// D3DLIGHT8 as floats: Type, Diffuse[4], Specular[4], Ambient[4], Position[3], Direction[3], Range, Falloff,
// Attenuation0 to 2, Theta, Phi
constexpr int kLightFloats = 26;

void LightToView(const std::array<uint32_t, kLightFloats>& l, const float* vm, float (&o)[7][4]) {
    float f[kLightFloats];
    std::memcpy(f, l.data(), sizeof(f));
    for (int j = 0; j < 4; j++) {
        o[0][j] = f[1 + j];
        o[1][j] = f[5 + j];
        o[2][j] = f[9 + j];
    }
    const float* pos = f + 13;
    const float* dir = f + 16;
    for (int j = 0; j < 3; j++) {
        o[3][j] = pos[0] * vm[j] + pos[1] * vm[4 + j] + pos[2] * vm[8 + j] + vm[12 + j];
        o[4][j] = dir[0] * vm[j] + dir[1] * vm[4 + j] + dir[2] * vm[8 + j];
    }
    o[3][3] = f[19];
    o[4][3] = f[20];
    o[5][0] = f[21];
    o[5][1] = f[22];
    o[5][2] = f[23];
    o[6][0] = std::cos(f[24] * 0.5f);
    o[6][1] = std::cos(f[25] * 0.5f);
}

void FillLightConstants(const State& s, const FixedKey& fk, DrawConstants& c) {
    std::memcpy(c.mat, s.material.data(), sizeof(float) * 16);
    c.mat[4][0] = s.material[16];
    Color(s.rs[kRsAmbient], c.amb);
    const float* vm = s.transforms[kTsView].data();
    for (int i = 0; i < 8; i++) {
        if (!((fk.types >> (i * 2)) & 3)) continue;
        LightToView(s.lights[size_t(i)], vm, c.lt[i]);
    }
}

// a Blit's settings past the source and its rectangle
struct BlitOptions {
    bool gamma = false;  // through the gamma lookup
    bool alpha = false;  // the source's alpha, else 1
    uint32_t taps = 1;   // n x n box filter per pixel
    float mul = 1;       // colour scale
    bool over = false;   // premultiplied over the target, which keeps its alpha
};

// what a stage's sampler asks for, hashed into the sampler cache
struct SamplerDesc {
    VkFilter min = VK_FILTER_NEAREST, mag = VK_FILTER_NEAREST, mip = VK_FILTER_NEAREST;
    VkSamplerMipmapMode mipmap = VK_SAMPLER_MIPMAP_MODE_NEAREST;
    VkSamplerAddressMode u = VK_SAMPLER_ADDRESS_MODE_REPEAT, v = VK_SAMPLER_ADDRESS_MODE_REPEAT,
                         w = VK_SAMPLER_ADDRESS_MODE_REPEAT;
    float lod_bias = 0, min_lod = 0, max_lod = VK_LOD_CLAMP_NONE;
    uint32_t aniso = 1;
    bool compare = false;
    VkCompareOp compare_op = VK_COMPARE_OP_NEVER;
    bool operator==(const SamplerDesc& o) const {
        return !std::memcmp(this, &o, sizeof(*this));
    }
};

VkSamplerAddressMode AddressMode(uint32_t v) {
    switch (v) {
        case 2: return VK_SAMPLER_ADDRESS_MODE_MIRRORED_REPEAT;
        case 3: case 5: return VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        case 4: return VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_BORDER;
        default: return VK_SAMPLER_ADDRESS_MODE_REPEAT;
    }
}

SamplerDesc StageSampler(const State& s, int i, const std::array<uint8_t, 4>& shadow_kinds, uint32_t aniso_setting,
                         bool depth24) {
    SamplerDesc d;
    const auto& t = s.tss[size_t(i)];
    uint32_t mag = t[kTssMagFilter], min = t[kTssMinFilter], mip = t[kTssMipFilter];
    // the XDK's filter values: 0 point, 1 linear, 2 anisotropic
    d.mag = mag >= 1 ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    d.min = min >= 1 ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    d.mip = mip == 1 ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
    d.mipmap = VkSamplerMipmapMode(d.mip == VK_FILTER_LINEAR ? 1 : 0);
    bool anisotropic = min == 2 || mag == 2;
    uint32_t an = anisotropic ? std::max<uint32_t>(t[kTssMaxAnisotropy], 1) : 1;
    if (aniso_setting && min >= 1 && mip && !shadow_kinds[size_t(i)]) an = aniso_setting;
    if (an > 1) {
        d.aniso = std::min<uint32_t>(an, 16);
        d.min = d.mag = VK_FILTER_LINEAR;
    }
    d.u = AddressMode(t[kTssAddressU]);
    d.v = AddressMode(t[kTssAddressV]);
    d.w = AddressMode(t[kTssAddressW]);
    d.lod_bias = Bits(t[kTssMipLodBias]);
    d.min_lod = float(t[kTssMaxMipLevel]);
    d.max_lod = mip ? VK_LOD_CLAMP_NONE : d.min_lod;
    if (shadow_kinds[size_t(i)]) {
        // the console tests texel OP r, the comparison sampler tests r OP texel
        static const uint8_t swap[8] = {0, 4, 2, 6, 1, 5, 3, 7};
        bool lin = min >= 1 || mag >= 1;
        d.min = d.mag = lin && depth24 ? VK_FILTER_LINEAR : VK_FILTER_NEAREST;
        d.mip = VK_FILTER_NEAREST;
        d.mipmap = VK_SAMPLER_MIPMAP_MODE_NEAREST;
        d.compare = true;
        d.compare_op = VkCompareOp(swap[CmpOp(s.rs[kRsShadowFunc]) - 1]);
        d.aniso = 1;
    }
    return d;
}

// BCn blocks to BGRA8, for devices without the compressed formats: the console look keeps its textures
void DecodeBc1Block(const uint8_t* src, uint8_t* out, uint32_t pitch, bool alpha) {
    uint16_t c0, c1;
    std::memcpy(&c0, src, 2);
    std::memcpy(&c1, src + 2, 2);
    uint32_t idx;
    std::memcpy(&idx, src + 4, 4);
    auto rgb = [](uint16_t c) {
        uint8_t r = uint8_t((c >> 11 & 0x1F) * 255 / 31), g = uint8_t((c >> 5 & 0x3F) * 255 / 63),
               b = uint8_t((c & 0x1F) * 255 / 31);
        return std::array<uint8_t, 3>{r, g, b};
    };
    auto c0v = rgb(c0), c1v = rgb(c1);
    std::array<std::array<uint8_t, 4>, 4> pal{};
    for (int i = 0; i < 4; i++) {
        pal[i][3] = 255;
        if (i < 2 || c0 > c1) {
            pal[i][0] = i < 2 ? c0v[0] : (2 * c0v[0] + c1v[0] + 1) / 3;
            pal[i][1] = i < 2 ? c0v[1] : (2 * c0v[1] + c1v[1] + 1) / 3;
            pal[i][2] = i < 2 ? c0v[2] : (2 * c0v[2] + c1v[2] + 1) / 3;
        } else {
            pal[i][0] = (c0v[0] + c1v[0]) / 2;
            pal[i][1] = (c0v[1] + c1v[1]) / 2;
            pal[i][2] = (c0v[2] + c1v[2]) / 2;
            if (i == 3) pal[i][3] = 0;  // BC1's one bit alpha
        }
    }
    (void)alpha;
    for (int y = 0; y < 4; y++)
        for (int x = 0; x < 4; x++) {
            uint8_t sel = (idx >> (2 * (y * 4 + x))) & 3;
            std::memcpy(out + y * pitch + x * 4, pal[sel].data(), 4);
        }
}

void DecodeBcn(const TextureDesc& d, uint32_t level, const std::vector<uint8_t>& blocks, uint32_t block_pitch,
               int kind, std::vector<uint8_t>& rgba, uint32_t& row_pitch) {
    uint32_t w = std::max<uint32_t>(d.width >> level, 1), h = std::max<uint32_t>(d.height >> level, 1);
    row_pitch = w * 4;
    rgba.assign(size_t(row_pitch) * h, 0);
    uint32_t bw = std::max(1u, (w + 3) / 4), bh = std::max(1u, (h + 3) / 4);
    for (uint32_t by = 0; by < bh; by++)
        for (uint32_t bx = 0; bx < bw; bx++) {
            const uint8_t* src = blocks.data() + (size_t(by) * block_pitch + bx) * (kind == 1 ? 8 : 16);
            uint8_t* out = rgba.data() + (size_t(by) * 4) * row_pitch + bx * 4 * 4;
            if (kind == 1) {
                DecodeBc1Block(src, out, row_pitch, true);
            } else if (kind == 2) {
                // BC2: 4 bit alpha rows, then BC1 colour
                for (int y = 0; y < 4; y++)
                    for (int x = 0; x < 4; x++) {
                        uint8_t a4 = (src[y * 2 + x / 2] >> (x % 2 * 4)) & 0xF;
                        out[y * row_pitch + x * 4 + 3] = uint8_t(a4 * 255 / 15);
                    }
                uint8_t colour[16];
                DecodeBc1Block(src + 8, colour, 16, false);
                for (int y = 0; y < 4; y++)
                    for (int x = 0; x < 4; x++) out[y * row_pitch + x * 4] = colour[y * 16 + x * 4],
                        out[y * row_pitch + x * 4 + 1] = colour[y * 16 + x * 4 + 1],
                        out[y * row_pitch + x * 4 + 2] = colour[y * 16 + x * 4 + 2];
            } else {
                // BC3: interpolated alpha, then BC1 colour
                uint8_t a0 = src[0], a1 = src[1];
                uint64_t bits;
                std::memcpy(&bits, src + 2, 8);
                for (int y = 0; y < 4; y++)
                    for (int x = 0; x < 4; x++) {
                        uint8_t sel = (bits >> (3 * (y * 4 + x))) & 7;
                        uint8_t a;
                        if (sel < 2) a = sel ? a1 : a0;
                        else if (a0 > a1) a = uint8_t(((8 - sel) * a0 + (sel - 1) * a1) / 7);
                        else if (sel < 6) a = uint8_t(((6 - sel) * a0 + (sel - 1) * a1) / 5);
                        else a = sel == 6 ? 0 : 255;
                        out[y * row_pitch + x * 4 + 3] = a;
                    }
                uint8_t colour[16];
                DecodeBc1Block(src + 8, colour, 16, false);
                for (int y = 0; y < 4; y++)
                    for (int x = 0; x < 4; x++) out[y * row_pitch + x * 4] = colour[y * 16 + x * 4],
                        out[y * row_pitch + x * 4 + 1] = colour[y * 16 + x * 4 + 1],
                        out[y * row_pitch + x * 4 + 2] = colour[y * 16 + x * 4 + 2];
            }
        }
}

}  // namespace

// the update of a texture upload inside the frame's command buffer
void UploadImageLevel(Image& img, VkBuffer buf, VkDeviceSize off, uint32_t level, uint32_t layer, uint32_t w, uint32_t h,
                      uint32_t z) {
    VkBufferImageCopy region{};
    region.bufferOffset = off;
    region.imageSubresource = {img.depth ? VkImageAspectFlags(VK_IMAGE_ASPECT_DEPTH_BIT) : VK_IMAGE_ASPECT_COLOR_BIT,
                               level, layer, 1};
    region.imageExtent = {w, h, z};
    vkCmdCopyBufferToImage(g_ctx.Current().cmd, buf, img.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &region);
}


class VulkanBackend final : public Backend {
public:
    VulkanBackend() = default;
    ~VulkanBackend() override { Shutdown(); }

bool Init(uint32_t width, uint32_t height) {
        guest_w_ = width;
        guest_h_ = height;
        scale_ = app::RenderScale(height);
        shadow_res_ = app::Get().shadow_resolution;
        if (!CreateInstanceAndDevice()) {
            LOGE("vulkan: no device");
            return false;
        }
        if (!CreateSwapchain()) {
            LOGE("vulkan: no swapchain");
            return false;
        }
        cache::Open(0x564B4C4B45595331ull);  // 'VKKEYS1', a hash of the reflection built layouts
        if (!EnsureBlitShaders()) {
            LOGE("vulkan: the blit shaders failed to build");
            return false;
        }
        // the full screen passes' two clamp samplers: linear at ls, point at ps
        VkSamplerCreateInfo sc{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
        sc.magFilter = sc.minFilter = VK_FILTER_LINEAR;
        sc.mipmapMode = VK_SAMPLER_MIPMAP_MODE_NEAREST;
        sc.addressModeU = sc.addressModeV = sc.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
        sc.maxLod = VK_LOD_CLAMP_NONE;
        if (!VKCHECK(vkCreateSampler(g_ctx.dev, &sc, nullptr, &linear_sampler_))) return false;
        sc.magFilter = sc.minFilter = VK_FILTER_NEAREST;
        if (!VKCHECK(vkCreateSampler(g_ctx.dev, &sc, nullptr, &point_sampler_))) return false;
        if (!EnsureFallbackTexture()) return false;
        if (!EnsureGammaLut()) return false;
        WarmPipelines();
        LOGI("vulkan: %ux%u guest, %ux%u window, render scale %.3f", width, height, g_ctx.bb_w, g_ctx.bb_h, scale_);
        return true;
    }

    void Shutdown() {
        if (!g_ctx.dev) return;
        vkDeviceWaitIdle(g_ctx.dev);
        for (auto& [key, t] : targets_) {
            DestroyImage(t.img);
            if (t.resolve) DestroyImage(*t.resolve);
            if (t.fb) DestroyImage(*t.fb);
            delete t.resolve;
            delete t.fb;
        }
        targets_.clear();
        for (auto& [key, t] : textures_) DestroyImage(t.img);
        textures_.clear();
        for (auto& [data, l] : late_) ResetLate(l);
        late_.clear();
        for (auto& [key, img] : scratch_) DestroyImage(img);
        scratch_.clear();
        if (fallback_) {
            DestroyImage(*fallback_);
            delete fallback_;
            fallback_ = nullptr;
        }
        if (lut_) {
            DestroyImage(*lut_);
            delete lut_;
            lut_ = nullptr;
        }
        for (auto& [key, s] : samplers_)
            if (s) vkDestroySampler(g_ctx.dev, s, nullptr);
        samplers_.clear();
        if (linear_sampler_) vkDestroySampler(g_ctx.dev, linear_sampler_, nullptr);
        if (point_sampler_) vkDestroySampler(g_ctx.dev, point_sampler_, nullptr);
        DestroyDevice();
    }

    // the command buffer is open for recording; BeginFrame waited the frame's previous submit out
    bool Record() {
        if (recording_) return true;
        if (!BeginFrame()) return false;
        recording_ = true;
        return true;
    }

    void EndPass() {
        if (!pass_color_) return;
        vkCmdEndRenderPass(g_ctx.Current().cmd);
        pass_color_ = nullptr;
        pass_ds_ = nullptr;
    }

    // a render pass over one colour attachment and an optional depth stencil; LOAD keeps the contents between passes
    bool BeginPass(Image& color, Target* ds, bool clear_color) {
        if (pass_color_ == &color && pass_ds_ == ds) return true;
        EndPass();
        Transition(color, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL);
        if (ds) Transition(ds->img, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL);
        VkRenderPass pass = GetRenderPass(color.fmt, ds ? g_ctx.depth_fmt : VK_FORMAT_UNDEFINED,
                                          VK_SAMPLE_COUNT_1_BIT, clear_color, false);
        if (!pass) return false;
        VkFramebuffer fb = GetFramebuffer(color, ds ? &ds->img : nullptr, pass, color.w, color.h);
        if (!fb) return false;
        VkRenderPassBeginInfo bi{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
        bi.renderPass = pass;
        bi.framebuffer = fb;
        bi.renderArea = {{0, 0}, {color.w, color.h}};
        VkClearValue cv[1]{};
        cv[0].color = {0, 0, 0, 1};
        if (clear_color) {
            bi.clearValueCount = 1;
            bi.pClearValues = cv;
        }
        vkCmdBeginRenderPass(g_ctx.Current().cmd, &bi, VK_SUBPASS_CONTENTS_INLINE);
        pass_color_ = &color;
        pass_ds_ = ds;
        return true;
    }

    void Clear(const State& s, uint32_t count, const uint8_t* rects, uint32_t flags, uint32_t color, float z,
               uint32_t stencil) override {
        std::lock_guard<std::recursive_mutex> lock(draw_lock_);
        if (!Record()) return;
        Target* rt = (flags & kClearTarget) ? EnsureTarget(s.rt, false) : nullptr;
        Target* ds = (flags & (kClearZ | kClearStencil)) ? EnsureTarget(s.zs, true) : nullptr;
        if (!rt && !ds) return;
        // the rects in guest coordinates, scaled to the target and clamped
        if (rt) {
            // pixels the CPU wrote before this clear go in first, a later upload would paint over the clear
            if (LatchCpuWrite(*rt)) UploadTarget(*rt, s.rt);
            if (!BeginPass(rt->img, nullptr, false)) return;
            std::vector<VkClearRect> rs = ClearRects(s, count, rects, *rt);
            VkClearAttachment att{};
            att.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
            att.colorAttachment = 0;
            att.clearValue.color = {float(color >> 16 & 0xFF) / 255.0f, float(color >> 8 & 0xFF) / 255.0f,
                                    float(color & 0xFF) / 255.0f, float(color >> 24 & 0xFF) / 255.0f};
            vkCmdClearAttachments(g_ctx.Current().cmd, 1, &att, uint32_t(rs.size()), rs.data());
            rt->drawn = true;
        }
        if (ds) {
            // whole image: the console's depth clears carry no rects that matter, and a depth-only pass needs a colour
            EndPass();
            Transition(ds->img, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
            VkClearDepthStencilValue v{std::clamp(z, 0.0f, 1.0f), uint32_t(stencil & 0xFF)};
            VkImageSubresourceRange range{VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT, 0, 1, 0, 1};
            vkCmdClearDepthStencilImage(g_ctx.Current().cmd, ds->img.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &v, 1,
                                        &range);
            Transition(ds->img, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL);
            ds->drawn = true;
        }
    }

private:
    // ========================================================================
    // targets
    // ========================================================================

    std::vector<VkClearRect> ClearRects(const State& s, uint32_t count, const uint8_t* rects, Target& t) {
        std::vector<VkClearRect> rs;
        float sc = float(t.w) / t.gw;
        auto scaled = [&](int32_t x0, int32_t y0, int32_t x1, int32_t y1) {
            return VkClearRect{{std::clamp(int32_t(x0 * sc), 0, int32_t(t.w)),
                                std::clamp(int32_t(y0 * sc), 0, int32_t(t.h)),
                                uint32_t(std::max(0, std::clamp(int32_t(x1 * sc), 0, int32_t(t.w)) - std::clamp(int32_t(x0 * sc), 0, int32_t(t.w)))),
                                uint32_t(std::max(0, std::clamp(int32_t(y1 * sc), 0, int32_t(t.h)) - std::clamp(int32_t(y0 * sc), 0, int32_t(t.h))))},
                               0, 1};
        };
        if (count && rects) {
            for (uint32_t i = 0; i < count; i++) {
                int32_t r[4];
                std::memcpy(r, rects + size_t(i) * 16, sizeof(r));
                rs.push_back(scaled(r[0], r[1], r[2], r[3]));
            }
        } else {
            const auto& v = s.viewport;
            rs.push_back(scaled(int32_t(v.x), int32_t(v.y), int32_t(v.x + v.w), int32_t(v.y + v.h)));
        }
        return rs;
    }

    Target* FindTarget(const Surface& s, bool depth) {
        if (!s.header) return nullptr;
        // the shadow map's colour surface has no memory and colour writes off: depth alone is bound
        if (IsShadowSurface(s, depth) && !depth) return nullptr;
        uint32_t data = mem::VirtualFromPhysical(s.data);
        uint32_t w, h;
        SurfaceSize(s, w, h);
        auto it = targets_.find(TargetKey(data, depth));
        return it != targets_.end() && it->second.gw == w && it->second.gh == h ? &it->second : nullptr;
    }

    Target* EnsureTarget(const Surface& s, bool depth) {
        if (!s.header) return nullptr;
        if (IsShadowSurface(s, depth) && !depth) return nullptr;
        uint32_t data = mem::VirtualFromPhysical(s.data);
        uint32_t gw, gh;
        SurfaceSize(s, gw, gh);
        uint64_t key = TargetKey(data, depth);
        auto it = targets_.find(key);
        if (it != targets_.end() && it->second.gw == gw && it->second.gh == gh) return &it->second;
        if (it != targets_.end()) ReleaseTarget(it);
        Target t;
        t.depth = depth;
        t.gw = gw;
        t.gh = gh;
        // the scene's size follows the render scale; the shadow map follows the shadow resolution setting
        float sc = !depth && IsShadowSurface(s, true) && shadow_res_ ? float(shadow_res_) / gw : scale_;
        t.w = std::max(1u, uint32_t(std::lround(gw * sc)));
        t.h = std::max(1u, uint32_t(std::lround(gh * sc)));
        if (!Record() || !CreateImage(t.img, depth ? g_ctx.depth_fmt : kBgra, t.w, t.h, 1, 1, false, depth, true,
                                      VK_SAMPLE_COUNT_1_BIT))
            return nullptr;
        t.data = data;
        t.bytes = depth ? gw * gh * 4 : GuestPitch(gw) * gh;
        t.epoch = DirtyEpoch(data);
        t.sig = MemSig(data, t.bytes);
        // a fresh depth starts at 1 and stencil 0, the colour at black, as the console's surfaces do
        if (depth) {
            Transition(t.img, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
            VkClearDepthStencilValue v{1.0f, 0};
            VkImageSubresourceRange range{VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT, 0, 1, 0, 1};
            vkCmdClearDepthStencilImage(g_ctx.Current().cmd, t.img.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &v, 1,
                                        &range);
            Transition(t.img, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL);
        } else {
            Transition(t.img, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
            VkClearColorValue black{};
            VkImageSubresourceRange range{VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
            vkCmdClearColorImage(g_ctx.Current().cmd, t.img.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, &black, 1,
                                &range);
            Transition(t.img, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL);
        }
        return &(targets_.emplace(key, std::move(t)).first->second);
    }

    void ReleaseTarget(std::unordered_map<uint64_t, Target>::iterator it) {
        if (pass_color_ == &it->second.img || (pass_ds_ && pass_ds_ == &it->second)) {
            EndPass();
            pass_ds_ = nullptr;
        }
        // the frame's garbage takes the images over, they die when its submit is done
        g_ctx.Current().garbage_img.push_back(new Image(std::move(it->second.img)));
        if (it->second.resolve) g_ctx.Current().garbage_img.push_back(it->second.resolve);
        if (it->second.fb) g_ctx.Current().garbage_img.push_back(it->second.fb);
        delete it->second.resolve;
        delete it->second.fb;
        targets_.erase(it);
    }

    // the pixels the CPU changed since the last Sync, opaque, the rest 0; t.read takes them
    std::vector<uint8_t> LatchCpuChanges(Target& t) {
        std::vector<uint8_t> px(t.read.size(), 0);
        uint32_t pitch = GuestPitch(t.gw);
        const uint8_t* guest = static_cast<const uint8_t*>(kernel::HostPtr(t.data));
        for (uint32_t y = 0; y < t.gh; y++)
            for (uint32_t x = 0; x < t.gw; x++) {
                const uint8_t* c = guest + size_t(y) * pitch + x * 4;
                size_t i = (size_t(y) * t.gw + x) * 4;
                if (!std::memcmp(c, &t.read[i], 4)) continue;
                std::memcpy(&t.read[i], c, 4);
                std::memcpy(&px[i], c, 3);
                px[i + 3] = 255;
            }
        return px;
    }

    // one w x h BGRA image uploaded from tightly packed rows, left readable; the caller keeps or frees it
    bool UploadPixels(uint32_t w, uint32_t h, const std::vector<uint8_t>& px, uint32_t pitch, Image& out) {
        if (!CreateImage(out, kBgra, w, h, 1, 1, false, false, false, VK_SAMPLE_COUNT_1_BIT)) return false;
        uint32_t bytes = px.size() ? uint32_t(px.size()) : w * 4 * h;
        Upload up = AllocUpload(bytes, 16);
        if (!up.buf) return false;
        if (pitch == w * 4)
            std::memcpy(up.cpu, px.data(), bytes);
        else
            for (uint32_t y = 0; y < h; y++) std::memcpy(up.cpu + size_t(y) * w * 4, px.data() + size_t(y) * pitch, w * 4);
        Transition(out, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
        UploadImageLevel(out, up.buf, up.off, 0, 0, w, h, 1);
        Transition(out, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
        return true;
    }

    // CPU pixels of a colour surface into its host target, scaled
    void UploadTarget(Target& t, const Surface& s) {
        TextureDesc d;
        if (!Describe(s.header, d) || Format(d.format).depth) return;
        std::vector<uint8_t> px;
        uint32_t pitch;
        // after a Sync only the pixels the CPU changed go over the picture, which stays at render scale
        bool over = !t.drawn && d.width == t.gw && d.height == t.gh && t.read.size() == size_t(t.gw) * t.gh * 4;
        if (over) {
            LOG_FIRST(4, "vulkan: CPU pixels drawn over target %08X", t.data);
            pitch = t.gw * 4;
            px = LatchCpuChanges(t);
        } else {
            DecodeLevel(d, 0, 0, static_cast<const uint8_t*>(kernel::HostPtr(d.data)), nullptr, px, pitch);
        }
        EndPass();
        Image* tmp = new Image;
        if (!UploadPixels(d.width, d.height, px, pitch, *tmp)) {
            delete tmp;
            return;
        }
        BlitTo(t.img, t.w, t.h, *tmp, {0, 0, 1, 1}, {.alpha = true, .mul = 1, .over = over});
        g_ctx.Current().garbage_img.push_back(tmp);
        t.epoch = DirtyEpoch(t.data);
        t.sig = MemSig(t.data, t.bytes);
    }

    // ========================================================================
    // textures
    // ========================================================================

    VkFormat HostTextureFormat(const FormatInfo& fi) {
        switch (fi.host) {
            case Host::BC1: return g_ctx.bc_support[0] ? VK_FORMAT_BC1_RGBA_UNORM_BLOCK : kBgra;
            case Host::BC2: return g_ctx.bc_support[1] ? VK_FORMAT_BC2_UNORM_BLOCK : kBgra;
            case Host::BC3: return g_ctx.bc_support[2] ? VK_FORMAT_BC3_UNORM_BLOCK : kBgra;
            case Host::R32F: return VK_FORMAT_R32_SFLOAT;
            default: return kBgra;
        }
    }

    bool SameTexture(const Tex& tx, const TextureDesc& d) {
        return tx.img.image && tx.d.format == d.format && tx.d.width == d.width && tx.d.height == d.height &&
               tx.d.depth == d.depth && tx.d.levels == d.levels && tx.d.cube == d.cube && tx.d.pitch == d.pitch;
    }

    bool CreateTexture(Tex& tx, const TextureDesc& d, const FormatInfo& fi) {
        if (tx.img.image) g_ctx.Current().garbage_img.push_back(&tx.img);
        tx = Tex{};
        tx.d = d;
        tx.fmt = HostTextureFormat(fi);
        tx.levels = d.levels;
        uint32_t w = d.width, h = d.height;
        uint32_t layers = d.cube ? 6 : 1;
        bool volume = d.depth > 1;
        if (fi.compressed && ((w & 3) || (h & 3))) {
            w = (w + 3) & ~3u;
            h = (h + 3) & ~3u;
            tx.levels = 1;
        }
        if (!CreateImage(tx.img, tx.fmt, w, h, tx.levels, volume ? 1 : layers, d.cube, false, false,
                         VK_SAMPLE_COUNT_1_BIT))
            return false;
        return true;
    }

    void UpdateNormCube(Tex& tx, const TextureDesc& d, const FormatInfo& fi, uint32_t f, const std::vector<uint8_t>& px,
                        uint32_t pitch) {
        // a normalization cube: each face's centre points along its axis, 255 or 0 there, 128 across
        if (!f) tx.norm = fi.host == Host::BGRA8 && d.width >= 8 && px.size() >= size_t(d.width / 2 + 1) * pitch;
        const uint8_t* c = tx.norm ? &px[size_t(d.width / 2) * pitch + d.width / 2 * 4] : nullptr;
        for (uint32_t ch = 0; c && ch < 3; ch++) {
            int want = 128;
            if (ch == f / 2) want = f & 1 ? 0 : 255;
            tx.norm &= std::abs(c[2 - ch] - want) <= 16;
        }
    }

    void UploadTextureLevel(Tex& tx, uint32_t f, uint32_t l, const std::vector<uint8_t>& px, uint32_t pitch) {
        TextureDesc& d = tx.d;
        uint32_t w = d.linear ? d.width : std::max(d.width >> l, 1u);
        uint32_t h = d.linear ? d.height : std::max(d.height >> l, 1u);
        uint32_t z = d.linear ? 1 : std::max(d.depth >> l, 1u);
        uint32_t bytes = uint32_t(px.size());
        Upload up = AllocUpload(std::max(bytes, 4u), 16);
        if (!up.buf) return;
        if (pitch == w * 4 || tx.fmt != kBgra)
            std::memcpy(up.cpu, px.data(), bytes);
        else
            for (uint32_t y = 0; y < h * z; y++) std::memcpy(up.cpu + size_t(y) * w * 4, px.data() + size_t(y) * pitch, w * 4);
        UploadImageLevel(tx.img, up.buf, up.off, l, f, w, h, z);
    }

    void UploadTexture(Tex& tx, const TextureDesc& d, const FormatInfo& fi, const uint8_t* p, bool same) {
        EndPass();
        Transition(tx.img, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
        uint32_t faces = d.cube ? 6 : 1;
        std::vector<uint8_t> px;
        for (uint32_t f = 0; f < faces; f++)
            for (uint32_t l = 0; l < tx.levels; l++) {
                uint32_t pitch;
                DecodeLevel(d, l, f, p, nullptr, px, pitch);
                if (d.cube && !l) UpdateNormCube(tx, d, fi, f, px, pitch);
                if (tx.fmt != kBgra) {
                    UploadTextureLevel(tx, f, l, px, pitch);
                } else if (fi.compressed) {
                    // no BC on this device: the blocks decode on the CPU
                    int kind = fi.host == Host::BC1 ? 1 : fi.host == Host::BC2 ? 2 : 3;
                    std::vector<uint8_t> rgba;
                    uint32_t rp;
                    DecodeBcn(d, l, px, pitch, kind, rgba, rp);
                    uint32_t saved = tx.d.levels;
                    tx.d.levels = 1;  // the decode's level math must not shift
                    UploadTextureLevel(tx, f, l, rgba, rp);
                    tx.d.levels = saved;
                } else {
                    UploadTextureLevel(tx, f, l, px, pitch);
                }
            }
        Transition(tx.img, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
    }

    // a texture in guest memory: made again when its layout changed, uploaded again when its bytes did
    Tex* BindGuestTexture(int stage, const TextureDesc& d, const FormatInfo& fi) {
        Tex& tx = textures_[d.data];
        uint32_t total = TotalSize(d);
        bool same = SameTexture(tx, d);
        if (!same && !CreateTexture(tx, d, fi)) return nullptr;
        // cheap change check once per frame: lock epochs plus a sample of the bytes
        if (tx.frame != g_ctx.presents + 1 || !same) {
            tx.frame = g_ctx.presents + 1;
            const uint8_t* p = static_cast<const uint8_t*>(kernel::HostPtr(d.data));
            uint64_t sig = MemSig(d.data, total) ^ DirtyEpoch(d.data);
            if (sig != tx.sig || !same) {
                tx.sig = sig;
                UploadTexture(tx, d, fi, p, same);
            }
        }
        return &tx;
    }

    // a single sample copy of the target being drawn to, the console reads the pixels it is about to overwrite
    Image* EnsureFeedbackCopy(Target& t) {
        if (!t.fb) {
            t.fb = new Image;
            if (!CreateImage(*t.fb, t.fmt, t.w, t.h, 1, 1, false, false, false, VK_SAMPLE_COUNT_1_BIT)) {
                delete t.fb;
                t.fb = nullptr;
                return nullptr;
            }
        }
        EndPass();
        Transition(t.img, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
        Transition(*t.fb, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
        VkImageCopy region{};
        region.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
        region.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
        region.extent = {t.w, t.h, 1};
        vkCmdCopyImage(g_ctx.Current().cmd, t.img.image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, t.fb->image,
                       VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &region);
        Transition(*t.fb, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
        Transition(t.img, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL);
        return t.fb;
    }

    // the draw's four texture stages: what the shader samples, as d3d12.cpp's DrawTextures held
    struct DrawTextures {
        TexInfo info[4];
        Image* view[4] = {};     // what the stage samples, null drops it
        bool rt[4] = {};         // stage samples a render target
        float wide[4] = {};      // host texels per console texel of a target read into a smaller one, 0 otherwise
        uint8_t shadow[4] = {};  // depth texture: 1 D24, 2 D16
        TextureDesc desc[4];
    };

    // one stage's texture: a target read back to the draw, or guest memory streamed in
    Image* BindTexture(const State& s, int stage, DrawTextures& tx, Target* rt, Target* ds) {
        TexInfo& info = tx.info[size_t(stage)];
        uint32_t header = s.textures[size_t(stage)];
        if (!header) return nullptr;
        TextureDesc d;
        if (!Describe(header, d)) return nullptr;
        tx.desc[size_t(stage)] = d;
        uint32_t data = mem::VirtualFromPhysical(d.data);
        auto tit = targets_.find(TargetKey(data, false));
        if (tit != targets_.end() && tit->second.gw == d.width && tit->second.gh == d.height)
            return BindTargetTexture(s, stage, d, tit->second, tx, rt, ds);
        const FormatInfo& fi = Format(d.format);
        Tex* t = BindGuestTexture(stage, d, fi);
        if (!t) return nullptr;
        info.kind = d.cube ? kTexCube : d.depth > 1 ? kTex3D : kTex2D;
        if (fi.depth) info.shadow = tx.shadow[size_t(stage)] = ShadowDepthKind(d.format);
        if (t->norm && d.cube) info.flags |= kTexNormCube;
        return &t->img;
    }

    Image* BindTargetTexture(const State& s, int stage, const TextureDesc& d, Target& t, DrawTextures& tx, Target* rt,
                             Target* ds) {
        TexInfo& info = tx.info[size_t(stage)];
        if (ds == &t) return nullptr;  // the depth being drawn is not sampled
        bool feedback = rt == &t;
        tx.rt[size_t(stage)] = true;
        if (!t.depth && LatchCpuWrite(t)) {
            Surface su;
            su.header = s.textures[size_t(stage)];
            UploadTarget(t, su);
        }
        info.kind = kTex2D;
        // a pass shrinking it averages each tap over a console texel, else upscaled taps skip texels and ghost
        float k = float(t.w) / t.gw;
        if (!t.depth && k > kUpscaledMin10 / 10.0f && rt && rt != &t && (t.gw > rt->gw || t.gh > rt->gh)) {
            tx.wide[size_t(stage)] = k;
            info.flags |= kTexWide;
        }
        if (t.depth) info.shadow = tx.shadow[size_t(stage)] = ShadowDepthKind(d.format);
        // the console reads the pixels it is about to overwrite: give the draw a copy
        if (feedback) return EnsureFeedbackCopy(t);
        return &t.img;
    }

    bool BindStageTexturesAndTargets(const State& s, DrawTextures& tx, Target* rt, Target* ds) {
        for (int i = 0; i < 4; i++) tx.view[size_t(i)] = BindTexture(s, i, tx, rt, ds);
        return true;
    }

    // ========================================================================
    // shaders and pipelines
    // ========================================================================

    // the sources by their key, as d3d12.cpp's shader_src_ kept them; the module hashes are the keys
    std::unordered_set<uint64_t> shader_src_;

    uint64_t EnsureVertexShader(const State& s, const Assembled& a, const DrawShaders& sh) {
        if (shader_src_.count(sh.vkey)) return sh.vkey;
        std::string src = VertexHlsl(s, a, sh);
        RegisterShaderSource(sh.vkey, sh.quad ? QuadHlsl(std::move(src)) : src, VK_SHADER_STAGE_VERTEX_BIT);
        shader_src_.insert(sh.vkey);
        return sh.vkey;
    }

    uint64_t EnsurePixelShader(const PixelKey& pk) {
        uint64_t key = Hash(&pk, sizeof(pk)) ^ kPixelKeySalt;
        if (shader_src_.count(key)) return key;
        RegisterShaderSource(key, PixelHlsl(pk), VK_SHADER_STAGE_FRAGMENT_BIT);
        shader_src_.insert(key);
        return key;
    }

    void KeyBlend(const State& s, PsoKey& k) {
        k.blend = SimpleState(s, kMBlendEnable) != 0;
        if (k.blend) {
            k.src = SimpleState(s, kMSrcBlend);
            k.dst = SimpleState(s, kMDestBlend);
            k.op = SimpleState(s, kMBlendOp);
        }
        uint32_t cw = SimpleState(s, kMColorWriteEnable);
        // the console's enables are one per byte, A R G B; Vulkan wants bits R G B A
        k.wmask = ((cw >> 16) & 1) | ((cw >> 8) & 1) << 1 | (cw & 1) << 2 | ((cw >> 24) & 1) << 3;
    }

    void KeyDepthStencil(const State& s, const Assembled& a, PsoKey& k, Target* ds) {
        k.zen = s.rs[kRsZEnable] != 0;
        if (k.zen) {
            k.zwrite = SimpleState(s, kMZWriteEnable) != 0;
            k.zfunc = SimpleState(s, kMZFunc);
        }
        k.sten = s.rs[kRsStencilEnable] != 0;
        if (k.sten) {
            k.sfunc = SimpleState(s, kMStencilFunc);
            k.smask = SimpleState(s, kMStencilMask) & 0xFF;
            k.swmask = SimpleState(s, kMStencilWriteMask) & 0xFF;
            k.sfail = s.rs[kRsStencilFail];
            k.szfail = SimpleState(s, kMStencilZFail);
            k.spass = SimpleState(s, kMStencilPass);
        }
        // polygon offset: bias in depth buffer units, the target is always 24 bit; the slope is per console pixel,
        // and an upscaled target's pixels are smaller
        if (a.topology == Topology::Triangles && SimpleState(s, kMSolidOffsetEnable)) {
            k.zbias = int32_t(std::lround(Bits(SimpleState(s, kMDepthOffset)) * kDepth24Max / s.zscale));
            k.zslope = Bits(SimpleState(s, kMSlopeScale)) * (ds ? float(ds->w) / ds->gw : 1.0f);
        }
    }

    void KeyRasterizer(const State& s, const Assembled& a, PsoKey& k) {
        uint32_t cull = s.rs[kRsCullMode];
        k.cull = cull != 0 && a.topology == Topology::Triangles;
        k.ccw = cull == 0x900;  // culling clockwise leaves counter clockwise as the front
        k.fill = s.rs[kRsFillMode];
    }

    void BuildPipelineKey(const State& s, const Assembled& a, uint64_t vh, uint64_t ph, Target* rt, Target* ds,
                          PsoKey& k) {
        std::memset(&k, 0, sizeof(k));
        k.vs = vh;
        k.ps = ph;
        k.regs = a.regs;
        for (int r = 0; r < 16; r++) {
            if ((a.regs >> r) & 1) {
                const VertexElement& e = a.elements[size_t(r)];
                k.elements[r] = e.format | uint32_t(e.buffer) << 8 | uint32_t(e.offset) << 16;
            }
        }
        for (uint32_t i = 0; i < a.buffer_count; i++) k.strides[i] = a.buffers[i].stride;
        k.topo = uint32_t(a.topology) | (a.strip ? 0x100 : 0);
        k.has_rt = rt != nullptr;
        k.has_ds = ds != nullptr;
        k.rtfmt = rt ? uint32_t(rt->fmt) : 0;
        KeyBlend(s, k);
        if (k.has_ds) KeyDepthStencil(s, a, k, ds);
        KeyRasterizer(s, a, k);
    }

    // the draw's constants into the frame's ring, the vertex registers first
    struct ConstUpload {
        VkDeviceSize vs_off = 0, dc_off = 0;
    };
    ConstUpload UploadConstants(const State& s, const DrawShaders& sh, const DrawTextures& tx, GuestSize size) {
        ConstUpload out;
        Frame& f = g_ctx.Current();
        Upload vc = AllocUpload(sizeof(s.vsc), 256);
        if (!vc.buf) return out;
        std::memcpy(vc.cpu, s.vsc.data(), sizeof(s.vsc));
        Upload dc = AllocUpload(sizeof(DrawConstants), 256);
        if (!dc.buf) return out;
        DrawConstants c{};
        FillSurfaceConstants(s, size, c);
        FillCombinerConstants(s, c);
        FillHdrConstants(c);
        std::array<TextureDesc, 4> descs{};
        std::array<bool, 4> rt_stage{};
        std::array<float, 4> wide{};
        for (int i = 0; i < 4; i++) {
            descs[size_t(i)] = tx.desc[size_t(i)];
            rt_stage[size_t(i)] = tx.rt[size_t(i)];
            wide[size_t(i)] = tx.wide[size_t(i)];
        }
        FillTextureConstants(s, descs, rt_stage, wide, c);
        if (sh.fixed_transform) {
            FillTransformConstants(s, size, c);
            FillLightConstants(s, sh.fk, c);
        }
        std::memcpy(dc.cpu, &c, sizeof(c));
        out.vs_off = vc.off;
        out.dc_off = dc.off;
        (void)f;
        return out;
    }

    // ========================================================================
    // descriptor sets by name
    // ========================================================================

    VkSampler GetSampler(const SamplerDesc& d) {
        uint64_t key = Hash(&d, sizeof(d));
        auto it = samplers_.find(key);
        if (it != samplers_.end()) return it->second;
        VkSamplerCreateInfo ci{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
        ci.magFilter = d.mag;
        ci.minFilter = d.min;
        ci.mipmapMode = d.mipmap;
        ci.addressModeU = d.u;
        ci.addressModeV = d.v;
        ci.addressModeW = d.w;
        ci.mipLodBias = d.lod_bias;
        ci.minLod = d.min_lod;
        ci.maxLod = d.max_lod;
        ci.anisotropyEnable = d.aniso > 1;
        ci.maxAnisotropy = float(std::min<uint32_t>(d.aniso, g_ctx.aniso_cap));
        ci.compareEnable = d.compare;
        ci.compareOp = d.compare_op;
        ci.borderColor = VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK;
        VkSampler s = VK_NULL_HANDLE;
        if (!VKCHECK(vkCreateSampler(g_ctx.dev, &ci, nullptr, &s))) return VK_NULL_HANDLE;
        samplers_.emplace(key, s);
        return s;
    }

    Image* EnsureFallbackTexture() {
        if (fallback_) return fallback_;
        fallback_ = new Image;
        std::vector<uint8_t> px(4, 255);
        if (!Record() || !UploadPixels(1, 1, px, 4, *fallback_)) {
            delete fallback_;
            fallback_ = nullptr;
        }
        return fallback_;
    }

    // writes the sets a pipeline's reflection asks for, by the shaders' own names
    struct DrawBind {
        VkDeviceSize vs_off = 0, dc_off = 0;
        VkImageView tex[4] = {};
        VkSampler smp[4] = {};
    };

    void WriteAndBindDraw(const DrawBind& b, const Pipeline& pl) {
        Frame& f = g_ctx.Current();
        for (uint32_t set = 0; set < 4; set++) {
            if (!pl.sets[set]) continue;
            VkDescriptorSet ds = VK_NULL_HANDLE;
            VkDescriptorSetAllocateInfo ai{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
            ai.descriptorPool = f.dpool;
            ai.descriptorSetCount = 1;
            ai.pSetLayouts = &pl.sets[set];
            if (!VKCHECK(vkAllocateDescriptorSets(g_ctx.dev, &ai, &ds))) continue;
            std::vector<VkWriteDescriptorSet> writes;
            std::vector<VkDescriptorBufferInfo> bufs;
            std::vector<VkDescriptorImageInfo> imgs;
            for (const ReflectBinding& rb : pl.bindings) {
                if (rb.set != set) continue;
                VkWriteDescriptorSet w{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
                w.dstSet = ds;
                w.dstBinding = rb.binding;
                w.descriptorCount = rb.count;
                w.descriptorType = rb.type;
                if (rb.type == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) {
                    bufs.push_back(rb.name == "c" ? VkDescriptorBufferInfo{f.upload, b.vs_off, 192 * 16}
                                                  : VkDescriptorBufferInfo{f.upload, b.dc_off, sizeof(DrawConstants)});
                    w.pBufferInfo = &bufs.back();
                } else if (rb.type == VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE) {
                    int idx = rb.name.size() > 3 ? rb.name[3] - '0' : -1;
                    VkImageView view = idx >= 0 && idx < 4 && b.tex[idx] ? b.tex[idx] : fallback_->read;
                    imgs.push_back({VK_NULL_HANDLE, view, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL});
                    w.pImageInfo = &imgs.back();
                } else if (rb.type == VK_DESCRIPTOR_TYPE_SAMPLER) {
                    int idx = rb.name.size() > 3 ? rb.name[3] - '0' : -1;
                    VkSampler s = idx >= 0 && idx < 4 && b.smp[idx] ? b.smp[idx] : point_sampler_;
                    imgs.push_back({s, VK_NULL_HANDLE, VK_IMAGE_LAYOUT_UNDEFINED});
                    w.pImageInfo = &imgs.back();
                } else {
                    continue;
                }
                writes.push_back(w);
            }
            if (!writes.empty()) vkUpdateDescriptorSets(g_ctx.dev, uint32_t(writes.size()), writes.data(), 0, nullptr);
            vkCmdBindDescriptorSets(f.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, pl.layout, set, 1, &ds, 0, nullptr);
        }
    }

    void SetDrawDynamic(const State& s, const PsoKey& k, Target* rt, Target* ds, GuestSize size) {
        Frame& f = g_ctx.Current();
        float W = float(rt ? rt->w : ds->w), H = float(rt ? rt->h : ds->h);
        VkViewport vp{0, 0, W, H, 0, 1};
        vkCmdSetViewport(f.cmd, 0, 1, &vp);
        // the guest viewport is in the shader; the scissor clips to it
        float sc = W / size.w;
        int32_t x0 = int32_t(s.viewport.x * sc), y0 = int32_t(s.viewport.y * sc);
        int32_t x1 = int32_t((s.viewport.x + s.viewport.w) * sc);
        int32_t y1 = int32_t((s.viewport.y + s.viewport.h) * sc);
        if (s.scissor_count) {
            x0 = std::max(x0, int32_t(s.scissors[0] * sc));
            y0 = std::max(y0, int32_t(s.scissors[1] * sc));
            x1 = std::min(x1, int32_t(s.scissors[2] * sc));
            y1 = std::min(y1, int32_t(s.scissors[3] * sc));
        }
        VkRect2D rect = {std::clamp(x0, 0, int32_t(W)), std::clamp(y0, 0, int32_t(H)),
                         uint32_t(std::max(0, std::clamp(x1, 0, int32_t(W)) - std::clamp(x0, 0, int32_t(W)))),
                         uint32_t(std::max(0, std::clamp(y1, 0, int32_t(H)) - std::clamp(y0, 0, int32_t(H))))};
        vkCmdSetScissor(f.cmd, 0, 1, &rect);
        float bf[4];
        Color(SimpleState(s, kMBlendColor), bf);
        vkCmdSetBlendConstants(f.cmd, bf);
        vkCmdSetStencilReference(f.cmd, VK_STENCIL_FACE_FRONT_AND_BACK, SimpleState(s, kMStencilRef) & 0xFF);
        if (k.has_ds && (k.zbias || k.zslope != 0)) vkCmdSetDepthBias(f.cmd, float(k.zbias), 0, k.zslope);
    }

    // __PART5__

    // ========================================================================
    // the full screen pass and the draw
    // ========================================================================

    // draws the source over the target inside the pass already begun, the Windows build's Blit
    void BlitDrawInPass(Image& dst, Image& src, const float (&uv)[4], const BlitOptions& o) {
        Frame& f = g_ctx.Current();
        VkPipeline pipe = BuildBlitPipeline(dst.fmt, o.over);
        if (!pipe) return;
        vkCmdBindPipeline(f.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, pipe);
        // the pass's uniforms and views, by the blit shaders' own names
        Upload cb = AllocUpload(32, 256);
        if (!cb.buf) return;
        float c[8] = {uv[0], uv[1], uv[2], uv[3], o.gamma ? 1.0f : 0.0f, o.alpha ? 1.0f : 0.0f, float(o.taps), o.mul};
        std::memcpy(cb.cpu, c, sizeof(c));
        for (uint32_t set = 0; set < 4; set++) {
            if (!g_blit.sets[set]) continue;
            VkDescriptorSet dset = VK_NULL_HANDLE;
            VkDescriptorSetAllocateInfo ai{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
            ai.descriptorPool = f.dpool;
            ai.descriptorSetCount = 1;
            ai.pSetLayouts = &g_blit.sets[set];
            if (!VKCHECK(vkAllocateDescriptorSets(g_ctx.dev, &ai, &dset))) continue;
            std::vector<VkWriteDescriptorSet> writes;
            std::vector<VkDescriptorBufferInfo> bufs;
            std::vector<VkDescriptorImageInfo> imgs;
            for (const ReflectBinding& rb : g_blit.bindings) {
                if (rb.set != set) continue;
                VkWriteDescriptorSet w{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
                w.dstSet = dset;
                w.dstBinding = rb.binding;
                w.descriptorCount = rb.count;
                w.descriptorType = rb.type;
                if (rb.type == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) {
                    bufs.push_back({cb.buf, cb.off, 32});
                    w.pBufferInfo = &bufs.back();
                } else if (rb.type == VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE) {
                    bool lut = rb.name == "lut";
                    imgs.push_back({VK_NULL_HANDLE, lut ? lut_->read : src.read,
                                    VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL});
                    w.pImageInfo = &imgs.back();
                } else if (rb.type == VK_DESCRIPTOR_TYPE_SAMPLER) {
                    imgs.push_back({rb.name == "ls" ? linear_sampler_ : point_sampler_, VK_NULL_HANDLE,
                                    VK_IMAGE_LAYOUT_UNDEFINED});
                    w.pImageInfo = &imgs.back();
                } else {
                    continue;
                }
                writes.push_back(w);
            }
            if (!writes.empty()) vkUpdateDescriptorSets(g_ctx.dev, uint32_t(writes.size()), writes.data(), 0, nullptr);
            vkCmdBindDescriptorSets(f.cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, g_blit.layout, set, 1, &dset, 0, nullptr);
        }
        vkCmdDraw(f.cmd, 3, 1, 0, 0);
    }

    // a full screen pass over one target: pass begun, blit drawn, pass ended
    void BlitTo(Image& dst, uint32_t w, uint32_t h, Image& src, const float (&uv)[4], const BlitOptions& o) {
        EndPass();
        if (!BeginPass(dst, nullptr, false)) return;
        VkViewport vp{0, 0, float(w), float(h), 0, 1};
        VkRect2D sc{{0, 0}, {w, h}};
        vkCmdSetViewport(g_ctx.Current().cmd, 0, 1, &vp);
        vkCmdSetScissor(g_ctx.Current().cmd, 0, 1, &sc);
        BlitDrawInPass(dst, src, uv, o);
        EndPass();
    }

    // a scratch guest sized image for read backs of upscaled targets
    Image& EnsureScratch(uint32_t w, uint32_t h) {
        uint64_t key = uint64_t(w) << 20 | h;
        auto it = scratch_.find(key);
        if (it != scratch_.end()) return it->second;
        Image img{};
        CreateImage(img, kBgra, w, h, 1, 1, false, false, true, VK_SAMPLE_COUNT_1_BIT);
        return scratch_.emplace(key, img).first->second;
    }

    // ========================================================================
    // the gamma ramp as a 256 x 1 lookup, from the brightness and contrast settings
    // ========================================================================

    bool EnsureGammaLut() {
        if (lut_) return true;
        lut_ = new Image;
        if (!CreateImage(*lut_, kBgra, 256, 1, 1, 1, false, false, false, VK_SAMPLE_COUNT_1_BIT)) {
            delete lut_;
            lut_ = nullptr;
            return false;
        }
        return true;
    }

    void UploadGammaRamp(uint32_t brightness, uint32_t contrast) {
        if ((brightness << 8 | contrast) == ramp_set_) return;
        if (!Record()) return;
        float k = std::exp2((float(contrast) - 50.0f) / 50.0f);
        float g = std::exp2((50.0f - float(brightness)) / 50.0f);
        Upload up = AllocUpload(256 * 4, 256);
        if (!up.buf) return;
        bool identity = true;
        for (int i = 0; i < 256; i++) {
            float x = i / 255.0f;
            float y = x < 0.5f ? 0.5f * std::pow(2.0f * x, k) : 1.0f - 0.5f * std::pow(2.0f - 2.0f * x, k);
            float v = std::pow(y, g);
            uint8_t o = uint8_t(std::lround(std::clamp(v, 0.0f, 1.0f) * 255.0f));
            uint8_t* p = up.cpu + i * 4;
            p[0] = p[1] = p[2] = o;
            p[3] = 255;
            identity &= o == i;
        }
        gamma_ = !identity;
        EndPass();
        Transition(*lut_, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
        UploadImageLevel(*lut_, up.buf, up.off, 0, 0, 256, 1, 1);
        Transition(*lut_, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
        ramp_set_ = brightness << 8 | contrast;
    }

    // the pipelines this executable drew before, built ahead of the first draw that asks
    void WarmPipelines() {
        for (auto& key : cache::TakePipelineKeys()) {
            if (key.size() != sizeof(PsoKey)) continue;
            PsoKey k;
            std::memcpy(&k, key.data(), sizeof(k));
            Pipeline* pipe = nullptr;
            bool pending = false;
            EnsurePipeline(k, false, &pipe, pending);
        }
    }

    void ReleaseOldTextures() {
        constexpr uint64_t kSweepEvery = 60;    // presents between sweeps
        constexpr size_t kTexturesKept = 2048;  // no sweep below this many
        constexpr uint64_t kIdleFrames = 600;
        // textures unused for ten seconds go, levels stream theirs in and out
        if (g_ctx.presents % kSweepEvery != 0 || textures_.size() <= kTexturesKept) return;
        for (auto it = textures_.begin(); it != textures_.end();) {
            if (it->second.frame + kIdleFrames < g_ctx.presents) {
                g_ctx.Current().garbage_img.push_back(new Image(std::move(it->second.img)));
                it = textures_.erase(it);
            } else {
                ++it;
            }
        }
    }

    // ========================================================================
    // Backend
    // ========================================================================

    void Draw(const State& s, uint32_t prim, uint32_t start, uint32_t count, const uint8_t* indices) override {
        std::lock_guard lock(draw_lock_);
        if (!Record()) return;
        Assembled a;
        if (!Assemble(s, prim, start, count, indices, a)) return;
        // a versus level's first frame draws everything once (thousands of draws, over 64 MB): past the ring every
        // upload was a buffer of its own, seconds of creating and then freeing them
        if (g_ctx.Current().used > kUploadSize - kUploadReserve) {
            EndPass();
            if (!SubmitFrame(true)) return;
        }

        // targets: the scene's colour and its depth, or the target a pass draws into
        Target* rt = EnsureTarget(s.rt, false);
        Target* ds = s.rs[kRsZEnable] || s.rs[kRsStencilEnable] ? EnsureTarget(s.zs, true) : nullptr;
        if (rt && ds && (rt->w != ds->w || rt->h != ds->h)) ds = nullptr;
        if (!rt && !ds) return;
        if (rt && LatchCpuWrite(*rt)) UploadTarget(*rt, s.rt);
        EndPass();

        // vertex shader
        DrawShaders sh = ClassifyShaders(s, a, count);
        if (sh.prog) EnsureProgramHash(s);
        sh.vkey = VertexKey(s, a, sh);
        uint64_t vh = EnsureVertexShader(s, a, sh);

        // stage textures, then the pixel shader made for them
        DrawTextures tx;
        BindStageTexturesAndTargets(s, tx, rt, ds);
        PixelKey pk = MakePixelKey(s, tx.info);
        pk.quad = sh.quad;
        uint64_t ph = EnsurePixelShader(pk);

        // pipeline
        PsoKey k;
        BuildPipelineKey(s, a, vh, ph, rt, ds, k);
        Pipeline* pipe = nullptr;
        bool pending = false;
        // a quad is a picture or a pass over the screen: left out it shows what lies under it, so it waits for its
        // pipeline; other draws skip until the build threads have theirs
        if (!EnsurePipeline(k, count <= kQuadVertices, &pipe, pending) || !pipe) return;

        // the pass and the draw
        if (rt && !BeginPass(rt->img, ds, false)) return;
        GuestSize size;
        SurfaceSize(rt ? s.rt : s.zs, size.w, size.h);
        ConstUpload cu = UploadConstants(s, sh, tx, size);
        DrawBind bind;
        bind.vs_off = cu.vs_off;
        bind.dc_off = cu.dc_off;
        for (int i = 0; i < 4; i++) bind.tex[i] = tx.view[i] ? tx.view[i]->read : nullptr;
        std::array<uint8_t, 4> shadows{};
        for (int i = 0; i < 4; i++) shadows[size_t(i)] = tx.shadow[i];
        uint32_t aniso_setting = app::Get().aniso;
        for (int i = 0; i < 4; i++) {
            if (!s.textures[size_t(i)]) continue;
            bind.smp[i] = GetSampler(StageSampler(s, i, shadows, aniso_setting, g_ctx.sampled_depth24));
        }
        WriteAndBindDraw(bind, *pipe);
        SetDrawDynamic(s, k, rt, ds, size);
        cache::StorePipeline(Hash(&k, sizeof(k)), &k, sizeof(k));

        // geometry
        DrawGeometry(a);
    }

    void DrawGeometry(const Assembled& a) {
        Frame& f = g_ctx.Current();
        std::array<VkBuffer, 16> bufs{};
        std::array<VkDeviceSize, 16> offs{};
        uint32_t bind_count = a.buffer_count;
        for (uint32_t r = 0; r < 16; r++) {
            if (!((a.regs >> r) & 1)) continue;
            bind_count = std::max<uint32_t>(bind_count, uint32_t(a.elements[r].buffer) + 1);
        }
        Upload zero;
        for (uint32_t i = 0; i < bind_count; i++) {
            const VertexBuffer* b = i < a.buffer_count ? &a.buffers[i] : nullptr;
            if (!b || !b->src || !b->bytes) {
                if (!zero.buf) {
                    zero = AllocUpload(64, 16);
                    if (!zero.buf) return;
                    std::memset(zero.cpu, 0, 64);
                }
                bufs[i] = zero.buf;
                offs[i] = zero.off;
                continue;
            }
            Upload vb = AllocUpload(b->bytes, 16);
            if (!vb.buf) return;
            std::memcpy(vb.cpu, b->src, b->bytes);
            bufs[i] = vb.buf;
            offs[i] = vb.off;
        }
        if (bind_count) vkCmdBindVertexBuffers(f.cmd, 0, bind_count, bufs.data(), offs.data());
        if (a.index_count) {
            uint32_t ibytes = a.index_count * (a.index16 ? 2 : 4);
            Upload ib = AllocUpload(ibytes, 4);
            if (!ib.buf) return;
            std::memcpy(ib.cpu, a.index_src, ibytes);
            vkCmdBindIndexBuffer(f.cmd, ib.buf, ib.off, a.index16 ? VK_INDEX_TYPE_UINT16 : VK_INDEX_TYPE_UINT32);
            vkCmdDrawIndexed(f.cmd, a.index_count, 1, 0, a.base_vertex, 0);
        } else {
            vkCmdDraw(f.cmd, a.draw_count, 1, 0, 0);
        }
    }

    // CopyRects: the guest's rect list, on the GPU between targets, scaled like the console's copies
    void Copy(const Surface& src, const Surface& dst, uint32_t count, uint32_t src_rects_va,
              uint32_t dst_points_va) override {
        std::lock_guard lock(draw_lock_);
        if (!Record()) return;
        Target* st = EnsureTarget(src, false);
        Target* dt = EnsureTarget(dst, false);
        if (!st || !dt) {
            LOG_FIRST(4, "vulkan: CopyRects without targets between %08X and %08X", src.data, dst.data);
            return;
        }
        EndPass();
        for (uint32_t i = 0; i < std::max(count, 1u); i++) {
            int32_t sr[4] = {0, 0, int32_t(st->gw), int32_t(st->gh)};
            int32_t dp[2] = {0, 0};
            if (count && src_rects_va) std::memcpy(sr, kernel::HostPtr(src_rects_va + i * 16), 16);
            if (count && dst_points_va) std::memcpy(dp, kernel::HostPtr(dst_points_va + i * 8), 8);
            int32_t w = std::max<int32_t>(0, sr[2] - sr[0]), h = std::max<int32_t>(0, sr[3] - sr[1]);
            if (!w || !h) continue;
            Transition(st->img, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
            if (st->w == st->gw && dt->w == dt->gw && st->fmt == dt->fmt) {
                // one to one: a plain copy
                Transition(dt->img, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
                VkImageCopy region{};
                region.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
                region.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
                region.srcOffset = {std::clamp(sr[0], 0, int32_t(st->gw)), std::clamp(sr[1], 0, int32_t(st->gh)), 0};
                region.dstOffset = {std::clamp(dp[0], 0, int32_t(dt->gw)), std::clamp(dp[1], 0, int32_t(dt->gh)), 0};
                region.extent = {uint32_t(std::min<uint32_t>(w, st->gw - region.srcOffset.x)),
                                 uint32_t(std::min<uint32_t>(h, st->gh - region.srcOffset.y)), 1};
                vkCmdCopyImage(g_ctx.Current().cmd, st->img.image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, dt->img.image,
                               VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &region);
            } else {
                // scaled: the blit, one tap per console pixel
                float uv[4] = {float(sr[0]) / st->gw, float(sr[1]) / st->gh, float(w) / st->gw, float(h) / st->gh};
                float sc = float(dt->w) / dt->gw;
                float vw = w * sc, vh = h * sc;
                if (!BeginPass(dt->img, nullptr, false)) return;
                VkViewport vp{dp[0] * sc, dp[1] * sc, vw, vh, 0, 1};
                VkRect2D scissor{{0, 0}, {dt->w, dt->h}};
                vkCmdSetViewport(g_ctx.Current().cmd, 0, 1, &vp);
                vkCmdSetScissor(g_ctx.Current().cmd, 0, 1, &scissor);
                BlitDrawInPass(dt->img, st->img, uv, {.alpha = true});
                EndPass();
            }
        }
        Transition(st->img, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL);
        Transition(dt->img, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL);
        dt->drawn = true;
    }

    void Present(const Surface& front, bool pillarbox) override {
        std::lock_guard lock(draw_lock_);
        if (!Record()) return;
        const app::Settings& set = app::Get();
        UploadGammaRamp(set.brightness, set.contrast);
        Target* t = EnsureTarget(front, false);
        if (t && LatchCpuWrite(*t)) UploadTarget(*t, front);
        if (!AcquireNextImage()) return;
        Image& swap = g_ctx.swap_targets[g_ctx.swap_index];
        // the frame on the panel: the target through the gamma lookup, 4:3 in the middle when pillarbox says so
        if (!BeginPass(swap, nullptr, true)) return;
        if (t) {
            float aspect = app::Aspect();
            float w = float(g_ctx.bb_w), h = float(g_ctx.bb_h);
            float vw = std::min(w, h * aspect), vh = vw / aspect;
            if (pillarbox) vw = vh * 4.0f / 3.0f;
            VkViewport vp{(w - vw) / 2, (h - vh) / 2, vw, vh, 0, 1};
            VkRect2D sc{{0, 0}, {g_ctx.bb_w, g_ctx.bb_h}};
            vkCmdSetViewport(g_ctx.Current().cmd, 0, 1, &vp);
            vkCmdSetScissor(g_ctx.Current().cmd, 0, 1, &sc);
            BlitDrawInPass(swap, t->img, {0, 0, 1, 1}, {.gamma = gamma_});
        }
        EndPass();
        PresentSwapchain(pillarbox);
        recording_ = false;
        ReleaseOldTextures();
    }

    // the CPU reads a surface the GPU drew: bring the pixels back
    void Sync(uint32_t data, uint32_t) override {
        std::lock_guard lock(draw_lock_);
        auto it = targets_.find(TargetKey(data, false));
        if (it == targets_.end() || !it->second.drawn) return;
        Target& t = it->second;
        EndPass();
        std::vector<uint8_t> px;
        if (t.w == t.gw && t.h == t.gh) {
            if (!ReadBackImage(t.img, t.gw, t.gh, px)) return;
        } else {
            // shrunk into a guest sized copy first, one tap per console pixel
            Image& down = EnsureScratch(t.gw, t.gh);
            BlitTo(down, t.gw, t.gh, t.img, {0, 0, 1, 1}, {.alpha = true});
            if (!ReadBackImage(down, t.gw, t.gh, px)) return;
        }
        uint32_t pitch = GuestPitch(t.gw);
        uint8_t* guest = static_cast<uint8_t*>(kernel::HostPtr(data));
        for (uint32_t y = 0; y < t.gh; y++) std::memcpy(guest + size_t(y) * pitch, &px[size_t(y) * t.gw * 4], t.gw * 4);
        t.read = std::move(px);
        t.drawn = false;
        t.sig = MemSig(t.data, t.bytes);
    }

    // A NOOVERWRITE lock: the console reads whatever the GPU has finished, so a surface locked every frame gets the
    // newest finished copy (a frame or two old) and the CPU never waits on the GPU
    void SyncLate(uint32_t data) override {
        if (!DeliverLate(data)) Sync(data, 0);
        RecordLate(data);
    }

    bool DeliverLate(uint32_t data) override {
        std::lock_guard lock(late_lock_);
        auto it = late_.find(data);
        if (it == late_.end()) return false;
        Late& l = it->second;
        uint64_t done = CompletedFence();
        uint64_t now = g_ctx.presents;
        int best = -1;
        for (int i = 0; i < 2; i++) {
            bool finished = l.slots[i].fence && l.slots[i].fence <= done;
            bool recent = now - l.slots[i].frame <= uint64_t(kFrames) + 1;
            bool newest = best < 0 || l.slots[i].fence > l.slots[best].fence;
            if (finished && recent && newest) best = i;
        }
        if (best < 0) return false;
        if (l.slots[best].fence > l.delivered && l.slots[best].block && l.slots[best].block->map) {
            uint32_t pitch = GuestPitch(l.gw);
            uint8_t* dst = static_cast<uint8_t*>(kernel::HostPtr(data));
            const uint8_t* p = l.slots[best].block->map + l.slots[best].off;
            for (uint32_t y = 0; y < l.gh; y++) std::memcpy(dst + size_t(y) * pitch, p + size_t(y) * pitch, l.gw * 4);
            l.delivered = l.slots[best].fence;
        }
        return true;
    }

    // a copy for a later lock, recorded in order with the draws
    void RecordLate(uint32_t data) override {
        std::lock_guard lock(draw_lock_);
        if (!Record()) return;
        auto it = targets_.find(TargetKey(data, false));
        if (it == targets_.end()) return;
        Target& t = it->second;
        // what DeliverLate or Sync left in guest memory is no CPU write to upload back
        t.sig = MemSig(t.data, t.bytes);
        t.read.clear();
        std::lock_guard llock(late_lock_);
        Late& l = late_[data];
        if (l.gw != t.gw || l.gh != t.gh) {
            ResetLate(l);
            l.gw = t.gw;
            l.gh = t.gh;
        }
        uint32_t slot = l.next;
        if (l.slots[slot].fence && l.slots[slot].fence > CompletedFence()) return;  // a whole ring behind
        Image* src = &t.img;
        if (t.w != t.gw || t.h != t.gh) {
            Image& down = EnsureScratch(t.gw, t.gh);
            BlitTo(down, t.gw, t.gh, t.img, {0, 0, 1, 1}, {.alpha = true});
            src = &down;
        }
        if (!l.slots[slot].buf) {
            uint64_t bytes = uint64_t(t.gw) * 4 * t.gh;
            if (!MakeBuffer(bytes, VK_BUFFER_USAGE_TRANSFER_DST_BIT, &l.slots[slot].block, &l.slots[slot].off,
                            &l.slots[slot].buf, true))
                return;
            l.slots[slot].bytes = bytes;
        }
        EndPass();
        Transition(*src, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
        VkBufferImageCopy region{};
        region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
        region.imageExtent = {t.gw, t.gh, 1};
        vkCmdCopyImageToBuffer(g_ctx.Current().cmd, src->image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                               l.slots[slot].buf, 1, &region);
        l.slots[slot].fence = g_ctx.fence_value + 1;  // the next submit carries it
        l.slots[slot].frame = g_ctx.presents;
        l.next = (slot + 1) % 2;
    }

    void Flush() override {
        std::lock_guard lock(draw_lock_);
        if (!Record()) return;
        EndPass();
        SubmitFrame(true);
    }

    // the game's ramp is Shadow Calibration's, which can only brighten, the brightness and contrast settings replace it
    void SetGamma(const uint8_t*) override {}

    // screen space ambient occlusion and the shader model 3 soft shadows stay the console look's defaults
    void Occlusion(const State&, const float[kOcclusionParams]) override {
        LOG_FIRST(64, "vulkan: Occlusion is not implemented, the ambient occlusion setting stays off");
    }
    void FilterShadows(const State&, const float[kShadowFilterParams]) override {
        LOG_FIRST(64, "vulkan: FilterShadows is not implemented, the shadow filter setting stays at the console's");
    }
    void ApplyShadows(const State&) override {}

    // the XDK's fences and busy checks against the render thread; a backend that draws at once is never behind
    uint32_t Fence() override { return uint32_t(g_ctx.fence_value + 1); }
    bool FencePending(uint32_t fence) override { return uint64_t(fence) > CompletedFence(); }
    void WaitFence(uint32_t fence) override { WaitFenceValue(fence); }
    bool Busy(uint32_t) override { return false; }
    void WaitResource(uint32_t) override {}

    // until the GPU has drawn present number n, counted from 0; any thread
    void WaitGpuFrame(uint64_t n) override {
        if (n < g_ctx.present_fence.size()) WaitFenceValue(g_ctx.present_fence[n].load());
    }

private:
    struct Late;  // defined with the members below
    // fences completed so far, without a wait: the late copies' freshness check
    uint64_t CompletedFence() {
        uint64_t done = g_ctx.done_value;
        for (auto& f : g_ctx.frames)
            if (vkGetFenceStatus(g_ctx.dev, f.fence) == VK_SUCCESS) done = std::max(done, f.fence_value);
        return done;
    }

    void ResetLate(Late& l) {
        for (auto& s : l.slots) {
            if (s.buf) vkDestroyBuffer(g_ctx.dev, s.buf, nullptr);
            if (s.block) Subfree(s.block, s.off, s.bytes);
        }
        l = Late{};
    }

    uint32_t guest_w_ = 640, guest_h_ = 480;
    float scale_ = 1.0f;
    uint32_t shadow_res_ = kConsoleShadows;
    bool recording_ = false;
    bool gamma_ = false;
    uint32_t ramp_set_ = 0xFFFFFFFF;
    std::recursive_mutex draw_lock_;   // the render thread's calls, in order
    std::mutex late_lock_;             // the late copies, the game thread reads them too
    std::unordered_map<uint64_t, Target> targets_;
    std::unordered_map<uint32_t, Tex> textures_;
    std::unordered_map<uint64_t, VkSampler> samplers_;
    std::unordered_map<uint64_t, Image> scratch_;  // guest sized read back copies, by w << 20 | h
    struct LateSlot {
        VkBuffer buf = VK_NULL_HANDLE;
        MemBlock* block = nullptr;
        VkDeviceSize off = 0, bytes = 0;
        uint64_t fence = 0, frame = 0;
    };
    struct Late {
        uint32_t gw = 0, gh = 0;
        LateSlot slots[2];
        uint32_t next = 0;
        uint64_t delivered = 0;
    };
    std::unordered_map<uint32_t, Late> late_;
    Image* pass_color_ = nullptr;  // the render pass in progress
    Target* pass_ds_ = nullptr;
    Image* fallback_ = nullptr;  // a 1x1 white texture for the stages the draw leaves empty
    Image* lut_ = nullptr;       // the gamma lookup
    VkSampler linear_sampler_ = VK_NULL_HANDLE, point_sampler_ = VK_NULL_HANDLE;
};

}  // namespace gpu::vk

namespace gpu {

std::unique_ptr<Backend> CreateBackend() { return std::make_unique<vk::VulkanBackend>(); }

}  // namespace gpu
