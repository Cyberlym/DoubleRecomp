# SCDA Port - native Android ARM64 build.
# One shared library: the runtime (kernel, HLE, the Vulkan backend), the recompiled game code
# (generated/game), and SDL3, linked into libscda_port.so, which SDLActivity loads for SDL_main().
cmake_minimum_required(VERSION 3.22.1)
project(scda_port LANGUAGES C CXX)

set(SCDA_SDL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../../../third_party/SDL")
# shaderc v2025.5 from the sources already on disk (build-android/_deps, fetched once by the
# original build; no network here). The runtime's SPIR-V reflection is written for this
# glslang's output dialect; the NDK's own prebuilt (v2022.3) compiles fine, but its older
# glslang emits modules the reflection rejects (the on-device blit shader failure).
set(SCDA_SHADERC_DEPS "${CMAKE_CURRENT_SOURCE_DIR}/../../../../build-android/_deps")
foreach(comp IN ITEMS spirv-headers spirv-tools glslang shaderc)
    if(NOT EXISTS "${SCDA_SHADERC_DEPS}/${comp}-src/CMakeLists.txt")
        message(FATAL_ERROR "shaderc source ${comp} missing at ${SCDA_SHADERC_DEPS}/${comp}-src: "
            "the modern shaderc the runtime's reflection needs; restore the folder")
    endif()
endforeach()
include(FetchContent)
# declared with SOURCE_DIR and no download method: the folders are already on disk, nothing is fetched
FetchContent_Declare(spirv-headers SOURCE_DIR "${SCDA_SHADERC_DEPS}/spirv-headers-src")
FetchContent_Declare(spirv-tools SOURCE_DIR "${SCDA_SHADERC_DEPS}/spirv-tools-src")
FetchContent_Declare(glslang SOURCE_DIR "${SCDA_SHADERC_DEPS}/glslang-src")
FetchContent_Declare(shaderc SOURCE_DIR "${SCDA_SHADERC_DEPS}/shaderc-src")
set(SCDA_TOMLPP_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../../../third_party/tomlplusplus")

# SDL configuration: shared library only, no tests/examples
set(SDL_SHARED ON CACHE BOOL "" FORCE)
set(SDL_STATIC OFF CACHE BOOL "" FORCE)
set(SDL_TEST_LIBRARY OFF CACHE BOOL "" FORCE)
set(SDL_TESTS OFF CACHE BOOL "" FORCE)
set(SDL_EXAMPLES OFF CACHE BOOL "" FORCE)
set(SDL_ANDROID_JAR OFF CACHE BOOL "" FORCE)
set(SDL_DISABLE_INSTALL ON CACHE BOOL "" FORCE)
add_subdirectory("${SCDA_SDL_DIR}" sdl3-build EXCLUDE_FROM_ALL)

# the runtime's sources: the host the recompiled game calls
set(RUNTIME_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/platform/app_android.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/platform/audio_sdl.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/platform/boot_stage.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/platform/hle_android.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/platform/input_sdl.cpp"
)

file(GLOB SCDA_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/scda/*/*.cpp")
# out by agreement: no online, no co-op, no versus, no voice. The minimal no-network and
# no-headset answers the solo boot needs live in platform/hle_android.cpp
list(FILTER SCDA_SOURCES EXCLUDE REGEX ".*audio/voice_link\\.cpp$")
list(FILTER SCDA_SOURCES EXCLUDE REGEX ".*xdk/xnet\\.cpp$")
list(FILTER SCDA_SOURCES EXCLUDE REGEX ".*xdk/communicator\\.cpp$")
# versus is its own image (sc4_adv.xbe) and this build carries the story one only
list(FILTER SCDA_SOURCES EXCLUDE REGEX ".*versus/.*\\.cpp$")
list(APPEND RUNTIME_SOURCES ${SCDA_SOURCES})

# the recompiled game code: the partitions and the weak alias unit the ELF overrides need.
# x86_func_mapping.cpp gets a patched copy: its definitions are plain const (internal linkage on
# ELF), while the runtime reads them through extern "C" declarations (cpu/x86_context.h); the copy
# carries the extern "C" and compiles in place of the original.
file(GLOB GENERATED_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../../generated/game/x86_recomp.*.cpp"
)
set(ALIASES_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/../../../../generated/game/x86_aliases.cpp")
set(FUNC_MAPPING_IN "${CMAKE_CURRENT_SOURCE_DIR}/../../../../generated/game/x86_func_mapping.cpp")
set(FUNC_MAPPING_OUT "${CMAKE_CURRENT_BINARY_DIR}/x86_func_mapping.cpp")
add_custom_command(OUTPUT "${FUNC_MAPPING_OUT}"
    COMMAND ${CMAKE_COMMAND} -DFUNC_MAPPING_IN=${FUNC_MAPPING_IN} -DFUNC_MAPPING_OUT=${FUNC_MAPPING_OUT}
            -P "${CMAKE_CURRENT_SOURCE_DIR}/patch_mapping.cmake"
    DEPENDS "${FUNC_MAPPING_IN}"
    COMMENT "patching the recompiled tables for ELF linkage")
set_source_files_properties(${ALIASES_SOURCE} PROPERTIES COMPILE_DEFINITIONS "X86_ALIAS_UNIT=1")
set_source_files_properties(${FUNC_MAPPING_OUT} PROPERTIES GENERATED TRUE COMPILE_OPTIONS "-O2")
# the aliases live in a unit of their own (see cpu/x86_ops.h): no caller shares it, so every call
# resolves at link time, strong over the weak
set_source_files_properties(${ALIASES_SOURCE} PROPERTIES COMPILE_DEFINITIONS "X86_ALIAS_UNIT=1")

add_library(scda_port SHARED ${RUNTIME_SOURCES} ${GENERATED_SOURCES} ${ALIASES_SOURCE} ${FUNC_MAPPING_OUT})

target_compile_features(scda_port PRIVATE cxx_std_20)

set(GENERATED_GAME_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../../../generated/game")
target_include_directories(scda_port PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}/platform"
    "${CMAKE_CURRENT_SOURCE_DIR}/scda"
    "${GENERATED_GAME_DIR}"
    "${SCDA_SDL_DIR}/include"
    "${SCDA_TOMLPP_DIR}"
)

# the modern shaderc, static, hidden inside the .so by --exclude-libs,ALL: the same
# v2025.5 the runtime's reflection was developed against, from the local sources
set(SPIRV_HEADERS_SKIP_EXAMPLES ON CACHE BOOL "" FORCE)
set(SPIRV_TOOLS_BUILD_STATIC ON CACHE BOOL "" FORCE)
set(SPIRV_TOOLS_BUILD_SHARED OFF CACHE BOOL "" FORCE)
set(SPIRV_TOOLS_INSTALL OFF CACHE BOOL "" FORCE)
set(SPIRV_TOOLS_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLSLANG_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLSLANG_ENABLE_INSTALL OFF CACHE BOOL "" FORCE)
set(GLSLANG_INSTALL OFF CACHE BOOL "" FORCE)
set(SHADERC_SKIP_INSTALL ON CACHE BOOL "" FORCE)
set(SHADERC_SKIP_TESTS ON CACHE BOOL "" FORCE)
set(SHADERC_SKIP_EXAMPLES ON CACHE BOOL "" FORCE)
set(SHADERC_SKIP_EXECUTABLES ON CACHE BOOL "" FORCE)
set(SHADERC_SKIP_COPYRIGHT_CHECK ON CACHE BOOL "" FORCE)
set(SHADERC_ENABLE_WERROR_COMPILE OFF CACHE BOOL "" FORCE)
include(FetchContent)
FetchContent_MakeAvailable(spirv-headers spirv-tools glslang shaderc)
# shaderc always defines a shared twin; it must never build (it would land in the APK)
if(TARGET shaderc_shared)
    set_target_properties(shaderc_shared PROPERTIES EXCLUDE_FROM_ALL TRUE)
endif()
target_include_directories(scda_port PRIVATE "${SCDA_SHADERC_DEPS}/shaderc-src/libshaderc/include")
target_link_libraries(scda_port PRIVATE shaderc)

target_link_libraries(scda_port PRIVATE SDL3::SDL3 log android vulkan)

target_compile_definitions(scda_port PRIVATE X86_GAME_CODE=1)

# the xbe this build was recompiled from: the runtime checks the game it finds is the same release
set(SCDA_XBE "${CMAKE_CURRENT_SOURCE_DIR}/../../../../default.xbe")
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS "${SCDA_XBE}")
file(SHA1 "${SCDA_XBE}" SCDA_XBE_SHA1)
set(XBE_HASH "${CMAKE_CURRENT_BINARY_DIR}/xbe_sha1.cpp")
file(CONFIGURE OUTPUT "${XBE_HASH}" CONTENT "extern const char kImageSha1[] = \"${SCDA_XBE_SHA1}\";\n")
target_sources(scda_port PRIVATE "${XBE_HASH}")
message(STATUS "recompiled image: default.xbe sha1 ${SCDA_XBE_SHA1}")
# the image's symbols carry IMAGE_XBE; nothing redefines it

target_compile_options(scda_port PRIVATE
    -O2
    -g
    -fno-strict-aliasing
    -fvisibility=hidden
    -ffunction-sections
    -fdata-sections
    -w
)
# the generated code compiles once, slowly: its own optimization, the runtime's are theirs
set_source_files_properties(${GENERATED_SOURCES} PROPERTIES COMPILE_OPTIONS "-O2")

target_link_options(scda_port PRIVATE
    -Wl,--gc-sections
    -Wl,--exclude-libs,ALL
)

set_target_properties(scda_port PROPERTIES OUTPUT_NAME "scda_port")
