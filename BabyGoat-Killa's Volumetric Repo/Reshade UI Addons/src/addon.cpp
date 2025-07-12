/*
 * Copyright (C) 2025 Matthew Burrows (anti-matt-er)
 * SPDX-License-Identifier: BSD-3-Clause OR MIT
 *
 * Description: Entry point and logic for addon
 */

#include "addon.hpp"

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
	const bool enabled = DataReader::get_enabled();
	stage_uniform("enabled", enabled);

	if (enabled) {
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

		WeatherPreset& from_preset = weather_presets[(int)DataReader::get_from_weather_type()];
		WeatherPreset& to_preset = weather_presets[(int)DataReader::get_to_weather_type()];

		stage_uniform("from_bottom_scale", from_preset.bottomLayer.scale);
		stage_uniform("from_bottom_detail_scale", from_preset.bottomLayer.detailScale);
		stage_uniform("from_bottom_stretch", from_preset.bottomLayer.stretch);
		stage_uniform("from_bottom_base_curl", from_preset.bottomLayer.baseCurl);
		stage_uniform("from_bottom_detail_curl", from_preset.bottomLayer.detailCurl);
		stage_uniform("from_bottom_base_curl_scale", from_preset.bottomLayer.baseCurlScale);
		stage_uniform("from_bottom_detail_curl_scale", from_preset.bottomLayer.detailCurlScale);
		stage_uniform("from_bottom_smoothness", from_preset.bottomLayer.smoothness);
		stage_uniform("from_bottom_softness", from_preset.bottomLayer.softness);
		stage_uniform("from_bottom_bottom", from_preset.bottomLayer.bottom);
		stage_uniform("from_bottom_top", from_preset.bottomLayer.top);
		stage_uniform("from_bottom_cover", from_preset.bottomLayer.cover);
		stage_uniform("from_bottom_extinction", from_preset.bottomLayer.extinction);
		stage_uniform("from_bottom_ambient_amount", from_preset.bottomLayer.ambientAmount);
		stage_uniform("from_bottom_absorption", from_preset.bottomLayer.absorption);
		stage_uniform("from_bottom_luminance", from_preset.bottomLayer.luminance);
		stage_uniform("from_bottom_sun_light_power", from_preset.bottomLayer.sunLightPower);
		stage_uniform("from_bottom_sky_light_power", from_preset.bottomLayer.skyLightPower);
		stage_uniform("from_bottom_bottom_density", from_preset.bottomLayer.bottomDensity);
		stage_uniform("from_bottom_middle_density", from_preset.bottomLayer.middleDensity);
		stage_uniform("from_bottom_top_density", from_preset.bottomLayer.topDensity);
		stage_uniform("from_top_scale", from_preset.topLayer.scale);
		stage_uniform("from_top_detail_scale", from_preset.topLayer.detailScale);
		stage_uniform("from_top_stretch", from_preset.topLayer.stretch);
		stage_uniform("from_top_base_curl", from_preset.topLayer.baseCurl);
		stage_uniform("from_top_detail_curl", from_preset.topLayer.detailCurl);
		stage_uniform("from_top_base_curl_scale", from_preset.topLayer.baseCurlScale);
		stage_uniform("from_top_detail_curl_scale", from_preset.topLayer.detailCurlScale);
		stage_uniform("from_top_smoothness", from_preset.topLayer.smoothness);
		stage_uniform("from_top_softness", from_preset.topLayer.softness);
		stage_uniform("from_top_bottom", from_preset.topLayer.bottom);
		stage_uniform("from_top_top", from_preset.topLayer.top);
		stage_uniform("from_top_cover", from_preset.topLayer.cover);
		stage_uniform("from_top_extinction", from_preset.topLayer.extinction);
		stage_uniform("from_top_ambient_amount", from_preset.topLayer.ambientAmount);
		stage_uniform("from_top_absorption", from_preset.topLayer.absorption);
		stage_uniform("from_top_luminance", from_preset.topLayer.luminance);
		stage_uniform("from_top_sun_light_power", from_preset.topLayer.sunLightPower);
		stage_uniform("from_top_sky_light_power", from_preset.topLayer.skyLightPower);
		stage_uniform("from_top_bottom_density", from_preset.topLayer.bottomDensity);
		stage_uniform("from_top_middle_density", from_preset.topLayer.middleDensity);
		stage_uniform("from_top_top_density", from_preset.topLayer.topDensity);

		stage_uniform("to_bottom_scale", to_preset.bottomLayer.scale);
		stage_uniform("to_bottom_detail_scale", to_preset.bottomLayer.detailScale);
		stage_uniform("to_bottom_stretch", to_preset.bottomLayer.stretch);
		stage_uniform("to_bottom_base_curl", to_preset.bottomLayer.baseCurl);
		stage_uniform("to_bottom_detail_curl", to_preset.bottomLayer.detailCurl);
		stage_uniform("to_bottom_base_curl_scale", to_preset.bottomLayer.baseCurlScale);
		stage_uniform("to_bottom_detail_curl_scale", to_preset.bottomLayer.detailCurlScale);
		stage_uniform("to_bottom_smoothness", to_preset.bottomLayer.smoothness);
		stage_uniform("to_bottom_softness", to_preset.bottomLayer.softness);
		stage_uniform("to_bottom_bottom", to_preset.bottomLayer.bottom);
		stage_uniform("to_bottom_top", to_preset.bottomLayer.top);
		stage_uniform("to_bottom_cover", to_preset.bottomLayer.cover);
		stage_uniform("to_bottom_extinction", to_preset.bottomLayer.extinction);
		stage_uniform("to_bottom_ambient_amount", to_preset.bottomLayer.ambientAmount);
		stage_uniform("to_bottom_absorption", to_preset.bottomLayer.absorption);
		stage_uniform("to_bottom_luminance", to_preset.bottomLayer.luminance);
		stage_uniform("to_bottom_sun_light_power", to_preset.bottomLayer.sunLightPower);
		stage_uniform("to_bottom_sky_light_power", to_preset.bottomLayer.skyLightPower);
		stage_uniform("to_bottom_bottom_density", to_preset.bottomLayer.bottomDensity);
		stage_uniform("to_bottom_middle_density", to_preset.bottomLayer.middleDensity);
		stage_uniform("to_bottom_top_density", to_preset.bottomLayer.topDensity);
		stage_uniform("to_top_scale", to_preset.topLayer.scale);
		stage_uniform("to_top_detail_scale", to_preset.topLayer.detailScale);
		stage_uniform("to_top_stretch", to_preset.topLayer.stretch);
		stage_uniform("to_top_base_curl", to_preset.topLayer.baseCurl);
		stage_uniform("to_top_detail_curl", to_preset.topLayer.detailCurl);
		stage_uniform("to_top_base_curl_scale", to_preset.topLayer.baseCurlScale);
		stage_uniform("to_top_detail_curl_scale", to_preset.topLayer.detailCurlScale);
		stage_uniform("to_top_smoothness", to_preset.topLayer.smoothness);
		stage_uniform("to_top_softness", to_preset.topLayer.softness);
		stage_uniform("to_top_bottom", to_preset.topLayer.bottom);
		stage_uniform("to_top_top", to_preset.topLayer.top);
		stage_uniform("to_top_cover", to_preset.topLayer.cover);
		stage_uniform("to_top_extinction", to_preset.topLayer.extinction);
		stage_uniform("to_top_ambient_amount", to_preset.topLayer.ambientAmount);
		stage_uniform("to_top_absorption", to_preset.topLayer.absorption);
		stage_uniform("to_top_luminance", to_preset.topLayer.luminance);
		stage_uniform("to_top_sun_light_power", to_preset.topLayer.sunLightPower);
		stage_uniform("to_top_sky_light_power", to_preset.topLayer.skyLightPower);
		stage_uniform("to_top_bottom_density", to_preset.topLayer.bottomDensity);
		stage_uniform("to_top_middle_density", to_preset.topLayer.middleDensity);
		stage_uniform("to_top_top_density", to_preset.topLayer.topDensity);
	}

	commit_uniforms(runtime);
}

