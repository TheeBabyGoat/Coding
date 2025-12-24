
/*
 * Copyright (C) 2025 Matthew Burrows (anti-matt-er)
 * SPDX-License-Identifier: BSD-3-Clause OR MIT
 *
 * Description: Entry point and logic for addon
 */

#include "addon.hpp"
#include <array>
#include <string>
#include <algorithm>
#include <atomic>

 // Standard library includes for saving/loading presets
#include <filesystem>
#include <fstream>
#include <sstream>
#include <cctype>
#ifdef _WIN32
#include <windows.h>
#include <shlwapi.h>
#pragma comment(lib, "shlwapi.lib")
#else
#include <unistd.h>
#include <limits.h>
#endif

// ======================= PulseV Clouds Customization ========================
//
// The following constants, data tables and helper functions are used to
// support per‑weather, per‑time‑of‑day cloud parameter editing. Rather than
// exposing hundreds of individual uniforms through the shader UI—which
// causes ReShade to hang—these values are managed entirely within the
// addon. The shader reads them via `source` annotations and the addon
// populates them at runtime.

// Number of available weather presets. This must match the order of
// definitions in weathers_runtime.fxh and the default table below.
static constexpr int WEATHER_COUNT = 13;
// Number of time segments used for editing. The boundaries are defined in
// `timeBoundaries`. There are 13 segments corresponding to the hours
// {00:00, 05:00, 06:00, 07:00, 09:00, 12:00, 16:00, 17:00, 18:00,
// 19:00, 20:00, 21:00, 22:00}.
static constexpr int TIME_SEGMENT_COUNT = 48;
// Number of parameters per cloud layer (bottom/top). See `paramNames` for
// the ordering.
static constexpr int PARAM_COUNT = 22;

// Weather preset names. The order must correspond to the preset indices
// expected by the shader (see getWeatherPreset() in PulseV_Clouds.fx).
static const char* const weatherNames[WEATHER_COUNT] = {
    "Clear", "ExtraSunny", "Clouds", "Overcast", "Rain",
    "Clearing", "Thunder", "Smog", "Foggy", "Snow",
    "Blizzard", "SnowLight", "Halloween"
};

// Labels for the beginning of each time segment. These will be shown
// in the UI. Each segment begins at this time and extends up to the
// next boundary in `timeBoundaries`.
static const char* const timeSegmentLabels[TIME_SEGMENT_COUNT] = {
    "00:00", "00:30", "01:00", "01:30", "02:00", "02:30", "03:00", "03:30",
    "04:00", "04:30", "05:00", "05:30", "06:00", "06:30", "07:00", "07:30",
    "08:00", "08:30", "09:00", "09:30", "10:00", "10:30", "11:00", "11:30",
    "12:00", "12:30", "13:00", "13:30", "14:00", "14:30", "15:00", "15:30",
    "16:00", "16:30", "17:00", "17:30", "18:00", "18:30", "19:00", "19:30",
    "20:00", "20:30", "21:00", "21:30", "22:00", "22:30", "23:00", "23:30"
};

// Normalised time boundaries for each segment. A value in the range
// [timeBoundaries[i], timeBoundaries[i+1]) belongs to segment i. The final
// boundary is 1.0f (24:00).
static const float timeBoundaries[TIME_SEGMENT_COUNT + 1] = {
     0.0f / 48.0f,  1.0f / 48.0f,  2.0f / 48.0f,  3.0f / 48.0f,  4.0f / 48.0f,  5.0f / 48.0f,  6.0f / 48.0f,  7.0f / 48.0f,
     8.0f / 48.0f,  9.0f / 48.0f, 10.0f / 48.0f, 11.0f / 48.0f, 12.0f / 48.0f, 13.0f / 48.0f, 14.0f / 48.0f, 15.0f / 48.0f,
    16.0f / 48.0f, 17.0f / 48.0f, 18.0f / 48.0f, 19.0f / 48.0f, 20.0f / 48.0f, 21.0f / 48.0f, 22.0f / 48.0f, 23.0f / 48.0f,
    24.0f / 48.0f, 25.0f / 48.0f, 26.0f / 48.0f, 27.0f / 48.0f, 28.0f / 48.0f, 29.0f / 48.0f, 30.0f / 48.0f, 31.0f / 48.0f,
    32.0f / 48.0f, 33.0f / 48.0f, 34.0f / 48.0f, 35.0f / 48.0f, 36.0f / 48.0f, 37.0f / 48.0f, 38.0f / 48.0f, 39.0f / 48.0f,
    40.0f / 48.0f, 41.0f / 48.0f, 42.0f / 48.0f, 43.0f / 48.0f, 44.0f / 48.0f, 45.0f / 48.0f, 46.0f / 48.0f, 47.0f / 48.0f,
    48.0f / 48.0f
};

// Parameter names, in the order used throughout this addon and the
// default parameter table. When adding or removing parameters you must
// update this list and the associated tables accordingly.
static const char* const paramNames[PARAM_COUNT] = {
    "Scale", "DetailScale", "Stretch", "BaseCurl", "DetailCurl",
    "BaseCurlScale", "DetailCurlScale", "Smoothness", "Softness",
    "BottomHeight", "TopHeight", "Coverage", "Extinction",
    "AmbientAmount", "Absorption", "Luminance",
    "SunLightPower", "MoonLightPower", "SkyLightPower",
    "BottomDensity", "MiddleDensity", "TopDensity"
};

// Minimum slider values for each parameter. These bounds are derived
// from the ranges of the original presets and expanded where constant.
static const float paramMin[PARAM_COUNT] = {
    1.5f, 0.25f, 0.9f, 0.25f, 0.15f,
    1.0f, 1.0f, 0.35f, -1.0f, 0.0f,
    700.0f, 0.0f, 0.0f, 0.6f, 0.35f,
    0.45f, 0.0f, 0.0f, 0.0f, 0.5f,
    0.25f, 0.0f
};

// Maximum slider values for each parameter. These bounds are derived
// from the ranges of the original presets and expanded where constant.
static const float paramMax[PARAM_COUNT] = {
    10.0f, 10.5f, 10.0f, 10.0f, 10.0f,
    10.0f, 10.0f,
    /* Smoothness (index 7) */ 10.0f,
    /* Softness (index 8)   */ 10.0f,
    3000.0f,
    4000.0f,
    10.0f,
    10.0f,
    /* AmbientAmount (index 13) */ 10.0f,
    /* Absorption   (index 14) */ 10.0f,
    /* Luminance    (index 15) */ 10.0f,
    /* SunLightPower(index 16) */ 10.0f,
    /* MoonLightPower(index 17)*/ 10.0f,
    /* SkyLightPower (index 18)*/ 10.0f,
    10.0f,
    10.0f,
    10.0f
};

