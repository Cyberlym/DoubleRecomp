// The host side of the port on Android: window, settings lifecycle, frame pacing and focus.
// What the Windows app layer did in main.cpp, splash.cpp, handover.cpp, focus_pause.cpp and system_info.cpp.
#include <SDL3/SDL.h>

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <mutex>
#include <string>
#include <thread>

#include "../platform/platform.h"
#include "app/app.h"
#include "audio/output.h"
#include "core/input.h"
#include "core/log.h"
#include "gpu/backend.h"
#include "image_symbols.h"
#include "kernel/kernel.h"

#ifdef __ANDROID__
#include <android/api-level.h>
#include <android/log.h>
#include <dlfcn.h>
#define SCDA_LOG_TAG "scda"
#endif

// the xbe this build was recompiled from: kImageSha1 comes from the CMake-generated xbe_sha1.cpp
// (sha1 of default.xbe at configure time), declared here for the log line below
extern const char kImageSha1[];

namespace dispatch {
bool Load(const std::filesystem::path& dll);  // cpu/dispatch.cpp: the recompiled code's tables
}  // namespace dispatch

namespace xnet {
bool InSession();  // xdk/xnet.cpp
}  // namespace xnet

namespace app {

namespace {

std::atomic<void*> g_window{nullptr};
std::atomic<bool> g_quit{false};

}  // namespace

namespace platform_impl {
void SetWindow(void* w) { g_window = w; }
}  // namespace platform_impl

std::filesystem::path ExeDir() {
    // the app's own external files dir: room for a game image, the saves and the shader cache
    static const std::filesystem::path dir = [] {
        if (const char* ext = SDL_GetAndroidExternalStoragePath()) return std::filesystem::path(ext);
        char* pref = SDL_GetPrefPath("tgp482", "scda");
        std::filesystem::path p = pref ? std::filesystem::path(pref) : std::filesystem::path("/data/local/tmp/scda");
        SDL_free(pref);
        return p;
    }();
    return dir;
}

int Instance() { return 0; }

void* Window() { return g_window.load(); }

std::recursive_mutex& UiLock() {
    static std::recursive_mutex m;
    return m;
}

void ApplyDisplay() {
    // the window fills the display; the resolution settings shape the renderer, not the window
    g_display_applied++;
}

// no splash and no handover on a phone
bool OpenSplash() { return false; }
void SplashFirstFrame() {}
void CloseSplash() {}
void OpenGameWindow(bool) { ApplyDisplay(); }
bool StartHandover() { return false; }
bool HandingOver() { return false; }
void FinishHandover() {}
void* MenuCursor() { return nullptr; }

// the F10 panel and console stay closed on a device; the game's own options menu does the
// settings. MenuOpen and ToggleMenu live in menu_rows.cpp (its g_open stays 0 without the key)
bool ConsoleOpen() { return false; }
void ToggleConsole() {}
void DrawConsole() {}
void DrawUi() {}
void DrawPageText(X86Context&, std::u16string_view, int, int, int, uint32_t) {}

// the recompiled code ships in the APK; the tables it runs by are linked in, Load reads them
bool PrepareGameCode(const GameFiles&) {
    if (!dispatch::Load(ExeDir() / (std::string(IMAGE_XBE) + ".dll"))) {
        LOGE("game code: the recompiled code's tables did not come up, cannot start");
        return false;
    }
    LOGI("game code: %s compiled in (AOT), sha1 %s", IMAGE_XBE, kImageSha1);
    return true;
}

void LogSystem() {
    int v = SDL_GetVersion();
    LOGR("Android %s, SDL %u.%u.%u", SDL_GetAndroidSDKVersion() >= 0 ? "device" : "?",
         SDL_VERSIONNUM_MAJOR(v), SDL_VERSIONNUM_MINOR(v), SDL_VERSIONNUM_MICRO(v));
    if (const SDL_DisplayMode* m = SDL_GetDesktopDisplayMode(SDL_GetPrimaryDisplay()))
        LOGR("Display: %dx%d %.0f Hz", m->w, m->h, m->refresh_rate);
    LogSettings();
}

// the display's refresh rate, read again each second; 0 when unreadable
uint32_t RefreshRate() {
    static uint32_t rate = 0;
    static uint64_t next = 0;
    if (uint64_t now = SDL_GetTicks(); now >= next) {
        next = now + 1000;
        if (const SDL_DisplayMode* m = SDL_GetCurrentDisplayMode(SDL_GetPrimaryDisplay()))
            rate = m->refresh_rate > 1 ? uint32_t(m->refresh_rate) : 0;
    }
    return rate;
}

void Pace() {
    using clock = std::chrono::steady_clock;
    static clock::time_point next = clock::now();
    uint32_t cap = Get().fps_cap;
    // a few under the refresh rate, so a variable refresh display stays in its range and vsync never waits a whole
    // refresh
    constexpr uint32_t kRefreshMargin = 3;
    if (cap == kFpsCapRefresh) cap = RefreshRate() > kRefreshMargin ? RefreshRate() - kRefreshMargin : 0;
    if (std::string_view(IMAGE_XBE) == "sc4_adv.xbe" && (!cap || cap > kVersusMaxFps)) cap = kVersusMaxFps;
    auto now = clock::now();
    if (!cap) {
        next = now;
        return;
    }
    auto period = std::chrono::nanoseconds(1000000000ull / cap);
    next += period;
    if (next < now - period) next = now;
    while (clock::now() + std::chrono::milliseconds(2) < next) SDL_Delay(1);
    while (clock::now() < next) std::this_thread::yield();
}

namespace {

bool ShouldPause() {
    if (!Get().pause_on_focus_loss || input::NetSession() || xnet::InSession()) return false;
    SDL_Window* w = static_cast<SDL_Window*>(Window());
    if (!w) return false;
    SDL_WindowFlags flags = SDL_GetWindowFlags(w);
    return !(flags & SDL_WINDOW_INPUT_FOCUS) || (flags & SDL_WINDOW_MINIMIZED);
}

}  // namespace

// pause on focus loss: the game thread waits while the app is in the background, sound and clocks stopped.
// Never in a network session, where the other machines would time out.
void WaitWhileUnfocused() {
    if (!ShouldPause()) return;
    LOGI("focus lost: paused");
    audio::SetPaused(true);
    kernel::HoldGuestTime(true);
    while (ShouldPause()) SDL_Delay(20);
    kernel::HoldGuestTime(false);
    audio::SetPaused(false);
    LOGI("focus back: resumed");
}

}  // namespace app

