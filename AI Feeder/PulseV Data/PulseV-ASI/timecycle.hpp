#pragma once

#include <string>
#include <vector>
#include <map>
#include <filesystem>
#include "tinyxml2.h"
#include "types.hpp"
#include "util.hpp"

namespace TimeCycle
{
    struct Variable {
        std::vector<float> frames;
        std::vector<float> values;
        static const float DEFAULT_VALUE = 0.0f;

        static const Variable Default();
        static const Variable Single(float value);

        const float get_value(float time) const;
        const float get_transition_value(const Variable& with, float time, float progress) const;
    };

    struct ColorVariable {
        Variable v[4];

        static const ColorVariable Default();
        static const ColorVariable Single(float r, float g, float b, float a);

        const Float4 get_value(float time) const;
        const Float4 get_transition_value(const ColorVariable& with, float time, float progress) const;
    };

    struct WeatherFrame {
        std::map<std::string, float> floats;
        std::map<std::string, Float4> colors;
    };

    struct RegionalWeather {
        int weather_type;
        int region;

        bool operator<(const RegionalWeather& other) const {
            return std::tie(weather_type, region) < std::tie(other.weather_type, other.region);
        }
        bool operator==(const RegionalWeather& other) const {
            return weather_type == other.weather_type && region == other.region;
        }

        std::string to_string() const {
            return std::to_string(weather_type) + "_" + std::to_string(region);
        }
    };

    struct WeatherCycle {
        std::map<std::string, Variable> floats;
        std::map<std::string, ColorVariable> colors;

        const WeatherFrame get_frame(float time) const;
        const WeatherFrame get_transition_frame(const WeatherCycle& with, float time, float progress) const;
    };

    class TimeCycle {
    public:
        std::map<RegionalWeather, WeatherCycle> timecycles;

        const WeatherFrame get_weather_frame(RegionalWeather& from, RegionalWeather& to, float time, float transition_progress) const;
        bool get_xml_doc_from_filename(std::string filename, tinyxml2::XMLDocument* document);
        void load();
    };
}