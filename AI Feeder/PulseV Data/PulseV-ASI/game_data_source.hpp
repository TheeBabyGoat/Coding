#pragma once

#include <string_view>
#include <string>
#include "types.hpp"
#include "timecycle.hpp"
#include <unordered_map>

using UniformType = std::variant<bool, int, float, Float2, Float3, Float4, Float4x4, TimeCycle::WeatherFrame>;

class DataSource
{
public:
    virtual const bool get_depth_reversed() = 0;

    virtual const std::string_view get_region_name(int region) = 0;
    virtual const std::string_view get_weather_name(int weather) = 0;

    virtual const UInt2 get_resolution() = 0;
    virtual const Float3 get_cam_pos() = 0;
    virtual const Float3 get_cam_rot() = 0;
    virtual const float get_cam_fov() = 0;
    virtual const float get_cam_near_clip() = 0;
    virtual const float get_cam_far_clip() = 0;

    virtual const Float3 get_wind_dir() = 0;
    virtual const float get_wind_speed() = 0;
    virtual const float get_time() = 0;

    virtual const int get_region(const Float3& pos) = 0;
    virtual const int get_weather_from() = 0;
    virtual const int get_weather_to() = 0;
    virtual const float get_weather_transition() = 0;
    virtual const TimeCycle::WeatherFrame get_weather_frame(TimeCycle::RegionalWeather& from, TimeCycle::RegionalWeather& to, float time, float transition_progress) = 0;
    virtual const bool get_aurora_visibility() = 0;
    virtual const Float3 get_moon_dir() = 0;

    virtual void load_timecycle() = 0;
    virtual void wait(DWORD time) = 0;
    virtual void update() = 0;

    virtual void register_script(HMODULE hModule, void(*entry)()) = 0;
    virtual void unregister_script(HMODULE hModule) = 0;

    const void debug_watch(std::string name, UniformType val);
    const std::unordered_map<std::string, UniformType>& debug_get_watch_list();
};
