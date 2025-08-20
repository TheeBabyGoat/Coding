/*
------------------------------------------------------------------------------
	DataReader.cpp
	Part of the PulseV ASI project
	Loaded as a ScriptHookV script module

	Overview:
	---------
	Implements the logic for continuously reading game state from a
	ScriptHookV-compatible DataSource. The reader tracks camera transforms,
	projection matrices, environmental conditions, and weather data to expose
	a consistent snapshot of the game state for other subsystems (e.g. ReShade
	integration, depth tools, or overlays).

	Features:
	---------
	  • Startup/teardown routines for binding the DataSource as a script.
	  • Per-frame update loop (script_main) that refreshes game state.
	  • Camera tracking:
		  - Current, previous, and delta position/rotation.
		  - View, projection, inverse, and previous matrices.
		  - Camera FOV, near/far clip distances.
	  • Environmental state:
		  - Wind direction and speed.
		  - Region ID, water height, time-of-day fraction.
		  - Weather transition (from/to types, transition factor).
		  - Aurora visibility (probabilistic + data-driven).
		  - Moon direction vector.
	  • Aurora system logic:
		  - Randomized forecast when weather type changes.
		  - Gradual fade-in/out transitions between visibility states.
	  • Matrix math utilities (Eigen-based):
		  - Conversion to Float4x4 (uniform-ready).
		  - View/projection matrix builders from camera state.

	Dependencies:
	-------------
	  - ScriptHookV (for script registration & frame scheduling).
	  - Eigen (matrix math).
	  - DataSource abstraction (data_reader.hpp).
	  - Shared state structures (shared_data.hpp, GameStateData).
	  - Optional ReShade logging facilities.

	Build Flags:
	------------
	  RFX_GAME_GTAV   Enables GTA V-specific camera updates.
	  RFX_GAME_RDR1   Enables RDR1-specific camera updates.

	Lifecycle:
	----------
	  • register_data_reader()  : Called on load; binds DataReader to a module.
	  • unregister_data_reader(): Called on unload; detaches from ScriptHookV.
	  • script_main()           : Entry point, runs update() once per frame.
	  • fast_update()           : Lightweight per-frame refresh for some titles.

	Notes:
	------
	  • Designed for read-only reflection of game state; mutating values here
		does not affect the game.
	  • Uses static globals for persistent state between frames.
	  • Provides C++ getters returning const references for efficient access.
	  • Exports get_game_state_data() as a lightweight, non-decorated symbol
		(no extern "C", no __declspec) for internal PulseV consumers.

	License:
    --------
    Internal development code – distribution subject to project license terms.
  
    Copyright (C) 2025 Timothy Whitt (TheBabyGoat)
    SPDX-License-Identifier: BSD-3-Clause OR MIT
------------------------------------------------------------------------------
*/


#include "data_reader.hpp"
#include "shared_data.hpp"

constexpr int ROT_ZXY = 2; // Rotation order as used by GTA V (native enum)
constexpr int AURORA_CHANCE = 4;

static DataSource *data_source;


static GameStateData g_game_state = {};

/**
* State data
**/

bool _enabled = false;
bool _depth_reversed = false;
Float4x4 _view_matrix = {};
Float4x4 _proj_matrix = {};
Float4x4 _inv_view_matrix = {};
Float4x4 _inv_proj_matrix = {};
Float4x4 _prev_view_matrix = {};
Float4x4 _prev_proj_matrix = {};
Float4x4 _prev_inv_view_matrix = {};
Float4x4 _prev_inv_proj_matrix = {};
Float3 _camera_pos = {};
Float3 _camera_rot = {};
Float3 _delta_camera_pos = {};
Float3 _delta_camera_rot = {};
float _near_clip = 0.0;
float _far_clip = 0.0;
float _camera_fov = 60.0;
Float3 _wind_dir = {};
float _time_of_day = 0.0;
int _from_weather_type = 0;
int _to_weather_type = 0;
int _current_weather_type = -1;
int _region = 0;
float _weather_transition = 0.0;
float _aurora_visibility = 0.0;
float _last_aurora_visibility = 0.0;
bool _aurora_visible = false;
float _last_aurora_forecast = 0.0;
Float3 _moon_dir = {};
TimeCycle::WeatherFrame _weather_frame = {};
float _water_height = 0.0f;



