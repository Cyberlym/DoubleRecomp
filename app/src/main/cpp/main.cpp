// ============================================================================
// SCDA Port - Etapa 1: casca nativa de diagnostico
// ----------------------------------------------------------------------------
// Casca Android 100% nativa: Android NDK + CMake + SDL3 3.4.18 (compartilhada).
//
// Arquitetura (Etapa 1):
//   ScdaActivity (Java, 6 linhas) -> SDLActivity oficial da SDL3 ->
//     System.loadLibrary("SDL3") + System.loadLibrary("scda_port") ->
//     dlopen(libscda_port.so) + dlsym("SDL_main") -> este main().
//
//   Nao ha emulador de PC, Wine, Box64 nem driver Turnip. A janela nativa
//   Android (SurfaceView da SDLActivity) e consumida pela SDL3 via ANativeWindow.
//
// O que este executavel faz (apenas Etapa 1 - SEM jogo, SEM XBE, SEM DirectX):
//   - Diagnostico de renderizacao (troca de cor de fundo + verificacao).
//   - Recreate REAL de renderer/textura (destruir e recriar recursos GPU,
//     mantendo a mesma janela) + recuperacao automatica em DEVICE_RESET/LOST.
//   - Registro dos eventos de ciclo de vida (background/foreground).
//   - Deteccao de toques.
//   - Visualizador de logs em tela (ring buffer) + saida para o logcat.
//   - Encerramento limpo (destruir renderer/janela, SDL_Quit, return 0).
//
// NOTA: este teste reduz riscos, mas nao garante ausencia absoluta de crashes;
// o objetivo e expor problemas de recreate/ciclo de vida ANTES do port.
// ============================================================================

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

#include <cstdarg>
#include <cstdio>
#include <cstring>

#ifdef __ANDROID__
#include <android/log.h>
#define SCDA_LOG_TAG "SCDA"
#endif

// ----------------------------------------------------------------------------
// Constantes da UI
// ----------------------------------------------------------------------------
static const int   kMaxLogLines   = 14;   // linhas visiveis no painel de logs
static const int   kLogLineLen    = 200;  // largura maxima de cada linha de log
static const int   kTextureSize   = 128;  // textura de teste do recreate

// Paleta de cores do teste de renderizacao (r, g, b)
static const SDL_Color kPalette[] = {
    {  20,  24,  46, 255 },  // azul-escuro (padrao)
    {  36, 120,  60, 255 },  // verde
    { 160,  40,  40, 255 },  // vermelho
    { 200, 160,  30, 255 },  // ambar
    {  90,  40, 150, 255 },  // roxo
    { 235, 235, 240, 255 },  // branco
};
static const int kPaletteSize = (int)(sizeof(kPalette) / sizeof(kPalette[0]));

// ----------------------------------------------------------------------------
// Estado global do aplicativo (uma unica janela; single-threaded)
// ----------------------------------------------------------------------------
struct ScdaApp {
    SDL_Window   *window        = nullptr;
    SDL_Renderer *renderer      = nullptr;
    SDL_Texture  *test_texture  = nullptr;  // pertence ao renderer atual

    // Teste de renderizacao
    int      bg_index    = 0;      // indice atual na paleta
    Uint64   frames_ok   = 0;      // presents com sucesso
    int      render_fail = 0;      // falhas de RenderClear/Present
    float    last_present_ms = 0.0f;

    // Teste de recreate
    int      recreates       = 0;  // recreates manuais (botao) bem-sucedidos
    int      recreates_fail  = 0;  // recreates que falharam
    int      auto_resets     = 0;  // recuperacoes automaticas (DEVICE_RESET/LOST)
    float    last_recreate_ms = 0.0f;

    // Ciclo de vida
    int      ev_will_bg = 0, ev_did_bg = 0;
    int      ev_will_fg = 0, ev_did_fg = 0;
    int      ev_low_mem = 0, ev_terminating = 0;
    bool     in_background = false;

    // Toque / mouse
    int      finger_downs = 0, finger_moves = 0, finger_ups = 0;
    float    last_finger_x = -1.0f, last_finger_y = -1.0f;  // normalizado 0..1
    int      mouse_clicks = 0;
    float    last_click_x = -1.0f, last_click_y = -1.0f;
    int      last_click_button = 0;

