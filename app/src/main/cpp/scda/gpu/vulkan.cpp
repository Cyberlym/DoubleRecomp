// The Vulkan backend implementing gpu::Backend for the SCDA port.
// Uses the shared Vulkan device, swapchain, shader and pipeline infrastructure.
#include <vulkan/vulkan.h>
#include "vulkan_internal.h"

#include <SDL3/SDL.h>
#include <SDL3/SDL_vulkan.h>

#include <algorithm>
#include <array>
#include <cstring>
#include <memory>
#include <mutex>
#include <unordered_map>
#include <vector>

#include "app/app.h"
#include "core/log.h"
#include "gpu/backend.h"
#include "gpu/shaders.h"
#include "gpu/state.h"
#include "gpu/texture.h"
#include "gpu/vertex.h"
#include "kernel/kernel.h"

namespace gpu::vk {

namespace {

// Bring parent namespace functions/types into scope
using ::gpu::DirtyEpoch;
using ::gpu::Describe;
using ::gpu::Format;
using ::gpu::DecodeLevel;
using ::gpu::DescribeSurface;
using ::gpu::DrawConstants;
using ::gpu::TextureDesc;
using ::gpu::Surface;
using ::gpu::FormatInfo;
using ::gpu::Assembled;
using ::gpu::State;
// kMStencilFail doesn't exist in simple states; use ::gpu::kRsStencilFail from complex render states

// ============================================================================
// Sampler cache (created once, destroyed at shutdown)
// ============================================================================

struct SamplerKey {
    VkFilter mag, min;
    VkSamplerMipmapMode mip;
    VkSamplerAddressMode addr_u, addr_v, addr_w;
    float lod_bias;
    float max_aniso;
    VkBorderColor border_color;
    bool anisotropy;
    bool compare;
    VkCompareOp compare_op;

