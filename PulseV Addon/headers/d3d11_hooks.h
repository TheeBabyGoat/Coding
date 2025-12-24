
// Hook control API (D3D11)
//-------------------------
// Public entry points to install/uninstall our DXGI/D3D11 hooks and query the captured device/context.
// install_present_hook() sets up the Present (and CreateDeviceAndSwapChain) detours;
// uninstall_all() removes every detour we added.
// device()/context() return the last captured device/context (weak references).

#pragma once
#include <d3d11.h>
struct IDXGISwapChain; // Forward-declare

namespace hooks {
    bool install_present_hook();
    void uninstall_all();
    ID3D11Device* device();
    ID3D11DeviceContext* context();
}
