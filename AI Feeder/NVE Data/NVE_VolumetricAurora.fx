//Natural Vison Evolved Aurora Borealis (/*/*/-/)


#include "ReShadeUI.fxh"
#include "ReShade.fxh"
#include "NVE/nve.fxh"
#include "NVE/nve_clouds.fxh"
//#include "NVE_Launcher.fx"

#define INV_SQRT_OF_2PI 0.39894228040143267793994605993439  // 1.0/SQRT_OF_2PI
#define INV_PI 0.31830988618379067153776752674503
#define Pi 3.141592f
#define TwoPi 6.28318530718

uniform float timer < source = "timer";>;
uniform int framecount < source = "framecount"; >;

#ifndef AURORA_REFLECTION_RES_REDUCTION
    #define AURORA_REFLECTION_RES_REDUCTION 2
#endif
#ifndef AURORA_WATER_REFLECTION_RES_REDUCTION
    #define AURORA_WATER_REFLECTION_RES_REDUCTION 2
#endif

uniform float4 Aurora_Shape <	ui_type = "drag";ui_min = 0.0f;ui_max = 5000.0f; hidden = hide; > = float4(1800.0f,200.0f,0.0f,0.932f);
uniform float3 Aurora_Box <	ui_type = "drag";ui_min = 0.0f;ui_max = 5000.0f; hidden = hide; > = float3(1800.0f,1.0f,1.0f);
uniform float3 Aurora_Position <	ui_type = "drag";ui_min = -10000.0f;ui_max = 10000.0f; hidden = hide; > = float3(1,1,1);
uniform float2 Aurora_Dispalcement_Offset <	ui_type = "drag";ui_min = -50000.0f;ui_max = 50000.0f; hidden = hide; > = float2(0,0);
uniform float Aurora_Height <	ui_type = "drag";ui_min = 0.0f;ui_max = 5000.0f; hidden = hide; > = 700.0f;
uniform float3 Aurora_Color1 <	ui_type = "color";ui_min = 0.0f;ui_max = 1.0f; hidden = hide; > = 1.0f;
uniform float3 Aurora_Color2 <	ui_type = "color";ui_min = 0.0f;ui_max = 1.0f; hidden = hide; > = 1.0f;
uniform float3 Aurora_Color_Top <	ui_type = "color";ui_min = 0.0f;ui_max = 1.0f; hidden = hide; > = 1.0f;
uniform float Aurora_Color_Top_Mod <	ui_type = "color";ui_min = 0.0f;ui_max = 10.0f; hidden = hide; > = 0.091f;
uniform float2 Aurora_Color_Top_Range <	ui_type = "drag";ui_min = 0.0f;ui_max = 5000.0f;ui_step = 10.0f; hidden = hide; > = float2(120.0f,2500.0f);
uniform float Aurora_Noise1_Scale <	ui_type = "drag";ui_min = 0.0f;ui_max = 10.0f; hidden = hide; > = 1.5f;
uniform float Aurora_Noise2_Scale <	ui_type = "drag";ui_min = 0.0f;ui_max = 10.0f; hidden = hide; > = 1.0f;
uniform float Aurora_Density <	ui_type = "drag";ui_min = 0.0f;ui_max = 10.0f; hidden = hide; > = 1.0f;
uniform float Aurora_Density2 <	ui_type = "drag";ui_min = 0.0f;ui_max = 10.0f; hidden = hide; > = 0.0f;
uniform float Aurora_Brightness <	ui_type = "drag";ui_min = 0.0f;ui_max = 10.0f; hidden = hide; > = 5.0f;
uniform float Aurora_Fade_Bottom <	ui_type = "drag";ui_min = -5000.0f;ui_max = 5000.0f; hidden = hide; > = 1.0f;
uniform float Aurora_Fade_Top <	ui_type = "drag";ui_min = -5000.0f;ui_max = 5000.0f; hidden = hide; > = 1.0f;
uniform float Aurora_Distortion <	ui_type = "drag";ui_min = 0.0f;ui_max = 50.0f; hidden = hide; > = 0.250f;
uniform float Aurora_Distortion_Angle <	ui_type = "drag";ui_min = 0.0f;ui_max = 50.0f; hidden = hide; > = 5.0f;
uniform float Aurora_Distortion2 <	ui_type = "drag";ui_min = 0.0f;ui_max = 50.0f; hidden = hide; > = 5.0f;
uniform float Aurora_Distortion3 <	ui_type = "drag";ui_min = 0.0f;ui_max = 50.0f; hidden = hide; > = 5.0f;
uniform float2 Aurora_Solidness <	ui_type = "drag";ui_min = 0.0f;ui_max = 2.0f; hidden = hide; > = float2(0.01f,0.01f);
uniform float2 Aurora_Mask <	ui_type = "drag";ui_min = 0.0f;ui_max = 2.0f; hidden = hide; > = float2(2.0f,1.25f);
uniform float Aurora_Density_Cut <	ui_type = "drag";ui_min = -1.0f;ui_max = 1.0f; hidden = hide; > = -0.5f;
uniform float Aurora_Alpha_Cut <	ui_type = "drag";ui_min = 0.0f;ui_max = 1.0f; hidden = hide; > = 0.01f;
uniform float4 Aurora_Shadow <	ui_type = "drag";ui_min = 0.0f;ui_max = 100.0f; hidden = hide; > = float4(1,1,1,1);
uniform float Aurora_Blend_Ground_Close <	ui_type = "drag";ui_min = 0.0f;ui_max = 100.0f; ui_category="Atmo Blend"; hidden = hide; > = 0.0f;
uniform float Aurora_Blend_Ground_Far <	ui_type = "drag";ui_min = 0.0f;ui_max = 100.0f; ui_category="Atmo Blend"; hidden = hide; > = 1.0f;
uniform float Aurora_Blend_Ground_Distance <	ui_type = "drag";ui_min = 0.0f;ui_max = 100.0f; ui_category="Atmo Blend"; hidden = hide; > = 20.0f;
uniform float Aurora_Blend_Ground_Curve <	ui_type = "drag";ui_min = 0.0f;ui_max = 100.0f; ui_category="Atmo Blend"; hidden = hide; > = 1.0f;
uniform float Aurora_Blend_Sky_Close <	ui_type = "drag";ui_min = 0.0f;ui_max = 100.0f; ui_category="Atmo Blend"; hidden = hide; > = 0.0f;
uniform float Aurora_Blend_Sky_Far <	ui_type = "drag";ui_min = 0.0f;ui_max = 100.0f; ui_category="Atmo Blend"; hidden = hide; > = 1.0f;
uniform float Aurora_Blend_Sky_Distance <	ui_type = "drag";ui_min = 0.0f;ui_max = 100.0f; ui_category="Atmo Blend"; hidden = hide; > = 20.0f;
uniform float Aurora_Blend_Sky_Curve <	ui_type = "drag";ui_min = 0.0f;ui_max = 100.0f; ui_category="Atmo Blend"; hidden = hide; > = 1.0f;

