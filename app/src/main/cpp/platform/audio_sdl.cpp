// The mixer output through SDL3 audio: pulls interleaved float frames from render on the SDL device thread.
// The console's 5.1 mix folds to whatever the device opens with; the mode setting shapes the fold.
#include <SDL3/SDL.h>

#include <atomic>
#include <cstring>
#include <functional>
#include <mutex>
#include <vector>

#include "audio/output.h"
#include "core/log.h"

namespace audio {

namespace {

constexpr float kCentreFold = 0.707f;  // the console's stereo fold in the DOLBY image
constexpr float kBackFold = 0.707f;

std::atomic<bool> g_surround{false};
std::atomic<bool> g_mono{false};
std::atomic<uint32_t> g_mode{kOutputAuto};
std::atomic<bool> g_paused{false};

SDL_AudioStream* g_stream = nullptr;
SDL_AudioDeviceID g_device = 0;
uint32_t g_channels = 2;
std::function<void(float*, uint32_t)> g_render;
std::mutex g_render_lock;  // render runs on the device thread; the mixer's state is its own

// the SDL channel order at 6 is the mixer's frame order: FL FR FC LFE BL BR
void Fold(const float* in, uint32_t frames, float* out) {
    for (uint32_t f = 0; f < frames; f++) {
        const float* s = in + size_t(f) * kChannels;
        float* d = out + size_t(f) * g_channels;
        float left = s[FrontLeft], right = s[FrontRight];
        if (g_mono) {
            float one = left + right;
            if (g_channels >= 2) {
                d[0] = one;
                d[1] = one;
            } else
                d[0] = one;
            for (uint32_t c = 2; c < g_channels; c++) d[c] = 0;
            continue;
        }
        switch (g_channels) {
            case 1:
                d[0] = left + right;
                break;
            case 2:
                d[0] = left + s[Centre] * kCentreFold + s[BackLeft] * kBackFold;
                d[1] = right + s[Centre] * kCentreFold + s[BackRight] * kBackFold;
                break;
            default:
                for (uint32_t c = 0; c < g_channels && c < kChannels; c++) d[c] = s[c];
                for (uint32_t c = kChannels; c < g_channels; c++) d[c] = 0;
                break;
        }
    }
}

void SDLCALL Pull(void* userdata, SDL_AudioStream* stream, int additional, int total) {
    (void)userdata;
    (void)total;
    if (g_paused || additional <= 0) return;
    uint32_t frames = uint32_t(additional) / (g_channels * sizeof(float));
    if (!frames) return;
    static std::vector<float> mix, out;
    mix.resize(size_t(frames) * kChannels);
    {
        std::lock_guard lock(g_render_lock);
        g_render(mix.data(), frames);
    }
    out.resize(size_t(frames) * g_channels);
    Fold(mix.data(), frames, out.data());
    SDL_PutAudioStreamData(stream, out.data(), int(size_t(frames) * g_channels * sizeof(float)));
}

void OpenStream() {
    if (g_stream) {
        SDL_DestroyAudioStream(g_stream);
        g_stream = nullptr;
    }
    SDL_AudioSpec spec{};
    spec.format = SDL_AUDIO_F32;
    spec.freq = int(kRate);
    spec.channels = uint8_t(g_channels);
    g_stream = SDL_OpenAudioDeviceStream(g_device, &spec, Pull, nullptr);
    if (!g_stream) {
        LOGE("audio: stream failed: %s", SDL_GetError());
        return;
    }
    SDL_ResumeAudioStreamDevice(g_stream);
}

}  // namespace

void StartOutput(std::function<void(float*, uint32_t)> render) {
    g_render = std::move(render);
    SDL_AudioSpec want{};
    want.freq = int(kRate);
    want.format = SDL_AUDIO_F32;
    want.channels = 2;
    g_device = SDL_OpenAudioDevice(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &want);
    if (!g_device) {
        LOGE("audio: no output device: %s", SDL_GetError());
        return;
    }
    SDL_AudioSpec got{};
    SDL_GetAudioDeviceFormat(g_device, &got, nullptr);
    uint32_t mode = g_mode;
    g_channels = mode == kOutputMono ? 1 : mode == kOutputSurround ? (got.channels >= 6 ? 6u : uint32_t(got.channels))
                                                                   : uint32_t(std::min(got.channels, 2));
    g_surround = g_channels >= 6;
    g_mono = mode == kOutputMono;
    LOGI("audio: device %u, %d Hz, %d channels%s", g_device, got.freq, got.channels, g_surround ? ", surround" : "");
    OpenStream();
}

bool IsSurround() { return g_surround; }
bool IsMono() { return g_mono; }

void SetOutputMode(uint32_t mode) {
    if (mode == g_mode.exchange(mode)) return;
    g_mono = mode == kOutputMono;
    if (!g_device) return;
    SDL_AudioSpec got{};
    SDL_GetAudioDeviceFormat(g_device, &got, nullptr);
    uint32_t channels = mode == kOutputMono             ? 1
                        : mode == kOutputSurround       ? (got.channels >= 6 ? 6u : uint32_t(got.channels))
                        : std::min(uint32_t(got.channels), 2u);
    if (channels != g_channels) {
        g_channels = channels;
        g_surround = g_channels >= 6;
        OpenStream();
    }
}

void SetPaused(bool paused) { g_paused = paused; }

}  // namespace audio
