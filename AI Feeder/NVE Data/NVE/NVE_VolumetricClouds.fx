#include "ReShadeUI.fxh"
#include "ReShade.fxh"
#include "NVE/NVE.fxh"
#include "NVE/NVE_Clouds.fxh"

#define INV_SQRT_OF_2PI 0.39894228040143267793994605993439  // 1.0/SQRT_OF_2PI
#define INV_PI 0.31830988618379067153776752674503
#define Pi 3.141592f
#define TwoPi 6.28318530718
#define RAYS
#define MOVEMENT
#define LIGHTNING

#define LightningBrightness (5000.0f)

uniform float timer < source = "timer";>;
uniform int framecount < source = "framecount"; >;

#define LightningColor1 float3(0.121,0.198,0.412)
#define LightningColor2 float3(0.104,0.150,0.225)

#define InScatterPow 1.0

#define earthShad1 -0.4
#define earthShad2 -0.25

#define edgeMaskSize 1.5
#define edgeMaskSizeFill 2.0
#define edgeFirstSize 2.0

#define mainChunkMin 0.0
#define mainChunkMax 1.0
#define detailBMin 1.0
#define detailBMax 0.0
#define detailCMin 0.705
#define detailCMax 0.129
#define detailCDensityExponent 1.0
#define detailCDistanceFactor 1.0
#define densityFieldMin 0.0
#define densityFieldMax 1.0

#ifndef USE_ALTERNATIVE_COVERAGE_GRADIENT
    #define USE_ALTERNATIVE_COVERAGE_GRADIENT 0
#endif
#ifndef CLOUDS_REFLECTION_RES_REDUCTION
    #define CLOUDS_REFLECTION_RES_REDUCTION 2
#endif
#ifndef CLOUDS_WATER_REFLECTION_RES_REDUCTION
    #define CLOUDS_WATER_REFLECTION_RES_REDUCTION 2
#endif

/*
uniform float falloff_high <	ui_type = "drag";ui_min = 0.0f;ui_max = 2.0f;ui_step = 0.01f;> = 1.0f;
uniform float falloff_low <	ui_type = "drag";ui_min = 0.0f;ui_max = 2.0f;ui_step = 0.01f;> = 1.0f;
uniform float shadowTest <	ui_type = "drag";ui_min = -100.0f;ui_max = 100.0f;ui_step = 0.01f;> = 1.0f;
uniform float shadowTestExp <	ui_type = "drag";ui_min = -100.0f;ui_max = 100.0f;ui_step = 0.01f;> = 1.0f;
uniform float raySmoothStepLow <	ui_type = "drag";ui_min = -200.0f;ui_max = 200.0f;ui_step = 0.01f;> = 1.0f;
uniform float raySmoothStepHigh <	ui_type = "drag";ui_min = -200.0f;ui_max = 200.0f;ui_step = 0.01f;> = 1.0f;
uniform float fogMaskExp <	ui_type = "drag";ui_min = -200.0f;ui_max = 200.0f;ui_step = 0.01f;> = 1.0f;
uniform float rayAltitudeOffset <	ui_type = "drag";ui_min = -2000.0f;ui_max = 2000.0f;ui_step = 0.1f;> = 1.0f;
uniform int g_slices <	ui_type = "drag";ui_min = 1;ui_max = 32;ui_step = 1;> = 1;
*/

uniform float lightMapOffsetX <	ui_type = "drag";ui_min = -10.0f;ui_max = 10.0f;ui_step = 0.01f;ui_category = "Lightmap";hidden=true;> = 5.63f;
uniform float lightMapOffsetScaleX <	ui_type = "drag";ui_min = 0.0f;ui_max = 30000.0f;ui_step = 0.5f;ui_category = "Lightmap";hidden=true;> = 2741.5f;
uniform float lightMapOffsetY <	ui_type = "drag";ui_min = -10.0f;ui_max = 10.0f;ui_step = 0.01f;hidden=true;> = 0.54f;
uniform float lightMapOffsetScaleY <	ui_type = "drag";ui_min = 0.0f;ui_max = 30000.0f;ui_step = 0.5f;ui_category = "Lightmap";hidden=true;> = 11734.5f;
uniform float lightMapAltitudeLow <	ui_type = "drag";ui_min = -1000.0f;ui_max = 3000.0f;ui_step = 1.0f;hidden=true;> = 660.0f;
uniform float lightMapAltitudeHigh <	ui_type = "drag";ui_min = -1000.0f;ui_max = 3000.0f;ui_step = 1.0f;hidden=true;> = 0.0f;

/*
uniform float norm_smooth <	ui_type = "drag";ui_min = 0.0f;ui_max = 10.0f;ui_step = 0.01f;> = 1.0f;
uniform float ray_offset <	ui_type = "drag";ui_min = -10.0f;ui_max = 10.0f;ui_step = 0.01f;> = 1.0f;
*/
/*
uniform float lightMapSaturation <	ui_type = "drag";ui_min = 0.0f;ui_max = 2.0f;ui_step = 0.01f;> = 1.0f;
uniform float lightMapIntensity <	ui_type = "drag";ui_min = 0.0f;ui_max = 1.0f;ui_step = 0.01f;> = 1.0f;
*/

/*
uniform float chunkPostDensityCorrectionLow <	ui_type = "drag";ui_min = 0.0f;ui_max = 1.0f;ui_step = 0.01f;> = 1.0f;
uniform float chunkPostDensityCorrectionMid <	ui_type = "drag";ui_min = 0.0f;ui_max = 1.0f;ui_step = 0.01f;> = 1.0f;
uniform float chunkPostDensityCorrectionHigh <	ui_type = "drag";ui_min = 0.0f;ui_max = 1.0f;ui_step = 0.01f;> = 1.0f;
uniform float chunkPostDensityCorrectionMidCurve <	ui_type = "drag";ui_min = 0.0f;ui_max = 10.0f;ui_step = 0.01f;> = 1.0f;


uniform float ambientCurve <	ui_type = "drag";ui_min = 1.0f;ui_max = 10.0f;ui_step = 0.01f;> = 1.0f;
*/


texture2D           TextureNoise <source = "ns.png";>{Width = 64; Height = 64; Format = R8;}; 
texture3D           TextureNoise_actually3D <source = "nubisnoise.dds";>{Width = 128; Height = 128; Depth = 128; Format = RGBA8;};          
texture3D           TextureNoise_actually3DCurl <source = "curl3D.dds";>{Width = 128; Height = 128; Depth = 256; Format = R8;};  
texture2D           TextureLight <source = "lightmap.png";>{Width = 1229; Height = 1575; Format = RGBA8;}; 


texture2D CloudsReflectionBuffer {
    Width = 512 / CLOUDS_REFLECTION_RES_REDUCTION;
    Height = 512 / CLOUDS_REFLECTION_RES_REDUCTION;
    Format = RGBA16F;
};
texture2D CloudsWaterReflectionBuffer {
    Width = 512 / CLOUDS_WATER_REFLECTION_RES_REDUCTION;
    Height = 512 / CLOUDS_WATER_REFLECTION_RES_REDUCTION;
    Format = RGBA16F;
};
sampler2D CloudsReflectionSampler       { Texture = CloudsReflectionBuffer; };
sampler2D CloudsWaterReflectionSampler  { Texture = CloudsWaterReflectionBuffer; };

texture2D RenderTarget256     {	Width = 256; Height = 256; Format = RGBA32F;};
texture2D RenderTarget256_2     {	Width = 256; Height = 256; Format = RGBA32F;};
texture2D RenderTarget512_2     {	Width = 512; Height = 512; Format = RGBA32F;};
texture2D RenderTarget512_3     {	Width = 512; Height = 512; Format = RGBA32F;};
texture2D RenderTarget512       {	Width = 512; Height = 512; Format = RGBA32F;};
texture2D RenderTarget1024       {	Width = 1024; Height = 1024; Format = RGBA32F;};
texture2D RenderTarget1024_2     {	Width = 1024; Height = 1024; Format = RGBA32F;};
texture2D RenderTarget1024_3       {	Width = 1024; Height = 1024; Format = RGBA32F;};
texture2D RenderTargetHalf       {	Width = BUFFER_WIDTH/2; Height = BUFFER_HEIGHT/2; Format = RGBA32F;};
texture2D RenderTargetFull      {	Width = BUFFER_WIDTH; Height = BUFFER_HEIGHT; Format = RGBA32F;};
texture2D RenderTargetFull2      {	Width = BUFFER_WIDTH; Height = BUFFER_HEIGHT; Format = RGBA32F;};
texture2D RenderTargetFullMask      {	Width = BUFFER_WIDTH; Height = BUFFER_HEIGHT; Format = R8;};
texture2D RenderTargetFullMaskGrow      {	Width = BUFFER_WIDTH; Height = BUFFER_HEIGHT; Format = R8;};

texture texShading : SHADE_MAP;
texture waterMask : WATER_MASK;
sampler2D waterMaskSampler       { Texture = waterMask; };

sampler2D RTSampler256        { Texture = RenderTarget256; };
sampler2D RTSampler256_2       { Texture = RenderTarget256_2; };
sampler2D RTSampler512_2        { Texture = RenderTarget512_2; };
sampler2D RTSampler512_3        { Texture = RenderTarget512_3; };
sampler2D RTSampler512          { Texture = RenderTarget512; };
sampler2D RTSampler1024          { Texture = RenderTarget1024; };
sampler2D RTSampler1024_2       { Texture = RenderTarget1024_2; };
sampler2D RTSampler1024_3          { Texture = RenderTarget1024_3; };
sampler2D RTSamplerHalf          { Texture = RenderTargetHalf; };
sampler2D RTSamplerFull         { Texture = RenderTargetFull;};
sampler2D RTSamplerFull2         { Texture = RenderTargetFull2;};
sampler2D RTSamplerFullMask         { Texture = RenderTargetFullMask;};
sampler2D RTSamplerFullMaskGrow         { Texture = RenderTargetFullMaskGrow;};

sampler2D SamplerShading
{
	Texture = texShading;
	AddressU = CLAMP;
	AddressV = CLAMP;
	AddressW = CLAMP;
	MagFilter = LINEAR;
	MinFilter = LINEAR;
	MipFilter = LINEAR;
};
sampler2D Sampler2_ns
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

sampler3D Sampler3D
{
	Texture = TextureNoise_actually3D;

	AddressU = WRAP;
	AddressV = WRAP;
	AddressW = WRAP;

	MagFilter = LINEAR;
	MinFilter = LINEAR;
	MipFilter = LINEAR;

	MinLOD = 0.0f;
	MaxLOD = 0.0f;

	MipLODBias = 0.0f;

	SRGBTexture = false;
};

sampler3D Sampler3DCurl
{
	Texture = TextureNoise_actually3DCurl;

	AddressU = WRAP;
	AddressV = WRAP;
	AddressW = WRAP;

	MagFilter = LINEAR;
	MinFilter = LINEAR;
	MipFilter = LINEAR;

	MinLOD = 0.0f;
	MaxLOD = 0.0f;

	MipLODBias = 0.0f;

	SRGBTexture = false;
};

sampler2D SamplerLight
{
	Texture = TextureLight;

	AddressU = CLAMP;
	AddressV = CLAMP;
	AddressW = CLAMP;

	MagFilter = LINEAR;
	MinFilter = LINEAR;
	MipFilter = LINEAR;

	MinLOD = 0.0f;
	MaxLOD = 0.0f;

	MipLODBias = 0.0f;

	SRGBTexture = false;
};

float map(float x, float a, float b, float c, float d) {
    return (x - b) / (a - b) * (c - d) + d;
}
float clampMap(float x, float a, float b, float c, float d) {
    return saturate((x - b) / (a - b)) * (c - d) + d;
}
float rescale(float vMin,float vMax,float v){
    return saturate((v - vMin) / (vMax - vMin));
}

//==================NVE CLOUDS====================
static const float3 _baseColor = float3(0.0f,0.0f,0.0f);
static const float3 _colorNight = float3(0.0f,0.0f,0.0f);
static const float3 _baseColorDay = float3(0.0f,0.0f,0.0f);
static const float3 _baseColorSunset = float3(0.0f,0.0f,0.0f);
static const float3 _sunColorSunRise = float3(0.0f,0.0f,0.0f);
static const float3 _sunColorSunDay = float3(0.0f,0.0f,0.0f);
static const float3 _sunColorSunSet = float3(0.0f,0.0f,0.0f);

//===================NOISEGEN=====================
static float randomSeed = 1618.03398875;

#define HASHSCALE 0.1031

float HashSporadic(float time, float minInterval, float maxInterval)
{
    // Base interval time for generating a stable interval seed
    float baseInterval = 1.0;
    
    // Generate a stable "interval seed" based on the base interval.
    float intervalSeed = floor(time * baseInterval + 0.00001);
    
    // Generate a random interval length within the specified range [minInterval, maxInterval]
    float randomInterval = minInterval + frac(sin(intervalSeed * 78.233) * 43758.5453) * (maxInterval - minInterval);
    
    // Compute the "interval index" using the variable interval
    float intervalIndex = floor(time / randomInterval);
    
    // Generate the sporadic random value based on the interval index
    return frac(sin(intervalIndex * 12.9898) * 43758.5453);
}