/**
* Matrix math
**/

// Converts Eigen matrices to uniform-ready fixed-array types
static void marshall_4x4(Float4x4 *out, Eigen::Matrix4f in) {
	{
		out->r1.v[0] = in(0, 0);
		out->r1.v[1] = in(0, 1);
		out->r1.v[2] = in(0, 2);
		out->r1.v[3] = in(0, 3);
	}
	{
		out->r2.v[0] = in(1, 0);
		out->r2.v[1] = in(1, 1);
		out->r2.v[2] = in(1, 2);
		out->r2.v[3] = in(1, 3);
	}
	{
		out->r3.v[0] = in(2, 0);
		out->r3.v[1] = in(2, 1);
		out->r3.v[2] = in(2, 2);
		out->r3.v[3] = in(2, 3);
	}
	{
		out->r4.v[0] = in(3, 0);
		out->r4.v[1] = in(3, 1);
		out->r4.v[2] = in(3, 2);
		out->r4.v[3] = in(3, 3);
	}
}

// Converts degrees to radians
static float to_radians(float degrees) {
	return static_cast<float>(static_cast<double>(degrees) * M_PI / 180.0);
}

// Creates a rotation matrix from yaw (Y), pitch (X), roll (Z)
static Eigen::Matrix4f create_rotation_matrix(float yaw, float pitch, float roll) {
	Eigen::Matrix4f rotation = Eigen::Matrix4f::Identity();

	// Yaw (Y-axis)
	Eigen::Matrix4f yaw_matrix;
	yaw_matrix << cos(yaw), 0, sin(yaw), 0,
		0, 1, 0, 0,
		-sin(yaw), 0, cos(yaw), 0,
		0, 0, 0, 1;

	// Pitch (X-axis)
	Eigen::Matrix4f pitch_matrix;
	pitch_matrix << 1, 0, 0, 0,
		0, cos(pitch), -sin(pitch), 0,
		0, sin(pitch), cos(pitch), 0,
		0, 0, 0, 1;

	// Roll (Z-axis)
	Eigen::Matrix4f roll_matrix;
	roll_matrix << cos(roll), -sin(roll), 0, 0,
		sin(roll), cos(roll), 0, 0,
		0, 0, 1, 0,
		0, 0, 0, 1;

	rotation = roll_matrix * pitch_matrix * yaw_matrix;

	return rotation;
}

// Creates a view matrix from rotation (yaw, pitch, roll) and position
static Eigen::Matrix4f create_view_matrix(const Eigen::Vector3f &rotation, const Eigen::Vector3f &position) {
	float yaw = to_radians(rotation.z());
	float pitch = to_radians(rotation.x());
	float roll = to_radians(rotation.y());

	Eigen::Matrix4f rotation_matrix = create_rotation_matrix(yaw, pitch, roll);
	Eigen::Matrix4f inv_rotation_matrix = rotation_matrix.transpose();

	Eigen::Matrix4f translation_matrix = Eigen::Matrix4f::Identity();
	translation_matrix.block<3, 1>(0, 3) = -position;

	return (inv_rotation_matrix * translation_matrix).transpose();
}

// Creates a 4x4 projection matrix from FOV, aspect ratio, and near/far planes
static Eigen::Matrix4f create_projection_matrix(float fov_y, float aspect_ratio, float near_plane, float far_plane) {
	Eigen::Matrix4f projection = Eigen::Matrix4f::Zero();

	float tan_half_fov_y = tan(to_radians(fov_y) * 0.5f);
	float yscale = 1.0f / tan_half_fov_y;
	float xscale = yscale / aspect_ratio;

	float zscale = far_plane / (far_plane - near_plane);
	float zoffset = -far_plane * near_plane / (far_plane - near_plane);

	projection(0, 0) = xscale;
	projection(1, 1) = yscale;
	projection(2, 2) = zscale;
	projection(2, 3) = zoffset;
	projection(3, 2) = -1.0f;
	projection(3, 3) = 0.0f;

	return projection;
}

