// NGVFreezing.fx

#include "ReShade.fxh"

// === Texture Setup ===
texture frostTex < source = "NGV_Frost.png"; >
{
    Width = 512;
    Height = 512;
};

sampler2D frostSampler
{
    Texture = frostTex;
    AddressU = WRAP;
    AddressV = WRAP;
    MinFilter = Linear;
    MagFilter = Linear;
    MipFilter = Linear;
};

// === Main Settings ===
uniform float FrostIntensity < ui_label = "Frost Distortion Strength"; ui_type = "drag"; ui_min = 0.0; ui_max = 2.0; > = 0.5;
uniform float FrostOpacity   < ui_label = "Frost Opacity"; ui_type = "drag"; ui_min = 0.0; ui_max = 2.0; > = 1.0;
uniform float2 FrostScale    < ui_label = "Frost Scale"; ui_type = "drag"; ui_min = 0.1; ui_max = 5.0; > = float2(3.0, 3.0);
uniform float2 FrostCenter   < ui_label = "Frost Clear Center"; ui_type = "drag"; ui_min = 0.0; ui_max = 1.0; > = float2(0.5, 0.5);
uniform float FrostRadius    < ui_label = "Clear Radius"; ui_type = "drag"; ui_min = 0.0; ui_max = 1.0; > = 0.5;
uniform float FrostFeather   < ui_label = "Feather Amount"; ui_type = "drag"; ui_min = 0.001; ui_max = 1.0; > = 0.15;

// === Weather Detection Toggle ===
uniform bool EnableSnowDetection < ui_label = "Enable Snow Weather Detection"; ui_type = "checkbox"; ui_category = "Weather Detection"; > = true;

uniform int from_weather_type <source = "from_weather_type";>;
uniform int to_weather_type   <source = "to_weather_type";>;
uniform float weather_transition <source = "weather_transition";>;

bool isSnowyWeather(int weather)
{
    return weather == 10 || weather == 11 || weather == 12 || weather == 13 || weather == 16;
}

// === Main Shader ===
float4 FrostPass(float4 position : SV_Position, float2 texcoord : TEXCOORD) : SV_Target
{
    float snow = 1.0;

    if (EnableSnowDetection)
    {
        bool fromSnow = isSnowyWeather(from_weather_type);
        bool toSnow   = isSnowyWeather(to_weather_type);
        snow = smoothstep(0.0, 1.0, lerp(fromSnow ? 1.0 : 0.0, toSnow ? 1.0 : 0.0, weather_transition));
    }

    if (snow <= 0.001 || FrostOpacity <= 0.001 || FrostIntensity <= 0.001)
        return tex2D(ReShade::BackBuffer, texcoord);

    float dist = distance(texcoord, FrostCenter);
    float frostMask = saturate((dist - FrostRadius) / FrostFeather);

    float3 frostNormal = tex2D(frostSampler, texcoord * FrostScale).rgb;
    float2 offset = (frostNormal.rg - 0.5) * FrostIntensity * frostMask;

    float4 frosted = tex2D(ReShade::BackBuffer, texcoord + offset);
    float4 original = tex2D(ReShade::BackBuffer, texcoord);

    return lerp(original, frosted, FrostOpacity * frostMask * snow);
}

technique NGVFreezing
{
    pass
    {
        VertexShader = PostProcessVS;
        PixelShader = FrostPass;
    }
}
