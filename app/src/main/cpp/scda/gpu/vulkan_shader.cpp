// HLSL to SPIR-V through shaderc, the way the Windows build's D3DCompile did it. Every shader is generated from draw
// time state, so its SPIR-V is kept on disk by source hash like the Windows bytecode was. The descriptor set layouts
// come from the SPIR-V's own decorations and variable names: whatever set and binding the HLSL front end assigned, the
// renderer binds by name (b0 "c", b1 the draw constants, tex0..3, smp0..3, and the blit's img, lut, ls, ps, B, P).
#include "vulkan_internal.h"
#include "gpu/pipeline_cache.h"

#include <shaderc/shaderc.h>

#include <cstring>
#include <mutex>

namespace gpu::vk {

namespace {

// SPIR-V's decoration opcodes, the only ones the reflection reads
constexpr uint32_t spv_OpName = 5;
constexpr uint32_t spv_OpDecorate = 71;
constexpr uint32_t spv_OpTypeImage = 25;
constexpr uint32_t spv_OpTypeSampler = 26;
constexpr uint32_t spv_OpTypeSampledImage = 27;
constexpr uint32_t spv_OpTypePointer = 32;
constexpr uint32_t spv_OpVariable = 59;
constexpr uint32_t spv_OpEntryPoint = 15;
constexpr uint32_t spv_DecorationBinding = 33;
constexpr uint32_t spv_DecorationDescriptorSet = 34;
constexpr uint32_t spv_StorageUniformConstant = 0;  // SPIR-V's storage classes: 0, then input 1, uniform 2
constexpr uint32_t spv_StorageUniform = 2;
constexpr uint64_t kSourceCheck = 0x5CDA0002C0FFEE11ull;  // seed of the second source hash the disk cache keeps

// reads a module's names, descriptor sets, bindings and what each variable holds. A cbuffer's
// variable carries no OpName of its own: the name lives on the struct its pointer points at, so
// both passes resolve names through the pointer.
bool ReflectSpirv(const uint8_t* code, size_t bytes, Reflect& out) {
    if (bytes < 20 || (bytes & 3)) return false;
    const uint32_t* w = reinterpret_cast<const uint32_t*>(code);
    if (w[0] != 0x07230203) return false;
    uint32_t n = uint32_t(bytes / 4);
    struct Var {
        uint32_t type = 0, storage = 0, set = 0, binding = 0;
    };
    std::unordered_map<uint32_t, uint32_t> pointee;   // pointer type id -> pointee type id
    std::unordered_map<uint32_t, uint8_t> kind;       // type id: 1 image, 2 sampler, 3 sampled image
    std::unordered_map<uint32_t, Var> vars;
    std::unordered_map<uint32_t, std::string> names;
    for (uint32_t i = 5; i < n;) {
        uint32_t op = w[i] & 0xFFFF, len = w[i] >> 16;
        if (!len || i + len > n) return false;
        switch (op) {
            case spv_OpName: {
                const char* text = reinterpret_cast<const char*>(w + i + 2);
                names[w[i + 1]] = std::string(text, strnlen(text, (len - 2) * 4));
                break;
            }
            case spv_OpTypeImage:
                kind[w[i + 1]] = 1;
                break;
            case spv_OpTypeSampler:
                kind[w[i + 1]] = 2;
                break;
            case spv_OpTypeSampledImage:
                kind[w[i + 1]] = 3;
                break;
            case spv_OpTypePointer:
                pointee[w[i + 1]] = w[i + 3];
                break;
            case spv_OpVariable:
                vars[w[i + 2]] = {w[i + 1], w[i + 3], 0, 0};
                break;
            case spv_OpDecorate: {
                uint32_t dec = w[i + 2];
                if (dec == spv_DecorationBinding) vars[w[i + 1]].binding = w[i + 3];
                else if (dec == spv_DecorationDescriptorSet) vars[w[i + 1]].set = w[i + 3];
                break;
            }
            default:
                break;
        }
        i += len;
    }
    auto name_of = [&](uint32_t id, uint32_t type) -> std::string {
        auto nm = names.find(id);
        if (nm != names.end() && !nm->second.empty()) return nm->second;
        // the cbuffer's variable is unnamed: the struct it points at carries the name
        auto pt = pointee.find(type);
        if (pt != pointee.end()) {
            auto sn = names.find(pt->second);
            if (sn != names.end()) return sn->second;
        }
        return {};
    };
    for (auto& [id, v] : vars) {
        uint32_t pointee_type = v.type;
        auto pp = pointee.find(pointee_type);
        if (pp != pointee.end()) pointee_type = pp->second;
        std::string name = name_of(id, v.type);
        if (name.empty()) continue;
        ReflectBinding b{};
        b.set = v.set;
        b.binding = v.binding;
        b.name = std::move(name);
        if (v.storage == spv_StorageUniform) {
            b.type = VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER;
        } else if (v.storage == spv_StorageUniformConstant) {
            auto k = kind.find(pointee_type);
            if (k == kind.end()) continue;
            b.type = k->second == 2 ? VK_DESCRIPTOR_TYPE_SAMPLER
                     : k->second == 3 ? VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER
                                      : VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE;
        } else {
            continue;
        }
        out.bindings.push_back(b);
    }
    return !out.bindings.empty();
}

// the HLSL compiler and its options, made on the first shader
shaderc_compiler_t g_compiler = nullptr;
shaderc_compile_options_t g_options = nullptr;

// The HLSL front end assigns every resource binding from its register number in set 0: b0, t0 and s0 all land on
// binding 0. The renderer binds by the module's own names, so this pass renumbers the decorations deterministically
// before the module is made: cbuffers low, textures from 4, samplers from 8, anything else from 16. Also names the
// entry point "main", which the front end may leave empty.
bool RewriteBindings(std::vector<uint8_t>& code) {
    if (code.size() < 20 || (code.size() & 3)) return false;
    uint32_t* w = reinterpret_cast<uint32_t*>(code.data());
    if (w[0] != 0x07230203) return false;
    uint32_t n = uint32_t(code.size() / 4);
    struct Use {
        std::string name;
        uint32_t type = 0;
        uint32_t binding = 0;
        uint32_t storage = 0;
    };
    std::unordered_map<uint32_t, Use> vars;  // result id -> what it holds
    std::unordered_map<uint32_t, uint32_t> pointee;
    for (uint32_t i = 5; i < n;) {
        uint32_t op = w[i] & 0xFFFF, len = w[i] >> 16;
        if (!len || i + len > n) return false;
        if (op == spv_OpName) {
            const char* text = reinterpret_cast<const char*>(w + i + 2);
            std::string name(text, strnlen(text, (len - 2) * 4));
            if (!name.empty()) vars[w[i + 1]].name = name;
        } else if (op == spv_OpVariable) {
            vars[w[i + 2]].type = w[i + 1];
            vars[w[i + 2]].storage = w[i + 3];
        } else if (op == spv_OpTypePointer) {
            pointee[w[i + 1]] = w[i + 3];
        }
        i += len;
    }
    // a cbuffer's variable is unnamed: the struct its pointer points at carries the name, and the
    // names of types were recorded under their type ids, which no variable shares
    {
        std::unordered_map<uint32_t, std::string> type_names;
        for (uint32_t i = 5; i < n;) {
            uint32_t op = w[i] & 0xFFFF, len = w[i] >> 16;
            if (op == spv_OpName) {
                const char* text = reinterpret_cast<const char*>(w + i + 2);
                type_names[w[i + 1]] = std::string(text, strnlen(text, (len - 2) * 4));
            }
            i += len;
        }
        for (auto& [id, u] : vars) {
            if (!u.name.empty()) continue;
            auto pt = pointee.find(u.type);
            if (pt == pointee.end()) continue;
            auto tn = type_names.find(pt->second);
            if (tn != type_names.end() && !tn->second.empty()) u.name = tn->second;
        }
    }
    // the numbers the renderer writes descriptors by
    auto slot = [](const std::string& name, uint32_t storage) -> int {
        if (storage == spv_StorageUniform) {
            if (name == "VC") return 0;
            if (name == "DC" || name == "B") return 1;
        } else if (storage == spv_StorageUniformConstant) {
            if (name.rfind("tex", 0) == 0) {
                uint32_t k = 0;
                if (name.size() == 4 && name[3] >= '0' && name[3] <= '3') k = uint32_t(name[3] - '0');
                return int(4 + k);
            }
            if (name.rfind("smp", 0) == 0) {
                uint32_t k = 0;
                if (name.size() == 4 && name[3] >= '0' && name[3] <= '3') k = uint32_t(name[3] - '0');
                return int(8 + k);
            }
            if (name == "img") return 4;
            if (name == "lut") return 5;
            if (name == "ls") return 8;
            if (name == "ps") return 9;
        }
        return -1;
    };
    std::vector<std::pair<std::string, uint32_t>> rest;  // resources outside the known names, numbered past them
    std::unordered_map<uint32_t, int> want;
    for (auto& [id, u] : vars) {
        if (u.name.empty() || (u.storage != spv_StorageUniform && u.storage != spv_StorageUniformConstant)) continue;
        int s = slot(u.name, u.storage);
        if (s >= 0) {
            want[id] = s;
        } else {
            rest.emplace_back(u.name, u.storage);
        }
    }
    std::sort(rest.begin(), rest.end());
    uint32_t next = 16;
    std::unordered_map<std::string, int> seen;  // one number per distinct name, in name order, so both stages agree
    for (auto& [name, storage] : rest) {
        (void)storage;
        auto it = seen.find(name);
        if (it == seen.end()) it = seen.emplace(name, int(next++)).first;
        for (auto& [id, u] : vars)
            if (u.name == name && u.storage == storage) want[id] = it->second;
    }
    uint32_t writes = 0;
    for (uint32_t i = 5; i < n;) {
        uint32_t op = w[i] & 0xFFFF, len = w[i] >> 16;
        if (op == spv_OpDecorate && w[i + 2] == spv_DecorationBinding) {
            auto it = want.find(w[i + 1]);
            if (it != want.end() && w[i + 3] != uint32_t(it->second)) {
                w[i + 3] = uint32_t(it->second);
                writes++;
            }
        }
        i += len;
    }
    // the entry point's name, which some front ends leave empty
    for (uint32_t i = 5; i < n;) {
        uint32_t op = w[i] & 0xFFFF, len = w[i] >> 16;
        if (op == spv_OpEntryPoint) {
            char* text = reinterpret_cast<char*>(w + i + 3);
            size_t room = (len - 4) * 4;
            if (room >= 5 && (!text[0] || std::strncmp(text, "main", 5) != 0)) {
                std::memset(text, 0, room);
                std::memcpy(text, "main", 5);
                writes++;
            }
            break;
        }
        i += len;
    }
    return true;  // a module without resources is fine too
}



bool CompileHlsl(const std::string& src, const char* entry, shaderc_shader_kind kind, std::vector<uint8_t>& spirv,
                 uint64_t hash) {
    if (!g_compiler) {
        g_compiler = shaderc_compiler_initialize();
        g_options = shaderc_compile_options_initialize();
        shaderc_compile_options_set_source_language(g_options, shaderc_source_language_hlsl);
        shaderc_compile_options_set_optimization_level(g_options, shaderc_optimization_level_performance);
        shaderc_compile_options_set_target_env(g_options, shaderc_target_env_vulkan, shaderc_env_version_vulkan_1_1);
        // load-bearing: glslang only emits OpName with debug info on, and both the reflection and
        // the binding rewriter read the resources' names from OpName (the renderer binds by name);
        // without it every module reflects to zero bindings and the blit fails to build
        shaderc_compile_options_set_generate_debug_info(g_options);
    }
    shaderc_compilation_result_t r = shaderc_compile_into_spv(g_compiler, src.data(), src.size(), kind, entry, "scda",
                                                              g_options);
    shaderc_compilation_status st = shaderc_result_get_compilation_status(r);
    if (st != shaderc_compilation_status_success) {
        const char* msg = shaderc_result_get_error_message(r);
        LOGE("vulkan: shader %016llx (%s) failed: %s", (unsigned long long)hash, entry, msg ? msg : "?");
        LOGE("%s", src.c_str());
        shaderc_result_release(r);
        return false;
    }
    const char* data = shaderc_result_get_bytes(r);
    size_t size = shaderc_result_get_length(r);
    spirv.assign(data, data + size);
    // kept on disk for the next run, as the Windows build kept its bytecode
    ::gpu::cache::AddShader(hash, Hash(src.data(), src.size(), kSourceCheck), spirv.data(), spirv.size());
    shaderc_result_release(r);
    return true;
}

// the sources by hash, as d3d12.cpp's shader_src_ kept them: a pipeline's key carries only the hashes
std::mutex g_sources_lock;
struct SourceEntry {
    std::string src;
    VkShaderStageFlagBits stage;
};
std::unordered_map<uint64_t, SourceEntry> g_sources;

struct Module {
    std::mutex lock;
    Shader shader;
    bool ready = false;
    std::string src;
    const char* entry = nullptr;
    VkShaderStageFlagBits stage = VK_SHADER_STAGE_VERTEX_BIT;
    bool compiling = false;
};

std::mutex g_modules_lock;
std::unordered_map<uint64_t, Module*> g_modules;

// builds one module on a build thread or the render thread
void BuildModule(Module& m, uint64_t hash) {
    std::vector<uint8_t> spirv;
    if (!::gpu::cache::FindShader(hash, Hash(m.src.data(), m.src.size(), kSourceCheck), spirv)) {
        if (!CompileHlsl(m.src, m.entry, m.stage == VK_SHADER_STAGE_VERTEX_BIT ? shaderc_glsl_vertex_shader
                                                                               : shaderc_glsl_fragment_shader,
                         spirv, hash))
            return;
    }
    // the front end's own binding numbers collide; the renderer binds by name
    if (!RewriteBindings(spirv)) {
        LOGE("vulkan: shader %016llx could not be rewritten", (unsigned long long)hash);
        return;
    }
    Reflect reflect;
    if (!ReflectSpirv(spirv.data(), spirv.size(), reflect)) {
        LOGE("vulkan: shader %016llx reflection failed", (unsigned long long)hash);
        return;
    }
    VkShaderModuleCreateInfo ci{VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO};
    ci.codeSize = spirv.size();
    ci.pCode = reinterpret_cast<const uint32_t*>(spirv.data());
    VkShaderModule module = VK_NULL_HANDLE;
    if (!VKCHECK(vkCreateShaderModule(g_ctx.dev, &ci, nullptr, &module))) return;
    std::lock_guard lock(m.lock);
    if (m.shader.module) vkDestroyShaderModule(g_ctx.dev, m.shader.module, nullptr);
    m.shader.module = module;
    m.shader.reflect = std::move(reflect);
    m.ready = true;
}

Module& FindModule(uint64_t hash, const std::string& src, const char* entry, VkShaderStageFlagBits stage) {
    std::lock_guard lock(g_modules_lock);
    auto it = g_modules.find(hash);
    if (it != g_modules.end()) return *it->second;
    auto* m = new Module;
    m->src = src;
    m->entry = entry;
    m->stage = stage;
    g_modules.emplace(hash, m);
    return *m;
}

}  // namespace

void RegisterShaderSource(uint64_t hash, const std::string& src, VkShaderStageFlagBits stage) {
    std::lock_guard lock(g_sources_lock);
    g_sources.emplace(hash, SourceEntry{src, stage});
}

bool EnsureShaderByHash(uint64_t hash, Shader& out, bool compile, bool& pending) {
    std::string src;
    VkShaderStageFlagBits stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    {
        std::lock_guard lock(g_sources_lock);
        auto it = g_sources.find(hash);
        if (it == g_sources.end()) return false;
        src = it->second.src;
        stage = it->second.stage;
    }
    return EnsureShader(hash, src, "main", stage, out, compile, pending);
}

bool EnsureShader(uint64_t hash, const std::string& src, const char* entry, VkShaderStageFlagBits stage, Shader& out,
                  bool compile, bool& pending) {
    Module& m = FindModule(hash, src, entry, stage);
    if (m.ready) {
        out = m.shader;
        return true;
    }
    // one builder at a time per module
    bool want = false;
    {
        std::lock_guard lock(m.lock);
        if (!m.compiling) {
            m.compiling = true;
            want = true;
        }
    }
    if (want && !compile) {
        ::gpu::cache::Post([&m, hash] { BuildModule(m, hash); });
    } else if (want) {
        BuildModule(m, hash);
    }
    if (m.ready) {
        out = m.shader;
        return true;
    }
    pending = true;
    return false;
}

void DestroyShaderCache() {
    std::lock_guard lock(g_modules_lock);
    for (auto& [hash, m] : g_modules) {
        if (m->shader.module) vkDestroyShaderModule(g_ctx.dev, m->shader.module, nullptr);
        delete m;
    }
    g_modules.clear();
    if (g_compiler) shaderc_compiler_release(g_compiler);
    if (g_options) shaderc_compile_options_release(g_options);
    g_compiler = nullptr;
    g_options = nullptr;
}

// the full screen passes, the Windows build's kBlitHlsl: the source registers already say set 0 to 2
const char* kBlitHlslVs = R"(
cbuffer B : register(b1) { float4 uvrect; float4 opts; };
struct O { float4 p : SV_Position; float2 uv : TEXCOORD0; };
O main(uint id : SV_VertexID) {
    O o;
    float2 t = float2((id << 1) & 2, id & 2);
    o.p = float4(t * float2(2, -2) + float2(-1, 1), 0, 1);
    o.uv = uvrect.xy + t * uvrect.zw;
    return o;
}
)";

