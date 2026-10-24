// Android/SDL3 input layer - Passo 1: SDL_Gamepad reading only
#include <SDL3/SDL.h>
#include <array>
#include <atomic>
#include <mutex>
#include <string>
#include <string_view>

namespace input {

enum class KeyEvent { None, Whistle, SidekickCommand, QuickSave, QuickLoad, Reload, PushToTalk, HideHud, SettingsPanel, DropBody, ZoomIn, ZoomOut };

struct PadState {
    bool connected = false;
    uint16_t buttons = 0;  // XINPUT_GAMEPAD bitmask
    uint8_t analog[8] = {};  // A,B,X,Y,LB,RB,LT,RT (0-255)
    int16_t lx = 0, ly = 0, rx = 0, ry = 0;
};

static std::array<PadState, 4> g_pads{};
static std::array<SDL_Gamepad*, 4> g_sdl_pads{};
static std::mutex g_pads_mutex;
static bool g_sdl_init = false;

void InitPads() {
    if (g_sdl_init) return;
    SDL_SetHint(SDL_HINT_JOYSTICK_THREAD, "1");
    SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");
    if (SDL_InitSubSystem(SDL_INIT_GAMEPAD)) {
        g_sdl_init = true;
        int count = 0;
        if (SDL_JoystickID* ids = SDL_GetGamepads(&count)) {
            for (int i = 0; i < count && i < 4; i++) {
                std::lock_guard lock(g_pads_mutex);
                g_sdl_pads[i] = SDL_OpenGamepad(ids[i]);
            }
            SDL_free(ids);
        }
    }
}

void UpdatePads() {
    if (!g_sdl_init) return;
    SDL_PumpEvents();
    SDL_Event e;
    while (SDL_PeepEvents(&e, 1, SDL_GETEVENT, SDL_EVENT_FIRST, SDL_EVENT_LAST) == 1) {
        if (e.type == SDL_EVENT_GAMEPAD_ADDED) {
            for (int i = 0; i < 4; i++) {
                std::lock_guard lock(g_pads_mutex);
                if (!g_sdl_pads[i]) {
                    g_sdl_pads[i] = SDL_OpenGamepad(e.gdevice.which);
                    if (g_sdl_pads[i]) g_pads[i].connected = true;
                    break;
                }
            }
        } else if (e.type == SDL_EVENT_GAMEPAD_REMOVED) {
            for (int i = 0; i < 4; i++) {
                std::lock_guard lock(g_pads_mutex);
                if (g_sdl_pads[i] && SDL_GetGamepadID(g_sdl_pads[i]) == e.gdevice.which) {
                    SDL_CloseGamepad(g_sdl_pads[i]);
                    g_sdl_pads[i] = nullptr;
                    g_pads[i] = PadState{};
                    break;
                }
            }
        }
    }

    // Read pad states
    for (int i = 0; i < 4; i++) {
        std::lock_guard lock(g_pads_mutex);
        SDL_Gamepad* pad = g_sdl_pads[i];
        if (!pad) {
            g_pads[i] = PadState{};
            continue;
        }

        PadState& ps = g_pads[i];
        ps.connected = true;

        // Buttons - SDL_GamepadButton to XINPUT_GAMEPAD mask
        constexpr std::pair<SDL_GamepadButton, uint16_t> kBtnMap[] = {
            {SDL_GAMEPAD_BUTTON_DPAD_UP,      0x0001},  // XINPUT_GAMEPAD_DPAD_UP
            {SDL_GAMEPAD_BUTTON_DPAD_DOWN,    0x0002},  // XINPUT_GAMEPAD_DPAD_DOWN
            {SDL_GAMEPAD_BUTTON_DPAD_LEFT,    0x0004},  // XINPUT_GAMEPAD_DPAD_LEFT
            {SDL_GAMEPAD_BUTTON_DPAD_RIGHT,   0x0008},  // XINPUT_GAMEPAD_DPAD_RIGHT
            {SDL_GAMEPAD_BUTTON_START,        0x0010},  // XINPUT_GAMEPAD_START
            {SDL_GAMEPAD_BUTTON_BACK,         0x0020},  // XINPUT_GAMEPAD_BACK
            {SDL_GAMEPAD_BUTTON_LEFT_STICK,   0x0040},  // XINPUT_GAMEPAD_LEFT_THUMB
            {SDL_GAMEPAD_BUTTON_RIGHT_STICK,  0x0080},  // XINPUT_GAMEPAD_RIGHT_THUMB
            {SDL_GAMEPAD_BUTTON_LEFT_SHOULDER,0x0100},  // XINPUT_GAMEPAD_LEFT_SHOULDER (LB)
            {SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER,0x0200}, // XINPUT_GAMEPAD_RIGHT_SHOULDER (RB)
            {SDL_GAMEPAD_BUTTON_SOUTH,        0x1000},  // XINPUT_GAMEPAD_A
            {SDL_GAMEPAD_BUTTON_EAST,         0x2000},  // XINPUT_GAMEPAD_B
            {SDL_GAMEPAD_BUTTON_WEST,         0x4000},  // XINPUT_GAMEPAD_X
            {SDL_GAMEPAD_BUTTON_NORTH,        0x8000},  // XINPUT_GAMEPAD_Y
        };

        uint16_t btns = 0;
        for (auto [sdl_btn, xinput_mask] : kBtnMap) {
            if (SDL_GetGamepadButton(pad, sdl_btn)) btns |= xinput_mask;
        }
        ps.buttons = btns;

        // Triggers 0-255
        ps.analog[6] = uint8_t(SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFT_TRIGGER) >> 7);   // LT
        ps.analog[7] = uint8_t(SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_RIGHT_TRIGGER) >> 7);  // RT

