/*
------------------------------------------------------------------------------
    game_state.hpp
    Runtime Game State Container
    Part of the PulseV ASI project

    Overview:
    ---------
    Defines a lightweight structure for representing high-level game state
    transitions relevant to visual rendering and weather effects.

    Structure:
    ----------
    struct GameStateData
    {
        int   current_weather;     // Index or enum of current active weather.
        int   target_weather;      // Index or enum of target weather for blending.
        float transition_factor;   // Interpolation factor [0.0 – 1.0] between weathers.
        float game_time;           // Game time of day, typically in hours (e.g. 13.5 = 1:30 PM).
    };

    Purpose:
    --------
      • Encapsulates the current environmental transition state.
      • Supports weather blending logic in shaders or visual systems.
      • Provides canonical snapshot for external systems (e.g., SHM, ReShade).

    Usage Notes:
    ------------
      • Can be serialized, passed between threads, or written to shared memory.
      • Assumes weather types are integer-mapped (e.g., enum or lookup table).
      • `transition_factor` is usually 0.0 (fully current) to 1.0 (fully target).

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once

struct GameStateData
{
    int current_weather = 0;
    int target_weather = 0;
    float transition_factor = 0.0f;
    float game_time = 0.0f;
};