    bool operator==(const SamplerKey& o) const {
        return mag == o.mag && min == o.min && mip == o.mip &&
               addr_u == o.addr_u && addr_v == o.addr_v && addr_w == o.addr_w &&
               lod_bias == o.lod_bias && max_aniso == o.max_aniso &&
               border_color == o.border_color && anisotropy == o.anisotropy &&
               compare == o.compare && compare_op == o.compare_op;
    }
};

struct SamplerKeyHash {
    size_t operator()(const SamplerKey& k) const noexcept {
        size_t h = 0;
        auto mix = [&](uint64_t v) { h ^= v + 0x9e3779b97f4a7c15ull + (h << 6) + (h >> 2); };
        mix(k.mag); mix(k.min); mix(k.mip);
        mix(k.addr_u); mix(k.addr_v); mix(k.addr_w);
        mix(*reinterpret_cast<const uint32_t*>(&k.lod_bias));
        mix(*reinterpret_cast<const uint32_t*>(&k.max_aniso));
        mix(k.border_color);
        mix(k.anisotropy); mix(k.compare); mix(k.compare_op);
        return h;
    }
};

std::unordered_map<SamplerKey, VkSampler, SamplerKeyHash> g_sampler_cache;
std::mutex g_sampler_cache_mutex;

VkSampler GetOrCreateSampler(const SamplerKey& key) {
    std::lock_guard lock(g_sampler_cache_mutex);
    auto it = g_sampler_cache.find(key);
    if (it != g_sampler_cache.end()) return it->second;

    VkSamplerCreateInfo sc{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO};
    sc.magFilter = key.mag;
    sc.minFilter = key.min;
    sc.mipmapMode = key.mip;
    sc.addressModeU = key.addr_u;
    sc.addressModeV = key.addr_v;
    sc.addressModeW = key.addr_w;
    sc.mipLodBias = key.lod_bias;
    sc.maxAnisotropy = key.max_aniso;
    sc.anisotropyEnable = key.anisotropy;
    sc.compareEnable = key.compare;
    sc.compareOp = key.compare_op;
    sc.minLod = 0;
    sc.maxLod = VK_LOD_CLAMP_NONE;
    sc.borderColor = key.border_color;

    VkSampler sampler = VK_NULL_HANDLE;
    if (vkCreateSampler(g_ctx.dev, &sc, nullptr, &sampler) == VK_SUCCESS) {
        g_sampler_cache.emplace(key, sampler);
    }
    return sampler;
}

void DestroySamplerCache() {
    std::lock_guard lock(g_sampler_cache_mutex);
    for (auto& [k, s] : g_sampler_cache) {
        if (s) vkDestroySampler(g_ctx.dev, s, nullptr);
    }
    g_sampler_cache.clear();
}

// Xbox border color to Vulkan border color (3 fixed colors, log if not exact)
VkBorderColor XboxBorderColor(uint32_t xbox_bc) {
    float r = (xbox_bc >> 16 & 0xFF) / 255.0f;
    float g = (xbox_bc >> 8 & 0xFF) / 255.0f;
    float b = (xbox_bc & 0xFF) / 255.0f;
    float a = (xbox_bc >> 24 & 0xFF) / 255.0f;

    if (r == 0 && g == 0 && b == 0 && a == 0) return VK_BORDER_COLOR_FLOAT_TRANSPARENT_BLACK;
    if (r == 1 && g == 1 && b == 1 && a == 1) return VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE;
    if (r == 0 && g == 0 && b == 0 && a == 1) return VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK;

    LOGW("vulkan: Xbox border color %.2f %.2f %.2f %.2f not exactly representable, using OPAQUE_BLACK", r, g, b, a);
    return VK_BORDER_COLOR_FLOAT_OPAQUE_BLACK;
}

// ============================================================================
// Texture cache (keyed by guest data address)
// ============================================================================

struct TextureCacheEntry {
    Image img;
    TextureDesc desc;
    uint64_t epoch = 0;
    bool is_fallback = false;
};

std::unordered_map<uint32_t, TextureCacheEntry> g_texture_cache;
std::mutex g_texture_cache_mutex;
Image g_fallback_texture;

bool EnsureFallbackTexture() {
    if (g_fallback_texture.image) return true;
    
    uint32_t white = 0xFFFFFFFF;
    if (!CreateImage(g_fallback_texture, kBgra, 1, 1, 1, 1, false, false, false, VK_SAMPLE_COUNT_1_BIT)) {
        return false;
    }
    Upload up = AllocUpload(4, 4);
    if (!up.cpu) return false;
    std::memcpy(up.cpu, &white, 4);
    if (!EndWaitReopen()) return false;
    Transition(g_fallback_texture, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
    return true;
}

VkImageView GetTextureView(uint32_t data_va, uint32_t format) {
    std::lock_guard lock(g_texture_cache_mutex);
    
    auto it = g_texture_cache.find(data_va);
    if (it != g_texture_cache.end()) {
        TextureCacheEntry& entry = it->second;
        
        uint64_t dirty = DirtyEpoch(data_va);
        if (dirty && dirty != entry.epoch) {
            DestroyImage(entry.img);
            entry.img = Image{};
            entry.epoch = 0;
        } else if (entry.img.image && entry.img.read) {
            return entry.img.read;
        }
    }
    
    TextureDesc td;
    if (!Describe(data_va, td)) {
        if (!EnsureFallbackTexture()) return VK_NULL_HANDLE;
        return g_fallback_texture.read;
    }
    
    TextureCacheEntry& entry = g_texture_cache[data_va];
    entry.desc = td;
    
    if (!entry.img.image) {
        const FormatInfo& fi = Format(td.format);
        VkFormat vk_fmt = kBgra;
        bool is_compressed = fi.compressed;
        bool is_depth = fi.depth;
        
        if (is_compressed) {
            if (!g_ctx.bc_support[0] && td.format == 0x0C) vk_fmt = kBgra;
            else if (!g_ctx.bc_support[1] && td.format == 0x0E) vk_fmt = kBgra;
            else if (!g_ctx.bc_support[2] && td.format == 0x0F) vk_fmt = kBgra;
            else {
                switch (td.format) {
                    case 0x0C: vk_fmt = VK_FORMAT_BC1_RGBA_UNORM_BLOCK; break;
                    case 0x0E: vk_fmt = VK_FORMAT_BC2_UNORM_BLOCK; break;
                    case 0x0F: vk_fmt = VK_FORMAT_BC3_UNORM_BLOCK; break;
                }
            }
        } else if (is_depth) {
            vk_fmt = VK_FORMAT_R32_SFLOAT;
        }
        
        if (!CreateImage(entry.img, vk_fmt, td.width, td.height, td.levels, td.cube ? 6 : 1, td.cube, 
                         false, false, VK_SAMPLE_COUNT_1_BIT)) {
            if (!EnsureFallbackTexture()) return VK_NULL_HANDLE;
            return g_fallback_texture.read;
        }
    }
    
    uint64_t dirty = DirtyEpoch(data_va);
    if (dirty && dirty != entry.epoch) {
        for (uint32_t level = 0; level < td.levels; level++) {
            for (uint32_t face = 0; face < (td.cube ? 6 : 1); face++) {
                std::vector<uint8_t> decoded;
                uint32_t row_pitch;
                const uint8_t* guest = static_cast<const uint8_t*>(kernel::HostPtr(td.data));
                const uint32_t* palette = td.format == 0x0B ? 
                    static_cast<const uint32_t*>(kernel::HostPtr(td.data + td.pitch * td.height)) : nullptr;
                DecodeLevel(td, level, face, guest, palette, decoded, row_pitch);
                
                VkBufferImageCopy region{};
                region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, level, face, 1};
                region.imageExtent = {
                    std::max<uint32_t>(td.width >> level, 1),
                    std::max<uint32_t>(td.height >> level, 1),
                    1
                };
                region.bufferRowLength = row_pitch / 4;
                region.bufferImageHeight = std::max<uint32_t>(td.height >> level, 1);
                
                Upload up = AllocUpload(decoded.size(), 16);
                if (!up.cpu) continue;
                std::memcpy(up.cpu, decoded.data(), decoded.size());
                
                Transition(entry.img, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
                vkCmdCopyBufferToImage(g_ctx.Current().cmd, up.buf, entry.img.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &region);
            }
        }
        entry.epoch = dirty ? dirty : g_ctx.fence_value + 1;
    }
    
    Transition(entry.img, VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL);
    return entry.img.read ? entry.img.read : (EnsureFallbackTexture() ? g_fallback_texture.read : VK_NULL_HANDLE);
}

// ============================================================================
// Render target cache (keyed by surface data address)
// ============================================================================

struct TargetCacheEntry {
    Image img;
    Image resolve;
    uint32_t gw = 0, gh = 0;
    uint32_t data = 0;
    VkFormat fmt = kBgra;
    bool depth = false;
    VkSampleCountFlagBits samples = VK_SAMPLE_COUNT_1_BIT;
    bool drawn = false;
};

std::unordered_map<uint32_t, TargetCacheEntry> g_target_cache;
std::mutex g_target_cache_mutex;

TargetCacheEntry* GetRenderTarget(const Surface& s, bool is_depth) {
    if (!s.header || !s.data) return nullptr;
    
    std::lock_guard lock(g_target_cache_mutex);
    uint32_t key = s.data;
    auto it = g_target_cache.find(key);
    
    TextureDesc td;
    if (!DescribeSurface(s, td)) return nullptr;
    
    if (it == g_target_cache.end()) {
        TargetCacheEntry& entry = g_target_cache[key];
        entry.gw = td.width;
        entry.gh = td.height;
        entry.data = s.data;
        entry.depth = is_depth;
        
        if (is_depth) {
            entry.fmt = g_ctx.depth_fmt;
            entry.samples = VK_SAMPLE_COUNT_1_BIT;
            if (!CreateImage(entry.img, entry.fmt, td.width, td.height, 1, 1, false, true, true, entry.samples)) {
                return nullptr;
            }
        } else {
            entry.fmt = kBgra;
            entry.samples = VK_SAMPLE_COUNT_1_BIT;
            if (!CreateImage(entry.img, entry.fmt, td.width, td.height, 1, 1, false, false, true, entry.samples)) {
                return nullptr;
            }
        }
        return &entry;
    }
    
    TargetCacheEntry& entry = it->second;
    if (entry.gw != td.width || entry.gh != td.height) {
        DestroyImage(entry.img);
        if (entry.resolve.image) DestroyImage(entry.resolve);
        entry.gw = td.width;
        entry.gh = td.height;
        entry.samples = VK_SAMPLE_COUNT_1_BIT;
        if (is_depth) {
            entry.fmt = g_ctx.depth_fmt;
            if (!CreateImage(entry.img, entry.fmt, td.width, td.height, 1, 1, false, true, true, entry.samples)) {
                return nullptr;
            }
        } else {
            entry.fmt = kBgra;
            if (!CreateImage(entry.img, entry.fmt, td.width, td.height, 1, 1, false, false, true, entry.samples)) {
                return nullptr;
            }
        }
    }
    return &entry;
}

// ============================================================================
// Convert D3D primitive type to Vulkan topology and index list handling
// ============================================================================

VkPrimitiveTopology PrimTopology(uint32_t prim) {
    switch (prim) {
        case 1: return VK_PRIMITIVE_TOPOLOGY_POINT_LIST;
        case 2: return VK_PRIMITIVE_TOPOLOGY_LINE_LIST;
        case 3: return VK_PRIMITIVE_TOPOLOGY_LINE_STRIP;
        case 4: return VK_PRIMITIVE_TOPOLOGY_LINE_STRIP;
        case 5: return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
        case 6: return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP;
        case 7: return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
        case 8: return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
        case 9: return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
        case 10: return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
        default: return VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    }
}

bool NeedsIndexList(uint32_t prim) {
    return prim == 3 || prim == 7 || prim == 8 || prim == 9 || prim == 10;
}

uint32_t IndexCountForPrim(uint32_t prim, uint32_t count) {
    switch (prim) {
        case 1: return count;
        case 2: return (count / 2) * 2;
        case 3: return count > 2 ? count * 2 : 0;
        case 4: return count > 1 ? (count - 1) * 2 : 0;
        case 5: return (count / 3) * 3;
        case 6: return count > 2 ? (count - 2) * 3 : 0;
        case 7: return count > 2 ? (count - 2) * 3 : 0;
        case 8: return (count / 4) * 6;
        case 9: return count > 3 ? (count - 2) * 3 : 0;
        case 10: return count > 2 ? (count - 2) * 3 : 0;
        default: return 0;
    }
}

// ============================================================================
// Build index buffer for converted primitives
// ============================================================================

VkBuffer BuildIndexBuffer(Frame& f, const uint16_t* indices, uint32_t count, VkDeviceSize& out_off) {
    VkDeviceSize size = uint64_t(count) * 2;
    Upload up = AllocUpload(size, 2);
    if (!up.cpu) return VK_NULL_HANDLE;
    std::memcpy(up.cpu, indices, size_t(size));
    out_off = up.off;
    return up.buf;
}

VkBuffer BuildConvertedIndexBuffer(Frame& f, uint32_t prim, uint32_t count, VkDeviceSize& out_off) {
    uint32_t icount = IndexCountForPrim(prim, count);
    if (!icount) return VK_NULL_HANDLE;
    
    std::vector<uint16_t> indices(icount);
    uint32_t idx = 0;
    
    switch (prim) {
        case 3:  // line loop
            for (uint32_t i = 0; i + 1 < count; i++) {
                indices[idx++] = i;
                indices[idx++] = i + 1;
            }
            if (count > 2) { indices[idx++] = count - 1; indices[idx++] = 0; }
            break;
        case 7:  // fan
            for (uint32_t i = 1; i + 1 < count; i++) {
                indices[idx++] = 0; indices[idx++] = i; indices[idx++] = i + 1;
            }
            break;
        case 8:  // quad list
            for (uint32_t i = 0; i + 3 < count; i += 4) {
                indices[idx++] = i; indices[idx++] = i + 1; indices[idx++] = i + 2;
                indices[idx++] = i; indices[idx++] = i + 2; indices[idx++] = i + 3;
            }
            break;
        case 9:  // quad strip
            for (uint32_t i = 0; i + 3 < count; i += 2) {
                indices[idx++] = i; indices[idx++] = i + 1; indices[idx++] = i + 2;
                indices[idx++] = i + 1; indices[idx++] = i + 3; indices[idx++] = i + 2;
            }
            break;
        case 10: // polygon
            for (uint32_t i = 1; i + 1 < count; i++) {
                indices[idx++] = 0; indices[idx++] = i; indices[idx++] = i + 1;
            }
            break;
    }
    
    VkDeviceSize size = uint64_t(idx) * 2;
    Upload up = AllocUpload(size, 2);
    if (!up.cpu) return VK_NULL_HANDLE;
    std::memcpy(up.cpu, indices.data(), size_t(size));
    out_off = up.off;
    return up.buf;
}

// ============================================================================
// Update vertex buffers from assembled draw
// ============================================================================

struct BoundResources {
    struct Vb { VkBuffer buf = VK_NULL_HANDLE; VkDeviceSize off = 0; uint32_t stride = 0; };
    std::array<Vb, 16> vbs{};
    uint32_t vb_count = 0;
    
    VkBuffer ib = VK_NULL_HANDLE;
    VkDeviceSize ib_off = 0;
    bool ib_16 = true;
    int32_t base_vertex = 0;
    
    VkBuffer vs_cb = VK_NULL_HANDLE;
    VkDeviceSize vs_cb_off = 0;
    VkBuffer ps_cb = VK_NULL_HANDLE;
    VkDeviceSize ps_cb_off = 0;
    
    std::array<VkImageView, 4> tex_views{};
    std::array<VkSampler, 4> samplers{};
    
    TargetCacheEntry* rt_entry = nullptr;
    TargetCacheEntry* ds_entry = nullptr;
    VkFormat rt_fmt = kBgra;
    bool has_ds = false;
    
    VkViewport viewport{};
    VkRect2D scissor{};
    uint32_t scissor_count = 0;
    std::array<VkRect2D, 8> scissors{};
};

void UpdateVertexBuffers(Frame& f, const Assembled& a, BoundResources& br) {
    for (uint32_t i = 0; i < a.buffer_count; i++) {
        const auto& vb = a.buffers[i];
        if (!vb.src || !vb.bytes) continue;
        
        Upload up = AllocUpload(vb.bytes, 16);
        if (!up.cpu) continue;
        std::memcpy(up.cpu, vb.src, vb.bytes);
        br.vbs[i] = {up.buf, up.off, vb.stride};
        if (i + 1 > br.vb_count) br.vb_count = i + 1;
    }
}

// ============================================================================
// Update constant buffers from state
// ============================================================================

void UpdateConstantBuffers(Frame& f, const State& s, BoundResources& br) {
    // VS constants: cbuffer VC at b0 (192 float4)
    {
        Upload up = AllocUpload(192 * 16, 16);
        if (up.cpu) {
            float* dst = reinterpret_cast<float*>(up.cpu);
            for (uint32_t i = 0; i < 192; i++) {
                dst[i * 4 + 0] = s.vsc[i][0];
                dst[i * 4 + 1] = s.vsc[i][1];
                dst[i * 4 + 2] = s.vsc[i][2];
                dst[i * 4 + 3] = s.vsc[i][3];
            }
            br.vs_cb = up.buf;
            br.vs_cb_off = up.off;
        }
    }
    
    // PS constants: cbuffer DC at b1 (DrawConstants layout)
    {
        constexpr uint32_t kDCSize = sizeof(DrawConstants);
        Upload up = AllocUpload(kDCSize, 16);
        if (up.cpu) {
            DrawConstants* dc = reinterpret_cast<DrawConstants*>(up.cpu);
            
            dc->surf[0] = float(s.viewport.w);
            dc->surf[1] = float(s.viewport.h);
            dc->surf[2] = 1.0f / s.zscale;
            dc->surf[3] = 0;
            
            dc->fog[0] = s.vsc[116][0];
            dc->fog[1] = s.vsc[117][0];
            dc->fog[2] = s.vsc[118][0];
            dc->fog[3] = s.vsc[119][0];
            
            Color(s.rs[::gpu::kRsFogColor], dc->fog_color);
            
            dc->misc[0] = float(s.simple[::gpu::kMAlphaRef >> 2] & 0xFF) / 255.0f;
            dc->misc[1] = float(s.simple[::gpu::kMAlphaFunc >> 2]);
            dc->misc[2] = float(s.rs[::gpu::kRsShadowFunc]);
            dc->misc[3] = float(s.rs[::gpu::kRsSpecularEnable]);
            
            for (int i = 0; i < 18; i++) {
                uint32_t packed = s.simple[(::gpu::kMPsConstant0 >> 2) + i];
                dc->pc[i][0] = float(packed >> 16 & 0xFF) / 255.0f;
                dc->pc[i][1] = float(packed >> 8 & 0xFF) / 255.0f;
                dc->pc[i][2] = float(packed & 0xFF) / 255.0f;
                dc->pc[i][3] = float(packed >> 24 & 0xFF) / 255.0f;
            }
            
            Color(s.rs[::gpu::kRsTextureFactor], dc->tfactor);
            
            for (int i = 0; i < 4; i++) {
                TextureDesc td;
                if (Describe(s.textures[i], td)) {
                    dc->texsize[i][0] = float(td.width);
                    dc->texsize[i][1] = float(td.height);
                    dc->texsize[i][2] = 1.0f / float(td.width);
                    dc->texsize[i][3] = 1.0f / float(td.height);
                } else {
                    dc->texsize[i][0] = 1.0f;
                    dc->texsize[i][1] = 1.0f;
                    dc->texsize[i][2] = 1.0f;
                    dc->texsize[i][3] = 1.0f;
                }
            }
            
            for (int i = 0; i < 4; i++) {
                dc->bump[i][0] = Bits(s.tss[i][::gpu::kTssBumpEnvMat00]);
                dc->bump[i][1] = Bits(s.tss[i][::gpu::kTssBumpEnvMat01]);
                dc->bump[i][2] = Bits(s.tss[i][::gpu::kTssBumpEnvMat10]);
                dc->bump[i][3] = Bits(s.tss[i][::gpu::kTssBumpEnvMat11]);
                dc->bumpl[i][0] = Bits(s.tss[i][::gpu::kTssBumpEnvLScale]);
                dc->bumpl[i][1] = Bits(s.tss[i][::gpu::kTssBumpEnvLOffset]);
                dc->bumpl[i][2] = 0;
                dc->bumpl[i][3] = 0;
            }
            
            // wvp = world * view * projection
            // XDK transform indices: view=2, projection=3, world=256
            const auto& world = s.transforms[256];
            const auto& view = s.transforms[2];
            const auto& proj = s.transforms[3];
            
            float wv[16], wvp[16], wvn[16];
            for (int r = 0; r < 4; r++) {
                for (int c = 0; c < 4; c++) {
                    float sum = 0;
                    for (int k = 0; k < 4; k++) {
                        sum += world[r * 4 + k] * view[k * 4 + c];
                    }
                    wv[r * 4 + c] = sum;
                }
            }
            for (int r = 0; r < 4; r++) {
                for (int c = 0; c < 4; c++) {
                    float sum = 0;
                    for (int k = 0; k < 4; k++) {
                        sum += wv[r * 4 + k] * proj[k * 4 + c];
                    }
                    wvp[r * 4 + c] = sum;
                }
            }
            // wvn = inverse-transpose(wv) - simplified copy for now
            std::memcpy(wvn, wv, 64);
            
            for (int i = 0; i < 16; i++) {
                dc->wvp[i] = wvp[i];
                dc->wv[i] = wv[i];
                dc->wvn[i] = wvn[i];
            }
            
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 16; j++) {
                    dc->tm[i][j] = s.transforms[16 + i][j];
                }
            }
            
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 4; j++) dc->mat[i][j] = s.material[i * 4 + j];
            }
            for (int j = 0; j < 4; j++) dc->amb[j] = float((s.rs[::gpu::kRsAmbient] >> (j * 8)) & 0xFF) / 255.0f;
            