        // A,B,X,Y from buttons (also available as analog 0-3)
        ps.analog[0] = (btns & 0x1000) ? 0xFF : 0;  // A
        ps.analog[1] = (btns & 0x2000) ? 0xFF : 0;  // B
        ps.analog[2] = (btns & 0x4000) ? 0xFF : 0;  // X
        ps.analog[3] = (btns & 0x8000) ? 0xFF : 0;  // Y
        ps.analog[4] = (btns & 0x0100) ? 0xFF : 0;  // LB
        ps.analog[5] = (btns & 0x0200) ? 0xFF : 0;  // RB

        // Sticks with dead zone
        constexpr int DEAD_ZONE = 8000;
        auto apply_dz = [](int16_t v) -> int16_t {
            if (v > -DEAD_ZONE && v < DEAD_ZONE) return 0;
            return v;
        };
        ps.lx = apply_dz(SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTX));
        ps.ly = apply_dz(-1 - SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_LEFTY));  // SDL Y is down
        ps.rx = apply_dz(SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_RIGHTX));
        ps.ry = apply_dz(-1 - SDL_GetGamepadAxis(pad, SDL_GAMEPAD_AXIS_RIGHTY));
    }
}

PadState GetPadState(int port) {
    if (port < 0 || port >= 4) return PadState{};
    std::lock_guard lock(g_pads_mutex);
    return g_pads[port];
}

// ===== Runtime bridge (input.h API) =====

void Init(void* /*hwnd*/) {
    InitPads();
}

void StartControllers() {
    InitPads();
}

uint16_t HeldOnAnyController() {
    UpdatePads();
    uint16_t held = 0;
    for (int i = 0; i < 4; i++) {
        std::lock_guard lock(g_pads_mutex);
        if (g_pads[i].connected) held |= g_pads[i].buttons;
    }
    return held;
}

// Convert internal PadState to public input::Pad
struct Pad {
    bool connected = false;
    uint16_t buttons = 0;
    uint8_t analog[8] = {};
    int16_t lx = 0, ly = 0, rx = 0, ry = 0;
};

