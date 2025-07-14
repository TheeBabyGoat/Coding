#pragma once

#define hide true
#define hideDebug true
#define hideTech false

uniform float depthFill < ui_type = "slider";ui_min = 0.0f;ui_max = 1.0f; hidden=hide;> = 1.0f;

uniform int qualityPreset <
    ui_type = "combo";
    ui_category = "Global Settings";
    ui_label = "Quality Preset";
    ui_items = "Very Low\0Low\0Medium\0High\0Ultra\0";
    ui_tooltip = "Choose a quality preset for the clouds";
> = 2;
uniform float cloudRenderDistance <
    string ui_category = "Global Settings";
    string ui_type = "drag";
    float ui_min = 10.0;
    float ui_max = 100000.0;
    float ui_step = 10.0;
> = 10000.0;
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
uniform float cloudMoonLightPower <
    string ui_category = "Advanced Global Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.01;
    float ui_max = 8.0;
    float ui_step = 0.01;
> = 0.3;
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
uniform float cloudDepthEdgeFar <
    string ui_category = "Depth Settings";
    string ui_label = "Depth Edge Far";
    string ui_tooltip = "Controls the far distance for depth edge detection.";
    string ui_type = "drag";
    float ui_min = 1.0;
    float ui_max = 10000.0;
    float ui_step = 1.0;
> = 100.0;
uniform float cloudDepthEdgeThreshold <
    string ui_category = "Depth Settings";
    string ui_label = "Depth Edge Threshold";
    string ui_tooltip = "Controls the threshold for depth edge detection.";
    string ui_type = "drag";
    float ui_min = 1.0;
    float ui_max = 100.0;
    float ui_step = 0.1;
> = 30.0;

uniform float edgeMaskSize <
    string ui_category = "Depth Settings";
    string ui_label = "Edge Mask Size";
    string ui_tooltip = "Controls the size of the edge mask.";
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 10.0;
    float ui_step = 0.1;
> = 1.5;

uniform float edgeMaskSizeFill <
    string ui_category = "Depth Settings";
    string ui_label = "Edge Mask Size Fill";
    string ui_tooltip = "Controls the size of the edge mask fill.";
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 10.0;
    float ui_step = 0.1;
> = 2.0;

uniform float edgeFirstSize <
    string ui_category = "Depth Settings";
    string ui_label = "Edge First Size";
    string ui_tooltip = "Controls the size of the first edge detection pass.";
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 10.0;
    float ui_step = 0.1;
> = 2.0;

uniform float auroraScale <
    string ui_category = "Aurora Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.01;
    float ui_max = 8.0;
    float ui_step = 0.01;
> = 4.5;
uniform float auroraDistortion <
    string ui_category = "Aurora Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.00;
    float ui_max = 1.0;
> = 0.035;
uniform float auroraCurlScale <
    string ui_category = "Aurora Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 2.0;
    float ui_step = 0.01;
> = 0.25;
uniform float auroraCurl <
    string ui_category = "Aurora Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 4.0;
    float ui_step = 0.01;
> = 0.5;
uniform int auroraVolumeSamples <
    string ui_category = "Global Settings";
    string ui_type = "slider";
    int ui_min = 8;
    int ui_max = 128;
> = 128;
uniform float auroraHeightOffset <
    string ui_category = "Aurora Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.00;
    float ui_max = 10000.0;
> = 1000.0;
uniform float auroraHeight <
    string ui_category = "Aurora Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.00;
    float ui_max = 10000.0;
> = 2000.0;
uniform float auroraTimeScale <
    string ui_category = "Aurora Settings";
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 20.0;
    float ui_step = 0.1;
> = 5.0;
uniform float auroraBrightness <
    string ui_category = "Aurora Settings";
    string ui_type = "drag";
    float ui_min = 0.0;
    float ui_max = 2.0;
    float ui_step = 0.01;
> = 0.12;
uniform float4 auroraBaseColor <
    string ui_category = "Aurora Settings";
    bool hidden = !ADVANCED;
    string ui_type = "color";
    float ui_min = 0.00;
    float ui_max = 10.0;
> = float4(0.0, 1.0, 0.17, 2.0);
uniform float4 auroraMidColor <
    string ui_category = "Aurora Settings";
    bool hidden = !ADVANCED;
    string ui_type = "color";
    float ui_min = 0.00;
    float ui_max = 10.0;
> = float4(0.32, 0.27, 0.7, 0.1);
uniform float4 auroraTopColor <
    string ui_category = "Aurora Settings";
    bool hidden = !ADVANCED;
    string ui_type = "color";
    float ui_min = 0.00;
    float ui_max = 10.0;
> = float4(0.5, 0.2, 1.0, 0.5);
uniform float2 auroraBlendPoints <
    string ui_category = "Aurora Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.00;
    float ui_max = 1.0;
> = float2(0.1, 0.35);
uniform float2 auroraRemap <
    string ui_category = "Aurora Settings";
    bool hidden = !ADVANCED;
    string ui_type = "drag";
    float ui_min = 0.00;
    float ui_max = 2.0;
> = float2(0.85, 1.5);