float hash2(float p){
    float3 p3  = frac(float3(p,p,p) * HASHSCALE);
    p3 += dot(p3, p3.yzx + 19.19);
    return frac((p3.x + p3.y) * p3.z);
}

float hash(float n) {
    return frac(sin(n/1873.1873) * randomSeed);
}
float noise2d(float3 p) {

    return tex2Dlod(Sampler2_ns,float4(p.x,p.y,0.0f,0.0f)).x;
}
float noise3d(float3 p) {

    float3 fr = floor(p),
    ft = frac(p);

    float n = 1153.0 * fr.x + 2381.0 * fr.y + fr.z,
    nr = n + 1153.0,
    nd = n + 2381.0,
    no = nr + 2381.0,

    v = lerp(hash(n), hash(n + 1.0), ft.z),
    vr = lerp(hash(nr), hash(nr + 1.0), ft.z),
    vd = lerp(hash(nd), hash(nd + 1.0), ft.z),
    vo = lerp(hash(no), hash(no + 1.0), ft.z);

    return lerp(lerp(v,vr,ft.x), lerp(vd,vo,ft.x),ft.y);
}
float sampledNoise3D_3D(float3 p,float LOD){;
    p*=0.1f;

    //p.z+=4096;

    float ret = 1.0f-tex3Dlod(Sampler3D,float4(p.x,p.y,p.z,LOD)).x;
	
	return ret;
	
}
float sampledNoise3D_3D_g(float3 p,float LOD){;
    p*=0.1f;

    //p.z+=4096;

    float ret = 1.0f-tex3Dlod(Sampler3D,float4(p.x,p.y,p.z,LOD)).g;
	
	return ret;
	
}
float sampledNoise3D_3D_b(float3 p,float LOD){;
    p*=0.1f;

    //p.z+=4096;

    float ret = 1.0f-tex3Dlod(Sampler3D,float4(p.x,p.y,p.z,LOD)).b;
	
	return ret;
	
}
float sampledNoise3D_3D_a(float3 p,float LOD){;
    p*=0.1f;

    //p.z+=4096;

    float ret = 1.0f-tex3Dlod(Sampler3D,float4(p.x,p.y,p.z,LOD)).a;
	
	return ret;
	
}
float sampledNoise3D_3DCurl(float3 p){;
    p*=0.1f;

    //p.z+=4096;

    float ret = 1.0f-tex3Dlod(Sampler3DCurl,float4(p.x,p.y,p.z,0.0f)).x;
	
	return ret;
	
}
float3 RGBtoHSV(float3 c)
{
    float cMax = max(c.r, max(c.g, c.b));
    float cMin = min(c.r, min(c.g, c.b));
    float delta = cMax - cMin;

    // Hue calculation
    float hue = 0.0;
    if (delta != 0.0)
    {
        if (cMax == c.r)
            hue = ((c.g - c.b) / delta) % 6.0;
        else if (cMax == c.g)
            hue = ((c.b - c.r) / delta) + 2.0;
        else
            hue = ((c.r - c.g) / delta) + 4.0;

        hue *= 60.0;
        if (hue < 0.0)
            hue += 360.0;
    }

    // Saturation calculation
    float saturation = (cMax == 0.0) ? 0.0 : (delta / cMax);

    // Value calculation
    float value = cMax;

    return float3(hue / 360.0, saturation, value);
}

float3 HSVtoRGB(float3 c)
{
    float hue = c.x * 360.0;
    float saturation = c.y;
    float value = c.z;

    float C = value * saturation;
    float H = hue / 60.0; // H will be in [0,6)

    // Use frac function to get fractional part of H / 2.0
    float K = frac(H / 2.0) * 2.0;
    float X = C * (1.0 - abs(K - 1.0));

    float m = value - C;
    float3 rgb;

    if (H >= 0.0 && H < 1.0)
        rgb = float3(C, X, 0.0);
    else if (H >= 1.0 && H < 2.0)
        rgb = float3(X, C, 0.0);
    else if (H >= 2.0 && H < 3.0)
        rgb = float3(0.0, C, X);
    else if (H >= 3.0 && H < 4.0)
        rgb = float3(0.0, X, C);
    else if (H >= 4.0 && H < 5.0)
        rgb = float3(X, 0.0, C);
    else if (H >= 5.0 && H < 6.0)
        rgb = float3(C, 0.0, X);
    else
        rgb = float3(0.0, 0.0, 0.0);

    rgb += float3(m, m, m);

    return rgb;
}

//=================Structs========================
struct CloudProfile
{
    float4 march;   //min length, max length, multiplicand, max step
    
    float2 cutoff;  // density cut, transparency cut

    float2 volumeBox;   //top, bottom
    float4 shape;       //top, mid, bot, thickness
    float soft;
    float grad;

    float brightness;
    float3 range;    //total, top, bottom
    float2 _solidness;   //top, bottom
    
    float2 densityChunk;    //dens A,B
    
    float4 shadow;  //step length, detail strength, expanding, strength
    float4 distortion;  //max angle, strength, bump strength, small bump strength
    
    float fade;
    
    float3 densityDetail;   //dens C,D,E
    
    // 
    float3 scaleChunk;    //scale A,B, vertical stretch
    float3 scaleDetail;   //scale C,D,E
    float3 cloudShift;

    float3 offsetA;
    float3 offsetB;
    float3 offsetC;
    float3 offsetD;
    float3 offsetE;
    float startDistance;

    float shadowLod;
    float chunkLod;
    float detailLod;

};

struct CloudBaseColor
{
    float3 BaseColor;
    float3 BaseColor_Day;
    float3 BaseColor_Sunset;
};
#define CLOUD_COVERAGE float(coverageBottom*CloudyCoverage)
//#define CLOUD_COVERAGE float(1.0f)

struct AtmoColorPerDayTime
{
    float3 MorningAtSun;
    float3 MorningAwaySun;
    float3 Day;
    float3 EveningAtSun;
    float3 EveningAwaySun;
};

//=================Cloud settings========================
static CloudProfile cloudProfile;
static CloudProfile cloudProfile2;		
static CloudBaseColor baseColor;

//=================Functions=======================
float ValueErosion(float inValue, float inOldMin)
{
	// derrived from Set-Range, this function uses the oldMin to erode or inflate the input value. - inValues inflate while + inValues erode
	float old_min_max_range = (1.0 - inOldMin);
	float clamped_normalized = saturate((inValue - inOldMin) / old_min_max_range);
	return (clamped_normalized);
}


float3 PosOnPlane(const in float3 origin, const in float3 direction, const in float h, inout float _distance) {
    _distance = (h - origin.z) / direction.z;
    return origin + direction * _distance;
}
float3 Distortion(float lump, float4 distortion)
{
    return float3(cos(lump*distortion.x)*distortion.y, 0.0, -lump*distortion.z);
}
#if USE_ALTERNATIVE_COVERAGE_GRADIENT
float Gradient3Point(
    float2 uv,
    float lowValue,
    float midValue,
    float highValue,
    float lowPoint,
    float midPoint,
    float highPoint)
{
    // Use uv.y as the input value for the gradient (could represent altitude)
    float y = uv.y;

    // Ensure the points are ordered correctly (preventing division by zero)
    if (midPoint == lowPoint) midPoint += 0.0001;
    if (highPoint == midPoint) highPoint += 0.0001;

    // Calculate normalized positions
    float t = saturate((y - lowPoint) / (highPoint - lowPoint));
    float tm = saturate((midPoint - lowPoint) / (highPoint - lowPoint));

    // Use smoothstep to create smooth transitions
    float lowToMidBlend = smoothstep(0.0, tm, t);
    float midToHighBlend = smoothstep(tm, 1.0, t);

    // Interpolate between low and mid, then between mid and high
    float lowToMid = lerp(lowValue, midValue, lowToMidBlend);
    float midToHigh = lerp(midValue, highValue, midToHighBlend);

    // Blend between the two regions smoothly around the midPoint
    float blendWidth = chunkPostDensityCorrectionMidCurve; // Adjust this value to control the smoothness around midPoint
    float midBlend = smoothstep(tm - blendWidth, tm + blendWidth, t);

    // Final value with smooth transition
    return lerp(lowToMid, midToHigh, midBlend);
}
#else
float Gradient3Point(float2 uv, float lowValue, float midValue, float highValue, float lowPoint, float midPoint, float highPoint)
{
    // Use uv.y as the input value for the gradient (could represent altitude)
    float y = uv.y;

    // Ensure the points are ordered correctly (preventing division by zero)
    if (midPoint == lowPoint) midPoint += 0.0001;
    if (highPoint == midPoint) highPoint += 0.0001;

    // Calculate blend factors for each range
    float lowToMidBlend = saturate((y - lowPoint) / (midPoint - lowPoint));
    float midToHighBlend = saturate((y - midPoint) / (highPoint - midPoint));

    // Interpolate between low and mid, then between mid and high
    float lowToMid = lerp(lowValue, midValue, lowToMidBlend);
    float midToHigh = lerp(midValue, highValue, midToHighBlend);

    // Choose between the two regions based on the Y coordinate (altitude)
    return (y < midPoint) ? lowToMid : midToHigh;
}
#endif
float4 CloudShape(float z, float4 shape, float3 range,float softM) {
    float soft = map(z, shape.y, shape.x, range.z, range.y)*softM;

    float x = Gradient3Point(z,chunkPostDensityCorrectionLow,chunkPostDensityCorrectionMid,chunkPostDensityCorrectionHigh,
    shape.z,shape.y,shape.x);

    return saturate(float4(
        x, 
        range.x + soft,
        range.x - soft,
        soft));
        
}
float Chunk(in float3 pos, const in float2 density, const in float3 scale, const in float3 cloud_shift, const in float3 offsetA, const in float3 offsetB, in float cs, in float a_grad,in float LOD) {
    
    
    //float altitude = clampMap(pos.z,MyValue,MyValue2,MyValue3,MyValue4);
    //pos += cloud_shift*pos.z;

    float3
        pA = (pos + offsetA),
        pB = (pos + offsetB),
        pG = (pos + offsetB);

        pA.xy *= scale.x;
        pB.xy *= scale.y;
        pB.z *= chunkBZScale*0.001f;
        pA.z *= scale.z*0.001f;

        pG.xy *= TopCoverageGradientScale*0.001f;
        pG.z *= TopCoverageGradientVertScale * 0.001f;

    //cs.x = sampledProfile(pos,sampledNoise3D_3DCurl(float3(pA.x,pA.y,0.0)).x)*density.x;

    float b = 1.0-sampledNoise3D_3DCurl(pB);

    float grad = lerp(1.0,clampMap(pos.z,TopCoverageGradientBottom+cloudHeight,TopCoverageGradientTop+cloudHeight,1.0,0.0),TopCoverageGradient*sampledNoise3D_3D_a(pG,LOD)*a_grad);
    //cs.x=saturate(cs.x-(b)*alt_factor*density.y);
    //cs.x*=(1.0-sampledNoise3D_3D_b(pB));
    float a = smoothstep(mainChunkMin,mainChunkMax,sampledNoise3D_3D(pA,LOD));
    float dens_a = (a)*cs.x*density.x*grad;
    dens_a = ValueErosion(dens_a,saturate(b*density.y));

    dens_a = dens_a*(1.0f-smoothstep(1.0f,0.0f,length(pos.xy-float2(0.0f,0.0f))/HorizonCutoffRadius)*HorizonCutoffMul); 
    //dens_a*=1.0-exp(-grad*InScatterFactor);
    //float dens_a = sampledProfile(pA,sampledNoise3D_3DCurl(float3(pB.x,pB.y,0.0)).x)*density.x;
    //dens_a -= sampledProfile(pos)*cloudMapStrength;
    //dens_a -= (1.0f-sampledNoise3D_3D(pos*cloudmapScale*0.001)*cloudMapStrength);
    //float altitudeParam = smoothstep(0.1,0.8,((pp.z)-cloudProfile.volumeBox.y)/(cloudProfile.volumeBox.x - (cloudProfile.volumeBox.y+cloudmapOffset)));
    //dens_a -= lerp((sampledNoise3D_3D(cpPos)),0.0f,1.0f-cloudMapStrength);

    //dens_a *= alt_factor;

    return saturate(dens_a);
}

//Detail noise for clouds
float DetailA(in float3 pos, const in float3 density, const in float3 scale, const in float3 offsetC, const in float3 distortion, in float LOD) {
    float3 p = pos;
    p.z *= detailZScaleA;
    return density.x * (sampledNoise3D_3D((p + offsetC + distortion) * scale.x,LOD));
}

