/*
------------------------------------------------------------------------------
	main.cpp  (entry module for PulseV Addon) 
    PulseV Development Test Entry Points
    Part of the PulseV ASI project
	
	Overview:
	---------
	This file defines the addon entry logic and contains utilities
	for translating GTA V (or other game) timecycle weather data into
	HDR volumetric lighting parameters suitable for ReShade integration.

	Key Components:
	---------------
	• DataSource Pointer:
		- Global `data_source` provides access to game-specific data
		  (camera, weather, depth, etc.).
		- `staged_uniforms` holds prepared uniform values staged for
		  injection into shaders.

	• VolumetricLightingParams:
		- Container struct describing HDR volumetric lighting inputs.
		- Includes directional sun color/intensity, ambient light, and
		  scattering color.

	• ConvertTimecycleToVolumetric:
		- Converts a `TimeCycle::WeatherFrame` into usable lighting
		  parameters for shaders.
		- Performs gamma-to-linear correction for colors.
		- Includes crash-proof safety checks and fallbacks.
		- Logs warnings when required keys are missing or the frame is
		  empty, substituting safe defaults.

	Safety & Error Handling:
	------------------------
	• If a WeatherFrame is missing or incomplete, logs a warning and
	  defaults to conservative lighting values.
	• Ensures values are clamped to sane ranges:
		- sunMult clamped [0, 8]
		- ambMult clamped [0, 2]
	• Linear interpolation (std::lerp) scales intensities into HDR ranges.

	Purpose:
	--------
	• Provides a safe, consistent way to convert GTA V’s (or similar
	  engine’s) timecycle weather data into HDR-friendly volumetric
	  lighting values.
	• Bridges the game’s internal state with shader-side uniforms.

	Notes:
	------
	• `GammaToLinear` approximates sRGB → linear space conversion.
	• Scattering color is mixed 70% from sun, 30% from ambient.
	• Future work may expand with moonlight, sky radiance, or additional
	  weather-driven variables.

	License:
	--------
	Internal development code – distribution subject to project license terms.

	Copyright (C) 2025 Matthew Burrows (anti-matt-er)
	SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#include "main.hpp"		// This will eventually be renamed to "main.cpp"


constexpr size_t MAX_UNIFORM_NAME = 48;

static DataSource* data_source;
std::unordered_map<std::string, UniformType> staged_uniforms;

/**
* HDR VOLUMETRIC LIGHTING CONVERSION
**/

struct VolumetricLightingParams {
	Float3 sunColor;
	float sunIntensity;
	Float3 ambientColor;
	float ambientIntensity;
	Float3 scatteringColor;
};

// Crash-proof conversion for WeatherFrame
static VolumetricLightingParams ConvertTimecycleToVolumetric(const TimeCycle::WeatherFrame& wf) {
	VolumetricLightingParams out{};

	// Early exit if empty
	if (wf.colors.empty() || wf.floats.empty()) {
		reshade::log::message(reshade::log::level::warning,
			"WeatherFrame data is empty! Using default volumetric lighting values.");
		out.sunColor = { 1.0f, 1.0f, 1.0f };
		out.sunIntensity = 50000.0f;
		out.ambientColor = { 0.5f, 0.5f, 0.5f };
		out.ambientIntensity = 5000.0f;
		out.scatteringColor = { 0.8f, 0.8f, 0.8f };
		return out;
	}

	auto GammaToLinear = [](Float3 c) -> Float3 {
		return { powf(c.v[0], 2.2f), powf(c.v[1], 2.2f), powf(c.v[2], 2.2f) };
		};

	auto safe_get_color = [](const auto& map, const char* key, float fallback) -> float {
		auto it = map.find(key);
		if (it == map.end()) {
			reshade::log::message(reshade::log::level::warning,
				("Missing color key in WeatherFrame: " + std::string(key)).c_str());
			return fallback;
		}
		return it->second.v[0];
		};

	auto safe_get_float = [](const auto& map, const char* key, float fallback) -> float {
		auto it = map.find(key);
		if (it == map.end()) {
			reshade::log::message(reshade::log::level::warning,
				("Missing float key in WeatherFrame: " + std::string(key)).c_str());
			return fallback;
		}
		return it->second;
		};

	Float3 dirColor = GammaToLinear({
		safe_get_color(wf.colors, "light_dir_col_r", 1.0f),
		safe_get_color(wf.colors, "light_dir_col_g", 1.0f),
		safe_get_color(wf.colors, "light_dir_col_b", 1.0f)
		});

	Float3 ambColor = GammaToLinear({
		safe_get_color(wf.colors, "light_directional_amb_col_r", 0.5f),
		safe_get_color(wf.colors, "light_directional_amb_col_g", 0.5f),
		safe_get_color(wf.colors, "light_directional_amb_col_b", 0.5f)
		});

	float sunMult = std::clamp(safe_get_float(wf.floats, "light_dir_mult", 4.0f), 0.0f, 8.0f);
	float ambMult = std::clamp(safe_get_float(wf.floats, "light_directional_amb_intensity", 1.0f), 0.0f, 2.0f);

	float sunIntensity = std::lerp(0.0f, 120000.0f, sunMult / 8.0f);
	float ambIntensity = std::lerp(1000.0f, 20000.0f, ambMult / 2.0f);

	Float3 scatteringColor = {
		dirColor.v[0] * 0.7f + ambColor.v[0] * 0.3f,
		dirColor.v[1] * 0.7f + ambColor.v[1] * 0.3f,
		dirColor.v[2] * 0.7f + ambColor.v[2] * 0.3f
	};

	out.sunColor = dirColor;
	out.sunIntensity = sunIntensity;
	out.ambientColor = ambColor;
	out.ambientIntensity = ambIntensity;
	out.scatteringColor = scatteringColor;

	return out;
}

