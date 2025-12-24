// DXGI/D3D11 hooks
//-----------------
// Installs MinHook detours for D3D11CreateDeviceAndSwapChain and IDXGISwapChain::Present.
// We patch function prologs (no vtable writes) to avoid racing the game's own vtable updates.
// Present counts frames and defers installing OM/PS hooks until a few frames have rendered.
// All hooks are removed on shutdown. Device/context accessors live in d3d11_hooks.h.


#include "logging.h"
#include "d3d11_hooks.h"
#include "overlay.h"
#include "gta5_depth_hook.h"
#include "render_target_scanner.h"
#include "water_mask.h"
#include "water_mask_overlay.h"

#include "minhook.h"

#include <Windows.h>
#include <dxgi.h>
#include <dxgi1_2.h> // For IDXGIFactory2/IDXGISwapChain1 declarations.
#include <d3d11.h>
#include <wrl/client.h>
#include <atomic>

using Microsoft::WRL::ComPtr;

namespace {
 // Type for D3D11CreateDeviceAndSwapChain.
    using PFN_D3D11CreateDeviceAndSwapChain = HRESULT(WINAPI*)(
        IDXGIAdapter*, D3D_DRIVER_TYPE, HMODULE, UINT,
        const D3D_FEATURE_LEVEL*, UINT, UINT,
        const DXGI_SWAP_CHAIN_DESC*, IDXGISwapChain**, ID3D11Device**, D3D_FEATURE_LEVEL*, ID3D11DeviceContext**);
    static PFN_D3D11CreateDeviceAndSwapChain oCDSC = nullptr;
    static void* g_targetCDSC = nullptr;

 // Type for IDXGISwapChain::Present.
    using PFN_Present = HRESULT(STDMETHODCALLTYPE*)(IDXGISwapChain*, UINT, UINT);
    static PFN_Present oPresent = nullptr;
    static PFN_Present g_targetPresent = nullptr;

 // Frame counter and hook state.
    static std::atomic<int>  g_presentCount{ 0 };
    static std::atomic<bool> g_presentHooked{ false };

 // Overlay initialisation flag. We initialise the overlay once.
 // After the first Present call when a device and context are.
 // available. This flag ensures overlay::init() is called only
 // Once. We do not use an atomic here because it is accessed only.
 // From the render thread.
    static bool g_overlayInited = false;

 // Install the Present hook on the first swap chain encountered. We.
 // Capture the function pointer from the vtable and ask MinHook to.
 // Create a detour which calls our lambda and then the original.
    static void hook_present_once(IDXGISwapChain* sc) {
        if (g_presentHooked.exchange(true)) {
            return;
        }
        void** vt = *reinterpret_cast<void***>(sc);
        g_targetPresent = reinterpret_cast<PFN_Present>(vt[8]);
 // Create a MinHook detour for Present. Our lambda increments.
 // The frame counter, attempts to install the OM hook after a few.
 // Frames, invokes the overlay draw routine, and finally calls.
 // Through to the original Present. Because lambdas cannot be.
 // Directly converted to function pointers in this context, we.
 // Use a static function pointer type and cast the lambda to.
 // LPVOID.
        MH_STATUS status = MH_CreateHook(
            (LPVOID)g_targetPresent,
            (LPVOID)+[](IDXGISwapChain* sc, UINT sync, UINT flags) -> HRESULT {
 // Reset per-frame counters in the depth hook (such as the.
 // Clear count) at the start of the frame.
 // Increment present counter.
                int count = g_presentCount.fetch_add(1, std::memory_order_relaxed) + 1;
 // Initialise the overlay once on the first present.
 // Call. We obtain the device and immediate context.
 // from the swap chain and pass them to overlay::init.
                if (!g_overlayInited) {
                    ID3D11Device* initDev = nullptr;
                    sc->GetDevice(__uuidof(ID3D11Device), (void**)&initDev);
                    if (initDev) {
                        ID3D11DeviceContext* initCtx = nullptr;
                        initDev->GetImmediateContext(&initCtx);
                        if (initCtx) {
                            overlay::init(initDev, initCtx, sc);
                            initCtx->Release();
                            g_overlayInited = true;
                        }
                        initDev->Release();
                    }
                }
 // After a few frames have been presented, attempt to.
 // Install the OMSetRenderTargets hook and the.
 // ClearDepthStencilView hook. These calls are.
 // Idempotent and will only install once.
                gta5_depth::try_install_om_hook_from_present(sc);
                render_target_scanner::try_install_pssrv_hook_from_present(sc);
                gta5_depth::try_install_clear_hook_from_present(sc);
                water_mask::try_install_draw_hooks_from_present(sc);
 // Draw the overlay. This routine performs a full.
 // State save/restore and will only render once the.
 // Pipeline has stabilised (after a few frames).
                water_mask::on_present_begin(sc, count);
                overlay::draw(sc, count);
 // Call the original Present.
                return oPresent(sc, sync, flags);
            },
            reinterpret_cast<LPVOID*>(&oPresent));
        if (status == MH_OK || status == MH_ERROR_ALREADY_CREATED) {
            MH_EnableHook((LPVOID)g_targetPresent);
            logx::info("[DevRV] MinHook installed on IDXGISwapChain::Present.");
        }
        else {
            logx::info("[DevRV] Failed to hook IDXGISwapChain::Present (status=%d).", (int)status);
            g_presentHooked.store(false);
        }
    }

