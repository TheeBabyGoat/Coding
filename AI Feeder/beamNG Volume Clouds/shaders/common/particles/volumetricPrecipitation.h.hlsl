#ifndef VOLUMETRIC_PRECIPITATION_H_HLSL
#define VOLUMETRIC_PRECIPITATION_H_HLSL

uniform Texture2D<float4> diffuseMap : register(t0);

struct Conn
{
    float4 position : POSITION;
    float4 texCoord : TEXCOORD0;
    float4 color : COLOR0;
};

cbuffer perDraw
{
    uniform float4x4 modelview;
    uniform float2 fadeStartEnd;
    uniform float3 cameraPos;
    uniform float3 ambient;
};

#endif
