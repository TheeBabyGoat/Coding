#pragma once

#include "game_data_source.hpp"
#include "gtav_timecycle.hpp"
#include "reshade_data.hpp"
#include "timecycle.hpp"
#include "types.hpp"

#ifdef RFX_GAME_GTAV
#include "scripthookv/inc/main.h"
#include "scripthookv/inc/nativeCaller.h"

#ifdef RFX_GAME_GTAV
namespace GTAV
{
    class GTAVSource : public DataSource
    {
    public:
        const bool get_depth_reversed() override;

        const std::string_view get_region_name(int region) override;
        const std::string_view get_weather_name(int weather) override;

        const UInt2 get_resolution() override;
        const Float3 get_cam_pos() override;
        const Float3 get_cam_rot() override;
        const float get_cam_fov() override;
        const float get_cam_near_clip() override;
        const float get_cam_far_clip() override;

        const Float3 get_wind_dir() override;
        const float get_wind_speed() override;
        const float get_time() override;

        const int get_region(const Float3& pos) override;
        const int get_weather_from() override;
        const int get_weather_to() override;
        const float get_weather_transition() override;

        const TimeCycle::WeatherFrame get_weather_frame(TimeCycle::RegionalWeather& from, TimeCycle::RegionalWeather& to, float time, float transition_progress) override;
        const bool get_aurora_visibility() override;
        const Float3 get_moon_dir() override;

        void load_timecycle() override;
        void wait(DWORD time) override;
        void update() override;

        void register_script(HMODULE hModule, void(*entry)()) override;
        void unregister_script(HMODULE hModule) override;

    private:
        TimeCycle timecycle;
    };
}
#endif