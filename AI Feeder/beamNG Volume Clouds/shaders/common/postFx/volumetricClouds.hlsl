#include "volumetricClouds.h.hlsl"

#ifdef SHADER_STAGE_VS
	#define mainV main
#else 
	#define mainP main 
#endif

// If you change these settings, make sure you preserve any decimal points where necessary (*.0)!
// Cloud settings
#define cloudDistance 66000 // 66000
#define atmosphereRadius 6370000 // 6370000
#define atmosphereThickness 8800 // 8800
#define cloudHeight 1500 // 1500
#define verticalSteps 128 // 128
#define horizontalSteps 256 // 256
#define densityEpsilon 0.001 // 0.001
#define cloudHardness 0.5 // 0.5 - Lower values are less performant!
#define shadowSteps 6.0 // 6.0 (0 - 6) - Higher values are less performant! Keep the decimal (*.0)!
#define fogSamples 6.0 // 6.0 - Higher values are less performant! Keep the decimal (*.0)!

// Performance settings
#define dither false // false

// Image settings
#define detailImageResolution 216 // one-sided resolution of the atlas
#define detailImageGridResolution 36 // one-sided resolution of each atlas chunk
#define detailImageRows 6 // how many atlas chunks there are per side
#define detailImagePadding 2 // how much padding in pixels to reduce edge artifacts

#define baseShapeImageResolution 1728 // one-sided resolution of the atlas
#define baseShapeImageGridResolution 144 // one-sided resolution of each atlas chunk
#define baseShapeImageRows 12 // how many atlas chunks there are per side
#define baseShapeImagePadding 2 // how much padding in pixels to reduce edge artifacts

// Pre-calculated constant for 1 / (4 * PI)
#define ONE_OVER_FOUR_PI 0.0795

// Dear BeamNG Developer(s)
// If you're seeing this, well, I'm glad. I was hoping some of you would
// take a peek. I've been working on this for quite a while now, and
// even had to write a separate specialized application to generate the
// noise atlases. If you would like, you can reach me on Discord,
// my handle is chipboard
//
// ~ Chipboard

// Note: When combining noise layers in Paint.Net, combine the RGB before you mask A

//-----------------------------------------------------------------------------
// Utility Functions
//-----------------------------------------------------------------------------

float remap(float value, float original_min, float original_max, float new_min, float new_max)
{
    return new_min + (((value - original_min) / (original_max - original_min)) * (new_max - new_min));
}

float remapClamped(float value, float oldMin, float oldMax, float newMin, float newMax)
{
    return clamp(newMin + (((value - oldMin) / (oldMax - oldMin)) * (newMax - newMin)), newMin, newMax);
}

float getRelativeHeight(float3 pt, float thickness)
{
    return clamp(length(pt) / thickness, 0.0, 1.0);
}

float henyeyGreenstein(float cos_angle, float eccentricity)
{
    float g2 = eccentricity * eccentricity;
    float denominator = pow(1.0 + g2 - 2.0 * eccentricity * cos_angle, 1.5);
    float hg = (1.0 - g2) / denominator;
    return hg * ONE_OVER_FOUR_PI;
}

float2 WrapCoordinate(float2 coord, float2 bounds)
{
    return coord - bounds * floor(coord / bounds);
}

float3 Desaturate(float3 color, float amount)
{
    float luminance = dot(color.rgb, float3(0.3, 0.59, 0.11));
    float3 desaturatedColor = lerp(color.rgb, float3(luminance, luminance, luminance), amount);
    return desaturatedColor;
}

//-----------------------------------------------------------------------------
// Sampling Functions
//-----------------------------------------------------------------------------

float3 sampleCloudDetail_LQ(float3 p)
{
    // Calculate the grid position (cell) and the offset within the cell
    float2 cellPosMid = float2(floor(p.z % detailImageRows), floor(p.z / detailImageRows)) * detailImageGridResolution;

    float2 samplePos = float2(
        remap(p.x, 0, detailImageGridResolution, detailImagePadding, detailImageGridResolution - detailImagePadding),
        remap(p.y, 0, detailImageGridResolution, detailImagePadding, detailImageGridResolution - detailImagePadding)
        );

    float2 sampleUVMid = (cellPosMid + samplePos) / detailImageResolution;
    float3 textureMid = cloudDetail.SampleLevel(cloudSampler, sampleUVMid, 0);

    return textureMid;
}