float DetailB(const in CloudProfile cp,const in float lump_density, in float3 pos, const in float2 volumeBox, const in float3 density, const in float3 scale, const in float4 distortionParm, const in float3 offsetC, const in float3 offsetD,const in float3 offsetE, float cs, in float LOD) {

    float3 d = Distortion(lump_density, distortionParm);
    
    float3
        pD = pos + offsetD;

    float dens = DetailA(pos, density, scale, offsetC, d, LOD);

    d.z -= dens * distortionParm.w;

    float3 pD2 = pD;
    pD2.z *= detailZScaleB*2;

    float3 pD3 = pos + offsetE;
    pD3.z *= detailZScaleC*2;

    float3 cam_pos = float3(InverseView[3].x, InverseView[3].y, InverseView[3].z);
    float dist = length(pos - cam_pos);

    float c_factor = clampMap(dist*detailCDistanceFactor,0.0,cp.fade,1.0,0.0);

    float b = smoothstep(detailBMin,detailBMax,sampledNoise3D_3D_a((pD2 + d/3.0) * scale.y,LOD));
    float c = smoothstep(detailCMin,detailCMax,sampledNoise3D_3DCurl((pD3 + d*8.0) * scale.z));

    float alt_factor = clampMap(pos.z,BottomDetailLow+cloudHeight,BottomDetailHigh+cloudHeight,0.0,1.0);

    //b*=clampMap(pos.z,BottomDetailLow,BottomDetailHigh,0.0,1.0);


    //c+=co*(1.0-alt_factor)*c_factor*BottomDetailMul;
    c*=c_factor;


    //dens = map(dens,0.0,1.0,0.0,1.0-saturate(c*c_factor+co*alt_factor*c_factor+b));
    //dens = rescale(saturate(b*density.y+c*density.z+c*alt_factor),MyValue3,dens);
    dens = ValueErosion(dens,clamp(b*density.y*alt_factor,0.0,1.0));
    dens = ValueErosion(dens,clamp(c*density.z,0.0,1.0));
    //dens+=b*density.y*alt_factor;
    //dens+=c*density.z;
    //dens-=co*alt_factor*c_factor;
    //dens+=b*density.y*(1.0-alt_factor)*(2.0-c_factor);
    //dens+=(co*density.z*c_factor);
    return saturate(dens);
}
float DensityField(float lump, float detail)
{
    return smoothstep(densityFieldMin,densityFieldMax,lump*detail+lump);
}
float GetDensity(float density_field, float height, float low, float high, float2 volumeBox, float2 _solidness)
{
    return clampMap(density_field, low, high, 0.0, clampMap(height, volumeBox.y, volumeBox.x, _solidness.y, _solidness.x));
}

//==============SCATTERING FUNCTIONS=========================
float3 pow3(float3 v, float n)
{
    return float3(pow(v.x, n), pow(v.y, n), pow(v.z, n));
}

#define atmosphereStep (15.0)
#define lightStep (3.0)
#define fix (0.00001)
#define sunLightStrength (sunStrength)
#define moonReflecticity (0.125)
#define LightingDecay (0.001)
#define rayleighStrength (1.8)
#define rayleighDecay (250.0)
#define atmDensity (atmDensityConfig)
#define atmCondensitivity (1.0)
#define waveLengthFactor (float3(1785.0625, 850.3056, 410.0625))
#define scatteringFactor (float3(1.0, 1.0, 1.0)*waveLengthFactor/rayleighDecay)  // for tuning, should be 1.0 physically, but you know.
#define mieStrength (mieStrengthConfig)
#define mieDecay (600.0)
#define fogDensity (0.2)
#define earthRadius (6.421)
#define  groundHeight (6.371)
#define AtmOrigin (float3(0.0, 0.0, groundHeight))
#define earth (float4(0.0, 0.0, 0.0, earthRadius))
#define game2atm (atmoConvDist*100000.0f)
static float3 sunColor;

float3 Game2Atm(float3 gamepos)
{
    return (gamepos/(game2atm)) + AtmOrigin;
}
float3 Game2Atm_2(float3 gamepos)
{
    return float3(0.0,0.0,gamepos.z/game2atm) + AtmOrigin;
}

float4 sphereCast(float3 origin, float3 ray, float4 sphere, float _step, out float3 begin)
{
    float3 p = origin - sphere.xyz;
    
    float 
        r = length(p),
        d = length(cross(p, ray));    
        
    if (d > sphere.w+fix) return 0.0;    
        
    float
        sr = sqrt(sphere.w*sphere.w - d*d),    
        dr = -dot(p, ray);    
        
    float3
        pc = origin + ray * dr,
        pf = pc + ray * sr,
        pb = pc - ray * sr;
    
    float sl; 
    
    if(r > sphere.w){      
        begin = pb;
        sl = sr*2.0/_step;
    }
    else{   
        begin = origin;
        sl = length(pf - origin)/_step;
    }
    return float4(ray * sl, sl);
}

float2 Density(float3 pos, float4 sphere, float strength, float condense)
{
    float r = groundHeight;
    float h = length(pos-sphere.xyz)-r;
    float ep = exp(-(sphere.w-r)*condense);

    float fog = fogDensity*(rcp(1200.0*h+0.5))/2.0;
    
    if(h<0.0){
        return float2(strength, fogDensity);
    }

    return float2((exp(-h*condense)-ep)/(1.0-ep)*strength, fog);
}

float3 rayleighScattering(float c)
{
    return (1.0+c*c)*rayleighStrength/waveLengthFactor;
}

float HenyeyGreenstein(float inCos, float inG){
    float num = 1.0 - inG * inG;
    float denom = 1.0 + inG * inG - 2.0 * inG * inCos;
    float rsqrt_denom = rsqrt(denom);

    return num * rsqrt_denom * rsqrt_denom * rsqrt_denom * (1.0 / (4.0 * Pi));
}

float MiePhase(float c)
{
    //return 1.0f+1.5f*exp(25.0f*(c-1.0f));
    return 1.0f+HenyeyGreenstein(c, 0.4);
}

float MieScattering(float c)
{
    return mieStrength*MiePhase(c);
}

float3 LightDecay(float densityR, float densityM)
{
    return exp(-densityR/scatteringFactor - densityM*mieDecay);
}

float3 SunLight(float3 light, float3 position, float3 lightDirection, float4 sphere)
{
    float3 smp;
    float4 sms = sphereCast(position, normalize(lightDirection), sphere, lightStep, smp);      
    float2 dl;
    
    for(float j=0.0; j<lightStep; j++)
    {
        smp+=sms.xyz;
        dl += Density(smp, sphere, atmDensity, atmCondensitivity);
    }

    return saturate(light*LightDecay(dl.x, dl.y)/LightingDecay);

}

float3 LightSource(float3 SunDir, float3 MoonDir, out float3 SourceDir)
{
    // Calculate the blend factor using smoothstep for a smooth transition
    float blendFactor = smoothstep(earthShad1, earthShad2, SunDir.z);
    
    // Lerp between sun and moon direction and light based on blend factor
    SourceDir = lerp(MoonDir, SunDir, blendFactor);
    
    // Return the interpolated light between sun and moon
    return normalize(lerp(sunLightStrength * moonReflecticity * sunColor, sunLightStrength * sunColor, blendFactor));
}


float ShadowMarching(CloudProfile cp,float dens, float3 p, float2 densityChunk, float3 densityDetail, float3 scaleChunk, float3 scaleDetail, float3 shift, float4 profile, float3 dens_thres, const in float3 offsetA, const in float3 offsetB, const in float3 offsetC, float3 SunDir, float4 shadow, float2 volumeBox, float2 _solidness, float4 distortionParm, in float LOD) {
    if(dens<=shadowEarlyExit*0.0001f) return dens*shadow.x*shadowEarlyExitApprox;  //return a approx. value
    
    const float threshold = shadowThreshold/shadow.w/shadow.x;
    
    float d = 0.0;
    float4 step = float4(SunDir.xyz*shadow.x, shadow.x);
    int s_t = 0;
    

    for(int i=0; p.z<volumeBox.x && p.z>volumeBox.y && i<shadowSteps; i++)
    {
        float4 cs = CloudShape(p.z, profile, dens_thres,cp.soft);
        float d1 = Chunk(p, densityChunk, scaleChunk, shift, offsetA, offsetB, cs.x,cp.grad,LOD);
        
        float3 displace = Distortion(d1, distortionParm);
        //float d2 = DetailB(cloudProfile, d1,p,float2(volumeBoxX,volumeBoxY)+cloudHeight,densityDetail, scaleDetail,cloudProfile.distortion, offsetC,cloudProfile.offsetD,cloudProfile.offsetE, cs.x) * shadow.y;
        float d2 = DetailA(p,densityDetail, scaleDetail, offsetC, displace,LOD) * shadow.y;
        d += GetDensity(DensityField(d1, d2), p.z, cs.z-shadow.z+shadowOffset, cs.y, volumeBox, float2(0.99,0.88)*InScatterPow) * shadow.w;
        s_t+=1;
        p+=step.xyz+(-1.0+hash2(p.z)*2.0)*shadowNoise;

    }

    return d*s_t;
}
float ShadowOnGround(CloudProfile a, float3 position, float3 SunDirection,in float LOD,in float shapeMod,in float shapeSoftAdjust)
{    
    a.range.x = rcp(a.range.x);
        
	float d;
    //float3 samppos = PosOnPlane(position, SunDirection, a.shape.y-C_fadeDist*100, d);
	float3 samppos = PosOnPlane(position, SunDirection, a.shape.y, d);

    float d1 = 0.0, d2 = 0.0;
    float4 cs;
    
	cs = CloudShape(samppos.z, a.shape, float3(a.range.x*gsShapeAdjust*shapeMod,a.range.y,a.range.z),a.soft);
	d1 = Chunk(samppos, a.densityChunk, a.scaleChunk, a.cloudShift, a.offsetA, a.offsetB, cs.x,a.grad,LOD);
	
	float3 displace = Distortion(d1, a.distortion);
	d2 = DetailA(samppos, a.densityDetail, a.scaleDetail, a.offsetC, displace,LOD) * a.shadow.y;    
	float adjustTerm =  max(a.shape.y - max(a.volumeBox.y, position.z*1.0), 0.0) * clampMap(d, 0.0, a.fade, 1.0, 0.0);

    
	return GetDensity(DensityField(d1, d2), samppos.z, cs.z-a.shadow.z, cs.y*gsSoftness*shapeSoftAdjust, a.volumeBox, a._solidness)*adjustTerm;
}
float ShadowStatic(CloudProfile a, float3 position, float3 SunDirection, float mul, float LOD)
{    
    a.range.x = rcp(a.range.x);
    //position.z = min(position.z+rayAltitudeOffset,ray_shape_offset);
        
	float d;
    //float3 samppos = PosOnPlane(position, SunDirection, a.shape.y-C_fadeDist*100, d);
	float3 samppos = PosOnPlane(position, SunDirection, a.shape.y, d);



    float d1 = 0.0, d2 = 0.0;
    float4 cs;
    

    float length_adjust = clampMap(d*0.1,0,a.volumeBox.x,1.0,0.0);
	cs = CloudShape(samppos.z, float4(a.shape.x,a.shape.y,a.shape.z,a.shape.w), float3(a.range.x*gsShapeAdjust*ray_shape,a.range.y,a.range.z),a.soft);
	d1 = Chunk(samppos, a.densityChunk, a.scaleChunk, a.cloudShift, a.offsetA, a.offsetB, cs.x,a.grad,LOD);
	
	float3 displace = Distortion(d1, a.distortion);
	d2 = DetailA(samppos, a.densityDetail, a.scaleDetail, a.offsetC, displace,LOD) * a.shadow.y;    
	float adjustTerm =  max(a.shape.y - max(a.volumeBox.y, position.z*1.0f), 0.0) * clampMap(d, 0.0, a.fade, 1.0, 0.0);
    
	return GetDensity(DensityField(d1, d2), samppos.z, cs.z-a.shadow.z, cs.y*gsSoftness, a.volumeBox, a._solidness)*adjustTerm*mul;
}
//SPHERE CAST LAYER
// WIP SPHERE CAST FUNCTIONS

#define cloudBallRadius cBallRad
#define cloudClipAltitudeBegin cBallClipBegin
#define cloudClipAltitudeEnd cBallClipEnd
#define penetrationFix edgeMaskSize
#define lowerboundFix -50.0

float4 interPointSphere(float3 origin, float3 ray, float4 sphere)
{
    float3 p = origin - sphere.xyz;

    float 
        r = length(p),
        d = length(cross(p, ray));   
        
    if (d > sphere.w+fix) return float4(0.0,0.0,0.0,0.0);    
        
    float
        sr = sqrt(sphere.w*sphere.w - d*d),    
        dr = -dot(p, ray)+penetrationFix,    
        tmp = max(dr-sr, 0.0);

    if(dr-sr >= -16.0)
        return float4(ray * tmp, tmp);
    else
        return float4(ray * (dr+sr), (dr+sr));
}

