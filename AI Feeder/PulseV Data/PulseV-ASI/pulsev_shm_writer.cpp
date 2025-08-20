/*
------------------------------------------------------------------------------
    pulsev_shm_writer.cpp
    PulseV Shared Memory Writer Interface (.asi side)
    Part of the PulseV ASI project

    Overview:
    ---------
    Provides runtime integration between the .asi module and the shared memory
    system defined in `pulsev_shm.h`. This module owns the shared memory region
    and publishes camera/environment data to external readers such as ReShade
    add-ons or debug tools.

    Lifecycle Functions:
    --------------------

      • bool PulseV_ASI_Init()
          - Creates the shared memory block (via pulsev_shm_create).
          - Initializes contents if not already present.

      • void PulseV_ASI_Shutdown()
          - Tears down the shared memory (via pulsev_shm_destroy).
          - Should be called during DLL_PROCESS_DETACH or cleanup.

    Runtime Update:
    ---------------
      • void PulseV_ASI_Update(const GameCameraData& cam, const GameEnvData& env)
          - Publishes the latest camera and environment data into shared memory.
          - Uses a seqlock to ensure atomic, lock-free communication.
          - Also updates the heartbeat field (if enabled via PULSEV_USE_HEARTBEAT).
          - Version is explicitly written each frame for redundancy.

    Internal State:
    ---------------
      • Static PulseV_SHM g_shm:
          - Singleton instance for owning the shared memory block.
          - Persisted across frames.

    Notes:
    ------
      • Only one writer (the .asi) should exist per system.
      • This module does not handle frame timing or source acquisition—
        it expects the caller to supply `GameCameraData` and `GameEnvData`.

    Dependencies:
    -------------
      • `pulsev_shm.h` – public shared memory definitions and protocol helpers.
      • `pulsev_shared.h` – struct layout for `PulseVSharedBlock`.

    Example Usage:
    --------------
      PulseV_ASI_Init();
      while (running) {
          PulseV_ASI_Update(camera, environment);
      }
      PulseV_ASI_Shutdown();

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#include "pulsev_shm.h"

static PulseV_SHM g_shm{};

bool PulseV_ASI_Init()
{
    return pulsev_shm_create(g_shm);
}

void PulseV_ASI_Shutdown()
{
    pulsev_shm_destroy(g_shm);
}

void PulseV_ASI_Update(const GameCameraData& cam, const GameEnvData& env)
{
    if (!g_shm.blk) return;

    uint32_t s = pulsev_begin_publish(g_shm.blk);

    // payload
    g_shm.blk->version = PULSEV_SHM_VER;
    g_shm.blk->cam = cam;
    g_shm.blk->env = env;

#if PULSEV_USE_HEARTBEAT
    // Bump heartbeat last (still inside the publish window)
    g_shm.blk->heartbeat++;
#endif

    pulsev_end_publish(g_shm.blk, s);
}