/**
* Main business logic
**/

// Called once, before first update
static void startup()
{
	_depth_reversed = data_source->get_depth_reversed();
	_enabled = true;
	std::srand(time(NULL));
}

static void update_camera()
{
	UInt2 res = data_source->get_resolution();
	Float3 pos = data_source->get_cam_pos();
	Float3 rot = data_source->get_cam_rot();

	float fov_y = data_source->get_cam_fov();
	_near_clip = data_source->get_cam_near_clip();
	_far_clip = data_source->get_cam_far_clip();

	Eigen::Matrix4f view = create_view_matrix(
		Eigen::Vector3f(rot.v[0], rot.v[1], rot.v[2]),
		Eigen::Vector3f(pos.v[0], pos.v[1], pos.v[2])
	);

	Eigen::Matrix4f inv_view = view.inverse();

	Eigen::Matrix4f proj = create_projection_matrix(
		fov_y, float(res.v[0]) / float(res.v[1]), _near_clip, _far_clip
	);

	Eigen::Matrix4f inv_proj = proj.inverse();

	_prev_view_matrix = _view_matrix;
	_prev_proj_matrix = _proj_matrix;
	_prev_inv_view_matrix = _inv_view_matrix;
	_prev_inv_proj_matrix = _inv_proj_matrix;

	marshall_4x4(&_view_matrix, view.transpose());
	marshall_4x4(&_proj_matrix, proj.transpose());
	marshall_4x4(&_inv_view_matrix, inv_view.transpose());
	marshall_4x4(&_inv_proj_matrix, inv_proj.transpose());

	_delta_camera_pos.v[0] = pos.v[0] - _camera_pos.v[0];
	_delta_camera_pos.v[1] = pos.v[1] - _camera_pos.v[1];
	_delta_camera_pos.v[2] = pos.v[2] - _camera_pos.v[2];

	_delta_camera_rot.v[0] = rot.v[0] - _camera_rot.v[0];
	_delta_camera_rot.v[1] = rot.v[1] - _camera_rot.v[1];
	_delta_camera_rot.v[2] = rot.v[2] - _camera_rot.v[2];

	_camera_pos.v[0] = pos.v[0];
	_camera_pos.v[1] = pos.v[1];
	_camera_pos.v[2] = pos.v[2];

	_camera_rot.v[0] = rot.v[0];
	_camera_rot.v[1] = rot.v[1];
	_camera_rot.v[2] = rot.v[2];

	_camera_fov = fov_y;
}



// Main loop that reads the game data every frame and stores the state
void DataReader::fast_update()
{
#if defined RFX_GAME_RDR1
	update_camera();
#endif

	_moon_dir = data_source->get_moon_dir();
}

static void update()
{
	data_source->update();

#if defined RFX_GAME_GTAV
	update_camera();
#endif

	

	Float3 wind_dir = data_source->get_wind_dir();
	float wind_speed = data_source->get_wind_speed();

	float clock_time = data_source->get_time();

	_water_height = data_source->get_water_height(_camera_pos);
	_from_weather_type = data_source->get_weather_from();
	_to_weather_type = data_source->get_weather_to();
	_weather_transition = data_source->get_weather_transition();
	_region = data_source->get_region(_camera_pos);

	TimeCycle::RegionalWeather from_weather = {
		_from_weather_type,
		_region
	};
	TimeCycle::RegionalWeather to_weather = {
		_to_weather_type,
		_region
	};

	_wind_dir.v[0] = wind_dir.v[0] * wind_speed;
	_wind_dir.v[1] = wind_dir.v[1] * wind_speed;
	_wind_dir.v[2] = wind_dir.v[2] * wind_speed;

	_time_of_day = clock_time / 24.0f;

	float current_time = clock_time;
	float aurora_transition = 0.0f;

	if (_current_weather_type != _to_weather_type) {
		_current_weather_type = _to_weather_type;
		aurora_transition = 0.0f;
		_last_aurora_forecast = current_time;
		_aurora_visible = data_source->get_aurora_visibility() || std::rand() % AURORA_CHANCE == 0;
		_last_aurora_visibility = _aurora_visibility;
	}
	else {
		if (_last_aurora_forecast > current_time) {
			current_time += 24.0f;
		}

		float transition = std::clamp(current_time - _last_aurora_forecast, 0.0f, 1.0f);

		if (_aurora_visible)
		{
			_aurora_visibility = std::clamp(_last_aurora_visibility + transition, 0.0f, 1.0f);
		}
		else
		{
			_aurora_visibility = std::clamp(_last_aurora_visibility - transition, 0.0f, 1.0f);
		}
	}

	_weather_frame = data_source->get_weather_frame(from_weather, to_weather, clock_time, _weather_transition);

	g_game_state.current_weather = _from_weather_type;
	g_game_state.target_weather = _to_weather_type;
	g_game_state.transition_factor = _weather_transition;
	g_game_state.game_time = _time_of_day;
}