float3 CastStep(float3 origin, float3 ray, float2 volumeBox, out float d)
{
    float3 origin_ec = origin;
    float r = origin.z+cloudBallRadius;
    origin_ec.xy = float2(0.0,0.0);
    volumeBox.x += cloudBallRadius;
    volumeBox.y += cloudBallRadius;
    
    if(r<volumeBox.y){
        float4 inner = interPointSphere(origin_ec, ray, float4(0.0,0.0,-cloudBallRadius,volumeBox.y));
        d = inner.w;
        return inner.xyz+origin.xyz;
    }
    else if(r<volumeBox.x)
    {
        d = 0.0;
        return origin;
    }
    else{
        float4 outer = interPointSphere(origin_ec, ray, float4(0.0,0.0,-cloudBallRadius,volumeBox.x));
        d = outer.w;
        return outer.xyz+origin.xyz;
    }
}

float4 fakeSphereMap(float3 p, float3 camera, float3 ray)
{
    float3 fromCenter = p-float3(camera.x,camera.y,-cloudBallRadius);
    float z = length(fromCenter)-cloudBallRadius;
    return float4(p.x, p.y, z, dot(ray, fromCenter));
}

float3 AtmosphereScattering(float3 background ,float3 marchPos, float4 marchStep, float3 ray, float3 lightStrength, float3 lightDirection, float strength, float4 sphere)
{
    float3 intensity=0.0;
    
    float ang_cos = dot(ray, lightDirection);
    float mie = MieScattering(ang_cos);
    float3 raylei = rayleighScattering(ang_cos);
    
    if(marchStep.w>0.015)
        marchStep /= marchStep.w/0.015;
    
    float2 dv=0.0;
    for(float i=0.0; i<atmosphereStep; i++)
    {
        float3 smp;
        float4 sms = sphereCast(marchPos, lightDirection, sphere, lightStep, smp);
        float2 sampling = Density(marchPos, sphere, atmDensity, atmCondensitivity)*marchStep.w;
            
        dv += sampling/2.0;
        
        float2 dl=dv;
        for(float j=0.0; j<lightStep; j++)
        {
            smp+=sms.xyz;
            dl += Density(smp, sphere, atmDensity, atmCondensitivity)*sms.w;
        }
        
        intensity += LightDecay(dl.x, dl.y)*(raylei*sampling.x + mie*sampling.y);     
        dv += sampling/2.0;
        marchPos+=marchStep.xyz;
    }
    
    return lightStrength*intensity*strength + background*LightDecay(dv.x, dv.y);
}

float3 atmosphere_scattering(float strength, float3 color, float3 camera, float3 ray, float distance, float3 SunDirection, float4 sphere)
{
    if(distance<200.0)
        return color;
    float fade=smoothstep(200.0, 300.0, distance);

    float4 marchStep=0.0;
    marchStep.w = 15.0f*distance/atmosphereStep/game2atm;
    marchStep.xyz = ray*marchStep.w;
    
    float3 lightDirection = 0.0;
    float3 lightStrength = LightSource(SunDirection,MoonDirection.xyz, lightDirection);
    
    float3 scattered = AtmosphereScattering(color,  Game2Atm_2(camera), marchStep, ray, lightStrength, lightDirection, 1.0, sphere);
    return lerp(color, scattered, fade);
}

float3 LimitHDRBrightness(float3 color, float maxLuminance)
{
    float luminance = dot(color, float3(0.2126, 0.7152, 0.0722));
    float limitedLuminance = min(luminance, maxLuminance);
    return color * (limitedLuminance / max(luminance, 1e-4));
}

float LightningFlash(float time)
{
    float baseFrequency = 0.02;
    float flashSeed = floor(time * baseFrequency);
    float randomFlash = frac(sin(flashSeed * 91.327) * 43758.5453);
    float harshFlash = step(0.8, randomFlash) * exp(-10.0 * frac(time));
    float gentleFlicker = 0.3 + 0.3 * sin(time * 0.5 + sin(time * 0.2));
    float minorFlicker = frac(sin(time * 123.456 + flashSeed) * 56789.123) * 0.1;
    return saturate(0.1 + gentleFlicker + minorFlicker + harshFlash);
}
/*
float SmoothDensity(float d) {
    return smoothstep(falloff_low, falloff_high, d);
}
*/
float4 getLightmap(float3 p){;

    // Calculate initial UVs
    float U = (p.x + 1734.0 + lightMapOffsetX*500) / lightMapOffsetScaleX;
    float V = (p.y + 3635.0+ lightMapOffsetY*500) / lightMapOffsetScaleY;

    // Adjust for aspect ratio difference
    float textureAspect = 1229.0 / 1575.0;
    float worldAspect = 2562.0 / 11278.0;
    float aspectRatioCorrection = worldAspect / textureAspect;
    U *= aspectRatioCorrection;

    // Clamp the UVs
    U = clamp(U, 0.0, 1.0);
    V = clamp(V, 0.0, 1.0);

    // Sample the texture
    float4 val = tex2Dlod(SamplerLight,float4(U, 1.0-V,0.0,0.0));
	
	return val;
	
}