static void on_init_swapchain(reshade::api::swapchain* swapchain)
{
	// Your implementation here
}

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

	if (ImGui::Button("Reload Timecycle XML")) {
		reload_timecycle();
	}
}

struct WeatherLayer
{
	float scale;
	float detailScale;
	float stretch;
	float baseCurl;
	float detailCurl;
	float baseCurlScale;
	float detailCurlScale;
	float smoothness;
	float softness;
	float bottom;
	float top;
	float cover;
	float extinction;
	float ambientAmount;
	float absorption;
	float luminance;
	float sunLightPower;
	float skyLightPower;
	float bottomDensity;
	float middleDensity;
	float topDensity;
};

struct WeatherPreset
{
	char name[32];
	WeatherLayer bottomLayer;
	WeatherLayer topLayer;
};

static WeatherPreset weather_presets[] = {
	{"Clear", {1.5, 0.5, 1.25, 0.5, 0.5, 1.0, 1.0, 2.0, 0.0, 450.0, 1000.0, 0.15, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 0.0}, {2.0, 1.5, 3.0, 1.0, 2.0, 1.0, 1.5, 2.0, 0.0, 1000.0, 2000.0, 0.4, 1.0, 1.0, 0.75, 1.0, 1.0, 1.0, 0.75, 1.0, 0.7}},
	{"ExtraSunny", {1.5, 0.5, 1.25, 0.5, 0.5, 1.0, 1.0, 1.5, 0.0, 450.0, 1200.0, 0.3, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 0.0}, {2.0, 1.5, 3.0, 2.0, 1.0, 1.0, 1.5, 2.0, 0.0, 2500.0, 3500.0, 0.5, 1.0, 1.0, 0.75, 1.0, 1.0, 1.0, 0.75, 1.0, 0.75}},
	{"Clouds", {3.0, 0.25, 0.9, 0.25, 0.15, 1.0, 1.0, 0.35, 0.0, 350.0, 1000.0, 0.45, 1.0, 1.0, 1.25, 1.25, 1.0, 1.0, 2.0, 1.0, 0.0}, {2.0, 1.5, 3.0, 1.0, 1.0, 1.0, 1.5, 1.5, 0.0, 1000.0, 3000.0, 0.3, 1.0, 1.0, 0.75, 1.0, 1.0, 1.0, 0.75, 1.0, 1.0}},
	{"Overcast", {1.5, 0.5, 1.25, 0.25, 0.25, 1.0, 1.0, 1.5, 0.0, 400.0, 1500.0, 0.45, 1.0, 1.25, 0.75, 1.0, 1.0, 1.0, 1.5, 0.5, 0.0}, {2.0, 1.5, 3.0, 1.5, 0.75, 1.0, 1.5, 1.5, 0.0, 1500.0, 3000.0, 0.55, 1.0, 1.0, 0.75, 1.0, 1.0, 1.0, 0.75, 1.0, 0.75}},
	{"Rain", {2.0, 1.0, 1.5, 0.5, 0.75, 1.0, 1.0, 0.75, 0.0, 200.0, 1500.0, 0.4, 1.0, 0.75, 1.5, 1.5, 1.0, 1.0, 2.0, 1.5, 0.5}, {2.0, 1.5, 2.5, 1.0, 0.75, 1.0, 1.5, 1.25, 0.0, 1500.0, 2500.0, 0.65, 1.0, 0.75, 0.75, 1.0, 1.0, 1.0, 0.75, 1.0, 0.75}},
	{"Clearing", {1.75, 0.75, 1.35, 0.5, 0.65, 1.0, 1.0, 1.25, 0.0, 325.0, 1250.0, 0.3, 1.0, 0.85, 1.15, 0.6, 1.0, 1.0, 1.75, 1.25, 0.25}, {2.0, 1.5, 2.75, 1.0, 1.35, 1.0, 1.5, 1.5, 0.0, 1250.0, 2250.0, 0.55, 1.0, 0.95, 1.0, 0.6, 1.0, 1.0, 0.85, 1.0, 0.75}},
	{"Thunder", {2.0, 0.25, 1.15, 0.25, 0.5, 1.25, 1.25, 0.65, 0.0, 400.0, 2000.0, 0.4, 1.0, 0.75, 1.5, 1.5, 1.0, 1.0, 2.5, 1.25, 1.55}, {2.0, 0.25, 2.0, 0.25, 0.5, 1.5, 1.0, 2.0, 0.0, 3000.0, 4000.0, 0.85, 1.0, 0.75, 0.35, 1.0, 1.0, 1.0, 0.75, 1.0, 0.75}},
	{"Smog", {2.0, 0.5, 2.5, 0.25, 0.75, 1.0, 1.0, 1.25, 0.0, 400.0, 1500.0, 0.43, 1.0, 1.0, 1.25, 0.5, 1.0, 1.0, 1.5, 0.5, 0.0}, {1.5, 1.5, 5.0, 1.5, 0.75, 1.0, 1.5, 1.25, 0.0, 1500.0, 3000.0, 0.4, 1.0, 0.6, 0.75, 0.45, 1.0, 1.0, 0.75, 1.0, 0.75}},
	{"Foggy", {5.0, 0.5, 2.0, 0.25, 0.15, 1.0, 1.0, 1.0, 0.0, 0.0, 700.0, 1.0, 1.0, 1.0, 2.0, 0.5, 1.0, 1.0, 1.1, 0.25, 0.0}, {2.0, 1.5, 3.0, 1.0, 1.0, 1.0, 1.5, 1.5, 0.0, 2000.0, 3000.0, 0.0, 1.0, 1.0, 0.75, 1.0, 1.0, 1.0, 0.75, 1.0, 1.0}},
	{"Snow", {2.0, 1.0, 1.75, 0.35, 0.45, 1.0, 1.0, 0.75, 0.0, 175.0, 1000.0, 0.65, 1.0, 0.85, 1.25, 0.6, 1.0, 1.0, 0.5, 1.0, 0.0}, {1.75, 0.75, 1.35, 0.5, 0.65, 1.0, 1.0, 1.25, 0.0, 1500.0, 2000.0, 0.3, 1.0, 0.85, 1.15, 0.75, 1.0, 1.0, 1.75, 1.25, 0.25}},
	{"Blizzard", {2.0, 1.0, 1.75, 0.35, 0.45, 1.0, 1.0, 0.75, 0.0, 175.0, 1000.0, 0.5, 1.0, 0.85, 1.25, 0.7, 1.0, 1.0, 1.5, 1.0, 0.0}, {1.75, 0.75, 1.35, 0.5, 0.65, 1.0, 1.0, 1.25, 0.0, 1500.0, 2000.0, 0.8, 1.0, 0.85, 1.15, 0.75, 1.0, 1.0, 1.0, 0.5, 0.5}},
	{"SnowLight", {2.0, 1.0, 1.75, 0.35, 0.35, 1.0, 1.0, 0.75, 0.0, 175.0, 1000.0, 0.5, 1.0, 1.0, 1.25, 1.0, 1.0, 1.0, 0.5, 1.0, 0.0}, {1.75, 0.75, 1.35, 0.5, 0.65, 1.0, 1.0, 1.25, 0.0, 1500.0, 2000.0, 0.3, 1.0, 0.85, 1.15, 1.0, 1.0, 1.0, 1.75, 1.25, 0.25}},
	{"Halloween", {3.0, 0.25, 0.9, 1.0, 0.5, 1.0, 1.0, 0.35, 0.0, 350.0, 1000.0, 0.45, 1.0, 1.0, 1.25, 1.25, 1.0, 1.0, 2.0, 1.0, 0.0}, {2.0, 1.5, 3.0, 2.0, 2.0, 1.0, 1.5, 1.5, 0.0, 1000.0, 3000.0, 0.3, 1.0, 1.0, 0.75, 1.0, 1.0, 1.0, 0.75, 1.0, 1.0}},
};

