#pragma once
// The Vulkan backend's shared pieces: device, memory, frames, images and the SPIR-V reflection every pipeline and
// descriptor set is built from. The backend itself is gpu/vulkan.cpp; shaders compile in vulkan_shader.cpp and
// pipelines are built in vulkan_pipeline.cpp.
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include "../platform/wincompat.h"
#include "../platform/dxgishim.h"

#include <vulkan/vulkan.h>

#include <algorithm>
#include <array>
#include <atomic>
#include <cstdint>
#include <cstring>
#include <functional>
#include <map>
#include <memory>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>

#include "core/log.h"
#include "gpu/backend.h"
#include "gpu/shaders.h"
#include "gpu/state.h"
#include "gpu/texture.h"
#include "gpu/vertex.h"
#include "gpu/pipeline_cache.h"
#include "kernel/kernel.h"

// set at Init: hands the serialized VkPipelineCache to the runtime's SavePipelineCache (defined in gpu/pipeline_cache.cpp)
namespace gpu {
extern void (*CollectPipelineCacheData)(const std::function<bool(const void*, size_t)>&);
}  // namespace gpu

namespace gpu::vk {

constexpr int kFrames = 3;
constexpr uint64_t kUploadSize = 32ull << 20;
// a draw starting with less than this left in the frame's ring waits for the GPU and starts the ring over
constexpr uint64_t kUploadReserve = 8ull << 20;
constexpr uint64_t kBlockBytes = 64ull << 20;

// BGRA is what the console's surfaces and the swapchain hold
constexpr VkFormat kBgra = VK_FORMAT_B8G8R8A8_UNORM;

inline const char* VkResultName(VkResult r) {
    switch (r) {
        case VK_SUCCESS: return "VK_SUCCESS";
        case VK_NOT_READY: return "VK_NOT_READY";
        case VK_TIMEOUT: return "VK_TIMEOUT";
        case VK_EVENT_SET: return "VK_EVENT_SET";
        case VK_EVENT_RESET: return "VK_EVENT_RESET";
        case VK_INCOMPLETE: return "VK_INCOMPLETE";
        case VK_SUBOPTIMAL_KHR: return "VK_SUBOPTIMAL_KHR";
        case VK_ERROR_OUT_OF_HOST_MEMORY: return "VK_ERROR_OUT_OF_HOST_MEMORY";
        case VK_ERROR_OUT_OF_DEVICE_MEMORY: return "VK_ERROR_OUT_OF_DEVICE_MEMORY";
        case VK_ERROR_INITIALIZATION_FAILED: return "VK_ERROR_INITIALIZATION_FAILED";
        case VK_ERROR_DEVICE_LOST: return "VK_ERROR_DEVICE_LOST";
        case VK_ERROR_MEMORY_MAP_FAILED: return "VK_ERROR_MEMORY_MAP_FAILED";
        case VK_ERROR_LAYER_NOT_PRESENT: return "VK_ERROR_LAYER_NOT_PRESENT";
        case VK_ERROR_EXTENSION_NOT_PRESENT: return "VK_ERROR_EXTENSION_NOT_PRESENT";
        case VK_ERROR_FEATURE_NOT_PRESENT: return "VK_ERROR_FEATURE_NOT_PRESENT";
        case VK_ERROR_INCOMPATIBLE_DRIVER: return "VK_ERROR_INCOMPATIBLE_DRIVER";
        case VK_ERROR_TOO_MANY_OBJECTS: return "VK_ERROR_TOO_MANY_OBJECTS";
        case VK_ERROR_FORMAT_NOT_SUPPORTED: return "VK_ERROR_FORMAT_NOT_SUPPORTED";
        case VK_ERROR_FRAGMENTED_POOL: return "VK_ERROR_FRAGMENTED_POOL";
        case VK_ERROR_UNKNOWN: return "VK_ERROR_UNKNOWN";
        case VK_ERROR_OUT_OF_POOL_MEMORY: return "VK_ERROR_OUT_OF_POOL_MEMORY";
        case VK_ERROR_INVALID_EXTERNAL_HANDLE: return "VK_ERROR_INVALID_EXTERNAL_HANDLE";
        case VK_ERROR_FRAGMENTATION: return "VK_ERROR_FRAGMENTATION";
        case VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS: return "VK_ERROR_INVALID_OPAQUE_CAPTURE_ADDRESS";
        case VK_ERROR_SURFACE_LOST_KHR: return "VK_ERROR_SURFACE_LOST_KHR";
        case VK_ERROR_NATIVE_WINDOW_IN_USE_KHR: return "VK_ERROR_NATIVE_WINDOW_IN_USE_KHR";
        case VK_ERROR_OUT_OF_DATE_KHR: return "VK_ERROR_OUT_OF_DATE_KHR";
        case VK_ERROR_INCOMPATIBLE_DISPLAY_KHR: return "VK_ERROR_INCOMPATIBLE_DISPLAY_KHR";
        case VK_ERROR_VALIDATION_FAILED_EXT: return "VK_ERROR_VALIDATION_FAILED_EXT";
        default: return "VK_RESULT_UNKNOWN";
    }
}

#define VKCHECK(call)                                                                                                  \
    ({                                                                                                                 \
        VkResult _r = (call);                                                                                          \
        if (_r != VK_SUCCESS) {                                                                                        \
            LOGE("vulkan: %s failed: %s (%d) at %s:%d", #call, VkResultName(_r), int(_r), __FILE__, __LINE__);        \
        }                                                                                                              \
        _r == VK_SUCCESS;                                                                                              \
    })

// D3D state decode helpers, as d3d12.cpp defines them
inline float Bits(uint32_t v) {
    float f;
    std::memcpy(&f, &v, 4);
    return f;
}
inline void Color(uint32_t c, float out[4]) {
    out[0] = (c >> 16 & 0xFF) / 255.0f;
    out[1] = (c >> 8 & 0xFF) / 255.0f;
    out[2] = (c & 0xFF) / 255.0f;
    out[3] = (c >> 24 & 0xFF) / 255.0f;
}

// the guest colour surface pitch, 64 byte steps as the console's linear colour formats hold
inline uint32_t GuestPitch(uint32_t w) { return (w * 4 + 63) & ~63u; }

extern std::mutex g_pipe_create_lock;

// one memory block: device memory with a first fit free list
struct MemBlock {
    VkDeviceMemory mem = VK_NULL_HANDLE;
    VkDeviceSize size = 0;
    uint8_t* map = nullptr;  // host visible blocks only
    struct Range {
        VkDeviceSize off, size;
    };
    std::vector<Range> free_ranges;
};

// a Vulkan image with its views and the layout it is in
struct Image {
    VkImage image = VK_NULL_HANDLE;
    VkImageView read = VK_NULL_HANDLE;   // shader resource: 2D, 3D or cube, depth aspect for depth targets
    VkImageView attach = VK_NULL_HANDLE; // framebuffer attachment view (colour or depth stencil)
    MemBlock* block = nullptr;
    VkDeviceSize offset = 0, free_offset = 0, bytes = 0;
    VkFormat fmt = kBgra;
    uint32_t w = 0, h = 0, levels = 1, layers = 1;
    bool depth = false, cube = false, render_target = false;
    VkSampleCountFlagBits samples = VK_SAMPLE_COUNT_1_BIT;
    VkImageLayout layout = VK_IMAGE_LAYOUT_UNDEFINED;
};

// a decoded guest texture, keyed by data address, as d3d12.cpp keeps them
struct Tex {
    Image img;
    TextureDesc d;
    VkFormat fmt = kBgra;
    uint32_t levels = 1;
    uint64_t sig = 0;
    uint64_t frame = 0;
    uint64_t palette = 0;
    bool norm = false;  // a normalization cube
};

// a render target or depth buffer, keyed by its surface's data address and depthness
struct Target {
    Image img;                      // the picture (multisampled when samples > 1)
    Image* resolve = nullptr;       // single sample copy when samples > 1, made on demand
    Image* fb = nullptr;            // single sample copy of the target being drawn to, for a feedback draw
    std::vector<uint8_t> read;      // what Sync left in guest memory
    uint32_t gw = 0, gh = 0;        // the console's size
    uint32_t w = 0, h = 0;          // the host size
    uint32_t data = 0, bytes = 0;
    bool depth = false;
    bool drawn = false;             // the GPU wrote it since the last readback
    uint64_t epoch = 0, sig = 0;
    VkSampleCountFlagBits samples = VK_SAMPLE_COUNT_1_BIT;
    VkFormat fmt = kBgra;
};

// a frame's resources: command buffer, sync, upload ring and descriptor pool
struct Frame {
    VkCommandPool pool = VK_NULL_HANDLE;
    VkCommandBuffer cmd = VK_NULL_HANDLE;
    VkFence fence = VK_NULL_HANDLE;
    VkSemaphore avail = VK_NULL_HANDLE, done = VK_NULL_HANDLE;
    VkBuffer upload = VK_NULL_HANDLE;
    MemBlock* upload_block = nullptr;
    VkDeviceSize used = 0;
    VkDescriptorPool dpool = VK_NULL_HANDLE;
    uint64_t fence_value = 0;
    std::vector<VkFramebuffer> garbage_fb;
    std::vector<VkImageView> garbage_views;
    std::vector<VkSwapchainKHR> garbage_swapchains;
    std::vector<VkSurfaceKHR> garbage_surfaces;
    std::vector<Image*> garbage_img;
    std::vector<VkBuffer> garbage_buf;
    std::vector<VkDeviceMemory> garbage_mem;
};

// what a shader's SPIR-V asks for, from its decorations
struct ReflectBinding {
    uint32_t set = 0, binding = 0, count = 1;
    VkDescriptorType type = VK_DESCRIPTOR_TYPE_MAX_ENUM;
    std::string name;  // the shader's own name for it: c, DC, tex0..3, smp0..3, img, lut, ls, ps, B
};
struct Reflect {
    std::vector<ReflectBinding> bindings;  // merged from both stages
};

// the device context: everything the backend's parts share
struct Ctx {
    VkInstance instance = VK_NULL_HANDLE;
    VkSurfaceKHR surface = VK_NULL_HANDLE;
    VkPhysicalDevice phys = VK_NULL_HANDLE;
    VkPhysicalDeviceProperties props{};
    VkPhysicalDeviceMemoryProperties memprops{};
    VkDevice dev = VK_NULL_HANDLE;
    uint32_t gfx_family = 0;
    VkQueue queue = VK_NULL_HANDLE;
    // the swapchain and its images
    VkSwapchainKHR swap = VK_NULL_HANDLE;
    std::vector<Image> swap_targets;
    uint32_t bb_w = 0, bb_h = 0;
    VkSurfaceFormatKHR swap_fmt{};
    VkFormat depth_fmt = VK_FORMAT_D24_UNORM_S8_UINT;
    bool bc_support[3] = {false, false, false};  // BC1, BC2, BC3
    bool sampled_depth24 = false;                // depth formats readable by a shadow sampler
    uint32_t aniso_cap = 1;
    // memory buckets by type index; the pointers stay put in unique_ptrs
    std::unordered_map<uint32_t, std::vector<std::unique_ptr<MemBlock>>> mem_types;
    // per frame in flight
    std::array<Frame, kFrames> frames;
    uint32_t frame_index = 0;
    uint64_t fence_value = 0;  // the submit this frame's fence will signal
    uint64_t done_value = 0;   // the highest fence completed
    VkPipelineCache pipe_cache = VK_NULL_HANDLE;
    uint64_t presents = 0;
    uint64_t present_calls = 0;
    // present pacing: the submit a present went out with, by its count modulo the slots
    std::array<std::atomic<uint64_t>, kFrames + 1> present_fence{};
    // acquired image for the present being recorded, and whether one was acquired
    uint32_t swap_index = 0;
    bool swap_acquired = false;
    bool swap_stale = false;

    Frame& Current() { return frames[frame_index % kFrames]; }
};

extern Ctx g_ctx;

// vulkan_device.cpp
bool CreateInstanceAndDevice();
void DestroyDevice();
bool CreateSwapchain();
void DestroySwapchain();
bool ResizeSwap();
// suballocation from 64 MB blocks per memory type
bool AllocBlock(uint32_t type, VkDeviceSize size, bool host, MemBlock** out);
bool Suballoc(uint32_t type_bits, VkDeviceSize size, VkDeviceSize align, bool host, MemBlock** out_block,
              VkDeviceSize* out_off, uint8_t** out_cpu, VkDeviceSize* out_size = nullptr,
              VkDeviceSize* out_free_off = nullptr);
void Subfree(MemBlock* block, VkDeviceSize off, VkDeviceSize size);
// the frame's command buffer opened for recording
bool BeginFrame();
// submits; wait: for it to finish, then the frame is ready to record again
bool SubmitFrame(bool wait);
bool WaitFenceValue(uint64_t value);
// bytes from the frame's upload ring; a buffer of its own when it does not fit
struct Upload {
    VkBuffer buf = VK_NULL_HANDLE;
    VkDeviceSize off = 0;
    uint8_t* cpu = nullptr;
};
Upload AllocUpload(VkDeviceSize size, VkDeviceSize align);
bool MakeBuffer(VkDeviceSize bytes, VkBufferUsageFlags usage, MemBlock** block, VkDeviceSize* off, VkBuffer* buf,
                bool host, VkDeviceSize* allocation_size = nullptr, VkDeviceSize* allocation_offset = nullptr);
bool CreateImage(Image& img, VkFormat fmt, uint32_t w, uint32_t h, uint32_t levels, uint32_t layers, bool cube,
                 bool depth, bool render_target, VkSampleCountFlagBits samples, uint32_t extent_depth = 1);
void DestroyImage(Image& img);
void Transition(Image& img, VkImageLayout want);
VkRenderPass GetRenderPass(VkFormat color, VkFormat depth, VkSampleCountFlagBits samples, bool clear_color,
                           bool clear_depth);
void ClearRenderPasses();
VkFramebuffer GetFramebuffer(Image& color, Image* ds, VkRenderPass pass, uint32_t w, uint32_t h);
void InvalidateFramebuffers(Image* image);
void ClearFramebuffers();
bool ReadBackImage(Image& img, uint32_t w, uint32_t h, std::vector<uint8_t>& out);
void ReleaseFrameGarbage(Frame& f);
bool EndWaitReopen();
bool AcquireNextImage();
bool PresentSwapchain(bool pillarbox);

// vulkan_shader.cpp
// HLSL to SPIR-V through shaderc; the module is cached by source hash and the SPIR-V kept on disk
struct Shader {
    VkShaderModule module = VK_NULL_HANDLE;
    Reflect reflect;
    std::vector<uint8_t> spirv;
};
bool EnsureShader(uint64_t hash, const std::string& src, const char* entry, VkShaderStageFlagBits stage, Shader& out,
                  bool compile, bool& pending);
void RegisterShaderSource(uint64_t hash, const std::string& src, VkShaderStageFlagBits stage);
bool EnsureShaderByHash(uint64_t hash, Shader& out, bool compile, bool& pending);
void DestroyShaderCache();
// the full screen passes' shaders and pipeline layout, built once
struct BlitShaders {
    Shader vs, fs;
    VkPipelineLayout layout = VK_NULL_HANDLE;
    std::array<VkDescriptorSetLayout, 4> sets{};
    std::vector<ReflectBinding> bindings;
};
extern BlitShaders g_blit;
bool EnsureBlitShaders();

// vulkan_pipeline.cpp
struct PsoKey {
    uint64_t vs;
    uint64_t ps;
    uint32_t regs;
    uint32_t topo;           // Topology enum, strip flag at bit 8
    uint32_t has_rt;
    uint32_t has_ds;
    uint32_t elements[16];   // per register: DXGI format, buffer << 8, offset << 16
    uint32_t strides[16];    // per buffer: the draw's stride, Vulkan needs it in the pipeline
    uint32_t blend;
    uint32_t src;
    uint32_t dst;
    uint32_t op;
    uint32_t wmask;
    uint32_t zen;
    uint32_t zwrite;
    uint32_t zfunc;
    uint32_t sten;
    uint32_t sfunc;
    uint32_t smask;
    uint32_t swmask;
    uint32_t sfail;
    uint32_t szfail;
    uint32_t spass;
    uint32_t cull;
    uint32_t ccw;
    uint32_t fill;
    int32_t zbias;
    float zslope;
    uint32_t rtfmt;
};
struct Pipeline {
    VkPipeline pipe = VK_NULL_HANDLE;
    VkPipelineLayout layout = VK_NULL_HANDLE;
    std::array<VkDescriptorSetLayout, 4> sets{};
    std::vector<ReflectBinding> bindings;  // the merged reflection, what the draw's sets are written from
};
// from the map, else built; pending: another draw must retry after a failed build
bool EnsurePipeline(const PsoKey& k, bool wait, Pipeline** out, bool& pending);
void ClearPipelineMap();  // after a device reset: modules stay, pipelines do not
VkPipelineLayout PipelineLayoutFrom(const Reflect& vs, const Reflect& ps, std::vector<ReflectBinding>* out = nullptr);
// the same, handing back the per set layouts the descriptor sets allocate from
VkPipelineLayout PipelineLayoutFull(const Reflect& vs, const Reflect& ps, std::array<VkDescriptorSetLayout, 4>& sets_out,
                                    std::vector<ReflectBinding>* out_bindings);
// the full screen blit's pipeline: no vertex input, blending for the premultiplied over case
VkPipeline BuildBlitPipeline(VkFormat color, bool over);

// the pipeline cache's serialized data, handed to SavePipelineCache
bool CollectPipelineCache(std::function<bool(const void*, size_t)> write);

}  // namespace gpu::vk
