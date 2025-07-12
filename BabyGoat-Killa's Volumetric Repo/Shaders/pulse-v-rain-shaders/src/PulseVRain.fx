//#define RSDEV // Uncomment when developing

#include "include/ReShade.fxh"
#include "include/noise.fxh"


#ifdef RSDEV
/**
 * Hacks to get VS to stop complaining about ReShade syntax
 **/

#error ">>> Comment out `#define RSDEV` in line 1 before loading in ReShade! <<<"

#define BUFFER_WIDTH 0.0
#define BUFFER_HEIGHT 0.0
#define BUFFER_RCP_WIDTH 0.0
#define BUFFER_RCP_HEIGHT 0.0
#define BUFFER_PIXEL_SIZE float2(BUFFER_RCP_WIDTH, BUFFER_RCP_HEIGHT)
#define BUFFER_SCREEN_SIZE float2(BUFFER_WIDTH, BUFFER_HEIGHT)
#define BUFFER_ASPECT_RATIO (BUFFER_WIDTH * BUFFER_RCP_HEIGHT)
#define __FILE__
#define GTAV

typedef Texture3D texture3D;
typedef texture storage3D;

void tex3Dstore(storage3D a, uint3 b, float4 c)
{
}
#endif

#ifdef GTAV
#include "gtav.fxh"
#endif
#ifdef RDR1
#include "rdr1.fxh"
#endif

/**
 * Constants
 **/

#ifndef RENDER_SCALE
#define RENDER_SCALE 0.5
#endif

#ifndef ADVANCED
#define ADVANCED 0
#endif

#define NOISE_W 256
#define NOISE_H NOISE_W
#define NOISE_D NOISE_W
#define NOISE_TX 4
#define NOISE_TY NOISE_TX
#define NOISE_TZ 4
#define NOISE_FREQ 8.0
#define CURL_NOISE_FREQ 4.0
#define BASE_NOISE_SCALE 0.000025
#define DETAIL_NOISE_SCALE 0.00009375
#define TIME_SCALE 0.00000005
#define WIND_SCALE 75.0
#define MIN_COVER 0.005
#define CLOUD_MIN_HEIGHT 100
#define CLOUD_LIGHT_SAMPLES 4
#define EPSILON 0.00001
#define BAYER_D 4
#define BAYER (BAYER_D * BAYER_D)
#define LUM_FACTORS float3(0.2125f, 0.7154f, 0.0721f)

#define DISPATCH_SIZE(width, group) (width / group)

static const float3 NoiseTexel = 1.0 / float3(NOISE_W, NOISE_H, NOISE_D);


/**
 * Uniforms provided by addon
 **/

uniform bool inputEnabled <
    string source = "enabled";
>;
uniform float4 inputViewMatrix1 <
    string source = "view_matrix__r1";
>;
uniform float4 inputViewMatrix2 <
    string source = "view_matrix__r2";
>;
uniform float4 inputViewMatrix3 <
    string source = "view_matrix__r3";
>;
uniform float4 inputViewMatrix4 <
    string source = "view_matrix__r4";
>;
uniform float4 inputInverseViewMatrix1 <
    string source = "inverse_view_matrix__r1";
>;
uniform float4 inputInverseViewMatrix2 <
    string source = "inverse_view_matrix__r2";
>;
uniform float4 inputInverseViewMatrix3 <
    string source = "inverse_view_matrix__r3";
>;
uniform float4 inputInverseViewMatrix4 <
    string source = "inverse_view_matrix__r4";
>;
uniform float4 inputInverseProjectionMatrix1 <
    string source = "inverse_projection_matrix__r1";
>;
uniform float4 inputInverseProjectionMatrix2 <
    string source = "inverse_projection_matrix__r2";
>;
uniform float4 inputInverseProjectionMatrix3 <
    string source = "inverse_projection_matrix__r3";
>;
uniform float4 inputInverseProjectionMatrix4 <
    string source = "inverse_projection_matrix__r4";
>;
uniform float inputNearClip <
    string source = "near_clip";
>;
uniform float inputFarClip <
    string source = "far_clip";
>;
uniform bool inputDepthReversed <
    string source = "depth_reversed";
>;
uniform float3 inputWindDirection <
    string source = "wind_direction";
>;
uniform int inputWeatherFrom <
    string source = "from_weather_type";
>;
uniform int inputWeatherTo <
    string source = "to_weather_type";
>;
uniform float inputWeatherTransition <
    string source = "weather_transition";
>;

/**
 * Reshade uniforms
 **/

uniform int framecount <
    string source = "framecount";
>;
uniform float timer <
    string source = "timer";
>;

/**
 * User-editable uniforms (Global Settings)
 **/

uniform float cloudRenderDistance <
    string ui_category = "Global Settings";
    string ui_type = "drag";
    float ui_min = 10.0;
    float ui_max = 100000.0;
    float ui_step = 10.0;
> = 10000.0;
uniform int cloudVolumeSamples <
    string ui_category = "Global Settings";
    string ui_type = "slider";
    int ui_min = 10;
    int ui_max = 200;
