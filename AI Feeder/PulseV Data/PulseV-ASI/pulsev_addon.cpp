/*
------------------------------------------------------------------------------
    PulseV_Addon.cpp
    ReShade Addon Glue Layer for PulseV Runtime
    Compiled into PulseV.asi when PULSV_ENABLE_RESHADE is defined

    Overview:
    ---------
    This file acts as the glue between the PulseV data reader and the ReShade
    runtime. It stages and injects uniform values extracted from game memory
    (via `DataReader`) into shader variables annotated with `source=`.

    Also provides an interactive ImGui overlay displaying all exposed runtime
    state such as camera matrices, FOV, timecycle weather values, etc.

    Key Components:
    ---------------
      • Uniform System:
          - Staged with `stage_uniform(...)` and pushed with `commit_uniforms(...)`
          - Supports scalar types, Float2/3/4, Float4x4 (unpacked), and WeatherFrame
          - Safely handles missing annotations or unhandled types
          - Avoids ODR issues via static map in TU

      • Data Injection Hooks:
          - `inject_uniforms(...)`: called during reshade_begin_effects
              – Populates uniform variables from DataReader state
          - `shaders_reloaded(...)`: applies macro preprocessor definitions (GTAV/RDR1)
          - `startup(...)`: reloads timecycle XML during device init

      • ImGui Overlay:
          - `draw_uniforms_overlay(...)` draws collapsible UI panes for:
              • Camera state (pos, rot, FOV, clip planes)
              • Scene state (wind, time of day, aurora, moon direction)
              • View/projection matrices and their inverses
              • Timecycle parameters (float/color values per region/weather)
          - Reload button triggers timecycle XML refresh via DataSource

      • Data Reader Lifetime:
          - `RegisterPulseVDataSource(...)` creates a game-specific DataSource
              – Calls `DataReader::register_data_reader(...)`
          - `UnregisterPulseVDataSource(...)` deallocates and unregisters

    Purpose:
    --------
      • Allow shaders to access internal camera/environment data using only
        ReShade annotation tags (via `source=...`)
      • Provide visual debug UI for real-time inspection of extracted values
      • Support runtime control or overrides in development scenarios

    Notes:
    ------
      • This file is excluded from the .asi if PULSV_ENABLE_RESHADE is undefined.
      • Requires ReShade API headers and integration (reshade.hpp, etc.)
      • Uses ImGui for overlay; assumes it's loaded by ReShade.
      • Staging map is cleared each frame after `commit_uniforms`.

    License:
    --------
    Internal development code – distribution subject to project license terms.

    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/


#include "pulseV_addon.hpp"
#include <unordered_map>
#include <string>
#include <variant>
// #include <imgui.h> // use the one via pulsev_addon.hpp (imgui.h then reshade.hpp)

using namespace reshade::api;

constexpr size_t MAX_UNIFORM_NAME = 48;

// --- keep these internal to this translation unit ---
static DataSource* g_data_source = nullptr;
static bool g_reader_registered = false;

// Staged uniforms (internal -> avoids ODR/multiple definitions)
static std::unordered_map<std::string, UniformType> s_staged_uniforms;

/* ---------------- Uniform staging helpers ---------------- */

template <typename T>
static inline void stage_uniform(const std::string& annotation, const T& value)
{
    s_staged_uniforms[annotation] = UniformType(value);
}

template<>
inline void stage_uniform<Float4x4>(const std::string& annotation, const Float4x4& value)
{
    s_staged_uniforms[annotation + "__r1"] = value.r1;
    s_staged_uniforms[annotation + "__r2"] = value.r2;
    s_staged_uniforms[annotation + "__r3"] = value.r3;
    s_staged_uniforms[annotation + "__r4"] = value.r4;
}

template<>
inline void stage_uniform<TimeCycle::WeatherFrame>(const std::string& annotation, const TimeCycle::WeatherFrame& value)
{
    for (const auto& kv : value.floats)
        s_staged_uniforms[annotation + "_" + kv.first] = kv.second;

    for (const auto& kv : value.colors)
        s_staged_uniforms[annotation + "_" + kv.first] = kv.second;
}

struct UniformInjectionVisitor {
    effect_runtime* runtime;
    effect_uniform_variable& variable;

    void operator()(bool v)            const { runtime->set_uniform_value_bool(variable, &v, 1); }
    void operator()(int v)             const { runtime->set_uniform_value_int(variable, &v, 1); }
    void operator()(float v)           const { runtime->set_uniform_value_float(variable, &v, 1); }
    void operator()(const Float2& v)   const { runtime->set_uniform_value_float(variable, v.v, 2); }
    void operator()(const Float3& v)   const { runtime->set_uniform_value_float(variable, v.v, 3); }
    void operator()(const Float4& v)   const { runtime->set_uniform_value_float(variable, v.v, 4); }
    void operator()(const Float4x4&)   const { reshade::log::message(reshade::log::level::error, "Tried to inject Float4x4 without marshalling!"); }
    void operator()(const TimeCycle::WeatherFrame&) const { reshade::log::message(reshade::log::level::error, "Tried to inject WeatherFrame without marshalling!"); }
    void operator()(const UniformType&) const { reshade::log::message(reshade::log::level::error, "Tried to inject unknown uniform type!"); }
};

