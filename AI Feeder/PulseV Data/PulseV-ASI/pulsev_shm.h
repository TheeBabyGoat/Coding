/*
------------------------------------------------------------------------------
    pulsev_shm.h
    PulseV Shared Memory Interface – Public Header
    Part of the PulseV ASI project

    Overview:
    ---------
    Declares the interface for interacting with the shared memory block used
    to communicate runtime data (camera/environment state) between the PulseV
    .asi module and external consumers (e.g., ReShade add-ons, tools).

    Structures:
    -----------
      • PulseV_SHM:
          - Represents a handle to the shared memory section.
          - Contains an OS handle (Windows only) and a pointer to the mapped
            shared memory block (PulseVSharedBlock*).

    Functions:
    ----------

    [ Writer Interface (Used by the .asi) ]
      • bool pulsev_shm_create(PulseV_SHM& shm):
          - Creates and maps the shared memory section.
          - Initializes layout if not already present.

      • void pulsev_shm_destroy(PulseV_SHM& shm):
          - Unmaps and destroys the writer’s handle to shared memory.

      • uint32_t pulsev_begin_publish(PulseVSharedBlock* blk):
          - Marks the block as being written to (odd seq).
          - Should be called before modifying the contents.

      • void pulsev_end_publish(PulseVSharedBlock* blk, uint32_t s):
          - Marks the block as stable (even seq).
          - Completes the seqlock write.

    [ Reader Interface (Used by external tools / add-ons) ]
      • bool pulsev_shm_open(PulseV_SHM& shm):
          - Attempts to open and map the shared memory for reading.

      • void pulsev_shm_close(PulseV_SHM& shm):
          - Closes and unmaps the shared memory.

      • bool pulsev_snapshot(PulseV_SHM& shm, PulseVSharedBlock& out):
          - Atomically reads the shared memory contents using a seqlock protocol.
          - Returns false if consistency or version checks fail.

    Platform Notes:
    ---------------
      • This implementation is currently Windows-only (`CreateFileMappingW`,
        `MapViewOfFile`), but the interface can be extended for other platforms.
      • The SHM block layout is defined in `pulsev_shared.h`.

    Seqlock Protocol Summary:
    -------------------------
      • `seq` is used to indicate write-in-progress (odd) or stable (even).
      • Writers must call `pulsev_begin_publish()` and `pulsev_end_publish()`.
      • Readers use `pulsev_snapshot()` to ensure a consistent snapshot.

    Dependencies:
    -------------
      • Requires `pulsev_shared.h` (defines `PulseVSharedBlock`).
      • Uses `stdint.h` for portable integer types.
      • Requires `windows.h` for HANDLE on Windows platforms.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once
#include <stdint.h>
#include "pulsev_shared.h"

#if defined(_WIN32)
#  include <windows.h>
#endif

struct PulseV_SHM
{
#if defined(_WIN32)
    HANDLE hMap = nullptr;
#endif
    PulseVSharedBlock* blk = nullptr;
};

// Writer (.asi)
bool   pulsev_shm_create(PulseV_SHM& shm);
void   pulsev_shm_destroy(PulseV_SHM& shm);

// Reader (add-on)
bool   pulsev_shm_open(PulseV_SHM& shm);
void   pulsev_shm_close(PulseV_SHM& shm);

// Reader snapshot
bool   pulsev_snapshot(PulseV_SHM& shm, PulseVSharedBlock& out);

// Writer seqlock helpers
uint32_t pulsev_begin_publish(PulseVSharedBlock* blk);
void     pulsev_end_publish(PulseVSharedBlock* blk, uint32_t s);
