/*
------------------------------------------------------------------------------
    pulsev_shared.h
    PulseV Shared Memory Interface (SHM Block)
    Part of the PulseV ASI project

    Overview:
    ---------
    Declares the shared memory layout (`PulseVSharedBlock`) used by the PulseV
    runtime to expose real-time camera and environmental data to external tools
    or external shader systems (e.g., ReShade or standalone overlays).

    This interface is designed for low-overhead read access by multiple clients
    and uses a simple seqlock protocol to ensure consistency of sampled frames.

    Key Structures:
    ---------------
      • GameCameraData:
          - View matrix, projection matrix, and combined view-projection.
          - Camera position (world space).
          - Z-near, Z-far, vertical FOV (radians), and aspect ratio.

      • GameEnvData:
          - Global simulation time and frame delta (in seconds).
          - Output resolution (optional).
          - Frame index counter.

      • PulseVSharedBlock:
          - Seqlock field (`seq`) for atomic reads.
          - Version number (`PULSEV_SHM_VER`).
          - Optional heartbeat ticker for liveness detection.
          - Embedded `cam` and `env` structures.

    Synchronization:
    ----------------
      • Seqlock (`seq`):
          - Writer sets `seq = odd` before writing, `seq++` after writing.
          - Readers should read `seq`, copy the struct, then recheck `seq`.
          - If `seq` changed during the read or is odd, the copy is discarded.

      • Heartbeat:
          - Optional (`PULSEV_USE_HEARTBEAT = 1`).
          - Increments each ASI tick.
          - External tools can monitor for stalls (dead process, lost hook).

    Constants:
    ----------
      • PULSEV_SHM_NAMEW:
          - Name of the Windows shared memory section (Unicode).
          - Set to `"Local\\PulseV_Shared"` for session-local access.

      • PULSEV_SHM_VER:
          - ABI version identifier for the shared block layout.
          - Increments on any layout-breaking change.

    Usage:
    ------
      • Consumers (external tools or shaders):
          - Open `PULSEV_SHM_NAMEW` using `OpenFileMappingW`.
          - Map view with `MapViewOfFile`.
          - Sample `PulseVSharedBlock` using the seqlock protocol.

      • Producers (the ASI runtime):
          - Fill `GameCameraData` and `GameEnvData` every tick.
          - Respect alignment and write barriers for SHM consistency.

    Notes:
    ------
      • `#pragma pack(push, 4)` ensures 4-byte alignment (compact layout).
      • The layout must remain stable across builds once versioned.
      • Heartbeat and resolution are optional for consumers.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once
#include <stdint.h>

#define PULSEV_SHM_NAMEW      L"Local\\PulseV_Shared"
#define PULSEV_SHM_VER        0x00010003u
#define PULSEV_USE_HEARTBEAT  1 // set to 0 to disable heartbeat (SHM will still work just wothout heartbeat)

struct GameCameraData
{
    // Row-major matrices, 16 floats each (r0..r3)
    float view[16];
    float proj[16];
    float viewproj[16]; // optional but nice to have
    float cam_pos_ws[3]; float _pad0;
    float znear, zfar, fov_y_rad, aspect;
};

struct GameEnvData
{
    float time_seconds;
    float delta_seconds;
    float resolution[2]; // optional for you; fx doesn’t need it directly
    uint32_t frame_index;
    uint32_t _pad1;
};

#pragma pack(push, 4)
struct PulseVSharedBlock
{
    volatile uint32_t seq;     // seqlock: odd=publishing, even=stable
    uint32_t          version; // = PULSEV_SHM_VER
#if PULSEV_USE_HEARTBEAT
    uint32_t          heartbeat; // increments every ASI tick (last before end)
#else
    uint32_t          _hb_unused;
#endif
    uint32_t          _pad0;

    GameCameraData    cam;
    GameEnvData       env;
};
#pragma pack(pop)
