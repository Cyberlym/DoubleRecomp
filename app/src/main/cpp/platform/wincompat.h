#pragma once
// The few Win32 names the recompiled runtime and game code touch, on POSIX.
// Windows builds keep the real headers; Android and Linux get the implementations here.
#ifdef _WIN32

#include <windows.h>
#include <xinput.h>

#else

#include <algorithm>
#include <atomic>
#include <cerrno>
#include <chrono>
#include <cstdarg>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <thread>

#include <fcntl.h>
#include <dlfcn.h>
#include <pthread.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

typedef long HRESULT;
typedef void* HANDLE;
typedef void* HMODULE;
typedef void* HWND;
typedef void* HCURSOR;
typedef void* HINSTANCE;
typedef const wchar_t* PCWSTR;
typedef unsigned int UINT;
typedef unsigned long DWORD;
typedef unsigned short WORD;
typedef unsigned char BYTE;
typedef int BOOL;
typedef long LONG;
typedef unsigned long ULONG;
typedef uint64_t ULONGLONG;
typedef intptr_t INT_PTR;
typedef uintptr_t UINT_PTR;
typedef intptr_t LONG_PTR;
typedef UINT_PTR WPARAM;
typedef LONG_PTR LPARAM;
typedef size_t SIZE_T;
typedef void* LPVOID;
typedef const void* LPCVOID;
typedef char* LPSTR;
typedef const char* LPCSTR;
typedef wchar_t* LPWSTR;
typedef const wchar_t* LPCWSTR;

#define WINAPI
#define TRUE 1
#define FALSE 0
#define MAX_PATH 1024
#define INVALID_HANDLE_VALUE ((HANDLE)(intptr_t)-1)
#define S_OK ((HRESULT)0)
#define E_FAIL ((HRESULT)0x80004005L)
#define GENERIC_READ 0x80000000L
#define GENERIC_WRITE 0x40000000L
#define FILE_SHARE_READ 1
#define FILE_SHARE_WRITE 2
#define OPEN_EXISTING 3
#define OPEN_ALWAYS 4
#define CREATE_ALWAYS 2
#define FILE_BEGIN 0
#define FILE_CURRENT 1
#define FILE_END 2
#define FILE_ATTRIBUTE_NORMAL 0x80
#define PAGE_READWRITE 4
#define PAGE_NOACCESS 1
#define MEM_RESERVE 0x2000
#define MEM_COMMIT 0x1000
#define MEM_DECOMMIT 0x4000
#define MEM_RELEASE 0x8000
#define STILL_ACTIVE 259

#define ERROR_IO_PENDING 997L
#define ERROR_ALREADY_EXISTS 183L

// GetLastError: the code paths here only branch on it for overlapped IO, which the POSIX layer does not use
inline DWORD GetLastError() { return 0; }

inline void Sleep(DWORD ms) { std::this_thread::sleep_for(std::chrono::milliseconds(ms)); }

inline ULONGLONG GetTickCount64() {
    auto since = std::chrono::steady_clock::now().time_since_epoch();
    return ULONGLONG(std::chrono::duration_cast<std::chrono::milliseconds>(since).count());
}

// kernel::Spawn owns thread creation on Android; the sources call ::CreateThread only under _WIN32.

typedef long long LONGLONG;
typedef unsigned long long ULONGLONG2;
struct LARGE_INTEGER {
    LONGLONG QuadPart;
};
struct OVERLAPPED {
    DWORD Offset;
    DWORD OffsetHigh;
    OVERLAPPED() : Offset(0), OffsetHigh(0) {}
};

// named events the runtime code waits on: a semaphore standing in for an auto-reset event
struct WinEvent {
    pthread_mutex_t mu = PTHREAD_MUTEX_INITIALIZER;
    pthread_cond_t cv = PTHREAD_COND_INITIALIZER;
    bool set = false;
};
inline HANDLE CreateEventW(void*, BOOL, BOOL initial, const wchar_t*) {
    auto* e = new WinEvent;
    e->set = initial != FALSE;
    return e;
}
inline HANDLE CreateEventA(void*, BOOL, BOOL initial, const char*) { return CreateEventW(nullptr, FALSE, initial, nullptr); }
inline BOOL SetEvent(HANDLE h) {
    auto* e = static_cast<WinEvent*>(h);
    pthread_mutex_lock(&e->mu);
    e->set = true;
    pthread_cond_broadcast(&e->cv);
    pthread_mutex_unlock(&e->mu);
    return TRUE;
}
inline BOOL ResetEvent(HANDLE h) {
    auto* e = static_cast<WinEvent*>(h);
    pthread_mutex_lock(&e->mu);
    e->set = false;
    pthread_mutex_unlock(&e->mu);
    return TRUE;
}
inline DWORD WaitForSingleObject(HANDLE h, DWORD ms) {
    auto* e = static_cast<WinEvent*>(h);
    struct timespec ts;
    clock_gettime(CLOCK_REALTIME, &ts);
    ts.tv_sec += ms / 1000;
    ts.tv_nsec += (ms % 1000) * 1000000L;
    if (ts.tv_nsec >= 1000000000L) {
        ts.tv_sec++;
        ts.tv_nsec -= 1000000000L;
    }
    pthread_mutex_lock(&e->mu);
    while (!e->set) {
        int rc = ms == 0xFFFFFFFF ? pthread_cond_wait(&e->cv, &e->mu) : pthread_cond_timedwait(&e->cv, &e->mu, &ts);
        if (rc != 0) {
            pthread_mutex_unlock(&e->mu);
            return 0x102;  // WAIT_TIMEOUT
        }
    }
    pthread_mutex_unlock(&e->mu);
    return 0;  // WAIT_OBJECT_0
}
inline BOOL CloseHandle(HANDLE h) {
    if (h && h != INVALID_HANDLE_VALUE) delete static_cast<WinEvent*>(h);
    return TRUE;
}