uniform float edgeMaskSize <	ui_type = "drag";ui_min = -5.0f;ui_max = 5.0f; hidden = hideDebug; > = 1.0f;
uniform float edgeMaskSizeFill <	ui_type = "drag";ui_min = -5.0f;ui_max = 5.0f; hidden = hideDebug; > = 1.0f;
uniform float edgeFirstSize <	ui_type = "drag";ui_min = -5.0f;ui_max = 5.0f; hidden = hideDebug; > = 1.0f;

texture2D           TextureNoise <source = "ns.png";>{Width = 64; Height = 64; Format = R8;}; 
texture3D           TextureNoise_actually3D <source = "nubisnoise.dds";>{Width = 128; Height = 128; Depth = 128; Format = RGBA8;};          

texture2D AuroraReflectionBuffer {
    Width = 512 / AURORA_REFLECTION_RES_REDUCTION;
    Height = 512 / AURORA_REFLECTION_RES_REDUCTION;
    Format = RGBA16F;
};
texture2D AuroraWaterReflectionBuffer {
    Width = 512 / AURORA_WATER_REFLECTION_RES_REDUCTION;
    Height = 512 / AURORA_WATER_REFLECTION_RES_REDUCTION;
    Format = RGBA16F;
};
sampler2D AuroraReflectionSampler       { Texture = AuroraReflectionBuffer; };
sampler2D AuroraWaterReflectionSampler  { Texture = AuroraWaterReflectionBuffer; };

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
texture2D TextureDownsampled    {	Width = 1024; Height = 1024; Format = RGBA32F;};

texture texShading : SHADE_MAP;
texture waterMask : WATER_MASK;
sampler2D waterMaskSampler       { Texture = waterMask; };

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
sampler2D TDSampler             { Texture = TextureDownsampled; };

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
float sampledNoise3D_3D(float3 p){;
    p*=0.1f;

    //p.z+=4096;

    float ret = 1.0f-tex3Dlod(Sampler3D,float4(p.x,p.y,p.z,0.0f)).x;
	
	return ret;
	
}
float sampledNoise3D_3D_g(float3 p){;
    p*=0.1f;

    //p.z+=4096;

    float ret = 1.0f-tex3Dlod(Sampler3D,float4(p.x,p.y,p.z,0.0f)).g;
	
	return ret;
	
}
float sampledNoise3D_3D_b(float3 p){;
    p*=0.1f;

    //p.z+=4096;

    float ret = 1.0f-tex3Dlod(Sampler3D,float4(p.x,p.y,p.z,0.0f)).b;
	
	return ret;
	
}
float sampledNoise3D_3D_a(float3 p){;
    p*=0.1f;

    //p.z+=4096;

    float ret = 1.0f-tex3Dlod(Sampler3D,float4(p.x,p.y,p.z,0.0f)).a;
	
	return ret;
	
}

//=================Structs========================
struct CloudProfile
{
    float4 march;   //min length, max length, multiplicand, max step
    
    float2 cutoff;  // density cut, transparency cut

    float2 volumeBox;   //top, bottom
    float4 shape;       //top, mid, bot, thickness
    float soft;

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

};

struct CloudBaseColor
{
    float3 BaseColor;
    float3 BaseColor_Day;
    float3 BaseColor_Sunset;
};
//#define CLOUD_COVERAGE float(coverageBottom*CloudyCoverage)
#define CLOUD_COVERAGE float(1.0f)

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
    return float3(cos(lump*distortion.x)*distortion.y, sin(lump*distortion.x)*distortion.y, -lump*distortion.z);
}
float2 AuroraDistortion(float2 uv, float time, float intensity)
{
    float waveX = sin(uv.y * 20) * 0.01;
    float waveY = cos(uv.x * 5) * 0.01;
    
    float finerWaveX = sin(uv.y * 40.0 + time * 1.0) * 0.5;
    float finerWaveY = cos(uv.x * 40.0 + time * 1.0) * 0.5;
    
    float noise = sin(dot(uv, float2(3.1, 2.7))) * 0.03;
    
    float2 offset = float2((waveX + finerWaveX) * intensity, (waveY + finerWaveY) * intensity);
    return uv + offset;
}


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
    float blendWidth = 0.2f; // Adjust this value to control the smoothness around midPoint
    float midBlend = smoothstep(tm - blendWidth, tm + blendWidth, t);

    // Final value with smooth transition
    return lerp(lowToMid, midToHigh, midBlend);
}
float4 CloudShape(float z, float4 shape, float3 range,float softM) {
    float soft = map(z, shape.y, shape.x, range.z, range.y)*softM;

    float x = Gradient3Point(z,0.0f,1.0f,0.0f,
    shape.z,shape.y,shape.x);

    return saturate(float4(
        x, 
        range.x + soft,
        range.x - soft,
        soft));
        
}