            for (int i = 0; i < 8; i++) {
                if (!(s.light_enable & (1u << i))) continue;
                for (int j = 0; j < 7; j++) {
                    for (int k = 0; k < 4; k++) {
                        dc->lt[i][j][k] = Bits(s.lights[i][j * 4 + k]);
                    }
                }
            }
            
            dc->hdr[0] = 1.0f;
            dc->hdr[1] = 1.0f;
            dc->hdr[2] = 0;
            dc->hdr[3] = 0;
            
            for (int i = 0; i < 4; i++) {
                TextureDesc td;
                if (Describe(s.textures[i], td)) {
                    dc->spread[i][0] = 1.0f / float(td.width);
                    dc->spread[i][1] = 1.0f / float(td.height);
                } else {
                    dc->spread[i][0] = 1.0f;
                    dc->spread[i][1] = 1.0f;
                }
                dc->spread[i][2] = 4.0f;
                dc->spread[i][3] = 0;
            }
            
            br.ps_cb = up.buf;
            br.ps_cb_off = up.off;
        }
    }
}

// ============================================================================
// Descriptor set allocation from frame pool
// ============================================================================

struct DescriptorSetAlloc {
    VkDescriptorSet sets[4] = {VK_NULL_HANDLE, VK_NULL_HANDLE, VK_NULL_HANDLE, VK_NULL_HANDLE};
};

