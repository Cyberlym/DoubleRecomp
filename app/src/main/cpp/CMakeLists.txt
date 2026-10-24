# SCDA Port - Native Android ARM64 build
# Builds libscda_port.so with SDL3, the recompiled runtime, and Vulkan backend
cmake_minimum_required(VERSION 3.22.1)
project(scda_port LANGUAGES C CXX)

set(SCDA_SDL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../../../third_party/SDL")

# ShaderC for HLSL->SPIR-V compilation (via FetchContent)
include(FetchContent)

# SPIRV-Headers (required by SPIRV-Tools)
FetchContent_Declare(spirv-headers
    GIT_REPOSITORY https://github.com/KhronosGroup/SPIRV-Headers
    GIT_TAG vulkan-sdk-1.4.363.0
    GIT_SHALLOW TRUE
)

# SPIRV-Tools (required by shaderc)
set(SPIRV_TOOLS_BUILD_STATIC ON CACHE BOOL "" FORCE)
set(SPIRV_TOOLS_BUILD_SHARED OFF CACHE BOOL "" FORCE)
set(SPIRV_TOOLS_INSTALL OFF CACHE BOOL "" FORCE)
set(SPIRV_TOOLS_BUILD_TESTS OFF CACHE BOOL "" FORCE)
FetchContent_Declare(spirv-tools
    GIT_REPOSITORY https://github.com/KhronosGroup/SPIRV-Tools
    GIT_TAG vulkan-sdk-1.4.363.0
    GIT_SHALLOW TRUE
)

# glslang (required by shaderc)
set(GLSLANG_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLSLANG_INSTALL OFF CACHE BOOL "" FORCE)
FetchContent_Declare(glslang
    GIT_REPOSITORY https://github.com/KhronosGroup/glslang
    GIT_TAG vulkan-sdk-1.4.363.0
    GIT_SHALLOW TRUE
)

# ShaderC
set(SHADERC_SKIP_INSTALL ON CACHE BOOL "" FORCE)
set(SHADERC_SKIP_TESTS ON CACHE BOOL "" FORCE)
set(SHADERC_SKIP_COPYRIGHT_CHECK ON CACHE BOOL "" FORCE)
set(SHADERC_SKIP_EXAMPLES ON CACHE BOOL "" FORCE)
FetchContent_Declare(shaderc
    GIT_REPOSITORY https://github.com/google/shaderc
    GIT_TAG v2025.5
    GIT_SHALLOW TRUE
)

# toml++ for settings
FetchContent_Declare(tomlplusplus
    GIT_REPOSITORY https://github.com/marzer/tomlplusplus.git
    GIT_TAG v3.4.0
    GIT_SHALLOW TRUE
)

# Opus for voice chat
set(OPUS_BUILD_PROGRAMS OFF CACHE BOOL "" FORCE)
set(OPUS_BUILD_TESTING OFF CACHE BOOL "" FORCE)
set(OPUS_INSTALL_PKG_CONFIG_MODULE OFF CACHE BOOL "" FORCE)
set(OPUS_INSTALL_CMAKE_CONFIG_MODULE OFF CACHE BOOL "" FORCE)
set(OPUS_STACK_PROTECTOR OFF CACHE BOOL "" FORCE)
set(OPUS_FORTIFY_SOURCE OFF CACHE BOOL "" FORCE)
FetchContent_Declare(opus
    GIT_REPOSITORY https://github.com/xiph/opus.git
    GIT_TAG v1.5.2
    GIT_SHALLOW TRUE
)

FetchContent_MakeAvailable(spirv-headers spirv-tools glslang shaderc tomlplusplus opus)

# SDL configuration: shared library only, no tests/examples
set(SDL_SHARED ON CACHE BOOL "" FORCE)
set(SDL_STATIC OFF CACHE BOOL "" FORCE)
set(SDL_TEST_LIBRARY OFF CACHE BOOL "" FORCE)
set(SDL_TESTS OFF CACHE BOOL "" FORCE)
set(SDL_EXAMPLES OFF CACHE BOOL "" FORCE)
set(SDL_ANDROID_JAR OFF CACHE BOOL "" FORCE)
set(SDL_DISABLE_INSTALL ON CACHE BOOL "" FORCE)

add_subdirectory("${SCDA_SDL_DIR}" sdl3-build EXCLUDE_FROM_ALL)

# Collect all scda source files
file(GLOB_RECURSE SCDA_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/scda/*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/scda/**/*.cpp"
)

# Exclude Windows-specific files
list(FILTER SCDA_SOURCES EXCLUDE REGEX ".*menu_rows\\.cpp$")
list(FILTER SCDA_SOURCES EXCLUDE REGEX ".*core/input\\.cpp$")        # uses xinput.h
list(FILTER SCDA_SOURCES EXCLUDE REGEX ".*audio/voice_link\\.cpp$")  # uses opus.h
list(FILTER SCDA_SOURCES EXCLUDE REGEX ".*cpu/dispatch\\.cpp$")      # uses LoadLibraryW
list(FILTER SCDA_SOURCES EXCLUDE REGEX ".*xdk/xnet\\.cpp$")          # uses Windows networking APIs
list(FILTER SCDA_SOURCES EXCLUDE REGEX ".*xdk/bink\\.cpp$")          # uses Windows APIs
list(FILTER SCDA_SOURCES EXCLUDE REGEX ".*xdk/dsound\\.cpp$")        # uses DirectSound
list(FILTER SCDA_SOURCES EXCLUDE REGEX ".*xdk/xapi\\.cpp$")          # uses Windows APIs
list(FILTER SCDA_SOURCES EXCLUDE REGEX ".*xdk/communicator\\.cpp$")  # uses Windows networking

# Collect generated source files (recompiled XBE partitions)
file(GLOB_RECURSE GENERATED_GAME_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../generated/game/*.cpp"
)
file(GLOB_RECURSE GENERATED_VERSUS_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../generated/versus/*.cpp"
)

# Platform sources (Android-specific)
set(PLATFORM_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/platform/app_android.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/platform/audio_sdl.cpp"
)

# Main entry point
set(MAIN_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp")

# All sources combined
set(ALL_SOURCES
    ${MAIN_SOURCE}
    ${PLATFORM_SOURCES}
    ${SCDA_SOURCES}
    ${GENERATED_GAME_SOURCES}
    ${GENERATED_VERSUS_SOURCES}
)

# Main library: exports SDL_main() loaded by SDLActivity
add_library(scda_port SHARED ${ALL_SOURCES})

target_compile_features(scda_port PRIVATE cxx_std_20)

# Include directories - use absolute paths to ensure generated headers are found
set(GENERATED_GAME_DIR "/workspaces/DoubleRecomp/generated/game")
set(GENERATED_VERSUS_DIR "/workspaces/DoubleRecomp/generated/versus")

# Include directories
target_include_directories(scda_port PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/scda"
    "${GENERATED_GAME_DIR}"
    "${GENERATED_VERSUS_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/platform"
    "${SCDA_SDL_DIR}/include"
    "${shaderc_SOURCE_DIR}/libshaderc/include"
    "${tomlplusplus_SOURCE_DIR}/include"
)

target_link_libraries(scda_port PRIVATE
    SDL3::SDL3
    log
    android
    vulkan
    EGL
    GLESv3
    shaderc_shared
    tomlplusplus::tomlplusplus
    opus
)

# Compile definitions
target_compile_definitions(scda_port PRIVATE
    SCDA_PORT=1
    __ANDROID__=1
    SHADERC_STATIC=1
    X86_GAME_CODE=1
    _CRT_SECURE_NO_WARNINGS=1
)

# Compile options for performance and size
target_compile_options(scda_port PRIVATE
    -O2
    -fvisibility=hidden
    -ffunction-sections
    -fdata-sections
    -Wno-unused-parameter
    -Wno-sign-compare
    -Wno-unused-variable
    -Wno-unused-function
    -fno-strict-aliasing
)

# Link options
target_link_options(scda_port PRIVATE
    -Wl,--gc-sections
    -Wl,--exclude-libs,ALL
)

# Android-specific: the shared library must be named libscda_port.so
set_target_properties(scda_port PROPERTIES
    OUTPUT_NAME "scda_port"
    ANDROID_SO_NAME "scda_port"
)

# The generated code needs the XBE SHA-1 hash
target_compile_definitions(scda_port PRIVATE
    IMAGE_XBE=\"default.xbe\"
)