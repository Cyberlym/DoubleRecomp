#pragma once
// The few ImGui names the runtime's shared sources name, without the library: the F10 panel stays closed on Android
// (app_android.cpp keeps DrawUi empty), but the game's own options menu drives the rows this header's users declare.
// If ImGui is integrated one day, its real header takes this file's place in the include path.
#pragma push_macro("None")
#undef None

struct ImVec2 {
    float x = 0, y = 0;
};
struct ImVec4 {
    float x = 0, y = 0, z = 0, w = 0;
};

enum ImGuiCol_ {
    ImGuiCol_Text = 0,
    ImGuiCol_TextDisabled,
    ImGuiCol_WindowBg,
    ImGuiCol_Border,
    ImGuiCol_FrameBg,
    ImGuiCol_FrameBgHovered,
    ImGuiCol_FrameBgActive,
    ImGuiCol_Header,
    ImGuiCol_HeaderHovered,
    ImGuiCol_HeaderActive,
    ImGuiCol_Button,
    ImGuiCol_ButtonHovered,
    ImGuiCol_ButtonActive,
    ImGuiCol_Separator,
    ImGuiCol_ScrollbarGrab,
    ImGuiCol_ScrollbarGrabHovered,
    ImGuiCol_ScrollbarGrabActive,
    ImGuiCol_TextSelectedBg,
    ImGuiCol_NavHighlight,
    ImGuiCol_COUNT,
};
typedef int ImGuiCol;

#pragma pop_macro("None")
