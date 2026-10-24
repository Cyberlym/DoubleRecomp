// The SDL3 event feed: the keyboard and the mouse reach the runtime through the Win32 names it reads, and the gamepad
// notices through input's own pump. The main loop hands every event here before the game sees anything.
#include <SDL3/SDL.h>

#include <atomic>
#include <cstring>

#include "../platform/wincompat.h"
#include "../platform/wininput.h"
#include "core/input.h"
#include "core/log.h"
#include "platform.h"

namespace winhost {

// input.cpp's async key state, held down while the feed says so
std::atomic<uint8_t> g_vk[kMaxVk] = {};

}  // namespace winhost

namespace {

// the SDL window the game draws in, what the focus reports as foreground: input::Init registered the same pointer
SDL_Window* g_window = nullptr;
bool g_focus = false;

// the SDL keycodes the runtime's virtual key codes stand for. Letters and digits are their own codes; the rest maps
// the common bindings (the arrows, the modifiers, the numpad the keypad reads)
int VkOfKey(SDL_Keycode k) {
    if (k >= SDLK_A && k <= SDLK_Z) return 'A' + int(k - SDLK_A);
    if (k >= SDLK_0 && k <= SDLK_9) return '0' + int(k - SDLK_0);
    switch (k) {
        case SDLK_BACKSPACE: return VK_BACK;
        case SDLK_TAB: return VK_TAB;
        case SDLK_RETURN: return VK_RETURN;
        case SDLK_ESCAPE: return VK_ESCAPE;
        case SDLK_SPACE: return VK_SPACE;
        case SDLK_LSHIFT: return VK_LSHIFT;
        case SDLK_RSHIFT: return VK_RSHIFT;
        case SDLK_LCTRL: return VK_LCONTROL;
        case SDLK_RCTRL: return VK_RCONTROL;
        case SDLK_LALT: return VK_LMENU;
        case SDLK_RALT: return VK_RMENU;
        case SDLK_PAUSE: return VK_PAUSE;
        case SDLK_CAPSLOCK: return VK_CAPITAL;
        case SDLK_END: return VK_END;
        case SDLK_HOME: return VK_HOME;
        case SDLK_LEFT: return VK_LEFT;
        case SDLK_UP: return VK_UP;
        case SDLK_RIGHT: return VK_RIGHT;
        case SDLK_DOWN: return VK_DOWN;
        case SDLK_INSERT: return VK_INSERT;
        case SDLK_DELETE: return VK_DELETE;
        case SDLK_KP_0: return VK_NUMPAD0;
        case SDLK_KP_1: return VK_NUMPAD1;
        case SDLK_KP_2: return VK_NUMPAD2;
        case SDLK_KP_3: return VK_NUMPAD3;
        case SDLK_KP_4: return VK_NUMPAD4;
        case SDLK_KP_5: return VK_NUMPAD5;
        case SDLK_KP_6: return VK_NUMPAD6;
        case SDLK_KP_7: return VK_NUMPAD7;
        case SDLK_KP_8: return VK_NUMPAD8;
        case SDLK_KP_9: return VK_NUMPAD9;
        case SDLK_KP_MULTIPLY: return VK_MULTIPLY;
        case SDLK_KP_PLUS: return VK_ADD;
        case SDLK_KP_MINUS: return VK_SUBTRACT;
        case SDLK_KP_PERIOD: return VK_DECIMAL;
        case SDLK_KP_DIVIDE: return VK_DIVIDE;
        case SDLK_F1: return VK_F1;
        case SDLK_F2: return VK_F2;
        case SDLK_F3: return VK_F3;
        case SDLK_F4: return VK_F4;
        case SDLK_F5: return VK_F5;
        case SDLK_F6: return VK_F6;
        case SDLK_F7: return VK_F7;
        case SDLK_F8: return VK_F8;
        case SDLK_F9: return VK_F9;
        case SDLK_F10: return VK_F10;
        case SDLK_F11: return VK_F11;
        case SDLK_F12: return VK_F12;
        case SDLK_NUMLOCKCLEAR: return VK_NUMLOCK;
        case SDLK_SCROLLLOCK: return VK_SCROLL;
        case SDLK_COMMA: return VK_OEM_COMMA;
        case SDLK_MINUS: return VK_OEM_MINUS;
        case SDLK_PERIOD: return VK_OEM_PERIOD;
        case SDLK_SEMICOLON: return VK_OEM_1;
        case SDLK_SLASH: return VK_OEM_2;
        case SDLK_GRAVE: return VK_OEM_3;
        case SDLK_LEFTBRACKET: return VK_OEM_4;
        case SDLK_BACKSLASH: return VK_OEM_5;
        case SDLK_RIGHTBRACKET: return VK_OEM_6;
        case SDLK_APOSTROPHE: return VK_OEM_7;
        default: return 0;
    }
}

void SetKey(int vk, bool down) {
    if (vk <= 0 || vk >= winhost::kMaxVk) return;
    if ((winhost::g_vk[vk].load() != 0) == down) return;
    winhost::g_vk[vk] = down ? 0xFF : 0;
}

}  // namespace

