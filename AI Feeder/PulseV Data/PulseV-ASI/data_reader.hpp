/*
------------------------------------------------------------------------------
    DataReader.hpp
    Game Data Reader Interface
    Part of the PulseV ASI project

    Overview:
    ---------
    This header declares the interface for the DataReader namespace, which
    provides access to real-time game state via a ScriptHookV-compatible
    DataSource. It exposes camera transforms, environmental parameters,
    and weather conditions for use by the PulseV runtime and overlays.

    Key Points:
    -----------
      • Provides const-reference getters for:
          - Camera matrices (view, projection, inverse, previous).
          - Camera position, rotation, delta movement, FOV, near/far clip.
          - Wind direction, time-of-day, and moon direction.
          - Weather frame, transition factors, and aurora visibility.
          - Region ID and water height at camera position.
      • Contains lifecycle functions for ScriptHookV integration:
          - fast_update()   : Lightweight per-frame refresh (used in some titles).
          - script_main()   : Main update loop entry point.
          - register/unregister_data_reader() for binding/unbinding scripts.
      • Uses Eigen for matrix math and ReShade headers for logging support.
      • Interfaces with GameDataSource abstraction to fetch raw game data.

    Purpose:
    --------
      • To centralize game state access in a clean, C++-friendly interface.
      • To provide external modules (shaders, overlays, analytics tools) with
        a stable, read-only snapshot of game state each frame.
      • To bridge ScriptHookV scripting and PulseV systems with minimal overhead.

    Notes:
    ------
      • All getters return references to internal static state; values remain
        valid until the next update tick.
      • Designed for read-only reflection of game state — does not modify the game.
      • Header-only declarations; implementation resides in DataReader.cpp.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once
#define _USE_MATH_DEFINES

#include <format>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "eigen/Dense"
#include "game_data_source.hpp"
#include "reshade.hpp"
#include "types.hpp"
#include "util.hpp"

namespace DataReader {
	const bool &get_enabled();
	const bool &get_depth_reversed();
	const Float4x4 &get_view_matrix();
	const Float4x4 &get_proj_matrix();
	const Float4x4 &get_inv_view_matrix();
	const Float4x4 &get_inv_proj_matrix();
	const Float4x4 &get_prev_view_matrix();
	const Float4x4 &get_prev_proj_matrix();
	const Float4x4 &get_prev_inv_view_matrix();
	const Float4x4 &get_prev_inv_proj_matrix();
	const Float3 &get_camera_pos();
	const Float3 &get_camera_rot();
	const Float3 &get_delta_camera_pos();
	const Float3 &get_delta_camera_rot();
	const float &get_near_clip();
	const float &get_far_clip();
	const float &get_camera_fov();
	const Float3 &get_wind_dir();
	const float &get_time_of_day();
	const TimeCycle::WeatherFrame &get_weather_frame();
	const int &get_from_weather_type();
	const int &get_to_weather_type();
	const float &get_weather_transition();
	const int &get_region();
	const float &get_aurora_visibility();
	const Float3 &get_moon_dir();
	const float& get_water_height();

	void fast_update();
	void script_main();
	void register_data_reader(HMODULE hModule, DataSource *source);
	void unregister_data_reader(HMODULE hModule);
}
