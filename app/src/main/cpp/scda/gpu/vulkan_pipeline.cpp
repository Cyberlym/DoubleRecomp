// The game's render state as a Vulkan graphics pipeline: blending, depth and stencil, rasterization, culling and the
// vertex input, keyed and cached the way the Windows build keyed its PSOs, built on threads away from the render
// thread and warmed from the keys file at a run's start.
#include "vulkan_internal.h"
#include "../platform/dxgishim.h"

#include <algorithm>
#include <cstring>
#include <mutex>

namespace gpu::vk {

namespace {

// Adreno's driver returns VK_ERROR_UNKNOWN when two threads create pipelines through the same
// VkPipelineCache at once (the async build thread's game pipelines and the render thread's blit
// pipelines share g_ctx.pipe_cache): every creation in this file goes through this one lock,
// so the cache is only ever used single-threaded
std::mutex g_pipe_create_lock;

VkBlendFactor Blend(uint32_t v, bool alpha) {
    switch (v) {
        case 0: return VK_BLEND_FACTOR_ZERO;
        case 1: return VK_BLEND_FACTOR_ONE;
        case 0x300: return alpha ? VK_BLEND_FACTOR_SRC_ALPHA : VK_BLEND_FACTOR_SRC_COLOR;
        case 0x301: return alpha ? VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA : VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR;
        case 0x302: return VK_BLEND_FACTOR_SRC_ALPHA;
        case 0x303: return VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
        case 0x304: return VK_BLEND_FACTOR_DST_ALPHA;
        case 0x305: return VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA;
        case 0x306: return alpha ? VK_BLEND_FACTOR_DST_ALPHA : VK_BLEND_FACTOR_DST_COLOR;
        case 0x307: return alpha ? VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA : VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR;
        case 0x308: return VK_BLEND_FACTOR_SRC_ALPHA_SATURATE;
        case 0x8001: case 0x8003: return VK_BLEND_FACTOR_CONSTANT_COLOR;
        case 0x8002: case 0x8004: return VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR;
        default: return VK_BLEND_FACTOR_ONE;
    }
}

VkBlendOp BlendOp(uint32_t v) {
    switch (v) {
        case 0x800A: return VK_BLEND_OP_SUBTRACT;
        case 0x800B: return VK_BLEND_OP_REVERSE_SUBTRACT;
        case 0x8007: return VK_BLEND_OP_MIN;
        case 0x8008: return VK_BLEND_OP_MAX;
        default: return VK_BLEND_OP_ADD;
    }
}

VkCompareOp Cmp(uint32_t v) {
    uint32_t n = v >= 0x200 && v <= 0x207 ? v - 0x200 : 7;
    return VkCompareOp(n + 1);
}

VkStencilOp StencilOp(uint32_t v) {
    switch (v) {
        case 0: return VK_STENCIL_OP_ZERO;
        case 0x1E01: return VK_STENCIL_OP_REPLACE;
        case 0x1E02: return VK_STENCIL_OP_INCREMENT_AND_CLAMP;
        case 0x1E03: return VK_STENCIL_OP_DECREMENT_AND_CLAMP;
        case 0x150A: return VK_STENCIL_OP_INVERT;
        case 0x8507: return VK_STENCIL_OP_INCREMENT_AND_WRAP;
        case 0x8508: return VK_STENCIL_OP_DECREMENT_AND_WRAP;
        default: return VK_STENCIL_OP_KEEP;
    }
}

VkFormat VertexFormat(uint32_t dxgi) {
    switch (dxgi) {
        case DXGI_FORMAT_R32G32B32A32_FLOAT: return VK_FORMAT_R32G32B32A32_SFLOAT;
        case DXGI_FORMAT_R32G32B32_FLOAT: return VK_FORMAT_R32G32B32_SFLOAT;
        case DXGI_FORMAT_R32G32_FLOAT: return VK_FORMAT_R32G32_SFLOAT;
        case DXGI_FORMAT_R32_FLOAT: return VK_FORMAT_R32_SFLOAT;
        case DXGI_FORMAT_B8G8R8A8_UNORM: return VK_FORMAT_B8G8R8A8_UNORM;
        case DXGI_FORMAT_R16G16B16A16_SNORM: return VK_FORMAT_R16G16B16A16_SNORM;
        case DXGI_FORMAT_R16G16B16A16_SINT: return VK_FORMAT_R16G16B16A16_SINT;
        case DXGI_FORMAT_R8G8B8A8_UNORM: return VK_FORMAT_R8G8B8A8_UNORM;
        case DXGI_FORMAT_R16G16_SNORM: return VK_FORMAT_R16G16_SNORM;
        case DXGI_FORMAT_R16G16_SINT: return VK_FORMAT_R16G16_SINT;
        case DXGI_FORMAT_R16_SNORM: return VK_FORMAT_R16_SNORM;
        case DXGI_FORMAT_R16_SINT: return VK_FORMAT_R16_SINT;
        case DXGI_FORMAT_R8_UNORM: return VK_FORMAT_R8_UNORM;
        case DXGI_FORMAT_R8G8_UNORM: return VK_FORMAT_R8G8_UNORM;
        case DXGI_FORMAT_R32_UINT: return VK_FORMAT_R32_UINT;
        default: return VK_FORMAT_UNDEFINED;
    }
}

VkPrimitiveTopology Topology(uint32_t topo) {
    switch (topo & 0xFF) {
        case 0: return VK_PRIMITIVE_TOPOLOGY_POINT_LIST;
        case 1: return topo & 0x100 ? VK_PRIMITIVE_TOPOLOGY_LINE_STRIP : VK_PRIMITIVE_TOPOLOGY_LINE_LIST;
        default: return topo & 0x100 ? VK_PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP : VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    }
}

// one VkShaderModule stage per pipeline build
struct StageModules {
    VkShaderModule vs = VK_NULL_HANDLE, ps = VK_NULL_HANDLE;
    const Reflect* vs_reflect = nullptr;
    const Reflect* ps_reflect = nullptr;
};

// both stages' descriptors by set: the game's shaders share b0, b1 and four textures and samplers
VkPipelineLayout MakeLayout(const Reflect& vs, const Reflect& ps, std::array<VkDescriptorSetLayout, 4>& out_sets,
                            std::vector<ReflectBinding>* out_bindings) {
    struct B {
        VkDescriptorType type = VK_DESCRIPTOR_TYPE_MAX_ENUM;
        uint32_t count = 0;
        std::string name;
    };
    std::unordered_map<uint32_t, std::unordered_map<uint32_t, B>> sets;
    auto add = [&](const ReflectBinding& b) {
        auto& s = sets[b.set];
        auto it = s.find(b.binding);
        if (it == s.end()) s[b.binding] = {b.type, 1, b.name};
        else if (it->second.type == b.type) it->second.count = std::max(it->second.count, b.count);
    };
    for (auto& b : vs.bindings) add(b);
    for (auto& b : ps.bindings) add(b);
    if (out_bindings) out_bindings->clear();
    VkPipelineLayoutCreateInfo lc{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO};
    std::vector<VkDescriptorSetLayout> layouts;
    for (uint32_t set = 0; set < 4; set++) {
        auto s = sets.find(set);
        if (s == sets.end() || s->second.empty()) continue;
        std::vector<VkDescriptorSetLayoutBinding> bindings;
        for (auto& [binding, b] : s->second) {
            bindings.push_back({binding, b.type, b.count, VK_SHADER_STAGE_VERTEX_BIT | VK_SHADER_STAGE_FRAGMENT_BIT,
                                nullptr});
            if (out_bindings) out_bindings->push_back({set, binding, b.count, b.type, b.name});
        }
        VkDescriptorSetLayoutCreateInfo lc2{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO};
        lc2.bindingCount = uint32_t(bindings.size());
        lc2.pBindings = bindings.data();
        VkDescriptorSetLayout l = VK_NULL_HANDLE;
        if (!VKCHECK(vkCreateDescriptorSetLayout(g_ctx.dev, &lc2, nullptr, &l))) return VK_NULL_HANDLE;
        out_sets[set] = l;
        layouts.push_back(l);
    }
    lc.pSetLayouts = layouts.data();
    lc.setLayoutCount = uint32_t(layouts.size());
    VkPipelineLayout l = VK_NULL_HANDLE;
    if (!VKCHECK(vkCreatePipelineLayout(g_ctx.dev, &lc, nullptr, &l))) return VK_NULL_HANDLE;
    return l;
}

// the pipeline from a key and the two modules, on the calling thread
VkPipeline Build(const PsoKey& k, VkPipelineLayout layout, StageModules& st, VkRenderPass pass) {
    VkPipelineShaderStageCreateInfo stages[2] = {};
    stages[0].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stages[0].module = st.vs;
    stages[0].pName = "main";
    stages[1].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    stages[1].module = st.ps;
    stages[1].pName = "main";

    // vertex input: one binding per stream the draw supplies, one attribute per input register
    VkVertexInputBindingDescription binds[16]{};
    uint32_t nbind = 0;
    for (uint32_t i = 0; i < 16 && nbind < 16; i++) {
        bool used = false;
        for (uint32_t r = 0; r < 16; r++)
            if ((k.regs >> r) & 1 && (k.elements[r] >> 8 & 0xFF) == i) used = true;
        if (!used || !k.strides[i]) continue;
        binds[nbind++] = {i, k.strides[i], VK_VERTEX_INPUT_RATE_VERTEX};
    }
    VkVertexInputAttributeDescription attrs[16]{};
    uint32_t nattr = 0;
    for (uint32_t r = 0; r < 16; r++) {
        if (!((k.regs >> r) & 1)) continue;
        uint32_t e = k.elements[r];
        VkFormat fmt = VertexFormat(e & 0xFF);
        if (fmt == VK_FORMAT_UNDEFINED) continue;
        // the shader's ATTR semantics get locations by declaration order, the registers' own order here
        attrs[nattr] = {nattr, e >> 8 & 0xFF, fmt, e >> 16};
        nattr++;
    }
    VkPipelineVertexInputStateCreateInfo vi{VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
    vi.vertexBindingDescriptionCount = nbind;
    vi.pVertexBindingDescriptions = binds;
    vi.vertexAttributeDescriptionCount = nattr;
    vi.pVertexAttributeDescriptions = attrs;

    VkPipelineInputAssemblyStateCreateInfo ia{VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
    ia.topology = Topology(k.topo);

    VkPipelineViewportStateCreateInfo vp{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
    vp.viewportCount = 1;
    vp.scissorCount = 1;  // both dynamic

    VkPipelineRasterizationStateCreateInfo rs{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
    rs.polygonMode = k.fill == 2 ? VK_POLYGON_MODE_LINE : VK_POLYGON_MODE_FILL;  // D3DFILL_WIREFRAME
    rs.cullMode = k.cull ? (k.ccw ? VK_CULL_MODE_FRONT_BIT : VK_CULL_MODE_BACK_BIT) : VK_CULL_MODE_NONE;
    rs.frontFace = k.ccw ? VK_FRONT_FACE_COUNTER_CLOCKWISE : VK_FRONT_FACE_CLOCKWISE;
    rs.depthClampEnable = VK_FALSE;  // D3D12's DepthClipEnable: clip past the z range
    rs.depthBiasEnable = k.has_ds && (k.zbias || k.zslope != 0);
    rs.depthBiasConstantFactor = float(k.zbias);
    rs.depthBiasSlopeFactor = k.zslope;
    rs.lineWidth = 1;

    // the console's front faces run clockwise on screen, Vulkan's default is the same
    VkPipelineMultisampleStateCreateInfo ms{VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
    ms.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    ms.minSampleShading = 1;

    VkPipelineDepthStencilStateCreateInfo ds{VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
    ds.depthTestEnable = k.zen;
    ds.depthWriteEnable = k.zen && k.zwrite;
    ds.depthCompareOp = k.zen ? Cmp(k.zfunc) : VK_COMPARE_OP_ALWAYS;
    ds.stencilTestEnable = k.sten;
    ds.front.failOp = StencilOp(k.sfail);
    ds.front.passOp = StencilOp(k.spass);
    ds.front.depthFailOp = StencilOp(k.szfail);
    ds.front.compareOp = k.sten ? Cmp(k.sfunc) : VK_COMPARE_OP_ALWAYS;
    ds.front.compareMask = k.smask ? k.smask : 0xFF;
    ds.front.writeMask = k.swmask;
    ds.front.reference = 0;  // dynamic
    ds.back = ds.front;
    ds.minDepthBounds = 0;
    ds.maxDepthBounds = 1;

    VkPipelineColorBlendAttachmentState cb{};
    cb.blendEnable = k.blend;
    cb.srcColorBlendFactor = Blend(k.src, false);
    cb.dstColorBlendFactor = Blend(k.dst, false);
    cb.colorBlendOp = BlendOp(k.op);
    cb.srcAlphaBlendFactor = Blend(k.src, true);
    cb.dstAlphaBlendFactor = Blend(k.dst, true);
    cb.alphaBlendOp = BlendOp(k.op);
    cb.colorWriteMask = VkColorComponentFlags(k.wmask ? k.wmask : 0xF);
    VkPipelineColorBlendStateCreateInfo cbs{VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
    cbs.attachmentCount = 1;
    cbs.pAttachments = &cb;

    VkGraphicsPipelineCreateInfo pc{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
    pc.stageCount = 2;
    pc.pStages = stages;
    pc.pVertexInputState = &vi;
    pc.pInputAssemblyState = &ia;
    pc.pViewportState = &vp;
    pc.pRasterizationState = &rs;
    pc.pMultisampleState = &ms;
    pc.pDepthStencilState = k.has_ds ? &ds : nullptr;
    pc.pColorBlendState = &cbs;
    pc.pDynamicState = nullptr;
    VkDynamicState dyn[] = {VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR, VK_DYNAMIC_STATE_BLEND_CONSTANTS,
                            VK_DYNAMIC_STATE_STENCIL_REFERENCE, VK_DYNAMIC_STATE_DEPTH_BIAS};
    VkPipelineDynamicStateCreateInfo dyns{VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
    dyns.dynamicStateCount = 5;
    dyns.pDynamicStates = dyn;
    pc.pDynamicState = &dyns;
    pc.layout = layout;
    pc.renderPass = pass;
    pc.subpass = 0;
    VkPipeline pipe = VK_NULL_HANDLE;
    {
        std::lock_guard create_lock(g_pipe_create_lock);
        if (!VKCHECK(vkCreateGraphicsPipelines(g_ctx.dev, g_ctx.pipe_cache, 1, &pc, nullptr, &pipe)))
            return VK_NULL_HANDLE;
    }
    return pipe;
}

struct KeyedPipeline {
    Pipeline pipeline;
    bool ready = false;
    bool building = false;
    PsoKey key;
    std::mutex lock;
};

std::mutex g_map_lock;
std::unordered_map<uint64_t, KeyedPipeline*> g_map;

constexpr uint64_t kPipelineSalt = 0x50534F4B45590000ull;  // 'PSOKEY'

uint64_t KeyHash(const PsoKey& k) { return Hash(&k, sizeof(k), kPipelineSalt); }

// builds one pipeline on a build thread or the render thread; the render pass must exist by then
void BuildPipeline(KeyedPipeline& kp) {
    PsoKey k = kp.key;
    StageModules st;
    bool pending = false;
    Shader vs, ps;
    // the shaders' sources were registered by the draw that first used the key
    if (!EnsureShaderByHash(k.vs, vs, false, pending) || !EnsureShaderByHash(k.ps, ps, false, pending)) {
        // the build thread has not got them yet; the next draw retries
        std::lock_guard lock(kp.lock);
        kp.building = false;
        return;
    }
    st.vs = vs.module;
    st.ps = ps.module;
    st.vs_reflect = &vs.reflect;
    st.ps_reflect = &ps.reflect;
    Pipeline p;
    p.layout = MakeLayout(vs.reflect, ps.reflect, p.sets, &p.bindings);
    if (!p.layout) return;
    VkFormat color = k.has_rt ? VkFormat(k.rtfmt) : kBgra;
    VkRenderPass pass = GetRenderPass(color, k.has_ds ? g_ctx.depth_fmt : VK_FORMAT_UNDEFINED, VK_SAMPLE_COUNT_1_BIT,
                                      false, false);
    if (!pass) return;
    p.pipe = Build(k, p.layout, st, pass);
    if (!p.pipe) return;
    std::lock_guard lock(kp.lock);
    if (kp.pipeline.pipe) vkDestroyPipeline(g_ctx.dev, kp.pipeline.pipe, nullptr);
    if (kp.pipeline.layout) vkDestroyPipelineLayout(g_ctx.dev, kp.pipeline.layout, nullptr);
    kp.pipeline = p;
    kp.ready = true;
}

}  // namespace

VkPipelineLayout PipelineLayoutFull(const Reflect& vs, const Reflect& ps, std::array<VkDescriptorSetLayout, 4>& sets_out,
                                    std::vector<ReflectBinding>* out_bindings) {
    return MakeLayout(vs, ps, sets_out, out_bindings);
}

VkPipelineLayout PipelineLayoutFrom(const Reflect& vs, const Reflect& ps, std::vector<ReflectBinding>* out) {
    std::array<VkDescriptorSetLayout, 4> sets{};
    return MakeLayout(vs, ps, sets, out);
}

// the full screen blit's pipeline: no vertex input, blending for the premultiplied over case, cached by format
VkPipeline BuildBlitPipeline(VkFormat color, bool over) {
    static std::mutex lock;
    static std::unordered_map<uint64_t, VkPipeline> pipes;
    uint64_t key = uint64_t(color) | uint64_t(over) << 32;
    {
        std::lock_guard l(lock);
        auto it = pipes.find(key);
        if (it != pipes.end()) return it->second;
    }
    if (!EnsureBlitShaders()) return VK_NULL_HANDLE;
    VkPipelineShaderStageCreateInfo stages[2] = {};
    stages[0].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[0].stage = VK_SHADER_STAGE_VERTEX_BIT;
    stages[0].module = g_blit.vs.module;
    stages[0].pName = "main";
    stages[1].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
    stages[1].stage = VK_SHADER_STAGE_FRAGMENT_BIT;
    stages[1].module = g_blit.fs.module;
    stages[1].pName = "main";
    VkPipelineVertexInputStateCreateInfo vi{VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO};
    VkPipelineInputAssemblyStateCreateInfo ia{VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO};
    ia.topology = VK_PRIMITIVE_TOPOLOGY_TRIANGLE_LIST;
    VkPipelineViewportStateCreateInfo vp{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO};
    vp.viewportCount = 1;
    vp.scissorCount = 1;
    VkPipelineRasterizationStateCreateInfo rs{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO};
    rs.cullMode = VK_CULL_MODE_NONE;
    rs.frontFace = VK_FRONT_FACE_CLOCKWISE;
    rs.lineWidth = 1;
    VkPipelineMultisampleStateCreateInfo ms{VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO};
    ms.rasterizationSamples = VK_SAMPLE_COUNT_1_BIT;
    VkPipelineDepthStencilStateCreateInfo ds{VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO};
    ds.depthTestEnable = VK_FALSE;
    ds.depthWriteEnable = VK_FALSE;
    ds.stencilTestEnable = VK_FALSE;
    VkPipelineColorBlendAttachmentState cb{};
    cb.blendEnable = over;
    cb.srcColorBlendFactor = VK_BLEND_FACTOR_ONE;
    cb.dstColorBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    cb.colorBlendOp = VK_BLEND_OP_ADD;
    cb.srcAlphaBlendFactor = VK_BLEND_FACTOR_ONE;
    cb.dstAlphaBlendFactor = VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA;
    cb.alphaBlendOp = VK_BLEND_OP_ADD;
    cb.colorWriteMask = VK_COLOR_COMPONENT_R_BIT | VK_COLOR_COMPONENT_G_BIT | VK_COLOR_COMPONENT_B_BIT |
                        VK_COLOR_COMPONENT_A_BIT;
    VkPipelineColorBlendStateCreateInfo cbs{VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO};
    cbs.attachmentCount = 1;
    cbs.pAttachments = &cb;
    VkDynamicState dyn[] = {VK_DYNAMIC_STATE_VIEWPORT, VK_DYNAMIC_STATE_SCISSOR};
    VkPipelineDynamicStateCreateInfo dyns{VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO};
    dyns.dynamicStateCount = 2;
    dyns.pDynamicStates = dyn;
    VkRenderPass pass = GetRenderPass(color, VK_FORMAT_UNDEFINED, VK_SAMPLE_COUNT_1_BIT, false, false);
    if (!pass) return VK_NULL_HANDLE;
    VkGraphicsPipelineCreateInfo pc{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO};
    pc.stageCount = 2;
    pc.pStages = stages;
    pc.pVertexInputState = &vi;
    pc.pInputAssemblyState = &ia;
    pc.pViewportState = &vp;
    pc.pRasterizationState = &rs;
    pc.pMultisampleState = &ms;
    pc.pDepthStencilState = &ds;
    pc.pColorBlendState = &cbs;
    pc.pDynamicState = &dyns;
    pc.layout = g_blit.layout;
    pc.renderPass = pass;
    VkPipeline pipe = VK_NULL_HANDLE;
    VkResult created = VK_ERROR_INITIALIZATION_FAILED;
    {
        std::lock_guard create_lock(g_pipe_create_lock);
        created = vkCreateGraphicsPipelines(g_ctx.dev, g_ctx.pipe_cache, 1, &pc, nullptr, &pipe);
    }
    if (created != VK_SUCCESS) {
        // the variant in the log: if the lock was not enough, the format and blend say which case died
        LOGE("vulkan: the blit pipeline for color format %u over %u failed: %d", uint32_t(color), over ? 1 : 0,
             int(created));
        return VK_NULL_HANDLE;
    }
    {
        std::lock_guard l(lock);
        pipes.emplace(key, pipe);
    }
    return pipe;
}

bool EnsurePipeline(const PsoKey& k, bool wait, Pipeline** out, bool& pending) {
    uint64_t h = KeyHash(k);
    KeyedPipeline* kp = nullptr;
    {
        std::lock_guard lock(g_map_lock);
        auto it = g_map.find(h);
        if (it == g_map.end()) {
            kp = new KeyedPipeline;
            kp->key = k;
            g_map.emplace(h, kp);
        } else {
            kp = it->second;
        }
    }
    if (kp->ready) {
        *out = &kp->pipeline;
        return true;
    }
    bool want = false;
    {
        std::lock_guard lock(kp->lock);
        if (!kp->building) {
            kp->building = true;
            want = true;
        }
    }
    if (!want) {
        pending = true;
        return false;
    }
    if (wait) {
        // a quad over the screen waits: its pass shows what lies under it otherwise
        BuildPipeline(*kp);
        if (kp->ready) {
            *out = &kp->pipeline;
            return true;
        }
        pending = true;
        return false;
    }
    ::gpu::cache::Post([&kp] { BuildPipeline(*kp); });
    pending = true;
    return false;
}

void ClearPipelineMap() {
    std::lock_guard lock(g_map_lock);
    for (auto& [h, kp] : g_map) {
        if (kp->pipeline.pipe) vkDestroyPipeline(g_ctx.dev, kp->pipeline.pipe, nullptr);
        if (kp->pipeline.layout) vkDestroyPipelineLayout(g_ctx.dev, kp->pipeline.layout, nullptr);
        for (auto& s : kp->pipeline.sets)
            if (s) vkDestroyDescriptorSetLayout(g_ctx.dev, s, nullptr);
        delete kp;
    }
    g_map.clear();
}

}  // namespace gpu::vk
