#pragma once

#define CLOUD_LAYER_PRESET_DAYNIGHT(PRESET, \
    BOTTOM_SCALE_D, BOTTOM_DETAIL_SCALE_D, BOTTOM_STRETCH_D, BOTTOM_BASE_CURL_D, BOTTOM_DETAIL_CURL_D, BOTTOM_BASE_CURL_SCALE_D, BOTTOM_DETAIL_CURL_SCALE_D, BOTTOM_SMOOTHNESS_D, BOTTOM_SOFTNESS_D, BOTTOM_BOTTOM_D, BOTTOM_TOP_D, BOTTOM_COVER_D, BOTTOM_EXTINCTION_D, BOTTOM_AMBIENT_D, BOTTOM_ABSORPTION_D, BOTTOM_LUMINANCE_D, BOTTOM_SUNLIGHT_POWER_D, BOTTOM_SKYLIGHT_POWER_D, BOTTOM_BOTTOM_DENSITY_D, BOTTOM_MIDDLE_DENSITY_D, BOTTOM_TOP_DENSITY_D, \
    TOP_SCALE_D, TOP_DETAIL_SCALE_D, TOP_STRETCH_D, TOP_BASE_CURL_D, TOP_DETAIL_CURL_D, TOP_BASE_CURL_SCALE_D, TOP_DETAIL_CURL_SCALE_D, TOP_SMOOTHNESS_D, TOP_SOFTNESS_D, TOP_BOTTOM_D, TOP_TOP_D, TOP_COVER_D, TOP_EXTINCTION_D, TOP_AMBIENT_D, TOP_ABSORPTION_D, TOP_LUMINANCE_D, TOP_SUNLIGHT_POWER_D, TOP_SKYLIGHT_POWER_D, TOP_BOTTOM_DENSITY_D, TOP_MIDDLE_DENSITY_D, TOP_TOP_DENSITY_D, \
    BOTTOM_SCALE_N, BOTTOM_DETAIL_SCALE_N, BOTTOM_STRETCH_N, BOTTOM_BASE_CURL_N, BOTTOM_DETAIL_CURL_N, BOTTOM_BASE_CURL_SCALE_N, BOTTOM_DETAIL_CURL_SCALE_N, BOTTOM_SMOOTHNESS_N, BOTTOM_SOFTNESS_N, BOTTOM_BOTTOM_N, BOTTOM_TOP_N, BOTTOM_COVER_N, BOTTOM_EXTINCTION_N, BOTTOM_AMBIENT_N, BOTTOM_ABSORPTION_N, BOTTOM_LUMINANCE_N, BOTTOM_SUNLIGHT_POWER_N, BOTTOM_SKYLIGHT_POWER_N, BOTTOM_BOTTOM_DENSITY_N, BOTTOM_MIDDLE_DENSITY_N, BOTTOM_TOP_DENSITY_N, \
    TOP_SCALE_N, TOP_DETAIL_SCALE_N, TOP_STRETCH_N, TOP_BASE_CURL_N, TOP_DETAIL_CURL_N, TOP_BASE_CURL_SCALE_N, TOP_DETAIL_CURL_SCALE_N, TOP_SMOOTHNESS_N, TOP_SOFTNESS_N, TOP_BOTTOM_N, TOP_TOP_N, TOP_COVER_N, TOP_EXTINCTION_N, TOP_AMBIENT_N, TOP_ABSORPTION_N, TOP_LUMINANCE_N, TOP_SUNLIGHT_POWER_N, TOP_SKYLIGHT_POWER_N, TOP_BOTTOM_DENSITY_N, TOP_MIDDLE_DENSITY_N, TOP_TOP_DENSITY_N) \
uniform float PRESET##BottomScale_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    bool ui_category_closed = true; \
    string ui_label = "Scale"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_SCALE_D; \
uniform float PRESET##BottomDetailScale_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Detail Scale"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_DETAIL_SCALE_D; \
uniform float PRESET##BottomStretch_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Stretch"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_STRETCH_D; \
uniform float PRESET##BottomBaseCurl_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Base Curl"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_BASE_CURL_D; \
uniform float PRESET##BottomDetailCurl_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Detail Curl"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_DETAIL_CURL_D; \
uniform float PRESET##BottomBaseCurlScale_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Base Curl Scale"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_BASE_CURL_SCALE_D; \
uniform float PRESET##BottomDetailCurlScale_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Detail Curl Scale"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_DETAIL_CURL_SCALE_D; \
uniform float PRESET##BottomSmoothness_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Smoothness"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_SMOOTHNESS_D; \
uniform float PRESET##BottomSoftness_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Softness"; \
    string ui_type = "drag"; \
    float ui_min = -1.00; \
    float ui_max = 1.00; \
    float ui_step = 0.01; \
> = BOTTOM_SOFTNESS_D; \
uniform float PRESET##BottomBottom_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Bottom Height"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 10000.00; \
    float ui_step = 1.0; \
> = BOTTOM_BOTTOM_D; \
uniform float PRESET##BottomTop_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Top Height"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 10000.00; \
    float ui_step = 1.0; \
