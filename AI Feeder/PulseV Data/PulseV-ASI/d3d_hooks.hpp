#pragma once
#include <d3d11.h>
#include <dxgi.h>
#include <atomic>
#include "cbuffer.hpp"
#include "depth_tracker.hpp"

bool  PV_InstallD3D11Hooks();
void  PV_UninstallD3D11Hooks();

// Exposed so you can fill the cbuffer each frame from your existing data reader
extern B0CBuffer           gPV_B0;
extern ID3D11Device* gPV_Device;
extern ID3D11DeviceContext* gPV_Ctx;
extern DepthTracker            gPV_Depth;