float3 sampleCloudDetail(float3 p)
{
    // Calculate the grid position (cell) and the offset within the cell
    float2 cellPosMid = float2(floor(p.z % detailImageRows), floor(p.z / detailImageRows)) * detailImageGridResolution;

    float2 samplePos = float2(
        remap(p.x, 0, detailImageGridResolution, detailImagePadding, detailImageGridResolution - detailImagePadding),
        remap(p.y, 0, detailImageGridResolution, detailImagePadding, detailImageGridResolution - detailImagePadding)
        );

    float2 sampleUVMid = (cellPosMid + samplePos) / detailImageResolution;
    float3 textureMid = cloudDetail.SampleLevel(cloudSampler, WrapCoordinate(sampleUVMid, 1.0), 0);

    // Z-INTERPOLATION (EXPENSIVE!)
    float2 cellPosTop = float2(floor((p.z + 1) % detailImageRows), floor((p.z + 1) / detailImageRows)) * detailImageGridResolution;
    float2 cellPosBottom = float2(floor((p.z - 1) % detailImageRows), floor((p.z - 1) / detailImageRows)) * detailImageGridResolution;

    // Calculate the texture coordinates within the 2D texture
    float2 sampleUVTop = (cellPosTop + samplePos) / detailImageResolution;
    float2 sampleUVBottom = (cellPosBottom + samplePos) / detailImageResolution;

    float3 textureTop = cloudDetail.SampleLevel(cloudSampler, WrapCoordinate(sampleUVTop, 1.0), 0);
    float3 textureBottom = cloudDetail.SampleLevel(cloudSampler, WrapCoordinate(sampleUVBottom, 1.0), 0);

    return lerp(textureMid, lerp(textureBottom, textureTop, frac(p.z)), 0.5);
}

float4 sampleCloudShape(float3 p)
{
    // Calculate the grid position (cell) and the offset within the cell
    float2 cellPosMid = float2(floor(p.z % baseShapeImageRows), floor(p.z / baseShapeImageRows)) * baseShapeImageGridResolution;

    float2 samplePos = float2(
        remap(p.x, 0, baseShapeImageGridResolution, baseShapeImagePadding, baseShapeImageGridResolution - baseShapeImagePadding),
        remap(p.y, 0, baseShapeImageGridResolution, baseShapeImagePadding, baseShapeImageGridResolution - baseShapeImagePadding)
        );

    float2 sampleUVMid = (cellPosMid + samplePos) / baseShapeImageResolution;
    float4 textureMid = cloudShape.SampleLevel(cloudSampler, WrapCoordinate(sampleUVMid, 1.0), 0);

    // Z-INTERPOLATION (EXPENSIVE!)
    float2 cellPosTop = float2(floor((p.z + 1) % baseShapeImageRows), floor((p.z + 1) / baseShapeImageRows)) * baseShapeImageGridResolution;
    float2 cellPosBottom = float2(floor((p.z - 1) % baseShapeImageRows), floor((p.z - 1) / baseShapeImageRows)) * baseShapeImageGridResolution;

    // Calculate the texture coordinates within the 2D texture
    float2 sampleUVTop = (cellPosTop + samplePos) / baseShapeImageResolution;
    float2 sampleUVBottom = (cellPosBottom + samplePos) / baseShapeImageResolution;

    float4 textureTop = cloudShape.SampleLevel(cloudSampler, WrapCoordinate(sampleUVTop, 1.0), 0);
    float4 textureBottom = cloudShape.SampleLevel(cloudSampler, WrapCoordinate(sampleUVBottom, 1.0), 0);

    return lerp(textureMid, lerp(textureBottom, textureTop, frac(p.z)), 0.5);
}