> = 64;
uniform float cloudTimescale <
    string ui_category = "Global Settings";
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 8.0;
    float ui_step = 0.01;
> = 0.25;
uniform float3 cloudWind <
    string ui_category = "Global Settings";
    float ui_step = 0.01;
> = float3(0.4, 0.1, 1.0);
uniform float cloudWindSpeed <
    string ui_category = "Global Settings";
    string ui_type = "drag";
    float ui_min = 0.00;
    float ui_max = 10.0;
    float ui_step = 0.01;
> = 2.0;

/**
 * User-editable uniforms (Advanced Global Settings)
 **/

uniform float cloudScale <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.01;
    float ui_max = 8.0;
    float ui_step = 0.01;
> = 3.25;
uniform float cloudDetailScale <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.01;
    float ui_max = 8.0;
    float ui_step = 0.01;
> = 0.8;
uniform float cloudStretch <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.01;
    float ui_max = 8.0;
    float ui_step = 0.01;
> = 2.00;
uniform float cloudHeightOffset <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = -1000.0;
    float ui_max = 1000.0;
    float ui_step = 1.0;
> = CLOUD_HEIGHT_OFFSET;
uniform float cloudBaseCurl <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 4.0;
    float ui_step = 0.01;
> = 1.0;
uniform float cloudDetailCurl <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 4.0;
    float ui_step = 0.01;
> = 0.25;
uniform float cloudBaseCurlScale <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 2.0;
    float ui_step = 0.01;
> = 0.25;
uniform float cloudDetailCurlScale <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 2.0;
    float ui_step = 0.01;
> = 0.5;
uniform float cloudYFade <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.01;
    float ui_max = 0.5;
    float ui_step = 0.01;
> = 0.15;
uniform float cloudCover <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 2.0;
    float ui_step = 0.01;
> = 1.0;
uniform float cloudThreshold <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 0.5;
    float ui_step = 0.001;
> = 0.001;
uniform float cloudJitter <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 10.0;
    float ui_step = 0.01;
> = 1.0;
uniform float cloudExtinction <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.01;
    float ui_max = 8.0;
    float ui_step = 0.01;
> = 2.0;
uniform float cloudAmbientAmount <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 1.0;
    float ui_step = 0.01;
> = 0.2;
uniform float cloudAbsorption <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.01;
    float ui_max = 8.0;
    float ui_step = 0.01;
> = 0.75;
uniform float cloudForwardScatter <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.01;
    float ui_max = 1.0;
    float ui_step = 0.01;
> = 0.5;
uniform float cloudLightStepFactor <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.01;
    float ui_max = 1.0;
    float ui_step = 0.01;
> = 0.01;
uniform float cloudContrast <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.01;
    float ui_max = 8.0;
    float ui_step = 0.01;
> = 1.0;
uniform float cloudLuminanceMultiplier <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.01;
    float ui_max = 8.0;
    float ui_step = 0.01;
> = 0.25;
uniform float cloudSunLightPower <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.01;
    float ui_max = 8.0;
    float ui_step = 0.01;
> = 0.15;
uniform float cloudSkyLightPower <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.01;
    float ui_max = 8.0;
    float ui_step = 0.01;
> = 1.0;
uniform float cloudDenoise <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 1.0;
    float ui_step = 0.005;
> = 0.25;

/**
 * User-editable uniforms (Weather Presets)
 **/

#include "weathers.fxh"

/**
 * Textures & samplers
 **/

texture CloudsHalfRes
{
    Width = BUFFER_WIDTH * RENDER_SCALE;
    Height = BUFFER_HEIGHT * RENDER_SCALE;
    Format = RGBA8;
    MipLevels = 2;
};

sampler2D CloudsHalfResTarget
{
    Texture = CloudsHalfRes;

    MagFilter = LINEAR;
    MinFilter = LINEAR;
    MipFilter = LINEAR;

    MinLOD = 0.0f;
    MaxLOD = 8.0f;
};

texture3D NoiseTexture
{
    Width = NOISE_W;
    Height = NOISE_H;
    Depth = NOISE_D;
    Format = RGBA8;
};

sampler3D NoiseSampler
{
    Texture = NoiseTexture;

    AddressU = REPEAT;
    AddressV = REPEAT;
    AddressW = REPEAT;

    MagFilter = LINEAR;
    MinFilter = LINEAR;
    MipFilter = LINEAR;

    MinLOD = 0.0f;
    MaxLOD = 0.0f;

    MipLODBias = 0.0f;

    SRGBTexture = false;
};

storage3D NoiseStorage
{
    Texture = NoiseTexture;
};

texture3D CurlNoiseTexture
{
    Width = NOISE_W;
    Height = NOISE_H;
    Depth = NOISE_D;
    Format = RG8;
};

sampler3D CurlNoiseSampler
{
    Texture = CurlNoiseTexture;

    AddressU = REPEAT;
    AddressV = REPEAT;
    AddressW = REPEAT;

    MagFilter = LINEAR;
    MinFilter = LINEAR;
    MipFilter = LINEAR;

    MinLOD = 0.0f;
    MaxLOD = 0.0f;

    MipLODBias = 0.0f;

    SRGBTexture = false;
};

