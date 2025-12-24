// DLL entry point & bootstrap
//----------------------------
// Avoids doing work under the loader lock: we spin a thread that waits for d3d11.dll,
// initializes MinHook, and installs our detours via hooks::install_present_hook().
// On detach, we uninstall all hooks and uninitialize MinHook cleanly.
//
// Exports a small PulseV bridge (C ABI) used by external tooling to check liveness and register clients.


#include <Windows.h>
#include "d3d11_hooks.h"
#include "minhook.h"

// === PulseV Bridge (exported C ABI) ===
#include <atomic>
#include "logging.h"

#pragma pack(push, 8)
struct PulseVBridge {
    unsigned int magic;      // 'PLSV'
    unsigned int version;    // 1
    std::atomic<unsigned int> clients;
    std::atomic<unsigned int> flags; // bit0 = any client connected
    void* reserved[8];       // future pointers/resources
};
#pragma pack(pop)

static PulseVBridge g_pulsev_bridge = {
    /*magic*/ 0x56534C50u,   // 'PLSV' little-endian
    /*version*/ 1u,
    /*clients*/ 0u,
    /*flags*/ 0u,
    /*reserved*/ {nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr}
};

extern "C" __declspec(dllexport) PulseVBridge* __cdecl PulseV_Bridge_Get()
{
#ifdef _DEBUG
    logx::info("[DevRV] PulseV_Bridge_Get called");
#endif
    return &g_pulsev_bridge;
}

extern "C" __declspec(dllexport) int __cdecl PulseV_Bridge_RegisterClient()
{
    unsigned int c = g_pulsev_bridge.clients.fetch_add(1) + 1;
    g_pulsev_bridge.flags.fetch_or(1u); // mark 'connected'
#ifdef _DEBUG
    logx::info("[DevRV] PulseV_Bridge_RegisterClient -> clients=%u", c);
#endif
    return 1;
}



#include <atomic>
#include <string_view>

static void WaitForModuleOrTimeout(std::wstring_view mod_name, DWORD timeout_ms)
{
    const DWORD start = GetTickCount64();
    for (;;)
    {
        if (GetModuleHandleW(mod_name.data()) != nullptr)
            break;
        if ((GetTickCount64() - start) >= timeout_ms)
            break;
        Sleep(50);
    }
}


 // Worker thread started from DllMain. Waits for d3d11.dll to be.
 // Loaded before installing any hooks. This avoids racing against.
 // The system loader and ensures that the exports we hook are present.
static DWORD WINAPI BootstrapThread(LPVOID /*unused*/) {
 // Poll until d3d11.dll has been loaded into the process. We avoid a.
 // Fixed sleep here so that we hook as early as possible without.
 // Guessing at load order timings.
        // Give ReShade (d3d12.dll) a brief head start so its proxy d3d11 loads first.
    WaitForModuleOrTimeout(L"d3d12.dll", 4000);
while (!GetModuleHandleW(L"d3d11.dll")) {
        Sleep(50);
    }
 // Initialise the MinHook library. If it has already been.
 // initialised this call will return MH_ERROR_ALREADY_INITIALIZED,
 // Which is safe to ignore.
    MH_Initialize();
 // Install our device creation and present hooks. All further.
 // hooking logic is encapsulated in hooks::install_present_hook().
    hooks::install_present_hook();
    return 0;
}

 // Standard DLL entry point. We avoid performing any hooking work.
 // Directly in DllMain. Instead, we spin up a worker thread to do.
 // The actual initialisation work. On detach we uninstall all.
 // Hooks and uninitialise MinHook.
BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID /*reserved*/) {
    if (reason == DLL_PROCESS_ATTACH) {
 // Disable thread attach/detach notifications to reduce overhead.
        DisableThreadLibraryCalls(hModule);
 // Launch our bootstrap thread. It will perform all hook.
 // Installation once d3d11.dll is present. We intentionally do.
 // Not wait on this thread here.
        HANDLE hThread = CreateThread(nullptr, 0, &BootstrapThread, nullptr, 0, nullptr);
        if (hThread) CloseHandle(hThread);
    } else if (reason == DLL_PROCESS_DETACH) {
 // Remove all hooks and reset state. This is important when the.
 // DLL is unloaded to avoid leaving patched code behind.
        hooks::uninstall_all();
 // Uninitialise MinHook. If no hooks remain this will free.
 // Resources allocated by the library.
        MH_Uninitialize();
    }
    return TRUE;
}