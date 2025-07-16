/**
 * RainDrops.hlsl
 *
 * ReShade Shader by GPT-4
 *
 * This shader simulates raindrops on the screen.
 */

#include "ReShade.fxh"

// CBuffer
cbuffer _Globals
{
    float4 vec1;
    float4 vec2;
    float4 vec3;
    float4 vec4;
    float4 vvec1;
    float4 vvec2;
    float4 vvec3;
    float4 vvec4;
    float asis_weather;
    float asis_daytime;
    float asis_clock_timer;
    float asis_cloud_inensity;
    float asis_cloud_freq;
    float asis_cloud_amp;
    float asis_cloud_seed;
    float4 asis_brightness_list;
    float3 asis_atmoshereCloudColor;
    float asis_sandstrom_intensity;
    bool asis_cloud_toggle;
    bool asis_raindrop_toggle;
    bool asis_sand_toggle;
    bool asis_cloud_lapse;
    float3 asis_campos;
    float3 asis_sunDirection;
    float3 asis_VehiclePosition;
    float3 asis_VehicleMax;
    float3 asis_VehicleMin;
    float3 asis_camdel;
    float3 asis_raindropvel1;
    float3 asis_raindropvel2;
    float timer;
};

// Texture and Sampler definitions
texture BackBufferTex : COLOR;
sampler BackBuffer { Texture = BackBufferTex; };

// Noise function
float2 N(float2 i)
{
    i = frac(i * float2(534.34, 765.432));
    i += dot(i, i + 43.45);
    return frac(i * float2(1452.45, 1452.45));
}

// Pixel shader
float4 PS_RainDrops(float4 pos : SV_POSITION, float2 texcoord : TEXCOORD) : SV_TARGET
{
    // Check if the effect is enabled
    if (!asis_raindrop_toggle)
        return tex2D(BackBuffer, texcoord);

    // Get UV coordinates and time
    float2 uv = texcoord;
    float T = asis_clock_timer;

    // Create a lens effect
    float2 aspect = float2(1.777, 1.0);
    float2 uv2 = (uv - 0.5) * aspect;
    float lens = smoothstep(0.0, 0.5, length(uv2));
    lens = pow(lens, 2.0) * (3.0 - 2.0 * lens);

    // Create a general wetness effect
    float wet = smoothstep(-0.3, 0.3, uv2.x);
    wet = pow(wet, 2.0) * (3.0 - 2.0 * wet);
    wet *= lens;

    // Create two layers of raindrops with different velocities
    float2 drop_uv = lerp(uv, uv + asis_raindropvel1.xy, 0.5);
    drop_uv *= 5.0;
    float2 drop_uv2 = lerp(uv, uv + asis_raindropvel2.xy, 0.5);
    drop_uv2 *= 1.25;
    
    // Time variables for animation
    float t = T * 0.003;
    float t2 = T * 0.012;

    // Generate raindrop patterns
    float drops = 0.0;
    float drops2 = 0.0;

    // First layer of drops
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            float2 grid = floor(drop_uv) + float2(i, j);
            float2 frac_uv = frac(drop_uv) - 0.5;
            float2 p = grid + frac_uv;
            float2 n = N(p);
            float d = length(frac_uv - (n - 0.5) * 0.4);
            float r = n.x * 0.005 * wet;
            drops = min(drops, smoothstep(r, 0.0, d));
        }
    }

    // Second layer of drops
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            float2 grid = floor(drop_uv2) + float2(i, j);
            float2 frac_uv = frac(drop_uv2) - 0.5;
            float2 p = grid + frac_uv;
            float2 n = N(p);
            float d = length(frac_uv - (n - 0.5) * 0.4);
            float r = n.x * 0.005 * wet;
            drops2 = min(drops2, smoothstep(r, 0.0, d));
        }
    }

    // Calculate distortion based on raindrop patterns
    float distortion = (drops + drops2) * 0.1;
    float2 distort_uv = uv + distortion;

    // Calculate blur based on wetness and raindrops
    float blur = (wet + (drops + drops2) * 1.25 - 1.0) * 0.666667;
    blur = pow(blur, 2.0) * (3.0 - 2.0 * blur);

    // Get the original color
    float4 color = tex2D(BackBuffer, uv);

    // Apply blur to the distorted image
    float4 blurred_color = 0;
    for (int i = -8; i < 8; i++)
    {
        float2 offset = float2(i * 0.000884, i * 0.001413);
        blurred_color += tex2D(BackBuffer, distort_uv + offset);
    }
    blurred_color /= 16.0;

    // Combine the original color with the blurred color
    return lerp(color, blurred_color, blur * wet);
}

// Technique definition
technique RainDrops
{
    pass
    {
        PixelShader = PS_RainDrops;
    }
}