float2x2 mm2(in float a){float c = cos(a), s = sin(a);return float2x2(c,s,-s,c);}
float tri(in float x){return clamp(abs(frac(x)-.5),0.01,0.49);}
float2 tri2(in float2 p){return float2(tri(p.x)+tri(p.y),tri(p.y+tri(p.x)));}

float triNoise2d(in float2 p, float spd)
{
    const float2x2 m2 = float2x2(0.95534, 0.29552, -0.29552, 0.95534);
    float z=1.8;
    float z2=2.5;
	float rz = 0.;
    p = mul(mm2(p.x*0.06),p);
    float2 bp = p;
	for (float i=0.; i<5.; i++ )
	{
        float2 dg = tri2(bp*1.85)*.75;
        dg = mul(mm2(timer*spd),dg);
        p -= dg/z2;

        bp *= 1.3;
        z2 *= .45;
        z *= .42;
		p *= 1.21 + (rz-1.0)*.02;
        
        rz += tri(p.x+tri(p.y))*z;
        p = mul(-m2,p);
	}
    return clamp(1./pow(rz*29., 1.3),0.,.55);
}
float Chunk(in float3 pos, const in float2 density, const in float3 scale, in float cs) {
 
    

    float3
        pA = (pos+Aurora_Position);



        pA.xy *= scale.x;
        pA.z *= 0.0f;

        pA.xy+=(Distortion(pA.x+NOffsetA.x*0.005f+Aurora_Dispalcement_Offset.x,cloudProfile.distortion).xy*sin(timer*0.00001f)*cos(timer*0.000012f)*sin(0.1f+timer*0.00002f));

    float locations = clampMap(length(float2(695,6104)-pos.xy),0,8000,1,0);
    float a = triNoise2d(pA.xy,0.151f*0.001f)*locations;
    float dens_a = a*cs.x*density.x;

    return saturate(dens_a);
}

//Detail noise for clouds
float DetailA(in float3 pos, const in float3 density, const in float3 scale, const in float3 distortion) {
    float3 p = pos;
    p.z *= 0.0f;
    p.xy+=Distortion(p.z,cloudProfile.distortion).xy;
    return density.x * (sampledNoise3D_3D((p + distortion) * scale.x));
}

