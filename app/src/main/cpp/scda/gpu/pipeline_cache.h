#pragma once
#include <cstdint>
#include <functional>
#include <vector>

// Shaders and pipelines kept on disk between runs, with cache persistence kept separate from the render thread.
// Every mission is a new process and the title's shaders are made from draw time state, so what this device has built
// before is all there is to keep. The Vulkan build: SPIR-V by source hash, pipelines by description hash.
namespace gpu::cache {

// shadercache\ in the app's files dir; root: a hash of the descriptor set layouts every pipeline is made with
void Open(uint64_t root);

// compiled SPIR-V by source hash; check, a second hash of the source, turns a key collision into a miss
bool FindShader(uint64_t key, uint64_t check, std::vector<uint8_t>& spirv);
void AddShader(uint64_t key, uint64_t check, const void* code, size_t bytes);

// a pipeline by a hash of everything its description holds; false when the library lacks it. The payload is what
// StorePipeline wrote back: for Vulkan, the pipeline's key bytes (the description), replayed at the next start
bool LoadPipeline(uint64_t name, std::vector<uint8_t>& key_bytes);
void StorePipeline(uint64_t name, const void* key, size_t bytes);
// each frame: the library is written a few seconds after the last new pipeline
void SaveWhenIdle();

// pipeline descriptions recorded by earlier runs; a backend may consume these on its render thread
std::vector<std::vector<uint8_t>> TakePipelineKeys();
void AddPipelineKey(const void* key, size_t size);

// runs a cache job on a worker; ahead: before the jobs already waiting
void Post(std::function<void()> job, bool ahead = false);

// waits until all jobs queued before this call have finished
void Drain();

}  // namespace gpu::cache