static bool show_weather_settings = false;
static int selected_weather = 0;

static void draw_weather_settings_menu(reshade::api::effect_runtime*)
{
	if (!show_weather_settings)
	{
		return;
	}

	ImGui::Begin("Weather Settings", &show_weather_settings);

	const char* weather_names[ARRAYSIZE(weather_presets)];
	for (int i = 0; i < ARRAYSIZE(weather_presets); ++i)
	{
		weather_names[i] = weather_presets[i].name;
	}

	ImGui::Combo("Weather", &selected_weather, weather_names, ARRAYSIZE(weather_names));

	WeatherPreset& preset = weather_presets[selected_weather];

	if (ImGui::CollapsingHeader("Bottom Layer"))
	{
		ImGui::DragFloat("Scale", &preset.bottomLayer.scale, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Detail Scale", &preset.bottomLayer.detailScale, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Stretch", &preset.bottomLayer.stretch, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Base Curl", &preset.bottomLayer.baseCurl, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Detail Curl", &preset.bottomLayer.detailCurl, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Base Curl Scale", &preset.bottomLayer.baseCurlScale, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Detail Curl Scale", &preset.bottomLayer.detailCurlScale, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Smoothness", &preset.bottomLayer.smoothness, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Softness", &preset.bottomLayer.softness, 0.01f, -1.0f, 1.0f);
		ImGui::DragFloat("Bottom Height", &preset.bottomLayer.bottom, 1.0f, 0.0f, 10000.0f);
		ImGui::DragFloat("Top Height", &preset.bottomLayer.top, 1.0f, 0.0f, 10000.0f);
		ImGui::DragFloat("Coverage", &preset.bottomLayer.cover, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Extinction", &preset.bottomLayer.extinction, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Ambient Amount", &preset.bottomLayer.ambientAmount, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Absorption", &preset.bottomLayer.absorption, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Luminance", &preset.bottomLayer.luminance, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Sun Light Power", &preset.bottomLayer.sunLightPower, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Sky Light Power", &preset.bottomLayer.skyLightPower, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Bottom Density", &preset.bottomLayer.bottomDensity, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Middle Density", &preset.bottomLayer.middleDensity, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Top Density", &preset.bottomLayer.topDensity, 0.01f, 0.0f, 2.0f);
	}

	if (ImGui::CollapsingHeader("Top Layer"))
	{
		ImGui::DragFloat("Scale##Top", &preset.topLayer.scale, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Detail Scale##Top", &preset.topLayer.detailScale, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Stretch##Top", &preset.topLayer.stretch, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Base Curl##Top", &preset.topLayer.baseCurl, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Detail Curl##Top", &preset.topLayer.detailCurl, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Base Curl Scale##Top", &preset.topLayer.baseCurlScale, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Detail Curl Scale##Top", &preset.topLayer.detailCurlScale, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Smoothness##Top", &preset.topLayer.smoothness, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Softness##Top", &preset.topLayer.softness, 0.01f, -1.0f, 1.0f);
		ImGui::DragFloat("Bottom Height##Top", &preset.topLayer.bottom, 1.0f, 0.0f, 10000.0f);
		ImGui::DragFloat("Top Height##Top", &preset.topLayer.top, 1.0f, 0.0f, 10000.0f);
		ImGui::DragFloat("Coverage##Top", &preset.topLayer.cover, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Extinction##Top", &preset.topLayer.extinction, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Ambient Amount##Top", &preset.topLayer.ambientAmount, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Absorption##Top", &preset.topLayer.absorption, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Luminance##Top", &preset.topLayer.luminance, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Sun Light Power##Top", &preset.topLayer.sunLightPower, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Sky Light Power##Top", &preset.topLayer.skyLightPower, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Bottom Density##Top", &preset.topLayer.bottomDensity, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Middle Density##Top", &preset.topLayer.middleDensity, 0.01f, 0.0f, 2.0f);
		ImGui::DragFloat("Top Density##Top", &preset.topLayer.topDensity, 0.01f, 0.0f, 2.0f);
	}

	ImGui::End();
}

static void draw_pulsev_overlay(reshade::api::effect_runtime* runtime)
{
	draw_weather_settings_menu(runtime);

	if (ImGui::Button("Edit Weather Settings"))
	{
		show_weather_settings = true;
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
extern "C" __declspec(dllexport) const char* DESCRIPTION = "Provides game data as shader uniforms from RAGE games";

// Entry point for addon
BOOL APIENTRY DllMain(HMODULE hModule, DWORD fdwReason, LPVOID)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		if (!reshade::register_addon(hModule))
		{
			return false;
		}

		// Register addon events
		reshade::register_event<reshade::addon_event::init_device>(startup);
		reshade::register_event<reshade::addon_event::init_swapchain>(on_init_swapchain);
		reshade::register_event<reshade::addon_event::reshade_begin_effects>(inject_uniforms);
		reshade::register_event<reshade::addon_event::reshade_reloaded_effects>(shaders_reloaded);
		reshade::register_overlay(nullptr, draw_uniforms);
		reshade::register_overlay("PulseV", draw_pulsev_overlay);

#if defined RFX_GAME_GTAV
		register_depth_switcher();
#endif

		register_addon(hModule);

		break;
	case DLL_PROCESS_DETACH:
		// Unregister addon events
		reshade::unregister_addon(hModule);
		reshade::unregister_event<reshade::addon_event::init_device>(startup);
		reshade::unregister_event<reshade::addon_event::init_swapchain>(on_init_swapchain);
		reshade::unregister_event<reshade::addon_event::reshade_begin_effects>(inject_uniforms);
		reshade::unregister_event<reshade::addon_event::reshade_reloaded_effects>(shaders_reloaded);

#if defined RFX_GAME_GTAV
		unregister_depth_switcher();
#endif

		unregister_addon(hModule);

		break;
	}

	return TRUE;
}