const char* kBlitHlslPs = R"(
cbuffer B : register(b1) { float4 uvrect; float4 opts; };
Texture2D img : register(t0);
Texture2D lut : register(t1);
SamplerState ls : register(s0);
SamplerState ps : register(s1);
struct O { float4 p : SV_Position; float2 uv : TEXCOORD0; };
float4 main(O i) : SV_Target {
    float4 c = 0;
    int n = max((int)opts.z, 1);
    float2 px = fwidth(i.uv);
    for (int y = 0; y < n; y++)
        for (int x = 0; x < n; x++) c += img.SampleLevel(ls, i.uv + px * ((float2(x, y) + 0.5) / n - 0.5), 0);
    c /= n * n;
    c.rgb *= opts.w;
    // the gamma lut holds a row per channel: R at v 1/6, G at 1/2, B at 5/6
    if (opts.x > 0) c.rgb = float3(lut.Sample(ps, float2(c.r, 1.0 / 6.0)).r, lut.Sample(ps, float2(c.g, 0.5)).g,
                                   lut.Sample(ps, float2(c.b, 5.0 / 6.0)).b);
    return float4(c.rgb, opts.y > 0 ? c.a : 1);
}
)";

bool EnsureBlitShaders() {
    if (g_blit.layout) return true;
    bool pending = false;
    uint64_t vhash = Hash(kBlitHlslVs, std::strlen(kBlitHlslVs), 1);
    uint64_t phash = Hash(kBlitHlslPs, std::strlen(kBlitHlslPs), 2);
    if (!EnsureShader(vhash, kBlitHlslVs, "main", VK_SHADER_STAGE_VERTEX_BIT, g_blit.vs, true, pending)) return false;
    if (!EnsureShader(phash, kBlitHlslPs, "main", VK_SHADER_STAGE_FRAGMENT_BIT, g_blit.fs, true, pending)) return false;
    g_blit.layout = PipelineLayoutFull(g_blit.vs.reflect, g_blit.fs.reflect, g_blit.sets, &g_blit.bindings);
    return g_blit.layout != VK_NULL_HANDLE;
}

}  // namespace gpu::vk