storage3D CurlNoiseStorage
{
    Texture = CurlNoiseTexture;
};

texture BlueNoiseTexture <
    string source = __FILE__ "/../PulseV/bluenoise.png";
>
{
    Width = 1024;
    Height = 1024;
    Format = R32F;
};

sampler BlueNoiseSampler
{
    Texture = BlueNoiseTexture;
    AddressU = REPEAT;
    AddressV = REPEAT;
};


struct Ray
{
    float3 origin;
    float3 direction;
};

float4x4 viewMatrix()
{
    return float4x4(
        inputViewMatrix1,
        inputViewMatrix2,
        inputViewMatrix3,
        inputViewMatrix4
    );
}

float4x4 inverseViewMatrix()
{
    return float4x4(
        inputInverseViewMatrix1,
        inputInverseViewMatrix2,
        inputInverseViewMatrix3,
        inputInverseViewMatrix4
    );
}

float4x4 inverseProjectionMatrix()
{
    return float4x4(
        inputInverseProjectionMatrix1,
        inputInverseProjectionMatrix2,
        inputInverseProjectionMatrix3,
        inputInverseProjectionMatrix4
    );
}

float3 worldDirection(float2 uv)
{
    float4 clipSpace = float4(float2(1.0 - uv.x, uv.y) * 2.0 - 1.0, 1.0, 1.0);
    float4 viewDirection = mul(clipSpace, inverseProjectionMatrix());
    viewDirection.xyz /= viewDirection.w;

    return normalize(mul(viewDirection, inverseViewMatrix()).xyz);
}

float3 worldPosition()
{
    float4x4 inverseView = inverseViewMatrix();

    return float3(inverseView._14, inverseView._24, inverseView._34);
}

Ray cameraRay(float2 uv)
{
    Ray ray;

    ray.origin = worldPosition();
    ray.direction = worldDirection(uv);

    return ray;
}

LayerParameters getWeather(int weatherType, int layerIndex)
{
    LayerParameters params;
    bool bottom = layerIndex == 0;
    
    int weatherPreset = getWeatherPreset(weatherType);
    
    switch (weatherPreset)
    {
        case 0:
            if (bottom)
            {
                CLOUD_BOTTOM_LAYER(Clear)

            }
            else
            {
                CLOUD_TOP_LAYER(Clear)

            }
            break;
        case 1:
            if (bottom)
            {
                CLOUD_BOTTOM_LAYER(ExtraSunny)

            }
            else
            {
                CLOUD_TOP_LAYER(ExtraSunny)

            }
            break;
        case 2:
            if (bottom)
            {
                CLOUD_BOTTOM_LAYER(Clouds)

            }
            else
            {
                CLOUD_TOP_LAYER(Clouds)

            }
            break;
        case 3:
            if (bottom)
            {
                CLOUD_BOTTOM_LAYER(Overcast)

            }
            else
            {
                CLOUD_TOP_LAYER(Overcast)

            }
            break;
        case 4:
            if (bottom)
            {
                CLOUD_BOTTOM_LAYER(Rain)

            }
            else
            {
                CLOUD_TOP_LAYER(Rain)

            }
            break;
        case 5:
            if (bottom)
            {
                CLOUD_BOTTOM_LAYER(Clearing)

            }
            else
            {
                CLOUD_TOP_LAYER(Clearing)

            }
            break;
        case 6:
            if (bottom)
            {
                CLOUD_BOTTOM_LAYER(Thunder)

            }
            else
            {
                CLOUD_TOP_LAYER(Thunder)

            }
            break;
        case 7:
            if (bottom)
            {
                CLOUD_BOTTOM_LAYER(Smog)

            }
            else
            {
                CLOUD_TOP_LAYER(Smog)

            }
            break;
        case 8:
            if (bottom)
            {
                CLOUD_BOTTOM_LAYER(Foggy)

            }
            else
            {
                CLOUD_TOP_LAYER(Foggy)

            }
            break;
        case 9:
            if (bottom)
            {
                CLOUD_BOTTOM_LAYER(Snow)

            }
            else
            {
                CLOUD_TOP_LAYER(Snow)

            }
            break;
        case 10:
            if (bottom)
            {
                CLOUD_BOTTOM_LAYER(Blizzard)

            }
            else
            {
                CLOUD_TOP_LAYER(Blizzard)

            }
            break;
        case 11:
            if (bottom)
            {
                CLOUD_BOTTOM_LAYER(SnowLight)

            }
            else
            {
                CLOUD_TOP_LAYER(SnowLight)

            }
            break;
        case 12:
            if (bottom)
            {
                CLOUD_BOTTOM_LAYER(Halloween)

            }
            else
            {
                CLOUD_TOP_LAYER(Halloween)

            }
            break;
        case -1:
        default:
            if (bottom)
            {
                CLOUD_BOTTOM_LAYER(Overcast)

            }
            else
            {
                CLOUD_TOP_LAYER(Overcast)

            }
            break;
    }
    
    params.bottom += cloudHeightOffset;
    params.top += cloudHeightOffset;
    
    return params;
}

