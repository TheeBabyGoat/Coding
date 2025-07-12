#pragma once

#include "include/math.fxh"

#define CLOUD_HEIGHT_OFFSET -100.0


uniform float4 azimuthColor <
    string source = "wf_azimuth_color";
>;
uniform float4 azimuthEastColor <
    string source = "wf_azimuth_east_color";
>;
uniform float4 atmospherics1 <
    string source = "wf_atmospherics_1";
>;
uniform float4 atmospherics2 <
    string source = "wf_atmospherics_2";
>;
uniform float4 skyColor <
    string source = "wf_sky_color";
>;
uniform float4 sunCentre <
    string source = "wf_sun_centre";
>;
uniform float4 sunDirection <
    string source = "wf_sun_direction";
>;
uniform float4 sunColor <
    string source = "wf_sun_color";
>;
uniform float4 sunsetColor <
    string source = "wf_sunset_color";
>;

static const float sunHdr = 0.562500;


int getWeatherPreset(int weatherType)
{
    // 0 =  CLEAR
	// 1 =  FAIR
	// 2 =  CLOUDY
	// 3 =  RAINY
	// 4 =  STORMY
	// 5 =  SNOWY
	// 6 =  INTERIOR_CLEAR
	// 7 =  INTERIOR_FAIR
	// 8 =  INTERIOR_CLOUDY
	// 9 =  INTERIOR_RAINY
	// 10 = INTERIOR_STORMY
	// 11 = INTERIOR_SNOWY
	// 12 = CAVE
	// 13 = THIEVES
	// 14 = FOREST
	// 15 = LOCATION_A
	// 16 = LOCATION_B
	// 17 = LOCATION_C
	// 18 = INTERIOR_THIEVES
	// 19 = INTERIOR_FOREST
	// 20 = INTERIOR_LOCATION_A
	// 21 = INTERIOR_LOCATION_B
	// 22 = INTERIOR_LOCATION_C
    
    switch (weatherType)
    {
        case 0:
        case 6:
            return 0;
        case 1:
        case 7:
            return 1;
        case 2:
        case 8:
            return 2;
        case 3:
        case 9:
            return 4;
        case 4:
        case 10:
            return 6;
        case 5:
        case 11:
            return 9;
        default:
            return 0;
    }
    
    return -1;
}

float3 getSunDirection()
{
    return sunDirection.xyz;
}

float3 getSunBaseColor()
{
    return max(0.0.xxx, sunColor.rgb * 255.0 * sunColor.w);
}

float2 calcSunSize()
{
    const float min_size = 0.965;
    const float max_size = 0.8;

    const float delta_size = min_size - max_size;

    float sz = min_size - ((0.2 / 10) * delta_size);
	
    float sz2 = (1 - 0.2) * 130;
	
    sz2 = sz2 * delta_size + 8;

    return float2(sz, sz2);
}

float4 getSunLight(float3 viewDir, float3 sunDir, float zenith)
{
    const float2 sunSize = float2(0.9617, 25.16);

    float3 angle = saturate(dot(viewDir, sunDir) * float3(0.5 * sunSize.y, -0.0625, 0.5) + float3((0.5 - sunSize.x) * sunSize.y, 1 - 0.0625, 0.5));
	
    float attenuation = pow(angle.x, 32.0);
    attenuation -= pow(angle.y, 3.0) * saturate(zenith + 0.6);

    float sunAttenuation = attenuation.x + angle.z;
    float sun = saturate(0.5 * sunAttenuation);
    sun *= 4.0;
	
    float centre = smoothstep(sunCentre.x, sunCentre.y, angle.z) * sunCentre.z;
    sun += centre;

    float4 sunOutput = float4(sun.xxx, saturate(sun));
    sunOutput.rgb *= sunColor.rgb;
    sunOutput.rgb += pow(sunOutput.rgb, 4.0);
    
    return sunOutput * sunHdr * sunColor.w;
}

float3 getSkyColor(float3 viewDir, float sunAmount)
{
    const float3 sunDir = getSunDirection();
    const float azimuthHeight = atmospherics1.z;
    const float azimuthStrength = atmospherics2.w;
	
    float4 azimuthColorAndFade;
    azimuthColorAndFade.w = (1.0 - saturate(viewDir.y * azimuthHeight)) * azimuthStrength;
    float azimuthColorZone = dot(viewDir.xz, float2(1.0, 0.0)) * 0.5 + 0.5;
    azimuthColorAndFade.rgb = lerp(azimuthEastColor.rgb, azimuthColor.rgb, azimuthColorZone);
    azimuthColorAndFade.rgb *= azimuthColorAndFade.w;
	
    float3 sky = skyColor.rgb + azimuthColorAndFade.rgb;
    
    if (sunAmount > 0.01)
    {
        float4 sun = getSunLight(viewDir, sunDir, sunDirection.w);
        sky += lerp(sky, saturate(sky * sun.w) + max(sun.rgb, 0.0.xxx), sunAmount);
    }
    
    sky += sunsetColor.rgb * dot(viewDir, sunDir) * sunHdr;
    
    return max(skyColor.rgb, pow(sky, 0.6));
}