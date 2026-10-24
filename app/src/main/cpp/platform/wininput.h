#pragma once
// The Win32 input APIs the recompiled runtime's input.cpp names, on Android: XInput's report the SDL pads fill, the
// virtual key codes the SDL feed maps to, and the cursor and keyboard layout calls that have no device here.
// Windows builds keep the real headers; this goes after wincompat.h.
#ifndef _WIN32

#include <algorithm>
#include <cstring>

// ---- virtual key codes the input names ----
constexpr int VK_LBUTTON = 0x01, VK_RBUTTON = 0x02, VK_MBUTTON = 0x04, VK_XBUTTON1 = 0x05, VK_XBUTTON2 = 0x06;
constexpr int VK_BACK = 0x08, VK_TAB = 0x09, VK_RETURN = 0x0D, VK_SHIFT = 0x10, VK_CONTROL = 0x11, VK_MENU = 0x12;
constexpr int VK_PAUSE = 0x13, VK_CAPITAL = 0x14, VK_ESCAPE = 0x1B, VK_SPACE = 0x20, VK_SNAPSHOT = 0x2C;
constexpr int VK_END = 0x23, VK_HOME = 0x24, VK_LEFT = 0x25, VK_UP = 0x26, VK_RIGHT = 0x27, VK_DOWN = 0x28;
constexpr int VK_INSERT = 0x2D, VK_DELETE = 0x2E;
constexpr int VK_LWIN = 0x5B, VK_RWIN = 0x5C, VK_APPS = 0x5D, VK_NUMPAD0 = 0x60, VK_NUMPAD1 = 0x61,
              VK_NUMPAD2 = 0x62, VK_NUMPAD3 = 0x63, VK_NUMPAD4 = 0x64, VK_NUMPAD5 = 0x65, VK_NUMPAD6 = 0x66,
              VK_NUMPAD7 = 0x67, VK_NUMPAD8 = 0x68, VK_NUMPAD9 = 0x69, VK_MULTIPLY = 0x6A, VK_ADD = 0x6B,
              VK_SUBTRACT = 0x6D, VK_DECIMAL = 0x6E, VK_DIVIDE = 0x6F;
constexpr int VK_F1 = 0x70, VK_F2 = 0x71, VK_F3 = 0x72, VK_F4 = 0x73, VK_F5 = 0x74, VK_F6 = 0x75, VK_F7 = 0x76,
              VK_F8 = 0x77, VK_F9 = 0x78, VK_F10 = 0x79, VK_F11 = 0x7A, VK_F12 = 0x7B;
constexpr int VK_NUMLOCK = 0x90, VK_SCROLL = 0x91;
constexpr int VK_LSHIFT = 0xA0, VK_RSHIFT = 0xA1, VK_LCONTROL = 0xA2, VK_RCONTROL = 0xA3, VK_LMENU = 0xA4,
              VK_RMENU = 0xA5;
constexpr int VK_OEM_COMMA = 0xBC, VK_OEM_MINUS = 0xBD, VK_OEM_PERIOD = 0xBE, VK_OEM_1 = 0xBA, VK_OEM_2 = 0xBF,
              VK_OEM_3 = 0xC0, VK_OEM_4 = 0xDB, VK_OEM_5 = 0xDC, VK_OEM_6 = 0xDD, VK_OEM_7 = 0xDE;
constexpr int VK_BROWSER_BACK = 0xA6, VK_BROWSER_FORWARD = 0xA7, VK_LAUNCH_APP2 = 0xB7;

// ---- window and mouse messages, the cursor refresh asks for them by name ----
constexpr int WM_SETCURSOR = 0x20, WM_MOUSEMOVE = 0x200, HTCLIENT = 1;
constexpr uint32_t WHEEL_DELTA = 120;
inline LPARAM MAKELPARAM(uint32_t lo, uint32_t hi) { return LPARAM(lo | hi << 16); }