// Default parameter values for every weather preset, layer (0 = bottom,
// 1 = top) and parameter. These were extracted from weathers.fxh.
static const float defaultWeatherParams[WEATHER_COUNT][2][PARAM_COUNT] = {
    { { 1.5f, 0.5f, 1.25f, 0.5f, 0.5f, 1.0f, 1.0f, 2.0f, 0.0f, 450.0f, 1000.0f, 0.15f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.0f },{ 2.0f, 1.5f, 3.0f, 1.0f, 2.0f, 1.0f, 1.5f, 2.0f, 0.0f, 1000.0f, 2000.0f, 0.4f, 1.0f, 1.0f, 0.75f, 1.0f, 1.0f, 1.0f, 1.0f, 0.75f, 1.0f, 0.7f  } }, // Clear
    { { 1.5f, 0.5f, 1.25f, 0.5f, 0.5f, 1.0f, 1.0f, 1.5f, 0.0f, 450.0f, 1200.0f, 0.3f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.0f },{ 2.0f, 1.5f, 3.0f, 2.0f, 1.0f, 1.0f, 1.5f, 2.0f, 0.0f, 2500.0f, 3500.0f, 0.5f, 1.0f, 1.0f, 0.75f, 1.0f, 1.0f, 1.0f, 1.0f, 0.75f, 1.0f, 0.75f  } }, // ExtraSunny
    { { 3.0f, 0.25f, 0.9f, 0.25f, 0.15f, 1.0f, 1.0f, 0.35f, 0.0f, 350.0f, 1000.0f, 0.45f, 1.0f, 1.0f, 1.25f, 1.25f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.0f },{ 2.0f, 1.5f, 3.0f, 1.0f, 1.0f, 1.0f, 1.5f, 1.5f, 0.0f, 1000.0f, 3000.0f, 0.3f, 1.0f, 1.0f, 0.75f, 1.0f, 1.0f, 1.0f, 1.0f, 0.75f, 1.0f, 1.0f  } }, // Clouds
    { { 1.5f, 0.5f, 1.25f, 0.25f, 0.25f, 1.0f, 1.0f, 1.5f, 0.0f, 400.0f, 1500.0f, 0.45f, 1.0f, 1.25f, 0.75f, 1.0f, 1.0f, 1.0f, 1.0f, 1.5f, 0.5f, 0.0f },{ 2.0f, 1.5f, 3.0f, 1.5f, 0.75f, 1.0f, 1.5f, 1.5f, 0.0f, 1500.0f, 3000.0f, 0.55f, 1.0f, 1.0f, 0.75f, 1.0f, 1.0f, 1.0f, 1.0f, 0.75f, 1.0f, 0.75f  } }, // Overcast
    { { 2.0f, 1.0f, 1.5f, 0.5f, 0.75f, 1.0f, 1.0f, 0.75f, 0.0f, 200.0f, 1500.0f, 0.4f, 1.0f, 0.75f, 1.5f, 1.5f, 1.0f, 1.0f, 1.0f, 2.0f, 1.5f, 0.5f },{ 2.0f, 1.5f, 2.5f, 1.0f, 0.75f, 1.0f, 1.5f, 1.25f, 0.0f, 1500.0f, 2500.0f, 0.65f, 1.0f, 0.75f, 0.75f, 1.0f, 1.0f, 1.0f, 1.0f, 0.75f, 1.0f, 0.75f  } }, // Rain
    { { 1.75f, 0.75f, 1.35f, 0.5f, 0.65f, 1.0f, 1.0f, 1.25f, 0.0f, 325.0f, 1250.0f, 0.3f, 1.0f, 0.85f, 1.15f, 0.6f, 1.0f, 1.0f, 1.0f, 1.75f, 1.25f, 0.25f },{ 2.0f, 1.5f, 2.75f, 1.0f, 1.35f, 1.0f, 1.5f, 1.5f, 0.0f, 1250.0f, 2250.0f, 0.55f, 1.0f, 0.95f, 1.0f, 0.6f, 1.0f, 1.0f, 1.0f, 0.85f, 1.0f, 0.75f  } }, // Clearing
    { { 2.0f, 0.25f, 1.15f, 0.25f, 0.5f, 1.25f, 1.25f, 0.65f, 0.0f, 400.0f, 2000.0f, 0.4f, 1.0f, 0.75f, 1.5f, 1.5f, 1.0f, 1.0f, 1.0f, 2.5f, 1.25f, 1.55f },{ 2.0f, 0.25f, 2.0f, 0.25f, 0.5f, 1.5f, 1.0f, 2.0f, 0.0f, 3000.0f, 4000.0f, 0.85f, 1.0f, 0.75f, 0.35f, 1.0f, 1.0f, 1.0f, 1.0f, 0.75f, 1.0f, 0.75f  } }, // Thunder
    { { 2.0f, 0.5f, 2.5f, 0.25f, 0.75f, 1.0f, 1.0f, 1.25f, 0.0f, 400.0f, 1500.0f, 0.43f, 1.0f, 1.0f, 1.25f, 0.5f, 1.0f, 1.0f, 1.0f, 1.5f, 0.5f, 0.0f },{ 1.5f, 1.5f, 5.0f, 1.5f, 0.75f, 1.0f, 1.5f, 1.25f, 0.0f, 1500.0f, 3000.0f, 0.4f, 1.0f, 0.6f, 0.75f, 0.45f, 1.0f, 1.0f, 1.0f, 0.75f, 1.0f, 0.75f  } }, // Smog
    { { 5.0f, 0.5f, 2.0f, 0.25f, 0.15f, 1.0f, 1.0f, 1.0f, 0.0f, 0.0f, 700.0f, 1.0f, 1.0f, 1.0f, 2.0f, 0.5f, 1.0f, 1.0f, 1.0f, 1.1f, 0.25f, 0.0f },{ 2.0f, 1.5f, 3.0f, 1.0f, 1.0f, 1.0f, 1.5f, 1.5f, 0.0f, 2000.0f, 3000.0f, 0.0f, 1.0f, 1.0f, 0.75f, 1.0f, 1.0f, 1.0f, 1.0f, 0.75f, 1.0f, 1.0f  } }, // Foggy
    { { 2.0f, 1.0f, 1.75f, 0.35f, 0.45f, 1.0f, 1.0f, 0.75f, 0.0f, 175.0f, 1000.0f, 0.65f, 1.0f, 0.85f, 1.25f, 0.6f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 0.0f },{ 1.75f, 0.75f, 1.35f, 0.5f, 0.65f, 1.0f, 1.0f, 1.25f, 0.0f, 1500.0f, 2000.0f, 0.3f, 1.0f, 0.85f, 1.15f, 0.75f, 1.0f, 1.0f, 1.0f, 1.75f, 1.25f, 0.25f  } }, // Snow
    { { 2.0f, 1.0f, 1.75f, 0.35f, 0.45f, 1.0f, 1.0f, 0.75f, 0.0f, 175.0f, 1000.0f, 0.5f, 1.0f, 0.85f, 1.25f, 0.7f, 1.0f, 1.0f, 1.0f, 1.5f, 1.0f, 0.0f },{ 1.75f, 0.75f, 1.35f, 0.5f, 0.65f, 1.0f, 1.0f, 1.25f, 0.0f, 1500.0f, 2000.0f, 0.8f, 1.0f, 0.85f, 1.15f, 0.75f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f  } }, // Blizzard
    { { 2.0f, 1.0f, 1.75f, 0.35f, 0.35f, 1.0f, 1.0f, 0.75f, 0.0f, 175.0f, 1000.0f, 0.5f, 1.0f, 1.0f, 1.25f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 1.0f, 0.0f },{ 1.75f, 0.75f, 1.35f, 0.5f, 0.65f, 1.0f, 1.0f, 1.25f, 0.0f, 1500.0f, 2000.0f, 0.3f, 1.0f, 0.85f, 1.15f, 1.0f, 1.0f, 1.0f, 1.0f, 1.75f, 1.25f, 0.25f  } }, // SnowLight
    { { 3.0f, 0.25f, 0.9f, 1.0f, 0.5f, 1.0f, 1.0f, 0.35f, 0.0f, 350.0f, 1000.0f, 0.45f, 1.0f, 1.0f, 1.25f, 1.25f, 1.0f, 1.0f, 1.0f, 2.0f, 1.0f, 0.0f },{ 2.0f, 1.5f, 3.0f, 2.0f, 2.0f, 1.0f, 1.5f, 1.5f, 0.0f, 1000.0f, 3000.0f, 0.3f, 1.0f, 1.0f, 0.75f, 1.0f, 1.0f, 1.0f, 1.0f, 0.75f, 1.0f, 1.0f  } }  // Halloween
};