LayerParameters mixLayerParams(LayerParameters fromParams, LayerParameters toParams, float ratio)
{
    LayerParameters params;
    
    params.scale = lerp(fromParams.scale, toParams.scale, ratio);
    params.detailScale = lerp(fromParams.detailScale, toParams.detailScale, ratio);
    params.stretch = lerp(fromParams.stretch, toParams.stretch, ratio);
    params.baseCurl = lerp(fromParams.baseCurl, toParams.baseCurl, ratio);
    params.detailCurl = lerp(fromParams.detailCurl, toParams.detailCurl, ratio);
    params.baseCurlScale = lerp(fromParams.baseCurlScale, toParams.baseCurlScale, ratio);
    params.detailCurlScale = lerp(fromParams.detailCurlScale, toParams.detailCurlScale, ratio);
    params.smoothness = lerp(fromParams.smoothness, toParams.smoothness, ratio);
    params.softness = lerp(fromParams.softness, toParams.softness, ratio);
    params.bottom = lerp(fromParams.bottom, toParams.bottom, ratio);
    params.top = lerp(fromParams.top, toParams.top, ratio);
    params.cover = lerp(fromParams.cover, toParams.cover, ratio);
    params.extinction = lerp(fromParams.extinction, toParams.extinction, ratio);
    params.ambientAmount = lerp(fromParams.ambientAmount, toParams.ambientAmount, ratio);
    params.absorption = lerp(fromParams.absorption, toParams.absorption, ratio);
    params.luminance = lerp(fromParams.luminance, toParams.luminance, ratio);
    params.sunLightPower = lerp(fromParams.sunLightPower, toParams.sunLightPower, ratio);
    params.skyLightPower = lerp(fromParams.skyLightPower, toParams.skyLightPower, ratio);
    params.bottomDensity = lerp(fromParams.bottomDensity, toParams.bottomDensity, ratio);
    params.middleDensity = lerp(fromParams.middleDensity, toParams.middleDensity, ratio);
    params.topDensity = lerp(fromParams.topDensity, toParams.topDensity, ratio);
    
    return params;
}

LayerParameters getWeatherParams(int layerIndex)
{
    if (inputWeatherTransition == 0.0)
    {
        return getWeather(inputWeatherFrom, layerIndex);
    }
    else if (inputWeatherTransition == 1.0)
    {
        return getWeather(inputWeatherTo, layerIndex);
    }
    
    return mixLayerParams(getWeather(inputWeatherFrom, layerIndex), getWeather(inputWeatherTo, layerIndex), inputWeatherTransition);
};

float3 cloudExtents(float inBottom, float inTop)
{
    float bottom = max(inBottom, 0);
    float height = max(inTop - bottom, CLOUD_MIN_HEIGHT);
    float top = bottom + height;
    
    return float3(bottom, top, height);
}

float cloudNoise(float3 pos, float3 wind, LayerParameters layer)
{
    const float curl_amount = 0.1;
    pos *= float2(1.0 / layer.stretch, 1.0).xyx;
    float3 basePos = pos + wind;
    float3 detailPos = pos * cloudDetailScale * layer.detailScale + wind * cloudWindSpeed;
    float baseCurl = tex3Dlod(CurlNoiseSampler, float4(basePos * cloudBaseCurlScale * layer.baseCurlScale, 0.0)).r * 2.0 - 1.0;
    float detailCurl = tex3Dlod(CurlNoiseSampler, float4(detailPos * cloudDetailCurlScale * layer.detailCurlScale, 0.0)).g * 2.0 - 1.0;
    float baseOffset = baseCurl * cloudBaseCurl * layer.baseCurl * 0.1;
    float detailOffset = detailCurl * cloudDetailCurl * layer.detailCurl * 0.1;
    basePos += baseOffset;
    detailPos += detailOffset;
    float baseNoise = tex3Dlod(NoiseSampler, float4(basePos, 0.0)).a;
    float3 detailNoisexyz = tex3Dlod(NoiseSampler, float4(detailPos, 0.0)).rgb;
    float detailNoise = dot(detailNoisexyz.xyz, detailNoisexyz.xyz) * 0.45;
    float noise = baseNoise * detailNoise;
    float softness = layer.softness * -0.25;
    
    noise = remap(noise, softness, 1.0 - softness);
    
    return noise;
}

float cloudDensity(float3 pos, LayerParameters layer, float altitude, float altitudeDensity)
{
    float time = timer * TIME_SCALE * cloudTimescale;
    float3 wind = cloudWind * time * WIND_SCALE;
    float cloud = cloudNoise(pos * BASE_NOISE_SCALE * cloudScale * layer.scale, wind, layer);
    
    cloud = smoothstep(0.0, sqrt(layer.smoothness) * 2.0, sqrt(cloudCover * layer.cover * altitudeDensity) + cloud * smoothstep(-0.25, 0.25, altitude) - 1.0);
    return cloud;
}

float uiMask(float2 uv)
{
    float ui = tex2Dlod(ReShade::BackBuffer, float4(uv, 0.0, 0.0)).a;
    
    return 1.0 - saturate((1.0 - ui) * 10.0);
}

