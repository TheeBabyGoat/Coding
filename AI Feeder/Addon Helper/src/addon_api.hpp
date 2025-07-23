#pragma once
#include "shared_data.hpp"

#ifdef BUILDING_PULSEV_ADDON
#define PULSEV_API extern "C" __declspec(dllexport)
#else
#define PULSEV_API extern "C" __declspec(dllimport)
#endif

PULSEV_API const GameStateData* get_game_state_data();