// Editable parameters: [weather][timeSegment][layer][parameter]. Populated on
// first use with defaults. Users modify these values via the UI.
static std::array<std::array<std::array<std::array<float, PARAM_COUNT>, 2>, TIME_SEGMENT_COUNT>, WEATHER_COUNT> weatherTimeParams;

// UI state variables. These store the currently selected weather and time
// segment indices in the overlay.
static int selectedWeather = 0;
static int selectedTimeSegment = 0;

// Flag to ensure the parameter tables are initialised only once.
static bool pulsevInitialised = false;

// Flag to indicate whether a preset file has been loaded. Used to avoid
// repeatedly parsing the INI on every frame. The preset is loaded on
// first initialisation of the parameter table.
static bool preset_loaded = false;

// Forward declarations for preset persistence and reset functionality. These
// functions are implemented below to support saving, loading and resetting
// PulseV cloud parameters. They are declared here so they can be called
// from multiple locations in this file.
static std::filesystem::path find_pulsev_config_directory();
static void save_preset();
static void load_preset();
static void reset_selected_segment();

// Initialise the editable parameter table by copying defaults into every
// time segment for every weather. This is idempotent and safe to call
// multiple times.
static void init_pulsev_params()
{
    if (pulsevInitialised)
        return;
    for (int w = 0; w < WEATHER_COUNT; ++w)
    {
        for (int t = 0; t < TIME_SEGMENT_COUNT; ++t)
        {
            for (int layer = 0; layer < 2; ++layer)
            {
                for (int p = 0; p < PARAM_COUNT; ++p)
                {
                    weatherTimeParams[w][t][layer][p] = defaultWeatherParams[w][layer][p];
                }
            }
        }
    }
    pulsevInitialised = true;

    // After the default values have been set, attempt to load any saved
    // presets from disk. This will override defaults with user-edited
    // values. The preset is loaded only once per session.
    if (!preset_loaded)
    {
        load_preset();
    }
}

// Return the time segment index corresponding to the given normalised
// time-of-day value. Values wrap around at 1.0. If the value does not
// fall within any interval (which should not occur), the last segment is
// returned.
static int get_time_segment(float timeOfDay)
{
    // Wrap negative or >1 values
    float tod = timeOfDay;
    if (tod < 0.0f)
        tod = 0.0f;
    if (tod >= 1.0f)
        tod -= std::floor(tod);
    for (int i = 0; i < TIME_SEGMENT_COUNT; ++i)
    {
        if (tod >= timeBoundaries[i] && tod < timeBoundaries[i + 1])
            return i;
    }
    return TIME_SEGMENT_COUNT - 1;
}

// -----------------------------------------------------------------------------
//                              Preset Persistence
//
// The following helper functions implement reading and writing of cloud
// parameter presets from/to disk. Presets are stored in a simple INI-like
// format in the directory `<game_root>/reshade-shaders/Shaders/PulseV`. On
// initialisation the preset file is loaded (if it exists) to override the
// default parameters. Users can manually save and load presets via buttons
// exposed in the overlay. A reset helper restores the current weather/time
// segment to the original defaults.

// Determine the directory in which to store PulseV presets. This attempts
// to locate the `reshade-shaders/Shaders/PulseV` directory relative to the
// game executable. If no such directory is found in any parent path, it
// falls back to the current working directory. The returned path is not
// guaranteed to exist; callers should create it if necessary.
static std::filesystem::path find_pulsev_config_directory()
{
    std::filesystem::path base_path;
#ifdef _WIN32
    // On Windows, use GetModuleFileNameW to obtain the path to the executable
    wchar_t module_path[MAX_PATH] = { 0 };
    HMODULE hModule = GetModuleHandleW(NULL);
    if (GetModuleFileNameW(hModule, module_path, MAX_PATH) > 0)
    {
        base_path = std::filesystem::path(module_path).parent_path();
    }
    else
    {
        base_path = std::filesystem::current_path();
    }
#else
    // On POSIX platforms, read /proc/self/exe for the executable path
    char result[PATH_MAX] = { 0 };
    ssize_t count = readlink("/proc/self/exe", result, sizeof(result));
    if (count > 0)
    {
        base_path = std::filesystem::path(std::string(result, static_cast<size_t>(count))).parent_path();
    }
    else
    {
        base_path = std::filesystem::current_path();
    }
#endif
    // Walk up the directory tree looking for the reshade-shaders/Shaders directory
    std::filesystem::path path = base_path;
    for (int i = 0; i < 6 && !path.empty(); ++i)
    {
        std::filesystem::path candidate = path / "reshade-shaders" / "Shaders" / "PulseV";
        if (std::filesystem::exists(candidate))
            return candidate;
        path = path.parent_path();
    }
    // Fallback to a directory relative to the base path
    return base_path / "reshade-shaders" / "Shaders" / "PulseV";
}