    // UI
    char     status[256] = "Toque em um botao para comecar.";
    bool     show_logs   = false;
    bool     quit        = false;
    bool     need_device_recreate = false;  // sinalizado pelo event filter
    SDL_FRect buttons[6]  = {};            // retangulos do frame atual (hit test)

    // Ring buffer de logs (para VER LOGS em tela)
    char     logs[kMaxLogLines][kLogLineLen];
    int      log_count = 0;   // total de linhas ja escritas
    Uint64   start_ms = 0;

    SDL_FRect ui_rect = {};   // area util (safe area aproximada: 8px de margem)
};

static ScdaApp g_app;

// Arquivo de log no armazenamento interno privado do app (implementado abaixo).
static FILE *g_logfile = nullptr;
static char  g_logfile_path[512] = "(indisponivel)";

static void scda_log(SDL_LogPriority prio, const char *fmt, ...);

// ----------------------------------------------------------------------------
// Logging: tudo passa por aqui (SDL_Log* -> ring buffer + logcat)
// ----------------------------------------------------------------------------
static void scda_log_write(const char *line)
{
    // Empurra para o ring buffer (descarta a linha mais antiga).
    const int slots = kMaxLogLines;
    if (g_app.log_count >= slots) {
        for (int i = 1; i < slots; ++i) {
            SDL_strlcpy(g_app.logs[i - 1], g_app.logs[i], kLogLineLen);
        }
        SDL_strlcpy(g_app.logs[slots - 1], line, kLogLineLen);
    } else {
        SDL_strlcpy(g_app.logs[g_app.log_count], line, kLogLineLen);
        ++g_app.log_count;
    }
#ifdef __ANDROID__
    __android_log_print(ANDROID_LOG_INFO, SCDA_LOG_TAG, "%s", line);
#endif
}

static void scda_log_output(void *userdata, int category, SDL_LogPriority priority, const char *message)
{
    (void)userdata;
    (void)category;
    char prefix;
    switch (priority) {
        case SDL_LOG_PRIORITY_VERBOSE:  prefix = 'V'; break;
        case SDL_LOG_PRIORITY_DEBUG:    prefix = 'D'; break;
        case SDL_LOG_PRIORITY_WARN:     prefix = 'W'; break;
        case SDL_LOG_PRIORITY_ERROR:    prefix = 'E'; break;
        case SDL_LOG_PRIORITY_CRITICAL: prefix = 'C'; break;
        default:                        prefix = 'I'; break;
    }
    char line[kLogLineLen];
    const Uint64 up = g_app.start_ms ? (SDL_GetTicks() - g_app.start_ms) : 0;
    SDL_snprintf(line, sizeof(line), "[%c %6llu.%03llus] %s",
                 prefix, (unsigned long long)(up / 1000), (unsigned long long)(up % 1000),
                 message ? message : "");
    scda_log_write(line);

    // Persiste no arquivo de log (armazenamento interno privado do app),
    // se estiver aberto. Escrita best-effort: falha aqui nunca derruba o app.
    if (g_logfile) {
        fprintf(g_logfile, "%s\n", line);
        fflush(g_logfile);
    }
}

// ----------------------------------------------------------------------------
// Log em arquivo: gravado APENAS no armazenamento interno privado do app
// (SDL_GetPrefPath -> /data/user/0/<pkg>/files/ no Android), que e sempre
// gravavel pela propria app, sem permissao. Nada e escrito em armazenamento
// externo/compartilhado (pasta "proibida" em Android 10+ sem permissao).
// Para ler sem root (build debug): adb shell run-as com.tgp482.scda_port cat files/scda_log.txt
// ----------------------------------------------------------------------------
static void open_log_file(void)
{
    char *base = SDL_GetPrefPath("TGP482", "scda_port");
    if (!base) {
        scda_log(SDL_LOG_PRIORITY_WARN, "Armazenamento interno indisponivel p/ log: %s",
                 SDL_GetError());
        return;
    }
    SDL_snprintf(g_logfile_path, sizeof(g_logfile_path), "%sscda_log.txt", base);
    SDL_free(base);

    g_logfile = fopen(g_logfile_path, "w");  // novo arquivo por execucao
    if (!g_logfile) {
        scda_log(SDL_LOG_PRIORITY_WARN, "fopen(%s) falhou: %s (logs apenas em tela/logcat)",
                 g_logfile_path, SDL_GetError());
        SDL_snprintf(g_logfile_path, sizeof(g_logfile_path), "(sem arquivo)");
        return;
    }
    const int ver = SDL_GetVersion();
    fprintf(g_logfile, "=== SCDA Port Etapa 1 | SDL %d.%d.%d | ms %llu ===\n",
                SDL_VERSIONNUM_MAJOR(ver), SDL_VERSIONNUM_MINOR(ver),
                SDL_VERSIONNUM_MICRO(ver), (unsigned long long)SDL_GetTicks());
    fflush(g_logfile);
    scda_log(SDL_LOG_PRIORITY_INFO, "Log em arquivo: %s", g_logfile_path);
}

