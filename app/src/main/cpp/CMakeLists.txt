# SCDA Port - native Android ARM64 build.
# One shared library: the runtime (kernel, HLE, the Vulkan backend), the recompiled game code
# (generated/game), and SDL3, linked into libscda_port.so, which SDLActivity loads for SDL_main().
cmake_minimum_required(VERSION 3.22.1)
project(scda_port LANGUAGES C CXX)

set(SCDA_SDL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../../../third_party/SDL")
# shaderc built once from the NDK's own sources (sources/third_party/shaderc), no repository fetched
get_filename_component(NDK_DIR "${CMAKE_ANDROID_NDK}" ABSOLUTE)
set(SHADERC_ROOT "${NDK_DIR}/sources/third_party/shaderc")
set(SCDA_SHADERC_DIR "${SCDA_SHADERC_DIR}" CACHE PATH
    "shaderc's NDK build: libshaderc.a and libshaderc/include")
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

# the recompiled game code: the partitions, the mappings and the weak alias unit the ELF overrides need
file(GLOB GENERATED_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../../generated/game/x86_recomp.*.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../../generated/game/x86_func_mapping.cpp"
)
set(ALIASES_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/../../../../generated/game/x86_aliases.cpp")
# the aliases live in a unit of their own (see cpu/x86_ops.h): no caller shares it, so every call
# resolves at link time, strong over the weak
set_source_files_properties(${ALIASES_SOURCE} PROPERTIES COMPILE_DEFINITIONS "X86_ALIAS_UNIT=1")

add_library(scda_port SHARED ${RUNTIME_SOURCES} ${GENERATED_SOURCES} ${ALIASES_SOURCE})

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

if(NOT SCDA_SHADERC_DIR)
    # ndk-build lands it under libs/c++_static/<abi>; a flat libs/<abi> also works
    foreach(candidate "libs/c++_static/${ANDROID_ABI}" "libs/${ANDROID_ABI}")
        if(EXISTS "${SHADERC_ROOT}/${candidate}/libshaderc.a")
            set(SCDA_SHADERC_DIR "${SHADERC_ROOT}/${candidate}")
            break()
        endif()
    endforeach()
    if(NOT SCDA_SHADERC_DIR)
        set(SCDA_SHADERC_DIR "${SHADERC_ROOT}/libs/${ANDROID_ABI}")
    endif()
endif()
# the headers: the NDK package keeps them at <pkg>/include (and libshaderc/include is the same tree)
if(EXISTS "${SHADERC_ROOT}/include/shaderc/shaderc.h")
    target_include_directories(scda_port PRIVATE "${SHADERC_ROOT}/include")
else()
    target_include_directories(scda_port PRIVATE "${SCDA_SHADERC_DIR}/../../libshaderc/include")
endif()

# the static shaderc and its pieces, one archive: libshaderc.a
find_library(SCDA_SHADERC_LIB shaderc PATHS "${SCDA_SHADERC_DIR}" NO_DEFAULT_PATH)
if(NOT SCDA_SHADERC_LIB)
    message(FATAL_ERROR "libshaderc.a not found in ${SCDA_SHADERC_DIR}; build it with ndk-build "
        "NDK_PROJECT_PATH=. APP_BUILD_SCRIPT=Android.mk APP_ABI=${ANDROID_ABI} APP_STL=c++_static "
        "libshaderc_combined in ${CMAKE_ANDROID_NDK}/sources/third_party/shaderc")
endif()
target_link_libraries(scda_port PRIVATE ${SCDA_SHADERC_LIB})

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
    -g0
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
