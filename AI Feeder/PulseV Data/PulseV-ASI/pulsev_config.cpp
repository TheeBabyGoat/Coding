/*
------------------------------------------------------------------------------
    pulsev_config.cpp
    INI Configuration Parser for PulseV

    Overview:
    ---------
    Loads and parses a user-defined `.ini` configuration file into the
    global `PulseVConfig` structure (`gCfg`). Supports multiple configurable
    domains including core logging, depth handling, performance tweaks,
    and diagnostics.

    Supported Sections and Keys:
    ----------------------------
    [core]
      - log_level = trace | debug | info | warn | error
      - enable_reshade_addon = auto | on | off
      - present_delay_frames = <int>
      - feature_overlay = auto | on | off

    [depth]
      - enable_depth_export = true | false
      - msaa_mode = auto | on | off
      - linearize = true | false
      - near = <float>
      - far = <float>
      - preferred_slot = <int>

    [perf]
      - prewarm_shaders = true | false
      - use_shader_cache = true | false
      - resolve_mip_pyramid = true | false
      - pyramid_max_levels = <int>

    [diagnostics]
      - dump_frame = true | false
      - dump_path = <string>

    Parsing Behavior:
    -----------------
      • Case-insensitive section and key names.
      • Supports inline comments using `;`.
      • Ignores malformed or unrecognized lines.
      • Trims whitespace from keys, values, and sections.

    Helper Functions:
    -----------------
      • `to_lower()` – converts strings to lowercase.
      • `trim()` – removes surrounding whitespace.
      • Type converters:
        - `to_bool()`
        - `to_auto_on_off()`
        - `to_log_level()`

    Notes:
    ------
      • On failure, no values are set; caller must ensure safe defaults.
      • TODO: Support generating a default config when missing.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#include "pulsev_config.h"
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

PulseVConfig gCfg;

// Basic string helpers
static std::string to_lower(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return std::tolower(c); });
    return s;
}

static std::string trim(const std::string& s) {
    auto first = s.find_first_not_of(" \t\n\r");
    if (std::string::npos == first) return "";
    auto last = s.find_last_not_of(" \t\n\r");
    return s.substr(first, (last - first + 1));
}

// Conversion helpers
static AutoOnOff to_auto_on_off(const std::string& s) {
    if (s == "on") return AutoOnOff::On;
    if (s == "off") return AutoOnOff::Off;
    return AutoOnOff::Auto;
}

static bool to_bool(const std::string& s) {
    return s == "on" || s == "true" || s == "1";
}

static LogLevel_ to_log_level(const std::string& s) {
    if (s == "trace") return LogLevel_::Trace;
    if (s == "debug") return LogLevel_::Debug;
    if (s == "warn") return LogLevel_::Warn;
    if (s == "error") return LogLevel_::Error;
    return LogLevel_::Info;
}

bool LoadConfig(const char* path) {
    std::ifstream f(path);
    if (!f.is_open()) {
        // TODO: Create from default
        return false;
    }

    std::string line, section;
    while (std::getline(f, line)) {
        line = trim(line);
        if (line.empty() || line[0] == ';') continue;

        if (line[0] == '[' && line.back() == ']') {
            section = to_lower(trim(line.substr(1, line.length() - 2)));
            continue;
        }

        auto eq_pos = line.find('=');
        if (eq_pos == std::string::npos) continue;

        auto key = to_lower(trim(line.substr(0, eq_pos)));
        auto val_str = trim(line.substr(eq_pos + 1));
        auto comment_pos = val_str.find(';');
        if (comment_pos != std::string::npos) {
            val_str = trim(val_str.substr(0, comment_pos));
        }
        auto val_lower = to_lower(val_str);

        if (section == "core") {
            if (key == "log_level") gCfg.core.log_level = to_log_level(val_lower);
            else if (key == "enable_reshade_addon") gCfg.core.enable_reshade_addon = to_auto_on_off(val_lower);
            else if (key == "present_delay_frames") gCfg.core.present_delay_frames = std::stoi(val_str);
            else if (key == "feature_overlay") gCfg.core.feature_overlay = to_auto_on_off(val_lower);
        }
        else if (section == "depth") {
            if (key == "enable_depth_export") gCfg.depth.enable_depth_export = to_bool(val_lower);
            else if (key == "msaa_mode") gCfg.depth.msaa_mode = to_auto_on_off(val_lower);
            else if (key == "linearize") gCfg.depth.linearize = to_bool(val_lower);
            else if (key == "near") gCfg.depth.near_plane = std::stof(val_str);
            else if (key == "far") gCfg.depth.far_plane = std::stof(val_str);
            else if (key == "preferred_slot") gCfg.depth.preferred_slot = std::stoi(val_str);
        }
        else if (section == "perf") {
            if (key == "prewarm_shaders") gCfg.perf.prewarm_shaders = to_bool(val_lower);
            else if (key == "use_shader_cache") gCfg.perf.use_shader_cache = to_bool(val_lower);
            else if (key == "resolve_mip_pyramid") gCfg.perf.resolve_mip_pyramid = to_bool(val_lower);
            else if (key == "pyramid_max_levels") gCfg.perf.pyramid_max_levels = std::stoi(val_str);
        }
        else if (section == "diagnostics") {
            if (key == "dump_frame") gCfg.diagnostics.dump_frame = to_bool(val_lower);
            else if (key == "dump_path") gCfg.diagnostics.dump_path = val_str;
        }
    }

    return true;
}
