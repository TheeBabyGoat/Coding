/*
------------------------------------------------------------------------------
    pulsev_shm.cpp
    PulseV Shared Memory (SHM) Interface – Implementation
    Part of the PulseV ASI project

    Overview:
    ---------
    Provides creation, access, synchronization, and snapshot logic for the
    shared memory interface exposed by the PulseV runtime. This enables
    external tools, overlays, or analysis utilities to query live camera and
    environment state via a compact, memory-mapped structure.

    Functionality:
    --------------
      • pulsev_shm_create:
          - Creates and initializes the shared memory section.
          - Sets default version and zeroes fields on first creation.

      • pulsev_shm_destroy:
          - Unmaps and closes the handle to the shared memory section.

      • pulsev_shm_open:
          - Opens an existing shared memory mapping (read/write).

      • pulsev_shm_close:
          - Alias for `pulsev_shm_destroy`.

      • pulsev_snapshot:
          - Atomically reads the shared block using a seqlock loop.
          - Verifies version and retry attempts to ensure consistency.

      • pulsev_begin_publish / pulsev_end_publish:
          - Used internally by the producer to mark and complete updates
            atomically using a seqlock protocol.

      • fence_acq / fence_rel:
          - Memory fences to enforce correct read/write ordering.
          - Uses compiler intrinsics (`_ReadBarrier`, `_WriteBarrier`) and
            LFENCE/SFENCE for x86; compatible with std::atomic fallback.

    Seqlock Protocol:
    -----------------
      • Writer:
          - Call `pulsev_begin_publish()` to set `seq` to odd (publishing).
          - Populate shared memory.
          - Call `pulsev_end_publish()` to bump `seq` to next even number.

      • Reader:
          - Check if `seq` is even.
          - Copy the shared block.
          - Re-check if `seq` changed or was odd → retry up to 3 times.

    Platform:
    ---------
      • Windows-only implementation using:
          - `CreateFileMappingW`, `MapViewOfFile`, `OpenFileMappingW`.
      • Cross-platform fallback stubs return false.

    Notes:
    ------
      • Version number (`PULSEV_SHM_VER`) checked in snapshot to ensure ABI match.
      • Uses compact 4-byte alignment (matches `#pragma pack(push, 4)` from header).
      • Optional heartbeat updates must be handled externally.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#include "pulsev_shm.h"
#include <string.h>
#include <immintrin.h>
#include <intrin.h>
#include <atomic>

static inline void fence_acq() { _ReadBarrier();  _mm_lfence(); }
static inline void fence_rel() { _WriteBarrier(); _mm_sfence(); }

// Portable fences
// (works in MSVC, Clang, GCC; no special intrinsics required)
// We keep them conservative with std::atomic fences.
// * static inline void fence_acq() { std::atomic_thread_fence(std::memory_order_acquire); }
// * static inline void fence_rel() { std::atomic_thread_fence(std::memory_order_release); }

bool pulsev_shm_create(PulseV_SHM& shm)
{
#if defined(_WIN32)
    shm.hMap = CreateFileMappingW(INVALID_HANDLE_VALUE, nullptr, PAGE_READWRITE,
        0, sizeof(PulseVSharedBlock), PULSEV_SHM_NAMEW);
    if (!shm.hMap) return false;

    void* p = MapViewOfFile(shm.hMap, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(PulseVSharedBlock));
    if (!p) { CloseHandle(shm.hMap); shm.hMap = nullptr; return false; }

    shm.blk = reinterpret_cast<PulseVSharedBlock*>(p);

    if (GetLastError() != ERROR_ALREADY_EXISTS)
    {
        memset(shm.blk, 0, sizeof(PulseVSharedBlock));
        shm.blk->version = PULSEV_SHM_VER;
        // seq defaults to 0 (even/stable)
    }
    return true;
#else
    return false;
#endif
}

void pulsev_shm_destroy(PulseV_SHM& shm)
{
#if defined(_WIN32)
    if (shm.blk) { UnmapViewOfFile(shm.blk); shm.blk = nullptr; }
    if (shm.hMap) { CloseHandle(shm.hMap); shm.hMap = nullptr; }
#endif
}

bool pulsev_shm_open(PulseV_SHM& shm)
{
#if defined(_WIN32)
    if (shm.blk) return true;

    shm.hMap = OpenFileMappingW(FILE_MAP_READ | FILE_MAP_WRITE, FALSE, PULSEV_SHM_NAMEW);
    if (!shm.hMap) return false;

    void* p = MapViewOfFile(shm.hMap, FILE_MAP_READ | FILE_MAP_WRITE, 0, 0, sizeof(PulseVSharedBlock));
    if (!p) { CloseHandle(shm.hMap); shm.hMap = nullptr; return false; }

    shm.blk = reinterpret_cast<PulseVSharedBlock*>(p);
    return true;
#else
    return false;
#endif
}

void pulsev_shm_close(PulseV_SHM& shm) { pulsev_shm_destroy(shm); }

bool pulsev_snapshot(PulseV_SHM& shm, PulseVSharedBlock& out)
{
    if (!shm.blk) return false;

    PulseVSharedBlock* src = shm.blk;
    for (int i = 0; i < 3; ++i)
    {
        uint32_t s0 = src->seq;
        if (s0 & 1u) continue;  // writer in progress
        fence_acq();

        memcpy(&out, src, sizeof(PulseVSharedBlock));

        fence_acq();
        uint32_t s1 = src->seq;
        if (s0 == s1 && (s1 % 2u) == 0u)
            return out.version == PULSEV_SHM_VER;
    }
    return false;
}

uint32_t pulsev_begin_publish(PulseVSharedBlock* blk)
{
    uint32_t s = blk->seq;
    blk->seq = s | 1u; // mark odd (publishing)
    fence_rel();
    return s;
}

void pulsev_end_publish(PulseVSharedBlock* blk, uint32_t s)
{
    fence_rel();
    blk->seq = (s & ~1u) + 2u; // even and > s
}
