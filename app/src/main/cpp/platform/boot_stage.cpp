// The boot markers: <app files>/logs/boot_stage.txt (the last stage reached, overwritten)
// and <app files>/logs/run_clean.txt (only after a run ended on its own terms).
// Every stage also goes to the runtime log (and so to logcat under the "scda" tag).
#include "platform/boot_stage.h"

#include <cstdio>
#include <filesystem>
#include <string>

#include "app/app.h"
#include "core/log.h"

namespace stage {

namespace {

std::filesystem::path File(const char* name) { return app::ExeDir() / "logs" / name; }

void Write(const std::filesystem::path& file, const char* text) {
    if (FILE* f = std::fopen(file.c_str(), "w")) {
        std::fprintf(f, "%s\n", text);
        std::fclose(f);
    }
}

}  // namespace

void Record(const char* name) {
    std::error_code ec;
    std::filesystem::create_directories(app::ExeDir() / "logs", ec);
    Write(File("boot_stage.txt"), name);
    LOGI("boot stage: %s", name);
}

void Begin() {
    std::error_code ec;
    std::filesystem::remove(File("run_clean.txt"), ec);
    Record("runtime_init");
}

void Clean() {
    std::error_code ec;
    std::filesystem::create_directories(app::ExeDir() / "logs", ec);
    Write(File("run_clean.txt"), "1");
    LOGI("boot stage: exit_clean");
}

}  // namespace stage
