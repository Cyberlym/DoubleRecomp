// Shaders and pipeline descriptions kept on disk between runs, and the threads that build new ones away from the
// render thread. The Vulkan build of the Windows pipeline library: SPIR-V by source hash in an append only file,
// pipeline keys by name hash in a second one, and the driver's own VkPipelineCache serialized beside them.
#include "gpu/pipeline_cache.h"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <cstdio>
#include <cstring>
#include <deque>
#include <filesystem>
#include <mutex>
#include <thread>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <unistd.h>

#include "app/app.h"
#include "core/log.h"
#include "gpu/backend.h"
#include "gpu/shaders.h"
#include "image_symbols.h"

namespace gpu::cache {

namespace {

// shaders.bin: FileHeader, then a Record and its SPIR-V for each shader as it is compiled; a torn tail from a killed
// process is cut off at the next start
constexpr uint32_t kShaderMagic = 0x48534353;  // 'SCSH'
constexpr uint32_t kShaderVersion = 2;         // bump when the compile flags change (Vulkan SPIR-V now)
constexpr uint64_t kMaxShaderFile = 256ull << 20;
constexpr int64_t kSaveIdleMs = 10000;
// <exe>_pipeline_keys.bin: FileHeader, then a KeyRecord and its bytes for each pipeline the first time it is drawn
constexpr uint32_t kKeysMagic = 0x4B504353;  // 'SCPK'
constexpr uint32_t kKeysVersion = 2;
constexpr uint64_t kMaxKeysFile = 64ull << 20;
constexpr uint64_t kMaxCacheFile = 128ull << 20;

struct FileHeader {
    uint32_t magic, version;
};
struct Record {
    uint64_t key, check;
    uint32_t size, sum;  // sum: low half of Hash over the bytecode
};

struct Shaders {
    std::mutex lock;
    std::vector<uint8_t> data;
    struct Entry {
        uint64_t check;
        size_t offset;
        uint32_t size;
    };
    std::unordered_map<uint64_t, Entry> index;
    FILE* file = nullptr;
};

struct KeyRecord {
    uint64_t hash;  // Hash over the key's bytes
    uint32_t size;
    uint32_t unused;
};

struct Keys {
    std::mutex lock;
    std::unordered_set<uint64_t> known;
    std::vector<std::vector<uint8_t>> loaded;
    FILE* file = nullptr;
};

// the pipeline cache: the driver's serialized blob, written back when it grows
struct PipelineCache {
    std::mutex load_lock;
    std::mutex save_lock;
    std::filesystem::path file;
    uint64_t root = 0;
    std::atomic<uint32_t> unsaved{0};
    std::atomic<int64_t> last_store{0};
    std::atomic<bool> saving{false};
};

struct Pool {
    std::mutex lock;
    std::condition_variable wake;
    std::deque<std::function<void()>> jobs;
    bool started = false;
};

// never freed: build threads may still run when the process exits
Shaders& S() {
    static Shaders* s = new Shaders;
    return *s;
}
PipelineCache& L() {
    static PipelineCache* l = new PipelineCache;
    return *l;
}
Pool& P() {
    static Pool* p = new Pool;
    return *p;
}
Keys& K() {
    static Keys* k = new Keys;
    return *k;
}

int64_t NowMs() {
    return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count();
}

bool ReadAll(FILE* f, std::vector<uint8_t>& out, uint64_t limit) {
    if (std::fseek(f, 0, SEEK_END)) return false;
    long long size = std::ftell(f);
    if (size < 0 || uint64_t(size) > limit) return false;
    std::rewind(f);
    out.resize(size_t(size));
    size_t done = 0;
    while (done < out.size()) {
        size_t n = std::fread(out.data() + done, 1, out.size() - done, f);
        if (!n) return false;
        done += n;
    }
    return true;
}

// one write at the end of the file, whole
void Append(FILE* f, const void* p, size_t n) {
    std::fseek(f, 0, SEEK_END);
    std::fwrite(p, 1, n, f);
    std::fflush(f);
}

// the records of a file read into s.data at from; where the good ones end, 0 without a valid header. over: a record
// replaces one with its key already indexed
size_t Index(Shaders& s, size_t from, bool over) {
    if (s.data.size() - from < sizeof(FileHeader)) return 0;
    FileHeader fh;
    std::memcpy(&fh, s.data.data() + from, sizeof(fh));
    if (fh.magic != kShaderMagic || fh.version != kShaderVersion) return 0;
    size_t good = from + sizeof(fh);
    while (good + sizeof(Record) <= s.data.size()) {
        Record r;
        std::memcpy(&r, s.data.data() + good, sizeof(r));
        size_t at = good + sizeof(r);
        if (r.size > s.data.size() - at || uint32_t(Hash(s.data.data() + at, r.size)) != r.sum) break;
        Shaders::Entry e{r.check, at, r.size};
        if (over) s.index[r.key] = e;
        else s.index.emplace(r.key, e);
        good = at + r.size;
    }
    return good;
}

void OpenShaders(const std::filesystem::path& path) {
    Shaders& s = S();
    s.file = std::fopen(path.c_str(), "a+b");
    if (!s.file) {
        LOGW("shader cache: %s cannot be opened", path.string().c_str());
        return;
    }
    size_t good = 0;
    if (ReadAll(s.file, s.data, kMaxShaderFile)) good = Index(s, 0, true);
    if (good < s.data.size() || !good) {
        if (!s.data.empty()) LOGI("shader cache: %zu of %zu bytes kept", good, s.data.size());
        std::fclose(s.file);
        s.file = std::fopen(path.c_str(), good ? "r+b" : "w+b");
        if (!s.file) return;
        if (good) {
            ftruncate(fileno(s.file), long(good));
        } else {
            s.index.clear();
            s.data.clear();
            FileHeader fh{kShaderMagic, kShaderVersion};
            Append(s.file, &fh, sizeof(fh));
        }
    }
    LOGI("shader cache: %zu shaders, %.1f MB", s.index.size(), good / 1048576.0);
}

// the shaders a release ships, read only and after the player's own: a new player skips the compiler for them
void OpenBase(const std::filesystem::path& path) {
    Shaders& s = S();
    FILE* f = std::fopen(path.c_str(), "rb");
    if (!f) return;
    std::vector<uint8_t> data;
    bool ok = ReadAll(f, data, kMaxShaderFile);
    std::fclose(f);
    if (!ok) return;
    size_t from = s.data.size(), before = s.index.size();
    s.data.insert(s.data.end(), data.begin(), data.end());
    Index(s, from, false);
    LOGI("shader cache: %zu more from %s", s.index.size() - before, path.filename().string().c_str());
}

// the records of data kept in k; where the good ones end, 0 without a valid header
size_t IndexKeys(Keys& k, const std::vector<uint8_t>& data) {
    if (data.size() < sizeof(FileHeader)) return 0;
    FileHeader fh;
    std::memcpy(&fh, data.data(), sizeof(fh));
    if (fh.magic != kKeysMagic || fh.version != kKeysVersion) return 0;
    size_t good = sizeof(fh);
    while (good + sizeof(KeyRecord) <= data.size()) {
        KeyRecord r;
        std::memcpy(&r, data.data() + good, sizeof(r));
        size_t at = good + sizeof(r);
        if (r.size > data.size() - at || Hash(data.data() + at, r.size) != r.hash) break;
        if (k.known.insert(r.hash).second) k.loaded.emplace_back(data.begin() + at, data.begin() + at + r.size);
        good = at + r.size;
    }
    return good;
}

void OpenKeys(const std::filesystem::path& path) {
    Keys& k = K();
    k.file = std::fopen(path.c_str(), "a+b");
    if (!k.file) {
        LOGW("pipeline keys: %s cannot be opened", path.string().c_str());
        return;
    }
    std::vector<uint8_t> data;
    size_t good = 0;
    if (ReadAll(k.file, data, kMaxKeysFile)) good = IndexKeys(k, data);
    if (!good) {
        k.known.clear();
        k.loaded.clear();
        std::fclose(k.file);
        k.file = std::fopen(path.c_str(), "w+b");
        if (!k.file) return;
        FileHeader fh{kKeysMagic, kKeysVersion};
        Append(k.file, &fh, sizeof(fh));
    } else if (good < data.size()) {
        std::fclose(k.file);
        k.file = std::fopen(path.c_str(), "r+b");
        if (!k.file) return;
        ftruncate(fileno(k.file), long(good));
    }
    LOGI("pipeline keys: %zu from %s", k.loaded.size(), path.filename().string().c_str());
}

void Run() {
    Pool& p = P();
    for (;;) {
        std::function<void()> job;
        {
            std::unique_lock lock(p.lock);
            p.wake.wait(lock, [&] { return !p.jobs.empty(); });
            job = std::move(p.jobs.front());
            p.jobs.pop_front();
        }
        job();
    }
}

}  // namespace

void Open(uint64_t root) {
    auto dir = app::ExeDir() / "shadercache";
    std::error_code ec;
    std::filesystem::create_directories(dir, ec);
    L().root = root;
    L().file = dir / (std::string(IMAGE_XBE) + "_pipelines.bin");
    OpenShaders(dir / "shaders.bin");
    OpenBase(dir / "base_shaders.bin");
    OpenKeys(dir / (std::string(IMAGE_XBE) + "_pipeline_keys.bin"));
}

bool FindShader(uint64_t key, uint64_t check, std::vector<uint8_t>& spirv) {
    Shaders& s = S();
    std::lock_guard lock(s.lock);
    auto it = s.index.find(key);
    if (it == s.index.end() || it->second.check != check) return false;
    spirv.assign(s.data.begin() + it->second.offset, s.data.begin() + it->second.offset + it->second.size);
    return true;
}

void AddShader(uint64_t key, uint64_t check, const void* code, size_t bytes) {
    Shaders& s = S();
    if (!s.file || !code || !bytes) return;
    const auto* b = static_cast<const uint8_t*>(code);
    Record r{key, check, uint32_t(bytes), uint32_t(Hash(b, bytes))};
    std::vector<uint8_t> out(sizeof(r) + r.size);
    std::memcpy(out.data(), &r, sizeof(r));
    std::memcpy(out.data() + sizeof(r), b, r.size);
    std::lock_guard lock(s.lock);
    Append(s.file, out.data(), out.size());
}

bool LoadPipeline(uint64_t name, std::vector<uint8_t>& key_bytes) {
    (void)name;
    (void)key_bytes;
    // the driver's VkPipelineCache is the store; the keys file warms the builds instead
    return false;
}

void StorePipeline(uint64_t name, const void* key, size_t bytes) {
    (void)name;
    L().unsaved++;
    L().last_store = NowMs();
    AddPipelineKey(key, bytes);
}

void SaveWhenIdle() {
    PipelineCache& l = L();
    if (!l.unsaved || NowMs() - l.last_store < kSaveIdleMs || l.saving.exchange(true)) return;
    Post([] {
        SavePipelineCache();
        L().saving = false;
    });
}

std::vector<std::vector<uint8_t>> TakePipelineKeys() {
    Keys& k = K();
    std::lock_guard lock(k.lock);
    return std::move(k.loaded);
}

void AddPipelineKey(const void* key, size_t size) {
    Keys& k = K();
    if (!k.file) return;
    KeyRecord r{Hash(key, size), uint32_t(size), 0};
    std::lock_guard lock(k.lock);
    if (!k.known.insert(r.hash).second) return;
    std::vector<uint8_t> out(sizeof(r) + size);
    std::memcpy(out.data(), &r, sizeof(r));
    std::memcpy(out.data() + sizeof(r), key, size);
    Append(k.file, out.data(), out.size());
}

void Post(std::function<void()> job, bool ahead) {
    Pool& p = P();
    {
        std::lock_guard lock(p.lock);
        if (ahead) {
            p.jobs.push_front(std::move(job));
        } else {
            p.jobs.push_back(std::move(job));
        }
        if (!p.started) {
            p.started = true;
            // the title's thread, the render thread and audio keep theirs
            unsigned cores = std::thread::hardware_concurrency();
            int n = std::clamp(int(cores) - 3, 1, 4);
            for (int i = 0; i < n; i++) std::thread(Run).detach();
            LOGI("shader build threads: %d", n);
        }
    }
    p.wake.notify_one();
}

}  // namespace gpu::cache

namespace gpu {

// set by the Vulkan backend at Init: hands the serialized VkPipelineCache to SavePipelineCache
void (*CollectPipelineCacheData)(const std::function<bool(const void*, size_t)>&) = nullptr;

// the driver's pipeline cache data to disk; called at PersistDisplay, at quit, and when idle after new pipelines
void SavePipelineCache() {
    cache::PipelineCache& l = cache::L();
    std::lock_guard lock(l.save_lock);
    if (!CollectPipelineCacheData) return;
    std::filesystem::path tmp = l.file;
    tmp += ".tmp";
    bool ok = false;
    if (FILE* f = std::fopen(tmp.c_str(), "wb")) {
        CollectPipelineCacheData([&f](const void* p, size_t n) { return std::fwrite(p, 1, n, f) == n; });
        ok = std::fclose(f) == 0;
    }
    if (ok) {
        std::error_code ec;
        std::filesystem::rename(tmp, l.file, ec);
        ok = !ec;
    }
    if (ok) {
        LOGI("pipeline cache: %.1f MB saved", std::filesystem::file_size(l.file) / 1048576.0);
    } else {
        std::error_code ec;
        std::filesystem::remove(tmp, ec);
    }
}

}  // namespace gpu
