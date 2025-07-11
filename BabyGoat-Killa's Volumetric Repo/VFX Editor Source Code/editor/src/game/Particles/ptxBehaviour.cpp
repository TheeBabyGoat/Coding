#include "ParticlesUi.h"
#include "ptxBehaviour.h"

void rage::ptxBehaviour::UiWidgets(size_t EntryIdx)
{
    if (ImGui::TreeNode(vfmt("{}## {}", GetName(), EntryIdx)))
    {
        ImGui::Text("Order : %i", GetOrder());

        switch (static_cast<DerivedType>(m_hashName))
        {
        case DerivedType::ptxd_Model:
        {
            ptxd_Model* ptxdModel = reinterpret_cast<ptxd_Model*>(this);

            ImGui::InputInt(vfmt("Colour Control Shader Id##{}", next_num()), (int*)&ptxdModel->m_colourControlShaderId);
            ImGui::DragFloat(vfmt("Camera Shrink##{}", next_num()), &ptxdModel->m_cameraShrink);
            ImGui::DragFloat(vfmt("Shadow Cast Intensity##{}", next_num()), &ptxdModel->m_shadowCastIntensity);
            ImGui::Checkbox(vfmt("Disable Draw##{}", next_num()), &ptxdModel->m_disableDraw);

            break;
        }
        case DerivedType::ptxu_Acceleration:
        {
            ptxu_Acceleration* ptxuAcceleration = reinterpret_cast<ptxu_Acceleration*>(this);

            ptxKeyframePropTreeNode(ptxuAcceleration->m_xyzMinKFP, "Acceleration Min", EntryIdx, PTX_KF_FLOAT3, "MIN X", "MIN Y", "MIN Z");
            ptxKeyframePropTreeNode(ptxuAcceleration->m_xyzMaxKFP, "Acceleration Max", EntryIdx, PTX_KF_FLOAT3, "MAX X", "MAX Y", "MAX Z");

            ImGui::InputInt(vfmt("Reference Space##{}", next_num()), &ptxuAcceleration->m_referenceSpace);
            ImGui::Checkbox(vfmt("Is Affected By Zoom##{}", next_num()), &ptxuAcceleration->m_isAffectedByZoom);
            ImGui::Checkbox(vfmt("Enable Gravity##{}", next_num()), &ptxuAcceleration->m_enableGravity);

            break;
        }
        case DerivedType::ptxd_Sprite:
        {
            ptxd_Sprite* ptxdSprite = reinterpret_cast<ptxd_Sprite*>(this);
 
            ImGui::DragFloat3(vfmt("Align Axis##{}", next_num()), (float*)&ptxdSprite->m_alignAxis);
            ImGui::InputInt(vfmt("Align Mode##{}", next_num()), &ptxdSprite->m_alignmentMode);

            ImGui::DragFloat(vfmt("Flip Chance U##{}", next_num()), &ptxdSprite->m_flipChanceU);
            ImGui::DragFloat(vfmt("Flip Chance V##{}", next_num()), &ptxdSprite->m_flipChanceV);

            ImGui::DragFloat(vfmt("Near Clip Distance##{}", next_num()), &ptxdSprite->m_nearClipDist);
            ImGui::DragFloat(vfmt("Far Clip Distance##{}", next_num()), &ptxdSprite->m_farClipDist);

            ImGui::DragFloat(vfmt("Projection Depth##{}", next_num()), &ptxdSprite->m_projectionDepth);
            ImGui::DragFloat(vfmt("Shadow Cast Intensity##{}", next_num()), &ptxdSprite->m_shadowCastIntensity);

            ImGui::Checkbox(vfmt("Is Screen Space##{}", next_num()), &ptxdSprite->m_isScreenSpace);
            ImGui::Checkbox(vfmt("Is Hi Res##{}", next_num()), &ptxdSprite->m_isHiRes);
            ImGui::Checkbox(vfmt("Near Clip##{}", next_num()), &ptxdSprite->m_nearClip);
            ImGui::Checkbox(vfmt("Far Clip##{}", next_num()), &ptxdSprite->m_farClip);
            ImGui::Checkbox(vfmt("UV Clip##{}", next_num()), &ptxdSprite->m_uvClip);

            break;
        }
        case DerivedType::ptxd_Trail:
        {
            ptxd_Trail* ptxdTrail = reinterpret_cast<ptxd_Trail*>(this);
 
            ptxKeyframePropTreeNode(ptxdTrail->m_texInfoKFP, "Texture Info", EntryIdx, PTX_KF_FLOAT4, "Wrap Length Min", "Wrap Length Max", "Offset Min", "Offset Max");

            ImGui::DragFloat3(vfmt("Align Axis##{}", next_num()), (float*)&ptxdTrail->m_alignAxis);
            ImGui::InputInt(vfmt("Align Mode##{}", next_num()), &ptxdTrail->m_alignmentMode);

            ImGui::DragInt2(vfmt("TessellationUV##{}", next_num()), (int*)&ptxdTrail->m_tessellationU);

            ImGui::DragFloat2(vfmt("SmoothnessXY##{}", next_num()), (float*)&ptxdTrail->m_smoothnessX);

            ImGui::DragFloat(vfmt("Projection Depth##{}", next_num()), &ptxdTrail->m_projectionDepth);
            ImGui::DragFloat(vfmt("Shadow Cast Intensity##{}", next_num()), &ptxdTrail->m_shadowCastIntensity);

            ImGui::Checkbox(vfmt("Flip U##{}", next_num()), &ptxdTrail->m_flipU);
            ImGui::Checkbox(vfmt("Flip V##{}", next_num()), &ptxdTrail->m_flipV);
            ImGui::Checkbox(vfmt("Wrap Texture Over Particle Life##{}", next_num()), &ptxdTrail->m_wrapTextureOverParticleLife);
            ImGui::Checkbox(vfmt("Disable Draw##{}", next_num()), &ptxdTrail->m_disableDraw);

            break;
        }
        case DerivedType::ptxu_Age:
        {
            ptxu_Age* ptxuAge = reinterpret_cast<ptxu_Age*>(this);

            break;
        }
        case DerivedType::ptxu_AnimateTexture:
        {
            ptxu_AnimateTexture* ptxuAnimateTexture = reinterpret_cast<ptxu_AnimateTexture*>(this);
            ptxu_AnimateTexture& ref = (*ptxuAnimateTexture);

            ptxKeyframePropTreeNode(ref.m_animRateKFP, "Anim Rate", EntryIdx, PTX_KF_FLOAT2, "MIN FPS", "MAX FPS");

            ImGui::InputInt(vfmt("Keyframe Mode##{}", next_num()), &ref.m_keyframeMode);
            ImGui::InputInt(vfmt("Last Frame Id##{}", next_num()), &ref.m_lastFrameId);
            ImGui::InputInt(vfmt("Loop Mode##{}", next_num()), &ref.m_loopMode);

            ImGui::Checkbox(vfmt("Is Randomised##{}", next_num()), &ref.m_isRandomised);
            ImGui::Checkbox(vfmt("Is Scaled Over Particle Life##{}", next_num()), &ref.m_isScaledOverParticleLife);
            ImGui::Checkbox(vfmt("Is Held On Last Frame##{}", next_num()), &ref.m_isHeldOnLastFrame);
            ImGui::Checkbox(vfmt("Do Frame Blending##{}", next_num()), &ref.m_doFrameBlending);

            break;
        }
        case DerivedType::ptxu_Attractor:
        {
            ptxu_Attractor* ptxuAttractor = reinterpret_cast<ptxu_Attractor*>(this);
            ptxu_Attractor& ref = (*ptxuAttractor);

            ptxKeyframePropTreeNode(ref.m_strengthKFP, "Strength", EntryIdx, PTX_KF_FLOAT2, "MIN", "MAX");

            break;
        }
        case DerivedType::ptxu_Collision:
        {
            ptxu_Collision* ptxuCollision = reinterpret_cast<ptxu_Collision*>(this);
            ptxu_Collision& ref = (*ptxuCollision);

            ptxKeyframePropTreeNode(ref.m_bouncinessKFP, "Bounce Factor", EntryIdx, PTX_KF_FLOAT2, "Percent Min", "Percent Max");
            ptxKeyframePropTreeNode(ref.m_bounceDirVarKFP, "Bounce Direction Variance", EntryIdx, PTX_KF_FLOAT4, "Rotation Min", "Rotation Max", "Elevation Min", "Elevation Max");

            ImGui::DragFloat(vfmt("Radius Mult##{}", next_num()), &ref.m_radiusMult);
            ImGui::DragFloat(vfmt("Rest Speed##{}", next_num()), &ref.m_restSpeed);

            ImGui::DragInt(vfmt("Collision Chance##{}", next_num()), &ref.m_colnChance);
            ImGui::DragInt(vfmt("Kill Chance##{}", next_num()), &ref.m_killChance);

            ImGui::Checkbox(vfmt("Debug Draw##{}", next_num()), &ref.m_debugDraw);

            ImGui::DragFloat(vfmt("Override Min Radius##{}", next_num()), &ref.m_overrideMinRadius);

            break;
        }
        case DerivedType::ptxu_Colour:
        {
            ptxu_Colour* ptxuColour = reinterpret_cast<ptxu_Colour*>(this);
            ptxu_Colour& ref = (*ptxuColour);

            ptxKeyframePropTreeNode(ref.m_rgbaMinKFP, "RGBA Min", EntryIdx, PTX_KF_COL4);
            ptxKeyframePropTreeNode(ref.m_rgbaMaxKFP, "RGBA Max", EntryIdx, PTX_KF_COL4);
            ptxKeyframePropTreeNode(ref.m_emissiveIntensityKFP, "Emissive Intensity", EntryIdx, PTX_KF_FLOAT2, "MIN", "MAX");

            ImGui::InputInt(vfmt("Keyframe Mode##{}", next_num()), &ref.m_keyframeMode);

            ImGui::Checkbox(vfmt("RGBA Max Enable##{}", next_num()), &ref.m_rgbaMaxEnable);
            ImGui::Checkbox(vfmt("RGBA Proportional##{}", next_num()), &ref.m_rgbaProportional);
            ImGui::Checkbox(vfmt("RGB Can Tint##{}", next_num()), &ref.m_rgbCanTint);

            break;
        }
        case DerivedType::ptxu_MatrixWeight:
        {
            ptxu_MatrixWeight* ptxuMatrixWeight = reinterpret_cast<ptxu_MatrixWeight*>(this);
            ptxu_MatrixWeight& ref = (*ptxuMatrixWeight);

            ptxKeyframePropTreeNode(ref.m_mtxWeightKFP, "Matrix Weight", EntryIdx, PTX_KF_FLOAT2, "MIN", "MAX");
            ImGui::InputInt(vfmt("Reference Space##{}", next_num()), &ref.m_referenceSpace);

            break;
        }
        case DerivedType::ptxu_Noise:
        {
            ptxu_Noise* ptxuNoise = reinterpret_cast<ptxu_Noise*>(this);
            auto& ref = (*ptxuNoise);

            ptxKeyframePropTreeNode(ref.m_posNoiseMinKFP, "Position Noise Min", EntryIdx, PTX_KF_FLOAT3, "Min X", "Min Y", "Min Z");
            ptxKeyframePropTreeNode(ref.m_posNoiseMaxKFP, "Position Noise Max", EntryIdx, PTX_KF_FLOAT3, "Max X", "Max Y", "Max Z");
            ptxKeyframePropTreeNode(ref.m_velNoiseMinKFP, "Velocity Noise Min", EntryIdx, PTX_KF_FLOAT3, "Min X", "Min Y", "Min Z");
            ptxKeyframePropTreeNode(ref.m_posNoiseMaxKFP, "Velocity Noise Max", EntryIdx, PTX_KF_FLOAT3, "Max X", "Max Y", "Max Z");

            ImGui::InputInt(vfmt("Reference Space##{}", next_num()), &ref.m_referenceSpace);
            ImGui::Checkbox(vfmt("Keep Constant Speed##{}", next_num()), &ref.m_keepConstantSpeed);

            break;
        }
        case DerivedType::ptxu_Pause:
        {
            ptxu_Pause* ptxuPause = reinterpret_cast<ptxu_Pause*>(this);
            ptxu_Pause& ref = (*ptxuPause);

            ImGui::DragFloat(vfmt("Pause Life Ratio##{}", next_num()), &ref.m_pauseLifeRatio);
            ImGui::DragFloat(vfmt("Unpause Time##{}", next_num()), &ref.m_unpauseTime);
            ImGui::DragFloat(vfmt("Unpause Effect Dist##{}", next_num()), &ref.m_unpauseEffectDist);
            ImGui::DragFloat(vfmt("Unpause Cam Dist##{}", next_num()), &ref.m_unpauseCamDist);

            break;
        }
        case DerivedType::ptxu_Rotation:
        {
            ptxu_Rotation* ptxuRotation = reinterpret_cast<ptxu_Rotation*>(this);
            ptxu_Rotation& ref = (*ptxuRotation);

            ptxKeyframePropTreeNode(ref.m_initialAngleMinKFP, "Initial Angle Min", EntryIdx, PTX_KF_FLOAT3, "X", "Y", "Z");
            ptxKeyframePropTreeNode(ref.m_initialAngleMaxKFP, "Initial Angle Max", EntryIdx, PTX_KF_FLOAT3, "X", "Y", "Z");

            ptxKeyframePropTreeNode(ref.m_angleMinKFP, "Angle Min", EntryIdx, PTX_KF_FLOAT3, "X", "Y", "Z");
            ptxKeyframePropTreeNode(ref.m_angleMaxKFP, "Angle Max", EntryIdx, PTX_KF_FLOAT3, "X", "Y", "Z");

            ImGui::InputInt(vfmt("Init Rotation Mode##{}", next_num()), &ref.m_initRotationMode);
            ImGui::InputInt(vfmt("Update Rotation Mode##{}", next_num()), &ref.m_updateRotationMode);

            ImGui::Checkbox(vfmt("Accumulate Angle##{}", next_num()), &ref.m_accumulateAngle);
            ImGui::Checkbox(vfmt("Rotate Angle Axes##{}", next_num()), &ref.m_rotateAngleAxes);
            ImGui::Checkbox(vfmt("Rotate Init Angle Axes##{}", next_num()), &ref.m_rotateInitAngleAxes);

            ImGui::DragFloat(vfmt("Speed Fade Threshold##{}", next_num()), &ref.m_speedFadeThresh);

            break;
        }
        case DerivedType::ptxu_Size:
        {
            ptxu_Size* ptxuSize = reinterpret_cast<ptxu_Size*>(this);
            ptxu_Size& ref = (*ptxuSize);

            ptxKeyframePropTreeNode(ref.m_whdMinKFP, "WHD Min", EntryIdx, PTX_KF_FLOAT3, "Width Min", "Height Min", "Depth Min");
            ptxKeyframePropTreeNode(ref.m_whdMaxKFP, "WHD Max", EntryIdx, PTX_KF_FLOAT3, "Width Max", "Height Max", "Depth Max");

            ptxKeyframePropTreeNode(ref.m_tblrScalarKFP, "TBLR Scalar", EntryIdx, PTX_KF_FLOAT4, "Top", "Bottom", "Left", "Right");
            ptxKeyframePropTreeNode(ref.m_tblrVelScalarKFP, "TBLR Velocity Scalar", EntryIdx, PTX_KF_FLOAT4, "Top", "Bottom", "Left", "Right");

            ImGui::InputInt(vfmt("Keyframe Mode##{}", next_num()), &ref.m_keyframeMode);
            ImGui::Checkbox(vfmt("Is Proportional##{}", next_num()), &ref.m_isProportional);

            break;
        }
        case DerivedType::ptxu_Velocity:
        {
            ptxu_Velocity* ptxuVelocity = reinterpret_cast<ptxu_Velocity*>(this);
            break;
        }
        case DerivedType::ptxu_Wind:
        {
            ptxu_Wind* ptxuWind = reinterpret_cast<ptxu_Wind*>(this);
            ptxu_Wind& ref = (*ptxuWind);

            ptxKeyframePropTreeNode(ref.m_influenceKFP, "Wind Influence", EntryIdx, PTX_KF_FLOAT2, "MIN", "MAX");

            ImGui::DragFloat(vfmt("High LOD Range##{}", next_num()), &ref.m_highLodRange);
            ImGui::DragFloat(vfmt("Low LOD Range##{}", next_num()), &ref.m_lowLodRange);

            ImGui::InputInt(vfmt("High LOD Disturbance Mode##{}", next_num()), &ref.m_highLodDisturbanceMode);
            ImGui::InputInt(vfmt("Low LOD Disturbance Mode##{}", next_num()), &ref.m_lowLodDisturbanceMode);
            ImGui::Checkbox(vfmt("Ignore Matrix Weight##{}", next_num()), &ref.m_ignoreMtxWeight);

            break;
        }
        case DerivedType::ptxu_Decal:
        {
            ptxu_Decal* ptxuDecal = reinterpret_cast<ptxu_Decal*>(this);
            ptxu_Decal& ref = (*ptxuDecal);

            ptxKeyframePropTreeNode(ref.m_dimensionsKFP, "Dimensions", EntryIdx, PTX_KF_FLOAT4, "Width Min", "Width Max", "Height Min", "Height Max");
            ptxKeyframePropTreeNode(ref.m_alphaKFP, "Alpha (Not Used)", EntryIdx, PTX_KF_FLOAT2, "Alpha Min", "Alpha Max");

            ImGui::InputInt(vfmt("Decal Id##{}", next_num()), &ref.m_decalId);
            ImGui::DragFloat(vfmt("Velocity Threshold##{}", next_num()), &ref.m_velocityThresh);
            ImGui::DragFloat(vfmt("Total Life##{}", next_num()), &ref.m_totalLife);
            ImGui::DragFloat(vfmt("Fade In Time##{}", next_num()), &ref.m_fadeInTime);
            ImGui::DragFloat(vfmt("UV Mult Start##{}", next_num()), &ref.m_uvMultStart);
            ImGui::DragFloat(vfmt("UV Mult End##{}", next_num()), &ref.m_uvMultEnd);
            ImGui::DragFloat(vfmt("UV Mult Time##{}", next_num()), &ref.m_uvMultTime);
            ImGui::DragFloat(vfmt("Duplicate Reject Dist##{}", next_num()), &ref.m_duplicateRejectDist);

            ImGui::Checkbox(vfmt("Flip U##{}", next_num()), &ref.m_flipU);
            ImGui::Checkbox(vfmt("Flip V##{}", next_num()), &ref.m_flipV);
            ImGui::Checkbox(vfmt("Proportional Size##{}", next_num()), &ref.m_proportionalSize);
            ImGui::Checkbox(vfmt("Use Complex Collision##{}", next_num()), &ref.m_useComplexColn);

            ImGui::DragFloat(vfmt("Projection Depth##{}", next_num()), &ref.m_projectionDepth);
            ImGui::DragFloat(vfmt("Distance Scale##{}", next_num()), &ref.m_distanceScale);

            ImGui::Checkbox(vfmt("Is Directional##{}", next_num()), &ref.m_isDirectional);

            break;
        }
        case DerivedType::ptxu_DecalPool:
        {
            ptxu_DecalPool* ptxuDecalPool = reinterpret_cast<ptxu_DecalPool*>(this);
            ptxu_DecalPool& ref = (*ptxuDecalPool);

            ImGui::DragFloat(vfmt("Velocity Threshold##{}", next_num()), &ref.m_velocityThresh);
            ImGui::InputInt(vfmt("Liquid Type##{}", next_num()), &ref.m_liquidType);
            ImGui::InputInt(vfmt("Decal Id##{}", next_num()), &ref.m_decalId);
            ImGui::DragFloat(vfmt("Start Size##{}", next_num()), &ref.m_startSize);
            ImGui::DragFloat(vfmt("End Size##{}", next_num()), &ref.m_endSize);
            ImGui::DragFloat(vfmt("Growth Rate##{}", next_num()), &ref.m_growthRate);

            break;
        }
        case DerivedType::ptxu_FogVolume:
        {
            ptxu_FogVolume* ptxuFogVolume = reinterpret_cast<ptxu_FogVolume*>(this);
            ptxu_FogVolume& ref = (*ptxuFogVolume);

            ptxKeyframePropTreeNode(ref.m_rgbTintMinKFP, "RGB Tint Min", EntryIdx, PTX_KF_COL3);
            ptxKeyframePropTreeNode(ref.m_rgbTintMaxKFP, "RGB Tint Max", EntryIdx, PTX_KF_COL3);

            ptxKeyframePropTreeNode(ref.m_densityRangeKFP, "Density/Range", EntryIdx, PTX_KF_FLOAT4, "Density Min", "Density Max", "Range Min", "Range Max");
            ptxKeyframePropTreeNode(ref.m_scaleMinKFP, "Scale Min", EntryIdx, PTX_KF_FLOAT3, "X", "Y", "Z");
            ptxKeyframePropTreeNode(ref.m_scaleMaxKFP, "Scale Max", EntryIdx, PTX_KF_FLOAT3, "X", "Y", "Z");

            ptxKeyframePropTreeNode(ref.m_rotationMinKFP, "Rotation Min", EntryIdx, PTX_KF_FLOAT3, "X", "Y", "Z");
            ptxKeyframePropTreeNode(ref.m_rotationMaxKFP, "Rotation Max", EntryIdx, PTX_KF_FLOAT3, "X", "Y", "Z");

            ImGui::DragFloat(vfmt("Falloff##{}", next_num()), &ref.m_falloff);
            ImGui::DragFloat(vfmt("HDR Mult##{}", next_num()), &ref.m_hdrMult);
            ImGui::InputInt(vfmt("Lighting Type##{}", next_num()), &ref.m_lightingType);

            ImGui::Checkbox(vfmt("Colour Tint From Particle##{}", next_num()), &ref.m_colourTintFromParticle);
            ImGui::Checkbox(vfmt("Sort With Particles##{}", next_num()), &ref.m_sortWithParticles);
            ImGui::Checkbox(vfmt("Use Ground Fog Colour##{}", next_num()), &ref.m_useGroundFogColour);
            ImGui::Checkbox(vfmt("Use Effect Evo Values##{}", next_num()), &ref.m_useEffectEvoValues);

            break;
        }
        case DerivedType::ptxu_Light:
        {
            ptxu_Light* ptxuLight = reinterpret_cast<ptxu_Light*>(this);
            ptxu_Light& ref = (*ptxuLight);

            ptxKeyframePropTreeNode(ref.m_rgbMinKFP, "Light RGB Min", EntryIdx, PTX_KF_COL3);
            ptxKeyframePropTreeNode(ref.m_rgbMaxKFP, "Light RGB Max", EntryIdx, PTX_KF_COL3);

            ptxKeyframePropTreeNode(ref.m_intensityKFP, "Light Intensity", EntryIdx, PTX_KF_FLOAT4, "Intensity Min", "Intensity Max", "Falloff Min", "Falloff Max");
            ptxKeyframePropTreeNode(ref.m_rangeKFP, "Light Range", EntryIdx, PTX_KF_FLOAT4, "Range Min", "Range Max", "Angle Min", "Angle Max");

            ptxKeyframePropTreeNode(ref.m_coronaRgbMinKFP, "Corona RGB Min", EntryIdx, PTX_KF_COL3);
            ptxKeyframePropTreeNode(ref.m_coronaRgbMaxKFP, "Corona RGB Max", EntryIdx, PTX_KF_COL3);

            ptxKeyframePropTreeNode(ref.m_coronaIntensityKFP, "Corona Intensity", EntryIdx, PTX_KF_FLOAT2, "MIN", "MAX");
            ptxKeyframePropTreeNode(ref.m_coronaSizeKFP, "Corona Size", EntryIdx, PTX_KF_FLOAT2, "MIN", "MAX");
            ptxKeyframePropTreeNode(ref.m_coronaFlareKFP, "Corona Flare", EntryIdx, PTX_KF_FLOAT2, "MIN", "MAX");

            ImGui::DragFloat(vfmt("Corona Z Bias##{}", next_num()), &ref.m_coronaZBias);
            ImGui::Checkbox(vfmt("Corona Use Light Colour##{}", next_num()), &ref.m_coronaUseLightCol);

            ImGui::Checkbox(vfmt("Colour From Particle##{}", next_num()), &ref.m_colourFromParticle);
            ImGui::Checkbox(vfmt("Colour Per Frame##{}", next_num()), &ref.m_colourPerFrame);
            ImGui::Checkbox(vfmt("Intensity Per Frame##{}", next_num()), &ref.m_intensityPerFrame);
            ImGui::Checkbox(vfmt("Range Per Frame##{}", next_num()), &ref.m_rangePerFrame);
            ImGui::Checkbox(vfmt("Casts Shadows##{}", next_num()), &ref.m_castsShadows);
            ImGui::Checkbox(vfmt("Corona Not In Reflection##{}", next_num()), &ref.m_coronaNotInReflection);
            ImGui::Checkbox(vfmt("Corona Only In Reflection##{}", next_num()), &ref.m_coronaOnlyInReflection);

            ImGui::InputInt(vfmt("Light Type##{}", next_num()), &ref.m_lightType);

            break;
        }
        case DerivedType::ptxu_Liquid:
        {
            ptxu_Liquid* ptxuLiquid = reinterpret_cast<ptxu_Liquid*>(this);
            ptxu_Liquid& ref = (*ptxuLiquid);

            ImGui::DragFloat(vfmt("Velocity Threshold##{}", next_num()), &ref.m_velocityThresh);
            ImGui::InputInt(vfmt("Liquid Type##{}", next_num()), &ref.m_liquidType);
            ImGui::DragFloat(vfmt("Pool Start Size##{}", next_num()), &ref.m_poolStartSize);
            ImGui::DragFloat(vfmt("Pool End Size##{}", next_num()), &ref.m_poolEndSize);
            ImGui::DragFloat(vfmt("Pool Growth Rate##{}", next_num()), &ref.m_poolGrowthRate);
            ImGui::DragFloat(vfmt("Trail Width Min##{}", next_num()), &ref.m_trailWidthMin);
            ImGui::DragFloat(vfmt("Trail Width Max##{}", next_num()), &ref.m_trailWidthMax);

            break;
        }
        case DerivedType::ptxu_River:
        {
            ptxu_River* ptxuRiver = reinterpret_cast<ptxu_River*>(this);
            ptxu_River& ref = (*ptxuRiver);

            ImGui::DragFloat(vfmt("Velocity Mult##{}", next_num()), &ref.m_velocityMult);
            ImGui::DragFloat(vfmt("Influence##{}", next_num()), &ref.m_influence);

            break;
        }
        case DerivedType::ptxu_ZCull:
        {
            ptxu_ZCull* ptxuZCull = reinterpret_cast<ptxu_ZCull*>(this);
            ptxu_ZCull& ref = (*ptxuZCull);

            ptxKeyframePropTreeNode(ref.m_heightKFP, "Height", EntryIdx, PTX_KF_FLOAT2, "MIN", "MAX");
            ptxKeyframePropTreeNode(ref.m_fadeDistKFP, "Fade Distance", EntryIdx, PTX_KF_FLOAT2, "MIN", "MAX");

            ImGui::InputInt(vfmt("Mode##{}", next_num()), &ref.m_mode);
            ImGui::InputInt(vfmt("Reference Space##{}", next_num()), &ref.m_referenceSpace);

            break;
        }
        case DerivedType::ptxu_Dampening:
        {
            ptxu_Dampening* ptxuDampening = reinterpret_cast<ptxu_Dampening*>(this);
            ptxu_Dampening& ref = (*ptxuDampening);

            ptxKeyframePropTreeNode(ref.m_xyzMinKFP, "XYZ Min", EntryIdx, PTX_KF_FLOAT3, "X", "Y", "Z");
            ptxKeyframePropTreeNode(ref.m_xyzMaxKFP, "XYZ Max", EntryIdx, PTX_KF_FLOAT3, "X", "Y", "Z");

            ImGui::InputInt(vfmt("Reference Space##{}", next_num()), &ref.m_referenceSpace);
            ImGui::Checkbox(vfmt("Enable Air Resistance##{}", next_num()), &ref.m_enableAirResistance);

            break;
        }
        default:
            ImGui::Text("Unknown Behaviour");
            break;

        }

        ImGui::TreePop();
    }
}