> = BOTTOM_TOP_D; \
uniform float PRESET##BottomCover_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Coverage"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_COVER_D; \
uniform float PRESET##BottomExtinction_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Extinction"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_EXTINCTION_D; \
uniform float PRESET##BottomAmbientAmount_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Ambient Amount"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_AMBIENT_D; \
uniform float PRESET##BottomAbsorption_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Absorption"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_ABSORPTION_D; \
uniform float PRESET##BottomLuminance_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Luminance"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_LUMINANCE_D; \
uniform float PRESET##BottomSunLightPower_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Sun Light Power"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_SUNLIGHT_POWER_D; \
uniform float PRESET##BottomSkyLightPower_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Sky Light Power"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_SKYLIGHT_POWER_D; \
uniform float PRESET##BottomBottomDensity_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Bottom Density"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_BOTTOM_DENSITY_D; \
uniform float PRESET##BottomMiddleDensity_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Middle Density"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_MIDDLE_DENSITY_D; \
uniform float PRESET##BottomTopDensity_DAY < \
    string ui_category = #PRESET " Bottom Layer - DAY"; \
    string ui_label = "Top Density"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = BOTTOM_TOP_DENSITY_D; \
uniform float PRESET##TopScale_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
    bool ui_category_closed = true; \
	string ui_label = "Scale"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_SCALE_D; \
uniform float PRESET##TopDetailScale_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Detail Scale"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_DETAIL_SCALE_D; \
uniform float PRESET##TopStretch_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Stretch"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_STRETCH_D; \
uniform float PRESET##TopBaseCurl_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Base Curl"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_BASE_CURL_D; \
uniform float PRESET##TopDetailCurl_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Detail Curl"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_DETAIL_CURL_D; \
uniform float PRESET##TopBaseCurlScale_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Base Curl Scale"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_BASE_CURL_SCALE_D; \
uniform float PRESET##TopDetailCurlScale_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Detail Curl Scale"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_DETAIL_CURL_SCALE_D; \
uniform float PRESET##TopSmoothness_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Smoothness"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_SMOOTHNESS_D; \
uniform float PRESET##TopSoftness_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
    string ui_label = "Softness"; \
    string ui_type = "drag"; \
    float ui_min = -1.00; \
    float ui_max = 1.00; \
    float ui_step = 0.01; \
> = TOP_SOFTNESS_D; \
uniform float PRESET##TopBottom_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Bottom Height"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 10000.00; \
    float ui_step = 1.0; \
> = TOP_BOTTOM_D; \
uniform float PRESET##TopTop_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Top Height"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 10000.00; \
    float ui_step = 1.0; \
> = TOP_TOP_D; \
uniform float PRESET##TopCover_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Coverage"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_COVER_D; \
uniform float PRESET##TopExtinction_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Extinction"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_EXTINCTION_D; \
uniform float PRESET##TopAmbientAmount_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Ambient Amount"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_AMBIENT_D; \
uniform float PRESET##TopAbsorption_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Absorption"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_ABSORPTION_D; \
uniform float PRESET##TopLuminance_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Luminance"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_LUMINANCE_D; \
uniform float PRESET##TopSunLightPower_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Sun Light Power"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_SUNLIGHT_POWER_D; \
uniform float PRESET##TopSkyLightPower_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Sky Light Power"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_SKYLIGHT_POWER_D; \
uniform float PRESET##TopBottomDensity_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Bottom Density"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_BOTTOM_DENSITY_D; \
uniform float PRESET##TopMiddleDensity_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Middle Density"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_MIDDLE_DENSITY_D; \
uniform float PRESET##TopTopDensity_DAY < \
    string ui_category = #PRESET " Top Layer - DAY"; \
	string ui_label = "Top Density"; \
    string ui_type = "drag"; \
    float ui_min = 0.00; \
    float ui_max = 2.00; \
    float ui_step = 0.01; \
