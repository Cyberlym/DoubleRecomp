# Casca nativa do SCDA Port - Etapa 1.
# Gera libscda_port.so e compila a SDL3 3.4.18 compartilhada (libSDL3.so),
# que o AGP empacota no APK em lib/arm64-v8a/.
cmake_minimum_required(VERSION 3.22.1)
project(scda_port LANGUAGES C CXX)

set(SCDA_SDL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../../../third_party/SDL")

# Configuracao da SDL: apenas a biblioteca compartilhada, sem testes/exemplos.
set(SDL_SHARED ON CACHE BOOL "" FORCE)
set(SDL_STATIC OFF CACHE BOOL "" FORCE)
set(SDL_TEST_LIBRARY OFF CACHE BOOL "" FORCE)
set(SDL_TESTS OFF CACHE BOOL "" FORCE)
set(SDL_EXAMPLES OFF CACHE BOOL "" FORCE)
set(SDL_ANDROID_JAR OFF CACHE BOOL "" FORCE)
set(SDL_DISABLE_INSTALL ON CACHE BOOL "" FORCE)

add_subdirectory("${SCDA_SDL_DIR}" sdl3-build EXCLUDE_FROM_ALL)

# Biblioteca principal do app: expota SDL_main() (via SDL3/SDL_main.h) que a
# ScdaActivity/SDLActivity carrega com System.loadLibrary("scda_port").
add_library(scda_port SHARED main.cpp)

target_compile_features(scda_port PRIVATE cxx_std_17)
# 'log' do Android: usado pelo __android_log_print (saida de logs no logcat).
target_link_libraries(scda_port PRIVATE SDL3::SDL3 log)