// Save the current cloud parameters to disk. The resulting file contains one
// section per weather preset with a list of values for each time segment. Each
// Segment line holds `2 * PARAM_COUNT` comma-separated values (bottom layer
// followed by top layer). When writing the file, missing directories are
// created automatically.
static void save_preset()
{
    try
    {
        std::filesystem::path dir = find_pulsev_config_directory();
        std::error_code ec;
        std::filesystem::create_directories(dir, ec);
        std::filesystem::path file_path = dir / "pv_clouds.ini";
        std::ofstream file(file_path, std::ios::trunc);
        if (!file.is_open())
        {
            return;
        }
        for (int w = 0; w < WEATHER_COUNT; ++w)
        {
            file << "[" << weatherNames[w] << "]\n";
            for (int t = 0; t < TIME_SEGMENT_COUNT; ++t)
            {
                file << "Segment" << t << "=";
                bool first = true;
                for (int layer = 0; layer < 2; ++layer)
                {
                    for (int p = 0; p < PARAM_COUNT; ++p)
                    {
                        if (!first)
                            file << ",";
                        first = false;
                        file << weatherTimeParams[w][t][layer][p];
                    }
                }
                file << "\n";
            }
            file << "\n";
        }
        file.close();
    }
    catch (const std::exception&)
    {
        // Silently ignore errors on save; user can try again
    }
}

// Load cloud parameters from disk if a preset file exists. The format
// described in `save_preset` is parsed. Unknown weather names or invalid
// segment indices are ignored. This function sets `preset_loaded` to true
// after loading so that it is only executed once per session.
static void load_preset()
{
    if (preset_loaded)
        return;
    preset_loaded = true;
    try
    {
        std::filesystem::path dir = find_pulsev_config_directory();
        std::filesystem::path file_path = dir / "pv_clouds.ini";
        if (!std::filesystem::exists(file_path))
        {
            return;
        }
        std::ifstream file(file_path);
        if (!file.is_open())
        {
            return;
        }
        std::string line;
        int currentWeatherIndex = -1;
        while (std::getline(file, line))
        {
            // Trim whitespace from both ends
            while (!line.empty() && (line.back() == '\r' || line.back() == '\n' || std::isspace(static_cast<unsigned char>(line.back()))))
                line.pop_back();
            size_t start = 0;
            while (start < line.size() && std::isspace(static_cast<unsigned char>(line[start])))
                ++start;
            if (start >= line.size())
                continue;
            line = line.substr(start);
            if (line.empty())
                continue;
            // Section header
            if (line.front() == '[' && line.back() == ']')
            {
                std::string weatherName = line.substr(1, line.size() - 2);
                currentWeatherIndex = -1;
                for (int i = 0; i < WEATHER_COUNT; ++i)
                {
                    if (weatherName == weatherNames[i])
                    {
                        currentWeatherIndex = i;
                        break;
                    }
                }
                continue;
            }
            // Segment line
            if (currentWeatherIndex < 0)
                continue;
            if (line.rfind("Segment", 0) == 0)
            {
                size_t eqPos = line.find('=');
                if (eqPos == std::string::npos)
                    continue;
                std::string segStr = line.substr(7, eqPos - 7);
                int segIndex = -1;
                try
                {
                    segIndex = std::stoi(segStr);
                }
                catch (const std::exception&)
                {
                    segIndex = -1;
                }
                if (segIndex < 0 || segIndex >= TIME_SEGMENT_COUNT)
                    continue;
                std::string valuesStr = line.substr(eqPos + 1);
                std::stringstream ss(valuesStr);
                std::string value;
                std::vector<float> values;
                while (std::getline(ss, value, ','))
                {
                    if (!value.empty())
                    {
                        try
                        {
                            values.push_back(std::stof(value));
                        }
                        catch (const std::exception&)
                        {
                            // ignore parse errors for individual values
                            values.push_back(0.0f);
                        }
                    }
                }
                // Each segment should have exactly 2*PARAM_COUNT values
                if (values.size() == static_cast<size_t>(2 * PARAM_COUNT))
                {
                    size_t idx = 0;
                    for (int layer = 0; layer < 2; ++layer)
                    {
                        for (int p = 0; p < PARAM_COUNT; ++p)
                        {
                            weatherTimeParams[currentWeatherIndex][segIndex][layer][p] = values[idx++];
                        }
                    }
                }
            }
        }
    }
    catch (const std::exception&)
    {
        // Silently ignore errors on load
    }
}

// Restore the currently selected time segment for the selected weather to
// the original default values defined in `defaultWeatherParams`. This will
// overwrite any edits the user has made to that segment but will not
// persist to disk until the user saves the preset.
static void reset_selected_segment()
{
    for (int layer = 0; layer < 2; ++layer)
    {
        for (int p = 0; p < PARAM_COUNT; ++p)
        {
            weatherTimeParams[selectedWeather][selectedTimeSegment][layer][p] = defaultWeatherParams[selectedWeather][layer][p];
        }
    }
}

using namespace reshade::api;

constexpr size_t MAX_UNIFORM_NAME = 48;

static DataSource* data_source;
std::unordered_map<std::string, UniformType> staged_uniforms;


/**
* Uniform injection
**/

template <typename T>
void stage_uniform(const std::string& annotation, const T& value)
{
    staged_uniforms[annotation] = UniformType(value);
}

template<>
void stage_uniform<Float4x4>(const std::string& annotation, const Float4x4& value)
{
    staged_uniforms[annotation + "__r1"] = value.r1;
    staged_uniforms[annotation + "__r2"] = value.r2;
    staged_uniforms[annotation + "__r3"] = value.r3;
    staged_uniforms[annotation + "__r4"] = value.r4;
}

template<>
void stage_uniform<TimeCycle::WeatherFrame>(const std::string& annotation, const TimeCycle::WeatherFrame& value)
{
    for (const auto& variable : value.floats) {
        staged_uniforms[annotation + "_" + variable.first] = variable.second;
    }

    for (const auto& variable : value.colors) {
        staged_uniforms[annotation + "_" + variable.first] = variable.second;
    }
}

struct UniformInjectionVisitor {
    effect_runtime* runtime;
    effect_uniform_variable& variable;

    void operator()(bool value) const {
        runtime->set_uniform_value_bool(variable, value);
    }

    void operator()(int value) const {
        runtime->set_uniform_value_int(variable, value);
    }

    void operator()(float value) const {
        runtime->set_uniform_value_float(variable, value);
    }

    void operator()(const Float2& value) const {
        runtime->set_uniform_value_float(variable, value.v, 2);
    }

    void operator()(const Float3& value) const {
        runtime->set_uniform_value_float(variable, value.v, 3);
    }

    void operator()(const Float4& value) const {
        runtime->set_uniform_value_float(variable, value.v, 4);
    }

    void operator()(const Float4x4& value) const {
        reshade::log::message(reshade::log::level::error, "Tried to inject Float4x4 without marshalling!");
    }

