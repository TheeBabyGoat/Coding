// Overlay rendering interface (DevRV)
//------------------------------------
// Declares initialization and rendering entry points for the overlay.
// The overlay draws diagnostic visuals on top of the game's back buffer using D3D11 and can be toggled with F11.
// Rendering is gated by the number of frames presented to avoid interfering with early engine setup.
//
// overlay_is_drawing() is provided so OM/PS hooks can detect re-entrancy and avoid instrumenting
// calls made during the overlay's own state restore/draw.


#pragma once

#include <d3d11.h>

struct IDXGISwapChain;

 // Query whether the overlay is currently drawing. The OM hook can call.
 // This function to determine whether it should skip instrumentation to.
 // Avoid re-entering the overlay during state restoration. This.
 // Function is implemented in overlay.cpp and is not part of the
 // overlay namespace to avoid circular dependencies.
bool overlay_is_drawing();

namespace overlay {

 // Initialise overlay resources. Called when the DLL is loaded or.
 // When the first device is captured. The device and context are.
 // Provided for any resource creation the overlay may require. The.
 // Swap chain may be null at this point. Returns true on success.
    bool init(ID3D11Device* dev, ID3D11DeviceContext* ctx, IDXGISwapChain* sc);

 // Shutdown overlay resources. Called when the DLL is unloaded to.
 // Release any resources held by the overlay.
    void shutdown();

 // Render the overlay on top of the given swap chain. The.
 // PresentCount parameter indicates how many Present calls have.
 // Occurred so far; the overlay will avoid rendering until this.
 // Count exceeds a small threshold (e.g. 3) to ensure the device.
 // And context are fully initialised. The overlay performs a.
 // Complete state save and restore around its rendering code.
    void draw(IDXGISwapChain* sc, int presentCount);

} // namespace overlay