float phase(float g, float cos_theta)
{
    float denom = 1.0 + g * (g - 2.0 * cos_theta);
    denom = sqrt(denom * denom * denom);
    float heyey = (1.0 - g * g) / (4.0 * PI * denom);
    return lerp(heyey, 1.0, 0.1);
}

float cloudLightMarch(float3 pos, LayerParameters layer, float3 lightDirection, float stepSize, float absorption, float altitude, float altitudeDensity)
{
    float transmittance = 1.0;
    float density = 0.0;
    float3 currentPos = pos;
    
    for (int i = 0; i < CLOUD_LIGHT_SAMPLES; ++i)
    {
        currentPos += lightDirection * stepSize;
        density += cloudDensity(currentPos, layer, altitude, altitudeDensity) * stepSize;
    }
    
    transmittance = exp(-density * absorption * layer.absorption * 10.0);
    
    return transmittance;
}

float depthToLinear(float depth, float near, float far)
{
    return near * far / (far + depth * (near - far));
}

float linearDepth(float2 uv, float near, float far)
{
    float depth = tex2D(ReShade::DepthBuffer, uv).r;
    
    if (inputDepthReversed)
    {
        depth = 1.0 - depth;
    }
    
    return depthToLinear(depth, near, far);
}

float3 depthPreview(float depth)
{
    const float far = inputFarClip;
    const float near = inputNearClip;
    const float range = far - near;
    const float invRange = 1.0 / range;
    
    return saturate(depth * invRange * 10.0);
}

float4 depthNormal(float2 uv)
{
    float near = 0.00001;
    float far = 100.0;
    float3 offset = float3(BUFFER_PIXEL_SIZE, 0.0);
    float2 posCenter = uv.xy;
    float2 posNorth = posCenter - offset.zy;
    float2 posEast = posCenter + offset.xz;

    float3 vertCenter = float3(posCenter - 0.5, 1) * linearDepth(posCenter, near, far);
    float3 vertNorth = float3(posNorth - 0.5, 1) * linearDepth(posNorth, near, far);
    float3 vertEast = float3(posEast - 0.5, 1) * linearDepth(posEast, near, far);
    float depth = linearDepth(uv, near, far);

    return float4(normalize(cross(vertCenter - vertNorth, vertCenter - vertEast)), depth);
}

float depthEdge(float2 uv, float width)
{
    float3 pole = float3(-1.0, 0.0, 1.0) * width;
    float dpos = 0.0;
    
    float4 s0 = depthNormal(uv + BUFFER_PIXEL_SIZE * pole.xx);
    float4 s1 = depthNormal(uv + BUFFER_PIXEL_SIZE * pole.yx);
    float4 s2 = depthNormal(uv + BUFFER_PIXEL_SIZE * pole.zx);
    float4 s3 = depthNormal(uv + BUFFER_PIXEL_SIZE * pole.xy);
    float4 s4 = depthNormal(uv + BUFFER_PIXEL_SIZE * pole.yy);
    float4 s5 = depthNormal(uv + BUFFER_PIXEL_SIZE * pole.zy);
    float4 s6 = depthNormal(uv + BUFFER_PIXEL_SIZE * pole.xz);
    float4 s7 = depthNormal(uv + BUFFER_PIXEL_SIZE * pole.yz);
    float4 s8 = depthNormal(uv + BUFFER_PIXEL_SIZE * pole.zz);

    dpos = (
        abs(s1.a - s7.a) +
        abs(s5.a - s3.a) +
        abs(s0.a - s8.a) +
        abs(s2.a - s6.a)
    ) * 0.5;
    
    dpos += (
        max(0.0, 1.0 - dot(s1.rgb, s7.rgb)) +
        max(0.0, 1.0 - dot(s5.rgb, s3.rgb)) +
        max(0.0, 1.0 - dot(s0.rgb, s8.rgb)) +
        max(0.0, 1.0 - dot(s2.rgb, s6.rgb))
    );
  
    dpos = pow(max(dpos - 0.5, 0.0), 5.0);
    
    return dpos;
}

float blueNoise(float2 uv)
{
    uv = uv / 1024.0 / BUFFER_PIXEL_SIZE;
    
    return tex2D(BlueNoiseSampler, uv).x * 2.0 - 1.0;
}