    void operator()(const TimeCycle::WeatherFrame& value) const {
        reshade::log::message(reshade::log::level::error, "Tried to inject WeatherFrame without marshalling!");
    }

    void operator()(const UniformType& value) const
    {
        reshade::log::message(reshade::log::level::error, "Tried to inject unknown uniform type!");
    }
};

static void inject_uniform(effect_runtime* runtime, effect_uniform_variable& variable, const UniformType& value)
{
    std::visit(UniformInjectionVisitor{ runtime, variable }, value);
}

static void commit_uniforms(effect_runtime* runtime)
{
    runtime->enumerate_uniform_variables(nullptr, [](effect_runtime* runtime, effect_uniform_variable variable) {
        char annotation[MAX_UNIFORM_NAME] = { 0 };

        if (runtime->get_annotation_string_from_uniform_variable(variable, "source", annotation))
        {
            std::string annotation_needle = annotation;

            auto uniform_iter = staged_uniforms.find(annotation_needle);
            if (uniform_iter != staged_uniforms.end()) {
                inject_uniform(runtime, variable, uniform_iter->second);
            }
        }
        });

    staged_uniforms.clear();
}

static void inject_uniforms(effect_runtime* runtime, command_list* cmd_list, resource_view rtv, resource_view rtv_srgb)
{
    // Initialise PulseV Gbuffer parameters on first use
    {
        const bool enabled = DataReader::get_enabled();
        stage_uniform("enabled", enabled);
    }

    // Always stage the enabled flag for shaders that depend on it.
    const bool enabled = DataReader::get_enabled();
    stage_uniform("enabled", enabled);

    // Retrieve the current time-of-day value. If the game is enabled, update
    // the data reader first so that all values, including time-of-day, are
    // refreshed before staging uniforms. This prevents a one-frame lag in
    // the interpolation calculations. The updated `tod_value` is then staged
    // as a uniform and used to compute smooth interpolation between time
    // segments below.
    float tod_value;
    if (enabled)
    {
        // Update game data and then read the latest time-of-day
        DataReader::fast_update();
        tod_value = DataReader::get_time_of_day();

        stage_uniform("depth_reversed", DataReader::get_depth_reversed());
        stage_uniform("view_matrix", DataReader::get_view_matrix());
        stage_uniform("projection_matrix", DataReader::get_proj_matrix());
        stage_uniform("inverse_view_matrix", DataReader::get_inv_view_matrix());
        stage_uniform("inverse_projection_matrix", DataReader::get_inv_proj_matrix());
        stage_uniform("previous_view_matrix", DataReader::get_prev_view_matrix());
        stage_uniform("previous_projection_matrix", DataReader::get_prev_proj_matrix());
        stage_uniform("previous_inverse_view_matrix", DataReader::get_prev_inv_view_matrix());
        stage_uniform("previous_inverse_projection_matrix", DataReader::get_prev_inv_proj_matrix());
        stage_uniform("camera_position", DataReader::get_camera_pos());
        stage_uniform("camera_rotation", DataReader::get_camera_rot());
        stage_uniform("delta_camera_position", DataReader::get_delta_camera_pos());
        stage_uniform("delta_camera_rotation", DataReader::get_delta_camera_rot());
        stage_uniform("near_clip", DataReader::get_near_clip());
        stage_uniform("far_clip", DataReader::get_far_clip());
        stage_uniform("camera_fov", DataReader::get_camera_fov());
        stage_uniform("wind_direction", DataReader::get_wind_dir());
        stage_uniform("wind_speed", DataReader::get_wind_speed());
        stage_uniform("wind_position", DataReader::get_wind_pos());
        stage_uniform("game_timer", DataReader::get_timer());
        stage_uniform("from_weather_type", (int)DataReader::get_from_weather_type());
        stage_uniform("to_weather_type", (int)DataReader::get_to_weather_type());
        stage_uniform("weather_transition", DataReader::get_weather_transition());
        stage_uniform("wf", DataReader::get_weather_frame());
        stage_uniform("aurora_visibility", DataReader::get_aurora_visibility());
        stage_uniform("moon_dir", DataReader::get_moon_dir());
    }
    else
    {
        // When not enabled, just read the time-of-day
        tod_value = DataReader::get_time_of_day();
    }
    // Stage the (potentially updated) time-of-day uniform
    stage_uniform("time_of_day", tod_value);
    // Determine the current and next time segments and compute an interpolation
    // ratio between them. This ratio will be used to blend cloud
    // parameters across segment boundaries for smooth transitions. If the
    // time-of-day exceeds 1.0, it is wrapped around.
    int currentSegment = 0;
    int nextSegment = 0;
    float ratio = 0.0f;
    {
        float tod = tod_value;
        if (tod < 0.0f)
            tod = 0.0f;
        if (tod >= 1.0f)
            tod -= std::floor(tod);
        // Find current segment
        for (int i = 0; i < TIME_SEGMENT_COUNT; ++i)
        {
            if (tod >= timeBoundaries[i] && tod < timeBoundaries[i + 1])
            {
                currentSegment = i;
                break;
            }
        }
        nextSegment = (currentSegment + 1) % TIME_SEGMENT_COUNT;
        float lower = timeBoundaries[currentSegment];
        float upper = timeBoundaries[currentSegment + 1];
        float denom = upper - lower;
        if (denom > 0.0f)
        {
            // Compute normalised position within the segment
            float t = (tod - lower) / denom;
            // Clamp to [0,1]
            if (t < 0.0f)
                t = 0.0f;
            else if (t > 1.0f)
                t = 1.0f;
            // Apply a smootherstep interpolation to ease the blending even more
            // near the segment boundaries. This quintic polynomial has zero
            // first and second derivatives at the endpoints, producing a
            // gentler transition than the cubic smoothstep used previously.
            ratio = t * t * t * (t * (t * 6.0f - 15.0f) + 10.0f);
        }
        else
        {
            ratio = 0.0f;
        }

    }

    // ---------------------------------------------------------------------
    // PulseV cloud parameter injection
    //
    // Populate the per-weather, per-layer cloud uniforms for the active
    // time segment. This runs on every frame, regardless of whether the
    // DataReader is enabled, so that the shader always has valid values to
    // consume. Since the shader uses the `source` annotations defined in
    // weathers_runtime.fxh, staging these values causes them to be bound to
    // their corresponding uniforms.
    init_pulsev_params();
    // For each weather preset, layer and parameter, blend the values from
    // the current and next time segments using the ratio computed above. This
    // ensures a smooth transition between segments without abrupt changes in
    // cloud appearance. The blend wraps around from the last segment back to
    // the first.
    for (int w = 0; w < WEATHER_COUNT; ++w) {
        for (int layer = 0; layer < 2; ++layer) {
            const char* layerName = (layer == 0) ? "Bottom" : "Top";
            for (int p = 0; p < PARAM_COUNT; ++p) {
                float fromVal = weatherTimeParams[w][currentSegment][layer][p];
                float toVal = weatherTimeParams[w][nextSegment][layer][p];
                float value = fromVal + (toVal - fromVal) * ratio;
                std::string annotation = std::string("pv_Clouds_") + weatherNames[w] + "_" + layerName + "_" + paramNames[p];
                stage_uniform(annotation, value);
            }
        }
    }

    // Finally, apply all staged uniform values to the runtime
    commit_uniforms(runtime);
}