DescriptorSetAlloc AllocDescriptorSets(Frame& f, const Pipeline& pl) {
    DescriptorSetAlloc alloc{};
    std::vector<VkDescriptorSetLayout> layouts;
    for (int i = 0; i < 4; i++) {
        if (pl.sets[i]) layouts.push_back(pl.sets[i]);
    }
    if (layouts.empty()) return alloc;

    VkDescriptorSetAllocateInfo ai{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO};
    ai.descriptorPool = f.dpool;
    ai.descriptorSetCount = uint32_t(layouts.size());
    ai.pSetLayouts = layouts.data();

    std::vector<VkDescriptorSet> sets(layouts.size());
    if (vkAllocateDescriptorSets(g_ctx.dev, &ai, sets.data()) != VK_SUCCESS) {
        return alloc;
    }
    for (size_t i = 0; i < sets.size(); i++) {
        alloc.sets[i] = sets[i];
    }
    return alloc;
}

// ============================================================================
// Write descriptor sets for a draw
// ============================================================================

void WriteDescriptorSets(const BoundResources& br, const Pipeline& pl, const DescriptorSetAlloc& alloc) {
    std::array<VkWriteDescriptorSet, 16> writes{};
    uint32_t write_count = 0;
    
    for (const auto& b : pl.bindings) {
        uint32_t set_idx = b.set;
        if (set_idx >= 4 || alloc.sets[set_idx] == VK_NULL_HANDLE) continue;
        
        VkWriteDescriptorSet w{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET};
        w.dstSet = alloc.sets[set_idx];
        w.dstBinding = b.binding;
        w.dstArrayElement = 0;
        w.descriptorCount = b.count;
        w.descriptorType = b.type;
        
        if (b.name == "c") {
            VkDescriptorBufferInfo bi{br.vs_cb, br.vs_cb_off, 192 * 16};
            w.pBufferInfo = &bi;
        } else if (b.name == "DC") {
            VkDescriptorBufferInfo bi{br.ps_cb, br.ps_cb_off, sizeof(DrawConstants)};
            w.pBufferInfo = &bi;
        } else if (b.name.rfind("tex", 0) == 0) {
            int idx = b.name[3] - '0';
            if (idx >= 0 && idx < 4 && br.tex_views[idx]) {
                VkDescriptorImageInfo ii{VK_NULL_HANDLE, br.tex_views[idx], VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL};
                w.pImageInfo = &ii;
            }
        } else if (b.name.rfind("smp", 0) == 0) {
            int idx = b.name[3] - '0';
            if (idx >= 0 && idx < 4 && br.samplers[idx]) {
                VkDescriptorImageInfo ii{br.samplers[idx], VK_NULL_HANDLE, VK_IMAGE_LAYOUT_UNDEFINED};
                w.pImageInfo = &ii;
            }
        }
        
        writes[write_count++] = w;
    }
    
    if (write_count) {
        vkUpdateDescriptorSets(g_ctx.dev, write_count, writes.data(), 0, nullptr);
    }
}