float4 renderClouds(float2 uv, LayerParameters bottomLayer, LayerParameters topLayer, int samples)
{
    const float jitter = blueNoise(uv) * cloudJitter;
    const float range = inputFarClip - inputNearClip;
    const float invRange = 1.0 / range;
    const float depth = linearDepth(uv, inputNearClip, inputFarClip);
    const float depthBlend = depth * invRange * 2.0;
    const float3 extents = cloudExtents(bottomLayer.bottom, topLayer.top);
    const float height = extents.x;
    const float thickness = extents.z;
    const float far = min(cloudRenderDistance, depth);
    const float sunAbsorption = 0.9 * cloudAbsorption;
    const float skyAbsorption = 0.3 * cloudAbsorption;
    const bool doSkyLighting = true;
    const bool doSunLighting = true;
    const float3 sunBaseColor = getSunBaseColor();
    
    Ray ray = cameraRay(uv);
    float3 sunDirection = getSunDirection();
    
    float3 sky = getSkyColor(ray.direction, depth < range ? 0.0 : 1.0);

    float enter = (height - ray.origin.y) / ray.direction.y;
    float exit = (height + thickness - ray.origin.y) / ray.direction.y;
    float fullExit = exit;
    
    if (enter > exit)
    {
        enter = 0.0;
        exit = far;
        fullExit = cloudRenderDistance;
    }
    
    float minDistance = max(0.0, enter);
    float maxDistance = min(far, exit);

    float marchDistance = maxDistance - minDistance;
    float stepSize = (min(cloudRenderDistance, fullExit) - minDistance) / float(samples);
    float lightStepSize = thickness * cloudLightStepFactor / float(CLOUD_LIGHT_SAMPLES);

    float3 pos = ray.origin + ray.direction * (minDistance + jitter * stepSize);

    float3 accumulatedLight = 0.0;
    float transmittance = 1.0;

    float sunCosTheta = dot(ray.direction, sunDirection);
    float sunPhase = phase(cloudForwardScatter, sunCosTheta);
    float3 sunLightBase = doSunLighting ? (cloudSunLightPower * sunPhase * 1.0).xxx : 0.0;
    float3 skyLightBase = doSkyLighting ? (cloudSkyLightPower * 1.0).xxx : 0.0;

    for (int i = 0; i < samples; i++)
    {
        float dist = length(pos - ray.origin);
        
        if (dist >= marchDistance || transmittance < 0.1)
        {
            break;
        }

        LayerParameters layer;
        
        if (pos.y > bottomLayer.top)
        {
            layer = topLayer;
        }
        else
        {
            layer = bottomLayer;
        }
        
        float layerAltitude = remap(pos.y, layer.bottom, layer.top);
        float altitudeDensity = (
            layerAltitude < 0.5 ?
            lerp(layer.bottomDensity, layer.middleDensity, layerAltitude * 2.0) :
            lerp(layer.middleDensity, layer.topDensity, (layerAltitude - 0.5) * 2.0)
        );
        float altitudeLighting = pow(min(1.0 / altitudeDensity, 1.0), 1.5);
        
        float fade = smoothstep(0.0, cloudYFade, layerAltitude) * smoothstep(0.0, cloudYFade, 1.0 - layerAltitude);
        float density = cloudDensity(pos, layer, layerAltitude, altitudeDensity) * fade;

        if (density > cloudThreshold)
        {
            float sunTransmittance = 1.0;
            if (doSunLighting)
            {
                sunTransmittance = cloudLightMarch(pos, layer, sunDirection, lightStepSize, sunAbsorption, layerAltitude, altitudeDensity);
            }

            float skyTransmittance = 1.0;
            if (doSkyLighting)
            {
                skyTransmittance = cloudLightMarch(pos, layer, float3(0.0, 1.0, 0.0), lightStepSize, skyAbsorption, layerAltitude, altitudeDensity);
            }

            float3 sunContribution = sunBaseColor * sunLightBase * layer.sunLightPower * altitudeLighting * (sunTransmittance + cloudAmbientAmount * layer.ambientAmount);
            float3 skyContribution = sky * skyLightBase * layer.skyLightPower * (skyTransmittance + cloudAmbientAmount * layer.ambientAmount);
       
            float3 contribution = sunContribution + skyContribution;

            float segmentExtinction = exp(-density * stepSize * cloudExtinction * layer.extinction * 0.08);

            float3 segmentLight = density * contribution * stepSize;
            accumulatedLight += segmentLight * transmittance * layer.luminance;
            transmittance *= segmentExtinction;
        }

        pos += ray.direction * stepSize;
    }

    sky = lerp(sky, tex2D(ReShade::BackBuffer, uv).rgb, saturate(transmittance));
    float3 cloudColor = 1.0 - exp(-accumulatedLight * cloudLuminanceMultiplier);
    float3 finalColor = cloudColor + sky * transmittance;
    float blend = smoothstep(0.0, 1.0, minDistance / far);
    
    finalColor = saturate(lerp(finalColor, finalColor + sky, blend));
    float alpha = saturate(1.0 - transmittance);
    
    finalColor = lerp(sky, finalColor, saturate(alpha * cloudContrast));
    
    return float4(finalColor, saturate(alpha * 2.0));
}

float debugDrawSun(float3 rayDirection, float3 sunDirection)
{
    const float radius = 0.01;
    const float blend = 0.025;

    float cosTheta = dot(normalize(rayDirection), normalize(sunDirection));

    float cosRadius = cos(radius);

    float sunStart = cos(radius + blend);
    float sunEnd = cos(radius - blend);

    return smoothstep(sunStart, sunEnd, cosTheta);
}

bool isRectInUv(float2 uv, float2 position, float2 size)
{
    float2 bounds = position + size;
    
    return (uv.x >= position.x && uv.x <= bounds.x && uv.y >= position.y && uv.y <= bounds.y);
}

float2 getTextureRect(float2 uv, float2 position, float2 size)
{
    return (uv - position) / size;
}

