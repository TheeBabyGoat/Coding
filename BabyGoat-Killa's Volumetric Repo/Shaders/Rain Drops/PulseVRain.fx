#include "ReShadeUI.fxh"
#include "ReShade.fxh"

#define PULSEV_RAIN
#include "include/Pulse.fxh"

#define PI2  6.2831853

#define hide true


#ifndef PULSEV_RAINDROPS_COUNT
#define PULSEV_RAINDROPS_COUNT 256
#endif

#ifndef PULSEV_RAINDROPS_RES_REDUCTION
#define PULSEV_RAINDROPS_RES_REDUCTION 2
#endif

#define THREADS_X 16
#define DROPLET_SIZE 0.002


#define RES_X (1920/PULSEV_RAINDROPS_RES_REDUCTION)
#define RES_Y (1080/PULSEV_RAINDROPS_RES_REDUCTION)


#define DOWNSAMPLE_FACTOR 4
#define BLUR_RADIUS 2
#define BLUR_KERNEL_SIZE (BLUR_RADIUS * 2 + 1)

uniform float frametime < source = "frametime"; >;

uniform float3 CameraDelta < hidden = hide; > = float3(0.0f, 0.0f, 0.0f);
uniform float3 CameraDirection < hidden = hide; > = float3(0.0f, 0.0f, 0.0f);
uniform float3 WindDirection < hidden = hide; > = float3(0.0f, 0.0f, 0.0f);
uniform float3 ViewSpaceVelocity <hidden = hide;> = float3(0.0f, 0.0f, 0.0f);
uniform float3 ViewSpaceWind <hidden = hide;> = float3(0.0f, 0.0f, 0.0f);
uniform float TestVar <ui_type = "slider";ui_min = 0.0;ui_max = 20.0;hidden = hide; ui_step = 0.01f;> = 1.0;
uniform float BlurStrength <ui_type = "slider";ui_label = "Blur Strength";ui_min = 0.0;ui_max = 2.0;hidden = false;> = 1.0;
uniform float DropletBlurStrength <ui_type = "slider";ui_label = "Droplet Blur Amount";ui_min = 0.0;ui_max = 10.0;ui_step = 0.01;hidden = false;> = 1.0;
uniform float EXTRA_DROP_CHANCE <	ui_type = "drag";ui_min = 0.0f;ui_max = 1.0f; ui_step = 0.01f;hidden = hide;> = 1.0f;
uniform float EXTRA_DROP_SIZE_MUL <	ui_type = "drag";ui_label = "Extra Drop Size";ui_min = 0.0f;ui_max = 10.0f;hidden = false;> = 1.0f;
uniform float EXTRA_DROP_SPEED_MUL <	ui_type = "drag";ui_min = 0.0f;ui_max = 10.0f;hidden = hide;> = 1.0f;
uniform float EXTRA_DROP_GRAVITY_MUL <	ui_type = "drag";ui_min = 0.0f;ui_max = 10.0f;hidden = hide;> = 1.0f;
uniform float LATERAL_DRAG <	ui_type = "drag";ui_min = -10.0f;ui_max = 10.0f;hidden = hide;> = 1.0f;
uniform float LATERAL_WIND <	ui_type = "drag";ui_min = -10.0f;ui_max = 10.0f;hidden = hide;> = 1.0f;
uniform float RADIAL_DRAG <	ui_type = "drag";ui_min = -10.0f;ui_max = 10.0f;hidden = hide;> = 1.0f;
uniform float RADIAL_WIND <	ui_type = "drag";ui_min = -10.0f;ui_max = 10.0f;hidden = hide;> = 1.0f;
uniform float PERSISTANCE <	ui_type = "drag";ui_min = 0.0f;ui_max = 0.999f; ui_step = 0.001f;hidden = hide;> = 1.0f;
uniform float REFRACTION_MUL <	ui_type = "drag";ui_min = -50.0f;ui_max = 50.0f; ui_step = 0.01f;hidden = hide;> = 1.0f;
uniform float INITIAL_SIZE_MUL <	ui_type = "drag";ui_min = 0.0f;ui_max = 10.0f; ui_step = 0.01f;hidden = hide;> = 1.0f;
uniform float SIZE_MIN <	ui_type = "drag";ui_label = "Drop Size Min";ui_min = 0.0f;ui_max = 10.0f; ui_step = 0.01f;hidden = false;> = 1.0f;
uniform float SIZE_MAX <	ui_type = "drag";ui_label = "Drop Size Max";ui_min = 0.0f;ui_max = 10.0f; ui_step = 0.01f;hidden = false;> = 1.0f;
uniform float DISPLACEMENT_MAX <	ui_type = "drag";ui_label = "Displacement Strength";ui_min = 0.0f;ui_max = 10.0f; ui_step = 0.01f;hidden = false;> = 1.0f;
uniform float LENS_STRENGTH <	ui_type = "drag";ui_label = "Lens Strength";ui_min = 0.0f;ui_max = 0.5f; ui_step = 0.01f;hidden = false;> = 0.0f;
uniform float2 WindForce <ui_type = "drag";ui_label = "Wind Force";ui_min = -2.0;ui_max = 2.0;hidden = hide;> = float2(0.3, -0.2);  
uniform float Gravity <ui_type = "slider";ui_label = "Gravity Influence";ui_min = 0.0;ui_max = 1.0;hidden = hide;> = 0.5;
uniform int INITIAL_LIFETIME <ui_type = "slider";ui_label = "Droplet Max Lifetime";ui_min = 15;ui_max = 500;hidden = hide;> = 80;

