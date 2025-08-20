/*
------------------------------------------------------------------------------
    timecycle.hpp
    Core Timecycle Interpolation System

    Overview:
    ---------
    Declares the `TimeCycle` system, a general-purpose framework for reading,
    interpolating, and blending time-of-day environmental values used in
    games like GTA V and RDR1.

    Structure:
    ----------
      • Variable:
          - Represents scalar values changing over time (e.g., light intensity).
          - Supports interpolation and transition blending.
      • ColorVariable:
          - RGBA time-varying value (built from 4 `Variable`s).
      • WeatherFrame:
          - Snapshot of floats and color variables at a given time.
      • WeatherCycle:
          - Full 24-hour representation of all variables for a given weather+region pair.
      • RegionalWeather:
          - Identifies a specific weather and region combination.

    Responsibilities:
    -----------------
      • Parse XML-based timecycle definitions.
      • Construct time-varying environmental variables.
      • Provide per-frame and blended `WeatherFrame` values.
      • Support override mechanisms and robust defaults.

    Static Helpers:
    ---------------
      • `get_xml_doc_from_filename()` – attempts to load override or fallback XML.
      • Uses tinyxml2 for XML parsing.
      • Paths:
          - Default:   \PulseV\timecycle\default\
          - Override:  \PulseV\timecycle\override\

    Constants:
    ----------
      • DEFAULT_VALUE   = 1.0
      • HOURS           = 24
      • DEFAULT_PATH    = "\\PulseV\\timecycle\\default\\"
      • OVERRIDE_PATH   = "\\PulseV\\timecycle\\override\\"

    Notes:
    ------
      • Call `load()` in subclass to populate `timecycles` from XML.
      • `get_weather_frame()` provides final frame after interpolation and blending.
      • `RegionalWeather` is comparable for use in std::map keys.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/

#pragma once

#include <string>
#include <vector>
#include <map>
#include <filesystem>
#include "tinyxml2.h"
#include "types.hpp"
#include "util.hpp"


constexpr float DEFAULT_VALUE = 1.0;
constexpr size_t HOURS = 24;
constexpr std::string_view DEFAULT_PATH = "\\PulseV\\timecycle\\default\\";
constexpr std::string_view OVERRIDE_PATH = "\\PulseV\\timecycle\\override\\";


struct TimeCycle
{
	struct Variable
	{
		std::vector<float> frames;
		std::vector<float> values;

		static const Variable Default();
		static const Variable Single(float value);

		const float get_value(float time) const;
		const float get_transition_value(const Variable &with, float time, float progress) const;
	};

	struct ColorVariable
	{
		Variable v[4];

		static const ColorVariable Default();
		static const ColorVariable Single(float r, float g, float b, float a);

		const Float4 get_value(float time) const;
		const Float4 get_transition_value(const ColorVariable &with, float time, float progress) const;
	};

	struct WeatherFrame
	{
		std::map<const std::string, float> floats;
		std::map<const std::string, Float4> colors;
	};

	struct WeatherCycle
	{
		std::map<const std::string, Variable> floats;
		std::map<const std::string, ColorVariable> colors;

		const WeatherFrame get_frame(float time) const;
		const WeatherFrame get_transition_frame(const WeatherCycle &with, float time, float progress) const;
	};

	struct RegionalWeather
	{
		int weather;
		int region;

		bool operator<(const RegionalWeather &with) const {
			return std::tie(weather, region) < std::tie(with.weather, with.region);
		}

		bool operator==(const RegionalWeather &with) const {
			return std::tie(weather, region) == std::tie(with.weather, with.region);
		}
	};

	std::map<RegionalWeather, WeatherCycle> timecycles;

	virtual void load() = 0;

	static bool get_xml_doc_from_filename(std::string filename, tinyxml2::XMLDocument *document);
	const WeatherFrame get_weather_frame(RegionalWeather &from, RegionalWeather &to, float time, float transition_progress) const;
};