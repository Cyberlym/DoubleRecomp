// Portable HLE for the parts the Android build leaves out: the F10 settings menu (needs Dear ImGui),
// the Xbox Communicator headset, DirectSound's voice-link mute and XNet's session state.
// Co-op/system-link networking is deferred until ENABLE_VERSUS; these implementations carry real state
// where the game reads one and log, once, what is unavailable in this build.
#include <algorithm>
#include <atomic>
#include <cstdint>
#include <cstdio>
#include <mutex>
#include <string>
#include <vector>

#include "app/app.h"
#include "core/log.h"
#include "cpu/x86_context.h"
#include "xdk/communicator.h"

// ---------------------------------------------------------------------------
// input: the session flags the game side sets and reads (input.h)
// ---------------------------------------------------------------------------
namespace input {

static std::atomic<bool> g_net{false};
static std::atomic<bool> g_training_video{false};

void SetNetSession(bool net) { g_net.store(net); }
bool NetSession() { return g_net.load(); }
void SetTrainingVideo(bool on) { g_training_video.store(on); }

}  // namespace input

// ---------------------------------------------------------------------------
// xnet: session state and the co-op host values. With networking deferred the
// session flag follows input::NetSession and the host values keep the console
// defaults (22 Hz tick, 50 ms input delay floor) the settings menu starts at.
// ---------------------------------------------------------------------------
namespace xnet {

static std::atomic<bool> g_in_session{false};

bool InSession() {
    g_in_session.store(input::NetSession());
    return g_in_session.load();
}

static std::mutex g_coop_lock;
static bool (*g_coop_host)(uint32_t& rate, uint32_t& floor) = nullptr;
static bool g_logged = false;

void SetCoopHost(bool (*host)(uint32_t& rate, uint32_t& floor)) {
    std::lock_guard<std::mutex> lock(g_coop_lock);
    g_coop_host = host;
}

bool CoopHostValues(uint32_t& rate, uint32_t& floor) {
    std::lock_guard<std::mutex> lock(g_coop_lock);
    if (!g_logged) {
        LOGW("xnet: co-op host values are the console defaults (networking deferred in this Android build)");
        g_logged = true;
    }
    if (g_coop_host) return g_coop_host(rate, floor);
    rate = 22;   // the settings' COOP TICK RATE default, Hz
    floor = 50;  // COOP MIN INPUT DELAY default, ms
    return true;
}

}  // namespace xnet

// ---------------------------------------------------------------------------
// communicator: a phone has no Xbox Communicator headset hardware. Refresh
// leaves the image's device records as they are (nothing to add) and Create
// answers false for every type, the "no headset has this type" the header
// defines, so the game's voice path stays off exactly as on a console with
// no communicator plugged in.
// ---------------------------------------------------------------------------
namespace communicator {

void Refresh(X86Context& /*ctx*/, const Types& /*types*/) {}

bool Create(X86Context& /*ctx*/, const Types& /*types*/) {
    static bool logged = false;
    if (!logged) {
        LOGI("communicator: no headset hardware on Android, voice devices stay disconnected");
        logged = true;
    }
    return false;
}

}  // namespace communicator

// ---------------------------------------------------------------------------
// dsound: the voice link's mute marks a stream so the wideband voice (also
// deferred here) would take it over; with no voice link there is nothing to
// mark, the SDL mixer keeps playing the stream as it is.
// ---------------------------------------------------------------------------
namespace dsound {

void MuteForVoiceLink(uint32_t /*stream*/) {
    static bool logged = false;
    if (!logged) {
        LOGI("dsound: voice link deferred, streams keep their own audio");
        logged = true;
    }
}

}  // namespace dsound

// ---------------------------------------------------------------------------
// app::rows / app::SettingsRevision: the F10 settings menu needs Dear ImGui,
// which this Android build does not link (the menu comes with the touch UI).
// The game code polls these for the panel's contents; with no panel there are
// no rows to show and settings only change from the game's own pages.
// ---------------------------------------------------------------------------
namespace app {

uint32_t SettingsRevision() {
    return 0;  // nothing outside the game's own pages changes settings in this build
}

// MenuOpen lives in platform/app_android.cpp; ToggleMenu below is the only menu entry point here
void ToggleMenu() {
    static bool logged = false;
    if (!logged) {
        LOGW("app: the F10 settings menu is not part of this Android build (waiting on the touch UI)");
        logged = true;
    }
}

namespace rows {

const Row* Page(int /*page*/, size_t* count) {
    *count = 0;
    return nullptr;
}

std::string Value(const Row& /*row*/) { return {}; }
void Step(const Row& /*row*/, int /*step*/) {}
void Defaults(int /*page*/) {}

std::vector<std::string> Choices(const Row& /*row*/, int* current) {
    *current = 0;
    return {};
}
void Choose(const Row& /*row*/, int /*index*/) {}

bool Shown(const Row& /*row*/) { return false; }
bool Enabled(const Row& /*row*/) { return false; }

}  // namespace rows
}  // namespace app
