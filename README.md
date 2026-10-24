# SCDA Port — Etapa 1: Casca nativa Android (diagnóstico)

Base 100% nativa (Android NDK + C/C++ + CMake + SDL3) para o futuro port de
Splinter Cell: Double Agent ([SCDA-XBERecomp](https://github.com/TGP482/SCDA-XBERecomp)).
Sem emuladores de PC, sem Wine, sem Box64, sem driver Turnip.

**Escopo desta etapa:** apenas a casca de diagnóstico. Nada de XBE, jogo,
DirectX ou port nesta fase.

## Arquitetura escolhida

Investigação prévia (fonte SDL3 3.4.18 + `docs/README-android.md`):

- A SDL3 **não** exporta `ANativeActivity_onCreate` — a integração oficial no
  Android é a `SDLActivity` (Java, pacote `org.libsdl.app`) com ponte JNI
  implementada dentro da `libSDL3.so` (`src/core/android/SDL_android.c`).
- Portanto, a casca segue a **integração oficial da SDL3**, preservando apenas
  o Java estritamente necessário:

```
ScdaActivity (6 linhas, única classe própria)
  └─ SDLActivity (oficial SDL3 3.4.18, intocada)
       ├─ System.loadLibrary("SDL3")        → libSDL3.so
       ├─ System.loadLibrary("scda_port")   → libscda_port.so
       └─ dlopen + dlsym("SDL_main")        → int main() do main.cpp
```

- `main.cpp` usa `#include <SDL3/SDL_main.h>` (que exporta `SDL_main` e roda
  `int main(int argc, char* argv[])` no thread nativo da Activity).
- Toda a lógica da casca está em C/C++. Janela nativa Android: a SurfaceView
  da SDLActivity é adotada pela SDL3 via `ANativeWindow` (EGL/GLES pelo renderer).
- Nenhum DEX artificial, nenhum JAR inútil, nenhum emulador.

## Árvore de arquivos criados

```
DoubleRecomp/
├── settings.gradle.kts              # AGP via pluginManagement
├── build.gradle.kts                 # AGP 9.4.1
├── gradle.properties                # sem AndroidX (Java da SDL é android.* puro)
├── debug.keystore                   # assinatura de debug do projeto
├── dist/scda_port.apk               # APK final assinado (cópia de validação)
├── third_party/SDL/                 # fonte SDL 3.4.18 (compilada da origem)
└── app/
    ├── build.gradle.kts             # ABI arm64-v8a, CMake, assinatura debug
    └── src/main/
        ├── AndroidManifest.xml      # Activity = ScdaActivity
        ├── java/
        │   ├── org/libsdl/app/*.java          # 12 classes oficiais SDL3
        │   └── com/tgp482/scda/ScdaActivity.java  # carrega "scda_port"
        ├── res/values/{strings.xml,styles.xml} + mipmap-*/ic_launcher.png
        └── cpp/
            ├── CMakeLists.txt   # libscda_port.so + SDL3 compartilhada
            └── main.cpp         # casca completa (C/C++)
```

## O que a casca testa (6 botões)

| Botão | O que faz |
|---|---|
| TESTAR RENDERIZAÇÃO | Troca a cor de fundo (paleta) e verifica retorno de `SDL_RenderClear`/`SDL_RenderPresent` |
| TESTAR RECREATE | **Recreate real**: destrói e recria renderer + textura de teste na MESMA janela, com frame de verificação |
| TESTAR PAUSA/RETORNO | Instruções + contadores de `WILL/DID_ENTER_BACKGROUND` e `WILL/DID_ENTER_FOREGROUND` (reais, via `SDL_SetEventFilter`) |
| TESTAR TOQUE | Contadores de `SDL_EVENT_FINGER_DOWN/MOTION/UP` + últimas coordenadas |
| VER LOGS | Ring buffer das últimas linhas na tela + caminho do arquivo de log |
| SAIR | Encerramento limpo: destrói renderer → janela → `SDL_Quit()` → `return 0` |

### Estabilidade / recreate
- A **janela nunca é destruída** em pausa ou recreate (só renderer e recursos).
- `SDL_EVENT_RENDER_DEVICE_RESET`/`DEVICE_LOST` disparam recreate automático.
- Em background o loop para de renderizar (nenhuma chamada de render fora de
  foreground) e a SDL3 bloqueia o loop pausado (`SDL_HINT_ANDROID_BLOCK_ON_PAUSE`).
- Nenhuma chamada bloqueante no thread principal.
- Isso reduz riscos, mas **não garante ausência absoluta de crashes** — o
  objetivo é expor problemas antes do port.

### Logs
- Em tela (VER LOGS), no **logcat** (tag `SCDA`) e em **arquivo** no
  armazenamento interno privado do app (`SDL_GetPrefPath` →
  `/data/user/0/com.tgp482.scda_port/files/scda_log.txt`).
  Nada é escrito em armazenamento externo (pasta "proibida" em Android 10+).
- Leitura sem root (build debug):
  `adb shell run-as com.tgp482.scda_port cat files/scda_log.txt`

## Build (incremental)

Ambiente: SDK 35 + Build-Tools 36.0.0, NDK r26.1.10909125, Gradle 9.7.1,
AGP 9.4.1, CMake 3.28.3 + Ninja, JDK 25.

```bash
cd DoubleRecomp
gradle assembleDebug            # build incremental (CMake/Ninja em app/.cxx)
```

O primeiro build compila a SDL3 inteira; os seguintes recompilam só o que mudou
(não fazer `clean` a cada alteração — o cache do CMake fica em `app/.cxx/`).

## Validação executada (resultados reais)

```
$ unzip -l dist/scda_port.apk | grep lib/
  lib/arm64-v8a/libSDL3.so        (3.681.216 B)
  lib/arm64-v8a/libscda_port.so   (22.040 B)

$ apksigner verify --print-certs dist/scda_port.apk
  Verifies  (v2 scheme: true)
  Cert SHA-256: a6fe96cb911d16f727b1e8f302401b313b03eae18007e286b70769718cb80637
  = fingerprint do debug.keystore do projeto

$ llvm-nm -D libscda_port.so | grep SDL_main   →  T SDL_main  (exportado)
$ llvm-readelf -d libscda_port.so              →  NEEDED libSDL3.so, SONAME ok
$ aapt2 dump badging                           →  launchable-activity
                                                  com.tgp482.scda.ScdaActivity
                                                  native-code: arm64-v8a
```

## Teste em dispositivo

`adb devices` no momento da entrega: **nenhum dispositivo conectado** — os
testes de abertura/botões/recreate/ciclo de vida em hardware ficam pendentes.
Quando houver dispositivo:

```bash
adb install -r dist/scda_port.apk
adb logcat -s SCDA SDL
```
