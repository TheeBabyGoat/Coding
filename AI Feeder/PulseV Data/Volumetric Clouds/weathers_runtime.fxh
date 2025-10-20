//
// PulseV Clouds runtime parameter definitions
//
// This file replaces the original `weathers.fxh` when using the PulseV
// addon to drive volumetric cloud parameters. Instead of exposing hundreds
// of UI uniforms, this file declares a single uniform for every cloud
// parameter per weather preset and layer. Each uniform includes a
// `source` annotation that the addon uses to inject values at runtime.
// The names follow the pattern `<Preset>_<Layer>_<Parameter>` (e.g.
// `Clear_Bottom_Scale`), while the `source` string is prefixed with
// `pv_Clouds_` (e.g. `pv_Clouds_Clear_Bottom_Scale`). The addon updates
// these values on every frame based on the current game weather and time
// segment.

#pragma once

// ---------------------------------------------------------------------------
// Aurora quality settings from the original file are preserved here because
// the main shader still references them. These remain adjustable through
// the standard ReShade UI.
// ---------------------------------------------------------------------------

struct AuroraQualitySettings
{
    int samples;
    float stepSize;
    float noiseDetail;
};

// ---------------------------------------------------------------------------
// Helper macros to declare uniform variables for each weather preset and
// layer. Different cloud parameters have different data types (e.g. some
// values are vectors such as luminance and sunLightPower). To keep the
// declarations flexible, two lower level macros are provided: one for
// scalar floats and one for three-component float vectors. Each uniform
// declaration is hidden from the ReShade UI because it lacks any
// `ui_type` annotation.
// ---------------------------------------------------------------------------

// Declare a scalar uniform. Using its own macro simplifies the
// enumeration of parameter types below. The `source` annotation tells the
// addon which runtime value to supply.
#define PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, PARAM) \
    uniform float PRESET##_##LAYER##_##PARAM < \
        string source = "pv_Clouds_" #PRESET "_" #LAYER "_" #PARAM; \
    > = 0.0;

// Declare a 3-component vector uniform. These are used for parameters
// like luminance and directional light powers. A default value of
// `(0.0, 0.0, 0.0)` is specified.
#define PARAM_LIST_ENTRY_FLOAT3(PRESET, LAYER, PARAM) \
    uniform float3 PRESET##_##LAYER##_##PARAM < \
        string source = "pv_Clouds_" #PRESET "_" #LAYER "_" #PARAM; \
    > = float3(0.0, 0.0, 0.0);

// List all cloud parameters along with their appropriate uniform type. When
// adding or removing a parameter, update this list accordingly.
#define PARAM_LIST_ENTRIES(PRESET, LAYER) \
    /* scalar parameters */ \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, Scale) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, DetailScale) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, Stretch) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, BaseCurl) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, DetailCurl) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, BaseCurlScale) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, DetailCurlScale) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, Smoothness) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, Softness) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, BottomHeight) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, TopHeight) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, Coverage) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, Extinction) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, AmbientAmount) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, Absorption) \
    /* luminance and sun light power are scalar values which will be
       replicated across three channels when assigned to the `float3`
       fields in `LayerParameters`. Therefore, they are declared as
       scalar uniforms here. */ \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, Luminance) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, SunLightPower) \
    /* additional scalar parameters */ \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, MoonLightPower) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, SkyLightPower) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, BottomDensity) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, MiddleDensity) \
    PARAM_LIST_ENTRY_FLOAT(PRESET, LAYER, TopDensity)

// Declare uniform variables for a given weather preset. This macro expands
// `PARAM_LIST_ENTRIES` for both the Bottom and Top layers.
#define WEATHER_PRESET(PRESET) \
    /* Bottom layer uniforms */ \
    PARAM_LIST_ENTRIES(PRESET, Bottom) \
    /* Top layer uniforms */ \
    PARAM_LIST_ENTRIES(PRESET, Top)

// Expand the uniform declarations for every supported weather preset. The
// order of presets here must match the list in the addon (weatherNames).
WEATHER_PRESET(Clear);
WEATHER_PRESET(ExtraSunny);
WEATHER_PRESET(Clouds);
WEATHER_PRESET(Overcast);
WEATHER_PRESET(Rain);
WEATHER_PRESET(Clearing);
WEATHER_PRESET(Thunder);
WEATHER_PRESET(Smog);
WEATHER_PRESET(Foggy);
WEATHER_PRESET(Snow);
WEATHER_PRESET(Blizzard);
WEATHER_PRESET(SnowLight);
WEATHER_PRESET(Halloween);