static inline void inject_uniform(effect_runtime* runtime, effect_uniform_variable& var, const UniformType& value)
{
    std::visit(UniformInjectionVisitor{ runtime, var }, value);
}

static void commit_uniforms(effect_runtime* runtime)
{
    runtime->enumerate_uniform_variables(nullptr, [](effect_runtime* rt, effect_uniform_variable var) {
        char annotation[MAX_UNIFORM_NAME] = { 0 };
        if (rt->get_annotation_string_from_uniform_variable(var, "source", annotation)) {
            auto it = s_staged_uniforms.find(annotation);
            if (it != s_staged_uniforms.end())
                inject_uniform(rt, var, it->second);
        }
        });
    s_staged_uniforms.clear();
}

/* ---------------- ReShade events you register from DllMain ---------------- */

// init_device
void startup(device* /*dev*/)
{
    reshade::log::message(reshade::log::level::info, "(Re)loading timecycle xml!");
    if (g_data_source)
        g_data_source->load_timecycle();
}

// init_swapchain (DllMain expects it even if you don't use it)
// void on_init_swapchain(swapchain* /*sc*/) {}

// reshade_begin_effects
void inject_uniforms(effect_runtime* runtime, command_list* /*cmd*/, resource_view /*rtv*/, resource_view /*rtv_srgb*/)
{
    const bool enabled = DataReader::get_enabled();
    stage_uniform("enabled", enabled);

    if (enabled)
    {
        DataReader::fast_update();

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
        stage_uniform("time_of_day", DataReader::get_time_of_day());
        stage_uniform("from_weather_type", (int)DataReader::get_from_weather_type());
        stage_uniform("to_weather_type", (int)DataReader::get_to_weather_type());
        stage_uniform("weather_transition", DataReader::get_weather_transition());
        stage_uniform("wf", DataReader::get_weather_frame());
        stage_uniform("aurora_visibility", DataReader::get_aurora_visibility());
        stage_uniform("moon_dir", DataReader::get_moon_dir());
    }

    commit_uniforms(runtime);
}

// reshade_reloaded_effects
void shaders_reloaded(effect_runtime* runtime)
{
    char dummy[1] = { 0 };
#if defined(RFX_GAME_GTAV)
    if (!runtime->get_preprocessor_definition("GTAV", dummy))
        runtime->set_preprocessor_definition("GTAV", "GTAV");
#elif defined(RFX_GAME_RDR1)
    if (!runtime->get_preprocessor_definition("RDR1", dummy))
        runtime->set_preprocessor_definition("RDR1", "RDR1");
#endif
}

/* ---------------- Overlay ---------------- */

// (This is your original ImGui UI, verbatim)
static void draw_uniforms_impl(reshade::api::effect_runtime*)
{
    const bool enabled = DataReader::get_enabled();

    if (!enabled || g_data_source == NULL) {
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
        const auto& time = DataReader::get_time_of_day();
        const auto& wind = DataReader::get_wind_dir();
        const auto& moon = DataReader::get_moon_dir();
        const float aurora = DataReader::get_aurora_visibility();

        ImGui::Text("Time of Day: %g", time);
        ImGui::Text("Wind Direction: (%g, %g, %g)", wind.v[0], wind.v[1], wind.v[2]);
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
            std::string(g_data_source->get_weather_name(wfrom)).c_str(),
            std::string(g_data_source->get_weather_name(wto)).c_str(),
            std::string(g_data_source->get_region_name(wregion)).c_str(),
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

    if (ImGui::Button("Reload Timecycle XML")) {
        reshade::log::message(reshade::log::level::info, "(Re)loading timecycle xml!");
        if (g_data_source) g_data_source->load_timecycle();
    }
}

 void draw_uniforms_overlay(effect_runtime * rt)
 {
    draw_uniforms_impl(rt);
}

/* ---------------- Data reader lifetime (owned by the .asi) ---------------- */

void RegisterPulseVDataSource(HMODULE self)
{
    if (g_reader_registered) return;

#if defined(RFX_GAME_GTAV)
    g_data_source = new GTAV::GTAVSource();
#elif defined(RFX_GAME_RDR1)
    g_data_source = new RDR1::RDR1Source();
#else
    g_data_source = nullptr;
#endif

    if (g_data_source)
    {
        DataReader::register_data_reader(self, g_data_source);
        g_reader_registered = true;
        reshade::log::message(reshade::log::level::info, "PulseV data reader registered.");
    }
}

void UnregisterPulseVDataSource(HMODULE self)
{
    if (!g_reader_registered) return;

    DataReader::unregister_data_reader(self);
    delete g_data_source; g_data_source = nullptr;
    g_reader_registered = false;
    reshade::log::message(reshade::log::level::info, "PulseV data reader unregistered.");
}