// Entry point that starts the update loop
void DataReader::script_main()
{
	reshade::log::message(reshade::log::level::info, "Started reading game data");

	startup();

	while (true) {
		update();
		data_source->wait(0); // Waits for the next frame before the next update
	}
}

/**
* Getters for state data
**/

const bool &DataReader::get_enabled() {
	return _enabled;
}

const bool &DataReader::get_depth_reversed() {
	return _depth_reversed;
}

const Float4x4 &DataReader::get_view_matrix() {
	return _view_matrix;
};

const Float4x4 &DataReader::get_proj_matrix() {
	return _proj_matrix;
};

const Float4x4 &DataReader::get_inv_view_matrix() {
	return _inv_view_matrix;
};

const Float4x4 &DataReader::get_inv_proj_matrix() {
	return _inv_proj_matrix;
};

const Float4x4 &DataReader::get_prev_view_matrix() {
	return _prev_view_matrix;
};

const Float4x4 &DataReader::get_prev_proj_matrix() {
	return _prev_proj_matrix;
};

const Float4x4 &DataReader::get_prev_inv_view_matrix() {
	return _prev_inv_view_matrix;
};

const Float4x4 &DataReader::get_prev_inv_proj_matrix() {
	return _prev_inv_proj_matrix;
};

const Float3 &DataReader::get_camera_pos() {
	return _camera_pos;
}

const Float3 &DataReader::get_camera_rot() {
	return _camera_rot;
}

const Float3 &DataReader::get_delta_camera_pos() {
	return _delta_camera_pos;
}

const Float3 &DataReader::get_delta_camera_rot() {
	return _delta_camera_rot;
}

const float &DataReader::get_near_clip() {
	return _near_clip;
}

const float &DataReader::get_far_clip() {
	return _far_clip;
}

const float &DataReader::get_camera_fov() {
	return _camera_fov;
}

const Float3 &DataReader::get_wind_dir() {
	return _wind_dir;
}

const float &DataReader::get_time_of_day() {
	return _time_of_day;
}

const TimeCycle::WeatherFrame &DataReader::get_weather_frame() {
	return _weather_frame;
}

const int &DataReader::get_from_weather_type() {
	return _from_weather_type;
}

const int &DataReader::get_to_weather_type() {
	return _to_weather_type;
}

const int &DataReader::get_region() {
	return _region;
}

const float &DataReader::get_weather_transition() {
	return _weather_transition;
}

const float &DataReader::get_aurora_visibility() {
	return _aurora_visibility;
}

const Float3 &DataReader::get_moon_dir() {
	return _moon_dir;
}
const float& DataReader::get_water_height() {
	return _water_height;
}


/**
* Scripthook registry
**/

// Registers the entry point as a scripthookv script
void DataReader::register_data_reader(HMODULE hModule, DataSource *source)
{
	data_source = source;
	source->register_script(hModule, script_main);
}

// Unregisters the entry point in scripthookv
void DataReader::unregister_data_reader(HMODULE hModule)
{
	data_source->unregister_script(hModule);
}


const GameStateData* get_game_state_data()  // <-- NO extern "C", NO __declspec
{
	return &g_game_state;
}