namespace platform {

void SetWindow(void* w) { app::platform_impl::SetWindow(w); }
void* WindowHandle() { return app::Window(); }

// the display's own rate when the frame rate is unlocked or over 60: ANativeWindow_setFrameRate
// (API 30+) asks the panel to run high; before 30, or when the call is missing, the present mode does the pacing
void SetFrameRate() {
#ifdef __ANDROID__
    const app::Settings& s = app::Get();
    bool high = s.fps_cap == 0 || s.fps_cap == app::kFpsCapRefresh || s.fps_cap > 60;
    if (!high) return;
    if (android_get_device_api_level() < 30) return;
    using SetFrameRateFn = int32_t (*)(void*, float, int32_t);
    static SetFrameRateFn set = reinterpret_cast<SetFrameRateFn>(dlsym(RTLD_DEFAULT, "ANativeWindow_setFrameRate"));
    if (!set) {
        LOGW("platform: ANativeWindow_setFrameRate is not in this libandroid, the display keeps its rate");
        return;
    }
    SDL_Window* w = static_cast<SDL_Window*>(app::Window());
    if (!w) return;
    SDL_PropertiesID props = SDL_GetWindowProperties(w);
    void* native = SDL_GetPointerProperty(props, SDL_PROP_WINDOW_ANDROID_WINDOW_POINTER, nullptr);
    if (!native) return;
    float rate = 60;
    if (const SDL_DisplayMode* m = SDL_GetDesktopDisplayMode(SDL_GetPrimaryDisplay()))
        if (m->refresh_rate > 1) rate = float(m->refresh_rate);
    // compatibility 0 is DEFAULT; unlocked (fps_cap 0) may present faster than the panel, so ABOVE_DISPLAY_POWER_OPTIMAL
    if (set(native, rate, s.fps_cap == 0 ? 2 : 0) == 0)
        LOGI("platform: frame rate %.0f Hz asked of the display", rate);
    else
        LOGW("platform: the display refused the frame rate ask");
#endif
}
void RequestQuit() {
    app::g_quit = true;
    // the game thread may sit in a wait that only the next frame's present breaks out of
    kernel::SignalChanged();
}
bool QuitRequested() { return app::g_quit; }

}  // namespace platform
