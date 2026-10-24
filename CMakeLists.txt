cmake_minimum_required(VERSION 3.22)
project(scda_port_linux LANGUAGES C CXX)

# SDL3 - minimal build
set(SDL_SHARED ON CACHE BOOL "" FORCE)
set(SDL_STATIC OFF CACHE BOOL "" FORCE)
set(SDL_TEST_LIBRARY OFF CACHE BOOL "" FORCE)
set(SDL_TESTS OFF CACHE BOOL "" FORCE)
set(SDL_EXAMPLES OFF CACHE BOOL "" FORCE)
set(SDL_DISABLE_INSTALL ON CACHE BOOL "" FORCE)
set(SDL_X11 OFF CACHE BOOL "" FORCE)
set(SDL_WAYLAND OFF CACHE BOOL "" FORCE)
set(SDL_X11_XCURSOR OFF CACHE BOOL "" FORCE)
set(SDL_X11_XINPUT OFF CACHE BOOL "" FORCE)
set(SDL_X11_XRANDR OFF CACHE BOOL "" FORCE)
set(SDL_X11_XSS OFF CACHE BOOL "" FORCE)
set(SDL_X11_XSHAPE OFF CACHE BOOL "" FORCE)
set(SDL_X11_XFIXES OFF CACHE BOOL "" FORCE)
set(SDL_X11_XKB OFF CACHE BOOL "" FORCE)
set(SDL_LIBUDEV OFF CACHE BOOL "" FORCE)
set(SDL_DBUS OFF CACHE BOOL "" FORCE)
set(SDL_VIDEO_OFFSCREEN ON CACHE BOOL "" FORCE)

add_subdirectory(third_party/SDL sdl3-build EXCLUDE_FROM_ALL)

# Collect sources
file(GLOB_RECURSE SCDA_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/app/src/main/cpp/scda/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/app/src/main/cpp/scda/**/*.cpp"
)

file(GLOB_RECURSE GENERATED_GAME_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/game/*.cpp"
)
file(GLOB_RECURSE GENERATED_VERSUS_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/versus/*.cpp"
)

set(PLATFORM_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/app/src/main/cpp/platform/app_android.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/app/src/main/cpp/platform/audio_sdl.cpp"
)

set(MAIN_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/app/src/main/cpp/main.cpp")

set(ALL_SOURCES
    ${MAIN_SOURCE}
    ${PLATFORM_SOURCES}
    ${SCDA_SOURCES}
    ${GENERATED_GAME_SOURCES}
    ${GENERATED_VERSUS_SOURCES}
)

add_library(scda_port SHARED ${ALL_SOURCES})

target_compile_features(scda_port PRIVATE cxx_std_17)

target_include_directories(scda_port PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/app/src/main/cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/app/src/main/cpp/scda"
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/game"
    "${CMAKE_CURRENT_SOURCE_DIR}/generated/versus"
    "${CMAKE_CURRENT_SOURCE_DIR}/app/src/main/cpp/platform"
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party/SDL/include"
)

target_compile_definitions(scda_port PRIVATE
    SCDA_PORT=1
    __ANDROID__=1
    VK_NO_PROTOTYPES=1
)

target_compile_options(scda_port PRIVATE
    -O2
    -fvisibility=hidden
    -ffunction-sections
    -fdata-sections
    -Wno-unused-parameter
    -Wno-sign-compare
    -Wno-unused-variable
    -Wno-unused-function
)

target_link_libraries(scda_port PRIVATE
    SDL3::SDL3
    vulkan
    dl
    rt
    pthread
)
