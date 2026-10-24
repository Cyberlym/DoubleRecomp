// Android port of the input.h state setters from core/input.cpp (the Windows XInput
// file, excluded from this build). The flags keep the game's calls working; the
// Windows polling code reads them, and an Android reader can pick them up later.
#include "core/input.h"

#include <atomic>

namespace input {

static std::atomic<bool> g_interact_reloads{false};
static std::atomic<bool> g_targeting{false};
static std::atomic<bool> g_carrying{false};
static std::atomic<bool> g_hanging{false};
static std::atomic<bool> g_ladder{false};
static std::atomic<bool> g_ladder_step{false};  // the ladder's transition (a step) is running
static std::atomic<bool> g_pipe{false};

void SetInteractReloads(bool on) {
    g_interact_reloads = on;
}

void SetTargeting(bool on) {
    g_targeting = on;
}

void SetCarrying(bool on) {
    g_carrying = on;
}

void SetHanging(bool on) {
    g_hanging = on;
}

void SetLadder(bool on, bool stepping) {
    g_ladder = on;
    g_ladder_step = on && stepping;
}

void SetPipe(bool on) { g_pipe = on; }

}  // namespace input

