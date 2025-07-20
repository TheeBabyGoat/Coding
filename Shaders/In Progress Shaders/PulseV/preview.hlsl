#include "include/noise.fxh"

#define FREQ 8.0
#define CURLFREQ 8.0
#define CURLDISTORTION 0.0025

cbuffer Global: register(b0)
{
    float4 resolution; // Width, Height, DPI, AspectRatio
    float time;
    float timeDelta;
    int frame;
    int ticks;
    int4 date; // as Year, Month, Day of month, Day since Jan.1st
    int4 clock; // as Hour, Minutes, Seconds, isDaylight Savings.
    int4 mouse; // Mouse.x, Mouse.y, z=(1)LeftClick (2)DoubleClick, w=(1)RightClick (2)DoubleClick
    int random; // from CPU rand() * RAND_MAX
    
    int perfHigh; // from QueryPerformanceCounter high-resolution time stamp
    int perfLow; // int64 split in 2x int32 High Low.
};

struct VSInput
{
    float3 position: POSITION;
    float4 color: COLOR;
    float2 texuv0: TEXCOORD0;
    float2 texuv1: TEXCOORD1;
    float3 normal: NORMAL;
    float3 tangent: TANGENT;
    float3 bitangent: BITANGENT;
};

struct PSInput
{
    float4 position: SV_POSITION;
    float4 color: COLOR;
    float2 texuv0: TEXCOORD0;
    float2 texuv1: TEXCOORD1;
    float3 normal: NORMAL;
    float3 tangent: TANGENT;
    float3 bitangent: BITANGENT;
    //float frontface : VFACE;
};


PSInput VSMain(VSInput input)
{
    PSInput result;

    result.position = float4(input.position, 1);
    result.color = input.color;
    result.texuv0 = input.texuv0;
    result.texuv1 = input.texuv1;
    result.normal = input.normal;
    result.tangent = input.tangent;
    result.bitangent = input.bitangent;
    //result.frontface = input.frontface;
    //result.depth = input.depth;

    return result;
}

float4 PSMain(PSInput input): SV_TARGET
{
    // "Uniforms"
    float uvz = mouse.y / resolution.y;
    float freq = 1.0 + (mouse.x / resolution.x) * (FREQ - 1.0);
    float4 dividers = float4(0.0, 0.0, 1.0, 2.0); // RGB = color, W = thickness in pixels
    
    // Sampling position
    float2 uv = input.position.xy / resolution.xy;
    float2 posxy = input.position.xy / resolution.y;
    float3 pos = float3(posxy, uvz);
    
    //return float4(hash33(pos * 8.0), 1.0);
    
    // Noise
    float4 worl = generateNoise(pos, FREQ);
    float3 curl = generateCurlnoise(pos.xy, CURLFREQ, CURLDISTORTION);
    
    float noise = 0.0;
    
    // 4 tiles for worley, 3 for curl
    if (uv.y < 0.5)
    {
        noise = worl.w;
        
        if (uv.x > 0.25)
            noise = worl.x;
        if (uv.x > 0.5)
            noise = worl.y;
        if (uv.x > 0.75)
            noise = worl.z;
    }
    else
    {
        noise = curl.x;
        
        if (uv.x > 1.0 / 3.0)
            noise = curl.y;
        if (uv.x > 2.0 / 3.0)
            noise = curl.z;
    }
    
    float thickness = dividers.w / resolution.x;
    float divider = smoothstep(thickness * resolution.w, 0.0, abs(uv.y - 0.5));
    if (uv.y < 0.5)
    {
        divider += smoothstep(thickness, 0.0, abs(uv.x - 0.25));
        divider += smoothstep(thickness, 0.0, abs(uv.x - 0.5));
        divider += smoothstep(thickness, 0.0, abs(uv.x - 0.75));
    }
    else
    {
        divider += smoothstep(thickness, 0.0, abs(uv.x - 1.0 / 3.0));
        divider += smoothstep(thickness, 0.0, abs(uv.x - 2.0 / 3.0));
    }
    
    return float4(lerp(noise, dividers.rgb, divider), 1.0);
}