float4 CloudAtRay(in float3 bg_col,CloudProfile a, CloudBaseColor b, const in float3 cam_dir, in float3 cam_pos, float3 light, float3 lightDirection, float Time, in out float _distance, float2 uv) {

    float4 d = float4(0.0, 0.0, 0.0, a.march.y); 
    float3 p = CastStep(cam_pos, cam_dir, float2(a.volumeBox.x,a.volumeBox.y), d.x);

    d.y = d.x;

    float3 p_;

    if (d.x >= 0.0 && _distance>d.x) {

        a.range.x = rcp(a.range.x);

        float4 fx = float4(0.0, 0.0, 1.0,0.0); 
        float fx_ray = 0.0;
        float fx_bolt = 0.0;
        float fxl = 0.0;
        float is = 0.0f;
        float h = 0.0;
        float suncross = dot(lightDirection, cam_dir);
        
        float atm_bleed = 0.0f;
        
        float last_sample = 0.0, pdf=0.0;


        float lightning = 0.0;

        float dens;

        float atmo_altitude = 1.0f-saturate((a.volumeBox.y-cam_pos.z)/a.volumeBox.y);
        float3 lightCol;

        #ifdef LIGHTNING
        float l_toggle = 1.0;   

        float l_toggle2 = hash2(floor(Time*1.0));

        if(hash2(floor(Time*L_Frequency)) > L_Probability){
                l_toggle = 0.0;
        }
        #endif

        for (int i = 0; fx.z > 0.005 && i < a.march.w && d.x - d.w < _distance && d.x < a.fade; i++) {
            float4 fmp = fakeSphereMap(p, cam_pos, cam_dir);
            float3 p_ = fmp.xyz;
            
            if((p_.z > a.volumeBox.x && fmp.w>10) || p.z<cloudClipAltitudeEnd){
                break;
            }
            else if (p_.z < a.volumeBox.y && fmp.w<10){
                p = CastStep(p+cam_dir, cam_dir, float2(a.volumeBox.x,a.volumeBox.y), d.x);
                i=0;
                continue;
            }

            float3 
                cs = CloudShape(p_.z, a.shape, a.range, a.soft).xyz;

            float v_fade = smoothstep(ray_altitude_begin,ray_altitude_end,p_.z);
            float ray_dens = exp(-ShadowStatic(a ,p_, lightDirection,1.0,0)*rayDensity)*atmoStrength*v_fade*0.01*CLOUD_COVERAGE;

            float ray = smoothstep(0.0,1.0,ray_dens)*clampMap(length(p_-cam_pos),0.0,a.fade,1.0,0.0);

            fx_ray += ray*10*((1+suncross)*0.5)*d.w;



            //float3 bolt_end_pos = -1.0f+float3(hash2(floor(0.142+Time*MyValue4)),hash2(floor(-2.569+Time*MyValue4)),hash2(floor(61.254+Time*MyValue4))*0.001f)*2.0f;
            //fx_bolt += LightningSplineDensity(p_,LightningBoltStart,LightningBoltEnd+bolt_end_pos*MyValue5,timer*LightningBoltSpeed,LightningBoltRandomness,LightningBoltThickness)*10.0*flash;


            float
                d1 = Chunk(p_, a.densityChunk, a.scaleChunk, a.cloudShift, a.offsetA, a.offsetB, cs.x,a.grad,a.chunkLod),
                d2 = DetailB(a,d1, p_, a.volumeBox, float3(a.densityDetail.x,a.densityDetail.y,a.densityDetail.z), a.scaleDetail, a.distortion, a.offsetC, a.offsetD,a.offsetE, cs.x,a.detailLod),
                df = DensityField(d1, d2);
            
            float shadow_term = 0.0;


            if(df>cs.z+dfLimit)
            {   
                float suncross_mod = (1.0-smoothstep(-1.0,0.0,suncross));

                //dens = SmoothDensity(GetDensity(df, p_.z, cs.z, cs.y, a.volumeBox, a._solidness));
                dens = GetDensity(df, p_.z, cs.z, cs.y, a.volumeBox, a._solidness);
                float c_dens = (dens + last_sample) * a.march.x*0.025f;
                    
                last_sample = dens;

                
                if (d.x >= _distance)
                    c_dens *= d.z / d.w;
                    
                
                
                if(c_dens > 0)
                    d.y = d.y * (1.0 - fx.z) + fx.z * d.x;
                    
                    
                fx.y += c_dens+DensityRatio*suncross_mod; 
                fxl += c_dens;
                fx.z = (exp(-fx.y*1.0)- a.cutoff.y) / (1.0 - a.cutoff.y); 
                //fx_ray*=saturate(1.0-c_dens*MyValue5);   
                
                d.z = _distance - d.x;

                float alt_factor = clampMap(p_.z,lightMapAltitudeLow,lightMapAltitudeHigh,0.0,1.0);

                float4 light_map = getLightmap(p_);
                 float3 toHSV = RGBtoHSV(light_map.xyz);
                 float sat = lightMapSaturation;
                 toHSV.y = saturate(toHSV.y * sat);
                 float3 toRGB = HSVtoRGB(toHSV);
                 lightCol+=toRGB*lightMapIntensity*0.01*alt_factor;


                float dens_light=0.0;
                if(fx.y<shadowLimit)
                {
                    float s_adjust = suncross_mod*ShadowFaceOffset;
                    dens_light = //ShadowOnGround(cloudProfile2,p_,lightDirection) +
                    ShadowMarching(a,
                        fx.y ,p_, a.densityChunk, a.densityDetail,
                         a.scaleChunk, a.scaleDetail, a.cloudShift,
                          a.shape, a.range, a.offsetA, a.offsetB, a.offsetC,
                           lightDirection, float4(a.shadow.x,a.shadow.y+s_adjust,a.shadow.z,a.shadow.w), a.volumeBox, a._solidness, a.distortion,
                           a.shadowLod); 

                    
                    //dens_light = max(0,dens_light-exp(-df*shadowTestExp)*shadowTest);
                    

                    /* fx.x +=
                    max(exp(-dens_light),exp(-dens_light*InScatterExp)*InScatterMul) * 
                    lerp(1.0f,1.0f-(exp((-dens)*PowderExp*PowderExp)),saturate(PowderStrength*(1.0f-suncross))); */

                    float powder = lerp(1.0f,1.0f-(exp((-c_dens)*PowderExp*PowderExp)),PowderStrength*saturate(1.0f-suncross*0.75));
                    float ambi_exp = 1.0f-(exp((-c_dens)*ambient_power*ambient_power));

                    fx.x += max(exp(-dens_light),exp(-dens_light*InScatterExp)*InScatterMul) * fx.z * c_dens * powder;

                    fx.w += exp(-c_dens-fx.y)*clampMap(p_.z,ambient_altitude_bottom+cloudHeight,ambient_altitude_top+cloudHeight,0,1.0)*ambi_exp;
                }


                h+= exp(-p_.z);

                #ifdef LIGHTNING

                float flash = LightningFlash(Time*600.0f);


                float3 L_Center = float3(L_CenterX, L_CenterY, L_CenterZ);
                //Lightning
                float3 l_pos = float3(L_Center.x+(HashSporadic(Time*0.15,0.5,2.0)*2.0-1.0)*L_CenterRandomRange.x*l_toggle2,L_Center.y+(HashSporadic(121+Time*0.15,0.5,2.0)*2.0-1.0)*L_CenterRandomRange.y*l_toggle2,L_Center.z+HashSporadic(34+Time*0.15,0.5,2.0)*L_CenterRandomRange.z);
                l_pos += float3((hash2(floor(Time*0.75))*2.0-1.0)*400*l_toggle2,(hash2(floor(Time*0.75))*2.0-1.0)*400*l_toggle2,hash2(floor(Time*.5))*800);

                
                float r_size = max(0.3,hash2(Time*L_StrobeSpeed)*rcp(L_StrobeMul)*hash2(Time*L_StrobeSpeed*0.5)*hash2(Time*L_StrobeSpeed*0.1*(hash2(Time*0.1)*0.1)));
                float l_size = pow(1.0f+length(p_-l_pos)*(L_Size*0.0001)*r_size,-L_Curve);
                lightning+=max(exp(-fxl),exp(-fxl*0.2)*0.75)*l_size*lerp(1.0f,1.0f-(exp((-c_dens*7.5f)*PowderExp*PowderExp)),saturate(PowderStrength));
                lightning*=l_toggle*flash;
                //fx_bolt*=exp(-c_dens*MyValue3);
                #endif
            }

            fx_bolt *= l_toggle;

            float mask1 = clamp(RMMask1-clamp(d.x-MaskDistOffset,0.0f,a.fade)/(a.fade),0.0f,2.0f);
            float mask2 = clamp(RMMask2+clamp(d.x-MaskDistOffset,0.0f,a.fade)/(a.fade),1.00f,4.0f);

            //df*=AnvilScale;


            float d_fade = clampMap(d.x,0.0,a.fade*0.07,0.0,0.11);
            float d_fade_ray = clampMap(d.x,0.0,a.fade*0.05,1.0,0.0);
            //float fx_bolt_w_offset = fx_bolt * MyValue2;
            //d.w = clampMap(mask1*saturate(df+fx_ray*50.0*d_fade_ray+fx_bolt+fx_bolt_w_offset), (cs.z+d_fade)*mask2, a.cutoff.x, a.march.x, a.march.y);
            d.w = clampMap(mask1*saturate(df+fx_ray*50.0*d_fade_ray)-pdf*0.5, (cs.z+d_fade)*mask2, a.cutoff.x, a.march.x, a.march.y);
            d.w *= clampMap(d.x, 0.0, a.fade*2.0, 1.0, a.march.z);

            /*
            if(dens<0.1){
                d.w += noise2d(p_)*a.march.x*mainNoise;
            }
            */

            pdf=df;
            p += cam_dir * d.w;
            d.x += d.w;
        }
    
        if (fx.z <= 1.0) {
            fx = saturate(fx);
            fx_ray = saturate(fx_ray);

            float3 z_pos = float3(0.0,0.0,cam_pos.z);
            float3 sun_samp_pos = Game2Atm(z_pos+cam_dir*d.y);
            float HGS = lerp(HGClose,HGStrengthTop,smoothstep(0.0,1.0,saturate((cam_pos.z/a.volumeBox.y)*0.5f)));
            float ScatterPhase = (HenyeyGreenstein(suncross, HGMu) * HGClose)+(HenyeyGreenstein(suncross, HGMu*0.4) * HGMid)+(HenyeyGreenstein(suncross, HGMu*0.02) * HGFar);
            ScatterPhase = lerp(ScatterPhase,ScatterPhase*HGStrengthTop,clampMap(cam_pos.z,a.volumeBox.y*0.75,a.volumeBox.x,0.0,1.0));
            float cross = -1.0f+pow(1.0f+length(lightDirection-cam_dir)*1.5f,4.0);
            //fx_ray*=smoothstep(0.0f,60.0f,ScatterPhase);
            
            //float medium_height = p_.z*AmbientTop;

            float3
                c_bright = (SunLight(light,sun_samp_pos,lightDirection,earth)*ScatterPhase*sunColor)*a.brightness;
                //c_bright = (light+ScatterPhase*sunColor)*a.brightness;

            
            //c_bright *= LightDecay(fx.y,fx.x);

            //fx.x = 1.0 - exp(-fx.x);
            //c_bright = 1.0 - exp(-c_bright);
            //c_bright += ScatterPhase*sunColor;

            bg_col = LimitHDRBrightness(bg_col,2.0);



            float blend = 1.0f;
            float sky_blend = lerp(max(0.0f,skyAtmoBlendClose),max(0,skyAtmoBlendFar),clamp(pow( clamp(d.y-a.volumeBox.y*2,0,999999)/((skyAtmoStartDistance)*1000),skyAtmoBlendCurve*skyAtmoBlendCurve),0.0f,skyAtmoBlendMax) );
            float ground_blend = lerp(max(0,groundAtmoBlendClose),max(0,groundAtmoBlendFar),clamp(pow( clamp(d.y-a.volumeBox.y*2,0,999999)/((groundAtmoStartDistance)*1000),groundAtmoBlendCurve*groundAtmoBlendCurve),0.0f,groundAtmoBlendMax) );

            blend = lerp(ground_blend,sky_blend,atmo_altitude);
            // surface haze
            //blend = lerp(blend,max(blend,1.1),pow(saturate(1.0f-p.z*cloudClipAltitudeBegin*0.001f),1.1)*(1.0f-atmo_altitude));

            // limit blending around sun
            //blend = lerp(blend,0.0f,1.0f-saturate(cross));

            float horizon_blend = saturate(pow(length(p.z - HorizonBlendHeight)/HorizonBlendHeight,-HorizonBlendCurve))*HorizonBlendMul;

            //float3 base_blend_col = lerp(b.BaseColor,ComputeSkyColor(cam_dir),blend);
            //C+=fx_ray;
    

            
            float3 C;
            C = c_bright * fx.x;

            fx_ray *= lerp(1.0,saturate(1.0-(fx.y*2)),atmo_altitude);

            //C+=fx_bolt*MyValue*LightningColor1;


            fx_ray *= rayAlphaMul * 10.0f;
            C+=fx_ray*float3(rayColorX,rayColorY,rayColorZ);
            fx.z*=saturate(1.0f-fx_ray*0.5f);
            //fx.z*=saturate(1.0f-fx_ray*0.5f-fx_bolt);

            float3 ambiCol = lerp(AmbientWest,AmbientEast,saturate(suncross * ambientSplit));

            C+=ambiCol*pow(fx.w,ambientCurve)*exp(-fx.x*1.0);


            #ifdef LIGHTNING
            // Lightning
            float3 l_color = lerp(LightningColor1,LightningColor2,hash2(floor(Time)));
            C += ( l_color * lightning * LightningBrightness);
            fx.z = saturate(fx.z-lightning);
            #endif

            C += b.BaseColor*saturate(1.0f-fx.x-fx.z);
            C += lightCol;
            //C = atmosphere_scattering((1.0-fx.z), C, Game2Atm(cam_pos.z), cam_dir, d.y/(game2atm*MyValue3*0.1), lightDirection, earth);
            //C = clamp(C,float3(0,0,0),clampBright.x);
            C.gb *= 1.0f-(blend*(1.0f-fx.z)*redShift);
            //C = lerp(C,blend_col*saturate(1.0f-fx.z),saturate(blend-fx.x*brightProtect*pow(length(c_bright)*fx.z,2.0)-fx_ray*0.5));
            C = lerp(C,bg_col*saturate(1.0f-fx.z),saturate((blend+horizon_blend)-fx.x*brightProtect*pow(length(c_bright)*fx.z,2.0)-fx_ray*0.5-fx_bolt));
            //_distance = _distance*fx.z + d.y*(1.0-fx.z);



            //fx.z = lerp(ground_blend,sky_blend,atmo_altitude);
            //fx.z = lerp(fx.z,max(fx.z,MyValue),pow(saturate(1.0f-p.z*cloudClipAltitudeBegin*0.001f),MyValue2)*(1.0f-atmo_altitude));
            return float4(C, saturate((fx.z)-0.015));
        }
            
    }
    return float4(0.0, 0.0, 0.0 ,1.0);
}
void CloudRandomness()
{

    float staticMul = windSpeed;
    const float staticCMul = 0.25;
    #ifdef MOVEMENT
    cloudProfile.offsetA.xy = NOffsetC.xy*0.25*staticMul;
    cloudProfile.offsetA.z  = -NOffsetB.z*5.0*staticMul*staticCMul;
    cloudProfile.offsetB.xy = NOffsetA.xy*1.0*staticMul;
    cloudProfile.offsetB.z  = -NOffsetB.z*5.0*staticMul*staticCMul;
    cloudProfile.offsetC.xy = NOffsetA.xy*1.0*staticMul;
    cloudProfile.offsetC.z  = -timer*0.02*staticMul*staticCMul;
    cloudProfile.offsetD.xy = NOffsetA.xy*1.0*staticMul;
    cloudProfile.offsetD.z =  -NOffsetB.z*7.5*staticMul*staticCMul;
    cloudProfile.offsetE.xy = NOffsetA.xy*0.4*staticMul;
    cloudProfile.offsetE.z = timer*0.005*staticMul*staticCMul;
    //cloudProfile.offsetE.z = abs(NOffsetA.x*3*nsOffsetE.z);

    
    cloudProfile2.offsetA.xy = NOffsetC.xy*2*staticMul+float2(500,-250);
    cloudProfile2.offsetB.xy = NOffsetC.xy*4*staticMul;
    cloudProfile2.offsetC.xy = NOffsetC.xy*2*staticMul;
    cloudProfile2.offsetD.xy = NOffsetC.xy*2*staticMul;
    cloudProfile2.offsetD.z =  -NOffsetB.z*15.0*staticMul*staticCMul;
    cloudProfile2.offsetE.xy = NOffsetC.xy*0.75*staticMul;
    cloudProfile2.offsetE.z = NOffsetB.z*7.0*staticMul*staticCMul;
    //cloudProfile.offsetE.z = abs(NOffsetA.x*3*nsOffsetE.z);
    

    #endif
    
}

void CloudColorVarying(float3 SunDir, in out CloudBaseColor b)
{
    baseColor.BaseColor = _baseColor;
    baseColor.BaseColor_Day = _baseColorDay;
    baseColor.BaseColor_Sunset = _baseColorSunset;
    sunColor = ColorAtSun;     
    b.BaseColor = ColorBase;
}