//groupshared float4 shared_data[THREADS_X * 2];

texture2D TextureNoise <source = "ns.png";>
{
    Width = 64;
    Height = 64;
    Format = R8;
};

texture2D HalfResBuffer
{
    Width = RES_X / DOWNSAMPLE_FACTOR;
    Height = RES_Y / DOWNSAMPLE_FACTOR;
    Format = RGBA16F;
};

texture2D BlurredBuffer
{
    Width = RES_X / DOWNSAMPLE_FACTOR;
    Height = RES_Y / DOWNSAMPLE_FACTOR;
    Format = RGBA16F;
};

texture2D BlurredHistoryBuffer
{
    Width = RES_X;
    Height = RES_Y;
    Format = RGBA32F;
};

sampler2D BlurredHistorySampler
{
    Texture = BlurredHistoryBuffer;
    AddressU = CLAMP;
    AddressV = CLAMP;
    MagFilter = LINEAR;
    MinFilter = LINEAR;
};

sampler2D HalfResSampler
{
    Texture = HalfResBuffer;
    AddressU = CLAMP;
    AddressV = CLAMP;
    MagFilter = LINEAR;
    MinFilter = LINEAR;
};

sampler2D BlurredSampler
{
    Texture = BlurredBuffer;
    AddressU = CLAMP;
    AddressV = CLAMP;
    MagFilter = LINEAR;
    MinFilter = LINEAR;
};

sampler2D SamplerNoise
{
    Texture = TextureNoise;

    AddressU = WRAP;
    AddressV = WRAP;
    AddressW = WRAP;

    MagFilter = LINEAR;
    MinFilter = LINEAR;
    MipFilter = LINEAR;

    MinLOD = 0.0f;
    MaxLOD = 1000.0f;

    MipLODBias = 0.0f;

    SRGBTexture = false;
};

texture2D DropletBuffer
{
    Width = PULSEV_RAINDROPS_COUNT;
    Height = 2;
    Format = RGBA32F;
};

sampler2D DropletBufferSampler
{
    Texture = DropletBuffer;
    AddressU = CLAMP;
    AddressV = CLAMP;
    MagFilter = POINT;
    MinFilter = POINT;
    MipFilter = POINT;
};

texture2D HistoryBuffer
{
    Width = RES_X;
    Height = RES_Y;
    Format = RGBA32F;
};

sampler2D HistorySampler
{
    Texture = HistoryBuffer;
    AddressU = CLAMP;
    AddressV = CLAMP;
    MagFilter = LINEAR;
    MinFilter = LINEAR;
    MipFilter = LINEAR;
};

texture2D CompositeBuffer
{
    Width = RES_X;
    Height = RES_Y;
    Format = RGBA32F;
};

sampler2D CompositeSampler
{
    Texture = CompositeBuffer;
    AddressU = CLAMP;
    AddressV = CLAMP;
    MagFilter = LINEAR;
    MinFilter = LINEAR;
    MipFilter = LINEAR;
};

texture2D HistoryBuffer2
{
    Width = RES_X;
    Height = RES_Y;
    Format = RGBA32F;
};

sampler2D HistorySampler2
{
    Texture = HistoryBuffer2;
    AddressU = CLAMP;
    AddressV = CLAMP;
    MagFilter = LINEAR;
    MinFilter = LINEAR;
    MipFilter = LINEAR;
};

storage2D<float4> DropletStorage 
{
    Texture =
DropletBuffer;
    MipLevel = 0;
};  

