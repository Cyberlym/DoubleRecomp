#pragma once
// glue between the Android shell (main.cpp) and the recompiled runtime
#include <cstdint>
#include <string>

namespace platform {

// the SDL window the game renders into, set before kernel::Boot
void SetWindow(void* window);
// the input feed ties the focus and the foreground to the same window
void SetInputWindow(void* window);
// the display's high rate when the frame rate is unlocked or over 60 (API 30+), called after the settings load
void SetFrameRate();
void* WindowHandle();

// a graceful end-of-run request from the UI (the game's exit menu calls kernel::Shutdown directly)
void RequestQuit();
bool QuitRequested();

// SDL event feed: called from the main loop for every event, before the game sees anything
void PumpSdlEvent(const void* sdl_event);

// call once a frame from the SDL main loop
void Tick();

}  // namespace platform
