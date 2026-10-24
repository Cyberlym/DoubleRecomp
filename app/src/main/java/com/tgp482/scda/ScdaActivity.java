// ScdaActivity - a unica classe Java propria do projeto.
//
// A integracao oficial da SDL3 no Android usa a SDLActivity (org.libsdl.app),
// que carrega as bibliotecas nativas listadas em getLibraries() e depois chama
// SDL_main() (gerada por SDL3/SDL_main.h no nosso main.cpp) via dlopen+dlsym.
//
// O padrao da SDL3 seria carregar "main"; aqui apontamos para a biblioteca do
// port: libscda_port.so. Toda a logica da casca vive em C/C++ (main.cpp).

package com.tgp482.scda;

import org.libsdl.app.SDLActivity;

public class ScdaActivity extends SDLActivity {
    @Override
    protected String[] getLibraries() {
        return new String[] {
            "SDL3",       // libSDL3.so  (compilada do fonte third_party/SDL)
            "scda_port"   // libscda_port.so (casca nativa, app/src/main/cpp)
        };
    }
}
