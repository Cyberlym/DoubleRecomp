// The Vulkan backend's device side: instance and Android surface, physical device and queues, the swapchain and its
// recreation on size changes, device memory suballocated from large blocks, the frames in flight with their command
// buffers, upload rings and descriptor pools, and the images, render passes and read backs everything else uses.
#include "vulkan_internal.h"

#include <SDL3/SDL.h>
#include <SDL3/SDL_vulkan.h>

#include "app/app.h"

namespace gpu::vk {

Ctx g_ctx;
BlitShaders g_blit;

namespace {

uint32_t MemoryType(uint32_t type_bits, VkMemoryPropertyFlags want) {
    for (uint32_t i = 0; i < g_ctx.memprops.memoryTypeCount; i++)
        if (type_bits & (1u << i) && (g_ctx.memprops.memoryTypes[i].propertyFlags & want) == want) return i;
    return 0xFFFFFFFF;
}

struct LayoutInfo {
    VkPipelineStageFlags stage;
    VkAccessFlags access;
};
LayoutInfo LayoutUse(VkImageLayout l, bool depth) {
    switch (l) {
        case VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL:
            return {VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT, VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT};
        case VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL:
            return {VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT | VK_PIPELINE_STAGE_LATE_FRAGMENT_TESTS_BIT,
                    VK_ACCESS_DEPTH_STENCIL_ATTACHMENT_WRITE_BIT};
        case VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL:
            return {VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, VK_ACCESS_SHADER_READ_BIT};
        case VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL:
            return {VK_PIPELINE_STAGE_TRANSFER_BIT, VK_ACCESS_TRANSFER_READ_BIT};
        case VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL:
            return {VK_PIPELINE_STAGE_TRANSFER_BIT, VK_ACCESS_TRANSFER_WRITE_BIT};
        default:
            return {depth ? VK_PIPELINE_STAGE_EARLY_FRAGMENT_TESTS_BIT : VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
                    0};
    }
}

// closes, submits and waits out the frame's command buffer, then reopens it; used by the read back path, where the
// game is blocked until the pixels come back

}  // namespace

// closes, submits and waits out the frame's command buffer, then reopens it; used by the read back path, where the
// game is blocked until the pixels come back
bool EndWaitReopen() {
    Ctx& c = g_ctx;
    Frame& f = c.Current();
    VkResult r;
    
    r = vkEndCommandBuffer(f.cmd);
    if (r != VK_SUCCESS) { LOGE("vulkan: vkEndCommandBuffer failed: %d", int(r)); return false; }
    
    VkSubmitInfo si{VK_STRUCTURE_TYPE_SUBMIT_INFO};
    si.commandBufferCount = 1;
    si.pCommandBuffers = &f.cmd;
    f.fence_value = ++c.fence_value;
    
    r = vkQueueSubmit(c.queue, 1, &si, f.fence);
    if (r != VK_SUCCESS) { LOGE("vulkan: vkQueueSubmit failed: %d", int(r)); return false; }
    
    r = vkWaitForFences(c.dev, 1, &f.fence, VK_TRUE, UINT64_MAX);
    if (r != VK_SUCCESS) { LOGE("vulkan: vkWaitForFences failed: %d", int(r)); return false; }
    
    c.done_value = std::max(c.done_value, f.fence_value);
    
    r = vkResetFences(c.dev, 1, &f.fence);
    if (r != VK_SUCCESS) { LOGE("vulkan: vkResetFences failed: %d", int(r)); return false; }
    
    ReleaseFrameGarbage(f);
    f.used = 0;
    
    r = vkResetDescriptorPool(c.dev, f.dpool, 0);
    if (r != VK_SUCCESS) { LOGE("vulkan: vkResetDescriptorPool failed: %d", int(r)); return false; }
    
    r = vkResetCommandBuffer(f.cmd, 0);
    if (r != VK_SUCCESS) { LOGE("vulkan: vkResetCommandBuffer failed: %d", int(r)); return false; }
    
    VkCommandBufferBeginInfo bi{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    bi.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    
    r = vkBeginCommandBuffer(f.cmd, &bi);
    if (r != VK_SUCCESS) { LOGE("vulkan: vkBeginCommandBuffer failed: %d", int(r)); return false; }
    
    return true;
}

bool CreateInstanceAndDevice() {
    Ctx& c = g_ctx;
    for (auto& pf : c.present_fence) pf = 0;
    VkApplicationInfo app{VK_STRUCTURE_TYPE_APPLICATION_INFO};
    app.pApplicationName = "SCDA";
    app.apiVersion = VK_API_VERSION_1_1;
    uint32_t sdl_count = 0;
    const char* const* sdl_ext = SDL_Vulkan_GetInstanceExtensions(&sdl_count);
    if (!sdl_ext) {
        LOGE("vulkan: SDL gave no instance extensions: %s", SDL_GetError());
        return false;
    }
    std::vector<const char*> ext(sdl_ext, sdl_ext + sdl_count);
    VkInstanceCreateInfo ic{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};
    ic.pApplicationInfo = &app;
    ic.enabledExtensionCount = uint32_t(ext.size());
    ic.ppEnabledExtensionNames = ext.data();
    if (!VKCHECK(vkCreateInstance(&ic, nullptr, &c.instance))) return false;

    uint32_t n = 0;
    if (!VKCHECK(vkEnumeratePhysicalDevices(c.instance, &n, nullptr)) || !n) {
        LOGE("vulkan: no physical devices");
        return false;
    }
    std::vector<VkPhysicalDevice> phys(n);
    VKCHECK(vkEnumeratePhysicalDevices(c.instance, &n, phys.data()));
    // the discrete first, then the one with the most memory
    VkPhysicalDevice pick = VK_NULL_HANDLE;
    VkPhysicalDeviceMemoryProperties best_mem{};
    uint32_t best_type = 5;  // past CPU, the last type in the enum
    for (VkPhysicalDevice p : phys) {
        VkPhysicalDeviceProperties pr{};
        VkPhysicalDeviceMemoryProperties mp{};
        vkGetPhysicalDeviceProperties(p, &pr);
        vkGetPhysicalDeviceMemoryProperties(p, &mp);
        bool better = uint32_t(pr.deviceType) < best_type ||
                      (uint32_t(pr.deviceType) == best_type && mp.memoryHeaps[0].size > best_mem.memoryHeaps[0].size);
        if (!pick || better) {
            pick = p;
            best_mem = mp;
            best_type = uint32_t(pr.deviceType);
        }
    }
    c.phys = pick;
    vkGetPhysicalDeviceProperties(c.phys, &c.props);
    vkGetPhysicalDeviceMemoryProperties(c.phys, &c.memprops);
    LOGI("vulkan: device %s, Vulkan %u.%u, driver %u.%u.%u", c.props.deviceName,
         VK_API_VERSION_MAJOR(c.props.apiVersion), VK_API_VERSION_MINOR(c.props.apiVersion),
         VK_API_VERSION_MAJOR(c.props.driverVersion), VK_API_VERSION_MINOR(c.props.driverVersion),
         VK_API_VERSION_PATCH(c.props.driverVersion));

    uint32_t qn = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(c.phys, &qn, nullptr);
    std::vector<VkQueueFamilyProperties> qs(qn);
    vkGetPhysicalDeviceQueueFamilyProperties(c.phys, &qn, qs.data());
    for (uint32_t i = 0; i < qn; i++)
        if (qs[i].queueFlags & VK_QUEUE_GRAPHICS_BIT) {
            c.gfx_family = i;
            break;
        }

    const char* dev_ext[] = {VK_KHR_SWAPCHAIN_EXTENSION_NAME};
    VkPhysicalDeviceFeatures supported{};
    vkGetPhysicalDeviceFeatures(c.phys, &supported);
    VkPhysicalDeviceFeatures enabled{};
    enabled.samplerAnisotropy = supported.samplerAnisotropy;
    enabled.fillModeNonSolid = supported.fillModeNonSolid;
    float prio = 1;
    VkDeviceQueueCreateInfo qc{VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO};
    qc.queueFamilyIndex = c.gfx_family;
    qc.queueCount = 1;
    qc.pQueuePriorities = &prio;
    VkDeviceCreateInfo dc{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO};
    dc.queueCreateInfoCount = 1;
    dc.pQueueCreateInfos = &qc;
    dc.enabledExtensionCount = 1;
    dc.ppEnabledExtensionNames = dev_ext;
    dc.pEnabledFeatures = &enabled;
    if (!VKCHECK(vkCreateDevice(c.phys, &dc, nullptr, &c.dev))) return false;
    vkGetDeviceQueue(c.dev, c.gfx_family, 0, &c.queue);

    // the formats the renderer must not assume
    for (int i = 0; i < 3; i++) {
        VkFormat fmts[3] = {VK_FORMAT_BC1_RGBA_UNORM_BLOCK, VK_FORMAT_BC2_UNORM_BLOCK, VK_FORMAT_BC3_UNORM_BLOCK};
        VkFormatProperties fp;
        vkGetPhysicalDeviceFormatProperties(c.phys, fmts[i], &fp);
        c.bc_support[i] = (fp.optimalTilingFeatures & VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT) != 0;
    }
    VkFormatProperties fp24, fp32, fp16;
    vkGetPhysicalDeviceFormatProperties(c.phys, VK_FORMAT_D24_UNORM_S8_UINT, &fp24);
    vkGetPhysicalDeviceFormatProperties(c.phys, VK_FORMAT_D32_SFLOAT_S8_UINT, &fp32);
    vkGetPhysicalDeviceFormatProperties(c.phys, VK_FORMAT_D16_UNORM_S8_UINT, &fp16);
    if (fp24.optimalTilingFeatures & VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT)
        c.depth_fmt = VK_FORMAT_D24_UNORM_S8_UINT;
    else if (fp32.optimalTilingFeatures & VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT)
        c.depth_fmt = VK_FORMAT_D32_SFLOAT_S8_UINT;
    else if (fp16.optimalTilingFeatures & VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT)
        c.depth_fmt = VK_FORMAT_D16_UNORM_S8_UINT;
    else {
        LOGE("vulkan: no depth stencil format on this device");
        return false;
    }
    c.sampled_depth24 = (fp24.optimalTilingFeatures & VK_FORMAT_FEATURE_SAMPLED_IMAGE_BIT) != 0;
    VkFormatProperties fpb;
    vkGetPhysicalDeviceFormatProperties(c.phys, kBgra, &fpb);
    if (!(fpb.optimalTilingFeatures & VK_FORMAT_FEATURE_COLOR_ATTACHMENT_BIT)) {
        LOGE("vulkan: BGRA8 is not renderable here");
        return false;
    }
    c.aniso_cap = enabled.samplerAnisotropy && c.props.limits.maxSamplerAnisotropy
                      ? std::min<uint32_t>(c.props.limits.maxSamplerAnisotropy, 16)
                      : 1;

    VkCommandPoolCreateInfo pc{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO};
    pc.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    pc.queueFamilyIndex = c.gfx_family;
    VkFenceCreateInfo fc{VK_STRUCTURE_TYPE_FENCE_CREATE_INFO};
    fc.flags = VK_FENCE_CREATE_SIGNALED_BIT;
    VkSemaphoreCreateInfo sc{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    for (auto& f : c.frames) {
        if (!VKCHECK(vkCreateCommandPool(c.dev, &pc, nullptr, &f.pool))) return false;
        VkCommandBufferAllocateInfo cbai{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO, nullptr, f.pool,
                                         VK_COMMAND_BUFFER_LEVEL_PRIMARY, 1};
        if (!VKCHECK(vkAllocateCommandBuffers(c.dev, &cbai, &f.cmd))) return false;
        if (!VKCHECK(vkCreateFence(c.dev, &fc, nullptr, &f.fence))) return false;
        if (!VKCHECK(vkCreateSemaphore(c.dev, &sc, nullptr, &f.avail))) return false;
        if (!VKCHECK(vkCreateSemaphore(c.dev, &sc, nullptr, &f.done))) return false;
        // the upload ring: one host visible block and one buffer over all of it
        MemBlock* block = nullptr;
        if (!AllocBlock(MemoryType(0xFFFFFFFF, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT),
                        kUploadSize, true, &block))
            return false;
        f.upload_block = block;
        VkBufferCreateInfo bc{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
        bc.size = kUploadSize;
        bc.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT |
                   VK_BUFFER_USAGE_INDEX_BUFFER_BIT | VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
        if (!VKCHECK(vkCreateBuffer(c.dev, &bc, nullptr, &f.upload))) return false;
        if (!VKCHECK(vkBindBufferMemory(c.dev, f.upload, block->mem, 0))) return false;
        VkDescriptorPoolSize sizes[] = {
            {VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER, 1024},
            {VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE, 2048},
            {VK_DESCRIPTOR_TYPE_SAMPLER, 2048},
            {VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 256},
        };
        VkDescriptorPoolCreateInfo dpc{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO};
        dpc.flags = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
        dpc.maxSets = 8192;
        dpc.poolSizeCount = 4;
        dpc.pPoolSizes = sizes;
        if (!VKCHECK(vkCreateDescriptorPool(c.dev, &dpc, nullptr, &f.dpool))) return false;
    }
    // the driver's pipeline cache, serialized to disk at SavePipelineCache
    VkPipelineCacheCreateInfo pcc{VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO};
    if (!VKCHECK(vkCreatePipelineCache(c.dev, &pcc, nullptr, &c.pipe_cache))) return false;
    // the hook the runtime calls at PersistDisplay and at quit
    gpu::CollectPipelineCacheData = +[](const std::function<bool(const void*, size_t)>& write) {
        (void)CollectPipelineCache(write);
    };
    LOGI("vulkan: device ready, depth %d, BC %d%d%d, aniso %u, nonSolid %d", int(c.depth_fmt), int(c.bc_support[0]),
         int(c.bc_support[1]), int(c.bc_support[2]), c.aniso_cap, int(enabled.fillModeNonSolid));
    return true;
}

void DestroyDevice() {
    Ctx& c = g_ctx;
    if (!c.dev) return;
    vkDeviceWaitIdle(c.dev);
    DestroyShaderCache();
    ClearPipelineMap();
    if (c.pipe_cache) vkDestroyPipelineCache(c.dev, c.pipe_cache, nullptr);
    for (auto& f : c.frames) {
        ReleaseFrameGarbage(f);
        if (f.upload) vkDestroyBuffer(c.dev, f.upload, nullptr);
        if (f.dpool) vkDestroyDescriptorPool(c.dev, f.dpool, nullptr);
        if (f.fence) vkDestroyFence(c.dev, f.fence, nullptr);
        if (f.avail) vkDestroySemaphore(c.dev, f.avail, nullptr);
        if (f.done) vkDestroySemaphore(c.dev, f.done, nullptr);
        if (f.pool) vkDestroyCommandPool(c.dev, f.pool, nullptr);
    }
    for (auto& [type, blocks] : c.mem_types) {
        (void)type;
        for (auto& b : blocks)
            if (b && b->mem) vkFreeMemory(c.dev, b->mem, nullptr);
    }
    DestroySwapchain();
    vkDestroyDevice(c.dev, nullptr);
    if (c.instance) vkDestroyInstance(c.instance, nullptr);
    c.instance = VK_NULL_HANDLE;
    c.dev = VK_NULL_HANDLE;
}

// memory: blocks of 64 MB per type, suballocated first fit; the pointers stay put in unique_ptrs
bool AllocBlock(uint32_t type, VkDeviceSize size, bool host, MemBlock** out) {
    Ctx& c = g_ctx;
    auto block = std::make_unique<MemBlock>();
    block->size = size;
    block->free_ranges = {{0, size}};
    VkMemoryAllocateInfo ai{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    ai.allocationSize = size;
    ai.memoryTypeIndex = type;
    if (!VKCHECK(vkAllocateMemory(c.dev, &ai, nullptr, &block->mem))) return false;
    if (host &&
        !VKCHECK(vkMapMemory(c.dev, block->mem, 0, VK_WHOLE_SIZE, 0, reinterpret_cast<void**>(&block->map)))) {
        vkFreeMemory(c.dev, block->mem, nullptr);
        return false;
    }
    auto& list = c.mem_types[type];
    list.push_back(std::move(block));
    *out = list.back().get();
    return true;
}

bool Suballoc(uint32_t type_bits, VkDeviceSize size, VkDeviceSize align, bool host, MemBlock** out_block,
              VkDeviceSize* out_off, uint8_t** out_cpu) {
    size = (size + align - 1) & ~(align - 1);
    uint32_t type = host ? MemoryType(type_bits, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT)
                         : MemoryType(type_bits, VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT);
    if (type == 0xFFFFFFFF && host) type = MemoryType(type_bits, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT);
    if (type == 0xFFFFFFFF && !host) type = MemoryType(type_bits, 0);
    if (type == 0xFFFFFFFF) {
        LOGE("vulkan: no memory type for %llu bytes, host %d", (unsigned long long)size, int(host));
        return false;
    }
    auto& blocks = g_ctx.mem_types[type];
    for (auto& block_ptr : blocks) {
        MemBlock& b = *block_ptr;
        for (size_t ri = 0; ri < b.free_ranges.size(); ri++) {
            auto& r = b.free_ranges[ri];
            VkDeviceSize off = (r.off + align - 1) & ~(align - 1);
            VkDeviceSize pad = off - r.off;
            if (pad + size > r.size) continue;
            VkDeviceSize got = pad + size;
            *out_block = &b;
            *out_off = off;
            if (out_cpu) *out_cpu = b.map ? b.map + off : nullptr;
            if (got == r.size)
                b.free_ranges.erase(b.free_ranges.begin() + ri);
            else
                r = {r.off + got, r.size - got};
            return true;
        }
    }
    // a new block, larger when the request needs it
    VkDeviceSize block_size = std::max(kBlockBytes, size);
    MemBlock* b = nullptr;
    if (!AllocBlock(type, block_size, host, &b)) return false;
    *out_block = b;
    *out_off = 0;
    if (out_cpu) *out_cpu = b->map;
    if (block_size > size) b->free_ranges.front() = {size, block_size - size};
    else b->free_ranges.clear();
    return true;
}

void Subfree(MemBlock* block, VkDeviceSize off, VkDeviceSize size) {
    if (!block) return;
    for (auto& r : block->free_ranges) {
        if (r.off + r.size == off) {
            r.size += size;
            return;
        }
        if (off + size == r.off) {
            r.off = off;
            r.size += size;
            return;
        }
    }
    block->free_ranges.push_back({off, size});
    std::sort(block->free_ranges.begin(), block->free_ranges.end(),
              [](const MemBlock::Range& a, const MemBlock::Range& b) { return a.off < b.off; });
}

// the frame's command buffer opened for recording; waits its previous submit out
bool BeginFrame() {
    Ctx& c = g_ctx;
    Frame& f = c.Current();
    if (!VKCHECK(vkWaitForFences(c.dev, 1, &f.fence, VK_TRUE, UINT64_MAX))) return false;
    c.done_value = std::max(c.done_value, f.fence_value);
    if (!VKCHECK(vkResetFences(c.dev, 1, &f.fence))) return false;
    ReleaseFrameGarbage(f);
    f.used = 0;
    if (!VKCHECK(vkResetDescriptorPool(c.dev, f.dpool, 0))) return false;
    if (!VKCHECK(vkResetCommandBuffer(f.cmd, 0))) return false;
    VkCommandBufferBeginInfo bi{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    bi.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;
    return VKCHECK(vkBeginCommandBuffer(f.cmd, &bi));
}

// submits; wait: for it to finish, then the frame records again at once
bool SubmitFrame(bool wait) {
    Ctx& c = g_ctx;
    Frame& f = c.Current();
    if (!VKCHECK(vkEndCommandBuffer(f.cmd))) return false;
    VkSubmitInfo si{VK_STRUCTURE_TYPE_SUBMIT_INFO};
    si.commandBufferCount = 1;
    si.pCommandBuffers = &f.cmd;
    VkPipelineStageFlags stage = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    if (c.swap_acquired) {
        si.waitSemaphoreCount = 1;
        si.pWaitSemaphores = &f.avail;
        si.pWaitDstStageMask = &stage;
        si.signalSemaphoreCount = 1;
        si.pSignalSemaphores = &f.done;
    }
    f.fence_value = ++c.fence_value;
    if (!VKCHECK(vkQueueSubmit(c.queue, 1, &si, f.fence))) return false;
    if (wait) return EndWaitReopen();
    return true;
}

bool WaitFenceValue(uint64_t value) {
    Ctx& c = g_ctx;
    if (value <= c.done_value) return true;
    // the submit is in one of the frames' fences; waiting it out reaches value or past
    for (int i = 0; i < kFrames; i++) {
        Frame& f = c.frames[i];
        if (f.fence_value >= value)
            if (!VKCHECK(vkWaitForFences(c.dev, 1, &f.fence, VK_TRUE, UINT64_MAX))) return false;
    }
    c.done_value = std::max(c.done_value, value);
    return true;
}

Upload AllocUpload(VkDeviceSize size, VkDeviceSize align) {
    Ctx& c = g_ctx;
    Frame& f = c.Current();
    VkDeviceSize o = (f.used + align - 1) & ~(align - 1);
    if (o + size <= kUploadSize) {
        f.used = o + size;
        return {f.upload, o, f.upload_block->map + o};
    }
    // too big for the ring: a buffer of its own, released with the frame
    VkBufferCreateInfo bc{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
    bc.size = size;
    bc.usage = VK_BUFFER_USAGE_TRANSFER_SRC_BIT | VK_BUFFER_USAGE_VERTEX_BUFFER_BIT |
               VK_BUFFER_USAGE_INDEX_BUFFER_BIT | VK_BUFFER_USAGE_UNIFORM_BUFFER_BIT;
    VkBuffer buf = VK_NULL_HANDLE;
    if (!VKCHECK(vkCreateBuffer(c.dev, &bc, nullptr, &buf))) return {VK_NULL_HANDLE, 0, nullptr};
    VkMemoryRequirements mr;
    vkGetBufferMemoryRequirements(c.dev, buf, &mr);
    VkMemoryAllocateInfo ai{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    ai.allocationSize = mr.size;
    ai.memoryTypeIndex = MemoryType(mr.memoryTypeBits, VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
    if (ai.memoryTypeIndex == 0xFFFFFFFF) {
        vkDestroyBuffer(c.dev, buf, nullptr);
        return {VK_NULL_HANDLE, 0, nullptr};
    }
    VkDeviceMemory mem = VK_NULL_HANDLE;
    if (!VKCHECK(vkAllocateMemory(c.dev, &ai, nullptr, &mem)) ||
        !VKCHECK(vkBindBufferMemory(c.dev, buf, mem, 0))) {
        vkDestroyBuffer(c.dev, buf, nullptr);
        return {VK_NULL_HANDLE, 0, nullptr};
    }
    uint8_t* cpu = nullptr;
    if (!VKCHECK(vkMapMemory(c.dev, mem, 0, VK_WHOLE_SIZE, 0, reinterpret_cast<void**>(&cpu)))) {
        vkFreeMemory(c.dev, mem, nullptr);
        vkDestroyBuffer(c.dev, buf, nullptr);
        return {VK_NULL_HANDLE, 0, nullptr};
    }
    f.garbage_buf.push_back(buf);
    f.garbage_mem.push_back(mem);
    return {buf, 0, cpu};
}

bool MakeBuffer(VkDeviceSize bytes, VkBufferUsageFlags usage, MemBlock** block, VkDeviceSize* off, VkBuffer* buf,
                bool host) {
    Ctx& c = g_ctx;
    VkBufferCreateInfo bc{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO};
    bc.size = bytes;
    bc.usage = usage;
    if (!VKCHECK(vkCreateBuffer(c.dev, &bc, nullptr, buf))) return false;
    VkMemoryRequirements mr;
    vkGetBufferMemoryRequirements(c.dev, *buf, &mr);
    uint8_t* cpu = nullptr;
    MemBlock* b = nullptr;
    VkDeviceSize o = 0;
    if (!Suballoc(mr.memoryTypeBits, mr.size, std::max<VkDeviceSize>(mr.alignment, 256), host, &b, &o, &cpu)) {
        vkDestroyBuffer(c.dev, *buf, nullptr);
        return false;
    }
    if (!VKCHECK(vkBindBufferMemory(c.dev, *buf, b->mem, o))) {
        vkDestroyBuffer(c.dev, *buf, nullptr);
        return false;
    }
    *block = b;
    *off = o;
    return true;
}

bool CreateImage(Image& img, VkFormat fmt, uint32_t w, uint32_t h, uint32_t levels, uint32_t layers, bool cube,
                 bool depth, bool render_target, VkSampleCountFlagBits samples) {
    Ctx& c = g_ctx;
    img = Image{};
    img.fmt = fmt;
    img.w = w;
    img.h = h;
    img.levels = levels;
    img.layers = layers;
    img.depth = depth;
    img.cube = cube;
    img.render_target = render_target;
    VkImageCreateInfo ic{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
    ic.flags = cube ? VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT : 0;
    ic.imageType = VK_IMAGE_TYPE_2D;
    ic.format = fmt;
    ic.extent = {w, h, 1};
    ic.mipLevels = levels;
    ic.arrayLayers = layers;
    ic.samples = samples;
    ic.tiling = VK_IMAGE_TILING_OPTIMAL;
    ic.usage = VK_IMAGE_USAGE_TRANSFER_SRC_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    if (depth)
        ic.usage |= VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
    else {
        ic.usage |= VK_IMAGE_USAGE_SAMPLED_BIT;
        if (render_target) ic.usage |= VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
    }
    if (!VKCHECK(vkCreateImage(c.dev, &ic, nullptr, &img.image))) return false;
    VkMemoryRequirements mr;
    vkGetImageMemoryRequirements(c.dev, img.image, &mr);
    if (!Suballoc(mr.memoryTypeBits, mr.size, mr.alignment, false, &img.block, &img.offset, nullptr)) {
        vkDestroyImage(c.dev, img.image, nullptr);
        img.image = VK_NULL_HANDLE;
        return false;
    }
    img.bytes = mr.size;
    if (!VKCHECK(vkBindImageMemory(c.dev, img.image, img.block->mem, img.offset))) {
        vkDestroyImage(c.dev, img.image, nullptr);
        img.image = VK_NULL_HANDLE;
        return false;
    }
    VkImageViewCreateInfo vc{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
    vc.image = img.image;
    vc.viewType = cube ? VK_IMAGE_VIEW_TYPE_CUBE : layers > 1 ? VK_IMAGE_VIEW_TYPE_2D_ARRAY : VK_IMAGE_VIEW_TYPE_2D;
    vc.format = fmt;
    if (depth) {
        if (render_target) {
            vc.subresourceRange = {VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT, 0, levels, 0, layers};
            if (!VKCHECK(vkCreateImageView(c.dev, &vc, nullptr, &img.attach))) return false;
            vc.subresourceRange.aspectMask = VK_IMAGE_ASPECT_DEPTH_BIT;
            if (!VKCHECK(vkCreateImageView(c.dev, &vc, nullptr, &img.read))) return false;
        } else {
            vc.subresourceRange = {VK_IMAGE_ASPECT_DEPTH_BIT, 0, levels, 0, layers};
            if (!VKCHECK(vkCreateImageView(c.dev, &vc, nullptr, &img.read))) return false;
            img.attach = img.read;
        }
    } else {
        vc.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, levels, 0, layers};
        if (!VKCHECK(vkCreateImageView(c.dev, &vc, nullptr, &img.read))) return false;
        if (render_target) {
            if (!VKCHECK(vkCreateImageView(c.dev, &vc, nullptr, &img.attach))) return false;
        } else {
            img.attach = img.read;
        }
    }
    return true;
}

void DestroyImage(Image& img) {
    Ctx& c = g_ctx;
    if (!c.dev) return;
    if (img.attach && img.attach != img.read) vkDestroyImageView(c.dev, img.attach, nullptr);
    if (img.read) vkDestroyImageView(c.dev, img.read, nullptr);
    if (img.image) vkDestroyImage(c.dev, img.image, nullptr);
    if (img.block) Subfree(img.block, img.offset, img.bytes);
    img = Image{};
}

void Transition(Image& img, VkImageLayout want) {
    if (img.layout == want || !img.image) return;
    VkImageMemoryBarrier b{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    b.srcAccessMask = LayoutUse(img.layout, img.depth).access;
    b.dstAccessMask = LayoutUse(want, img.depth).access;
    b.oldLayout = img.layout;
    b.newLayout = want;
    b.srcQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    b.dstQueueFamilyIndex = VK_QUEUE_FAMILY_IGNORED;
    b.image = img.image;
    b.subresourceRange = {img.depth ? VkImageAspectFlags(VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT)
                                    : VkImageAspectFlags(VK_IMAGE_ASPECT_COLOR_BIT),
                          0, img.levels, 0, img.layers};
    vkCmdPipelineBarrier(g_ctx.Current().cmd, LayoutUse(img.layout, img.depth).stage, LayoutUse(want, img.depth).stage,
                         0, 0, nullptr, 0, nullptr, 1, &b);
    img.layout = want;
}

VkRenderPass GetRenderPass(VkFormat color, VkFormat depth, VkSampleCountFlagBits samples, bool clear_color,
                           bool clear_depth) {
    static std::unordered_map<uint64_t, VkRenderPass> passes;
    uint64_t key = uint64_t(color) | uint64_t(depth) << 16 | uint64_t(samples) << 32 |
                   uint64_t(clear_color ? 1 : 0) << 40 | uint64_t(clear_depth ? 1 : 0) << 41;
    auto it = passes.find(key);
    if (it != passes.end()) return it->second;
    VkAttachmentDescription att[2]{};
    att[0].format = color;
    att[0].samples = samples;
    // LOAD keeps the target's contents between passes, the game clears itself; the swapchain's blit pass clears
    att[0].loadOp = clear_color ? VK_ATTACHMENT_LOAD_OP_CLEAR : VK_ATTACHMENT_LOAD_OP_LOAD;
    att[0].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    att[0].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    att[0].stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    att[0].initialLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    att[0].finalLayout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    VkAttachmentReference cr{0, VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL};
    VkSubpassDescription sub{};
    sub.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    sub.colorAttachmentCount = 1;
    sub.pColorAttachments = &cr;
    uint32_t natt = 1;
    if (depth) {
        natt = 2;
        att[1].format = depth;
        att[1].samples = samples;
        att[1].loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
        att[1].storeOp = VK_ATTACHMENT_STORE_OP_STORE;
        att[1].stencilLoadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
        att[1].stencilStoreOp = VK_ATTACHMENT_STORE_OP_STORE;
        att[1].initialLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
        att[1].finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
        VkAttachmentReference dr{1, VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL};
        sub.pDepthStencilAttachment = &dr;
    }
    VkRenderPassCreateInfo pc{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO};
    pc.attachmentCount = natt;
    pc.pAttachments = att;
    pc.subpassCount = 1;
    pc.pSubpasses = &sub;
    VkRenderPass pass = VK_NULL_HANDLE;
    if (!VKCHECK(vkCreateRenderPass(g_ctx.dev, &pc, nullptr, &pass))) return VK_NULL_HANDLE;
    passes.emplace(key, pass);
    return pass;
}

VkFramebuffer GetFramebuffer(Image& color, Image* ds, VkRenderPass pass, uint32_t w, uint32_t h) {
    struct FbEntry {
        VkRenderPass pass;
        Image* ds;
        VkFramebuffer fb;
    };
    static std::unordered_map<Image*, std::vector<FbEntry>> fbs;
    auto& list = fbs[&color];
    for (auto& e : list)
        if (e.pass == pass && e.ds == ds) return e.fb;
    VkImageView views[2] = {color.attach, ds ? ds->attach : VK_NULL_HANDLE};
    VkFramebufferCreateInfo fc{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO};
    fc.renderPass = pass;
    fc.attachmentCount = ds ? 2 : 1;
    fc.pAttachments = views;
    fc.width = w;
    fc.height = h;
    fc.layers = 1;
    VkFramebuffer fb = VK_NULL_HANDLE;
    if (!VKCHECK(vkCreateFramebuffer(g_ctx.dev, &fc, nullptr, &fb))) return VK_NULL_HANDLE;
    list.push_back({pass, ds, fb});
    return fb;
}

bool ReadBackImage(Image& img, uint32_t w, uint32_t h, std::vector<uint8_t>& out) {
    Ctx& c = g_ctx;
    if (img.depth || !img.image || img.samples != VK_SAMPLE_COUNT_1_BIT) return false;
    Transition(img, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL);
    VkBufferImageCopy region{};
    region.imageSubresource = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 0, 1};
    region.imageExtent = {w, h, 1};
    uint64_t row = uint64_t(w) * 4;
    uint64_t bytes = row * h;
    MemBlock* block = nullptr;
    VkDeviceSize off = 0;
    VkBuffer buf = VK_NULL_HANDLE;
    if (!MakeBuffer(bytes, VK_BUFFER_USAGE_TRANSFER_DST_BIT, &block, &off, &buf, true)) return false;
    vkCmdCopyImageToBuffer(c.Current().cmd, img.image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL, buf, 1, &region);
    if (!EndWaitReopen()) return false;
    out.resize(size_t(w) * h * 4);
    for (uint32_t y = 0; y < h; y++) std::memcpy(out.data() + size_t(y) * row, block->map + off + y * row, row);
    return true;
}

void ReleaseFrameGarbage(Frame& f) {
    for (Image* img : f.garbage_img) {
        DestroyImage(*img);
        delete img;
    }
    f.garbage_img.clear();
    for (VkBuffer b : f.garbage_buf) vkDestroyBuffer(g_ctx.dev, b, nullptr);
    f.garbage_buf.clear();
    for (VkDeviceMemory m : f.garbage_mem) vkFreeMemory(g_ctx.dev, m, nullptr);
    f.garbage_mem.clear();
}

bool CreateSwapchain() {
    Ctx& c = g_ctx;
    SDL_Window* w = static_cast<SDL_Window*>(app::Window());
    if (!w) {
        LOGE("vulkan: no SDL window for the surface");
        return false;
    }
    if (!SDL_Vulkan_CreateSurface(w, c.instance, nullptr, &c.surface)) {
        LOGE("vulkan: SDL_Vulkan_CreateSurface failed: %s", SDL_GetError());
        return false;
    }
    return ResizeSwap();
}

void DestroySwapchain() {
    Ctx& c = g_ctx;
    if (c.dev) {
        for (auto& t : c.swap_targets)
            if (t.attach) vkDestroyImageView(c.dev, t.attach, nullptr);
        if (c.swap) vkDestroySwapchainKHR(c.dev, c.swap, nullptr);
    }
    c.swap_targets.clear();
    c.swap = VK_NULL_HANDLE;
    if (c.surface && c.instance) vkDestroySurfaceKHR(c.instance, c.surface, nullptr);
    c.surface = VK_NULL_HANDLE;
}

bool ResizeSwap() {
    Ctx& c = g_ctx;
    VkSurfaceCapabilitiesKHR cap{};
    if (!VKCHECK(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(c.phys, c.surface, &cap))) return false;
    if (!cap.currentExtent.width || !cap.currentExtent.height) return false;
    uint32_t count = 0;
    VKCHECK(vkGetPhysicalDeviceSurfaceFormatsKHR(c.phys, c.surface, &count, nullptr));
    std::vector<VkSurfaceFormatKHR> fmts(count);
    VKCHECK(vkGetPhysicalDeviceSurfaceFormatsKHR(c.phys, c.surface, &count, fmts.data()));
    VkSurfaceFormatKHR fmt = fmts[0];
    for (auto& f : fmts)
        if (f.format == kBgra && f.colorSpace == VK_COLOR_SPACE_SRGB_NONLINEAR_KHR) fmt = f;
    uint32_t pmodes = 0;
    VKCHECK(vkGetPhysicalDeviceSurfacePresentModesKHR(c.phys, c.surface, &pmodes, nullptr));
    std::vector<VkPresentModeKHR> pm(pmodes);
    VKCHECK(vkGetPhysicalDeviceSurfacePresentModesKHR(c.phys, c.surface, &pmodes, pm.data()));
    bool mailbox = std::find(pm.begin(), pm.end(), VK_PRESENT_MODE_MAILBOX_KHR) != pm.end();
    bool immediate = std::find(pm.begin(), pm.end(), VK_PRESENT_MODE_IMMEDIATE_KHR) != pm.end();
    bool vsync = app::Get().vsync;
    VkPresentModeKHR pmode = vsync ? VK_PRESENT_MODE_FIFO_KHR
                             : mailbox ? VK_PRESENT_MODE_MAILBOX_KHR
                             : immediate ? VK_PRESENT_MODE_IMMEDIATE_KHR
                                         : VK_PRESENT_MODE_FIFO_KHR;

    uint32_t image_count =
        std::clamp<uint32_t>(kFrames, cap.minImageCount, cap.maxImageCount ? cap.maxImageCount : 1024);
    VkSwapchainKHR old = c.swap;
    VkSwapchainCreateInfoKHR sc{VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR};
    sc.surface = c.surface;
    sc.minImageCount = image_count;
    sc.imageFormat = fmt.format;
    sc.imageColorSpace = fmt.colorSpace;
    sc.imageExtent = cap.currentExtent;
    sc.imageArrayLayers = 1;
    sc.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    sc.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
    sc.preTransform = cap.currentTransform;
    sc.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    sc.presentMode = pmode;
    sc.clipped = VK_TRUE;
    sc.oldSwapchain = old;
    VkSwapchainKHR fresh = VK_NULL_HANDLE;
    if (!VKCHECK(vkCreateSwapchainKHR(c.dev, &sc, nullptr, &fresh))) return false;
    if (old) {
        for (auto& t : c.swap_targets)
            if (t.attach) vkDestroyImageView(c.dev, t.attach, nullptr);
        c.swap_targets.clear();
        vkDestroySwapchainKHR(c.dev, old, nullptr);
    }
    c.swap = fresh;
    c.swap_fmt = fmt;
    c.bb_w = cap.currentExtent.width;
    c.bb_h = cap.currentExtent.height;
    uint32_t n = 0;
    if (!VKCHECK(vkGetSwapchainImagesKHR(c.dev, c.swap, &n, nullptr))) return false;
    std::vector<VkImage> images(n);
    if (!VKCHECK(vkGetSwapchainImagesKHR(c.dev, c.swap, &n, images.data()))) return false;
    c.swap_targets.resize(n);
    for (uint32_t i = 0; i < n; i++) {
        Image& t = c.swap_targets[i];
        t = Image{};
        t.image = images[i];
        t.fmt = fmt.format;
        t.w = c.bb_w;
        t.h = c.bb_h;
        t.render_target = true;
        t.layout = VK_IMAGE_LAYOUT_UNDEFINED;
        VkImageViewCreateInfo vc{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO};
        vc.image = images[i];
        vc.viewType = VK_IMAGE_VIEW_TYPE_2D;
        vc.format = fmt.format;
        vc.subresourceRange = {VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1};
        if (!VKCHECK(vkCreateImageView(c.dev, &vc, nullptr, &t.attach))) return false;
    }
    c.swap_acquired = false;
    LOGI("vulkan: swapchain %ux%u, %u images, format %d, present %d", c.bb_w, c.bb_h, n, int(fmt.format), int(pmode));
    return true;
}

// the swapchain image for the present being recorded
bool AcquireNextImage() {
    Ctx& c = g_ctx;
    if (c.swap_acquired) return true;
    Frame& f = c.Current();
    uint32_t index = 0;
    VkResult r = vkAcquireNextImageKHR(c.dev, c.swap, UINT64_MAX, f.avail, VK_NULL_HANDLE, &index);
    if (r == VK_ERROR_OUT_OF_DATE_KHR || r == VK_SUBOPTIMAL_KHR) {
        if (!ResizeSwap()) return false;
        r = vkAcquireNextImageKHR(c.dev, c.swap, UINT64_MAX, f.avail, VK_NULL_HANDLE, &index);
    }
    if (r != VK_SUCCESS && r != VK_SUBOPTIMAL_KHR) return false;
    c.swap_index = index;
    c.swap_acquired = true;
    // the swapchain hands the image back with undefined contents after a present
    c.swap_targets[index].layout = VK_IMAGE_LAYOUT_UNDEFINED;
    return true;
}

bool PresentSwapchain(bool) {
    Ctx& c = g_ctx;
    if (!c.swap_acquired) return false;
    Frame& f = c.Current();
    Image& t = c.swap_targets[c.swap_index];
    Transition(t, VK_IMAGE_LAYOUT_PRESENT_SRC_KHR);
    if (!SubmitFrame(false)) {
        c.swap_acquired = false;
        return false;
    }
    VkPresentInfoKHR pi{VK_STRUCTURE_TYPE_PRESENT_INFO_KHR};
    pi.waitSemaphoreCount = 1;
    pi.pWaitSemaphores = &f.done;
    pi.swapchainCount = 1;
    pi.pSwapchains = &c.swap;
    pi.pImageIndices = &c.swap_index;
    VkResult r = vkQueuePresentKHR(c.queue, &pi);
    c.swap_acquired = false;
    if (r == VK_ERROR_OUT_OF_DATE_KHR || r == VK_SUBOPTIMAL_KHR) ResizeSwap();
    else if (r != VK_SUCCESS) return false;
    c.present_fence[c.presents % (kFrames + 1)] = f.fence_value;
    c.presents++;
    c.frame_index++;
    return true;
}

bool CollectPipelineCache(std::function<bool(const void*, size_t)> write) {
    Ctx& c = g_ctx;
    if (!c.pipe_cache) return false;
    size_t size = 0;
    if (vkGetPipelineCacheData(c.dev, c.pipe_cache, &size, nullptr) != VK_SUCCESS || !size) return false;
    std::vector<uint8_t> data(size);
    if (vkGetPipelineCacheData(c.dev, c.pipe_cache, &size, data.data()) != VK_SUCCESS) return false;
    return write(data.data(), size);
}

}  // namespace gpu::vk