// ============================================================================
// Update textures and samplers for draw
// ============================================================================

void UpdateTextures(Frame& f, const State& s, BoundResources& br, const Pipeline& pl) {
    for (int i = 0; i < 4; i++) {
        uint32_t tex_handle = s.textures[i];
        if (!tex_handle) {
            br.tex_views[i] = VK_NULL_HANDLE;
            br.samplers[i] = VK_NULL_HANDLE;
            continue;
        }
        
        TextureDesc td;
        if (!Describe(tex_handle, td)) {
            br.tex_views[i] = VK_NULL_HANDLE;
            br.samplers[i] = VK_NULL_HANDLE;
            continue;
        }
        
        uint32_t data_va = td.data;
        br.tex_views[i] = GetTextureView(data_va, td.format);
        
        SamplerKey key{};
        uint32_t minf = s.tss[i][::gpu::kTssMinFilter];
        uint32_t magf = s.tss[i][::gpu::kTssMagFilter];
        uint32_t mipf = s.tss[i][::gpu::kTssMipFilter];
        
        key.mag = magf == 1 ? VK_FILTER_NEAREST : VK_FILTER_LINEAR;
        key.min = minf == 1 ? VK_FILTER_NEAREST : VK_FILTER_LINEAR;
        key.mip = mipf == 1 ? VK_SAMPLER_MIPMAP_MODE_NEAREST : VK_SAMPLER_MIPMAP_MODE_LINEAR;
        key.addr_u = VkSamplerAddressMode(s.tss[i][::gpu::kTssAddressU]);
        key.addr_v = VkSamplerAddressMode(s.tss[i][::gpu::kTssAddressV]);
        key.addr_w = VkSamplerAddressMode(s.tss[i][::gpu::kTssAddressW]);
        key.lod_bias = Bits(s.tss[i][::gpu::kTssMipLodBias]);
        key.max_aniso = std::min<float>(float(s.tss[i][::gpu::kTssMaxAnisotropy]), g_ctx.aniso_cap);
        key.anisotropy = key.max_aniso > 1;
        key.compare = false;
        key.compare_op = VK_COMPARE_OP_ALWAYS;
        key.border_color = XboxBorderColor(s.tss[i][::gpu::kTssBorderColor]);
        
        br.samplers[i] = GetOrCreateSampler(key);
    }
}