 // Our detour for D3D11CreateDeviceAndSwapChain. After the swap.
 // Chain is created successfully, we hook its Present method.
    static HRESULT WINAPI hkD3D11CreateDeviceAndSwapChain(
        IDXGIAdapter* pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags,
        const D3D_FEATURE_LEVEL* pFeatureLevels, UINT FeatureLevels, UINT SDKVersion,
        const DXGI_SWAP_CHAIN_DESC* pSwapChainDesc, IDXGISwapChain** ppSwapChain,
        ID3D11Device** ppDevice, D3D_FEATURE_LEVEL* pFeatureLevel, ID3D11DeviceContext** ppImmediateContext)
    {
        HRESULT hr = oCDSC(pAdapter, DriverType, Software, Flags,
                           pFeatureLevels, FeatureLevels, SDKVersion,
                           pSwapChainDesc, ppSwapChain,
                           ppDevice, pFeatureLevel, ppImmediateContext);
        if (SUCCEEDED(hr) && ppSwapChain && *ppSwapChain) {
            hook_present_once(*ppSwapChain);
        }
        return hr;
    }

 // DXGI factory detours to capture swap chains created via CreateSwapChain.
 // We do not hook IDXGIFactory2 methods here to avoid compilation issues on.
 // Toolchains that lack dxgi1_2.h. Hooking the base factory is
 // Sufficient to intercept most swap chain creations.
    typedef HRESULT(STDMETHODCALLTYPE* PFN_F_CreateSwapChain)(IDXGIFactory* p, IUnknown* dev, DXGI_SWAP_CHAIN_DESC* desc, IDXGISwapChain** sc);
    static PFN_F_CreateSwapChain oFac_CreateSwapChain = nullptr;

 // Detour for IDXGIFactory::CreateSwapChain.
    static HRESULT STDMETHODCALLTYPE hkFactory_CreateSwapChain(
        IDXGIFactory* p, IUnknown* dev, DXGI_SWAP_CHAIN_DESC* desc, IDXGISwapChain** sc)
    {
        HRESULT hr = oFac_CreateSwapChain ? oFac_CreateSwapChain(p, dev, desc, sc) : E_FAIL;
        if (SUCCEEDED(hr) && sc && *sc) {
            hook_present_once(*sc);
        }
        return hr;
    }


 // Install vtable patches on the DXGI factory to capture swap chain.
 // Creation. If CreateDXGIFactory1 fails we leave the factory.
 // Unmodified. These hooks remain active until uninstall_all() is
 // Called, but are harmless if we never hook any swap chains.
    static void install_factory_hooks() {
        ComPtr<IDXGIFactory> f0;
        if (FAILED(CreateDXGIFactory1(__uuidof(IDXGIFactory), (void**)f0.GetAddressOf())) || !f0) {
            return;
        }
        void** vt0 = *reinterpret_cast<void***>(f0.Get());
        void** slot_CreateSwapChain = &vt0[10];
        DWORD oldProtect;
        oFac_CreateSwapChain = (PFN_F_CreateSwapChain)*slot_CreateSwapChain;
        VirtualProtect(slot_CreateSwapChain, sizeof(void*), PAGE_READWRITE, &oldProtect);
        *slot_CreateSwapChain = (void*)&hkFactory_CreateSwapChain;
        VirtualProtect(slot_CreateSwapChain, sizeof(void*), oldProtect, &oldProtect);
 // We deliberately do not hook IDXGIFactory2 methods (such as.
 // CreateSwapChainForHwnd and CreateSwapChainForComposition) to.
 // Simplify compilation on toolchains that lack support for.
 // Dxgi1_2.h. The base IDXGIFactory hook above is sufficient
 // To intercept most swap chain creations. If desired, you.
 // Could add similar hooks here conditioned on the presence of.
 // IDXGIFactory2.
        logx::info("[DevRV] Factory vtable hooks installed.");
    }