> = TOP_TOP_DENSITY_D; \
/* NIGHT PARAMETERS - Initially hidden from UI, values are set here based on DAY values */ \
uniform float PRESET##BottomScale_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Scale (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_SCALE_N; \
uniform float PRESET##BottomDetailScale_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Detail Scale (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_DETAIL_SCALE_N; \
uniform float PRESET##BottomStretch_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Stretch (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_STRETCH_N; \
uniform float PRESET##BottomBaseCurl_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Base Curl (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_BASE_CURL_N; \
uniform float PRESET##BottomDetailCurl_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Detail Curl (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_DETAIL_CURL_N; \
uniform float PRESET##BottomBaseCurlScale_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Base Curl Scale (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_BASE_CURL_SCALE_N; \
uniform float PRESET##BottomDetailCurlScale_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Detail Curl Scale (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_DETAIL_CURL_SCALE_N; \
uniform float PRESET##BottomSmoothness_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Smoothness (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_SMOOTHNESS_N; \
uniform float PRESET##BottomSoftness_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Softness (Night)"; string ui_type = "drag"; float ui_min = -1.00; float ui_max = 1.00; float ui_step = 0.01; > = BOTTOM_SOFTNESS_N; \
uniform float PRESET##BottomBottom_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Bottom Height (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 10000.00; float ui_step = 1.0; > = BOTTOM_BOTTOM_N; \
uniform float PRESET##BottomTop_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Top Height (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 10000.00; float ui_step = 1.0; > = BOTTOM_TOP_N; \
uniform float PRESET##BottomCover_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Coverage (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_COVER_N; \
uniform float PRESET##BottomExtinction_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Extinction (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_EXTINCTION_N; \
uniform float PRESET##BottomAmbientAmount_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Ambient Amount (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_AMBIENT_N; \
uniform float PRESET##BottomAbsorption_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Absorption (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_ABSORPTION_N; \
uniform float PRESET##BottomLuminance_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Luminance (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_LUMINANCE_N; \
uniform float PRESET##BottomSunLightPower_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Sun Light Power (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_SUNLIGHT_POWER_N; \
uniform float PRESET##BottomSkyLightPower_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Sky Light Power (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_SKYLIGHT_POWER_N; \
uniform float PRESET##BottomBottomDensity_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Bottom Density (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_BOTTOM_DENSITY_N; \
uniform float PRESET##BottomMiddleDensity_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Middle Density (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_MIDDLE_DENSITY_N; \
uniform float PRESET##BottomTopDensity_NIGHT <string ui_category = #PRESET " Bottom Layer - NIGHT"; bool hidden = false; string ui_label = "Top Density (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = BOTTOM_TOP_DENSITY_N; \
uniform float PRESET##TopScale_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool ui_category_closed = true; bool hidden = false; string ui_label = "Scale (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_SCALE_N; \
uniform float PRESET##TopDetailScale_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Detail Scale (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_DETAIL_SCALE_N; \
uniform float PRESET##TopStretch_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Stretch (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_STRETCH_N; \
uniform float PRESET##TopBaseCurl_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Base Curl (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_BASE_CURL_N; \
uniform float PRESET##TopDetailCurl_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Detail Curl (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_DETAIL_CURL_N; \
uniform float PRESET##TopBaseCurlScale_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Base Curl Scale (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_BASE_CURL_SCALE_N; \
uniform float PRESET##TopDetailCurlScale_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Detail Curl Scale (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_DETAIL_CURL_SCALE_N; \
uniform float PRESET##TopSmoothness_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Smoothness (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_SMOOTHNESS_N; \
uniform float PRESET##TopSoftness_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Softness (Night)"; string ui_type = "drag"; float ui_min = -1.00; float ui_max = 1.00; float ui_step = 0.01; > = TOP_SOFTNESS_N; \
uniform float PRESET##TopBottom_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Bottom Height (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 10000.00; float ui_step = 1.0; > = TOP_BOTTOM_N; \
uniform float PRESET##TopTop_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Top Height (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 10000.00; float ui_step = 1.0; > = TOP_TOP_N; \
uniform float PRESET##TopCover_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Coverage (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_COVER_N; \
uniform float PRESET##TopExtinction_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Extinction (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_EXTINCTION_N; \
uniform float PRESET##TopAmbientAmount_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Ambient Amount (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_AMBIENT_N; \
uniform float PRESET##TopAbsorption_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Absorption (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_ABSORPTION_N; \
uniform float PRESET##TopLuminance_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Luminance (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_LUMINANCE_N; \
uniform float PRESET##TopSunLightPower_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Sun Light Power (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_SUNLIGHT_POWER_N; \
uniform float PRESET##TopSkyLightPower_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Sky Light Power (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_SKYLIGHT_POWER_N; \
uniform float PRESET##TopBottomDensity_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Bottom Density (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_BOTTOM_DENSITY_N; \
uniform float PRESET##TopMiddleDensity_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Middle Density (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_MIDDLE_DENSITY_N; \
uniform float PRESET##TopTopDensity_NIGHT <string ui_category = #PRESET " Top Layer - NIGHT"; bool hidden = false; string ui_label = "Top Density (Night)"; string ui_type = "drag"; float ui_min = 0.00; float ui_max = 2.00; float ui_step = 0.01; > = TOP_TOP_DENSITY_N;