void updateProfiles(){
    //Bottom clouds
		/*MARCHING (ray tracing)*/ //{float4(clamp( (_cloudHeight-CameraPosition.z+_volumeShape.y*0.75f)/(_cloudHeight),1.0f,_minStep), _maxStep, _stepMult, _maxStepCount),   //min length, max length, multiplicand, max step
        /*MARCHING (ray tracing)*/ cloudProfile.march = float4( minStep, maxStep, stepMult, maxStepCount);   //min length, max length, multiplicand, max step
        /*CUTOFF*/                 cloudProfile.cutoff = float2(densCut, alphaCut);  // density cut, transparency cut
        /*VOLUME BOX*/            cloudProfile.volumeBox = float2(volumeBoxX,volumeBoxY+boxOffset)+cloudHeight;   //top, bottom
                                //cloudProfile.volumeBox = float2(volumeBoxX,volumeBoxY)+cloudHeight-ViewPos.z*0.25f;   //top, bottom
        /*SHAPE*/                 cloudProfile.shape = float4(float3(volumeShapeX,volumeShapeY,volumeShapeZ)+cloudHeight,volumeShapeThic);       //top, mid, bot, thickness
        /*SOFT*/                  cloudProfile.soft = softMul;
                                  cloudProfile.grad = 1.0;
                                    //cloudProfile.shape = float4(float3(volumeShapeX*CLOUD_COVERAGE,volumeShapeY*CLOUD_COVERAGE,volumeShapeZ*CLOUD_COVERAGE)+cloudHeight-ViewPos.z*0.25f,volumeShapeThic);       //top, mid, bot, thickness
        /*BRIGHTNESS*/            cloudProfile.brightness = cloudBrightness;
        /*RANGE*/                 //cloudProfile.range = float3(0.9 + CLOUD_COVERAGE*0.16, 0.1, 0.2+CLOUD_COVERAGE*0.4),    //total, top, bottom
        /*RANGE*/                 cloudProfile.range = float3(rangeTotal, rangeTop*CLOUD_COVERAGE, rangeBottom),    //total, top, bottom
        /*SOLIDNESS*/             cloudProfile._solidness = float2(solidness, solidnessBottom)*CLOUD_COVERAGE;   //top, bottom
        /*DENSITY CHUNK*/         cloudProfile.densityChunk = float2(densCA*CLOUD_COVERAGE, densCB);   //dens A,B
        /*SHADOW*/                cloudProfile.shadow = float4(shadowStepLength, shadowDetailStrength*0.1, shadowExpand*0.1, shadowStrength*0.1*shadowMul);  //step length, detail strength, expanding, strength
        /*DISTORTION*/            cloudProfile.distortion = float4(distMaxAngle, distStrength, distBumpStrength, distSmallBumpStrength);  //max angle, strength, bump strength, small bump strength
        /*FADE DISTANCE*/         cloudProfile.fade = fadeDist;
        /*DETAIL DENSITY*/        cloudProfile.densityDetail = float3(detailDensA,detailDensB,detailDensC);   //dens C,D,E
        /*CHUNK SCALE*/           cloudProfile.scaleChunk = float3(scaleX*0.0001, scaleY*0.001, vertS);    //scale A,B, vertical stretch
        /*DETAIL SCALE*/          cloudProfile.scaleDetail = float3(detailScaleA*0.01,detailScaleB*0.01,detailScaleC*0.01);   //scale C,D,E
        ///*CLOUD SHIFT*/            float3(-0.8, 0.0, 0.0),
        /*CLOUD SHIFT*/           cloudProfile.cloudShift = float3(0,0,0);
        /*NOISE OFFSET A*/        cloudProfile.offsetA = nsOffsetA;
        /*NOISE OFFSET B*/        cloudProfile.offsetB =  nsOffsetB;
        /*NOISE OFFSET C*/        cloudProfile.offsetC =  nsOffsetC;
        /*NOISE OFFSET D*/        cloudProfile.offsetD =  nsOffsetD;
        /*NOISE OFFSET E*/        cloudProfile.offsetE =  nsOffsetE;
                                  cloudProfile.startDistance = 0;
                                  cloudProfile.shadowLod = 2.0;
                                  cloudProfile.chunkLod = 0.0;
                                  cloudProfile.detailLod = 0.0;

        //Mid clouds
		/*MARCHING (ray tracing)*/ //{float4(clamp( (_cloudHeight-CameraPosition.z+_volumeShape.y*0.75f)/(_cloudHeight),1.0f,_minStep), _maxStep, _stepMult, _maxStepCount),   //min length, max length, multiplicand, max step
        /*MARCHING (ray tracing)*/ cloudProfile2.march = float4( minStep, maxStep, stepMult, maxStepCount);   //min length, max length, multiplicand, max step
        /*CUTOFF*/                 cloudProfile2.cutoff = float2(densCut, alphaCut);  // density cut, transparency cutx
        /*VOLUME BOX*/            cloudProfile2.volumeBox = float2(500,0)+cloudHeight+2500;   //top, bottom
                                //cloudProfile.volumeBox = float2(volumeBoxX,volumeBoxY)+cloudHeight-ViewPos.z*0.25f;   //top, bottom
        /*SHAPE*/                 cloudProfile2.shape = float4(float3(500,0,0)+cloudHeight+2500,0.5);       //top, mid, bot, thickness
        /*SOFT*/                  cloudProfile2.soft = 0.5;
                                  cloudProfile2.grad = 0.0;
                                    //cloudProfile.shape = float4(float3(volumeShapeX*CLOUD_COVERAGE,volumeShapeY*CLOUD_COVERAGE,volumeShapeZ*CLOUD_COVERAGE)+cloudHeight-ViewPos.z*0.25f,volumeShapeThic);       //top, mid, bot, thickness
        /*BRIGHTNESS*/            cloudProfile2.brightness = cloudBrightness;
        /*RANGE*/                 //cloudProfile.range = float3(0.9 + CLOUD_COVERAGE*0.16, 0.1, 0.2+CLOUD_COVERAGE*0.4),    //total, top, bottom
        /*RANGE*/                 cloudProfile2.range = float3(1.0, 0.0, 1.0),    //total, top, bottom
        /*SOLIDNESS*/             cloudProfile2._solidness = float2(0.8, 0.2)*CLOUD_COVERAGE;   //top, bottom
        /*DENSITY CHUNK*/         cloudProfile2.densityChunk = float2(densCA*topLayerMultiplier*CLOUD_COVERAGE, densCB*0.2);   //dens A,B
        /*SHADOW*/                cloudProfile2.shadow = float4(80, shadowDetailStrength*0.08, shadowExpand*0.08, shadowStrength*0.01*shadowMul);  //step length, detail strength, expanding, strength
        /*DISTORTION*/            cloudProfile2.distortion = float4(distMaxAngle*2, distStrength*5, distBumpStrength*5, distSmallBumpStrength*5);  //max angle, strength, bump strength, small bump strength
        /*FADE DISTANCE*/         cloudProfile2.fade = fadeDist*10.0f;
        /*DETAIL DENSITY*/        cloudProfile2.densityDetail = float3(detailDensA*0.8,detailDensB*1.0,detailDensC*0.8);   //dens C,D,E
        /*CHUNK SCALE*/           cloudProfile2.scaleChunk = float3(scaleX*0.00002, scaleY*0.0001, vertS);    //scale A,B, vertical stretch
        /*DETAIL SCALE*/          cloudProfile2.scaleDetail = float3(detailScaleA*0.001,detailScaleB*0.005,detailScaleC*0.005);   //scale C,D,E
        ///*CLOUD SHIFT*/            float3(-0.8, 0.0, 0.0),
        /*CLOUD SHIFT*/           cloudProfile2.cloudShift = float3(-0.085, 0.0, 0.0);
        /*NOISE OFFSET A*/        cloudProfile2.offsetA = -nsOffsetA+float3(500,-250,100);
        /*NOISE OFFSET B*/        cloudProfile2.offsetB =  -nsOffsetB;
        /*NOISE OFFSET C*/        cloudProfile2.offsetC =  -nsOffsetC;
        /*NOISE OFFSET D*/        cloudProfile2.offsetD =  -nsOffsetD;
        /*NOISE OFFSET E*/        cloudProfile2.offsetE =  -nsOffsetE;
                                  cloudProfile2.startDistance = 0;
                                  cloudProfile2.shadowLod = 2.0;
                                  cloudProfile2.chunkLod = 0.0;
                                  cloudProfile2.detailLod = 0.0;
}

float4 RenderClouds(float3 ViewDir, float3 ViewPos, float3 sunDir, float distance, float2 uv,bool LOW_RES)
{

    
    updateProfiles();               
    CloudRandomness();
    
    CloudColorVarying(sunDir, baseColor);
    
    float3 lightDir = 0.0;
    float3 light = LightSource(sunDir, MoonDirection.xyz, lightDir);

    float4 clouds2 = float4(0.0, 0.0, 0.0, 0.0);
    float4 clouds = float4(0.0, 0.0, 0.0, 0.0);

    float4 cloud_temp;

    float3 bg_col = tex2Dlod(ReShade::BackBuffer,float4(uv,0,0)).xyz;

    float depth = distance;

    [branch]
    if(LOW_RES){
        cloudProfile.fade= 15000.0f;
        cloudProfile.densityDetail.z = 0.0f;
        //cloudProfile.volumeBox.x = cloudProfile.volumeBox.x - 500.0f;
        cloudProfile.cutoff.y = 0.3f;
        cloudProfile.march.x = 15;
        cloudProfile.march.y = 130;
        cloudProfile.march.z = 20;
    }

    
    if(ViewPos.z>cloudProfile.volumeBox.x+cloudHeight){
        clouds = CloudAtRay(bg_col,cloudProfile2, baseColor, ViewDir, ViewPos, light, lightDir, timer*0.0001f, depth, uv);
        cloud_temp = CloudAtRay(bg_col,cloudProfile, baseColor, ViewDir, ViewPos, light, lightDir, timer*0.0001f, depth, uv);
        clouds.rgb += cloud_temp.rgb*clouds.w;
        clouds.w = clouds.w*cloud_temp.w;
     }else{
        clouds = CloudAtRay(bg_col,cloudProfile, baseColor, ViewDir, ViewPos, light, lightDir, timer*0.0001f, depth, uv);
        cloud_temp = CloudAtRay(bg_col,cloudProfile2, baseColor, ViewDir, ViewPos, light, lightDir, timer*0.0001f, depth, uv);
        clouds.rgb += cloud_temp.rgb*clouds.w;
        clouds.w = clouds.w*cloud_temp.w;
    }

    
    /*
     float shad = 1.0;
    shad *= exp(-ShadowOnGround(cloudProfile,ViewPos+ViewDir*depth,normalize(lightDir)));
    if(depth < 60000){
        shad = (1.0f-shad)*(saturate((1.0/(depth*0.00025))));
        float term = clouds.w;
        clouds.xyz=lerp(clouds.xyz,bg_col*0.1f,saturate(shad*term));
        clouds.w-=shad*term;
    } 
    */

    return clouds;
}
static const float4 gaussKernel3x3[9] =
{
  float4(-1.0, -1.0, 0.0,  1.0 / 16.0),
  float4(-1.0,  0.0, 0.0,  2.0 / 16.0),
  float4(-1.0, +1.0, 0.0,  1.0 / 16.0),
  float4( 0.0, -1.0, 0.0,  2.0 / 16.0),
  float4( 0.0,  0.0, 0.0,  4.0 / 16.0),
  float4( 0.0, +1.0, 0.0,  2.0 / 16.0),
  float4(+1.0, -1.0, 0.0,  1.0 / 16.0),
  float4(+1.0,  0.0, 0.0,  2.0 / 16.0),
  float4(+1.0, +1.0, 0.0,  1.0 / 16.0)
};

static const int bayerFilter[16] = {
    0,8,2,10,
    12,4,14,6,
    3,11,1,9,
    15,7,13,5
};

bool writePixel(float2 uv, int frame){
    int2 coord = int2(uv);
    int id = frame % 16;
    return (((coord.x + 4 * coord.y) % 16) == bayerFilter[id]);
}

float4 PS_CloudsReflection(float4 vpos : SV_Position, float2 tex : TexCoord) : SV_Target
{

    float2 uv = tex;
    float2 resolution = float2(BUFFER_WIDTH, BUFFER_HEIGHT);
    float3 camPos = float3(InverseView[3].x, InverseView[3].y, InverseView[3].z);
    //if(!writePixel(tex*resolution,framecount)){discard;}


	float2 fuv = -uv;

    float4 cl = 0.0f;

    float2 texel = 1.0 / resolution;


    float3 worldPos = DepthToWorldPos(GetLinearizedDepth(uv,1.0),uv);
    float depth = length(camPos-worldPos);



    
    /* float depthTest = 0.0;
    for(int i = 0;i<9;i++){
        depthTest = dp;
        if(depthTest < depth){
            depth = depthTest;
        }
    } */

	float3 camDir = float3(-InverseView[0].x, -InverseView[2].z, InverseView[0].y);

    

    float3 _moonDir;
        _moonDir.x = MoonDirection.x;
        _moonDir.y = MoonDirection.y;
        _moonDir.z = MoonDirection.z;


    float3 _sunDir;
        _sunDir.x = SunDirection.x;
        _sunDir.y = SunDirection.y;
        _sunDir.z = SunDirection.z;

    //float3 rayDir = normalize(worldPos - camPos)*-1;
    float3 rayDir = SphericalRay(tex);

    /*
    int2 pixelCoord = int2(vpos.xy);
    int tileIndex = ( (pixelCoord.x & 3) + ((pixelCoord.y & 3) << 2) );
    int sliceThisFrame = (framecount % g_slices);
    */
    /*
    [branch]
    if (tileIndex == sliceThisFrame)
    {
        cl = RenderClouds(rayDir, camPos, normalize(_sunDir), depth,uv);
    }
    else
    {
        cl = float4(0.0, 0.0, 0.0, 1.0);
    }
    */

    //cl = RenderClouds(rayDir, camPos, normalize(_sunDir), depth,uv);
    //cl.w-=0.013; //fix opaque transparency
    cl = RenderClouds(rayDir, camPos, normalize(_sunDir), 99999,uv,true);
    cl.w = saturate(cl.w);
    return cl;
}