// ---- XInput's report, what ReadPad fills and the game's own code reads ----
constexpr WORD XINPUT_GAMEPAD_DPAD_UP = 0x1, XINPUT_GAMEPAD_DPAD_DOWN = 0x2, XINPUT_GAMEPAD_DPAD_LEFT = 0x4,
               XINPUT_GAMEPAD_DPAD_RIGHT = 0x8, XINPUT_GAMEPAD_START = 0x10, XINPUT_GAMEPAD_BACK = 0x20,
               XINPUT_GAMEPAD_LEFT_THUMB = 0x40, XINPUT_GAMEPAD_RIGHT_THUMB = 0x80,
               XINPUT_GAMEPAD_LEFT_SHOULDER = 0x100, XINPUT_GAMEPAD_RIGHT_SHOULDER = 0x200,
               XINPUT_GAMEPAD_A = 0x1000, XINPUT_GAMEPAD_B = 0x2000, XINPUT_GAMEPAD_X = 0x4000,
               XINPUT_GAMEPAD_Y = 0x8000;
constexpr BYTE XINPUT_GAMEPAD_TRIGGER_THRESHOLD = 30;

struct XINPUT_GAMEPAD {
    WORD wButtons = 0;
    BYTE bLeftTrigger = 0, bRightTrigger = 0;
    SHORT sThumbLX = 0, sThumbLY = 0, sThumbRX = 0, sThumbRY = 0;
};
struct XINPUT_STATE {
    uint32_t dwPacketNumber = 0;
    XINPUT_GAMEPAD Gamepad;
};
struct XINPUT_VIBRATION {
    WORD wLeftMotorSpeed = 0, wRightMotorSpeed = 0;
};

// ---- keyboard layout: the Android feed delivers virtual key codes directly, no per layout mapping ----
typedef void* HKL;
constexpr UINT MAPVK_VK_TO_VSC = 1, MAPVK_VSC_TO_VK_EX = 3, MAPVK_VK_TO_CHAR = 2;
inline HKL GetKeyboardLayout(uint32_t) { return nullptr; }
inline uint32_t GetWindowThreadProcessId(HWND, uint32_t*) { return 0; }
inline UINT MapVirtualKeyExW(UINT vk, UINT kind, HKL) {
    // no layout table: binds hold by virtual key code, the labels carry them
    (void)kind;
    return vk;
}

// ---- cursor: no pointer device without one; the client size still matters for the keypad cursor ----
struct POINT {
    LONG x = 0, y = 0;
};
struct RECT {
    LONG left = 0, top = 0, right = 0, bottom = 0;
};
inline BOOL EqualRect(const RECT* a, const RECT* b) {
    return a->left == b->left && a->top == b->top && a->right == b->right && a->bottom == b->bottom;
}
inline BOOL GetCursorPos(POINT*) { return FALSE; }
inline BOOL ScreenToClient(HWND, POINT*) { return FALSE; }
inline BOOL GetClientRect(HWND hwnd, RECT* r) {
    if (!hwnd || !r) return FALSE;
    int w = 1280, h = 720;
    if (SDL_Window* win = static_cast<SDL_Window*>(hwnd)) SDL_GetWindowSize(win, &w, &h);
    *r = {0, 0, w, h};
    return TRUE;
}
inline int MapWindowPoints(HWND, HWND, POINT*, int) { return 0; }
inline BOOL GetClipCursor(RECT*) { return FALSE; }

// ---- raw input: the SDL feed calls input::OnMouseRaw instead, the Windows path never runs ----
typedef void* HRAWINPUT;
constexpr UINT RID_INPUT = 0x10000003, RIM_TYPEMOUSE = 0;
constexpr WORD RI_MOUSE_WHEEL = 0x0800;
constexpr LONG MOUSE_MOVE_ABSOLUTE = 1;
struct RAWINPUTHEADER {
    uint32_t dwType = 0, dwSize = 0;
    void* hDevice = nullptr;
    WPARAM wParam = 0;
};
struct RAWMOUSE {
    uint16_t usFlags = 0;
    uint32_t ulButtons = 0;
    union {
        uint32_t ulRawButtons = 0;
        struct {
            uint16_t usButtonFlags, usButtonData;
        };
    };
    LONG lLastX = 0, lLastY = 0;
};
struct RAWINPUT {
    RAWINPUTHEADER header;
    struct {
        RAWMOUSE mouse;
    } data;
};
struct RAWINPUTDEVICE {
    uint16_t usUsagePage = 0, usUsage = 0;
    uint32_t dwFlags = 0;
    HWND hwndTarget = nullptr;
};
inline BOOL RegisterRawInputDevices(const RAWINPUTDEVICE*, UINT, UINT) { return TRUE; }
inline UINT GetRawInputData(HRAWINPUT, UINT, void*, UINT*, UINT) { return UINT(-1); }

#endif  // !_WIN32