struct DebugWatchVisitor {
    const char* name;

    void operator()(bool value) const {
        ImGui::Text("%s: %s", name, value ? "true" : "false");
    }

    void operator()(int value) const {
        ImGui::Text("%s: %d", name, value);
    }

    void operator()(float value) const {
        ImGui::Text("%s: %g", name, value);
    }

    void operator()(const Float2& value) const {
        ImGui::Text("%s: (%g, %g)", name, value.v[0], value.v[1]);
    }

    void operator()(const Float3& value) const {
        ImGui::Text("%s: (%g, %g, %g)", name, value.v[0], value.v[1], value.v[2]);
    }

    void operator()(const Float4& value) const {
        ImGui::Text("%s: (%g, %g, %g, %g)", name, value.v[0], value.v[1], value.v[2], value.v[3]);
    }

    void operator()(const Float4x4& value) const {
        if (ImGui::CollapsingHeader(name))
        {
            ImGui::Text("(%g, %g, %g, %g)", value.r1.v[0], value.r1.v[1], value.r1.v[2], value.r1.v[3]);
            ImGui::Text("(%g, %g, %g, %g)", value.r2.v[0], value.r2.v[1], value.r2.v[2], value.r2.v[3]);
            ImGui::Text("(%g, %g, %g, %g)", value.r3.v[0], value.r3.v[1], value.r3.v[2], value.r3.v[3]);
            ImGui::Text("(%g, %g, %g, %g)", value.r4.v[0], value.r4.v[1], value.r4.v[2], value.r4.v[3]);
        }
    }

    void operator()(const UniformType& value) const
    {
        reshade::log::message(reshade::log::level::error, "Tried to watch unknown uniform type!");
    }
};

static void shaders_reloaded(effect_runtime* runtime)
{
    char dummy[1] = { 0 };
#if defined RFX_GAME_GTAV
    if (!runtime->get_preprocessor_definition("GTAV", dummy)) {
        LOG("Injecting preprocessor definition for game");
        runtime->set_preprocessor_definition("GTAV", "GTAV");
    }
#elif defined RFX_GAME_RDR1
    if (!runtime->get_preprocessor_definition("RDR1", dummy)) {
        LOG("Injecting preprocessor definition for game");
        runtime->set_preprocessor_definition("RDR1", "RDR1");
    }
#endif;
}

static void reload_timecycle()
{
    reshade::log::message(reshade::log::level::info, "(Re)loading timecycle xml!");
    data_source->load_timecycle();
}