static void close_log_file(void)
{
    if (g_logfile) {
        fprintf(g_logfile, "=== sessao encerrada (frames OK %llu) ===\n",
                    (unsigned long long)g_app.frames_ok);
        fclose(g_logfile);
        g_logfile = nullptr;
    }
}

static void scda_log(SDL_LogPriority prio, const char *fmt, ...)
{
    char msg[512];
    va_list args;
    va_start(args, fmt);
    SDL_vsnprintf(msg, sizeof(msg), fmt, args);
    va_end(args);
    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, prio, "%s", msg);
}

// ----------------------------------------------------------------------------
// Criacao/destruicao do renderer e dos recursos graficos.
//
// Regras de estabilidade (Etapa 1):
//   - A JANELA NUNCA e destruida em pausa nem no recreate (so o renderer e os
//     recursos graficos que dependem dele).
//   - SDL_DestroyRenderer destrui a textura de teste junto; o ponteiro e
//     invalidado para evitar uso-after-free.
// ----------------------------------------------------------------------------
static void destroy_renderer_resources(ScdaApp *app)
{
    if (app->test_texture) {
        app->test_texture = nullptr;  // destruida junto com o renderer
    }
    if (app->renderer) {
        SDL_DestroyRenderer(app->renderer);
        app->renderer = nullptr;
    }
}

static bool make_test_texture(ScdaApp *app)
{
    SDL_Texture *tex = SDL_CreateTexture(app->renderer,
                                         SDL_PIXELFORMAT_RGBA32,
                                         SDL_TEXTUREACCESS_STREAMING,
                                         kTextureSize, kTextureSize);
    if (!tex) {
        scda_log(SDL_LOG_PRIORITY_ERROR, "Recreate: SDL_CreateTexture falhou: %s", SDL_GetError());
        return false;
    }

    // Preenche com um xadrez para verificacao visual.
    static Uint32 pixels[kTextureSize * kTextureSize];
    for (int y = 0; y < kTextureSize; ++y) {
        for (int x = 0; x < kTextureSize; ++x) {
            const bool on = ((x / 16) + (y / 16)) % 2 == 0;
            pixels[y * kTextureSize + x] = on ? 0xFF30C0F0u  // RGBA32: R=0xF0 G=0xC0 B=0x30
                                              : 0xFF201010u;
        }
    }
    const SDL_Rect full = { 0, 0, kTextureSize, kTextureSize };
    if (!SDL_UpdateTexture(tex, &full, pixels, kTextureSize * sizeof(Uint32))) {
        scda_log(SDL_LOG_PRIORITY_ERROR, "Recreate: SDL_UpdateTexture falhou: %s", SDL_GetError());
        SDL_DestroyTexture(tex);
        return false;
    }

    app->test_texture = tex;
    return true;
}

static bool create_renderer_resources(ScdaApp *app)
{
    destroy_renderer_resources(app);

    app->renderer = SDL_CreateRenderer(app->window, NULL);
    if (!app->renderer) {
        scda_log(SDL_LOG_PRIORITY_ERROR, "SDL_CreateRenderer falhou: %s", SDL_GetError());
        return false;
    }

    // Vsync e desejavel, mas nao fatal (alguns devices podem recusar).
    if (!SDL_SetRenderVSync(app->renderer, 1)) {
        scda_log(SDL_LOG_PRIORITY_WARN, "SDL_SetRenderVSync(1) falhou: %s", SDL_GetError());
    }

    if (!make_test_texture(app)) {
        return false;
    }

    int w = 0, h = 0;
    SDL_GetRenderOutputSize(app->renderer, &w, &h);
    scda_log(SDL_LOG_PRIORITY_INFO, "Renderer '%s' ativo, output %dx%d",
             SDL_GetRendererName(app->renderer), w, h);
    return true;
}