// taper factors should be positive (0-1), more taper with larger number
float bar(float y, float barBottom, float barTop, float bottomTaperFactor, float topTaperFactor)
{
    // Calculate distances from the edges
    float distFromBottom = y - barBottom;
    float distFromTop = barTop - y;

    // Compute the value based on taper
    float bottomTaper = saturate(distFromBottom / bottomTaperFactor);
    float topTaper = saturate(distFromTop / topTaperFactor);

    return min(bottomTaper, topTaper);
}

// TODO: this layer stuff is all broken
float cloudLayerDensity(float relativeHeight, float weatherFactor)
{
    /*float cumulus = max(0.0, remap(relativeHeight, 0.0, 0.2, 0.0, 1.0) * remap(relativeHeight, 0.7, 0.9, 1.0, 0.0));
    float stratocumulus = max(0.0, remap(relativeHeight, 0.0, 0.2, 0.0, 1.0) * remap(relativeHeight, 0.2, 0.7, 1.0, 0.0)); 
    float stratus = max(0.0, remap(relativeHeight, 0.0, 0.1, 0.0, 1.0) * remap(relativeHeight, 0.2, 0.3, 1.0, 0.0)); 

    float d1 = lerp(stratus, stratocumulus, clamp(weatherFactor * 2.0, 0.0, 1.0));
    float d2 = lerp(stratocumulus, cumulus, clamp((weatherFactor - 0.5) * 2.0, 0.0, 1.0));
    return lerp(d1, d2, weatherFactor);*/

    float bottom = 0.4 - (weatherFactor * 0.5);
    float top = 0.5 + (weatherFactor * 0.5);
    return bar(relativeHeight, bottom, top, 0.15, weatherFactor);

    //return densityGradients.SampleLevel(cloudSampler, float2(weatherFactor, 1.0 - relativeHeight), 0).g;
}

float sampleCloudHull(float3 p, float relativeHeight, float2 texOffset0, float2 texOffset1, float coverage)
{
    float3 cloudSampleCoord = p * 0.002;
    //cloudSampleCoord.xy += texOffset0;

    //float weatherDetail = densityGradients.SampleLevel(cloudSampler, p.xy * 0.00001, 0).r; // weather variation
    float weatherDetail = 0.9;
    float4 lowFreqNoise = sampleCloudShape(cloudSampleCoord);

    // If BeamNG ever includes 3D texture sampling, we would be able to afford scrolling these individually. Til' then, no, because 1 sample = 3 in this case...
    float lowFreqFBM = (lowFreqNoise.g * 0.625)
                    + (lowFreqNoise.b * 0.25)
                    + (lowFreqNoise.a * 0.125);

    if(lowFreqFBM < densityEpsilon)
        return 0;
    
    float baseCloudDensity = remap(lowFreqNoise.r, -(1.0 - lowFreqFBM), 1.0, 0.0, 1.0); // red defines cloud shape

    //float baseCloudDensity = lowFreqNoise.r; // red defines cloud shape

    // Get cloud gradient from weather detail
    float heightGradient = cloudLayerDensity(relativeHeight, (weatherDetail + coverage) * 0.5);
    //return heightGradient;
    
    float cloudWithCoverage = remap(baseCloudDensity, 1.0 - (coverage * heightGradient), 1.0, 0.0, 1.0);
    cloudWithCoverage *= coverage /* * relativeHeight*/;

    return cloudWithCoverage;
}

float blendCloudDetail(float3 p, float distanceFromCamera, float origDensity, float relativeHeight, float2 texOffset1, float2 texOffset2)
{
    //float scaleFactor = (3.0 - (coverage * 4.0));
    //p = abs(p * scaleFactor);
    //p.xy += texOffset1;

    float3 detail;
    
    float3 sampleCoord = p * 0.025;

    // green and blue channels are scrolling high-frequency detail
    detail = sampleCloudDetail(sampleCoord); // TODO: Maybe use LQ version at distance, so far doesn't change much

    float highFBM = (detail.r * 0.625) +
                    (detail.g * 0.25) +
                    (detail.b * 0.125);
    
    // Transition from whisps to billows over height
    highFBM = lerp(highFBM, 1.0 - highFBM, saturate(relativeHeight * 10.0));

    return remap(origDensity, highFBM * 0.2, 1.0, 0.0, 1.0);
}

