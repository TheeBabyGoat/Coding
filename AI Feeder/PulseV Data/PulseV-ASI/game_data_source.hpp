/*
------------------------------------------------------------------------------
    game_data_source.hpp
    Abstract Data Source Interface for Game State
    Part of the PulseV ASI project

    Overview:
    ---------
    Declares the DataSource struct, an abstract interface for retrieving
    game-specific state data. Concrete implementations provide access to
    camera transforms, environmental variables, weather systems, and timing,
    which are consumed by the PulseV DataReader and related subsystems.

    Key Points:
    -----------
      • Camera state:
          - get_cam_pos(), get_cam_rot(), get_cam_fov()
          - get_cam_near_clip(), get_cam_far_clip()
          - get_resolution()
      • Depth:
          - get_depth_reversed() reports reversed-Z convention.
      • Environment:
          - get_wind_dir(), get_wind_speed(), get_time()
          - get_region(pos) for regional lookup
          - get_moon_dir()
          - get_water_height(pos) with a default fallback implementation.
      • Weather system:
          - get_weather_from(), get_weather_to()
          - get_weather_transition()
          - get_weather_frame() (returns interpolated TimeCycle frame)
          - get_weather_name(), get_region_name()
          - get_aurora_visibility()
      • Script integration:
          - load_timecycle(), wait(), update()
          - register_script() / unregister_script() to bind/unbind as a ScriptHookV script.

    Purpose:
    --------
      • Provide a unified interface to abstract game-specific data retrieval
        across multiple titles (e.g., GTAV, RDR1, NVE).
      • Decouple the DataReader implementation from game engine internals.
      • Allow swapping in mock or test data sources for development/debugging.

    Notes:
    ------
      • All getters are pure virtual except get_water_height(), which has a
        default no-op implementation.
      • Designed to be implemented per game with engine-native accessors.
      • Consumers should treat all returned values as read-only snapshots.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once

#include <string_view>
#include <string>
#include "types.hpp"
#include "timecycle.hpp"


struct DataSource
{
	const virtual std::string_view get_region_name(int region) = 0;
	const virtual std::string_view get_weather_name(int weather) = 0;

	const virtual bool get_depth_reversed() = 0;
	const virtual UInt2 get_resolution() = 0;
	const virtual Float3 get_cam_pos() = 0;
	const virtual Float3 get_cam_rot() = 0;
	const virtual float get_cam_fov() = 0;
	const virtual float get_cam_near_clip() = 0;
	const virtual float get_cam_far_clip() = 0;
	const virtual Float3 get_wind_dir() = 0;
	const virtual float get_wind_speed() = 0;
	const virtual float get_time() = 0;
	const virtual int get_region(const Float3 &pos) = 0;
	const virtual int get_weather_from() = 0;
	const virtual int get_weather_to() = 0;
	const virtual float get_weather_transition() = 0;
	const virtual TimeCycle::WeatherFrame get_weather_frame(TimeCycle::RegionalWeather &from, TimeCycle::RegionalWeather &to, float time, float transition_progress) = 0;
	const virtual bool get_aurora_visibility() = 0;
	const virtual Float3 get_moon_dir() = 0;
	virtual const float get_water_height(const Float3& pos) { return 0.0f; }

	virtual void load_timecycle() = 0;
	virtual void wait(DWORD time) = 0;
	virtual void update() = 0;
	virtual void register_script(HMODULE hModule, void(*entry)()) = 0;
	virtual void unregister_script(HMODULE hModule) = 0;
};