// Teste REAL de recreate: destruir renderer+textura e recriar na mesma janela,
// provando com um frame de verificacao (clear+fill+present).
static void run_recreate_test(ScdaApp *app, bool automatic)
{
    const Uint64 t0 = SDL_GetPerformanceCounter();

    scda_log(SDL_LOG_PRIORITY_INFO, "Recreate %s: destruindo renderer/texturas...",
             automatic ? "AUTOMATICO" : "manual");
    if (!create_renderer_resources(app)) {
        ++app->recreates_fail;
        SDL_snprintf(app->status, sizeof(app->status),
                     "RECREATE FALHOU (sem renderer). Tente de novo ou veja LOGS.");
        return;
    }

    // Frame de verificacao: todas as chamadas precisam retornar true.
    int w = 0, h = 0;
    SDL_GetRenderOutputSize(app->renderer, &w, &h);
    const SDL_FRect probe = { w * 0.25f, h * 0.25f, w * 0.5f, h * 0.5f };
    bool ok = SDL_SetRenderDrawColor(app->renderer, 0, 0, 0, 255) &&
              SDL_RenderClear(app->renderer) &&
              SDL_SetRenderDrawColor(app->renderer, 255, 255, 255, 255) &&
              SDL_RenderFillRect(app->renderer, &probe) &&
              SDL_RenderPresent(app->renderer);

    const Uint64 t1 = SDL_GetPerformanceCounter();
    const float ms = (float)(t1 - t0) * 1000.0f / (float)SDL_GetPerformanceFrequency();
    app->last_recreate_ms = ms;

    if (ok) {
        ++app->recreates;
        SDL_snprintf(app->status, sizeof(app->status),
                     "RECREATE OK em %.1f ms (renderer: %s)", (double)ms,
                     SDL_GetRendererName(app->renderer));
        scda_log(SDL_LOG_PRIORITY_INFO, "Recreate OK em %.1f ms", (double)ms);
    } else {
        ++app->recreates_fail;
        SDL_snprintf(app->status, sizeof(app->status),
                     "RECREATE falhou no frame de verificacao. Veja LOGS.");
        scda_log(SDL_LOG_PRIORITY_ERROR, "Recreate: frame de verificacao falhou: %s", SDL_GetError());
    }
}

// ----------------------------------------------------------------------------
// Ciclo de vida: o filtro intercepta eventos do sistema ANTES da fila
// (padrao recomendado em docs/README-android.md da SDL3).
// IMPORTANTE: aqui so registramos/flagamos - nada de chamadas pesadas de render.
// ----------------------------------------------------------------------------
static bool SDLCALL scda_event_filter(void *userdata, SDL_Event *event)
{
    ScdaApp *app = (ScdaApp *)userdata;
    switch (event->type) {
        case SDL_EVENT_TERMINATING:
            ++app->ev_terminating;
            scda_log(SDL_LOG_PRIORITY_INFO, "Ciclo: TERMINATING - o SO vai destruir o app");
            app->quit = true;   // encerrar limpo o quanto antes
            return false;       // consome o evento

        case SDL_EVENT_LOW_MEMORY:
            ++app->ev_low_mem;
            scda_log(SDL_LOG_PRIORITY_WARN, "Ciclo: LOW_MEMORY do SO");
            return false;

        case SDL_EVENT_WILL_ENTER_BACKGROUND:
            ++app->ev_will_bg;
            app->in_background = true;
            scda_log(SDL_LOG_PRIORITY_INFO, "Ciclo: WILL_ENTER_BACKGROUND (pausando render)");
            return false;

        case SDL_EVENT_DID_ENTER_BACKGROUND:
            ++app->ev_did_bg;
            scda_log(SDL_LOG_PRIORITY_INFO, "Ciclo: DID_ENTER_BACKGROUND");
            return false;

        case SDL_EVENT_WILL_ENTER_FOREGROUND:
            ++app->ev_will_fg;
            scda_log(SDL_LOG_PRIORITY_INFO, "Ciclo: WILL_ENTER_FOREGROUND");
            return false;

        case SDL_EVENT_DID_ENTER_FOREGROUND:
            ++app->ev_did_fg;
            app->in_background = false;
            scda_log(SDL_LOG_PRIORITY_INFO, "Ciclo: DID_ENTER_FOREGROUND (retomando render)");
            return false;

        case SDL_EVENT_RENDER_DEVICE_LOST:
            scda_log(SDL_LOG_PRIORITY_ERROR, "GPU: RENDER_DEVICE_LOST - recreate completo");
            app->need_device_recreate = true;
            return true;

        case SDL_EVENT_RENDER_DEVICE_RESET:
            scda_log(SDL_LOG_PRIORITY_WARN, "GPU: RENDER_DEVICE_RESET - recreando recursos");
            app->need_device_recreate = true;
            return true;

        default:
            return true;  // eventos normais seguem para a fila
    }
}

