/*
------------------------------------------------------------------------------
    B0CBuffer.h
    Shared Constant Buffer Layout Mirror (b0)
    Part of the PulseV ASI project

    Overview:
    ---------
    This header defines a CPU-side mirror of the GPU constant buffer `b0`,
    which is commonly bound in Direct3D 11 pipelines. It is designed for
    reverse-engineering and inspection rather than for direct rendering.

    Key Points:
    -----------
      • Represents a fixed 0x800-byte structure aligned to 16 bytes.
      • The leading region (0x000–0x387) is a large opaque uniform block
        containing matrices and clip planes (Projection, InverseView, etc.).
      • Several "hot-spot" regions are marked where games frequently write
        variable-sized data blocks (1/4/32/280/640/704 bytes).
      • Known clear color values are explicitly named at offset 0x3F0
        (float[4] g_ClearColor).
      • Tail padding ensures correct sizing for maximum observed block writes.

    Purpose:
    --------
      • To provide a safe, aligned structure for reading and analyzing GPU
        constant buffer contents.
      • To enable future decoding of specific regions as more information about
        the buffer layout becomes available.
      • To assist debugging tools, overlays, and depth analysis systems in the
        PulseV ASI project.

    Validation:
    -----------
      • `static_assert` enforces that the structure size matches 0x800 bytes.
      • `#pragma pack(push, 16)` ensures 16-byte alignment consistent with
        Direct3D constant buffer layout rules.

    Notes:
    ------
      • Field names beginning with `_head_`, `_blk_`, or `_tail_padding` are
        placeholders for undocumented or partially decoded memory regions.
      • Over time, these may be replaced with meaningful semantic names once
        confirmed (e.g., matrices, flags, per-frame constants).
      • This struct is intended for **read-only reflection/inspection**,
        not modification.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once
#include <cstdint>

// Shared constant buffer (b0) mirror.
// We only “name” the tail; the head is a large opaque blob we’ll decode over time.
#pragma pack(push, 16)

struct alignas(16) B0CBuffer
{
    // 0x000–0x387 : big uniform block (Projection, InverseView, Clips, etc.)
    uint8_t _head_000_387[0x388];

    // 0x388 : hot-spot (writers vary: 1/4/32/280/640/704 bytes)
    uint8_t _blk_388[0x3A0 - 0x388]; // keep spacing

    // 0x3A0 : hot-spot (often 672 bytes copy spans from here)
    uint8_t _blk_3a0[0x3F0 - 0x3A0];

    // 0x3F0 : hot-spot (often 32 bytes; commonly clear/user color)
    float   g_ClearColor[4]; // 16 bytes used (0x3F0..0x3FF)

    // Ensure we have room for the larger sized writes that start at 0x3A0 (+672 = 0x640).
    uint8_t _tail_padding[0x800 - 0x400];
};
static_assert(sizeof(B0CBuffer) == 0x800, "B0CBuffer size");

#pragma pack(pop)