//-----------------------------------------------------------------------------
// Marching Functions
//-----------------------------------------------------------------------------

float distanceToSphereHull(float3 rayPos, float3 rayDir, float3 center, float radius)
{
    float3 offset = rayPos - center;
    float b = 2.0 * dot(rayDir, offset);
    float c = dot(offset, offset) - (radius * radius);

    float discriminant = b * b - 4.0 * c;

    if (discriminant < 0.0) {
        return -1.0;
    }

    float sqrtDiscriminant = sqrt(discriminant);
    float t1 = (-b - sqrtDiscriminant) / 2.0;
    float t2 = (-b + sqrtDiscriminant) / 2.0;

    if (t1 >= 0.0) {
        return t1;
    } else if (t2 >= 0.0) {
        return t2;
    } else {
        return -1.0;
    }
}

float getRelativeHeight(float3 rayPos, float3 atmosphereCenter)
{
    float rayLen = length(rayPos - atmosphereCenter);
    float distanceFromInnerHull = rayLen - atmosphereRadius;
    return distanceFromInnerHull / atmosphereThickness;
}

float4 clouds(float worldDepth, float3 rayPos, float3 rayDir, float3 lightDir, float coverage, float blueNoiseSample, float2 texOffset0, float2 texOffset1, float2 texOffset2)
{
    rayPos.xy += texOffset0;

    float3 camPos = rayPos;
    float3 atmosphereCenter = float3(rayPos.x, rayPos.y, cloudHeight - atmosphereRadius);

    // Trace the cloud hull
    float distanceToInner = distanceToSphereHull(rayPos, rayDir, atmosphereCenter, atmosphereRadius);
    float distanceToOuter = distanceToSphereHull(rayPos, rayDir, atmosphereCenter, atmosphereRadius + atmosphereThickness);

    if(distanceToInner == -1 && distanceToOuter == -1)
        return float4(0, 0, 0, 0);

    float nearestPoint;
    float farthestPoint = max(distanceToInner, distanceToOuter);
    float travelDistance;

    if(distanceToInner > -1 && distanceToOuter > -1) // Both visible
    {
        float height = getRelativeHeight(rayPos, atmosphereCenter);

        if(height > 0.0 && height < 1.0) // Inside hull
        {
            nearestPoint = min(distanceToInner, distanceToOuter);
            travelDistance = min(nearestPoint, cloudDistance);
        }
        else // Not inside hull
        {
            // We're not going to see anything as we're looking down from within the hull, return
            if(length(rayPos - atmosphereCenter) < atmosphereRadius && rayDir.z < 0)
                return float4(0, 0, 0, 0);

            nearestPoint = min(distanceToInner, distanceToOuter);
            rayPos += rayDir * nearestPoint; // Move raypos since we have another layer to reach after this (we're marching through the hull from one side to the other)
            travelDistance = min(distance(rayPos, farthestPoint), cloudDistance);
        }
    }
    else // One visible
    {
        if(distanceToInner > -1)
            nearestPoint = distanceToInner;
        else if(distanceToOuter > -1)
            nearestPoint = distanceToOuter;

        travelDistance = nearestPoint;
    }

    travelDistance = min(travelDistance, cloudDistance);

    // Accumulate fog along ray to atmosphere. TODO: Only do this INSIDE the atmosphere hull! We don't have fog in outer space!!
    float fogAccuum = 0.0;
    float3 lastSamplePos = camPos;
    [unroll]
    for(int i = 0; i < fogSamples; i++)
    {
        float3 samplePos = lerp(camPos, rayPos, i / fogSamples);

        float fogSample = saturate(computeSceneFog(
            lastSamplePos,
            samplePos,
            camPos.z,
            fogData.x,
            fogData.y,
            fogData.z));

        fogAccuum += fogSample;

        lastSamplePos = samplePos;
    }

    fogAccuum /= fogSamples;

    fogAccuum = remap(saturate(fogAccuum * 1.1f), 0.15, 1.0, 0.0, 1.0);

    if(fogAccuum < 0.025)
        return float4(0, 0, 0, 0);

    float daylightFactorDirect = dot(lightDir, float3(0, 0, 1)); // This is 1.0 at night due to how beamng handles "moonlight", so we have to do extra trickery elsewhere.
    float daylightFactorSunset = saturate(daylightFactorDirect * 32);
    float sunDot = dot(rayDir, lightDir);
    float sunDotClamped = max(0.0, sunDot);

    // Henyey-GreenStein
    float hg = max(henyeyGreenstein(sunDotClamped, 0.7), 1.25 * henyeyGreenstein(sunDotClamped, 0.2));
    //hg = 1.0 + hg;

    // Stepping variables
    float accumDensity = 0.0;
    float transmittance = 1.0;

    float maxSteps = lerp(horizontalSteps, verticalSteps, abs(dot(rayDir, float3(0, 0, 1))));
    float largeStepSize = cloudDistance / maxSteps;
    float smallStepSize = largeStepSize * 0.15;
    float stepSize = largeStepSize;
    bool largeMarch = true;
    float originalLargeStepSize = largeStepSize;

    if(sampleCloudHull(rayPos, getRelativeHeight(rayPos, atmosphereCenter), texOffset0, texOffset1, coverage) > densityEpsilon)
    {
        bool largeMarch = false;
        stepSize = smallStepSize;
    }

    //float3 noisePos = rayPos + rayDir;
    //noisePos.xy += texOffset0;
    float noise = /*getNoise(noisePos)*/ blueNoiseSample * ((largeStepSize * 0.5) - 0.5);
    rayPos += rayDir * noise;

    float3 samples[6] = {
        lightDir + float3(0, 0.6, 0),
        lightDir + float3(0, 0.5, 0.05),
        lightDir + float3(0.1, 0.75, 0),
        lightDir + float3(0.2, 2.5, 0.3),
        lightDir + float3(0, 6, 0),
        lightDir + float3(-0.1, 1, -0.2)
    };

    int steps = 0;
    int misses = 0;
    float totalDistance = distance(rayPos, camPos);
    
    // Scattering in RGB, transmission in A
    float4 intScattTrans = float4(0, 0, 0, 1);

    float3 sunColorNormalized = normalize(sunColor);
    float3 ambientColorNormalized = normalize(ambientColor);

    float daylightFactorMult2Sat = saturate(daylightFactorDirect * 2);
    float lightIntensity = (daylightFactorSunset * min(cloudExposure, 1.7) * 1.25) * saturate(length(sunColor) * 2.0); // Higher sun = brighter exposure, min of sunColor because of how beamng handles night
    float3 sunsetColor = lerp(float3(0.969, 0.878, 1), sunColorNormalized, hg + remap(sunDot, -1, 1, 0.0, (daylightFactorSunset * 1.15) - (hg * 0.8))); // Vivid sunset, color changes along sunset
    float3 lightColor = lerp(sunsetColor, float3(0.98, 0.98, 1.0), daylightFactorMult2Sat); // Lower sun = more saturated colors // TODO: Make less colorized when cloud is occluding sun
    float3 ambientColorModified = lerp(Desaturate(ambientColorNormalized, 1.0 - daylightFactorMult2Sat), normalize(float3(0.96, 0.98, 1.0)), daylightFactorMult2Sat);

    for(float t = 0; t < travelDistance; t += stepSize)
    {
        rayPos += stepSize * rayDir;
        totalDistance += stepSize;

        if(totalDistance > worldDepth || totalDistance > cloudDistance)
            break;
        
        float relativeHeight = getRelativeHeight(rayPos, atmosphereCenter);

        if(relativeHeight < 0.0 || relativeHeight > 1.0)
            break;
    
        float density = sampleCloudHull(rayPos, relativeHeight, texOffset0, texOffset1, coverage);
        
        if(density > densityEpsilon)
        {
            misses = 0;
            if(largeMarch)
            {
                // backstep
                t -= stepSize;
                totalDistance -= stepSize;
                rayPos -= stepSize * rayDir;

                // switch to detail march
                largeMarch = false;
                stepSize = smallStepSize;
            }

            float originalDensity = density;
            density = blendCloudDetail(rayPos - float3(texOffset1, 0), totalDistance, originalDensity, relativeHeight, texOffset1, texOffset2);

            if (density < densityEpsilon)
                continue;

            float densityAlongLight = 0.0;
            
            // Sample light propogation for Beer's law in a cone towards the light
            for (int s = 0; s < shadowSteps; s++)
            {
                float3 lightSamplePos = rayPos + ((12.0 + s) * lerp(smallStepSize, largeStepSize, s / shadowSteps) * samples[s]);
                float lightSampleHeight = getRelativeHeight(lightSamplePos, atmosphereCenter);
                float lightSampleDensity = sampleCloudHull(lightSamplePos, lightSampleHeight, texOffset0, texOffset1, coverage);

                if (lightSampleDensity > densityEpsilon)
                {
                    //lightSampleDensity = blendCloudDetail(lightSamplePos, totalDistance, lightSampleDensity, lightSampleHeight, texOffset1, texOffset2);
                    densityAlongLight += lightSampleDensity;
                }
            }

            densityAlongLight /= shadowSteps;
            
            float beerTerm = exp(-densityAlongLight * 2.0);
            float inscatterTerm = 1.0 - exp(-3.0 * densityAlongLight);
            float lightEnergy = 2.0 * (beerTerm * inscatterTerm);

            //transmittance = lerp(transmittance, lightEnergy, 1.0 - accumDensity);

            //accumDensity += density;

            float transmittance = exp(-density * stepSize * cloudHardness);

            const float powderIntensity = 0.35;
            const float powderAdditive = 1.0 - powderIntensity;
            float powderEffect = powderAdditive + (intScattTrans.a * powderIntensity);

            float shadowFactor = 1.0 - densityAlongLight;

            float henyeyFactor = (hg * pow(saturate(1.0 - (densityAlongLight * 16.0)), 8.0)) * (shadowFactor * 2.0);

            // Get the luminance for the current ray position
            float3 luminance = lerp(ambientColorModified, normalize(lightColor), saturate(max(relativeHeight * 4.0, henyeyFactor) * pow(shadowFactor, 4))) * (1.0 - lightEnergy) * lightIntensity * (1.0 + henyeyFactor) * powderEffect;

            // Integrate scattering
            float3 integScatt = luminance - (luminance * transmittance);
            intScattTrans.rgb += integScatt * intScattTrans.a;
            intScattTrans.a *= transmittance;

            // Opaque check
            if (intScattTrans.a < 0.003)
            {
                intScattTrans.a = 0.0;
                break;
            }

            /*if(accumDensity > 0.99)
            {
                accumDensity = 1.0;
                break;
            }*/
        } else {
            misses++;

            if(misses > 6)
            {
                largeMarch = true;
                stepSize = largeStepSize;
            }
        }

        if (++steps > maxSteps)
            break;
    }

    /*accumDensity *= 1.0 - pow(totalDistance / cloudDistance, 4);
    
    float4 cloudColor;

    float lightIntensity = daylightFactorSunset * min(cloudExposure, 1.65); // Higher sun = brighter exposure
    float3 lightColor = lerp(normalize(sunColor), float3(1.0, 1.0, 1.025), saturate(daylightFactorDirect * 2)); // Lower sun = more saturated colors // TODO: Make less colorized when cloud is occluding sun
    float3 finalColor = lerp(lightColor, (ambientColor + lightColor) * (0.3 - (pow(coverage * accumDensity, 3.0) * 0.1)), transmittance) * lightIntensity; // Blend between dark ambient and light with density

    return float4(finalColor.rgb, accumDensity);*/

    //intScattTrans.rgb = lerp(intScattTrans.rgb, fogColor, fogFactor);

    return float4(pow(intScattTrans.rgb, 2.0), pow((1.0 - intScattTrans.a), 6.0) * (1.0 - pow(totalDistance / cloudDistance, 4)) * fogAccuum);
}

