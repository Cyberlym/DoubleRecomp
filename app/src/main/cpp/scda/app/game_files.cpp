// The game on the device: an imported disc image (.iso) or the extracted files, in the app's game folder.
// The xbe must be the one this build was recompiled from; another release's would run its own data under this code.
#include <algorithm>
#include <cctype>
#include <fstream>

#include <SDL3/SDL.h>

#include "app/app.h"
#include "core/log.h"
#include "image_symbols.h"
#include "kernel/crypto.h"
#include "kernel/disc.h"
#include "../platform/platform.h"

extern const char kImageSha1[];  // the xbe recompiled into this build, written by the build

namespace app {

namespace {

namespace fs = std::filesystem;

fs::path GameDir() { return ExeDir() / "game"; }

bool ReadHostFile(const fs::path& path, std::vector<uint8_t>& out) {
    std::ifstream f(path, std::ios::binary);
    if (!f) return false;
    out.assign(std::istreambuf_iterator<char>(f), {});
    return true;
}

}  // namespace

std::string Sha1(const std::vector<uint8_t>& data) {
    alignas(8) uint8_t ctx[128];
    uint8_t digest[20];
    crypto::ShaInit(ctx);
    crypto::ShaUpdate(ctx, data.data(), data.size());
    crypto::ShaFinal(ctx, digest);
    std::string hex;
    for (uint8_t b : digest) {
        hex += "0123456789abcdef"[b >> 4];
        hex += "0123456789abcdef"[b & 15];
    }
    return hex;
}

bool FindGame(GameFiles& game) {
    fs::path dir = GameDir();
    std::error_code ec;
    if (!fs::is_directory(dir, ec)) {
        LOGE("game: no game folder at %s, import a disc image first", dir.string().c_str());
        return false;
    }

    std::vector<fs::path> isos;
    for (auto& e : fs::directory_iterator(dir, ec)) {
        std::string ext = e.path().extension().string();
        std::transform(ext.begin(), ext.end(), ext.begin(), [](char c) { return char(std::tolower(uint8_t(c))); });
        if (ext == ".iso" && e.is_regular_file(ec)) isos.push_back(e.path());
    }
    std::sort(isos.begin(), isos.end());

    // the first copy with this xbe wins; the extracted files before any image
    GameFiles other;
    std::unique_ptr<kernel::Disc> other_disc;
    fs::path other_name;
    auto consider = [&](const fs::path& name, std::vector<uint8_t> xbe, std::unique_ptr<kernel::Disc> disc) {
        std::string sha = Sha1(xbe);
        bool match = sha == kImageSha1;
        LOGR("Game: %s in %s, sha1 %s%s", IMAGE_XBE, name.string().c_str(), sha.c_str(), match ? "" : ", another release");
        if (match) {
            game = {dir, std::move(xbe)};
            kernel::MountDisc(std::move(disc));
            return true;
        }
        if (other_name.empty()) {
            other = {dir, std::move(xbe)};
            other_disc = std::move(disc);
            other_name = name;
        }
        return false;
    };

    std::vector<uint8_t> xbe;
    if (ReadHostFile(dir / IMAGE_XBE, xbe) && consider(dir / IMAGE_XBE, std::move(xbe), nullptr)) return true;
    for (const fs::path& iso : isos) {
        auto disc = std::make_unique<kernel::Disc>();
        std::string error;
        if (!disc->Open(iso, error)) {
            LOGW("game: %s: %s", iso.string().c_str(), error.c_str());
            continue;
        }
        if (!disc->Load(IMAGE_XBE, xbe)) {
            LOGW("game: %s has no %s", iso.string().c_str(), IMAGE_XBE);
            continue;
        }
        if (consider(iso, std::move(xbe), std::move(disc))) return true;
    }

    if (other_name.empty()) {
        LOGE("game: put the disc image (.iso) or the extracted files (%s with the Default, Media and adv folders) in %s",
             IMAGE_XBE, dir.string().c_str());
        return false;
    }
    // only one release is known in NA/EU, so a mismatch is almost always a harmless dump difference
    LOGW("Game: %s in %s is not the release this build was made from (expected sha1 %s), starting it anyway", IMAGE_XBE,
         other_name.string().c_str(), kImageSha1);
    game = std::move(other);
    kernel::MountDisc(std::move(other_disc));
    return true;
}

}  // namespace app
