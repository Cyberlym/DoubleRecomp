// Portable HLE for the parts the Android build leaves out by agreement: no
// online, no co-op, no versus, no voice. The networking entry points answer
// "no network", the headset answers "none plugged in", and the wideband voice
// link never arrives — the solo boot and the front-end menus stay crash-free.
#include <chrono>
#include <cstdint>
#include <mutex>
#include <string>

#include "app/app.h"
#include "audio/audio.h"
#include "core/log.h"
#include "cpu/x86_context.h"
#include "xdk/communicator.h"
#include "xdk/hle.h"

using namespace kernel;

// ---------------------------------------------------------------------------
// xnet: the session state the host reads (app_android's pause rule keeps the
// game running while a session flag is up, so it always says no session here)
// ---------------------------------------------------------------------------
namespace xnet {

std::atomic<bool> g_in_session{false};

bool InSession() {
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
// xnet guest entry points: the recompiled XNet code is left out with it, so the
// functions the solo boot and the front-end menus reach answer "no network"
// directly: the stack starts, the link is down, no socket ever carries anything.
// ---------------------------------------------------------------------------
namespace {

void NoNetwork() {
    static bool logged = false;
    if (!logged) {
        LOGW("xnet: no networking in this Android build, the game stays offline");
        logged = true;
    }
}

uint32_t PseudoRandom() {
    static std::mutex lock;
    static uint64_t s = 0x5849482Bull ^ uint64_t(std::chrono::steady_clock::now().time_since_epoch().count());
    std::lock_guard<std::mutex> hold(lock);
    s ^= s << 13;
    s ^= s >> 7;
    s ^= s << 17;
    return uint32_t(s >> 32);
}

}  // namespace

HLE_STDCALL(XNetStartup, 1) {
    NoNetwork();
    return 0;
}

HLE_STDCALL(WSAStartup, 2) {
    NoNetwork();
    if (a[1]) {
        std::memset(HostPtr(a[1]), 0, 400);
        W32(a[1], 0x02020202);  // wVersion, wHighVersion
    }
    return 0;
}

HLE_STDCALL(WSAGetLastError, 0) { return 10050; }  // WSAENETDOWN

HLE_STDCALL(XNetGetEthernetLinkStatus, 0) {
    NoNetwork();
    return 0;  // XNET_LINK_DISCONNECTED: no cable, the system-link menus stay greyed
}

HLE_STDCALL(XOnlineStartup, 1) {
    NoNetwork();
    return 0;
}

HLE_STDCALL(XOnlineCleanup, 0) { return 0; }

HLE_STDCALL(XNetRandom, 2) {
    for (uint32_t i = 0; i < a[1]; i++) G<uint8_t>(a[0] + i) = uint8_t(PseudoRandom());
    return 0;
}

HLE_STDCALL(XNetCreateKey, 2) {
    for (uint32_t i = 0; i < 8; i++) G<uint8_t>(a[0] + i) = uint8_t(PseudoRandom());
    for (uint32_t i = 0; i < 16; i++) G<uint8_t>(a[1] + i) = uint8_t(PseudoRandom());
    G<uint8_t>(a[0]) &= 0x0F;
    return 0;
}

HLE_STDCALL(XNetRegisterKey, 2) { return 0; }

HLE_STDCALL(XNetUnregisterKey, 1) { return 0; }

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
// audio: the wideband voice link (voice_link.cpp, left out with the networking)
// never starts, so its voice never arrives: the game's own copy of a talker's
// voice keeps playing. dsound::MuteForVoiceLink keeps its real implementation in
// dsound.cpp; the mark only silences a stream while link voice is being heard.
// ---------------------------------------------------------------------------
namespace audio {

bool VoiceLinkHeard() {
    static bool logged = false;
    if (!logged) {
        LOGI("audio: no voice link in this Android build, the game's own voice plays");
        logged = true;
    }
    return false;
}

}  // namespace audio