// ----------------------------------------------------------------------------
// UI
// ----------------------------------------------------------------------------
struct UiButton {
    const char *label;
    int id;
};

enum {
    BTN_RENDER = 0,
    BTN_RECREATE,
    BTN_LIFECYCLE,
    BTN_TOUCH,
    BTN_LOGS,
    BTN_EXIT,
    BTN_COUNT
};

static const UiButton kButtons[BTN_COUNT] = {
    { "TESTAR RENDERIZACAO",  BTN_RENDER },
    { "TESTAR RECREATE",      BTN_RECREATE },
    { "TESTAR PAUSA/RETORNO", BTN_LIFECYCLE },
    { "TESTAR TOQUE",         BTN_TOUCH },
    { "VER LOGS",             BTN_LOGS },
    { "SAIR",                 BTN_EXIT },
};

static void draw_text(ScdaApp *app, float x, float y, const char *text)
{
    if (!SDL_RenderDebugText(app->renderer, x, y, text)) {
        // Falha de texto nao derruba o app; registra uma vez por frame via contador.
        ++g_app.render_fail;
    }
}

static void draw_ui(ScdaApp *app)
{
    int ow = 0, oh = 0;
    SDL_GetRenderOutputSize(app->renderer, &ow, &oh);
    const float w = (float)ow, h = (float)oh;
    const float margin = 12.0f;
    const float btn_w = w - 2.0f * margin;
    const float btn_h = (h - 300.0f) / (float)BTN_COUNT;
    const float text_scale = 1.0f;

    // Fundo: cor da paleta atual (prova de renderizacao visivel).
    const SDL_Color &bg = kPalette[app->bg_index];
    if (!SDL_SetRenderDrawColor(app->renderer, bg.r, bg.g, bg.b, bg.a) ||
        !SDL_RenderClear(app->renderer)) {
        ++app->render_fail;
        return;
    }

    // Painel de cabecalho.
    if (!SDL_SetRenderDrawColor(app->renderer, 10, 12, 20, 200) ||
        !SDL_RenderFillRect(app->renderer, NULL)) {
        ++app->render_fail;
    }
    const int ver = SDL_GetVersion();
    int ww = 0, wh = 0;
    SDL_GetWindowSize(app->window, &ww, &wh);
    const Uint64 up_s = app->start_ms ? (SDL_GetTicks() - app->start_ms) / 1000 : 0;
    SDL_SetRenderDrawColor(app->renderer, 235, 235, 240, 255);
    draw_text(app, margin, 8.0f,  "SCDA PORT - CASCA NATIVA (ETAPA 1)");
    SDL_SetRenderDrawColor(app->renderer, 160, 200, 255, 255);
    SDL_RenderDebugTextFormat(app->renderer, margin, 22.0f * text_scale,
                              "SDL %d.%d.%d | renderer: %s",
                              SDL_VERSIONNUM_MAJOR(ver), SDL_VERSIONNUM_MINOR(ver),
                              SDL_VERSIONNUM_MICRO(ver),
                              app->renderer ? SDL_GetRendererName(app->renderer) : "-");
    SDL_RenderDebugTextFormat(app->renderer, margin, 36.0f * text_scale,
                              "janela %dx%d | frames OK %llu | falhas %d | uptime %llus",
                              ww, wh, (unsigned long long)app->frames_ok,
                              app->render_fail, (unsigned long long)up_s);

    // Preview da textura de teste (xadrez): prova visual do pipeline de texturas.
    if (app->test_texture) {
        const SDL_FRect dst = { w - 96.0f, 8.0f, 72.0f, 72.0f };
        if (!SDL_RenderTexture(app->renderer, app->test_texture, NULL, &dst)) {
            ++app->render_fail;
        }
    }

    // Contadores de diagnostico.
    SDL_SetRenderDrawColor(app->renderer, 255, 220, 120, 255);
    SDL_RenderDebugTextFormat(app->renderer, margin, 54.0f,
        "recreates %d ok / %d falhas / %d auto | bg/fg %d/%d/%d/%d | lowmem %d",
        app->recreates, app->recreates_fail, app->auto_resets,
        app->ev_will_bg, app->ev_did_bg, app->ev_will_fg, app->ev_did_fg,
        app->ev_low_mem);
    SDL_RenderDebugTextFormat(app->renderer, margin, 68.0f,
        "toques: down %d / move %d / up %d | ultimo: %.2f, %.2f (norm)",
        app->finger_downs, app->finger_moves, app->finger_ups,
        (double)app->last_finger_x, (double)app->last_finger_y);

    // Mensagem de status da ultima acao.
    SDL_SetRenderDrawColor(app->renderer, 120, 255, 160, 255);
    draw_text(app, margin, 86.0f, app->status);

    // Botoes.
    const float top = 104.0f;
    for (int i = 0; i < BTN_COUNT; ++i) {
        SDL_FRect r = { margin, top + (float)i * (btn_h + 10.0f), btn_w, btn_h };
        if (btn_h < 34.0f) { r.h = 34.0f; }  // nunca deixa o botao pequeno demais
        app->buttons[i] = r;

        const bool is_exit = (i == BTN_EXIT);
        SDL_SetRenderDrawColor(app->renderer,
                               is_exit ? 140 : 28, is_exit ? 40 : 40, is_exit ? 36 : 70, 255);
        SDL_RenderFillRect(app->renderer, &r);
        SDL_SetRenderDrawColor(app->renderer, 220, 220, 230, 255);
        SDL_RenderRect(app->renderer, &r);

        // Label centralizado (fonte debug: ~8px por caractere).
        const float label_w = (float)SDL_strlen(kButtons[i].label) * 8.0f;
        SDL_SetRenderDrawColor(app->renderer, 255, 255, 255, 255);
        SDL_RenderDebugText(app->renderer, r.x + (r.w - label_w) * 0.5f,
                            r.y + r.h * 0.5f - 4.0f, kButtons[i].label);
    }

    // Painel de logs (overlay).
    if (app->show_logs) {
        SDL_FRect panel = { margin * 0.5f, h * 0.55f, w - margin, h * 0.40f };
        SDL_SetRenderDrawColor(app->renderer, 0, 0, 0, 235);
        SDL_RenderFillRect(app->renderer, &panel);
        SDL_SetRenderDrawColor(app->renderer, 90, 200, 120, 255);
        SDL_RenderRect(app->renderer, &panel);
        SDL_SetRenderDrawColor(app->renderer, 170, 255, 190, 255);
        const int first = app->log_count > kMaxLogLines ? app->log_count - kMaxLogLines : 0;
        const int shown = app->log_count - first;
        for (int i = 0; i < shown; ++i) {
            draw_text(app, panel.x + 6.0f, panel.y + 6.0f + (float)i * 11.0f,
                      app->logs[first + i]);
        }
        // Caminho do arquivo de log (armazenamento interno privado; sem pasta proibida).
        char path_line[kLogLineLen];
        SDL_snprintf(path_line, sizeof(path_line), "arquivo: %s", g_logfile_path);
        const float max_chars = (panel.w - 12.0f) / 8.0f;
        if ((float)SDL_strlen(path_line) > max_chars && max_chars > 4.0f) {
            // Mostra o final do caminho (mais util) quando nao couber.
            const int cut = (int)SDL_strlen(path_line) - (int)max_chars + 3;
            if (cut > 0 && cut < (int)sizeof(path_line)) {
                char tail[kLogLineLen];
                SDL_snprintf(tail, sizeof(tail), "...%s", path_line + cut);
                SDL_strlcpy(path_line, tail, sizeof(path_line));
            }
        }
        SDL_SetRenderDrawColor(app->renderer, 255, 200, 120, 255);
        draw_text(app, panel.x + 6.0f, panel.y + panel.h - 13.0f, path_line);
    }

    if (!SDL_RenderPresent(app->renderer)) {
        ++app->render_fail;
        scda_log(SDL_LOG_PRIORITY_ERROR, "SDL_RenderPresent falhou: %s", SDL_GetError());
    } else {
        ++app->frames_ok;
    }
}