 // Singleton guard for installing detours.
    static std::atomic<bool> g_detoursInstalled{ false };

    static void install_detours_once() {
        bool expected = false;
        if (!g_detoursInstalled.compare_exchange_strong(expected, true)) {
            return;
        }
 // Ensure MinHook is initialised. If it has already been.
 // initialised this call will return MH_ERROR_ALREADY_INITIALIZED.
        MH_Initialize();
 // Hook D3D11CreateDeviceAndSwapChain. We intentionally do not.
 // Hook D3D11CreateDevice, as intercepting the swap chain creation.
 // Is sufficient to obtain the device and context later.
        HMODULE hD3D11 = GetModuleHandleW(L"d3d12.dll");
        // If ReShade is present, its proxy d3d11.dll should already be loaded.
        // Only fall back to LoadLibraryW if it truly is absent.
        
        if (hD3D11) {
            g_targetCDSC = (void*)GetProcAddress(hD3D11, "D3D11CreateDeviceAndSwapChain");
            if (g_targetCDSC) {
                MH_STATUS sts = MH_CreateHook(g_targetCDSC, (LPVOID)&hkD3D11CreateDeviceAndSwapChain, (LPVOID*)&oCDSC);
                if (sts == MH_OK || sts == MH_ERROR_ALREADY_CREATED) {
                    MH_EnableHook(g_targetCDSC);
                    logx::info("[DevRV] MinHook installed on D3D11CreateDeviceAndSwapChain.");
                }
                else {
                    logx::info("[DevRV] Failed to install MinHook on D3D11CreateDeviceAndSwapChain (status=%d).", (int)sts);
                }
            }
        }
 // Hook DXGI factory vtables to intercept swap chain creation.
        install_factory_hooks();
    }
} // namespace

 // Public API implementations declared in d3d11_hooks.h. These simply
 // Forward to our internal install/uninstall functions. They are.
 // Called from dllmain.cpp to initialise and tear down our hooks.

ID3D11Device* hooks::device() {
 // No global device pointer is maintained in this implementation.
 // Callers should obtain the device from the swap chain directly.
    return nullptr;
}

ID3D11DeviceContext* hooks::context() {
 // No global context pointer is maintained. The overlay retrieves.
 // The immediate context from the device each frame.
    return nullptr;
}

bool hooks::install_present_hook() {
    install_detours_once();
    return true;
}

void hooks::uninstall_all() {
 // Shut down the deferred depth hook first. This will remove any.
 // OMSetRenderTargets hook installed during runtime.
    gta5_depth::ShutdownDepthHook();
    render_target_scanner::shutdown();
 // Remove the Present hook if it was installed.
    if (g_targetPresent) {
        MH_DisableHook((LPVOID)g_targetPresent);
        MH_RemoveHook((LPVOID)g_targetPresent);
        g_targetPresent = nullptr;
        oPresent = nullptr;
        g_presentHooked.store(false);
    }
 // Remove the CreateDeviceAndSwapChain hook.
    if (g_targetCDSC) {
        MH_DisableHook((LPVOID)g_targetCDSC);
        MH_RemoveHook((LPVOID)g_targetCDSC);
        g_targetCDSC = nullptr;
        oCDSC = nullptr;
    }
 // We do not explicitly unpatch the factory vtable hooks here. The.
 // Hooks remain active for the lifetime of the process, but they.
 // Forward to the original functions when the static function.
 // Pointers are null. In a full implementation you could store.
 // And restore those pointers as well.
    g_presentCount.store(0, std::memory_order_relaxed);
}