// ---------------------------------------------------------------------------
// Macros to assign cloud parameters from the declared uniforms to the
// `LayerParameters` structure used in the shader. These macros replace the
// original `CLOUD_LAYER_PRESET` definitions and no longer perform any day
// or night blending. The addon takes care of providing appropriate values
// based on the current time segment.
// ---------------------------------------------------------------------------

#define CLOUD_BOTTOM_LAYER(PRESET) \
    params.scale           = PRESET##_Bottom_Scale; \
    params.detailScale     = PRESET##_Bottom_DetailScale; \
    params.stretch         = PRESET##_Bottom_Stretch; \
    params.baseCurl        = PRESET##_Bottom_BaseCurl; \
    params.detailCurl      = PRESET##_Bottom_DetailCurl; \
    params.baseCurlScale   = PRESET##_Bottom_BaseCurlScale; \
    params.detailCurlScale = PRESET##_Bottom_DetailCurlScale; \
    params.smoothness      = PRESET##_Bottom_Smoothness; \
    params.softness        = PRESET##_Bottom_Softness; \
    params.bottom          = PRESET##_Bottom_BottomHeight; \
    params.top             = PRESET##_Bottom_TopHeight; \
    params.cover           = PRESET##_Bottom_Coverage; \
    params.extinction      = PRESET##_Bottom_Extinction; \
    params.ambientAmount   = PRESET##_Bottom_AmbientAmount; \
    params.absorption      = PRESET##_Bottom_Absorption; \
    params.luminance       = PRESET##_Bottom_Luminance; \
    params.sunLightPower   = PRESET##_Bottom_SunLightPower; \
    params.moonLightPower  = PRESET##_Bottom_MoonLightPower; \
    params.skyLightPower   = PRESET##_Bottom_SkyLightPower; \
    params.bottomDensity   = PRESET##_Bottom_BottomDensity; \
    params.middleDensity   = PRESET##_Bottom_MiddleDensity; \
    params.topDensity      = PRESET##_Bottom_TopDensity;

#define CLOUD_TOP_LAYER(PRESET) \
    params.scale           = PRESET##_Top_Scale; \
    params.detailScale     = PRESET##_Top_DetailScale; \
    params.stretch         = PRESET##_Top_Stretch; \
    params.baseCurl        = PRESET##_Top_BaseCurl; \
    params.detailCurl      = PRESET##_Top_DetailCurl; \
    params.baseCurlScale   = PRESET##_Top_BaseCurlScale; \
    params.detailCurlScale = PRESET##_Top_DetailCurlScale; \
    params.smoothness      = PRESET##_Top_Smoothness; \
    params.softness        = PRESET##_Top_Softness; \
    params.bottom          = PRESET##_Top_BottomHeight; \
    params.top             = PRESET##_Top_TopHeight; \
    params.cover           = PRESET##_Top_Coverage; \
    params.extinction      = PRESET##_Top_Extinction; \
    params.ambientAmount   = PRESET##_Top_AmbientAmount; \
    params.absorption      = PRESET##_Top_Absorption; \
    params.luminance       = PRESET##_Top_Luminance; \
    params.sunLightPower   = PRESET##_Top_SunLightPower; \
    params.moonLightPower  = PRESET##_Top_MoonLightPower; \
    params.skyLightPower   = PRESET##_Top_SkyLightPower; \
    params.bottomDensity   = PRESET##_Top_BottomDensity; \
    params.middleDensity   = PRESET##_Top_MiddleDensity; \
    params.topDensity      = PRESET##_Top_TopDensity;

// ---------------------------------------------------------------------------
// Definition of the LayerParameters structure. This was originally declared
// in `weathers.fxh` and is reproduced here so that the shader can reference
// it when including `weathers_runtime.fxh` instead. The fields correspond
// exactly to those in the original file and are used to hold the cloud
// layer settings for a particular weather and time segment.
// ---------------------------------------------------------------------------

struct LayerParameters
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
    float3 luminance;
    float3 sunLightPower;
    float moonLightPower;
    float skyLightPower;
    float bottomDensity;
    float middleDensity;
    float topDensity;
};