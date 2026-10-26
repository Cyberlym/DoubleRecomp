# SCDA Port — Port nativo Android
<img width="1600" height="720" alt="1000014271" src="https://github.com/user-attachments/assets/242a8e0b-4582-4ef4-9b64-4dd008bc5a92" />

Port nativo de Splinter Cell: Double Agent (Xbox) para Android ARM64, via recompilação
estática do XBE ([SCDA-XBERecomp](https://github.com/TGP482/SCDA-XBERecomp)).
Sem emuladores, sem Wine, sem Box64, sem Turnip: o código do jogo roda AOT como
biblioteca nativa, com renderização Vulkan direta.
# incomplete port
## Arquitetura

```
LauncherActivity (Java) ── instalar ISO (SAF) ──> InstallService (foreground)
       │                                              └─ valida XDVDFS, TitleID, SHA-256
       └─ JOGAR ──> ScdaActivity (estende SDLActivity oficial)
                        ├─ System.loadLibrary("SDL3")      → libSDL3.so (compartilhada)
                        ├─ System.loadLibrary("scda_port")  → libscda_port.so
                        └─ dlsym("SDL_main") → main.cpp (host C++)
                                                     ├─ runtime: kernel HLE, D3D8→Vulkan, áudio SDL
                                                     ├─ jogo: 4140 funções recompiladas (sub_*)
                                                     └─ HLSL→SPIR-V em runtime (shaderc estático)
```

- **Uma .so carrega tudo**: runtime + jogo recompilado + shaderc estático (escondido,
  `--exclude-libs,ALL`). SDL3 vai compartilhada (`libSDL3.so`) empacotada no APK.
- **Renderização nativa**: backend Vulkan (`libvulkan.so` no NEEDED), shaders HLSL do jogo
  compilados para SPIR-V pelo shaderc v2025.5 (estático dentro da .so), com cache de pipelines em disco.
- **ISO fora do APK**: o jogo é instalado pelo launcher na pasta do app
  (`game/<Título>/<Título>.iso`), copiado via SAF com validação de volume XDVDFS,
  TitleID `0x5553005E` e SHA-1 do `default.xbe` (`91290baf…`, conferido nos dois lados:
  Java grava no `install.json`, o C++ confere o XBE dentro da ISO contra o
  `kImageSha1` gerado pelo CMake a partir do `default.xbe` no configure).

## Build

Ambiente: SDK 35 + Build-Tools 36.0.0, NDK r26.1.10909125, Gradle 9.7.1, AGP 9.4.1,
CMake 3.28.3 + Ninja, JDK 25.

```bash
gradle assembleDebug        # APK: app/build/outputs/apk/debug/scda_port-debug.apk
```

- O `assembleDebug` compila o nativo em **Release** (`-DCMAKE_BUILD_TYPE=Release`):
  o .so do jogo sai com `-O2`, sem symtab de debug (AGP aplica `llvm-strip`).
- Dependência: o **shaderc v2025.5 das fontes locais** (`build-android/_deps/*-src`,
  declaradas por `SOURCE_DIR` no FetchContent — nada é baixado). Se a pasta sumir, o
  configure explica e aborta. (O pré-compilado do NDK, v2022.3, fica de fora de propósito.)
- Incremental: não fazer `clean` — o cache CMake/Ninja vive em `app/.cxx/Release`.
  O código gerado (`generated/game/x86_recomp.*.cpp`, 128 unidades) compila devagar;
  só recompila o que mudou.

## Escopo do build (por acordo)

Dentro: campanha completa (`default.xbe`), opções in-game (F10/menu do jogo),
saves, cache de shaders, gamepad/touch via SDL3.
Fora: versus/co-op (`sc4_adv.xbe` é outra imagem, precisaria de outra lib),
online/XNet (HLE responde "sem rede"), voz (Opus), communicator.

## Validação do APK (auditoria real, build 0.2.3)

```
$ unzip -l dist/scda_port.apk
  lib/arm64-v8a/libSDL3.so        2.367.328 B
  lib/arm64-v8a/libscda_port.so   37.414 MB    ← jogo recompilado + shaderc v2025.5 estático dentro
  classes*.dex, res/, resources.arsc — nada além disso (sem iso/xbe/fontes/objetos)

$ llvm-readelf -d libscda_port.so → NEEDED: libSDL3.so, liblog, libandroid,
                                    libvulkan.so, libm, libdl, libc
$ llvm-nm -D … | grep SDL_main     → T SDL_main (exportado p/ SDLActivity)
$ llvm-nm …  | grep -c sub_*       → 4140 funções recompiladas presentes
$ llvm-nm -D … | grep -c shaderc_  → 0 (estático, escondido por --exclude-libs)
$ apksigner verify                 → v2 ok, cert do debug.keystore do projeto
$ aapt2 dump badging               → launchable LauncherActivity, native-code: arm64-v8a
sha256 do APK (0.2.3): ed01ca8cebe79cf782e3cd285b5bb895f4e44f9c16255c6111028ea3cfc5ca13
```

### Os bugs do pipeline de shaders (o crash `vulkan_failed` no aparelho)

O jogo bootava até `game_entry`, criava o dispositivo Vulkan (Adreno) e morria no
`shader 1f27b3ab8b39ed71 reflection failed` — o vertex shader do blit. Reproduzindo
a compilação no host com o próprio glslc v2025.5, a causa real:

1. **Argumentos trocados em `shaderc_compile_into_spv`**: a assinatura é
   `(…, kind, input_file_name, entry_point_name, options)` e a chamada passava
   `(…, kind, "main", "scda", options)` — pedia o entry point **"scda"**, que não
   existe. O glslang não erroa: emite um *warning* ("Entry point not found") e um
   **stub de 728 bytes** sem nenhuma variável — que a reflexão (corretamente)
   rejeitava. Como o stub era gravado no cache de shaders **antes** da reflexão,
   todo boot relesse o mesmo lixo. Corrigido na 0.2.3 + cache re-versionado (v5).
2. **Storage class errada**: o parser usava `UniformConstant = 1`, mas na spec é
   **0** (1 é `Input`) — todas as texturas e samplers eram puladas. Corrigido junto.
3. (Determinação auxiliar) debug info ligado no shaderc, e o nome do cbuffer é
   resolvido pelo tipo do bloco quando a variável é anônima — os dois necessários
   pra reflexão ligar os recursos por nome (`img`, `lut`, `ls`, `ps`, `B`).

## Teste em dispositivo

```bash
adb install -r dist/scda_port.apk
adb logcat -s scda SDL          # estágios do boot: runtime_init → iso_open →
                                # xbe_loaded → game_entry → vulkan_ready → first_frame
```

A primeira linha do log identifica o build (`shell: SCDA Port 0.2.3 host starting`).
O launcher diagnostica sozinho: se o jogo não chegar ao primeiro frame, o diálogo da
próxima abertura mostra o último estágio do boot (`logs/boot_stage.txt`) e o botão
compartilha o log (`logs/scda_NNN.log`).

**credits for RanggaCasper and TGP482**
