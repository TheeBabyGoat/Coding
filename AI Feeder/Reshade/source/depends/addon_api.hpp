// addon/my_addon/addon_api.hpp
#pragma once
#include "shared_data.hpp"

extern "C" __declspec(dllimport) const GameStateData* get_game_state_data();