// ----------------------------------------------------------------------------
// Tratamento de entrada
// ----------------------------------------------------------------------------
static void handle_button(ScdaApp *app, int id)
{
    switch (id) {
        case BTN_RENDER: {
            // Troca a cor de fundo: mudanca visivel imediata = renderizacao OK.
            app->bg_index = (app->bg_index + 1) % kPaletteSize;
            const SDL_Color &c = kPalette[app->bg_index];
            SDL_snprintf(app->status, sizeof(app->status),
                         "Renderizacao: fundo agora R=%d G=%d B=%d (frames OK: %llu)",
                         c.r, c.g, c.b, (unsigned long long)app->frames_ok);
            scda_log(SDL_LOG_PRIORITY_INFO, "Botao RENDERIZACAO: fundo %d,%d,%d (frames %llu)",
                     c.r, c.g, c.b, (unsigned long long)app->frames_ok);
            break;
        }
        case BTN_RECREATE:
            run_recreate_test(app, false);
            break;
        case BTN_LIFECYCLE:
            SDL_snprintf(app->status, sizeof(app->status),
                "Pausa/Retorno: pressione HOME e volte. Eventos: WILL_BG %d DID_BG %d WILL_FG %d DID_FG %d",
                app->ev_will_bg, app->ev_did_bg, app->ev_will_fg, app->ev_did_fg);
            scda_log(SDL_LOG_PRIORITY_INFO,
                "Botao PAUSA/RETORNO: aguardando eventos do SO (Home -> background)");
            break;
        case BTN_TOUCH:
            SDL_snprintf(app->status, sizeof(app->status),
                "Toque: arraste o dedo na tela. down=%d move=%d up=%d (coordenadas no topo)",
                app->finger_downs, app->finger_moves, app->finger_ups);
            break;
        case BTN_LOGS:
            app->show_logs = !app->show_logs;
            SDL_snprintf(app->status, sizeof(app->status),
                "Logs %s (tag '%s' no logcat). Linhas em tela: %d",
                app->show_logs ? "VISIVEIS" : "ocultos", SCDA_LOG_TAG, app->log_count);
            scda_log(SDL_LOG_PRIORITY_INFO, "Botao LOGS: overlay %s",
                     app->show_logs ? "aberto" : "fechado");
            break;
        case BTN_EXIT:
            scda_log(SDL_LOG_PRIORITY_INFO, "Botao SAIR: encerrando de forma limpa...");
            SDL_snprintf(app->status, sizeof(app->status), "Encerrando...");
            app->quit = true;
            break;
        default:
            break;
    }
}