// Print the uniforms to the addon page for debugging
static void draw_uniforms(reshade::api::effect_runtime*)
{
    const bool enabled = DataReader::get_enabled();

    if (!enabled || data_source == NULL) {
        ImGui::Text("Waiting for game data...");

        return;
    }

    if (ImGui::CollapsingHeader("Camera"))
    {
        const auto& pos = DataReader::get_camera_pos();
        const auto& rot = DataReader::get_camera_rot();
        const auto& dpos = DataReader::get_delta_camera_pos();
        const auto& drot = DataReader::get_delta_camera_rot();
        const auto& fov = DataReader::get_camera_fov();
        const auto& nearc = DataReader::get_near_clip();
        const auto& farc = DataReader::get_far_clip();
        const bool depthr = DataReader::get_depth_reversed();

        ImGui::Text("Position: (%g, %g, %g)", pos.v[0], pos.v[1], pos.v[2]);
        ImGui::Text("Rotation: (%g, %g, %g)", rot.v[0], rot.v[1], rot.v[2]);
        ImGui::Text("Delta Position: (%g, %g, %g)", dpos.v[0], dpos.v[1], dpos.v[2]);
        ImGui::Text("Delta Rotation: (%g, %g, %g)", drot.v[0], drot.v[1], drot.v[2]);
        ImGui::Text("FOV: %g", fov);
        ImGui::Text("Near Clip: %g", nearc);
        ImGui::Text("Far Clip: %g", farc);
        ImGui::Text("Depth Reversed: %s", depthr ? "true" : "false");
    }

    if (ImGui::CollapsingHeader("Scene"))
    {
        const auto& timed = DataReader::get_time_of_day();
        const auto& timer = DataReader::get_timer();
        const auto& windd = DataReader::get_wind_dir();
        const auto& winds = DataReader::get_wind_speed();
        const auto& windp = DataReader::get_wind_pos();
        const auto& moon = DataReader::get_moon_dir();
        const float aurora = DataReader::get_aurora_visibility();

        float clock = timed * 24.0f;
        unsigned short int hours = static_cast<unsigned short int>(std::floorf(clock));
        unsigned short int minutes = static_cast<unsigned short int>(std::floorf((clock - static_cast<float>(hours)) * 60.0f));

        ImGui::Text("Time of Day: %02u:%02u (%g)", hours, minutes, timed);
        ImGui::Text("Time elapsed: %g", timer);
        ImGui::Text("Wind Direction: (%g, %g)", windd.v[0], windd.v[1]);
        ImGui::Text("Wind Speed: %g", winds);
        ImGui::Text("Wind Position: (%g, %g)", windp.v[0], windp.v[1]);
        ImGui::Text("Moon Direction: (%g, %g, %g)", moon.v[0], moon.v[1], moon.v[2]);
        ImGui::Text("Aurora Visibility: %g", aurora);
    }
    if (ImGui::CollapsingHeader("View Matrix"))
    {
        const auto& view = DataReader::get_view_matrix();

        ImGui::Text("(%g, %g, %g, %g)", view.r1.v[0], view.r1.v[1], view.r1.v[2], view.r1.v[3]);
        ImGui::Text("(%g, %g, %g, %g)", view.r2.v[0], view.r2.v[1], view.r2.v[2], view.r2.v[3]);
        ImGui::Text("(%g, %g, %g, %g)", view.r3.v[0], view.r3.v[1], view.r3.v[2], view.r3.v[3]);
        ImGui::Text("(%g, %g, %g, %g)", view.r4.v[0], view.r4.v[1], view.r4.v[2], view.r4.v[3]);
    }

    if (ImGui::CollapsingHeader("Projection Matrix"))
    {
        const auto& proj = DataReader::get_proj_matrix();

        ImGui::Text("(%g, %g, %g, %g)", proj.r1.v[0], proj.r1.v[1], proj.r1.v[2], proj.r1.v[3]);
        ImGui::Text("(%g, %g, %g, %g)", proj.r2.v[0], proj.r2.v[1], proj.r2.v[2], proj.r2.v[3]);
        ImGui::Text("(%g, %g, %g, %g)", proj.r3.v[0], proj.r3.v[1], proj.r3.v[2], proj.r3.v[3]);
        ImGui::Text("(%g, %g, %g, %g)", proj.r4.v[0], proj.r4.v[1], proj.r4.v[2], proj.r4.v[3]);
    }

    if (ImGui::CollapsingHeader("Inverse View Matrix"))
    {
        const auto& iview = DataReader::get_inv_view_matrix();

        ImGui::Text("(%g, %g, %g, %g)", iview.r1.v[0], iview.r1.v[1], iview.r1.v[2], iview.r1.v[3]);
        ImGui::Text("(%g, %g, %g, %g)", iview.r2.v[0], iview.r2.v[1], iview.r2.v[2], iview.r2.v[3]);
        ImGui::Text("(%g, %g, %g, %g)", iview.r3.v[0], iview.r3.v[1], iview.r3.v[2], iview.r3.v[3]);
        ImGui::Text("(%g, %g, %g, %g)", iview.r4.v[0], iview.r4.v[1], iview.r4.v[2], iview.r4.v[3]);
    }

    if (ImGui::CollapsingHeader("Inverse Projection Matrix"))
    {
        const auto& iproj = DataReader::get_inv_proj_matrix();

        ImGui::Text("(%g, %g, %g, %g)", iproj.r1.v[0], iproj.r1.v[1], iproj.r1.v[2], iproj.r1.v[3]);
        ImGui::Text("(%g, %g, %g, %g)", iproj.r2.v[0], iproj.r2.v[1], iproj.r2.v[2], iproj.r2.v[3]);
        ImGui::Text("(%g, %g, %g, %g)", iproj.r3.v[0], iproj.r3.v[1], iproj.r3.v[2], iproj.r3.v[3]);
        ImGui::Text("(%g, %g, %g, %g)", iproj.r4.v[0], iproj.r4.v[1], iproj.r4.v[2], iproj.r4.v[3]);
    }

    if (ImGui::CollapsingHeader("Timecycle"))
    {
        const auto& wfrom = (int)DataReader::get_from_weather_type();
        const auto& wto = (int)DataReader::get_to_weather_type();
        const auto& wtrans = DataReader::get_weather_transition();
        const auto& wregion = DataReader::get_region();
        const auto& wframe = DataReader::get_weather_frame();
        const int color_flags = (
            ImGuiColorEditFlags_NoPicker |
            ImGuiColorEditFlags_NoOptions |
            ImGuiColorEditFlags_NoLabel |
            ImGuiColorEditFlags_NoDragDrop |
            ImGuiColorEditFlags_AlphaPreviewHalf |
            ImGuiColorEditFlags_HDR |
            ImGuiColorEditFlags_Float
            );

        ImGui::Text(
            "Weather State: %s->%s (%s) %g%%",
            std::string(data_source->get_weather_name(wfrom)).c_str(),
            std::string(data_source->get_weather_name(wto)).c_str(),
            std::string(data_source->get_region_name(wregion)).c_str(),
            wtrans * 100.0
        );

        for (const auto& variable : wframe.colors) {
            ImGui::Text("%s: ", variable.first.c_str());
            ImGui::SameLine(ImGui::GetWindowWidth() - 225);
            ImGui::ColorEdit4(variable.first.c_str(), const_cast<float*>(variable.second.v), color_flags);
        }

        for (const auto& variable : wframe.floats) {
            ImGui::Text("%s: %g", variable.first.c_str(), variable.second);
        }
    }

    const auto& watchlist = data_source->debug_get_watch_list();

    if (!watchlist.empty() && ImGui::CollapsingHeader("Debug")) {
        for (const auto& variable : watchlist) {
            std::visit(DebugWatchVisitor{ variable.first.c_str() }, variable.second);
        }
    }

    if (ImGui::Button("Reload Timecycle XML")) {
        reload_timecycle();
    }

    if (ImGui::Button("Change wind")) {
        DataReader::force_change_wind();
    }

    // -------------------------------------------------------------------------
    // Pulse V Clouds customisation UI
    //
    // Expose controls for editing volumetric cloud parameters per weather and
    // time segment. These settings are applied by the addon rather than the
    // shader to avoid hundreds of uniforms being emitted directly in the
    // ReShade configuration. When expanded the user can choose a weather
    // preset and time segment, then adjust the 22 parameters for each
    // cloud layer via sliders. The ranges for each slider are derived from
    // the original preset definitions and augmented where necessary.
    if (ImGui::CollapsingHeader("Pulse V Clouds"))
    {
        init_pulsev_params();
        // Weather selector
        ImGui::Combo("Weather", &selectedWeather, weatherNames, WEATHER_COUNT);
        // Time segment selector
        ImGui::Combo("Time", &selectedTimeSegment, timeSegmentLabels, TIME_SEGMENT_COUNT);

        // Display the current game time and active segment for reference. This
        // helps users pick the correct segment to edit. When the DataReader
        // isn't enabled yet, the time will default to 00:00 and segment 0.
        {
            float tod = DataReader::get_time_of_day();
            // Convert to hours and minutes
            float clock = tod * 24.0f;
            int hours = static_cast<int>(std::floor(clock));
            int minutes = static_cast<int>(std::floor((clock - hours) * 60.0f));
            int seg = get_time_segment(tod);
            ImGui::Text("Current time: %02d:%02d (segment %s)", hours, minutes, timeSegmentLabels[seg]);
        }


        // Display current weather transition and which preset we are editing

                // Display current weather transition and which preset we are editing
        {
            int wfrom = DataReader::get_from_weather_type();
            int wto = DataReader::get_to_weather_type();
            float wtrans = DataReader::get_weather_transition();
            // Clamp indices defensively
            wfrom = (wfrom < 0 || wfrom >= WEATHER_COUNT) ? 0 : wfrom;
            wto = (wto < 0 || wto >= WEATHER_COUNT) ? 0 : wto;
            ImGui::Text("Current weather: %s -> %s (%.0f%%)  |  Editing: %s",
                weatherNames[wfrom], weatherNames[wto], wtrans * 100.0f, weatherNames[selectedWeather]);
        }

        // Save/Load/Reset buttons
        {

            if (ImGui::Button("Save Preset"))
            {
                save_preset();
            }
            ImGui::SameLine();
            if (ImGui::Button("Reset Segment"))
            {
                reset_selected_segment();
            }
        }

        // Display layer parameters
        if (ImGui::TreeNode("Bottom Layer"))
        {
            for (int p = 0; p < PARAM_COUNT; ++p)
            {
                // Build a unique label for the slider by appending the layer name
                std::string label = std::string(paramNames[p]) + "##pv_bottom";
                float* valuePtr = &weatherTimeParams[selectedWeather][selectedTimeSegment][0][p];
                // Slider + nudges + per-parameter default
                ImGui::SliderFloat(label.c_str(), valuePtr, paramMin[p], paramMax[p]);
                ImGui::SameLine();
                if (ImGui::ArrowButton(std::string("##pv_bottom_dec_").append(std::to_string(p)).c_str(), ImGuiDir_Left))
                {
                    const float step = (paramMax[p] - paramMin[p]) * 0.01f;
                    *valuePtr = std::max(paramMin[p], *valuePtr - step);
                }
                ImGui::SameLine();
                if (ImGui::ArrowButton(std::string("##pv_bottom_inc_").append(std::to_string(p)).c_str(), ImGuiDir_Right))
                {
                    const float step = (paramMax[p] - paramMin[p]) * 0.01f;
                    *valuePtr = std::min(paramMax[p], *valuePtr + step);
                }
                ImGui::SameLine();
                if (ImGui::SmallButton(std::string("Default##pv_bottom_").append(std::to_string(p)).c_str()))
                {
                    *valuePtr = defaultWeatherParams[selectedWeather][0][p];
                }
            }
            ImGui::TreePop();
        }
        if (ImGui::TreeNode("Top Layer"))
        {
            for (int p = 0; p < PARAM_COUNT; ++p)
            {
                std::string label = std::string(paramNames[p]) + "##pv_top";
                float* valuePtr = &weatherTimeParams[selectedWeather][selectedTimeSegment][1][p];
                // Slider + nudges + per-parameter default
                ImGui::SliderFloat(label.c_str(), valuePtr, paramMin[p], paramMax[p]);
                ImGui::SameLine();
                if (ImGui::ArrowButton(std::string("##pv_top_dec_").append(std::to_string(p)).c_str(), ImGuiDir_Left))
                {
                    const float step = (paramMax[p] - paramMin[p]) * 0.01f;
                    *valuePtr = std::max(paramMin[p], *valuePtr - step);
                }
                ImGui::SameLine();
                if (ImGui::ArrowButton(std::string("##pv_top_inc_").append(std::to_string(p)).c_str(), ImGuiDir_Right))
                {
                    const float step = (paramMax[p] - paramMin[p]) * 0.01f;
                    *valuePtr = std::min(paramMax[p], *valuePtr + step);
                }
                ImGui::SameLine();
                if (ImGui::SmallButton(std::string("Default##pv_top_").append(std::to_string(p)).c_str()))
                {
                    *valuePtr = defaultWeatherParams[selectedWeather][1][p];
                }
            }
            ImGui::TreePop();
        }
    }
}