// ============================================================================
// Build pipeline key from state
// ============================================================================

PsoKey BuildPsoKey(const State& s, const Assembled& a, uint32_t prim) {
    PsoKey k{};
    
    k.vs = s.vs ? s.vs->hash : 0;
    k.ps = s.ps ? ::gpu::Hash(s.ps->def, sizeof(s.ps->def)) : 0;
    k.regs = a.regs;
    k.topo = (a.strip ? 0x100 : 0) | uint32_t(a.topology);
    
    k.has_rt = s.rt.header ? 1 : 0;
    k.has_ds = s.zs.header ? 1 : 0;
    
    if (s.rt.header) {
        const FormatInfo& fi = Format(s.rt.format);
        if (fi.compressed) {
            k.rtfmt = uint32_t(kBgra);
        } else if (fi.depth) {
            k.rtfmt = uint32_t(g_ctx.depth_fmt);
        } else {
            k.rtfmt = uint32_t(kBgra);
        }
    } else {
        k.rtfmt = uint32_t(kBgra);
    }
    
    for (uint32_t r = 0; r < 16; r++) {
        k.elements[r] = a.elements[r].format | (a.elements[r].buffer << 8) | (a.elements[r].offset << 16);
    }
    for (uint32_t i = 0; i < 16; i++) {
        k.strides[i] = i < a.buffer_count ? a.buffers[i].stride : 0;
    }
    
    k.blend = s.simple[::gpu::kMBlendEnable >> 2];
    k.src = s.simple[::gpu::kMSrcBlend >> 2];
    k.dst = s.simple[::gpu::kMDestBlend >> 2];
    k.op = s.simple[::gpu::kMBlendOp >> 2];
    k.wmask = s.simple[::gpu::kMColorWriteEnable >> 2];
    
    k.zen = s.rs[::gpu::kRsZEnable];
    k.zwrite = s.simple[::gpu::kMZWriteEnable >> 2];
    k.zfunc = s.simple[::gpu::kMZFunc >> 2];
    k.sten = s.rs[::gpu::kRsStencilEnable];
    k.sfunc = s.simple[::gpu::kMStencilFunc >> 2];
    k.smask = s.simple[::gpu::kMStencilMask >> 2];
    k.swmask = s.simple[::gpu::kMStencilWriteMask >> 2];
    k.sfail = s.rs[::gpu::kRsStencilFail];  // stencil fail from complex render states
    k.szfail = s.simple[::gpu::kMStencilZFail >> 2];
    k.spass = s.simple[::gpu::kMStencilPass >> 2];
    
    k.cull = s.rs[::gpu::kRsCullMode];
    k.ccw = s.rs[::gpu::kRsFrontFace];
    k.fill = s.rs[::gpu::kRsFillMode];
    
    k.zbias = int32_t(s.simple[::gpu::kMSolidOffsetEnable >> 2]);
    k.zslope = Bits(s.simple[::gpu::kMSlopeScale >> 2]);
    
    return k;
}

// ============================================================================
// Record a draw command
// ============================================================================

static std::atomic<uint64_t> g_draws_skipped_pipeline{0};

