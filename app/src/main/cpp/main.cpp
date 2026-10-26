// The Android shell: one SDL window over the recompiled runtime. The game's thread runs the XBE's entry point once
// kernel::Boot starts it; this thread keeps the window and the SDL events alive while the game plays.
// The launcher Activity installs the disc image before this starts; without one the shell says so and returns.
// Everything below is the host the runtime expects: settings, gamepads, the quit flow, the boot markers.
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

#include <atomic>
#include <chrono>
#include <cstdio>
#include <filesystem>
#include <string>

#include "app/app.h"
#include "core/input.h"
#include "core/log.h"
#include "gpu/backend.h"
#include "image_symbols.h"
#include "kernel/disc.h"
#include "kernel/kernel.h"
#include "platform/boot_stage.h"
#include "platform/platform.h"

namespace {

using clock_ = std::chrono::steady_clock;
std::atomic<bool> g_game_done{false};

void QueueAndroidRelaunch() {
    const std::filesystem::path marker = app::ExeDir() / "data" / "relaunch.pending";
    std::error_code ec;
    std::filesystem::create_directories(marker.parent_path(), ec);
    if (FILE* f = std::fopen(marker.string().c_str(), "wb")) {
        std::fputs("1\n", f);
        std::fclose(f);
    } else {
        LOGE("shell: could not queue Android relaunch at %s", marker.string().c_str());
    }
}

// the confirm dialog on the Android back key: never close a running game by accident
bool ConfirmQuit() {
    const SDL_MessageBoxButtonData buttons[] = {
        {0, 0, "CONTINUAR JOGANDO"},
        {SDL_MESSAGEBOX_BUTTON_ESCAPEKEY_DEFAULT | SDL_MESSAGEBOX_BUTTON_RETURNKEY_DEFAULT, 1, "SAIR DO JOGO"},
    };
    SDL_MessageBoxData m{};
    m.message = "Sair do jogo?";
    m.numbuttons = int(std::size(buttons));
    m.buttons = buttons;
    int choice = 0;
    if (!SDL_ShowMessageBox(&m, &choice)) {
        LOGW("shell: the quit dialog failed: %s, the back key is ignored", SDL_GetError());
        return false;
    }
    return choice == 1;
}

}  // namespace

// the runtime's exit: the game's exit menu or a fatal call reaches these through boot.cpp's weak hooks
extern "C" void scda_on_relaunch(const char* exe) {
    // one image per build here: default.xbe is compiled in, versus would need its own library
    LOGI("shell: queueing Android relaunch to %s (%s)", exe, IMAGE_XBE);
    QueueAndroidRelaunch();
    gpu::SavePipelineCache();
    stage::Clean();
    logx::Flush();
    platform::RequestQuit();
    g_game_done = true;
    kernel::ExitThread(0);
}

extern "C" void scda_on_shutdown(int code) {
    LOGI("shell: the runtime asked to shut down (%d)", code);
    gpu::SavePipelineCache();
    logx::Flush();
    stage::Clean();
    platform::RequestQuit();
    g_game_done = true;
}

int main(int argc, char* argv[]) {
    (void)argc;
    (void)argv;
    SDL_SetAppMetadata("SCDA Port", "0.2.6", "com.tgp482.scda_port");
    SDL_SetHint(SDL_HINT_ORIENTATIONS, "LandscapeLeft LandscapeRight");

    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS | SDL_INIT_GAMEPAD | SDL_INIT_AUDIO)) {
        LOGE("shell: SDL_Init failed: %s", SDL_GetError());
        return 1;
    }

    // the runtime log: <app files>/logs/scda_NNN.log, and logcat under the "scda" tag
    logx::Init((app::ExeDir() / "logs").string(), "scda", false);
    LOGI("shell: SCDA Port 0.2.6 host starting, log %s", logx::Path().c_str());

    SDL_Window* window = SDL_CreateWindow("SCDA", 0, 0,
                                          SDL_WINDOW_FULLSCREEN | SDL_WINDOW_VULKAN |
                                              SDL_WINDOW_HIGH_PIXEL_DENSITY);
    if (!window) {
        LOGE("shell: no window: %s", SDL_GetError());
        return 1;
    }

    // the host the runtime expects, before the boot
    platform::SetWindow(window);
    platform::SetInputWindow(window);
    app::Load();
    platform::SetFrameRate();  // the display's high rate when the frame rate is unlocked or over 60
    input::Init(window);        // gamepads: connected before the game asks for its ports
    app::LogSystem();
    stage::Begin();  // runtime_init, and the clean marker only comes back on a clean end

    // the game: the installed disc image, its xbe read from inside it
    app::GameFiles game;
    if (!app::FindGame(game)) {
        LOGE("shell: no game installed, use the launcher's installer first");
        logx::Flush();
        return 1;
    }
    if (kernel::MountedDisc()) stage::Record("iso_open");
    stage::Record("xbe_loaded");
    if (!app::PrepareGameCode(game)) {
        logx::Flush();
        return 1;
    }

    // the boot: the image's sections land in guest memory, the kernel tables fill, and the entry point runs on a
    // thread of its own; this thread stays the window's. The saves live under <app files>/data, the disc under game/.
    std::string data_dir = (app::ExeDir() / "data").string();
    if (!kernel::Boot(std::move(game.xbe), IMAGE_XBE, game.dir.string(), data_dir)) {
        LOGE("shell: the boot failed, see the log above");
        logx::Flush();
        return 1;
    }
    stage::Record("game_entry");

    // the watchdog: the launcher's Jogar only counts as started once a frame was presented; 20 s without
    // one, or a GPU the backend refused, gives up and the launcher shows how far the run got
    constexpr auto kFirstFrameTimeout = std::chrono::seconds(20);
    auto entry_at = clock_::now();
    bool vulkan_ready = false, first_frame = false, backend_failed = false;

    // the event loop: the runtime sees the SDL events through its own pumps, the quit comes from the
    // game's exit menu, the system, or the back key's confirm dialog
    while (!platform::QuitRequested() && !g_game_done) {
        SDL_Event e;
        while (SDL_PollEvent(&e)) {
            platform::PumpSdlEvent(&e);
            if (e.type == SDL_EVENT_QUIT || e.type == SDL_EVENT_TERMINATING) platform::RequestQuit();
            else if (e.type == SDL_EVENT_KEY_DOWN && e.key.key == SDLK_AC_BACK && ConfirmQuit())
                platform::RequestQuit();
        }

        if (!vulkan_ready && gpu::g_backend_state == 1) {
            vulkan_ready = true;
            stage::Record("vulkan_ready");
        }
        if (gpu::g_backend_state == 2 && !backend_failed) {
            backend_failed = true;
            LOGE("shell: the GPU cannot run the game, see the log for the reason");
        }
        if (!first_frame && gpu::g_presents.load() > 0) {
            first_frame = true;
            stage::Record("first_frame_presented");
        }
        if (!first_frame && (backend_failed || clock_::now() - entry_at > kFirstFrameTimeout)) {
            const char* why = backend_failed ? "vulkan_failed" : "first_frame_timeout";
            LOGE("shell: the game did not reach its first frame, giving up (%s)", why);
            stage::Record(why);
            break;
        }
        SDL_Delay(2);
    }

    // a clean end: the pipeline cache, the log on disk, the marker the launcher reads. The game's threads stop
    // with the process when the Activity finishes; nothing here tears the window down from under the render thread.
    gpu::SavePipelineCache();
    logx::Flush();
    stage::Clean();
    LOGI("shell: SCDA Port host exiting");
    return 0;
}