/**
* Addon management
**/

static void startup(device* device)
{
    reload_timecycle();
}

static void register_addon(HMODULE hModule)
{
    reshade::log::message(reshade::log::level::info, "Loading game data");

#if defined RFX_GAME_GTAV
    data_source = new GTAV::GTAVSource();
#elif defined RFX_GAME_RDR1
    data_source = new RDR1::RDR1Source();
#endif

    DataReader::register_data_reader(hModule, data_source);

    return;
}

static void unregister_addon(HMODULE hModule)
{
    DataReader::unregister_data_reader(hModule);

    delete data_source;
}

// Metadata for addon
extern "C" __declspec(dllexport) const char* NAME = "PulseV";
extern "C" __declspec(dllexport) const char* DESCRIPTION = "PulseV Reshade Helper Script 2025 ©";

// Entry point for addon
static std::atomic_bool g_reshade_registered{ false };

// Initialize and register the addon with ReShade. This is called from a
// background thread so that it can be used both when loaded as a ReShade
// `.addon64` (where ReShade is already present) and when loaded as an ASI
// (where ReShade may not yet have injected into the process).
static bool PulseV_InitReShadeAddon(HMODULE hModule)
{
    if (g_reshade_registered.load())
        return true;

    // Try to register with ReShade. This will fail (return false) if the
    // ReShade module is not present yet or the build does not include
    // add-on support.
    if (!reshade::register_addon(hModule))
        return false;

    // Register addon events
    reshade::register_event<reshade::addon_event::init_device>(startup);
    reshade::register_event<reshade::addon_event::init_swapchain>(on_init_swapchain);
    reshade::register_event<reshade::addon_event::reshade_begin_effects>(inject_uniforms);
    reshade::register_event<reshade::addon_event::reshade_reloaded_effects>(shaders_reloaded);

    reshade::register_overlay(nullptr, draw_uniforms);

#if defined RFX_GAME_GTAV
    register_depth_switcher();
#endif

    // Internal game-data wiring
    register_addon(hModule);

    g_reshade_registered.store(true);
    return true;
}

static void PulseV_ShutdownReShadeAddon(HMODULE hModule)
{
    if (!g_reshade_registered.load())
        return;

    // Unregister addon events and tear down game-specific hooks
    reshade::unregister_addon(hModule);
    reshade::unregister_event<reshade::addon_event::init_device>(startup);
    reshade::unregister_event<reshade::addon_event::init_swapchain>(on_init_swapchain);
    reshade::unregister_event<reshade::addon_event::reshade_begin_effects>(inject_uniforms);
    reshade::unregister_event<reshade::addon_event::reshade_reloaded_effects>(shaders_reloaded);
    
#if defined RFX_GAME_GTAV
    unregister_depth_switcher();
#endif

    // Internal game-data teardown
    unregister_addon(hModule);

    g_reshade_registered.store(false);
}

// Bootstrap thread that keeps trying to register with ReShade until it
// succeeds. This allows the module to be loaded as an ASI before ReShade
// has injected into the process.
static DWORD WINAPI PulseV_BootstrapThread(LPVOID param)
{
    HMODULE self = static_cast<HMODULE>(param);

    for (;;)
    {
        if (PulseV_InitReShadeAddon(self))
            break;

        // ReShade not ready yet; avoid hammering the loader.
        Sleep(1000);
    }

    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD fdwReason, LPVOID)
{
    switch (fdwReason)
    {
    case DLL_PROCESS_ATTACH:
        // Do not receive thread attach/detach notifications.
        DisableThreadLibraryCalls(hModule);

        // Kick off the ReShade registration in a separate thread so we do not
        // do any heavy work while the loader lock is held, and so we can
        // gracefully handle the case where ReShade is injected after this
        // module (e.g. when built and loaded as an ASI).
        {
            const HANDLE hThread = CreateThread(nullptr, 0, &PulseV_BootstrapThread, hModule, 0, nullptr);
            if (hThread != nullptr)
                CloseHandle(hThread);
        }
        break;

    case DLL_PROCESS_DETACH:
        PulseV_ShutdownReShadeAddon(hModule);
        break;
    }

    return TRUE;
}