void RecordDraw(Frame& f, const State& s, const Assembled& a, uint32_t prim, uint32_t start, uint32_t count, const uint8_t* indices) {
    BoundResources br;
    
    UpdateVertexBuffers(f, a, br);
    
    if (indices) {
        br.ib = BuildIndexBuffer(f, reinterpret_cast<const uint16_t*>(indices), count, br.ib_off);
        br.ib_16 = true;
    } else if (NeedsIndexList(prim)) {
        br.ib = BuildConvertedIndexBuffer(f, prim, count, br.ib_off);
        br.ib_16 = true;
    }
    br.base_vertex = int32_t(s.base_vertex);
    
    UpdateConstantBuffers(f, s, br);
    
    // Get pipeline first to know descriptor set layouts
    PsoKey key = BuildPsoKey(s, a, prim);
    Pipeline* pipeline = nullptr;
    bool pending = false;
    if (!EnsurePipeline(key, false, &pipeline, pending) || !pipeline) {
        g_draws_skipped_pipeline++;
        if ((g_draws_skipped_pipeline.load() & 0x3F) == 1) {
            LOGW("vulkan: %llu draws skipped (pipeline not ready)", (unsigned long long)g_draws_skipped_pipeline.load());
        }
        return;
    }
    
    UpdateTextures(f, s, br, *pipeline);
    
    // Render target
    if (s.rt.header) {
        br.rt_entry = GetRenderTarget(s.rt, false);
        if (br.rt_entry) {
            br.rt_fmt = br.rt_entry->fmt;
        }
    }
    if (s.zs.header) {
        br.ds_entry = GetRenderTarget(s.zs, true);
        if (br.ds_entry) {
            br.has_ds = true;
        }
    }
    
    br.viewport = {float(s.viewport.x), float(s.viewport.y), float(s.viewport.w), float(s.viewport.h), s.viewport.min_z, s.viewport.max_z};
    br.scissor = {int32_t(s.viewport.x), int32_t(s.viewport.y), uint32_t(s.viewport.w), uint32_t(s.viewport.h)};
    if (s.scissor_count) {
        br.scissor_count = std::min<uint32_t>(s.scissor_count, 8);
        for (uint32_t i = 0; i < br.scissor_count; i++) {
            br.scissors[i] = {int32_t(s.scissors[i * 4]), int32_t(s.scissors[i * 4 + 1]),
                              uint32_t(s.scissors[i * 4 + 2] - s.scissors[i * 4]),
                              uint32_t(s.scissors[i * 4 + 3] - s.scissors[i * 4 + 1])};
        }
    }
    
    // Allocate and write descriptor sets
    DescriptorSetAlloc alloc = AllocDescriptorSets(f, *pipeline);
    WriteDescriptorSets(br, *pipeline, alloc);
    
    VkCommandBuffer cmd = f.cmd;
    
    // Bind pipeline
    vkCmdBindPipeline(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline->pipe);
    
    // Bind descriptor sets - only valid ones
    std::vector<VkDescriptorSet> sets;
    for (int i = 0; i < 4; i++) {
        if (pipeline->sets[i] && alloc.sets[i]) {
            sets.push_back(alloc.sets[i]);
        }
    }
    if (!sets.empty()) {
        vkCmdBindDescriptorSets(cmd, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline->layout, 0, 
                                uint32_t(sets.size()), sets.data(), 0, nullptr);
    }
    
    // Bind vertex buffers
    if (br.vb_count) {
        std::array<VkBuffer, 16> bufs;
        std::array<VkDeviceSize, 16> offs;
        for (uint32_t i = 0; i < br.vb_count; i++) {
            bufs[i] = br.vbs[i].buf;
            offs[i] = br.vbs[i].off;
        }
        vkCmdBindVertexBuffers(cmd, 0, br.vb_count, bufs.data(), offs.data());
    }
    
    // Bind index buffer
    if (br.ib) {
        vkCmdBindIndexBuffer(cmd, br.ib, br.ib_off, br.ib_16 ? VK_INDEX_TYPE_UINT16 : VK_INDEX_TYPE_UINT32);
    }
    
    // Viewport/scissor
    vkCmdSetViewport(cmd, 0, 1, &br.viewport);
    if (br.scissor_count) {
        vkCmdSetScissor(cmd, 0, br.scissor_count, br.scissors.data());
    } else {
        vkCmdSetScissor(cmd, 0, 1, &br.scissor);
    }
    
    // Dynamic state
    float blend_const[4] = {
        float(s.simple[::gpu::kMBlendColor >> 2] >> 16 & 0xFF) / 255.0f,
        float(s.simple[::gpu::kMBlendColor >> 2] >> 8 & 0xFF) / 255.0f,
        float(s.simple[::gpu::kMBlendColor >> 2] & 0xFF) / 255.0f,
        float(s.simple[::gpu::kMBlendColor >> 2] >> 24 & 0xFF) / 255.0f,
    };
    vkCmdSetBlendConstants(cmd, blend_const);
    vkCmdSetStencilReference(cmd, VK_STENCIL_FACE_FRONT_AND_BACK, s.simple[::gpu::kMStencilRef >> 2]);
    if (br.has_ds && (key.zbias || key.zslope != 0)) {
        vkCmdSetDepthBias(cmd, float(key.zbias), 0, key.zslope);
    }
    
    // Begin render pass
    VkRenderPass rp = GetRenderPass(br.rt_fmt, br.has_ds ? g_ctx.depth_fmt : VK_FORMAT_UNDEFINED, VK_SAMPLE_COUNT_1_BIT, true, br.has_ds);
    VkFramebuffer fb = VK_NULL_HANDLE;
    if (br.rt_entry) {
        fb = GetFramebuffer(br.rt_entry->img, br.ds_entry ? &br.ds_entry->img : nullptr, rp, br.rt_entry->gw, br.rt_entry->gh);
        VkRenderPassBeginInfo rpbi{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
        rpbi.renderPass = rp;
        rpbi.framebuffer = fb;
        rpbi.renderArea = {{0, 0}, {br.rt_entry->gw, br.rt_entry->gh}};
        VkClearValue cv[2]{};
        cv[0].color = {0, 0, 0, 0};
        cv[1].depthStencil = {1.0f, 0};
        rpbi.clearValueCount = br.has_ds ? 2 : 1;
        rpbi.pClearValues = cv;
        vkCmdBeginRenderPass(cmd, &rpbi, VK_SUBPASS_CONTENTS_INLINE);
    }
    
    // Draw
    uint32_t vertex_count = a.vertex_count;
    uint32_t instance_count = 1;
    uint32_t first_vertex = start;
    uint32_t first_index = 0;
    int32_t vertex_offset = br.base_vertex;
    
    if (br.ib) {
        vkCmdDrawIndexed(cmd, count, instance_count, first_index, vertex_offset, 0);
    } else {
        vkCmdDraw(cmd, vertex_count, instance_count, first_vertex, 0);
    }
    
    if (br.rt_entry) {
        vkCmdEndRenderPass(cmd);
    }
}

}  // namespace

// ============================================================================
// Backend implementation
// ============================================================================

class VulkanBackend final : public Backend {
public:
    VulkanBackend() = default;
    ~VulkanBackend() override { Shutdown(); }
    
    bool Init(uint32_t width, uint32_t height) override {
        std::lock_guard lock(init_mutex_);
        if (initialized_) return true;
        
        if (!CreateInstanceAndDevice()) {
            LOGE("vulkan: CreateInstanceAndDevice failed");
            return false;
        }
        
        SDL_Window* window = static_cast<SDL_Window*>(app::Window());
        if (!window || !SDL_Vulkan_CreateSurface(window, g_ctx.instance, nullptr, &g_ctx.surface)) {
            LOGE("vulkan: SDL_Vulkan_CreateSurface failed: %s", SDL_GetError());
            return false;
        }
        
        if (!CreateSwapchain()) {
            LOGE("vulkan: CreateSwapchain failed");
            return false;
        }
        
        if (!EnsureBlitShaders()) {
            LOGE("vulkan: EnsureBlitShaders failed");
            return false;
        }
        
        if (!EnsureFallbackTexture()) {
            LOGE("vulkan: fallback texture failed");
            return false;
        }
        
        initialized_ = true;
        LOGI("vulkan: Backend initialized %ux%u", width, height);
        return true;
    }
    
