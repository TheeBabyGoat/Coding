//#define RSDEV // Uncomment when developing

#include "ReShade.fxh"
#include "PulseV/noise.fxh"

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

typedef Texture3D texture3D;
typedef texture storage3D;

void tex3Dstore(storage3D a, uint3 b, float4 c)
{
}
#endif


/**
 * Uniforms provided by addon
 **/

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
uniform float4 inputProjectionMatrix1 <
    string source = "projection_matrix__r1";
>;
uniform float4 inputProjectionMatrix2 <
    string source = "projection_matrix__r2";
>;
uniform float4 inputProjectionMatrix3 <
    string source = "projection_matrix__r3";
>;
uniform float4 inputProjectionMatrix4 <
    string source = "projection_matrix__r4";
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


/**
 * User-editable uniforms
 **/

uniform float nearPlane <
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 100.0;
    float ui_step = 0.005;
> = 0.075;

uniform float farPlane <
    string ui_type = "drag";
    float ui_min = 1.0;
    float ui_max = 100000.0;
    float ui_step = 10.0;
> = 1000.0;

uniform float depthNear <
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 100.0;
    float ui_step = 0.005;
> = 0.075;

uniform float depthFar <
    string ui_type = "drag";
    float ui_min = 1.0;
    float ui_max = 100000.0;
    float ui_step = 10.0;
> = 1000.0;

uniform float depthMultiplier <
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 100.0;
    float ui_step = 0.05;
> = 1.0;

uniform float depthMin <
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 100000.0;
    float ui_step = 0.05;
> = 1.0;
uniform float depthMax <
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 2.0;
    float ui_step = 0.05;
> = 1.0;
uniform float depthAdjust <
    string ui_type = "drag";
    float ui_min = -1.0;
    float ui_max = 1.0;
    float ui_step = 0.05;
> = 0.0;

uniform float alpha <
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 1.0;
    float ui_step = 0.05;
> = 0.5;

uniform float3 sceneOrigin <
    string ui_type = "drag";
    float ui_min = -5000.0;
    float ui_max = 5000.0;
> = float3(0.0, 500.0, 0.0);

static const int MAX_STEPS = 100;

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

float4x4 projectionMatrix()
{
    return float4x4(
        inputProjectionMatrix1,
        inputProjectionMatrix2,
        inputProjectionMatrix3,
        inputProjectionMatrix4
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

    return float3(inverseView._14, inverseView._34, inverseView._24); // GTA Y is Reshade Z
}

Ray cameraRay(float2 uv)
{
    Ray ray;

    ray.origin = worldPosition();
    ray.direction = worldDirection(uv);

    return ray;
}

float sdfBox(float3 position, float3 extents)
{
    float3 q = abs(position) - extents;
    
    return length(max(q, 0.0)) + min(max(q.x, max(q.y, q.z)), 0.0);
}

float sdfSphere(float3 position, float radius)
{
    return length(position) - radius;
}

float raymarchSceneDepth(float2 uv)
{
    const float far = inputFarClip;
    const float near = inputNearClip;
    
    Ray ray = cameraRay(uv);
    
    float t = 0.0;
    
    float3 pos = ray.origin;
	
    for (int i = 0; i < MAX_STEPS; i++)
    {
        float longCuboid = sdfBox(pos - sceneOrigin, float3(5.0, 5.0, 500.0));
        float sCube = sdfBox(pos - sceneOrigin - float3(-200.0, 0.0, -200.0), 25.0);
        float mCube = sdfBox(pos - sceneOrigin - float3(-200.0, 0.0, 0.0), 50.0);
        float lCube = sdfBox(pos - sceneOrigin - float3(-200.0, 0.0, 300.0), 100.0);
        float sphere = sdfSphere(pos - sceneOrigin - float3(200.0, 0.0, 0.0), 50.0);

        float sdfUnion = min(longCuboid, sCube);
        sdfUnion = min(sdfUnion, mCube);
        sdfUnion = min(sdfUnion, lCube);
        sdfUnion = min(sdfUnion, sphere);
        
        t += sdfUnion;
        pos += sdfUnion * ray.direction;
        
        if (t < near || t > far)
        {
            return far;
        }
    }
    
    float4 depth = mul(float4(pos - ray.origin, 1.0), viewMatrix()).z;
    
    return depth;
}

float getDepth(float2 uv)
{
    const float far = inputFarClip;
    const float near = inputNearClip;
    
    float depth = tex2Dlod(ReShade::DepthBuffer, float4(uv, 0.0, 0.0)).r;
    
    depth = 1.0 - depth;
    depth = near * far / (far + depth * (near - far));
    
    return depth;
}

float3 depthPreview(float depth)
{
    const float far = inputFarClip;
    const float near = inputNearClip;
    const float range = far - near;
    const float invRange = 1.0 / range;
    
    return frac(depth * invRange * 100.0);
}

float4 Render(float4 fragcoord: SV_Position, float2 uv: TexCoord): SV_Target
{
    float4 screen = tex2D(ReShade::BackBuffer, uv);
    float4 depth = float4(depthPreview(getDepth(uv)), 1.0);
    float4 scene = float4(depthPreview(raymarchSceneDepth(uv)), 1.0);
    
    return lerp(scene, uv.x > 0.5 ? depth : scene, alpha);
}

technique PulseV_DepthFinder <
    string ui_label = "PulseV - DEPTH FINDER";
    bool enabled = false;
>
{
    pass
    {
        VertexShader = PostProcessVS;
        PixelShader = Render;
    }
}