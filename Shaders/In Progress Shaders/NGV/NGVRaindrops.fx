
// NGVRaindrops.fx — Optimized Scatter Version: Simulated Density Without FPS Hit

#include "ReShade.fxh"

uniform float Time <source = "timer";>;
uniform float2 Resolution <source = "viewport_size";>;

// === Main Settings ===
uniform float RainIntensity <ui_label = "Rain Intensity"; ui_type = "drag"; ui_min = 0.0; ui_max = 10.0; ui_step = 0.01; ui_category = "Main Settings";> = 1.0;
uniform float RefractionStrength <ui_label = "Refraction Strength"; ui_type = "drag"; ui_min = 0.0; ui_max = 10.0; ui_step = 0.05; ui_category = "Main Settings";> = 3.0;
uniform float ChromaticAmount <ui_label = "Chromatic Aberration Strength"; ui_type = "drag"; ui_min = 0.0; ui_max = 1.0; ui_step = 0.001; ui_category = "Main Settings";> = 0.01;

// === Raindrop Appearance ===
uniform float DropScaleX <ui_label = "Drop Scale X"; ui_type = "drag"; ui_min = 0.1; ui_max = 0.5; ui_step = 0.01; ui_category = "Raindrop Appearance";> = 0.1;
uniform float DropScaleY <ui_label = "Drop Scale Y"; ui_type = "drag"; ui_min = 0.1; ui_max = 0.5; ui_step = 0.01; ui_category = "Raindrop Appearance";> = 0.2;
uniform int DropCount <ui_label = "Drop Count"; ui_type = "drag"; ui_min = 1; ui_max = 200; ui_step = 1; ui_category = "Raindrop Appearance";> = 40;
uniform int ScatterCopies <ui_label = "Drop Copies per Drop"; ui_type = "drag"; ui_min = 1; ui_max = 5; ui_step = 1; ui_category = "Raindrop Appearance";> = 3;
uniform int SlowDripCount <ui_label = "Slow Drip Count"; ui_type = "drag"; ui_min = 0; ui_max = 10; ui_step = 1; ui_category = "Raindrop Appearance";> = 5;
uniform float DropSpeed <ui_label = "Base Drop Speed"; ui_type = "drag"; ui_min = 0.0001; ui_max = 1.0; ui_step = 0.0001; ui_category = "Raindrop Appearance";> = 0.02;
uniform float DropSpeedVariation <ui_label = "Drop Speed Variation"; ui_type = "drag"; ui_min = 0.0; ui_max = 2.0; ui_step = 0.01; ui_category = "Raindrop Appearance";> = 1.5;

// === Trail Settings ===
uniform bool EnableTrails <ui_label = "Enable Rain Trails"; ui_type = "checkbox"; ui_category = "Trail Settings";> = true;
uniform float FadeoutStrength <ui_label = "Fadeout Strength"; ui_type = "drag"; ui_min = 0.0; ui_max = 5.0; ui_step = 0.01; ui_category = "Trail Settings";> = 0.0;
uniform float TrailLength <ui_label = "Trail Length"; ui_type = "drag"; ui_min = 0.0; ui_max = 0.05; ui_step = 0.01; ui_category = "Trail Settings";> = 0.03;
uniform float TrailWidth <ui_label = "Trail Width"; ui_type = "drag"; ui_min = 0.1; ui_max = 3.0; ui_step = 0.01; ui_category = "Trail Settings";> = 3.0;

// === Bulge Settings ===
uniform float BulgeStrength <ui_label = "Bulge Strength"; ui_type = "drag"; ui_min = 0.0; ui_max = 0.01; ui_step = 0.0001; ui_category = "Bulge Settings";> = 0.006;
uniform float BulgeStretchIntensity <ui_label = "Bulge Stretch Intensity"; ui_type = "drag"; ui_min = 0.0; ui_max = 2.0; ui_step = 0.1; ui_category = "Bulge Settings";> = 0.5;

// === Wind ===
uniform float WindSpeed <ui_label = "Wind Speed"; ui_type = "drag"; ui_min = 0.0; ui_max = 10.0; ui_step = 0.1; ui_category = "Wind";> = 1.0;

// === Addon Data ===
uniform bool a <source = "enabled";>;
uniform float b <source = "delta_camera_position";>;
uniform float c <source = "delta_camera_rotation";>;
uniform float d <source = "time_of_day";>;
uniform float e <source = "weather_transition";>;
uniform float3 wind_direction <source = "wind_direction";>;
uniform int from_weather_type <source = "from_weather_type";>;
uniform int to_weather_type <source = "to_weather_type";>;
uniform float weather_transition <source = "weather_transition";>;

// === Debug ===
uniform bool ShowDebug <ui_label = "Show Debug Info"; ui_type = "checkbox"; ui_category = "Debug";> = false;

#define MAX_DROPS 200
#define TRAIL_STEPS 6

bool isRainyWeather(int weather) {
    return weather == 4 || weather == 5 || weather == 6;
}

float hash(float2 p) {
    return frac(sin(dot(p, float2(127.1, 311.7))) * 43758.5453);
}

float lensBulge(float2 uv, float2 dropPos, float size, float sx, float sy) {
    float2 p = (uv - dropPos) / size;
    p.x /= sx; p.y /= sy;
    return saturate(1.0 - dot(p, p));
}