float4 filterTexture(float4 color, int channel)
{
    return channel < 0 ? color : float4(color[channel].xxx, 1.0);
}

float4 drawTextureRect2D(sampler2D tex, float2 uv, float2 position, float2 size, int channel = -1)
{
    float4 color = 0.0;
    
    if (isRectInUv(uv, position, size))
    {
        color = filterTexture(tex2D(tex, getTextureRect(uv, position, size)), channel);
    }
    
    return color;
}

float4 drawTextureRect3D(sampler3D tex, float2 uv, float2 position, float2 size, int channel = -1, float z = 0.5)
{
    float4 color = 0.0;
    
    if (isRectInUv(uv, position, size))
    {
        color = filterTexture(tex3D(tex, float3(getTextureRect(uv, position, size), z)), channel);
    }
    
    return color;
}

[numthreads(NOISE_TX, NOISE_TY, NOISE_TZ)]
void CS_GenerateNoise(uint3 threadID : SV_GroupThreadID, uint3 groupID : SV_GroupID)
{
    uint3 globalThreadID = groupID * uint3(NOISE_TX, NOISE_TY, NOISE_TZ) + threadID;

    if (globalThreadID.x < NOISE_W && globalThreadID.y < NOISE_H && globalThreadID.z < NOISE_D)
    {
        float3 uv = globalThreadID.xyz * NoiseTexel;
        float4 noiseValue = generateNoise(uv, NOISE_FREQ);
        float2 curlValue = generateCurlNoise(uv, CURL_NOISE_FREQ);
        tex3Dstore(NoiseStorage, globalThreadID, noiseValue);
        tex3Dstore(CurlNoiseStorage, globalThreadID, float4(curlValue, 0.0.xx));
    }
}

float4 PS_VolumetricCloudsHalf(float4 fragcoord : SV_Position, float2 uv : TexCoord) : SV_Target
{
    if (!inputEnabled)
    {
        discard;
    }
    
    float4 clouds = renderClouds(uv, getWeatherParams(0), getWeatherParams(1), cloudVolumeSamples);
    
    clouds.a = saturate(clouds.a);
    
    return clouds;
}

float4 denoise(sampler2D tex, float2 uv, float2 size, float sigma, float strength, float threshold)
{
    float sigmaExponent = 0.5 / (sigma * sigma);
    float sigmaMultiplier = INV_PI * sigmaExponent;
    float thresholdExponent = 0.5 / (threshold * threshold);
    float thresholdMultiplier = SQRT_TAU * threshold;
    float radius = round(strength * sigma);
    float radiusSquared = radius * radius;
    float divisor = 0.0;
    float4 color = float4(0.0, 0.0, 0.0, 0.0);
    float4 centerSample = tex2D(tex, uv);
    
    for (float x = -radius; x <= radius && x < 64; x++)
    {
        float offset = sqrt(radiusSquared - x * x);
        
        for (float y = -offset; y <= offset && y < 64; y++)
        {
            float2 coord = float2(x, y);

            float blur = exp(-dot(coord, coord) * sigmaExponent) * sigmaMultiplier;
            float4 step = tex2D(tex, uv + coord / size);
            float4 deltaCenter = step - centerSample;
            float factor = exp(-dot(deltaCenter, deltaCenter) * thresholdExponent) * thresholdMultiplier * blur;
                                 
            color += factor * step;
            divisor += factor;
        }
    }
    
    return color / divisor;
}

float4 PS_VolumetricClouds(float4 fragcoord : SV_Position, float2 uv : TexCoord) : SV_Target
{
    if (!inputEnabled)
    {
        discard;
    }
    
    float4 clouds = 0.0;
    
    if (RENDER_SCALE < 1.0 && depthEdge(uv, 1.0 / RENDER_SCALE) > 0.1)
    {
        clouds = renderClouds(uv, getWeatherParams(0), getWeatherParams(1), cloudVolumeSamples);
    }
    else
    {
        if (cloudDenoise > 0.0)
        {
            clouds = denoise(CloudsHalfResTarget, uv, BUFFER_SCREEN_SIZE * RENDER_SCALE, 1.5, 1.5, cloudDenoise);
        }
        else
        {
            clouds = tex2Dlod(CloudsHalfResTarget, float4(uv, 0.0, 0.0));
        }
    }

    float3 back = tex2Dlod(ReShade::BackBuffer, float4(uv, 0.0, 0.0)).rgb;
    
    return float4(lerp(back, clouds.rgb, clouds.a * uiMask(uv)), 1.0);
}