static void handle_events(ScdaApp *app)
{
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_EVENT_QUIT:
                scda_log(SDL_LOG_PRIORITY_INFO, "SDL_EVENT_QUIT recebido");
                app->quit = true;
                break;

            case SDL_EVENT_KEY_DOWN:
                if (event.key.key == SDLK_AC_BACK) {
                    // Botao "voltar" do Android: encerramento limpo.
                    scda_log(SDL_LOG_PRIORITY_INFO, "BACK (AC_BACK): encerrando de forma limpa");
                    app->quit = true;
                }
                break;

            case SDL_EVENT_MOUSE_BUTTON_DOWN:
                ++app->mouse_clicks;
                app->last_click_x = event.button.x;
                app->last_click_y = event.button.y;
                app->last_click_button = (int)event.button.button;
                {
                    bool hit = false;
                    for (int i = 0; i < BTN_COUNT; ++i) {
                        const SDL_FRect &r = app->buttons[i];
                        if (r.w > 0.0f &&
                            event.button.x >= r.x && event.button.x < r.x + r.w &&
                            event.button.y >= r.y && event.button.y < r.y + r.h) {
                            handle_button(app, i);
                            hit = true;
                            break;
                        }
                    }
                    if (!hit) {
                        SDL_snprintf(app->status, sizeof(app->status),
                                     "Toque fora de botoes (%.0f, %.0f), botao %d",
                                     (double)event.button.x, (double)event.button.y,
                                     app->last_click_button);
                    }
                }
                break;

            case SDL_EVENT_FINGER_DOWN:
                ++app->finger_downs;
                app->last_finger_x = event.tfinger.x;
                app->last_finger_y = event.tfinger.y;
                scda_log(SDL_LOG_PRIORITY_DEBUG, "Toque DOWN: %.3f, %.3f (dedo %llu)",
                         (double)event.tfinger.x, (double)event.tfinger.y,
                         (unsigned long long)event.tfinger.fingerID);
                break;

            case SDL_EVENT_FINGER_MOTION:
                ++app->finger_moves;
                app->last_finger_x = event.tfinger.x;
                app->last_finger_y = event.tfinger.y;
                break;

            case SDL_EVENT_FINGER_UP:
                ++app->finger_ups;
                app->last_finger_x = event.tfinger.x;
                app->last_finger_y = event.tfinger.y;
                scda_log(SDL_LOG_PRIORITY_DEBUG, "Toque UP: %.3f, %.3f",
                         (double)event.tfinger.x, (double)event.tfinger.y);
                break;

            case SDL_EVENT_WINDOW_RESIZED:
                scda_log(SDL_LOG_PRIORITY_INFO, "Janela redimensionada: %dx%d",
                         event.window.data1, event.window.data2);
                break;

            case SDL_EVENT_WINDOW_PIXEL_SIZE_CHANGED:
                scda_log(SDL_LOG_PRIORITY_INFO, "Pixels da janela: %dx%d",
                         event.window.data1, event.window.data2);
                break;

            default:
                break;
        }
    }

    if (app->need_device_recreate) {
        // Recuperacao automatica apos reset/perda de contexto GPU.
        app->need_device_recreate = false;
        ++app->auto_resets;
        run_recreate_test(app, true);
    }
}