    void Clear(const State& s, uint32_t count, const uint8_t* rects, uint32_t flags, uint32_t color, float z, uint32_t stencil) override {
        std::lock_guard lock(draw_mutex_);
        if (!BeginFrame()) return;
        
        Frame& f = g_ctx.Current();
        VkCommandBuffer cmd = f.cmd;
        
        Image* rt = &g_ctx.swap_targets[g_ctx.swap_index];
        if (s.rt.header) {
            TargetCacheEntry* entry = GetRenderTarget(s.rt, false);
            if (entry) rt = &entry->img;
        }
        
        Transition(*rt, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL);
        
        VkClearValue clear_values[2]{};
        clear_values[0].color = {
            float((color >> 16) & 0xFF) / 255.0f,
            float((color >> 8) & 0xFF) / 255.0f,
            float(color & 0xFF) / 255.0f,
            float((color >> 24) & 0xFF) / 255.0f
        };
        clear_values[1].depthStencil = {z, stencil};
        
        VkRenderPass rp = GetRenderPass(rt->fmt, g_ctx.depth_fmt, VK_SAMPLE_COUNT_1_BIT, flags & kClearTarget, flags & (kClearZ | kClearStencil));
        VkFramebuffer fb = GetFramebuffer(*rt, nullptr, rp, rt->w, rt->h);
        
        VkRenderPassBeginInfo rpbi{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO};
        rpbi.renderPass = rp;
        rpbi.framebuffer = fb;
        rpbi.renderArea = {{0, 0}, {rt->w, rt->h}};
        rpbi.clearValueCount = (flags & kClearTarget) ? 1 : 0;
        if (flags & (kClearZ | kClearStencil)) rpbi.clearValueCount = 2;
        rpbi.pClearValues = clear_values;
        
        vkCmdBeginRenderPass(cmd, &rpbi, VK_SUBPASS_CONTENTS_INLINE);
        vkCmdEndRenderPass(cmd);
        
        SubmitFrame(false);
    }
    
    void Draw(const State& s, uint32_t prim, uint32_t start, uint32_t count, const uint8_t* indices) override {
        std::lock_guard lock(draw_mutex_);
        if (!BeginFrame()) return;
        
        Assembled a;
        if (!Assemble(s, prim, start, count, indices, a)) {
            SubmitFrame(false);
            return;
        }
        
        RecordDraw(g_ctx.Current(), s, a, prim, start, count, indices);
        
        SubmitFrame(false);
    }
    
    void Copy(const Surface& src, const Surface& dst, uint32_t count, uint32_t src_rects_va, uint32_t dst_points_va) override {
        std::lock_guard lock(draw_mutex_);
        if (!BeginFrame()) return;
        
        Frame& f = g_ctx.Current();
        VkCommandBuffer cmd = f.cmd;
        
        TargetCacheEntry* src_entry = GetRenderTarget(src, false);
        TargetCacheEntry* dst_entry = GetRenderTarget(dst, false);
        
        if (src_entry && dst_entry && src_entry->img.image && dst_entry->img.image) {
            Transition(src_entry->img, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
            Transition(dst_entry->img, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL);
            
            VkImageCopy region{};
            region.srcSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
            region.dstSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
            region.extent = {std::min(src_entry->gw, dst_entry->gw), std::min(src_entry->gh, dst_entry->gh), 1};
            
            vkCmdCopyImage(cmd, src_entry->img.image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
                           dst_entry->img.image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &region);
            
            dst_entry->drawn = true;
        }
        
        SubmitFrame(false);
    }
    
    void Present(const Surface& front, bool pillarbox) override {
        std::lock_guard lock(draw_mutex_);
        if (!BeginFrame()) return;
        
        Frame& f = g_ctx.Current();
        
        if (!AcquireNextImage()) {
            SubmitFrame(false);
            return;
        }
        
        Image& rt = g_ctx.swap_targets[g_ctx.swap_index];
        Transition(rt, VK_IMAGE_LAYOUT_PRESENT_SRC_KHR);
        
        SubmitFrame(false);
        PresentSwapchain(pillarbox);
    }
    
    void Sync(uint32_t data_va, uint32_t size) override {
        std::lock_guard lock(draw_mutex_);
        WaitFenceValue(g_ctx.done_value);
    }
    
    void SyncLate(uint32_t data_va) override {
        std::lock_guard lock(draw_mutex_);
        RecordLate(data_va);
    }
    
    void Flush() override {
        std::lock_guard lock(draw_mutex_);
        if (!BeginFrame()) return;
        SubmitFrame(true);
    }
    
    void SetGamma(const uint8_t* ramp) override {
        LOGW("vulkan: SetGamma not implemented");
    }
    
    void Occlusion(const State& s, const float p[::gpu::kOcclusionParams]) override {
        LOGW("vulkan: Occlusion not implemented");
    }
    
    void FilterShadows(const State& s, const float p[::gpu::kShadowFilterParams]) override {
        LOGW("vulkan: FilterShadows not implemented");
    }
    
    void ApplyShadows(const State& s) override {
        LOGW("vulkan: ApplyShadows not implemented");
    }
    
    uint32_t Fence() override {
        return uint32_t(++fence_counter_);
    }
    
    bool FencePending(uint32_t fence) override {
        return fence > g_ctx.done_value;
    }
    
    void WaitFence(uint32_t fence) override {
        WaitFenceValue(fence);
    }
    
    bool Busy(uint32_t resource) override {
        return false;
    }
    
    void WaitResource(uint32_t resource) override {
        WaitFenceValue(g_ctx.done_value);
    }
    
    void WaitGpuFrame(uint64_t n) override {
        if (n < g_ctx.present_fence.size()) {
            WaitFenceValue(g_ctx.present_fence[n].load());
        }
    }
    
private:
    void Shutdown() {
        std::lock_guard lock(init_mutex_);
        if (!initialized_) return;
        
        if (g_ctx.dev) {
            vkDeviceWaitIdle(g_ctx.dev);
        }
        
        {
            std::lock_guard lock(g_texture_cache_mutex);
            for (auto& [k, v] : g_texture_cache) {
                DestroyImage(v.img);
            }
            g_texture_cache.clear();
        }
        {
            std::lock_guard lock(g_target_cache_mutex);
            for (auto& [k, v] : g_target_cache) {
                DestroyImage(v.img);
                if (v.resolve.image) DestroyImage(v.resolve);
            }
            g_target_cache.clear();
        }
        DestroySamplerCache();
        if (g_fallback_texture.image) DestroyImage(g_fallback_texture);
        
        DestroyDevice();
        initialized_ = false;
    }
    
    std::mutex init_mutex_;
    std::mutex draw_mutex_;
    bool initialized_ = false;
    uint32_t fence_counter_ = 0;
};

}  // namespace gpu::vk

namespace gpu {

std::unique_ptr<Backend> CreateBackend() {
    return std::make_unique<gpu::vk::VulkanBackend>();
}

}  // namespace gpu