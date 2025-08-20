/*
------------------------------------------------------------------------------
    pulsev_config.h
    PulseV INI Configuration Structure and Loader Declaration

    Overview:
    ---------
    Declares the global `PulseVConfig` structure used to store configuration
    options for runtime behavior. Also declares `LoadConfig`, which reads
    a PulseV.ini file and populates this configuration.

    Key Components:
    ---------------
    • Enumerations:
      - LogLevel_:
          • Trace, Debug, Info, Warn, Error, None
      - AutoOnOff:
          • Auto, On, Off

    • PulseVConfig Substructures:
      - Core:
          • log_level (LogLevel_)
          • enable_reshade_addon (AutoOnOff)
          • present_delay_frames (int)
          • feature_overlay (AutoOnOff)

      - Depth:
          • enable_depth_export (bool)
          • msaa_mode (AutoOnOff)
          • linearize (bool)
          • near_plane / far_plane (float)
          • preferred_slot (int)

      - Perf:
          • prewarm_shaders (bool)
          • use_shader_cache (bool)
          • resolve_mip_pyramid (bool)
          • pyramid_max_levels (int)

      - Diagnostics:
          • dump_frame (bool)
          • dump_path (std::string)

    Globals:
    --------
    • `PulseVConfig gCfg` – Singleton-style global configuration object.

    Functions:
    ----------
    • `bool LoadConfig(const char* path)`
        Parses the specified config file path and populates `gCfg`.

    Notes:
    ------
    • Defaults are encoded into the struct fields directly.
    • Call `LoadConfig()` at startup to override defaults with user preferences.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once
#include <string>

enum class LogLevel_ : int { Trace, Debug, Info, Warn, Error, None };
enum class AutoOnOff : int { Auto, On, Off };

struct PulseVConfig {
    struct Core {
        LogLevel_ log_level = LogLevel_::Info;
        AutoOnOff enable_reshade_addon = AutoOnOff::Auto;
        int present_delay_frames = 0;
        AutoOnOff feature_overlay = AutoOnOff::Auto;
    } core;

    struct Depth {
        bool enable_depth_export = true;
        AutoOnOff msaa_mode = AutoOnOff::Auto;
        bool linearize = false;
        float near_plane = 0.1f;
        float far_plane = 2000.0f;
        int preferred_slot = 12;
    } depth;

    struct Perf {
        bool prewarm_shaders = true;
        bool use_shader_cache = true;
        bool resolve_mip_pyramid = false;
        int pyramid_max_levels = 5;
    } perf;

    struct Diagnostics {
        bool dump_frame = false;
        std::string dump_path = "dumps";
    } diagnostics;
};

extern PulseVConfig gCfg;

bool LoadConfig(const char* path);