#define CLOUD_BOTTOM_LAYER(PRESET, IS_NIGHT_FACTOR) \
params.scale = lerp(PRESET##BottomScale_DAY, PRESET##BottomScale_NIGHT, IS_NIGHT_FACTOR); \
params.detailScale = lerp(PRESET##BottomDetailScale_DAY, PRESET##BottomDetailScale_NIGHT, IS_NIGHT_FACTOR); \
params.stretch = lerp(PRESET##BottomStretch_DAY, PRESET##BottomStretch_NIGHT, IS_NIGHT_FACTOR); \
params.baseCurl = lerp(PRESET##BottomBaseCurl_DAY, PRESET##BottomBaseCurl_NIGHT, IS_NIGHT_FACTOR); \
params.detailCurl = lerp(PRESET##BottomDetailCurl_DAY, PRESET##BottomDetailCurl_NIGHT, IS_NIGHT_FACTOR); \
params.baseCurlScale = lerp(PRESET##BottomBaseCurlScale_DAY, PRESET##BottomBaseCurlScale_NIGHT, IS_NIGHT_FACTOR); \
params.detailCurlScale = lerp(PRESET##BottomDetailCurlScale_DAY, PRESET##BottomDetailCurlScale_NIGHT, IS_NIGHT_FACTOR); \
params.smoothness = lerp(PRESET##BottomSmoothness_DAY, PRESET##BottomSmoothness_NIGHT, IS_NIGHT_FACTOR); \
params.softness = lerp(PRESET##BottomSoftness_DAY, PRESET##BottomSoftness_NIGHT, IS_NIGHT_FACTOR); \
params.bottom = lerp(PRESET##BottomBottom_DAY, PRESET##BottomBottom_NIGHT, IS_NIGHT_FACTOR); \
params.top = lerp(PRESET##BottomTop_DAY, PRESET##BottomTop_NIGHT, IS_NIGHT_FACTOR); \
params.cover = lerp(PRESET##BottomCover_DAY, PRESET##BottomCover_NIGHT, IS_NIGHT_FACTOR); \
params.extinction = lerp(PRESET##BottomExtinction_DAY, PRESET##BottomExtinction_NIGHT, IS_NIGHT_FACTOR); \
params.ambientAmount = lerp(PRESET##BottomAmbientAmount_DAY, PRESET##BottomAmbientAmount_NIGHT, IS_NIGHT_FACTOR); \
params.absorption = lerp(PRESET##BottomAbsorption_DAY, PRESET##BottomAbsorption_NIGHT, IS_NIGHT_FACTOR); \
params.luminance = lerp(PRESET##BottomLuminance_DAY, PRESET##BottomLuminance_NIGHT, IS_NIGHT_FACTOR); \
params.sunLightPower = lerp(PRESET##BottomSunLightPower_DAY, PRESET##BottomSunLightPower_NIGHT, IS_NIGHT_FACTOR); \
params.skyLightPower = lerp(PRESET##BottomSkyLightPower_DAY, PRESET##BottomSkyLightPower_NIGHT, IS_NIGHT_FACTOR); \
params.bottomDensity = lerp(PRESET##BottomBottomDensity_DAY, PRESET##BottomBottomDensity_NIGHT, IS_NIGHT_FACTOR); \
params.middleDensity = lerp(PRESET##BottomMiddleDensity_DAY, PRESET##BottomMiddleDensity_NIGHT, IS_NIGHT_FACTOR); \
params.topDensity = lerp(PRESET##BottomTopDensity_DAY, PRESET##BottomTopDensity_NIGHT, IS_NIGHT_FACTOR);

#define CLOUD_TOP_LAYER(PRESET, IS_NIGHT_FACTOR) \
params.scale = lerp(PRESET##TopScale_DAY, PRESET##TopScale_NIGHT, IS_NIGHT_FACTOR); \
params.detailScale = lerp(PRESET##TopDetailScale_DAY, PRESET##TopDetailScale_NIGHT, IS_NIGHT_FACTOR); \
params.stretch = lerp(PRESET##TopStretch_DAY, PRESET##TopStretch_NIGHT, IS_NIGHT_FACTOR); \
params.baseCurl = lerp(PRESET##TopBaseCurl_DAY, PRESET##TopBaseCurl_NIGHT, IS_NIGHT_FACTOR); \
params.detailCurl = lerp(PRESET##TopDetailCurl_DAY, PRESET##TopDetailCurl_NIGHT, IS_NIGHT_FACTOR); \
params.baseCurlScale = lerp(PRESET##TopBaseCurlScale_DAY, PRESET##TopBaseCurlScale_NIGHT, IS_NIGHT_FACTOR); \
params.detailCurlScale = lerp(PRESET##TopDetailCurlScale_DAY, PRESET##TopDetailCurlScale_NIGHT, IS_NIGHT_FACTOR); \
params.smoothness = lerp(PRESET##TopSmoothness_DAY, PRESET##TopSmoothness_NIGHT, IS_NIGHT_FACTOR); \
params.softness = lerp(PRESET##TopSoftness_DAY, PRESET##TopSoftness_NIGHT, IS_NIGHT_FACTOR); \
params.bottom = lerp(PRESET##TopBottom_DAY, PRESET##TopBottom_NIGHT, IS_NIGHT_FACTOR); \
params.top = lerp(PRESET##TopTop_DAY, PRESET##TopTop_NIGHT, IS_NIGHT_FACTOR); \
params.cover = lerp(PRESET##TopCover_DAY, PRESET##TopCover_NIGHT, IS_NIGHT_FACTOR); \
params.extinction = lerp(PRESET##TopExtinction_DAY, PRESET##TopExtinction_NIGHT, IS_NIGHT_FACTOR); \
params.ambientAmount = lerp(PRESET##TopAmbientAmount_DAY, PRESET##TopAmbientAmount_NIGHT, IS_NIGHT_FACTOR); \
params.absorption = lerp(PRESET##TopAbsorption_DAY, PRESET##TopAbsorption_NIGHT, IS_NIGHT_FACTOR); \
params.luminance = lerp(PRESET##TopLuminance_DAY, PRESET##TopLuminance_NIGHT, IS_NIGHT_FACTOR); \
params.sunLightPower = lerp(PRESET##TopSunLightPower_DAY, PRESET##TopSunLightPower_NIGHT, IS_NIGHT_FACTOR); \
params.skyLightPower = lerp(PRESET##TopSkyLightPower_DAY, PRESET##TopSkyLightPower_NIGHT, IS_NIGHT_FACTOR); \
params.bottomDensity = lerp(PRESET##TopBottomDensity_DAY, PRESET##TopBottomDensity_NIGHT, IS_NIGHT_FACTOR); \
params.middleDensity = lerp(PRESET##TopMiddleDensity_DAY, PRESET##TopMiddleDensity_NIGHT, IS_NIGHT_FACTOR); \
params.topDensity = lerp(PRESET##TopTopDensity_DAY, PRESET##TopTopDensity_NIGHT, IS_NIGHT_FACTOR);

// Weather Presets - DAY values are the original, NIGHT values are derived
// For NIGHT values, using general multipliers:
// cover * 0.7, extinction * 0.8, ambient * 0.4, absorption * 1.2, luminance * 0.3, sunPower * 0.05, skyPower * 0.2, densities * 0.7
// Specific cover multipliers: Clear/ExtraSunny: 0.3, Clouds/Clearing: 0.8, Foggy: 1.1, Others: 1.0

CLOUD_LAYER_PRESET_DAYNIGHT(Clear,
    // DAY Bottom Layer
    1.5, 0.5, 1.25, 0.5, 0.5, 1.0, 1.0, 2.0, 0.0, 450.0, 1000.0, 0.15, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 0.0,
    // DAY Top Layer
    2.0, 1.5, 3.0, 1.0, 2.0, 1.0, 1.5, 2.0, 0.0, 1000.0, 2000.0, 0.4, 1.0, 1.0, 0.75, 1.0, 1.0, 1.0, 0.75, 1.0, 0.7,
    // NIGHT Bottom Layer (Clear cover: 0.15 * 0.3 = 0.045)
    1.5, 0.5, 1.25, 0.5, 0.5, 1.0, 1.0, 2.0, 0.0, 450.0, 1000.0, 0.15*0.3, 1.0*0.8, 1.0*0.4, 1.0*1.2, 1.0*0.3, 1.0*0.05, 1.0*0.2, 2.0*0.3, 1.0*0.3, 0.0*0.3,
    // NIGHT Top Layer (Clear cover: 0.4 * 0.3 = 0.12)
    2.0, 1.5, 3.0, 1.0, 2.0, 1.0, 1.5, 2.0, 0.0, 1000.0, 2000.0, 0.4*0.3, 1.0*0.8, 1.0*0.4, 0.75*1.2, 1.0*0.3, 1.0*0.05, 1.0*0.2, 0.75*0.3, 1.0*0.3, 0.7*0.3
)
CLOUD_LAYER_PRESET_DAYNIGHT(ExtraSunny,
    // DAY Bottom Layer
    1.5, 0.5, 1.25, 0.5, 0.5, 1.0, 1.0, 1.5, 0.0, 450.0, 1200.0, 0.3, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 2.0, 1.0, 0.0,
    // DAY Top Layer
    2.0, 1.5, 3.0, 2.0, 1.0, 1.0, 1.5, 2.0, 0.0, 2500.0, 3500.0, 0.5, 1.0, 1.0, 0.75, 1.0, 1.0, 1.0, 0.75, 1.0, 0.75,
    // NIGHT Bottom Layer (ExtraSunny cover: 0.3 * 0.3 = 0.09)
    1.5, 0.5, 1.25, 0.5, 0.5, 1.0, 1.0, 1.5, 0.0, 450.0, 1200.0, 0.3*0.3, 1.0*0.8, 1.0*0.4, 1.0*1.2, 1.0*0.3, 1.0*0.05, 1.0*0.2, 2.0*0.3, 1.0*0.3, 0.0*0.3,
    // NIGHT Top Layer (ExtraSunny cover: 0.5 * 0.3 = 0.15)
    2.0, 1.5, 3.0, 2.0, 1.0, 1.0, 1.5, 2.0, 0.0, 2500.0, 3500.0, 0.5*0.3, 1.0*0.8, 1.0*0.4, 0.75*1.2, 1.0*0.3, 1.0*0.05, 1.0*0.2, 0.75*0.3, 1.0*0.3, 0.75*0.3
)
CLOUD_LAYER_PRESET_DAYNIGHT(Clouds,
    // DAY Bottom Layer
    3.0, 0.25, 0.9, 0.25, 0.15, 1.0, 1.0, 0.35, 0.0, 350.0, 1000.0, 0.45, 1.0, 1.0, 1.25, 1.25, 1.0, 1.0, 2.0, 1.0, 0.0,
    // DAY Top Layer
    2.0, 1.5, 3.0, 1.0, 1.0, 1.0, 1.5, 1.5, 0.0, 1000.0, 3000.0, 0.3, 1.0, 1.0, 0.75, 1.0, 1.0, 1.0, 0.75, 1.0, 1.0,
    // NIGHT Bottom Layer (Clouds cover: 0.45 * 0.8 = 0.36)
    3.0, 0.25, 0.9, 0.25, 0.15, 1.0, 1.0, 0.35, 0.0, 350.0, 1000.0, 0.45*0.8, 1.0*0.8, 1.0*0.4, 1.25*1.2, 1.25*0.3, 1.0*0.05, 1.0*0.2, 2.0*0.8, 1.0*0.8, 0.0*0.8,
    // NIGHT Top Layer (Clouds cover: 0.3 * 0.8 = 0.24)
    2.0, 1.5, 3.0, 1.0, 1.0, 1.0, 1.5, 1.5, 0.0, 1000.0, 3000.0, 0.3*0.8, 1.0*0.8, 1.0*0.4, 0.75*1.2, 1.0*0.3, 1.0*0.05, 1.0*0.2, 0.75*0.8, 1.0*0.8, 1.0*0.8
)
CLOUD_LAYER_PRESET_DAYNIGHT(Overcast,
    // DAY Bottom Layer
    1.5, 0.5, 1.25, 0.25, 0.25, 1.0, 1.0, 1.5, 0.0, 400.0, 1500.0, 0.45, 1.0, 1.25, 0.75, 1.0, 1.0, 1.0, 1.5, 0.5, 0.0,
    // DAY Top Layer
    2.0, 1.5, 3.0, 1.5, 0.75, 1.0, 1.5, 1.5, 0.0, 1500.0, 3000.0, 0.55, 1.0, 1.0, 0.75, 1.0, 1.0, 1.0, 0.75, 1.0, 0.75,
    // NIGHT Bottom Layer (Overcast cover: 0.45 * 1.0 = 0.45)
    1.5, 0.5, 1.25, 0.25, 0.25, 1.0, 1.0, 1.5, 0.0, 400.0, 1500.0, 0.45*1.0, 1.0*0.8, 1.25*0.4, 0.75*1.2, 1.0*0.3, 1.0*0.05, 1.0*0.2, 1.5*1.0, 0.5*1.0, 0.0*1.0,
    // NIGHT Top Layer (Overcast cover: 0.55 * 1.0 = 0.55)
    2.0, 1.5, 3.0, 1.5, 0.75, 1.0, 1.5, 1.5, 0.0, 1500.0, 3000.0, 0.55*1.0, 1.0*0.8, 1.0*0.4, 0.75*1.2, 1.0*0.3, 1.0*0.05, 1.0*0.2, 0.75*1.0, 1.0*1.0, 0.75*1.0
)
CLOUD_LAYER_PRESET_DAYNIGHT(Rain,
    // DAY Bottom Layer
    2.0, 1.0, 1.5, 0.5, 0.75, 1.0, 1.0, 0.75, 0.0, 200.0, 1500.0, 0.4, 1.0, 0.75, 1.5, 1.5, 1.0, 1.0, 2.0, 1.5, 0.5,
    // DAY Top Layer
    2.0, 1.5, 2.5, 1.0, 0.75, 1.0, 1.5, 1.25, 0.0, 1500.0, 2500.0, 0.65, 1.0, 0.75, 0.75, 1.0, 1.0, 1.0, 0.75, 1.0, 0.75,
    // NIGHT Bottom Layer (Rain cover: 0.4 * 1.0 = 0.4)
    2.0, 1.0, 1.5, 0.5, 0.75, 1.0, 1.0, 0.75, 0.0, 200.0, 1500.0, 0.4*1.0, 1.0*0.8, 0.75*0.4, 1.5*1.2, 1.5*0.3, 1.0*0.05, 1.0*0.2, 2.0*1.0, 1.5*1.0, 0.5*1.0,
    // NIGHT Top Layer (Rain cover: 0.65 * 1.0 = 0.65)
    2.0, 1.5, 2.5, 1.0, 0.75, 1.0, 1.5, 1.25, 0.0, 1500.0, 2500.0, 0.65*1.0, 1.0*0.8, 0.75*0.4, 0.75*1.2, 1.0*0.3, 1.0*0.05, 1.0*0.2, 0.75*1.0, 1.0*1.0, 0.75*1.0
)
CLOUD_LAYER_PRESET_DAYNIGHT(Clearing,
    // DAY Bottom Layer
    1.75, 0.75, 1.35, 0.5, 0.65, 1.0, 1.0, 1.25, 0.0, 325.0, 1250.0, 0.3, 1.0, 0.85, 1.15, 0.6, 1.0, 1.0, 1.75, 1.25, 0.25,
    // DAY Top Layer
    2.0, 1.5, 2.75, 1.0, 1.35, 1.0, 1.5, 1.5, 0.0, 1250.0, 2250.0, 0.55, 1.0, 0.95, 1.0, 0.6, 1.0, 1.0, 0.85, 1.0, 0.75,
    // NIGHT Bottom Layer (Clearing cover: 0.3 * 0.8 = 0.24)
    1.75, 0.75, 1.35, 0.5, 0.65, 1.0, 1.0, 1.25, 0.0, 325.0, 1250.0, 0.3*0.8, 1.0*0.8, 0.85*0.4, 1.15*1.2, 0.6*0.3, 1.0*0.05, 1.0*0.2, 1.75*0.8, 1.25*0.8, 0.25*0.8,
    // NIGHT Top Layer (Clearing cover: 0.55 * 0.8 = 0.44)
    2.0, 1.5, 2.75, 1.0, 1.35, 1.0, 1.5, 1.5, 0.0, 1250.0, 2250.0, 0.55*0.8, 1.0*0.8, 0.95*0.4, 1.0*1.2, 0.6*0.3, 1.0*0.05, 1.0*0.2, 0.85*0.8, 1.0*0.8, 0.75*0.8
)
CLOUD_LAYER_PRESET_DAYNIGHT(Thunder,
    // DAY Bottom Layer
    2.0, 0.25, 1.15, 0.25, 0.5, 1.25, 1.25, 0.65, 0.0, 400.0, 2000.0, 0.4, 1.0, 0.75, 1.5, 1.5, 1.0, 1.0, 2.5, 1.25, 1.55,
    // DAY Top Layer
    2.0, 0.25, 2.0, 0.25, 0.5, 1.5, 1.0, 2.0, 0.0, 3000.0, 4000.0, 0.85, 1.0, 0.75, 0.35, 1.0, 1.0, 1.0, 0.75, 1.0, 0.75,
    // NIGHT Bottom Layer (Thunder cover: 0.4 * 1.0 = 0.4)
    2.0, 0.25, 1.15, 0.25, 0.5, 1.25, 1.25, 0.65, 0.0, 400.0, 2000.0, 0.4*1.0, 1.0*0.8, 0.75*0.4, 1.5*1.2, 1.5*0.3, 1.0*0.05, 1.0*0.2, 2.5*1.0, 1.25*1.0, 1.55*1.0,
    // NIGHT Top Layer (Thunder cover: 0.85 * 1.0 = 0.85)
    2.0, 0.25, 2.0, 0.25, 0.5, 1.5, 1.0, 2.0, 0.0, 3000.0, 4000.0, 0.85*1.0, 1.0*0.8, 0.75*0.4, 0.35*1.2, 1.0*0.3, 1.0*0.05, 1.0*0.2, 0.75*1.0, 1.0*1.0, 0.75*1.0
)
CLOUD_LAYER_PRESET_DAYNIGHT(Smog,
    // DAY Bottom Layer
    2.0, 0.5, 2.5, 0.25, 0.75, 1.0, 1.0, 1.25, 0.0, 400.0, 1500.0, 0.43, 1.0, 1.0, 1.25, 0.5, 1.0, 1.0, 1.5, 0.5, 0.0,
    // DAY Top Layer
    1.5, 1.5, 5.0, 1.5, 0.75, 1.0, 1.5, 1.25, 0.0, 1500.0, 3000.0, 0.4, 1.0, 0.6, 0.75, 0.45, 1.0, 1.0, 0.75, 1.0, 0.75,
    // NIGHT Bottom Layer (Smog cover: 0.43 * 1.0 = 0.43)
    2.0, 0.5, 2.5, 0.25, 0.75, 1.0, 1.0, 1.25, 0.0, 400.0, 1500.0, 0.43*1.0, 1.0*0.8, 1.0*0.4, 1.25*1.2, 0.5*0.3, 1.0*0.05, 1.0*0.2, 1.5*1.0, 0.5*1.0, 0.0*1.0,
    // NIGHT Top Layer (Smog cover: 0.4 * 1.0 = 0.4)
    1.5, 1.5, 5.0, 1.5, 0.75, 1.0, 1.5, 1.25, 0.0, 1500.0, 3000.0, 0.4*1.0, 1.0*0.8, 0.6*0.4, 0.75*1.2, 0.45*0.3, 1.0*0.05, 1.0*0.2, 0.75*1.0, 1.0*1.0, 0.75*1.0
)
CLOUD_LAYER_PRESET_DAYNIGHT(Foggy,
    // DAY Bottom Layer
    5.0, 0.5, 2.0, 0.25, 0.15, 1.0, 1.0, 1.0, 0.0, 0.0, 700.0, 1.0, 1.0, 1.0, 2.0, 0.5, 1.0, 1.0, 1.1, 0.25, 0.0,
    // DAY Top Layer
    2.0, 1.5, 3.0, 1.0, 1.0, 1.0, 1.5, 1.5, 0.0, 2000.0, 3000.0, 0.0, 1.0, 1.0, 0.75, 1.0, 1.0, 1.0, 0.75, 1.0, 1.0,
    // NIGHT Bottom Layer (Foggy cover: 1.0 * 1.1 = 1.1)
    5.0, 0.5, 2.0, 0.25, 0.15, 1.0, 1.0, 1.0, 0.0, 0.0, 700.0, 1.0*1.1, 1.0*0.8, 1.0*0.4, 2.0*1.2, 0.5*0.3, 1.0*0.05, 1.0*0.2, 1.1*1.1, 0.25*1.1, 0.0*1.1,
    // NIGHT Top Layer (Foggy cover: 0.0 * 1.1 = 0.0)
    2.0, 1.5, 3.0, 1.0, 1.0, 1.0, 1.5, 1.5, 0.0, 2000.0, 3000.0, 0.0*1.1, 1.0*0.8, 1.0*0.4, 0.75*1.2, 1.0*0.3, 1.0*0.05, 1.0*0.2, 0.75*1.1, 1.0*1.1, 1.0*1.1
)
CLOUD_LAYER_PRESET_DAYNIGHT(Snow,
    // DAY Bottom Layer
    2.0, 1.0, 1.75, 0.35, 0.45, 1.0, 1.0, 0.75, 0.0, 175.0, 1000.0, 0.65, 1.0, 0.85, 1.25, 0.6, 1.0, 1.0, 0.5, 1.0, 0.0,
    // DAY Top Layer
    1.75, 0.75, 1.35, 0.5, 0.65, 1.0, 1.0, 1.25, 0.0, 1500.0, 2000.0, 0.3, 1.0, 0.85, 1.15, 0.75, 1.0, 1.0, 1.75, 1.25, 0.25,
    // NIGHT Bottom Layer (Snow cover: 0.65 * 1.0 = 0.65)
    2.0, 1.0, 1.75, 0.35, 0.45, 1.0, 1.0, 0.75, 0.0, 175.0, 1000.0, 0.65*1.0, 1.0*0.8, 0.85*0.4, 1.25*1.2, 0.6*0.3, 1.0*0.05, 1.0*0.2, 0.5*1.0, 1.0*1.0, 0.0*1.0,
    // NIGHT Top Layer (Snow cover: 0.3 * 1.0 = 0.3)
    1.75, 0.75, 1.35, 0.5, 0.65, 1.0, 1.0, 1.25, 0.0, 1500.0, 2000.0, 0.3*1.0, 1.0*0.8, 0.85*0.4, 1.15*1.2, 0.75*0.3, 1.0*0.05, 1.0*0.2, 1.75*1.0, 1.25*1.0, 0.25*1.0
)
CLOUD_LAYER_PRESET_DAYNIGHT(Blizzard,
    // DAY Bottom Layer
    2.0, 1.0, 1.75, 0.35, 0.45, 1.0, 1.0, 0.75, 0.0, 175.0, 1000.0, 0.5, 1.0, 0.85, 1.25, 0.7, 1.0, 1.0, 1.5, 1.0, 0.0,
    // DAY Top Layer
    1.75, 0.75, 1.35, 0.5, 0.65, 1.0, 1.0, 1.25, 0.0, 1500.0, 2000.0, 0.8, 1.0, 0.85, 1.15, 0.75, 1.0, 1.0, 1.0, 0.5, 0.5,
    // NIGHT Bottom Layer (Blizzard cover: 0.5 * 1.0 = 0.5)
    2.0, 1.0, 1.75, 0.35, 0.45, 1.0, 1.0, 0.75, 0.0, 175.0, 1000.0, 0.5*1.0, 1.0*0.8, 0.85*0.4, 1.25*1.2, 0.7*0.3, 1.0*0.05, 1.0*0.2, 1.5*1.0, 1.0*1.0, 0.0*1.0,
    // NIGHT Top Layer (Blizzard cover: 0.8 * 1.0 = 0.8)
    1.75, 0.75, 1.35, 0.5, 0.65, 1.0, 1.0, 1.25, 0.0, 1500.0, 2000.0, 0.8*1.0, 1.0*0.8, 0.85*0.4, 1.15*1.2, 0.75*0.3, 1.0*0.05, 1.0*0.2, 1.0*1.0, 0.5*1.0, 0.5*1.0
)
CLOUD_LAYER_PRESET_DAYNIGHT(SnowLight,
    // DAY Bottom Layer
    2.0, 1.0, 1.75, 0.35, 0.35, 1.0, 1.0, 0.75, 0.0, 175.0, 1000.0, 0.5, 1.0, 1.0, 1.25, 1.0, 1.0, 1.0, 0.5, 1.0, 0.0,
    // DAY Top Layer
    1.75, 0.75, 1.35, 0.5, 0.65, 1.0, 1.0, 1.25, 0.0, 1500.0, 2000.0, 0.3, 1.0, 0.85, 1.15, 1.0, 1.0, 1.0, 1.75, 1.25, 0.25,
    // NIGHT Bottom Layer (SnowLight cover: 0.5 * 1.0 = 0.5)
    2.0, 1.0, 1.75, 0.35, 0.35, 1.0, 1.0, 0.75, 0.0, 175.0, 1000.0, 0.5*1.0, 1.0*0.8, 1.0*0.4, 1.25*1.2, 1.0*0.3, 1.0*0.05, 1.0*0.2, 0.5*1.0, 1.0*1.0, 0.0*1.0,
    // NIGHT Top Layer (SnowLight cover: 0.3 * 1.0 = 0.3)
    1.75, 0.75, 1.35, 0.5, 0.65, 1.0, 1.0, 1.25, 0.0, 1500.0, 2000.0, 0.3*1.0, 1.0*0.8, 0.85*0.4, 1.15*1.2, 1.0*0.3, 1.0*0.05, 1.0*0.2, 1.75*1.0, 1.25*1.0, 0.25*1.0
)
CLOUD_LAYER_PRESET_DAYNIGHT(Halloween,
    // DAY Bottom Layer
    3.0, 0.25, 0.9, 1.0, 0.5, 1.0, 1.0, 0.35, 0.0, 350.0, 1000.0, 0.45, 1.0, 1.0, 1.25, 1.25, 1.0, 1.0, 2.0, 1.0, 0.0,
    // DAY Top Layer
    2.0, 1.5, 3.0, 2.0, 2.0, 1.0, 1.5, 1.5, 0.0, 1000.0, 3000.0, 0.3, 1.0, 1.0, 0.75, 1.0, 1.0, 1.0, 0.75, 1.0, 1.0,
    // NIGHT Bottom Layer (Halloween cover: 0.45 * 1.0 = 0.45)
    3.0, 0.25, 0.9, 1.0, 0.5, 1.0, 1.0, 0.35, 0.0, 350.0, 1000.0, 0.45*1.0, 1.0*0.8, 1.0*0.4, 1.25*1.2, 1.25*0.3, 1.0*0.05, 1.0*0.2, 2.0*1.0, 1.0*1.0, 0.0*1.0,
    // NIGHT Top Layer (Halloween cover: 0.3 * 1.0 = 0.3)
    2.0, 1.5, 3.0, 2.0, 2.0, 1.0, 1.5, 1.5, 0.0, 1000.0, 3000.0, 0.3*1.0, 1.0*0.8, 1.0*0.4, 0.75*1.2, 1.0*0.3, 1.0*0.05, 1.0*0.2, 0.75*1.0, 1.0*1.0, 1.0*1.0
)

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
    float luminance;
    float sunLightPower;
    float skyLightPower;
    float bottomDensity;
    float middleDensity;
    float topDensity;
};