float DetailB(const in CloudProfile cp,const in float lump_density, in float3 pos, const in float2 volumeBox, const in float3 density, const in float3 scale, const in float4 distortionParm, float cs) {

    float3 d = Distortion(lump_density, distortionParm);
    
    float3
        pD = pos;

    float dens = DetailA(pos, density, scale, d);

    d.z -= dens * distortionParm.w;

    float3 pD2 = pD;
    pD2.z *= 0.005f;

    float3 pD3 = pos;
    pD3.z *= 0.0f;

    float3 cam_pos = float3(InverseView[3].x, InverseView[3].y, InverseView[3].z);
    float dist = length(pos - cam_pos);

    float c_factor = clampMap(dist*1.75f,0.0,cp.fade,1.0,0.0);

    float b = 1.0f-smoothstep(0.0,1.0,sampledNoise3D_3D_a((pD2 + d/3.0) * scale.y));
    float c = 1.0f-smoothstep(0.625,1.0,sampledNoise3D_3D_g((pD3 + d*8.0) * scale.z));

    //b*=clampMap(pos.z,BottomDetailLow,BottomDetailHigh,0.0,1.0);


    //c+=co*(1.0-alt_factor)*c_factor*BottomDetailMul;
    c*=c_factor;
    //c*=exp2(-dens*AmbientExponent);


    //dens = map(dens,0.0,1.0,0.0,1.0-saturate(c*c_factor+co*alt_factor*c_factor+b));
    //dens = rescale(saturate(b*density.y+c*density.z+c*alt_factor),MyValue3,dens);
    dens = ValueErosion(dens,clamp(b*density.y,0.0,1.0));
    dens = ValueErosion(dens,clamp(c*density.z,0.0,1.0));
    //dens+=c*density.z+b*density.y;
    //dens-=co*alt_factor*c_factor;
    //dens+=b*density.y*(1.0-alt_factor)*(2.0-c_factor);
    //dens+=(co*density.z*c_factor);
    return dens;
}
float DensityField(float lump, float detail)
{
    return (lump*detail+lump);
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


#define fix (0.00001)

#define earthRadius (6.421)
#define  groundHeight (6.371)
#define AtmOrigin (float3(0.0, 0.0, 6480))
#define earth (float4(0.0, 0.0, 0.0, 4570))
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
//SPHERE CAST LAYER
// WIP SPHERE CAST FUNCTIONS

#define cloudBallRadius 800000.0f
#define cloudClipAltitudeBegin 0.0f
#define cloudClipAltitudeEnd 0.0f
#define penetrationFix 0.00001
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

float4 CloudAtRay(in float3 bg_col,CloudProfile a, CloudBaseColor b, const in float3 cam_dir, in float3 cam_pos, float Time, in out float _distance, float2 uv) {

    float4 d = float4(0.0, 0.0, 0.0, a.march.y); 
    float3 p = CastStep(cam_pos, cam_dir, float2(a.volumeBox.x,a.volumeBox.y), d.x);

    d.y = d.x;

    float3 p_;

    if (d.x >= 0.0 && _distance>d.x) {

        a.range.x = rcp(a.range.x);

        float4 fx = float4(0.0, 0.0, 1.0,0.0); 
        float a2 = 0.0f;
        float atm_bleed = 0.0f;
        float red_col = 0.0f;
        
        float last_sample = 0.0, pdf=0.0;


        float lightning = 0.0;

        float dens;

        float atmo_altitude = 1.0f-saturate((Aurora_Height-cam_pos.z)/Aurora_Height);
         
        for (int i = 0; fx.z > 0.015 && i < a.march.w && d.x - d.w < _distance && d.x < a.fade; i++) {
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

            float
                d1 = Chunk(p_, a.densityChunk, a.scaleChunk, cs.x),
                d2 = DetailB(a,d1, p_, a.volumeBox, float3(a.densityDetail.x,a.densityDetail.y,a.densityDetail.z), a.scaleDetail, a.distortion, cs.x),
                df = DensityField(d1, d2);

            float shadow_term = 0.0;

            float alt_factor = clampMap(p_.z,Aurora_Height+Aurora_Color_Top_Range.x,Aurora_Height+Aurora_Color_Top_Range.y,0.0,1.0);
          
            if(df>cs.z+dfLimit)
            {   
                dens = GetDensity(df, p_.z, cs.z, cs.y, a.volumeBox, a._solidness);
                float c_dens = (dens + last_sample) * a.march.x*0.025f;
                    
                last_sample = dens;

                
                if (d.x >= _distance)
                    c_dens *= d.z / d.w;
                    
                
                
                if(c_dens > 0)
                    //d.y = d.y * (1.0 - fx.z) + fx.z * d.x;
                    

                fx.y += c_dens; 
                fx.z *= (saturate(1.0f-c_dens)- a.cutoff.y) / (1.0f - a.cutoff.y);   
                
                d.z = _distance - d.x;

                red_col += alt_factor;
                

                fx.x += exp(-c_dens-fx.z-fx.y);
            }

            float mask1 = clamp(Aurora_Mask.x-clamp(d.x-5000.0f,0.0f,a.fade)/(a.fade),0.0f,2.0f);
            float mask2 = clamp(Aurora_Mask.y+clamp(d.x-5000.0f,0.0f,a.fade)/(a.fade),1.00f,4.0f);

            //df*=AnvilScale;

            d.w = clampMap(mask1*df-pdf, cs.z*mask2, a.cutoff.x, a.march.x, a.march.y);
            d.w *= clampMap(d.x, 0.0, a.fade, 1.0, a.march.z);

            if(dens>0.1){
                d.w += noise2d(p_)*a.march.x*mainNoise;
            }

            pdf=df;
            p += cam_dir * d.w;
            d.x += d.w;
        }
    
        if (fx.z <= 1.0) {
            fx = saturate(fx);

            float3 z_pos = float3(0.0,0.0,cam_pos.z);
            float3 sun_samp_pos = Game2Atm(z_pos*0.5+cam_dir*d.y);

            
            //float medium_height = p_.z*AmbientTop;

            float3
                //c_bright = (SunLight(light,sun_samp_pos,lightDirection,earth)*sunColor)*a.brightness;

                c_bright = lerp(Aurora_Color1,Aurora_Color2,exp(-fx.z*2.0f));
                c_bright+=Aurora_Color_Top*red_col*Aurora_Color_Top_Mod;

                c_bright*=Aurora_Brightness;

            
            //c_bright *= LightDecay(fx.y,fx.x);

            //fx.x = 1.0 - exp(-fx.x);
            //c_bright = 1.0 - exp(-c_bright);
            //c_bright += ScatterPhase*sunColor;


            float blend = 1.0f;
            float sky_blend = lerp(max(0.0f,Aurora_Blend_Sky_Close),max(0,Aurora_Blend_Sky_Far),clamp(pow( clamp(d.y-a.volumeBox.y*2,0,999999)/((Aurora_Blend_Sky_Distance)*1000),Aurora_Blend_Sky_Curve*Aurora_Blend_Sky_Curve),0.0f,1.0f) );
            float ground_blend = lerp(max(0,Aurora_Blend_Ground_Close),max(0,Aurora_Blend_Ground_Far),clamp(pow( clamp(d.y-a.volumeBox.y*2,0,999999)/((Aurora_Blend_Ground_Distance)*1000),Aurora_Blend_Ground_Curve*Aurora_Blend_Ground_Curve),0.0f,1.0f) );

            blend = lerp(ground_blend,sky_blend,atmo_altitude);
            // surface haze
            //blend = lerp(blend,max(blend,1.1),pow(saturate(1.0f-p.z*cloudClipAltitudeBegin*0.001f),1.1)*(1.0f-atmo_altitude));

            // limit blending around sun
            //blend = lerp(blend,0.0f,1.0f-saturate(cross));
            
            float3 C;
            C = c_bright * fx.x;

            //C += ( ambi * saturate(1.0-fx.w*AmbientExponent*fx.y));
            //C += bg_col*saturate(1.0-fx.z*AmbientExponent-exp(-fx.y));
            //C += is*InScatterColor;



            //C += b.BaseColor*saturate(1.0f-fx.x-fx.z);
            //C = atmosphere_scattering((1.0-fx.z), C, Game2Atm(cam_pos.z), cam_dir, d.y/(game2atm*MyValue3*0.1), lightDirection, earth);
            //C = clamp(C,float3(0,0,0),clampBright.x);
            C.gb *= 1.0f-(blend*(1.0f-fx.z)*redShift);
            C = lerp(C,bg_col*saturate(1.0f-fx.z),saturate(blend-fx.x*pow(length(c_bright)*fx.z,2.0)));
            //_distance = _distance*fx.z + d.y*(1.0-fx.z);


            //fx.z = lerp(ground_blend,sky_blend,atmo_altitude);
            //fx.z = lerp(fx.z,max(fx.z,MyValue),pow(saturate(1.0f-p.z*cloudClipAltitudeBegin*0.001f),MyValue2)*(1.0f-atmo_altitude));
            return float4(C, saturate((fx.z)));
        }
            
    }
    return float4(0.0, 0.0, 0.0 ,1.0);
}
void CloudRandomness()
{

    const float staticMul = 0;
    #ifdef MOVEMENT
    cloudProfile.offsetA.xy = -NOffsetC.xy*0.1*staticMul;
    cloudProfile.offsetA.z  = -NOffsetB.z*1.0*staticMul;
    cloudProfile.offsetB.xy = NOffsetA.xy*1.0*staticMul;
    cloudProfile.offsetB.z  = -NOffsetB.z*5.0*staticMul;
    cloudProfile.offsetC.xy = NOffsetA.xy*1.0*staticMul;
    cloudProfile.offsetC.z  = -NOffsetB.z*5.0*staticMul;
    cloudProfile.offsetD.xy = NOffsetA.xy*1.0*staticMul;
    cloudProfile.offsetD.z =  -NOffsetB.z*7.5*staticMul;
    cloudProfile.offsetE.xy = NOffsetA.xy*0.4*staticMul;
    cloudProfile.offsetE.z = NOffsetB.z*6.0*staticMul;
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
        /*MARCHING (ray tracing)*/ cloudProfile.march = float4( 5, 80, 15, 512);   //min length, max length, multiplicand, max step
        /*CUTOFF*/                 cloudProfile.cutoff = float2(Aurora_Density_Cut, Aurora_Alpha_Cut);  // density cut, transparency cut
        /*VOLUME BOX*/            cloudProfile.volumeBox = float2(Aurora_Box.x,Aurora_Box.y)+Aurora_Height;   //top, bottom
                                //cloudProfile.volumeBox = float2(volumeBoxX,volumeBoxY)+cloudHeight-ViewPos.z*0.25f;   //top, bottom
        /*SHAPE*/                 cloudProfile.shape = float4(float3(Aurora_Shape.x,Aurora_Shape.y,Aurora_Shape.z)+Aurora_Height,0.0f);       //top, mid, bot, thickness
        /*SOFT*/                  cloudProfile.soft = Aurora_Shape.w;
                                    //cloudProfile.shape = float4(float3(volumeShapeX*CLOUD_COVERAGE,volumeShapeY*CLOUD_COVERAGE,volumeShapeZ*CLOUD_COVERAGE)+cloudHeight-ViewPos.z*0.25f,volumeShapeThic);       //top, mid, bot, thickness
        /*BRIGHTNESS*/            cloudProfile.brightness = Aurora_Brightness;
        /*RANGE*/                 //cloudProfile.range = float3(0.9 + CLOUD_COVERAGE*0.16, 0.1, 0.2+CLOUD_COVERAGE*0.4),    //total, top, bottom
        /*RANGE*/                 cloudProfile.range = float3(1.0f, 0.35f, 1.0f),    //total, top, bottom
        /*SOLIDNESS*/             cloudProfile._solidness = Aurora_Solidness*1.0;   //top, bottom
        /*DENSITY CHUNK*/         cloudProfile.densityChunk = float2(Aurora_Density, 0.0f)*1.0;   //dens A,B
        /*SHADOW*/                cloudProfile.shadow = Aurora_Shadow;  //step length, detail strength, expanding, strength
        /*DISTORTION*/            cloudProfile.distortion = float4(Aurora_Distortion_Angle, Aurora_Distortion, Aurora_Distortion2, Aurora_Distortion3);  //max angle, strength, bump strength, small bump strength
        /*FADE DISTANCE*/         cloudProfile.fade = 40000.0f;
        /*DETAIL DENSITY*/        cloudProfile.densityDetail = float3(1.0f,0.0f,1.75f);   //dens C,D,E
        /*CHUNK SCALE*/           cloudProfile.scaleChunk = float3(Aurora_Noise1_Scale*0.0001, 0.0f, 0.0f);    //scale A,B, vertical stretch
        /*DETAIL SCALE*/          cloudProfile.scaleDetail = float3(0.001f,0.01f,Aurora_Noise2_Scale*0.01);   //scale C,D,E
        ///*CLOUD SHIFT*/            float3(-0.8, 0.0, 0.0),
}

float4 RenderClouds(float3 ViewDir, float3 ViewPos, float3 sunDir, float distance, float2 uv, bool LOW_RES)
{

    if(AuroraVisibility <= 0.01){return float4(0,0,0,0);}

    updateProfiles();               
    CloudRandomness();
    CloudColorVarying(sunDir, baseColor);


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
        cloudProfile.cutoff.y = 0.15f;
        cloudProfile.soft*=0.8f;
    }


    clouds = CloudAtRay(bg_col,cloudProfile, baseColor, ViewDir, ViewPos, timer*0.0001f, depth, uv);


    
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
float4 PS_AuroraReflection(float4 vpos : SV_Position, float2 tex : TexCoord) : SV_Target
{

    float2 uv = tex;
    float2 resolution = float2(BUFFER_WIDTH, BUFFER_HEIGHT);
    float3 camPos = float3(InverseView[3].x, InverseView[3].y, InverseView[3].z);
    //if(!writePixel(tex*resolution,framecount)){discard;}


	float2 fuv = -uv;

    float4 cl = 0.0f;

    float2 texel = 1.0 / resolution;


    float3 worldPos = DepthToWorldPos(GetLinearizedDepth(uv,1.0),uv);
    float dp = length(camPos-worldPos);

    float depth = dp;



    
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

float4 PS_AuroraWaterReflection(float4 vpos : SV_Position, float2 tex : TexCoord) : SV_Target
{

    float2 uv = tex;
    float2 resolution = float2(BUFFER_WIDTH, BUFFER_HEIGHT);
    float3 camPos = float3(InverseView[3].x, InverseView[3].y, -InverseView[3].z);
    //if(!writePixel(tex*resolution,framecount)){discard;}


	float2 fuv = -uv;

    float4 cl = 0.0f;

    float2 texel = 1.0 / resolution;


    float3 worldPos = DepthToWorldPos(GetLinearizedDepth(uv,1.0),uv);
    float dp = length(camPos-worldPos);

    float depth = dp;



    
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
float4 PS_Aurora(float4 vpos : SV_Position, float2 tex : TexCoord) : SV_Target
{
    if(AuroraVisibility <= 0.01){return float4(0,0,0,0);}
    float2 uv = tex;
    float2 resolution = float2(BUFFER_WIDTH, BUFFER_HEIGHT);
    float3 camPos = float3(InverseView[3].x, InverseView[3].y, InverseView[3].z);
    //if(!writePixel(tex*resolution,framecount)){discard;}


	float2 fuv = -uv;

    float4 cl = 0.0f;

    float2 texel = 1.0 / resolution;


    float3 worldPos = DepthToWorldPos(GetLinearizedDepth(uv,1.0),uv);
    float dp = length(camPos-worldPos);

    float depth = dp;



    
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



    cl = RenderClouds(rayDir, camPos, normalize(_sunDir), depth,uv,false);
    //cl.w-=0.013; //fix opaque transparency
    
    cl.w = saturate(cl.w);
    return cl;
}

float4 PS_EdgeMask(float4 vpos : SV_Position, float2 tex : TexCoord) : SV_Target
{   
    if(AuroraVisibility <= 0.01){return float4(0,0,0,0);}
    float2 texel = 1.0 / float2(BUFFER_WIDTH, BUFFER_HEIGHT);
    float3 camPos = float3(InverseView[3].x, InverseView[3].y, InverseView[3].z);

    float3 worldPos = DepthToWorldPos(GetLinearizedDepth(tex,1.0),tex);
    float dp = length(camPos-worldPos);

    float depth = dp;

    float depthTest = 0.0;
    float fillDepth = depth;
    for(int i = 0;i<9;i++){
        depthTest = length(camPos-DepthToWorldPos(GetLinearizedDepth(tex + texel * gaussKernel3x3[i].xy * 5.0,1.0),tex)).x;
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
    if(AuroraVisibility <= 0.01){return float4(0,0,0,0);}
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
float4 PS_AuroraFillGap(float4 vpos : SV_Position, float2 tex : TexCoord) : SV_Target
{
    float3 camPos = float3(InverseView[3].x, InverseView[3].y, InverseView[3].z);
    if(AuroraVisibility <= 0.01){return float4(0,0,0,1.0);}

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

float4 PS_AuroraTAA(float4 vpos : SV_Position, float2 uv : TexCoord) : SV_Target
{   
    if(AuroraVisibility <= 0.01){return float4(0,0,0,0.0);}
    const float2 res = float2(512,512);
    float4 _texture;

            _texture = smartDeNoise(RTSampler512,res,uv,1.5,1.5,7.0);

    return _texture;
}
float4 PS_AuroraTAAHD(float4 vpos : SV_Position, float2 uv : TexCoord) : SV_Target
{   
    if(AuroraVisibility <= 0.01){return float4(0,0,0,0.0);}
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
float4 PS_AuroraTAAFull(float4 vpos : SV_Position, float2 uv : TexCoord) : SV_Target
{   
    if(AuroraVisibility <= 0.01){return float4(0,0,0,0.0);}
    const float2 res = float2(512,512);
    float4 _texture = smartDeNoise(RTSamplerFull,res,uv,1.0,1.0,0.1);
    return _texture;
}




float4 PS_CloudsSharpen(float4 vpos : SV_Position, float2 uv : TexCoord) : SV_Target
{   
    if(AuroraVisibility <= 0.01){return float4(0,0,0,0.0);}
	float2 resolution = float2(512, 512);
    float2 step = 1.0 / resolution.xy;	
	float3 texA = tex2Dlod(RTSampler512_2,float4(uv + float2(-step.x, -step.y) * 1.5,0.0,0.0)).rgb;
	float3 texB = tex2Dlod(RTSampler512_2,float4(uv + float2( step.x, -step.y) * 1.5,0.0,0.0)).rgb;
	float3 texC = tex2Dlod(RTSampler512_2,float4(uv + float2(-step.x,  step.y) * 1.5,0.0,0.0)).rgb;
	float3 texD = tex2Dlod(RTSampler512_2,float4(uv + float2( step.x,  step.y) * 1.5,0.0,0.0)).rgb;  
    float3 around = 0.25 * (texA + texB + texC + texD);
	float4 center  = tex2Dlod(RTSampler512_2,float4(uv,0.0,0.0));
	float3 col = center.xyz + (center.xyz - around) * cloudsSharpen;	
    return float4(col,center.w);
}
float4 PS_CloudsSharpenHD(float4 vpos : SV_Position, float2 uv : TexCoord) : SV_Target
{   
    if(AuroraVisibility <= 0.01){return float4(0,0,0,0.0);}
	float2 resolution = float2(1024, 1024);
    float2 step = 1.0 / resolution.xy;	
	float3 texA = tex2Dlod(RTSampler1024_2,float4(uv + float2(-step.x, -step.y) * 1.5,0.0,0.0)).rgb;
	float3 texB = tex2Dlod(RTSampler1024_2,float4(uv + float2( step.x, -step.y) * 1.5,0.0,0.0)).rgb;
	float3 texC = tex2Dlod(RTSampler1024_2,float4(uv + float2(-step.x,  step.y) * 1.5,0.0,0.0)).rgb;
	float3 texD = tex2Dlod(RTSampler1024_2,float4(uv + float2( step.x,  step.y) * 1.5,0.0,0.0)).rgb;  
    float3 around = 0.25 * (texA + texB + texC + texD);
	float4 center  = tex2Dlod(RTSampler1024_2,float4(uv,0.0,0.0));
	float3 col = center.xyz + (center.xyz - around) * cloudsSharpen;	
    return float4(col,center.w);
}
float4 PS_CloudsCA(sampler2D tex, float2 uv)
{   
    if(AuroraVisibility <= 0){return float4(0,0,0,0.0);}
	float2 resolution = float2(BUFFER_WIDTH, BUFFER_HEIGHT);
    float4 ca = float4(0,0,0,0); //CA
	ca.x = tex2Dlod(tex,float4(uv-float2(0.001,0.001)*cloudsAberration,0.0,0.0)).x;
	ca.y = tex2Dlod(tex,float4(uv-float2(-0.001,-0.001)*cloudsAberration,0.0,0.0)).y;
	ca.z = tex2Dlod(tex,float4(uv-float2(0.0005,-0.0005)*cloudsAberration,0.0,0.0)).z;
	ca.w = tex2Dlod(tex,float4(uv,0.0,0.0)).w;
    return ca;
}

float4 PS_FinalDraw(float4 vpos : SV_Position, float2 uv : TexCoord) : SV_Target
{
    float depth = GetLinearizedDepth(uv,1.0f).x;
    float3 col = tex2Dlod(ReShade::BackBuffer,float4(uv,0,0)).xyz;
    float4 cl = tex2Dlod(RTSampler512_2,float4(uv,0.0,0.0));
    float4 cl_fill = tex2Dlod(RTSamplerFull,float4(uv,0.0,0.0));

    if(tex2D(RTSamplerFullMaskGrow,uv).x == 1){
        cl = cl_fill;
    }; //So many conditions I am so sorry
    
    if(length(col/3)<0.00001f+cableShit*0.0001f && depth > 0.95f && GameTime.x > 4 && GameTime.x < 21){
        //cl.w = 1.0;
    }
    

    return cl;
}

float4 PS_FinalDrawHD(float4 vpos : SV_Position, float2 uv : TexCoord) : SV_Target
{
    float4 cl = tex2Dlod(RTSampler1024_2,float4(uv,0.0,0.0));
    float4 cl_fill = tex2Dlod(RTSamplerFull,float4(uv,0.0,0.0));

    if(tex2D(RTSamplerFullMaskGrow,uv).x == 1){
        cl = cl_fill;
    }; //So many conditions I am so sorry
    return cl;
}
float4 PS_FinalReflection(float4 vpos : SV_Position, float2 uv :TexCoord) : SV_Target
{
    //uv = uv/1.25;

    //uv = MapSkyUVtoReflectionPixel(uv);

    float4 col = tex2Dlod(ReShade::BackBuffer, float4(uv,0.0,0.0));
    if(AuroraVisibility <= 0.01 || tex2Dsize(ReShade::BackBuffer).x != ReflectionRes){return col;}
    
    updateProfiles();
    CloudRandomness();
    
    //float4 cl = PS_CloudsPost(RTSamplerFull2,uv);
    float2 mapUv = float2(-1.0+uv.x*2,uv.y);
    mapUv.y=1.0-mapUv.y;
    float4 cl = tex2D(AuroraReflectionSampler,mapUv);

    if(length(cl.xyz) > 0){

		cl.xyz = cl.xyz+col.xyz*saturate(cl.w*AlphaBlend);
		col.xyz = lerp(col.xyz,cl.xyz,saturate(1.0f-cl.w));
	}
    return col;
}
float4 PS_FinalWaterReflection(float4 vpos : SV_Position, float2 uv :TexCoord) : SV_Target
{
    float4 col = tex2Dlod(ReShade::BackBuffer, float4(uv,0.0,0.0));
    if(AuroraVisibility <= 0.01 || tex2Dsize(ReShade::BackBuffer).x >= BackBufferRes.x){return col;}
    float4 water_mask = tex2Dlod(waterMaskSampler,float4(uv,0.0,0.0)).w;

    updateProfiles();
    CloudRandomness();
    
    //float4 cl = PS_CloudsPost(RTSamplerFull2,uv);
    //uv+=(col.b)*ray_offset;
    float4 cl = tex2D(AuroraWaterReflectionSampler,uv);
    //cl.w *= 0.1;

    if(length(cl.xyz) > 0){

		cl.xyz = cl.xyz+col.xyz*saturate(cl.w*AlphaBlend);
		col.xyz = lerp(col.xyz,cl.xyz,saturate(1.0f-cl.w)*0.15f*smoothstep(0.0,1.0,water_mask.y*water_mask.w));
	}
    return float4(col.x,col.y,col.z,col.w);
}
float4 PS_Final(float4 vpos : SV_Position, float2 uv :TexCoord) : SV_Target
{
    float4 col = tex2Dlod(ReShade::BackBuffer, float4(uv,0.0,0.0));
    if(AuroraVisibility <= 0.01){return col;}
    updateProfiles();
    CloudRandomness();
    //float4 cl = PS_CloudsCA(RTSamplerFull2,uv);
    float4 cl = tex2D(RTSamplerFull2,uv);

    
    float3 camPos = float3(InverseView[3].x, InverseView[3].y, InverseView[3].z);
    float3 worldPos = DepthToWorldPos(GetLinearizedDepth(uv,1.0),uv);
    float3 rayDir = normalize(worldPos - camPos)*-1;
    float depth = length(camPos-worldPos);
    /*
    float3 lightDir;
    LightSource(SunDirection,MoonDirection,lightDir);
    float shad = 1.0;
    shad *= exp(-ShadowOnGround(cloudProfile,camPos+rayDir*depth,lightDir)*0.1);
    if(depth < 60000){
        shad = (1.0f-shad)*(saturate((1.0/(depth*0.001))));

        float3 c_s = float3(0.125,0.164,0.2);
        float3 c_s_d = float3(c_s.x-col.x,c_s.y-col.y,c_s.z-col.z);
        float3 d_c = lerp(col.xyz,col.xyz*c_s,0.75);

        col.xyz = lerp(col.xyz,col.xyz*d_c,saturate(shad*1.25));
    }
    */
    //col.xyz = lerp(col.xyz,lfc,d*ci);
    //float mask = tex2D(RTSamplerFullMask,uv).x;
    if(length(cl.xyz) > 0){

		cl.xyz = cl.xyz+col.xyz*saturate(cl.w*AlphaBlend);
		col.xyz = lerp(col.xyz,cl.xyz,saturate(1.0f-cl.w));
	}


    //if(mask!=0){col.xyz=float3(1.0,0,0);}
    //if(uv.x>0.7){col.xyz = CustomDepth(uv);}
    return col;
}
struct VSOUT
{
	float4 vpos : SV_Position;
    float2 uv : TEXCOORD0;
};

technique NveAuroraReflection < ui_label = "NaturalVision Evolved: Volumetric Aurora Reflection"; hidden=hideTech;>
{   
    pass
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_AuroraReflection;
        RenderTarget = AuroraReflectionBuffer;
    }
    pass
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_FinalReflection;
    }
}
technique NveAuroraWaterReflection < ui_label = "NaturalVision Evolved: Volumetric Aurora Water Reflection"; hidden=hideTech;>
{   
    pass
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_AuroraWaterReflection;
        RenderTarget = AuroraWaterReflectionBuffer;
    }
    pass
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_FinalWaterReflection;
    }
}

technique NveAurora < ui_label = "NaturalVision Evolved: Volumetric Aurora"; hidden=hideTech;>
{   
    pass p0
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_EdgeMask;

        RenderTarget = RenderTargetFullMask;

    }
    pass p1
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_EdgeMaskGrow;

        RenderTarget = RenderTargetFullMaskGrow;

    }
    
	pass p2
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_Aurora;

        RenderTarget = RenderTarget512;

    }
    pass p3
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_AuroraTAA;

        RenderTarget = RenderTarget512_2;

    }
    pass p4
    {
        VertexShader = PostProcessVS;
		PixelShader = PS_AuroraFillGap;

        RenderTarget = RenderTargetFull;
    } 
    
    pass p5
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_FinalDraw;

        RenderTarget = RenderTargetFull2;
    }
    pass p6
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_Final;
    }
}