float4 PS_CloudsWaterReflection(float4 vpos : SV_Position, float2 tex : TexCoord) : SV_Target
{

    float2 uv = tex;
    float2 resolution = float2(BUFFER_WIDTH, BUFFER_HEIGHT);
    float3 camPos = float3(InverseView[3].x, InverseView[3].y, -InverseView[3].z);
    //if(!writePixel(tex*resolution,framecount)){discard;}


	float2 fuv = -uv;

    float4 cl = 0.0f;

    float2 texel = 1.0 / resolution;


    float3 worldPos = DepthToWorldPos(GetLinearizedDepth(uv,1.0),uv);
    float depth = length(camPos-worldPos);



    
    /* float depthTest = 0.0;
    for(int i = 0;i<9;i++){
        depthTest = dp;
        if(depthTest < depth){
            depth = depthTest;
        }
    } */

	float3 camDir = float3(-InverseView[0].x, -InverseView[2].z, -InverseView[0].y);

    

    float3 _moonDir;
        _moonDir.x = MoonDirection.x;
        _moonDir.y = MoonDirection.y;
        _moonDir.z = MoonDirection.z;


    float3 _sunDir;
        _sunDir.x = SunDirection.x;
        _sunDir.y = SunDirection.y;
        _sunDir.z = SunDirection.z;

    float3 rayDir = ViewRay_UpsideDown(tex);
    //rayDir+=GetScreenSpaceNormal(uv,norm_smooth)*0.1;
    //float3 rayDir = SphericalRay(tex);

    /*
    int2 pixelCoord = int2(vpos.xy);
    int tileIndex = ( (pixelCoord.x & 3) + ((pixelCoord.y & 3) << 2) );
    int sliceThisFrame = (framecount % g_slices);
    */

    
    
    /*
    [branch]
    if (tileIndex == sliceThisFrame)
    {
        cl = RenderClouds(rayDir, camPos, normalize(_sunDir), depth,uv);
    }
    else
    {
        cl = float4(0.0, 0.0, 0.0, 1.0);
    }
    */

    //cl = RenderClouds(rayDir, camPos, normalize(_sunDir), depth,uv);
    //cl.w-=0.013; //fix opaque transparency
    cl = RenderClouds(rayDir, camPos, normalize(_sunDir), 99999,uv,true);
    cl.w = saturate(cl.w);
    return cl;
}
float4 PS_Clouds(float4 vpos : SV_Position, float2 tex : TexCoord) : SV_Target
{

    float2 uv = tex;
    float2 resolution = float2(BUFFER_WIDTH, BUFFER_HEIGHT);
    float3 camPos = float3(InverseView[3].x, InverseView[3].y, InverseView[3].z);
    //if(!writePixel(tex*resolution,framecount)){discard;}


	float2 fuv = -uv;

    float4 cl = 0.0f;

    float2 texel = 1.0 / resolution;


    float3 worldPos = DepthToWorldPos(GetLinearizedDepth(uv,1.0),uv);
    float depth = length(camPos-worldPos);



    
    /* float depthTest = 0.0;
    for(int i = 0;i<9;i++){
        depthTest = dp;
        if(depthTest < depth){
            depth = depthTest;
        }
    } */

	float3 camDir = float3(-InverseView[0].x, -InverseView[2].z, InverseView[0].y);

    

    float3 _moonDir;
        _moonDir.x = MoonDirection.x;
        _moonDir.y = MoonDirection.y;
        _moonDir.z = MoonDirection.z;


    float3 _sunDir;
        _sunDir.x = SunDirection.x;
        _sunDir.y = SunDirection.y;
        _sunDir.z = SunDirection.z;

    float3 rayDir = normalize(worldPos - camPos)*-1;
    //float3 rayDir = SphericalRay(tex);

    /*
    int2 pixelCoord = int2(vpos.xy);
    int tileIndex = ( (pixelCoord.x & 3) + ((pixelCoord.y & 3) << 2) );
    int sliceThisFrame = (framecount % g_slices);
    */

    
    
    /*
    [branch]
    if (tileIndex == sliceThisFrame)
    {
        cl = RenderClouds(rayDir, camPos, normalize(_sunDir), depth,uv);
    }
    else
    {
        cl = float4(0.0, 0.0, 0.0, 1.0);
    }
    */



    //cl = RenderClouds(rayDir, camPos, normalize(_sunDir), depth,uv);
    //cl.w-=0.013; //fix opaque transparency
    cl = RenderClouds(rayDir, camPos, normalize(_sunDir), depth,uv,false);
    cl.w = saturate(cl.w);
    return cl;
}

float4 PS_CloudShadows(float4 vpos : SV_Position, float2 uv :TexCoord) : SV_Target
{       

    float4 bgCol = tex2Dlod(ReShade::BackBuffer, float4(uv,0.0,0.0));
    //float4 shadeCol = tex2Dlod(SamplerShading,float4(uv,0.0,0.0));
    if(tex2Dsize(ReShade::BackBuffer).x <= 0){
        return float4(bgCol.xyz,1);
    }

    
    updateProfiles();
    CloudRandomness();
    

    float3 camPos = float3(InverseView[3].x, InverseView[3].y, InverseView[3].z);
    float3 worldPos = DepthToWorldPos(GetLinearizedDepth(uv,1.0),uv);
    float depth = length(camPos-worldPos);
    //float depth = dp;

    float3 _sunDir;
        _sunDir.x = SunDirection.x;
        _sunDir.y = SunDirection.y;
        _sunDir.z = SunDirection.z;

    float3 lightDir = 0.0;
    float3 light = LightSource(_sunDir, MoonDirection.xyz, lightDir);

    float3 rayDir = normalize(worldPos - camPos)*-1;

    
    if(depth < 60000){
        float shad = 1.0f;
        shad *= exp(-ShadowOnGround(cloudProfile,camPos+rayDir*depth,normalize(lightDir),0.0,1.0,1.0));
        shad = (1.0f-shad);
        //return float4(ShadowCol*shad,MyValue3);
        return float4(bgCol.x,bgCol.y,bgCol.z,bgCol.w*(1.0f-shad));
    } 


    return float4(bgCol.xyz,1);

};
float4 PS_CloudShadowsDraw(float4 vpos : SV_Position, float2 uv :TexCoord) : SV_Target
{       
    float4 rt_sample = tex2D(RTSampler512,uv);

    return rt_sample;

};

float4 PS_EdgeMask(float4 vpos : SV_Position, float2 tex : TexCoord) : SV_Target
{   
    float2 texel = 1.0 / float2(BUFFER_WIDTH, BUFFER_HEIGHT);
    float3 camPos = float3(InverseView[3].x, InverseView[3].y, InverseView[3].z);

    float3 worldPos = DepthToWorldPos(GetLinearizedDepth(tex,1.0),tex);
    float depth = length(camPos-worldPos);


    float depthTest = 0.0;
    float fillDepth = depth;
    for(int i = 0;i<9;i++){
        depthTest = length(camPos-DepthToWorldPos(GetLinearizedDepth(tex + texel * gaussKernel3x3[i].xy * edgeMaskSize,1.0),tex)).x;
        if(depthTest < depth){
            depth = depthTest;
        }
    }

    if(length(depth-fillDepth) >= (depthFill*2.0f)*depth*4.0f && fillDepth < 375000){
        return float4(1,0,0,1);
    }
    return float4(0,0,0,0);
}
float PS_EdgeMaskGrow(float4 vpos : SV_Position, float2 tex : TexCoord) : SV_Target
{   
    float2 texel = 1.0 / float2(BUFFER_WIDTH, BUFFER_HEIGHT);

    float mask = tex2D(RTSamplerFullMask,tex.xy).x;

       for(int i=1;i<=2; i++)
    {
        for(int j=0;j<8;j++){
            mask = max(mask, tex2D(RTSamplerFullMask,tex.xy + texel * gaussKernel3x3[j].xy*i).x);
        }
    }    

    return mask;
}
float4 PS_CloudsFillGap(float4 vpos : SV_Position, float2 tex : TexCoord) : SV_Target
{
    float3 camPos = float3(InverseView[3].x, InverseView[3].y, InverseView[3].z);
    if(CLOUD_COVERAGE <= 0.019 ){return float4(0.0,0.0,0.0,1.0);}

    float2 uv = tex;
    float2 resolution = float2(BUFFER_WIDTH, BUFFER_HEIGHT);

    float4 cl = 0.0f;

    float2 texel = 1.0 / resolution;


    float3 worldPos = DepthToWorldPos(GetLinearizedDepth(uv,1.0),uv);
    float dp = length(camPos-worldPos);

    float depth = dp;


    float mask = tex2D(RTSamplerFullMask,tex.xy).x;

     for(int i=1;i<=2; i++)
    {
        for(int j=0;j<8;j++){
            mask = max(mask, tex2D(RTSamplerFullMask,tex.xy + texel * gaussKernel3x3[j].xy*i).x);
        }
    }  


    if(mask == 1){

	float3 camDir = float3(-InverseView[0].x, -InverseView[2].z, InverseView[0].y);

    float3 ro = camPos;
    

    

    float3 _moonDir;
        _moonDir.x = MoonDirection.x;
        _moonDir.y = MoonDirection.y;
        _moonDir.z = MoonDirection.z;


    float3 _sunDir;
        _sunDir.x = SunDirection.x;
        _sunDir.y = SunDirection.y;
        _sunDir.z = SunDirection.z;

    float3 rayDir = normalize(worldPos - camPos)*-1;

    cl = RenderClouds(rayDir, camPos, normalize(_sunDir), dp,uv,false);
    //cl.w-=0.013; //fix opaque transparency
    return cl;
    }else{
        return float4(0,0,0,1);
    }
}
float4 smartDeNoise(sampler2D tex,float2 res, float2 uv, float sigma, float kSigma, float threshold)
{
    float radius = round(kSigma*sigma);
    float radQ = radius * radius;
    
    float invSigmaQx2 = .5 / (sigma * sigma);      // 1.0 / (sigma^2 * 2.0)
    float invSigmaQx2PI = INV_PI * invSigmaQx2;    // 1.0 / (sqrt(PI) * sigma)
    
    float invThresholdSqx2 = .5 / (threshold * threshold);     // 1.0 / (sigma^2 * 2.0)
    float invThresholdSqrt2PI = INV_SQRT_OF_2PI / threshold;   // 1.0 / (sqrt(2*PI) * sigma)
    
    float4 centrPx = tex2D(tex,uv);
    
    float zBuff = 0.0;
    float4 aBuff = float4(0.0,0.0,0.0,0.0);
    float2 size = res;
    
    for(float x=-radius; x <= radius && x < 64; x++) {
        float pt = sqrt(radQ-x*x);  // pt = yRadius: have circular trend
        for(float y=-pt; y <= pt && y < 64; y++) {
            float2 d = float2(x,y);

            float blurFactor = exp( -dot(d , d) * invSigmaQx2 ) * invSigmaQx2PI; 
            
            float4 walkPx =  tex2D(tex,uv+d/size);

            float4 dC = walkPx-centrPx;
            float deltaFactor = exp( -dot(dC, dC) * invThresholdSqx2) * invThresholdSqrt2PI * blurFactor;
                                 
            zBuff += deltaFactor;
            aBuff += deltaFactor*walkPx;
        }
    }
    return aBuff/zBuff;
}
float4 PS_CloudsTAALow(float4 vpos : SV_Position, float2 uv : TexCoord) : SV_Target
{   
    if(CLOUD_COVERAGE <= 0.019){return float4(0.0,0.0,0.0,0.0);}
    const float2 res = float2(256,256);
    float4 _texture;
        if(deNoiseLevel == 0){
            _texture = tex2D(RTSampler256,uv);
        }else if(deNoiseLevel == 1){
            _texture = smartDeNoise(RTSampler256,res,uv,1.5,1.5,0.025);
        }else if(deNoiseLevel == 2){
            _texture = smartDeNoise(RTSampler256,res,uv,2.0,2.0,0.05);
        }else if(deNoiseLevel == 3){
            _texture = smartDeNoise(RTSampler256,res,uv,2.0,2.0,0.1);
        }

    return _texture;
}
float4 PS_CloudsTAA(float4 vpos : SV_Position, float2 uv : TexCoord) : SV_Target
{   
    if(CLOUD_COVERAGE <= 0.019){return float4(0.0,0.0,0.0,0.0);}
    const float2 res = float2(512,512);
    float4 _texture;
        if(deNoiseLevel == 0){
            _texture = tex2D(RTSampler512,uv);
        }else if(deNoiseLevel == 1){
            _texture = smartDeNoise(RTSampler512,res,uv,1.5,1.5,0.025);
        }else if(deNoiseLevel == 2){
            _texture = smartDeNoise(RTSampler512,res,uv,2.0,2.0,0.05);
        }else if(deNoiseLevel == 3){
            _texture = smartDeNoise(RTSampler512,res,uv,2.0,2.0,0.1);
        }

    return _texture;
}
float4 PS_CloudsTAAHD(float4 vpos : SV_Position, float2 uv : TexCoord) : SV_Target
{   
    if(CLOUD_COVERAGE <= 0.019){return float4(0.0,0.0,0.0,0.0);}
    const float2 res = float2(512,512);
    float4 _texture;
        if(deNoiseLevel == 0){
            _texture = tex2D(RTSampler1024,uv);
        }else if(deNoiseLevel == 1){
            _texture = smartDeNoise(RTSampler1024,res,uv,1.5,1.5,0.025);
        }else if(deNoiseLevel == 2){
            _texture = smartDeNoise(RTSampler1024,res,uv,2.0,2.0,0.05);
        }else if(deNoiseLevel == 3){
            _texture = smartDeNoise(RTSampler1024,res,uv,2.0,2.0,0.1);
        }

    return _texture;
}
float4 PS_CloudsTAAFull(float4 vpos : SV_Position, float2 uv : TexCoord) : SV_Target
{   
    if(CLOUD_COVERAGE <= 0.019){return float4(0.0,0.0,0.0,0.0);}
    const float2 res = float2(512,512);
    float4 _texture;
        if(deNoiseLevel == 0){
            _texture = tex2D(RTSamplerFull,uv);
        }else if(deNoiseLevel == 1){
            _texture = smartDeNoise(RTSamplerFull,res,uv,1.5,1.5,0.025);
        }else if(deNoiseLevel == 2){
            _texture = smartDeNoise(RTSamplerFull,res,uv,2.0,2.0,0.05);
        }else if(deNoiseLevel == 3){
            _texture = smartDeNoise(RTSamplerFull,res,uv,2.0,2.0,0.1);
        }

    return _texture;
}