// file IO through FILE*, wchar paths handled by the callers (they pass UTF-8 narrow paths on POSIX)
inline std::string NarrowPath(const wchar_t* path) {
    std::string narrow;
    for (const wchar_t* p = path; *p; p++) narrow += char(*p);
    return narrow;
}
inline FILE* OpenMode(const char* path, DWORD access, DWORD creation) {
    bool write = (access & GENERIC_WRITE) != 0;
    if (!write) return std::fopen(path, "rb");
    // read/write from the start; the append write paths seek to the end themselves
    if (creation == OPEN_ALWAYS) {
        if (FILE* f = std::fopen(path, "r+b")) return f;
        return std::fopen(path, "w+b");
    }
    if (creation == CREATE_ALWAYS) return std::fopen(path, "w+b");
    if (FILE* f = std::fopen(path, "r+b")) return f;
    return std::fopen(path, "w+b");
}
inline HANDLE CreateFileW(const wchar_t* path, DWORD access, DWORD, void*, DWORD creation, DWORD, void*) {
    FILE* f = OpenMode(NarrowPath(path).c_str(), access, creation);
    return f ? (HANDLE)f : INVALID_HANDLE_VALUE;
}
inline HANDLE CreateFileA(const char* path, DWORD access, DWORD, void*, DWORD creation, DWORD, void*) {
    FILE* f = OpenMode(path, access, creation);
    return f ? (HANDLE)f : INVALID_HANDLE_VALUE;
}
inline BOOL ReadFile(HANDLE h, void* out, DWORD want, DWORD* got, void*) {
    size_t n = std::fread(out, 1, want, static_cast<FILE*>(h));
    if (got) *got = DWORD(n);
    return TRUE;
}
inline BOOL WriteFile(HANDLE h, const void* data, DWORD want, DWORD* done, void*) {
    size_t n = std::fwrite(data, 1, want, static_cast<FILE*>(h));
    if (done) *done = DWORD(n);
    return TRUE;
}
inline BOOL SetFilePointerEx(HANDLE h, LARGE_INTEGER at, LARGE_INTEGER* out, DWORD how) {
    if (std::fseek(static_cast<FILE*>(h), long(at.QuadPart), how == FILE_BEGIN ? SEEK_SET : how == FILE_CURRENT ? SEEK_CUR : SEEK_END))
        return FALSE;
    if (out) out->QuadPart = std::ftell(static_cast<FILE*>(h));
    return TRUE;
}
inline BOOL GetFileSizeEx(HANDLE h, LARGE_INTEGER* size) {
    long at = std::ftell(static_cast<FILE*>(h));
    std::fseek(static_cast<FILE*>(h), 0, SEEK_END);
    size->QuadPart = std::ftell(static_cast<FILE*>(h));
    std::fseek(static_cast<FILE*>(h), at, SEEK_SET);
    return TRUE;
}
inline BOOL SetEndOfFile(HANDLE h) { return std::fflush(static_cast<FILE*>(h)) == 0; }
inline BOOL CloseFileHandle(HANDLE h) {
    if (h && h != INVALID_HANDLE_VALUE) std::fclose(static_cast<FILE*>(h));
    return TRUE;
}

// input.cpp's async key state, fed by the SDL event pump (platform/input_sdl.cpp)
namespace winhost {
constexpr int kMaxVk = 256;
extern std::atomic<uint8_t> g_vk[kMaxVk];
}
inline short GetAsyncKeyState(int vk) { return vk >= 0 && vk < winhost::kMaxVk && winhost::g_vk[vk].load() ? -1 : 0; }

inline HMODULE GetModuleHandleW(const wchar_t*) { return (HMODULE)(intptr_t)1; }
inline HMODULE LoadLibraryW(const wchar_t* path) {
    std::string narrow;
    for (const wchar_t* p = path; *p; p++) narrow += char(*p);
    return dlopen(narrow.c_str(), RTLD_NOW | RTLD_LOCAL);
}
// a real library handle (from LoadLibraryW) looks up in that library; anything else searches the global scope
inline void* GetProcAddress(HMODULE m, const char* name) {
    if (m && m != (HMODULE)(intptr_t)1) return dlsym(m, name);
    return dlsym(RTLD_DEFAULT, name);
}

#define STACK_SIZE_PARAM_IS_A_RESERVATION 0x00010000
#define WAIT_OBJECT_0 0
#define WAIT_TIMEOUT 0x102

// cursor and window: no-ops on a device without a pointer
inline void ClipCursor(const void*) {}
inline void SetCursor(void*) {}
inline void ShowCursor(BOOL) {}
inline BOOL SetProcessDPIAware() { return TRUE; }
inline HCURSOR LoadCursorW(void*, const wchar_t*) { return nullptr; }
inline HWND GetForegroundWindow() { return (HWND)(intptr_t)1; }
inline HANDLE GetCurrentThread() { return (HANDLE)(intptr_t)2; }
inline BOOL PostMessageW(HWND, UINT, UINT_PTR, LONG_PTR) { return TRUE; }

// input.cpp compares the runtime's strings case-insensitively
inline int _stricmp(const char* a, const char* b) { return strcasecmp(a, b); }

#endif  // !_WIN32