//-----------------------------------------------------------------------------
// Entry
//-----------------------------------------------------------------------------

float4 mainP(PFXVertToPix IN) : SV_Target
{
    float2 uv = IN.uv0;

    float2 pixel = uv * screenResolution * 0.9999;
    
#if dither
    float roundedFrame = round(frame);
    if(fmod(round(pixel.x), 2.0) == fmod(roundedFrame, 2.0) && fmod(round(pixel.y), 2.0) == fmod(roundedFrame, 2.0))
        return float4(0, 0, 0, 0); // Reduce computation by dithering (doesn't seem worth the visual sacrifice?)
#endif

    //return float4(weatherGradient.SampleLevel(cloudSampler,  uv, 0), 0, 0, 1);

    //float3 sceneColor = tex2D(backBuffer, uv).rgb;

    if(cloudCoverage <= 0)
        return float4(0.0, 0.0, 0.0, 0.0);
    
    // prepass x y z are normal, w is depth
    float4 prepass =  decodeGBuffer(prepassDepthTex, prepassTex, IN.uv0, projParams);
    float3 worldPos = eyePosWorld + IN.wsEyeRay * prepass.w;

    float sceneDepth = distance(eyePosWorld, worldPos);
    
    float3 rayPos = eyePosWorld;
    float3 rayDir = normalize(IN.wsEyeRay);

    //return float4(lightDirection, 1.0);
    //return float4(cloudCoverage, cloudCoverage, 0, cloudCoverage);

    float coverage = remapClamped(cloudCoverage, 0.0, 5.0, 0.33, 1.0);
    //float coverage = cloudCoverage;
    
    // Volumetric fog
    // TODO: Morning fog is stronger
    // TODO: blend with sun and fog color
    // use henyey-greenstein to blend fog between sun color and fog color!
    /*float a = 0;
    float stepSize = 1.0;
    float4 fogColor = float4(0, 0, 0, 0);
    for(float t = 0; t < 128; t += stepSize)
    {
        //float dist = (length(rayPos - float3(0, 0, 100))-100.0);
        float sample = texture2D_3D(rayPos * 0.5).r * coverage * 0.33 * stepSize;

        if(sample > 0.0)
        {
            float4 diffuse;
            float4 specular;

            // TODO: figure out why this function gives us nothing??
            compute4Lights(rayDir, rayPos, prepass.rgb, float4(1, 1, 1, 1), diffuse, specular);
            fogColor += lerp(fogColor, diffuse, 1.0 - a);
            a += sample;
        }

        if(a > 1.0)
        {
            a = 1.0;
            break;
        }

        if(t > sceneDepth)
            break;
            
        rayPos += rayDir * stepSize;
    }
    
    return lerp(tex2D(backBuffer, uv), float4(saturate(fogColor.rgb), 1.0), a);*/
    

    // Texture offsets
    float2 offset0 = windOffset + float2(1234,-1321);
    float2 offset1 = windOffset + float2(-1234,1155);
    float2 offset2 = windOffset + float2(1457,-1663);

    //return float4(sin(offset0.x), sin(offset0.y), 0, 1.0);

    if(sceneDepth >= farPlane)
        sceneDepth = 1000000;

    float blueNoiseSample = blueNoise.Sample(cloudSampler, WrapCoordinate(pixel / 512.0, 1.0));
    //return float4(blueNoiseSample, blueNoiseSample, blueNoiseSample, 1.0);

    float4 cloudColor = clouds(sceneDepth, rayPos, rayDir, -lightDirection, coverage, blueNoiseSample, offset0 * 113, offset1 * 100, offset2 * 115);

    //float4 resultColor = float4(lerp(sceneColor, cloudColor.xyz, cloudColor.a), 1.0f);
    //resultColor.a = 1.0f;

    return cloudColor;
    //return float4(sceneDepth, sceneDepth, sceneDepth, 1.0);
}

PFXVertToPix mainV(PFXVert IN)
{
   return processPostFxVert(IN);
}
