#ifndef VOLUMETRIC_CLOUDS_H_HLSL
#define VOLUMETRIC_CLOUDS_H_HLSL

#include "shaders/common/bng.hlsl"
#define BNG_COMPUTE_4_LIGHTS_BACKLIGHT
#include "shaders/common/lighting.h.hlsl"
#include "postFx.h.hlsl"

//uniform_sampler2D(backBuffer, 0);
uniform_sampler2D(prepassTex, 0);
uniform_sampler2D(prepassDepthTex, 1);
uniform Texture2D<float4> cloudShape : register(t2);
uniform Texture2D<float3> cloudDetail : register(t3);
uniform Texture2D<float2> densityGradients : register(t4);
uniform Texture2D<float> blueNoise : register(t5);

SamplerState cloudSampler
{
    Filter = MIN_MAG_MIP_LINEAR;
    AddressU = Wrap;
    AddressV = Wrap;
};

cbuffer perDraw
{
    uniform float4 fogColor; // Global

    uniform float3 eyePosWorld; // Global
    uniform float3 fogData; // Global
    uniform float3 ambientColor; // Global
    uniform float3 sunColor; // Global
    uniform float3 lightDirection; // Global

    uniform float2 windOffset;
    uniform float3 cloudBaseColor;
    uniform float2 screenResolution;

    uniform float cloudCoverage;
    uniform float cloudExposure;
    uniform float farPlane;
    
    uniform float frame;

    PURE_POSTFX_UNIFORMS
    BNG_LIGHTING_UNIFORMS
};

#include "shaders/common/lighting.hlsl"
#include "postFx.hlsl"

#endif //VOLUMETRIC_CLOUDS_H_HLSL