float sampleTaperedTrail(float2 uv, float2 dropPos, float2 dir, float size, float sx, float sy, float dropY) {
    float strength = 0.0;
    float stretch = lerp(1.0, 1.8, saturate(dropY));
    [unroll]
    for (int j = 0; j < TRAIL_STEPS; ++j) {
        float t = float(j) / float(TRAIL_STEPS);
        float2 offset = dir * t * TrailLength * stretch;
        float2 p = (uv - (dropPos + offset)) / size;
        p.x /= sx; p.y /= sy;
        float r = length(p);
        float taper = smoothstep(0.5 * TrailWidth, 0.0, r) * pow(1.0 - t, 1.8);
        strength += taper * step(r, 0.5);
    }
    return strength / TRAIL_STEPS;
}

float4 MainPass(float4 pos : SV_Position, float2 uv : TEXCOORD) : SV_Target {
    float4 base = tex2D(ReShade::BackBuffer, uv);
    float2 totalOffset = float2(0.0, 0.0);
    float t = Time * 0.001;

    bool fromRainy = isRainyWeather(from_weather_type);
    bool toRainy = isRainyWeather(to_weather_type);
    float rain = lerp(fromRainy ? 1.0 : 0.0, toRainy ? 1.0 : 0.0, weather_transition);

    if (rain > 0.0) {
        float2 windOffset = wind_direction.xy * WindSpeed * 0.01;

        [loop]
        for (int i = 0; i < DropCount; ++i) {
            float fi = float(i);
            float x = hash(float2(fi, 0.0));
            float yStart = hash(float2(fi, 1.0));
            float gravity = 1.0 + hash(float2(fi, 2.0));
            float speedVar = 0.5 + hash(float2(fi, 3.0)) * DropSpeedVariation;
            bool isSlow = i < SlowDripCount;
            float slowFactor = isSlow ? 0.1 : 1.0;
            float dropSpeed = DropSpeed * speedVar * gravity * slowFactor;
            float age = frac(t * dropSpeed);
            float y = frac(yStart + age);

            float2 windMovement = windOffset * y;
            float2 dropPos = float2(x + windMovement.x, y + windMovement.y);

            float baseSize = 0.05 * (0.5 + hash(float2(fi, 4.0)));
            float shrink = lerp(1.0, 0.4, saturate(dropPos.y));
            float size = baseSize * shrink;

            float sx = DropScaleX * (0.8 + hash(float2(fi, 5.0)) * 0.4);
            float sy = DropScaleY * (0.8 + hash(float2(fi, 6.0)) * 0.4);

            float2 trailDir = float2(windOffset.x, -1.0);
            if (length(trailDir) < 0.00001) {
                trailDir = float2(0.0, -1.0);
            } else {
                trailDir = normalize(trailDir);
            }

            float localTrail = 0.0;
            if (EnableTrails) {
                localTrail = sampleTaperedTrail(uv, dropPos, trailDir, size, sx, sy, y) * (isSlow ? 1.5 : 1.0);
            }

            float bulge = lensBulge(uv, dropPos, size, sx, sy * lerp(1.0, 1.0 + BulgeStretchIntensity, saturate(dropPos.y)));
            float fade = pow(1.0 - saturate(dropPos.y), FadeoutStrength);

            float2 normal = uv - dropPos;
            if (length(normal) < 0.00001) {
                normal = float2(0.0, 0.0);
            } else {
                normal = normalize(normal);
            }

            float2 offsetBulge = normal * BulgeStrength * bulge;
            float2 offsetTrail = trailDir * BulgeStrength * localTrail;
            totalOffset += (offsetTrail * 0.5 + offsetBulge * 1.5) * fade * RefractionStrength * RainIntensity;
        }
    }

    float2 redUV = clamp(uv + totalOffset * (1.0 - ChromaticAmount), 0.0, 1.0);
    float2 greenUV = clamp(uv + totalOffset, 0.0, 1.0);
    float2 blueUV = clamp(uv + totalOffset * (1.0 + ChromaticAmount), 0.0, 1.0);

    float4 chromaColor = float4(
        tex2D(ReShade::BackBuffer, redUV).r,
        tex2D(ReShade::BackBuffer, greenUV).g,
        tex2D(ReShade::BackBuffer, blueUV).b,
        1.0
    );

    if (ShowDebug)
    {
        float4 debugColor = float4(0.0, 0.0, 0.0, 1.0);
        if (any(isinf(totalOffset)) || any(isnan(totalOffset))) {
            debugColor.r = 1.0;
        }
        if (any(isinf(redUV)) || any(isnan(redUV))) {
            debugColor.g = 1.0;
        }
        if (any(isinf(greenUV)) || any(isnan(greenUV))) {
            debugColor.b = 1.0;
        }
        if (any(isinf(blueUV)) || any(isnan(blueUV))) {
            debugColor.r = 1.0;
            debugColor.g = 1.0;
        }
        return debugColor;
    }

    return lerp(base, chromaColor, saturate(RainIntensity * rain));
}

technique NGVRaindrops {
    pass {
        VertexShader = PostProcessVS;
        PixelShader = MainPass;
    }
}