void RainProcessVS(in uint id : SV_VertexID, out float4 position : SV_Position, out float2 texcoord : TEXCOORD)
{
    texcoord.x = (id == 2) ? 2.0 : 0.0;
    texcoord.y = (id == 1) ? 2.0 : 0.0;
    position = float4(texcoord * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
}

float3 Hash(int id)
{
    uint seed = uint(id);
    seed = (seed ^ 61) ^ (seed >> 16);
    seed *= 9;
    seed = seed ^ (seed >> 4);
    seed *= 0x27d4eb2f;
    seed = seed ^ (seed >> 15);
    uint seed_x = seed ^ 0x6D583B6Fu;
    uint seed_y = seed ^ 0xBA5EBA11u;
    uint seed_z = seed ^ 0xCAFEBABEu;
    seed_x ^= seed_x >> 16;
    seed_x *= 0x85EBCA6Bu;
    seed_x ^= seed_x >> 13;
    seed_x *= 0xC2B2AE35u;
    seed_x ^= seed_x >> 16;
    seed_y ^= seed_y >> 16;
    seed_y *= 0xC2B2AE35u;
    seed_y ^= seed_y >> 13;
    seed_y *= 0x85EBCA6Bu;
    seed_y ^= seed_y >> 16;
    seed_z ^= seed_z >> 16;
    seed_z *= 0x27D4EB2Fu;
    seed_z ^= seed_z >> 13;
    seed_z *= 0x4E72553Au;
    seed_z ^= seed_z >> 16;
    const float scale = 2.3283064365386963e-10f;
    return float3(seed_x * scale, seed_y * scale, seed_z * scale);
}

float OccasionalHash(int id, float probability)
{
    uint seed = (uint) (id * 7193);
    seed = seed * 747796405 + 2891336453;
    seed = (seed >> ((seed & 7) + 3)) ^ (seed * 3439033713);

    float randValue = float(seed) * rcp(4294967295.0);

    return (randValue < probability) ? 1.0 : 0.0;
}

float2 GetDrag(float3 camDir, float3 camVel)
{

    float normalizedCamVel = normalize(camVel + 0.000001f);

    float2 drag = -dot(normalizedCamVel, camDir) * length(normalizedCamVel);
    return drag;
}

[numthreads(THREADS_X, 1, 1)]
void CS_Simulate(uint3 tid : SV_DispatchThreadID)
{
    uint idx = tid.x + tid.y * THREADS_X;
    if (idx >= PULSEV_RAINDROPS_COUNT || tid.y >= 3 || tid.y < 0 || RainValue <= 0)
        return;

    float4 droplet = tex2Dfetch(DropletStorage, int2(idx, 0));
    float2 pos = droplet.xy;
    float life = droplet.z;
    float speed = droplet.w;
    float4 droplet2 = tex2Dfetch(DropletStorage, int2(idx, 1));
    float size = droplet2.x;
    float sizeMin = droplet2.y;
    float displacement = droplet2.z;

    if ((life <= 0 || pos.x < 0.0 - DROPLET_SIZE || pos.x > 1.0 + DROPLET_SIZE || pos.y < 0.0 - DROPLET_SIZE || pos.y > 1.0 + DROPLET_SIZE) && (idx < (RainValue * PULSEV_RAINDROPS_COUNT)))
    {
        float3 rnd = Hash(timer * 0.01f + idx);
        float rndO = OccasionalHash(idx * 762, EXTRA_DROP_CHANCE * 0.1f);

        pos = rnd.xy;
        life = INITIAL_LIFETIME * (0.2 + rnd.z * 1.0);
        size = (0.2 + rnd.z * 0.8) * SIZE_MAX * 0.01f;
        sizeMin = (0.1 + Hash(idx * 102 + timer * 0.001f).x * 2.0) * SIZE_MIN * 0.01f + rndO * EXTRA_DROP_SIZE_MUL * 0.01f;
        speed = 0.1 + rnd.z * 2.0f + rndO * EXTRA_DROP_SPEED_MUL;
        displacement = size * DISPLACEMENT_MAX;
    }

    size = clamp(size - frametime * 0.0005f, sizeMin, 999.0f);
    displacement = clamp(displacement - frametime * 0.01f, 0.0f, 999.0f);

    float2 lateralForce =
        (-ViewSpaceVelocity.xy * LATERAL_DRAG) +
        (ViewSpaceWind.xy * LATERAL_WIND);

    float2 radialForce =
        ((-1.0 + pos * 2.0) * ViewSpaceVelocity.z * RADIAL_DRAG) +
        ((-1.0 + pos * 2.0) * ViewSpaceWind.z * RADIAL_WIND);

    float2 totalForce = (lateralForce + radialForce);
    float2 velocity = (totalForce - float2(0, Gravity * 5.0f)) * speed * 0.001f;
    pos += velocity * frametime * 0.01f;

    life -= frametime * 0.01f;

    tex2Dstore(DropletStorage, int2(idx, 0), float4(pos.x, pos.y, life, speed));
    tex2Dstore(DropletStorage, int2(idx, 1), float4(size, sizeMin, displacement, 0));
}

float4 PS_Raindrops(float4 pos : SV_POSITION, float2 uv : TEXCOORD) : SV_Target
{
    float3 color = float3(0, 0, 0);
    float3 displacement = -1.0f + tex2D(SamplerNoise, uv * 1.2f) * 2.0f;
    float3 displacement2 = -1.0f + tex2D(SamplerNoise, uv * 5.0f) * 2.0f;

    const float v_coord_row0 = (1.0 + 0.5) / 2.0;
    const float v_coord_row1 = (1.0 + 0.5) / 2.0;


    uv.y = 1.0 - uv.y;

    [loop]
    for (uint i = 0; i < int(PULSEV_RAINDROPS_COUNT * RainValue); i++)
    {
        float4 droplet = tex2Dlod(DropletBufferSampler, float4((i + 0.5) / PULSEV_RAINDROPS_COUNT, 0.25, 0, 0));
        float4 droplet2 = tex2Dlod(DropletBufferSampler, float4((i + 0.5) / PULSEV_RAINDROPS_COUNT, 0.75, 0, 0));

        if (droplet.z <= 0)
            continue;

        float init_displace = droplet2.z;

        float2 dPos = droplet.xy + displacement.xy * 0.002f + displacement2.xy * 0.001f;
        float2 size = droplet2.x;
        float2 delta = (uv - float2(dPos.x, dPos.y)) / size;
        delta.x *= BUFFER_ASPECT_RATIO;
        delta += (displacement2.xy * 0.4f + displacement.xy * 0.8f) * init_displace;
        float dist = length(delta);


        if (dist > 1.0)
            continue;

        float life = droplet.z;

        float alpha = smoothstep(1.0, 0.8, dist) * smoothstep(0.0, 0.2, dist) * saturate(life / INITIAL_LIFETIME);

        float2 refractOffset = delta * 0.15 * smoothstep(1.0, 0.8, dist);

        color = float3(refractOffset, dist);
    }

    return float4(color * 10, 1.0);
}

float4 PS_Draw(float4 pos : SV_POSITION, float2 uv : TEXCOORD) : SV_Target
{
    float4 currentFrame = PS_Raindrops(pos, uv);
    currentFrame = lerp(currentFrame * REFRACTION_MUL, tex2D(HistorySampler2, uv), PERSISTANCE);
    return currentFrame;
}

float4 PS_Copy(float4 pos : SV_POSITION, float2 uv : TEXCOORD) : SV_Target
{
    return tex2D(HistorySampler, uv);
}

float4 PS_Downsample(float4 pos : SV_POSITION, float2 uv : TEXCOORD) : SV_Target
{
    float2 texelSize = BUFFER_PIXEL_SIZE;
    float4 result = 0;
    
    result += tex2D(ReShade::BackBuffer, uv + float2(-texelSize.x, -texelSize.y) * 0.5);
    result += tex2D(ReShade::BackBuffer, uv + float2(texelSize.x, -texelSize.y) * 0.5);
    result += tex2D(ReShade::BackBuffer, uv + float2(-texelSize.x, texelSize.y) * 0.5);
    result += tex2D(ReShade::BackBuffer, uv + float2(texelSize.x, texelSize.y) * 0.5);
    
    return result / 4.0;
}

static const float weights[5] = { 0.227027, 0.1945946, 0.1216216, 0.054054, 0.016216 };

float4 PS_Blur(float4 pos : SV_POSITION, float2 uv : TEXCOORD) : SV_Target
{
    float2 texelSize = BUFFER_PIXEL_SIZE * DOWNSAMPLE_FACTOR;
    float4 result;

    [branch]
    if (PULSEV_RAINDROPS_COUNT <= 0 || RainValue <= 0)
    {
        result = tex2D(HalfResSampler, uv);
    }
    else
    {
        result = tex2D(HalfResSampler, uv) * weights[0];
        for (int i = 1; i < BLUR_RADIUS; ++i)
        {
            float offset = i * texelSize.y * BlurStrength;
            result += tex2D(HalfResSampler, uv + float2(0.0, offset)) * weights[i];
            result += tex2D(HalfResSampler, uv - float2(0.0, offset)) * weights[i];
            result += tex2D(HalfResSampler, uv + float2(offset, 0.0)) * weights[i];
            result += tex2D(HalfResSampler, uv - float2(offset, 0.0)) * weights[i];
        }
    }
    
    return result;
}

float4 PS_SeparateDroplets(float4 pos : SV_POSITION, float2 uv : TEXCOORD) : SV_Target
{
    float4 drop = tex2D(HistorySampler, uv);
    
    float2 refractedUV = uv + drop.xy * (1.0 / DOWNSAMPLE_FACTOR);
    
    float4 blurredColor = tex2D(BlurredSampler, refractedUV);
    float4 originalColor = tex2D(ReShade::BackBuffer, uv);
    
    float blendFactor = saturate(length(drop.z) * 50.0);
    float4 finalColor = lerp(originalColor, blurredColor, blendFactor);
    
    finalColor += LightColour * min(lightInt, length(drop.xy)) * LightIntensity;
    
    return float4(finalColor.xyz, blendFactor);
}

float4 PS_BlurDroplets(float4 pos : SV_POSITION, float2 uv : TEXCOORD) : SV_Target
{
    const float Directions = 8.0;
    const float Quality = 2.0;
   
    float2 Radius = DropletBlurStrength / BUFFER_SCREEN_SIZE;
    
    float4 Color = tex2D(CompositeSampler, uv);
    
    for (float d = 0.0; d < PI2; d += PI2 / Directions)
    {
        for (float i = rcp(Quality); i <= 1.0; i += rcp(Quality))
        {
            Color += tex2D(CompositeSampler, uv + float2(cos(d), sin(d)) * Radius * i);
        }
    }
    
    Color /= Quality * Directions + 1;
    return Color;
}

float2 LensDistortion(float2 uv, float distortion)
{
    float2 center = float2(0.5, 0.5);
    float2 offset = uv - center;
    
    float r = length(offset);
    float factor = 1.0 + distortion * r * r;
    
    return center + offset * factor;
}

float4 PS_Final(float4 pos : SV_POSITION, float2 uv : TEXCOORD) : SV_Target
{
    float2 curveUV = LensDistortion(uv, -LENS_STRENGTH);
    float4 blurredColor = tex2D(BlurredHistorySampler, curveUV);
    float4 originalColor = tex2D(ReShade::BackBuffer, uv);

    float mix = blurredColor.a;

    float4 finalColor = lerp(originalColor, blurredColor, mix);

    return finalColor;
}

float4 PS_Debug(float4 pos : SV_POSITION, float2 uv : TEXCOORD) : SV_Target
{
    return float4(1.0, 0.0, 0.0, 1.0);
}

technique Raindrops < 
    string ui_label = "PulseV RainDrops";
    string ui_tooltip = "RainDrops Shader";
>
{
    pass Downsample
    {
        VertexShader = RainProcessVS;
        PixelShader = PS_Downsample;
        RenderTarget = HalfResBuffer;
    }
    
    pass VerticalBlur
    {
        VertexShader = RainProcessVS;
        PixelShader = PS_Blur;
        RenderTarget = BlurredBuffer;
    }
    
    pass Simulate
    {
        ComputeShader =
CS_Simulate;
        DispatchSizeX = PULSEV_RAINDROPS_COUNT / (THREADS_X * 2);
        DispatchSizeY = 1;
    }

    pass Render
    {
        VertexShader = RainProcessVS;
        PixelShader = PS_Draw;
        RenderTarget = HistoryBuffer;
        ClearRenderTargets = false;
        BlendEnable = true;
    }

    pass SeparateDroplets
    {
        VertexShader = RainProcessVS;
        PixelShader = PS_SeparateDroplets;
        RenderTarget = CompositeBuffer;
    }
    
    pass BlurDroplets
    {
        VertexShader = RainProcessVS;
        PixelShader = PS_BlurDroplets;
        RenderTarget = BlurredHistoryBuffer;
    }

    pass CopyToHistory
    {
        VertexShader = RainProcessVS;
        PixelShader = PS_Copy;
        RenderTarget = HistoryBuffer2;
        ClearRenderTargets = false;
        BlendEnable = true;
    }

    pass Final
    {
        VertexShader = RainProcessVS;
        PixelShader = PS_Final;
    }
};