technique NveAuroraHD < ui_label = "NaturalVision Evolved: Volumetric Aurora HD"; hidden=hideTech;>
{   
    pass p0
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_EdgeMask;

        RenderTarget = RenderTargetFullMask;

    }
    pass p1
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_EdgeMaskGrow;

        RenderTarget = RenderTargetFullMaskGrow;

    }
    
	pass p2
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_Aurora;

        RenderTarget = RenderTarget1024;

    }
    pass p3
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_AuroraTAAHD;

        RenderTarget = RenderTarget1024_2;

    }
    pass p4
    {
        VertexShader = PostProcessVS;
		PixelShader = PS_AuroraFillGap;

        RenderTarget = RenderTargetFull;
    } 
    
    pass p5
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_FinalDrawHD;

        RenderTarget = RenderTargetFull2;
    }
    pass p6
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_Final;
    }
}

technique NveAuroraFull < ui_label = "NaturalVision Evolved: Volumetric Aurora FULL"; hidden=hideTech;>
{   
	pass p0
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_Aurora;

        RenderTarget = RenderTargetFull;

    }
    pass p1
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_AuroraTAAFull;

        RenderTarget = RenderTargetFull2;

    }   
    pass p2
	{
		VertexShader = PostProcessVS;
		PixelShader = PS_Final;
    }
}