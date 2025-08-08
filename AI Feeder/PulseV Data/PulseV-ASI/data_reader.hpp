/*
 * Copyright (C) 2025 Matthew Burrows (anti-matt-er)
 * SPDX-License-Identifier: BSD-3-Clause OR MIT
 */

#pragma once

#define _USE_MATH_DEFINES

#include <format>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "eigen/Dense"
#include "game_data_source.hpp"
#include "types.hpp"
#include "util.hpp"

class DataSource;

class DataReader
{
public:
    static void fast_update();
    static void script_main();

    static void register_data_reader(HMODULE hModule, DataSource* source);
    static void unregister_data_reader(HMODULE hModule);

    static const bool& get_enabled();
    static const bool& get_depth_reversed();

    static const Float4x4& get_view_matrix();
    static const Float4x4& get_proj_matrix();
    static const Float4x4& get_inv_view_matrix();
    static const Float4x4& get_inv_proj_matrix();
    static const Float4x4& get_prev_view_matrix();
    static const Float4x4& get_prev_proj_matrix();
    static const Float4x4& get_prev_inv_view_matrix();
    static const Float4x4& get_prev_inv_proj_matrix();

    static const Float3& get_camera_pos();
    static const Float3& get_camera_rot();
    static const Float3& get_delta_camera_pos();
    static const Float3& get_delta_camera_rot();

    static const float& get_near_clip();
    static const float& get_far_clip();
    static const float& get_camera_fov();

    static const Float3& get_wind_dir();
    static const float& get_time_of_day();

    static const TimeCycle::WeatherFrame& get_weather_frame();
    static const int& get_from_weather_type();
    static const int& get_to_weather_type();
    static const int& get_region();
    static const float& get_weather_transition();
    static const float& get_aurora_visibility();
    static const Float3& get_moon_dir();
};

extern "C" const GameStateData* get_game_state_data();