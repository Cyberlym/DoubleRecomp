// The launcher's installer: the player picks the disc image with Android's file
// dialog, this copies it into the game folder (streaming, never whole in RAM)
// and validates it by opening the Xbox DVD file system and reading the xbe out
// of it. Progress shows in the window title and the log; errors come up as a
// message box, in the player's language where SDL has one.
#include <SDL3/SDL.h>

#include <algorithm>
#include <cctype>
#include <cstdio>
#include <filesystem>
#include <string>
#include <vector>

#include "app/app.h"
#include "core/log.h"
#include "kernel/disc.h"
#include "platform/platform.h"

extern const char kImageSha1[];  // app_android.cpp, the xbe this build runs

namespace app {

namespace {

namespace fs = std::filesystem;

constexpr uint32_t kChunk = 4u << 20;  // 4 MB steps, the phone's RAM never sees the image

fs::path GameDir() { return ExeDir() / "game"; }

void Title(const char* text) {
    if (SDL_Window* w = static_cast<SDL_Window*>(platform::WindowHandle())) SDL_SetWindowTitle(w, text);
}

void Fail(const char* what, const std::string& detail) {
    LOGE("import: %s: %s", what, detail.c_str());
    Title("SCDA");
    const SDL_MessageBoxButtonData ok[] = {{SDL_MESSAGEBOX_BUTTON_RETURNKEY_DEFAULT, 0, "OK"}};
    SDL_MessageBoxData m{};
    m.flags = SDL_MESSAGEBOX_ERROR;
    m.title = "SCDA Port";
    m.message = detail.c_str();
    m.numbuttons = 1;
    m.buttons = ok;
    int choice = 0;
    SDL_ShowMessageBox(&m, &choice);
}

// the file dialog's answer, waited out on this thread's event pump
struct Pick {
    bool done = false;
    std::string path;
};

void SDLCALL Picked(void* userdata, const char* const* files, int filter) {
    (void)filter;
    Pick* p = static_cast<Pick*>(userdata);
    if (files && files[0]) p->path = files[0];
    p->done = true;
}

// a stream read over an open SAF descriptor comes here as a plain path: SDL's
// Android dialog hands a file:// or content:// path; fopen follows file://, and
// content:// only opens through SDL's IO. Read either through SDL_IOStream.
struct SdlIo {
    SDL_IOStream* io = nullptr;
    ~SdlIo() {
        if (io) SDL_CloseIO(io);
    }
    bool ReadAt(uint64_t at, void* out, uint32_t len) {
        if (!io || !SDL_SeekIO(io, int64_t(at), SDL_IO_SEEK_SET)) return false;
        return SDL_ReadIO(io, out, len) == len;
    }
};

}  // namespace

// false when there is no game and the player did not install one now; the
// caller stops with the reason already shown
bool ImportIsoInteractive() {
    fs::path dir = GameDir();
    std::error_code ec;
    fs::create_directories(dir, ec);

    // what is already there decides the question
    GameFiles have;
    if (FindGame(have)) return true;

    Pick pick;
    SDL_DialogFileFilter filters[] = {{"Xbox disc image (*.iso)", "iso"}};
    SDL_PropertiesID props = SDL_CreateProperties();
    SDL_SetPointerProperty(props, SDL_PROP_FILE_DIALOG_FILTERS_POINTER, filters);
    SDL_SetNumberProperty(props, SDL_PROP_FILE_DIALOG_NFILTERS_NUMBER, 1);
    SDL_SetStringProperty(props, SDL_PROP_FILE_DIALOG_TITLE_STRING, "Escolha a imagem do disco (.iso)");
    SDL_SetStringProperty(props, SDL_PROP_FILE_DIALOG_ACCEPT_STRING, "Importar");
    SDL_ShowFileDialogWithProperties(SDL_FILEDIALOG_OPENFILE, Picked, &pick, props);
    SDL_DestroyProperties(props);
    while (!pick.done) SDL_PumpEvents();  // the Android dialog runs its own loop; ours waits for the answer
    if (pick.path.empty()) {
        LOGI("import: the player picked no image");
        return false;
    }
    LOGI("import: picked %s", pick.path.c_str());

    // the image first through SDL's IO, which follows file:// and content:// alike
    SdlIo src;
    src.io = SDL_IOFromFile(pick.path.c_str(), "rb");
    if (!src.io) {
        Fail("open", std::string("nao abriu a imagem: ") + SDL_GetError());
        return false;
    }
    int64_t total = SDL_GetIOSize(src.io);
    if (total < 1 << 20) {  // a disc image is hundreds of MB; smaller is a wrong file
        Fail("open", "o arquivo e pequeno demais para ser uma imagem de disco");
        return false;
    }

    // the copy must land under the app's own storage: SDL's Android dialog may
    // hand a content:// name with no filesystem path, so stream through SDL IO
    // into the game folder whatever it picked
    fs::path dst = dir / "disc.iso";
    FILE* out = std::fopen(dst.string().c_str(), "wb");
    if (!out) {
        Fail("write", "nao abriu " + dst.string() + " para escrita");
        return false;
    }

    std::vector<uint8_t> buf(kChunk);
    uint64_t done = 0;
    int64_t last_report = 0;
    bool ok = true;
    while (done < uint64_t(total)) {
        uint32_t want = uint32_t(std::min<uint64_t>(kChunk, uint64_t(total) - done));
        if (!src.ReadAt(done, buf.data(), want)) {
            ok = false;
            Fail("copy", "a imagem terminou antes da hora (imagem truncada?)");
            break;
        }
        if (std::fwrite(buf.data(), 1, want, out) != want) {
            ok = false;
            Fail("copy", "sem espaco no armazenamento do aparelho?");
            break;
        }
        done += want;
        if (done - uint64_t(last_report) > (64u << 20)) {
            last_report = int64_t(done);
            char line[128];
            SDL_snprintf(line, sizeof(line), "Importando %llu / %lld MB", (unsigned long long)(done >> 20),
                         (long long)(total >> 20));
            Title(line);
            LOGI("import: %llu / %lld MB", (unsigned long long)(done >> 20), (long long)(total >> 20));
        }
    }
    std::fclose(out);
    if (!ok) {
        fs::remove(dst, ec);
        return false;
    }
    Title("SCDA");
    LOGI("import: copied %lld MB to %s", (long long)(total >> 20), dst.string().c_str());

    // validate: an Xbox DVD file system with this build's xbe inside
    kernel::Disc disc;
    std::string error;
    if (!disc.Open(dst, error)) {
        Fail("validate", "o arquivo nao e uma imagem de disco Xbox: " + error);
        fs::remove(dst, ec);
        return false;
    }
    std::vector<uint8_t> xbe;
    if (!disc.Load(IMAGE_XBE, xbe)) {
        Fail("validate", std::string("a imagem nao tem ") + IMAGE_XBE + " na raiz (imagem errada ou de outro jogo)");
        fs::remove(dst, ec);
        return false;
    }
    std::string sha = Sha1(xbe);
    if (sha != kImageSha1)
        LOGW("import: %s inside is another release (sha1 %s, expected %s), starting it anyway", IMAGE_XBE,
             sha.c_str(), kImageSha1);
    else
        LOGI("import: %s verified, sha1 %s", IMAGE_XBE, sha.c_str());
    Title("SCDA");
    return true;
}

}  // namespace app