float4 PS_CloudsPost(sampler2D tex, float2 uv)
{   
    if(CLOUD_COVERAGE <= 0.019){return float4(0.0,0.0,0.0,0.0);}
	float2 resolution = float2(BUFFER_WIDTH, BUFFER_HEIGHT);
    float4 col = float4(0,0,0,0);

    /*
    // SHARPEN
    float2 step = 1.0 / resolution.xy;	
	float3 texA = tex2Dlod(tex,float4(uv + float2(-step.x, -step.y) * 1.5,0.0,0.0)).rgb;
	float3 texB = tex2Dlod(tex,float4(uv + float2( step.x, -step.y) * 1.5,0.0,0.0)).rgb;
	float3 texC = tex2Dlod(tex,float4(uv + float2(-step.x,  step.y) * 1.5,0.0,0.0)).rgb;
	float3 texD = tex2Dlod(tex,float4(uv + float2( step.x,  step.y) * 1.5,0.0,0.0)).rgb;  
    float3 around = 0.25 * (texA + texB + texC + texD);
	float4 center  = tex2Dlod(tex,float4(uv,0.0,0.0));
	float3 col = center.xyz + (center.xyz - around) * cloudsSharpen;	
    */

    
    // CA
    //float4 ca = float4(0,0,0,0); //CA
	col.x = tex2Dlod(tex,float4(uv-float2(0.001,0.001)*cloudsAberration,0.0,0.0)).x;
	col.y = tex2Dlod(tex,float4(uv-float2(-0.001,-0.001)*cloudsAberration,0.0,0.0)).y;
	col.z = tex2Dlod(tex,float4(uv-float2(0.0005,-0.0005)*cloudsAberration,0.0,0.0)).z;
	col.w = tex2Dlod(tex,float4(uv,0.0,0.0)).w;
    
    return col;
}

float4 PS_FinalDrawLow(float4 vpos : SV_Position, float2 uv : TexCoord) : SV_Target
{
    //uv = uv/1.25;
    //float4 cl = tex2Dlod(RTSampler512_2,float4(uv,0.0,0.0));
    float4 cl = PS_CloudsPost(RTSampler256_2,uv);
    float4 cl_fill = tex2Dlod(RTSamplerFull,float4(uv,0.0,0.0));

    if(tex2D(RTSamplerFullMaskGrow,uv).x == 1){
        cl = cl_fill;
    };

    return cl;
}

float4 PS_FinalDraw(float4 vpos : SV_Position, float2 uv : TexCoord) : SV_Target
{
    //uv = uv/1.25;
    //float4 cl = tex2Dlod(RTSampler512_2,float4(uv,0.0,0.0));
    float4 cl = PS_CloudsPost(RTSampler512_2,uv);
    float4 cl_fill = tex2Dlod(RTSamplerFull,float4(uv,0.0,0.0));

    if(tex2D(RTSamplerFullMaskGrow,uv).x == 1){
        cl = cl_fill;
    };

    return cl;
}

float4 PS_FinalDrawHD(float4 vpos : SV_Position, float2 uv : TexCoord) : SV_Target
{
    //float4 cl = tex2Dlod(RTSampler1024_2,float4(uv,0.0,0.0));
    float4 cl = PS_CloudsPost(RTSampler1024_2,uv);
    float4 cl_fill = tex2Dlod(RTSamplerFull,float4(uv,0.0,0.0));

    if(tex2D(RTSamplerFullMaskGrow,uv).x == 1){
        cl = cl_fill;
    };
    return cl;
}

float4 PS_Final(float4 vpos : SV_Position, float2 uv :TexCoord) : SV_Target
{
    float4 col = tex2Dlod(ReShade::BackBuffer, float4(uv,0.0,0.0));
    if(CLOUD_COVERAGE <= 0.019){return col;}
    
    updateProfiles();
    CloudRandomness();
    
    float4 cl = PS_CloudsPost(RTSamplerFull2,uv);

    if(length(cl.xyz) > 0){

		cl.xyz = cl.xyz+col.xyz*saturate(cl.w*AlphaBlend);
		col.xyz = lerp(col.xyz,cl.xyz,saturate(1.0f-cl.w));
	}
    return col;
}
float4 PS_FinalReflection(float4 vpos : SV_Position, float2 uv :TexCoord) : SV_Target
{
    //uv = uv/1.25;

    //uv = MapSkyUVtoReflectionPixel(uv);

    float4 col = tex2Dlod(ReShade::BackBuffer, float4(uv,0.0,0.0));
    if(CLOUD_COVERAGE <= 0.019 || length(col.xyz) < saturate(SunDirection.z) || tex2Dsize(ReShade::BackBuffer).x != ReflectionRes){return col;}
    
    updateProfiles();
    CloudRandomness();
    
    //float4 cl = PS_CloudsPost(RTSamplerFull2,uv);
    float2 mapUv = float2(-1.0+uv.x*2,uv.y);
    mapUv.y=1.0-mapUv.y;
    float4 cl = tex2D(CloudsReflectionSampler,mapUv);

    if(length(cl.xyz) > 0){

		cl.xyz = cl.xyz+col.xyz*saturate(cl.w*AlphaBlend);
		col.xyz = lerp(col.xyz,cl.xyz,saturate(1.0f-cl.w));
	}
    return col;
}
float4 PS_FinalWaterReflection(float4 vpos : SV_Position, float2 uv :TexCoord) : SV_Target
{
    float4 col = tex2Dlod(ReShade::BackBuffer, float4(uv,0.0,0.0));
    if(CLOUD_COVERAGE <= 0.019 || tex2Dsize(ReShade::BackBuffer).x >= BackBufferRes.x){return col;}
    
    updateProfiles();
    CloudRandomness();
    
    //float4 cl = PS_CloudsPost(RTSamplerFull2,uv);
    //uv+=(col.b)*ray_offset;
    float4 cl = tex2D(CloudsWaterReflectionSampler,uv);

    if(length(cl.xyz) > 0){
        float4 water_mask = tex2Dlod(waterMaskSampler,float4(uv,0.0,0.0));
        //cl.xyz = lerp(cl.xyz,cl.xyz*water_mask.xyz,0.6f);
        
		cl.xyz = cl.xyz+col.xyz*saturate(cl.w*AlphaBlend);
		col.xyz = lerp(col.xyz,cl.xyz,saturate(1.0f-cl.w)*0.15f*smoothstep(0.0,1.0,water_mask.y*water_mask.w));
	}
    return float4(col.x,col.y,col.z,col.w);
}
/*
float4 PS_FinalAlpha(float4 vpos : SV_Position, float2 uv :TexCoord) : SV_Target
{   
    updateProfiles();
    CloudRandomness();
    
    //float4 cl = PS_CloudsPost(RTSamplerFull2,uv);
    float4 cl = tex2D(RTSamplerFull2,uv);
    cl.w*=fogMaskExp;
    return cl.w;
}
*/
struct VSOUT
{
	float4 vpos : SV_Position;
    float2 uv : TEXCOORD0;
};

 // From Reshade.fxh
void PostVS(in uint id : SV_VertexID, out float4 position : SV_Position, out float2 texcoord : TEXCOORD)
{
    //updateProfiles();
    //CloudRandomness();    

	texcoord.x = (id == 2) ? 2.0 : 0.0;
	texcoord.y = (id == 1) ? 2.0 : 0.0;
	position = float4(texcoord * float2(2.0, -2.0) + float2(-1.0, 1.0), 0.0, 1.0);
}

// TODO 960 x 540 REFLECTION -- The Render Target is somewhere above the currently used CLOUD PASS


technique NveCloudsReflection < ui_label = "NaturalVision Evolved: Volumetric Clouds Reflection"; hidden=hideTech;>
{   
    pass
	{
		VertexShader = PostVS;
		PixelShader = PS_CloudsReflection;
        RenderTarget = CloudsReflectionBuffer;
    }
    pass
	{
		VertexShader = PostVS;
		PixelShader = PS_FinalReflection;
    }
}
technique NveCloudsWaterReflection < ui_label = "NaturalVision Evolved: Volumetric Clouds Water Reflection"; hidden=hideTech;>
{   
    pass
	{
		VertexShader = PostVS;
		PixelShader = PS_CloudsWaterReflection;
        RenderTarget = CloudsWaterReflectionBuffer;
    }
    pass
	{
		VertexShader = PostVS;
		PixelShader = PS_FinalWaterReflection;
    }
}

technique NveCloudsShadows < ui_label = "NaturalVision Evolved: Volumetric Clouds Shadows"; hidden=hideTech;>
{   
    pass
	{
		VertexShader = PostVS;
        PixelShader = PS_CloudShadows;
    }
}
technique NveCloudsLow < ui_label = "NaturalVision Evolved: Volumetric Clouds Low"; hidden=hideTech;>
{   
    pass p0
	{
		VertexShader = PostVS;
		PixelShader = PS_EdgeMask;

        RenderTarget = RenderTargetFullMask;

    }
    pass p1
	{
		VertexShader = PostVS;
		PixelShader = PS_EdgeMaskGrow;

        RenderTarget = RenderTargetFullMaskGrow;

    }
    
	pass p2
	{
		VertexShader = PostVS;
		PixelShader = PS_Clouds;

        RenderTarget = RenderTarget256;

    }
    pass p3
	{
		VertexShader = PostVS;
		PixelShader = PS_CloudsTAALow;

        RenderTarget = RenderTarget256_2;

    }
    pass p4
    {
        VertexShader = PostVS;
		PixelShader = PS_CloudsFillGap;

        RenderTarget = RenderTargetFull;
    } 
    
    pass p5
	{
		VertexShader = PostVS;
		PixelShader = PS_FinalDrawLow;

        RenderTarget = RenderTargetFull2;
    }
    pass p6
	{
		VertexShader = PostVS;
		PixelShader = PS_Final;
    }
}

technique NveClouds < ui_label = "NaturalVision Evolved: Volumetric Clouds"; hidden=hideTech;>
{   
    pass p0
	{
		VertexShader = PostVS;
		PixelShader = PS_EdgeMask;

        RenderTarget = RenderTargetFullMask;

    }
    pass p1
	{
		VertexShader = PostVS;
		PixelShader = PS_EdgeMaskGrow;

        RenderTarget = RenderTargetFullMaskGrow;

    }
    
	pass p2
	{
		VertexShader = PostVS;
		PixelShader = PS_Clouds;

        RenderTarget = RenderTarget512;

    }
    pass p3
	{
		VertexShader = PostVS;
		PixelShader = PS_CloudsTAA;

        RenderTarget = RenderTarget512_2;

    }
    pass p4
    {
        VertexShader = PostVS;
		PixelShader = PS_CloudsFillGap;

        RenderTarget = RenderTargetFull;
    } 
    
    pass p5
	{
		VertexShader = PostVS;
		PixelShader = PS_FinalDraw;

        RenderTarget = RenderTargetFull2;
    }
    pass p6
	{
		VertexShader = PostVS;
		PixelShader = PS_Final;
    }
}


technique NveCloudsHD < ui_label = "NaturalVision Evolved: Volumetric Clouds HD"; hidden=hideTech;>
{   
    pass p0
	{
		VertexShader = PostVS;
		PixelShader = PS_EdgeMask;

        RenderTarget = RenderTargetFullMask;

    }
    pass p1
	{
		VertexShader = PostVS;
		PixelShader = PS_EdgeMaskGrow;

        RenderTarget = RenderTargetFullMaskGrow;

    }
    
	pass p2
	{
		VertexShader = PostVS;
		PixelShader = PS_Clouds;

        RenderTarget = RenderTarget1024;

    }
    pass p3
	{
		VertexShader = PostVS;
		PixelShader = PS_CloudsTAAHD;

        RenderTarget = RenderTarget1024_2;

    }
    pass p4
    {
        VertexShader = PostVS;
		PixelShader = PS_CloudsFillGap;

        RenderTarget = RenderTargetFull;
    } 
    
    pass p5
	{
		VertexShader = PostVS;
		PixelShader = PS_FinalDrawHD;

        RenderTarget = RenderTargetFull2;
    }
    pass p6
	{
		VertexShader = PostVS;
		PixelShader = PS_Final;
    }
}

technique NveCloudsFull < ui_label = "NaturalVision Evolved: Volumetric Clouds FULL"; hidden=hideTech;>
{   
	pass p0
	{
		VertexShader = PostVS;
		PixelShader = PS_Clouds;

        RenderTarget = RenderTargetFull;

    }
    pass p1
	{
		VertexShader = PostVS;
		PixelShader = PS_CloudsTAAFull;

        RenderTarget = RenderTargetFull2;

    }   
    pass p2
	{
		VertexShader = PostVS;
		PixelShader = PS_Final;
    }
}
/*
technique NveCloudsFogRay < ui_label = "NaturalVision Evolved: Volumetric Clouds Fog Mask"; hidden=false;>
{   
    pass p0
	{
		VertexShader = PostVS;
		PixelShader = PS_FinalAlpha;
    }
}
*/