Pad Poll(int port) {
    UpdatePads();
    Pad p{};
    if (port >= 0 && port < 4) {
        std::lock_guard lock(g_pads_mutex);
        const auto& ps = g_pads[port];
        p.connected = ps.connected;
        p.buttons = ps.buttons;
        for (int i = 0; i < 8; i++) p.analog[i] = ps.analog[i];
        p.lx = ps.lx;
        p.ly = ps.ly;
        p.rx = ps.rx;
        p.ry = ps.ry;
    }
    return p;
}

int KeyboardPort() { return 0; }  // Android: keyboard on port 0

bool PadConnected(int slot) {
    if (slot < 0 || slot >= 4) return false;
    std::lock_guard lock(g_pads_mutex);
    return g_pads[slot].connected;
}

void Rumble(int port, uint16_t left, uint16_t right) {
    if (port < 0 || port >= 4) return;
    std::lock_guard lock(g_pads_mutex);
    if (g_sdl_pads[port]) {
        SDL_RumbleGamepad(g_sdl_pads[port], left, right, 0);
    }
}

void SetBlocked(bool /*blocked*/) {}

void OnRawInput(void* /*handle*/) {}
void OnPress() {}
void OnClick() {}
void ReleaseCursor() {}

bool TakeMouse(float& dx, float& dy) {
    dx = 0; dy = 0;
    return false;
}

void SetMenu(bool /*menu*/) {}
void SetPointer(bool /*on*/) {}
bool Pointer() { return false; }
void SetTitleScreen(bool /*title*/) {}
void SetPauseMenu(bool /*pause*/) {}
void SetOpsat(bool /*opsat*/) {}
void SetMap(bool /*map*/) {}
bool MapDrag() { return false; }
void SetQuickInventory(bool /*open*/) {}
void SetTextEntry(bool /*on*/) {}
void OnChar(unsigned /*c*/) {}
std::u16string TakeChars() { return {}; }
void MovieFrame() {}
bool Movie() { return false; }

enum class View { Normal, StickyCamera, Eev, ScriptedEvent, Ledge, Lockpick, BackOut, Keypad };
void SetView(View /*view*/, float /*zoom_speed*/) {}
int TakeWheel() { return 0; }
int TakeKeypadButton() { return -1; }
int TakeMenuWheel() { return 0; }
void SetInteractionList(bool /*focused*/) {}
uint32_t StickKeys() { return 0; }

bool TakeEvent(KeyEvent /*event*/) { return false; }
bool EventKeyHeld(KeyEvent /*event*/) { return false; }
void SkipPromptShown() {}
void TapButtons(uint16_t /*buttons*/, uint64_t /*ms*/) {}

void WaitForPress() {}
bool PressReleased() { return false; }
bool SkipKeyReleased() { return false; }
bool InMenu() { return false; }
bool KeyboardActive() { return true; }
bool Cursor(int& /*x*/, int& /*y*/, int& /*w*/, int& /*h*/) { return false; }
uint32_t Clicks() { return 0; }
bool Pressing() { return false; }

struct Action { const char* id; const char* label; const char* defaults; };
const Action* Actions(size_t* count) { *count = 0; return nullptr; }
std::string Binding(size_t /*action*/) { return {}; }
void Bind(size_t /*action*/, int /*vk*/, int /*slot*/) {}
void Unbind(size_t /*action*/) {}
bool TakeDeletePress() { return false; }
void ResetBindings() {}
void LoadBindings() {}
int PressedKey() { return 0; }

struct PadAction { const char* id; const char* label; };
const PadAction* PadActions(size_t* count) { *count = 0; return nullptr; }
std::string PadBinding(size_t /*action*/) { return {}; }
void BindPad(size_t /*action*/, int /*button*/) {}
void ResetPadBindings() {}
int PressedPadButton() { return -1; }
bool ConsoleKey(int /*vk*/) { return false; }
bool HostKey(KeyEvent /*event*/, int /*vk*/) { return false; }
bool ConsoleChar(unsigned /*c*/) { return false; }

} // namespace input