namespace platform {

// the main loop registers the window before the game starts, so the focus and the foreground agree
void SetInputWindow(void* window) { g_window = static_cast<SDL_Window*>(window); }

// called from the main loop for every event, before the game sees anything
void PumpSdlEvent(const void* sdl_event) {
    const SDL_Event* e = static_cast<const SDL_Event*>(sdl_event);
    switch (e->type) {
        case SDL_EVENT_WINDOW_FOCUS_GAINED:
            g_focus = true;
            winhost::g_foreground = g_window ? g_window : reinterpret_cast<void*>(1);
            break;
        case SDL_EVENT_WINDOW_FOCUS_LOST:
            g_focus = false;
            winhost::g_foreground = reinterpret_cast<void*>(1);
            // the keys a focus loss leaves behind stick otherwise
            for (int vk = 1; vk < winhost::kMaxVk; vk++) winhost::g_vk[vk] = 0;
            break;
        case SDL_EVENT_KEY_DOWN:
            SetKey(VkOfKey(e->key.key), true);
            break;
        case SDL_EVENT_KEY_UP:
            SetKey(VkOfKey(e->key.key), false);
            break;
        case SDL_EVENT_TEXT_INPUT: {
            // the text entry keys' characters, the name entry takes; UTF-8 to a code unit
            const char* p = e->text.text;
            while (p && *p) {
                uint8_t b = uint8_t(*p);
                unsigned c = 0;
                int used = 1;
                if (b < 0x80) c = b;
                else if ((b & 0xE0) == 0xC0 && (b & 0xFE) != 0xC0) {
                    c = ((b & 0x1F) << 6) | (uint8_t(p[1]) & 0x3F);
                    used = 2;
                } else if ((b & 0xF0) == 0xE0) {
                    c = ((b & 0x0F) << 12) | ((uint8_t(p[1]) & 0x3F) << 6) | (uint8_t(p[2]) & 0x3F);
                    used = 3;
                }
                if (c && c <= 0xFFFF) input::OnChar(c);
                p += used;
            }
            break;
        }
        case SDL_EVENT_MOUSE_BUTTON_DOWN:
            if (e->button.button == SDL_BUTTON_LEFT) {
                SetKey(VK_LBUTTON, true);
                input::OnPress();
            } else if (e->button.button == SDL_BUTTON_RIGHT) {
                SetKey(VK_RBUTTON, true);
            } else if (e->button.button == SDL_BUTTON_MIDDLE) {
                SetKey(VK_MBUTTON, true);
            }
            break;
        case SDL_EVENT_MOUSE_BUTTON_UP:
            if (e->button.button == SDL_BUTTON_LEFT) {
                SetKey(VK_LBUTTON, false);
                input::OnClick();
            } else if (e->button.button == SDL_BUTTON_RIGHT) {
                SetKey(VK_RBUTTON, false);
            } else if (e->button.button == SDL_BUTTON_MIDDLE) {
                SetKey(VK_MBUTTON, false);
            }
            break;
        case SDL_EVENT_MOUSE_MOTION:
            // a mouse's relative motion, as the Windows raw input carried it
            if (g_focus && (e->motion.xrel || e->motion.yrel)) input::OnMouseRaw(e->motion.xrel, e->motion.yrel, 0);
            break;
        case SDL_EVENT_MOUSE_WHEEL:
            if (g_focus) input::OnMouseRaw(0, 0, e->wheel.y > 0 ? 1 : -1);
            break;
        default:
            break;
    }
}

// call once a frame from the SDL main loop
void Tick() {}

}  // namespace platform