float4 PS_Debug(float4 fragcoord : SV_Position, float2 uv : TexCoord) : SV_Target
{
#define UVT (1.0 / 48.0) // Units in UV screen width space
    float2 uvtSquare = float2(UVT, UVT * BUFFER_ASPECT_RATIO);
    
    float4 screen = tex2D(ReShade::BackBuffer, uv);
    
    float2 noisePreviewSize = uvtSquare * 4;
    float2 noisePreviewOffset = noisePreviewSize + uvtSquare;
    float4 noise1 = drawTextureRect3D(NoiseSampler, uv, 1.0 - float2(1, 1) * noisePreviewOffset, noisePreviewSize, 0);
    float4 noise2 = drawTextureRect3D(NoiseSampler, uv, 1.0 - float2(2, 1) * noisePreviewOffset, noisePreviewSize, 1);
    float4 noise3 = drawTextureRect3D(NoiseSampler, uv, 1.0 - float2(3, 1) * noisePreviewOffset, noisePreviewSize, 2);
    float4 noise4 = drawTextureRect3D(NoiseSampler, uv, 1.0 - float2(4, 1) * noisePreviewOffset, noisePreviewSize, 3);
    float4 noise5 = drawTextureRect3D(CurlNoiseSampler, uv, 1.0 - float2(5, 1) * noisePreviewOffset, noisePreviewSize, 0);
    float4 noise6 = drawTextureRect3D(CurlNoiseSampler, uv, 1.0 - float2(6, 1) * noisePreviewOffset, noisePreviewSize, 1);
    float4 noises = lerp(lerp(lerp(lerp(lerp(noise6, noise5, noise5.a), noise4, noise4.a), noise3, noise3.a), noise2, noise2.a), noise1, noise1.a);
    
    float2 depthPreviewSize = UVT * 8;
    float4 depthTex = drawTextureRect2D(ReShade::DepthBuffer, uv, 1.0 - uvtSquare - float2(0, noisePreviewSize.y + uvtSquare.y) - depthPreviewSize, depthPreviewSize, 0);
    float depth = inputDepthReversed ? 1.0 - depthTex.r : depthTex.r;
    depthTex.rgb = depthPreview(depthToLinear(1.0 - depth.r, inputNearClip, inputFarClip)).xxx;
    
    float3 worldPos = worldPosition();
    float4 worldPosPreview = 0.0;
    float2 worldPosPosition = 1.0 - uvtSquare - float2(0, uvtSquare.y * 2.0) - depthPreviewSize - float2(UVT * 2.0, 0);
    
    if (isRectInUv(uv, worldPosPosition - float2(UVT * 2.0, 0), uvtSquare))
    {
        worldPosPreview = float4(frac(worldPos.xxx), 1.0);
    }
    else if (isRectInUv(uv, worldPosPosition - float2(UVT, 0), uvtSquare))
    {
        worldPosPreview = float4(frac(worldPos.yyy), 1.0);
    }
    else if (isRectInUv(uv, worldPosPosition, uvtSquare))
    {
        worldPosPreview = float4(frac(worldPos.zzz), 1.0);
    }
    
    float4 previews = lerp(lerp(noises, depth, depthTex.a), worldPosPreview, worldPosPreview.a);
    
    float sun = debugDrawSun(cameraRay(uv).direction, getSunDirection());
    
    float4 final = lerp(float4(sun, sun, 0.0, sun), previews, previews.a);
    
    return float4(lerp(screen.rgb, final.rgb, final.a), 1.0);
}

float4 PS_DebugSky(float4 fragcoord : SV_Position, float2 uv : TexCoord) : SV_Target
{
    return uv.x < 0.5 ? float4(getSkyColor(worldDirection(uv), 1.0), 1.0) : tex2D(ReShade::BackBuffer, uv);
}

technique PulseV_VolumetricCloudsNoise <
    string ui_label = "PulseV Volumetric Clouds - Noise Gen";
    string ui_tooltip = "Regenerates the noise textures for clouds when reloading shaders (NOTE: reloading is mandatory, enabling this technique does nothing!)";
    bool enabled = true;
    int timeout = 1;
>
{
    pass noise
    {
        ComputeShader = CS_GenerateNoise;
        DispatchSizeX = DISPATCH_SIZE(NOISE_W, NOISE_TX);
        DispatchSizeY = DISPATCH_SIZE(NOISE_H, NOISE_TY);
        DispatchSizeZ = DISPATCH_SIZE(NOISE_D, NOISE_TZ);
    }
}

technique PulseV_VolumetricClouds <
    string ui_label = "PulseV Volumetric Clouds";
    string ui_tooltip = "Main volumetric clouds shader";
>
{

    pass clouds_half
    {
        VertexShader = PostProcessVS;
        PixelShader = PS_VolumetricCloudsHalf;
        GenerateMipMaps = true;
        RenderTarget = CloudsHalfRes;
    }

    pass clouds
    {
        VertexShader = PostProcessVS;
        PixelShader = PS_VolumetricClouds;
    }
}

technique PulseV_VolumetricClouds_DEBUG <
    string ui_label = "PulseV Volumetric Clouds - DEBUGGING";
    string ui_tooltip = "Debugging mode for development";
    bool enabled = false;
>
{
    pass debug
    {
        VertexShader = PostProcessVS;
        PixelShader = PS_Debug;
    }
}

technique PulseV_VolumetricClouds_DEBUGSKY <
    string ui_label = "PulseV Volumetric Clouds - SKY COLOR DEBUGGING";
    string ui_tooltip = "Debugging mode for development to check sky color";
    bool enabled = false;
>
{
    pass debug
    {
        VertexShader = PostProcessVS;
        PixelShader = PS_DebugSky;
    }
}