// ----------------------------------------------------------------------------
// main (renomeado para SDL_main por SDL3/SDL_main.h e chamado pela SDLActivity)
// ----------------------------------------------------------------------------
int main(int argc, char *argv[])
{
    ScdaApp *app = &g_app;
    (void)argc;
    (void)argv;

    SDL_SetAppMetadata("SCDA Port Shell", "0.1.0-stage1", "com.tgp482.scda_port");
    SDL_SetLogPriorities(SDL_LOG_PRIORITY_INFO);
    SDL_SetLogOutputFunction(scda_log_output, nullptr);
    app->start_ms = SDL_GetTicks();

    scda_log(SDL_LOG_PRIORITY_INFO, "=== SCDA Port Etapa 1: iniciando casca nativa ===");

    if (!SDL_Init(SDL_INIT_VIDEO)) {
        scda_log(SDL_LOG_PRIORITY_CRITICAL, "SDL_Init falhou: %s", SDL_GetError());
        return 1;
    }

    // Log persistido no armazenamento interno privado (seguro; sem pasta proibida).
    open_log_file();
    SDL_snprintf(app->status, sizeof(app->status), "Log salvo em: %s", g_logfile_path);

    // Janela nativa Android (a SurfaceView vem da SDLActivity; a SDL3 a adota).
    app->window = SDL_CreateWindow("SCDA Port - Etapa 1", 1280, 720, SDL_WINDOW_RESIZABLE);
    if (!app->window) {
        scda_log(SDL_LOG_PRIORITY_CRITICAL, "SDL_CreateWindow falhou: %s", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    if (!create_renderer_resources(app)) {
        scda_log(SDL_LOG_PRIORITY_CRITICAL, "Falha ao criar renderer inicial: %s", SDL_GetError());
        SDL_DestroyWindow(app->window);
        SDL_Quit();
        return 1;
    }

    SDL_SetEventFilter(scda_event_filter, app);

    // Loop principal: nunca bloqueia o thread principal com trabalho externo;
    // em background a SDL3 pausa o loop (SDL_HINT_ANDROID_BLOCK_ON_PAUSE, padrao).
    while (!app->quit) {
        handle_events(app);
        if (app->quit) {
            break;
        }
        if (!app->in_background && app->renderer) {
            draw_ui(app);
        } else {
            SDL_Delay(10);  // em background: apenas espera eventos do SO
        }
    }

    // Encerramento correto: destruir renderer (e texturas junto), janela e SDL.
    scda_log(SDL_LOG_PRIORITY_INFO,
             "Encerrando: frames OK %llu, recreates %d, falhas render %d",
             (unsigned long long)app->frames_ok, app->recreates, app->render_fail);
    scda_log(SDL_LOG_PRIORITY_INFO, "=== Casca encerrada corretamente ===");
    destroy_renderer_resources(app);
    if (app->window) {
        SDL_DestroyWindow(app->window);
        app->window = nullptr;
    }
    SDL_Quit();
    close_log_file();
    return 0;
}
