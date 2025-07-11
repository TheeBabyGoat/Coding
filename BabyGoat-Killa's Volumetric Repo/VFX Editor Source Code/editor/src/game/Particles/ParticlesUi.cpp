#include "ParticlesUi.h"
#include <ranges>


#include "helpers/helpers.h"
#include "uiBase/ImguiHelpers.h"

void grcInstanceVarWidgets(rage::grcInstanceVar& v);
void ShaderWidgets(rage::grcInstanceData& shader, size_t entry_idx, size_t shader_idx);

using namespace rage;
static float v_speed = 0.01f;

template<size_t bits_count, class Type>
Type BitsetWidgets(atFixedBitSet<bits_count, Type> bitset, std::array<const char*, bits_count> names)
{
	for (size_t i = 0; i < bitset.size(); i++)
	{
		bool flag = bitset.test(i);
		if (ImGui::Checkbox(vfmt("{} ## {} {}", names[i], i, next_num()), &flag))
		{
			bitset.set(i, flag);
		}
	}
	return static_cast<Type>(bitset);
}


//	TODO:
//	1. ui - drawable models -> 3/4 days
//	2. Correct adding/deleting : 
//		1 - ptxEffectRule -> ptxTimeLine (3 days) , another (1/2 days)
//		2 - ptxEmitterRule -> ptxDomain (3 days), another (1/2 day)
//		3 - ptxParticleRule -> ptxBehaviour (4 days), ptxPointPool (2/3 days)
//		4 - grcTexture ->  (1 day)
//		5 - rmcDrawable -> ?
// 
//	3. paging system
//


ParticlesUi::ParticlesUi(const char* title) : App(title)
{
	ptr = *gmAddress::Scan("48 8B 0D ?? ?? ?? ?? 8B D3 E8 ?? ?? ?? ?? 48 8B 0D ?? ?? ?? ?? 8B D6").GetRef(3).To<PtxMngr**>();
	scrInvoke([]
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET("core");
			while (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("core")) {};
		});

	LogInfo("PtxMngr : {:X}", u64(ptr));
}

#define ImguiDragInt_FromDiffType(_label, _TempVarName, _Value) \
	{ \
		int _TempVarName = _Value; \
		if (ImGui::DragInt(_label, &_TempVarName, 0.1f)) \
		{ \
			_Value = _TempVarName; \
		} \
	} \

#define ImguiInputInt_FromDiffType(_label, _Value) \
	{ \
		int _TempVar = _Value; \
		if (ImGui::InputInt(_label, &_TempVar)) \
		{ \
			_Value = _TempVar;\
		}\
	}\



#define SEARCH_DEF1(_InputTextLabel)\
\
	static char search_name_buff[0x100]{};\
	ImGui::InputText(_InputTextLabel, search_name_buff, std::size(search_name_buff));\
	size_t input_len = strlen(search_name_buff);\
	static bool show_everything = true;\
\
	if (input_len == 0)\
	{\
		show_everything = true;\
	}\
	else\
	{\
		show_everything = false;\
	}\

namespace details
{
	bool __SEARCH_DEF2_fn(const char* name, const char* search_name_buff, bool show_everything)
	{
		bool tree_node_should_be_shown = false;
		if (show_everything)
		{
			tree_node_should_be_shown = true;
		}
		else
		{
			std::string_view entry_name(name);
			entry_name.find(search_name_buff) == -1 ? tree_node_should_be_shown = false : tree_node_should_be_shown = true;
		}
		return tree_node_should_be_shown;
	}
}
#define SEARCH_DEF2(_name) ( details::__SEARCH_DEF2_fn(_name,search_name_buff,show_everything) )


void ParticlesUi::window()
{
	static char buff[255] = "proj_flare_trail";
	static char buff2[255] = "core";
	static ::Vector3 pos1{};

	static float scale = 1.0f;
	static int particle_handle = -1;

	static bool spawned = false;

	next_num(true);	//reset for this frame


	ImGui::InputText("Buff", buff, std::size(buff));
	ImGui::InputText("ptfx asset next call", buff2, std::size(buff2));

	if (ImGui::Button("GetPlayerPos"))
	{
		scrInvoke([] { pos1 = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false); });
	}

	ImGui::Text(vfmt("x:{} y:{} z:{}", pos1.x, pos1.y, pos1.z));
	ImGui::Text("Handle id : %i", particle_handle);

	if (ImGui::Button("SpawnParticle"))
	{
		scrInvoke([]
			{
				GRAPHICS::_SET_PTFX_ASSET_NEXT_CALL(buff2);
				particle_handle = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(
					buff, 
					pos1.x, pos1.y, pos1.z,
					0.0f, 0.0f, 0.0f, 
					scale, 
					false, false, false, 
					true);
			});
	}

	if (ImGui::DragFloat("Scale", &scale, 0.01f))
	{
		scrInvoke([] { GRAPHICS::SET_PARTICLE_FX_LOOPED_SCALE(particle_handle, scale); });
	}
	

	if (ImGui::Button("Delete"))
	{
		scrInvoke([]
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(particle_handle, true);
				particle_handle = -1;
			}
		);
	}

	size_t index = 0;
	for (auto& node : ptr->m_fxListMap)
	{
		auto& it = node.value;


		if (ImGui::CollapsingHeader(it.m_pFxList->name))
		{
			ImGui::Text(vfmt("FxList flags: {:032b}", it.m_flags));

			atFixedBitSet<32, u32> flags = it.m_flags;

			if (flags.test(0)) ImGui::Text("FXLISTFLAG_SHAREABLE");
			if (flags.test(1)) ImGui::Text("FXLISTFLAG_NONSHAREABLE");
			if (flags.test(2)) ImGui::Text("FXLISTFLAG_RESOURCED");
			if (flags.test(3)) ImGui::Text("FXLISTFLAG_NONRESOURCED");
			if (flags.test(4)) ImGui::Text("FXLISTFLAG_LOOSE");
			if (flags.test(5)) ImGui::Text("FXLISTFLAG_NONLOOSE");
			if (flags.test(6)) ImGui::Text("FXLISTFLAG_UNDERCONSTRUCTION");
			if (flags.test(7)) ImGui::Text("FXLISTFLAG_NOTUNDERCONSTRUCTION");

			if (ImGui::TreeNode(vfmt("Effect rule dictionary##_{}", index)))
			{
				auto& entries = it.m_pFxList->ptxEffectRuleDictionary->m_Entries;
				auto& codes = it.m_pFxList->ptxEffectRuleDictionary->m_Codes;

				SEARCH_DEF1(vfmt("Search## EffectRule__{}", index))

				for (size_t i = 0; i < entries.size(); i++)
				{
					ptxEffectRule& entry = (*entries[i]);

					if (SEARCH_DEF2(entry.m_name))
					if (ImGui::TreeNode(vfmt("{}## EffectRule {}{}", entry.m_name, codes[i], i)))
					{
						ImGui::Text("file_version %f", entry.m_fileVersion);

						ImGui::DragInt(vfmt("Num Loops ##{}", next_num()),						&entry.m_numLoops, 0.1f);
						ImGui::Checkbox(vfmt("Sort Events By Distance##{}", next_num()),		&entry.m_sortEventsByDistance);
						ImguiDragInt_FromDiffType(vfmt("Draw List Id ##{}", next_num()), v1,	entry.m_drawListId);
						ImGui::Checkbox(vfmt("Is Short Lived##{}", next_num()),				&entry.m_isShortLived);
						ImGui::Checkbox(vfmt("Has No Shadows##{}", next_num()),				&entry.m_hasNoShadows);
						ImGui::DragFloat3(vfmt("vRandom Offset Pos##{}", next_num()),			(float*)&entry.m_vRandOffsetPos, v_speed);
						ImGui::DragFloat(vfmt("PreUpdate Time##{}", next_num()),				&entry.m_preUpdateTime, v_speed);
						ImGui::DragFloat(vfmt("PreUpdate Time Interval##{}", next_num()),		&entry.m_preUpdateTimeInterval, v_speed);
						ImGui::DragFloat(vfmt("Duration Min##{}", next_num()),					&entry.m_durationMin, v_speed);
						ImGui::DragFloat(vfmt("Duration Max##{}", next_num()),					&entry.m_durationMax, v_speed);
						ImGui::DragFloat(vfmt("Playback RateScalar Min##{}", next_num()),		&entry.m_playbackRateScalarMin, v_speed);
						ImGui::DragFloat(vfmt("Playback RateScalar Max##{}", next_num()),		&entry.m_playbackRateScalarMax, v_speed);

						ImguiDragInt_FromDiffType(vfmt("Viewport Culling Mode ##{}", next_num()), v2,	entry.m_viewportCullingMode);
						ImGui::Checkbox(vfmt("Render When Viewport Culled##{}", next_num()),			&entry.m_renderWhenViewportCulled);
						ImGui::Checkbox(vfmt("Update When Viewport Culled##{}", next_num()),			&entry.m_updateWhenViewportCulled);
						ImGui::Checkbox(vfmt("Emit When Viewport Culled##{}", next_num()),				&entry.m_emitWhenViewportCulled);
						ImguiDragInt_FromDiffType(vfmt("Distance Culling Mode ##{}", next_num()), v3,	entry.m_distanceCullingMode);

						ImGui::Checkbox(vfmt("Render When Distance Culled##{}", next_num()),			&entry.m_renderWhenDistanceCulled);
						ImGui::Checkbox(vfmt("Update When Distance Culled##{}", next_num()),			&entry.m_updateWhenDistanceCulled);
						ImGui::Checkbox(vfmt("Emit When Distance Culled##{}", next_num()),				&entry.m_emitWhenDistanceCulled);

						ImGui::DragFloat3(vfmt("Viewport Culling Sphere Offset##{}", next_num()),		(float*)&entry.m_viewportCullingSphereOffset, v_speed);
						ImGui::DragFloat(vfmt("Viewport Culling Sphere Radius##{}", next_num()),		&entry.m_viewportCullingSphereRadius, v_speed);
						ImGui::DragFloat(vfmt("Distance Culling Fade Dist##{}", next_num()),			&entry.m_distanceCullingFadeDist, v_speed);
						ImGui::DragFloat(vfmt("Distance Culling Cull Dist##{}", next_num()),			&entry.m_distanceCullingCullDist, v_speed);

						ImGui::DragFloat(vfmt("Lod Evo Distance Min##{}", next_num()),					&entry.m_lodEvoDistMin, v_speed);
						ImGui::DragFloat(vfmt("Lod Evo Distance Max##{}", next_num()),					&entry.m_lodEvoDistMax, v_speed);

						ImGui::DragFloat(vfmt("Collision Range##{}", next_num()),						&entry.m_colnRange, v_speed);
						ImGui::DragFloat(vfmt("Collision Probe Distance##{}", next_num()),				&entry.m_colnProbeDist, v_speed);

						{
							static std::array ColnTypes = 
							{
								"No Collision",
								"Ground Plane",
								"Ground Bound",
								"Nearby Bound",
								"Vehicle Plane",
								"Underwater Plane",
								"Ground Bounds"
							};

							int Temp_ColnType_Var = (int)entry.m_colnType;
							if (ImGui::Combo(vfmt("Collision Type##{}", next_num()), &Temp_ColnType_Var, ColnTypes.data(), ColnTypes.size()))
							{
								entry.m_colnType = (PtFxColnType)Temp_ColnType_Var;
							}
						
						}

						ImGui::Checkbox(vfmt("Share Entity Collisions##{}", next_num()), &entry.m_shareEntityColn);
						ImGui::Checkbox(vfmt("Only Use BVH Collisions##{}", next_num()), &entry.m_onlyUseBVHColn);

						
						if (ImGui::TreeNode(vfmt("Game Flags##{}", i)))
						{	
							entry.m_gameFlags = BitsetWidgets<8, u8>(entry.m_gameFlags, 
								{ 
									"Unknown1",
									"Unknown2",
									"Unknown3",
									"Unknown4",
									"Unknown5",
									"Unknown6",
									"Unknown7",
									"Unknown8"
								});

							ImGui::Text(vfmt("GameFlags bits : {:08b}", entry.m_gameFlags));
							ImGui::TreePop();
						}
						ImGui::Checkbox(vfmt("Colour Tint Max Enable##{}", next_num()),				&entry.m_colourTintMaxEnable);
						ImGui::Checkbox(vfmt("Use Data Volume##{}", next_num()),						&entry.m_useDataVolume);

						ImguiDragInt_FromDiffType(vfmt("Data Volume Type##{}", next_num()), v5,		entry.m_dataVolumeType);

						ImGui::Text("Num Active Instances : %i", entry.m_numActiveInstances);

						ImGui::DragFloat(vfmt("Zoom Level##{}", next_num()),							&entry.m_zoomableComponentScalar, v_speed);



						if (ImGui::TreeNode(vfmt("Time Line Events##{}", i)))
						{
							for (size_t event_idx = 0; event_idx < entry.m_timeline.m_events.size(); event_idx++)
							{
								auto& _event = entry.m_timeline.m_events[event_idx];

								if (ImGui::TreeNode(vfmt("Index : {}##{}", event_idx, i)))
								{
									switch (_event->m_type)
									{
									case PTXEVENT_TYPE_EMITTER:
									{
										ptxEventEmitter& EmitterEvent = static_cast<decltype(EmitterEvent)>(*_event.Get());

										ImGui::Text(vfmt("EmitterRule : {}", EmitterEvent.m_emitterRuleName));
										ImGui::Text(vfmt("ParticleRule : {}", EmitterEvent.m_particleRuleName));

										ImGui::DragFloat(vfmt("Start Ratio##{} ", next_num()),						&EmitterEvent.m_startRatio, v_speed);
										ImGui::DragFloat(vfmt("End Ratio##{} ", next_num()),						&EmitterEvent.m_endRatio, v_speed);
										ImGui::DragFloat(vfmt("Playback Rate Scalar Min##{} ", next_num()),		&EmitterEvent.m_playbackRateScalarMin, v_speed);
										ImGui::DragFloat(vfmt("Playback Rate Scalar Max##{} ", next_num()),		&EmitterEvent.m_playbackRateScalarMax, v_speed);
										ImGui::DragFloat(vfmt("Zoom Scalar Min##{} ", next_num()),					&EmitterEvent.m_zoomScalarMin, v_speed);
										ImGui::DragFloat(vfmt("Zoom Scalar Max##{} ", next_num()),					&EmitterEvent.m_zoomScalarMax, v_speed);

										ImGui::vColor32Edit4(vfmt("Colour Tint Min##{}", next_num()), EmitterEvent.m_colourTintMin, ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_AlphaBar);
										ImGui::vColor32Edit4(vfmt("Colour Tint Max##{}", next_num()), EmitterEvent.m_colourTintMax, ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_AlphaBar);

										if (ImGui::TreeNode(vfmt("Evolution List##{} {}", i, event_idx)))
										{
											auto* ptr = EmitterEvent.m_pEvolutionList.Get();
											if (ptr)
											{
												if (ImGui::TreeNode(vfmt("Evolutions##{} {}", i, event_idx)))
												{
													atArray<ptxEvolution>& EvolutionsArray = EmitterEvent.m_pEvolutionList.Get()->m_evolutions;

													for (size_t idx = 0; idx < EvolutionsArray.size(); idx++)
													{
														ptxEvolution& currEvolution = EvolutionsArray[idx];

														ImGui::Text(currEvolution.m_name);
														ImGui::DragFloat(vfmt("Override Value##{}", next_num()), &currEvolution.m_overrideValue, v_speed);
														ImGui::Checkbox(vfmt("Is Overriden##{}", next_num()), &currEvolution.m_isOverriden);

														ImGui::Separator();
													}

													ImGui::TreePop();
												}

												if (ImGui::TreeNode(vfmt("Evolved Keyframe Props##{} {}", i, event_idx)))
												{

													atArray<ptxEvolvedKeyframeProp>& EvolvedKeyframeProps = EmitterEvent.m_pEvolutionList.Get()->m_evolvedKeyframeProps;

													for (size_t evPropIdx = 0; evPropIdx < EvolvedKeyframeProps.size(); evPropIdx++)
													{
														if (ImGui::TreeNode(vfmt("Evolved Keyframe Prop: {}##{}", evPropIdx, i)))
														{
															ptxEvolvedKeyframeProp& CurrEvKfProp = EvolvedKeyframeProps[evPropIdx];

															ImguiInputInt_FromDiffType(vfmt("Blend Mode ##{}", next_num()), CurrEvKfProp.m_blendMode);


															for (size_t evoKfIdx = 0; evoKfIdx < CurrEvKfProp.m_evolvedKeyframes.size(); evoKfIdx++)
															{
																if (ImGui::TreeNode(vfmt("Evolved Keyframe: {} ## {} {}", evoKfIdx, i, evPropIdx)))
																{
																	ptxEvolvedKeyframe& currEvoKeyframe = CurrEvKfProp.m_evolvedKeyframes[evoKfIdx];

																	ImGui::InputInt(vfmt("EvolutionID ##{}", next_num()), &currEvoKeyframe.m_evolutionIdx);
																	ImGui::Checkbox(vfmt("Is Lod Evolution##{}", next_num()), &currEvoKeyframe.m_isLodEvolution);

																	ptxKeyframeTable(currEvoKeyframe.m_keyframe, PTX_KF_FLOAT4);

																	ImGui::TreePop();
																}
															}

															ImGui::TreePop();
														}
													}

													ImGui::TreePop();
												}
											}
											else
											{
												ImGui::Text("Evolution List -> nullptr");
											}
											ImGui::TreePop();
										}
									}
									break;

									default:
										break;
									}
									ImGui::TreePop();
								}
							}

							ImGui::TreePop();
						}

						if (ImGui::TreeNode(vfmt("Keyframe Props##_{}", i)))
						{
							ptxKeyframePropTreeNode(entry.m_colourTintMinKFP, "Colour Tint Min", i, PTX_KF_COL4);
							ptxKeyframePropTreeNode(entry.m_colourTintMaxKFP, "Colour Tint Max", i, PTX_KF_COL4);
							ptxKeyframePropTreeNode(entry.m_zoomScalarKFP, "Zoom Scalar", i, PTX_KF_FLOAT2,"Min %", "Max %");
							ptxKeyframePropTreeNode(entry.m_dataSphereKFP, "Data Sphere", i, PTX_KF_FLOAT4, "Pos X", "Pos Y", "Pos Z", "Radius");
							ptxKeyframePropTreeNode(entry.m_dataCapsuleKFP, "Data Capsule", i, PTX_KF_FLOAT4, "Rot X", "Rot Y", "Rot Z", "Length");

							ImGui::TreePop();
						}
					
						ImGui::TreePop();
					}
				}

				ImGui::TreePop();
			}
		
			if (ImGui::TreeNode(vfmt("Emitter rule dictionary##_{}", index)))
			{

				auto& entries = it.m_pFxList->ptxEmitterRuleDictionary->m_Entries;
				auto& codes = it.m_pFxList->ptxEmitterRuleDictionary->m_Codes;

				SEARCH_DEF1(vfmt("Search## EmitterRule__{}", index));

				for (size_t i = 0; i < entries.size(); i++)
				{
					auto& entry = entries[i].GetRef();
					auto& e = entry;
				

					if (SEARCH_DEF2(e.m_name))
					{
						if (ImGui::TreeNode(vfmt("{}## EmitterRule {}", entry.m_name, i)))
						{
							ImGui::Text("FileVersion : %f", e.m_fileVersion);

							PtxDomainTreeNode(e.m_creationDomainObj, "Creation Domain", i);
							PtxDomainTreeNode(e.m_targetDomainObj, "Target Domain", i);
							PtxDomainTreeNode(e.m_attractorDomainObj, "Attractor Domain", i);
							
							ImGui::Separator();
							
							ptxKeyframePropTreeNode(e.m_spawnRateOverTimeKFP, "Spawn Rate Over Time ##KFP", i, PTX_KF_FLOAT3);
							ptxKeyframePropTreeNode(e.m_spawnRateOverDistKFP, "Spawn Rate Over Distance ##KFP", i, PTX_KF_FLOAT2);
							ptxKeyframePropTreeNode(e.m_particleLifeKFP, "Particle Life ##KFP", i, PTX_KF_FLOAT2);
							ptxKeyframePropTreeNode(e.m_playbackRateScalarKFP, "Playback Rate Scalar ##KFP", i, PTX_KF_FLOAT);
							ptxKeyframePropTreeNode(e.m_speedScalarKFP, "Speed Scalar ##KFP", i, PTX_KF_FLOAT2);
							ptxKeyframePropTreeNode(e.m_sizeScalarKFP, "Size Scalar ##KFP", i, PTX_KF_FLOAT3);
							ptxKeyframePropTreeNode(e.m_accnScalarKFP, "Acceleration Scalar ##KFP", i, PTX_KF_FLOAT3);
							ptxKeyframePropTreeNode(e.m_dampeningScalarKFP, "Dampening Scalar ##KFP", i, PTX_KF_FLOAT3);
							ptxKeyframePropTreeNode(e.m_matrixWeightScalarKFP, "Matrix Weight Scalar ##KFP", i, PTX_KF_FLOAT);
							ptxKeyframePropTreeNode(e.m_inheritVelocityKFP, "Inherit Velocity ##KFP", i, PTX_KF_FLOAT2);

							ImGui::Separator();

							ImGui::TreePop();
						}
					}
				}

				ImGui::TreePop();
			}

			if (ImGui::TreeNode(vfmt("Particle rule dictionary##_{}", index)))
			{
				auto& entries = it.m_pFxList->ptxParticleRuleDictionary.GetRef().m_Entries;

				SEARCH_DEF1(vfmt("Search## ParticleRule__{}", index));

				for (size_t i = 0; i < entries.size(); i++)
				{
					auto& e = entries[i].GetRef();

					if (SEARCH_DEF2(e.m_name))
					{
						if (ImGui::TreeNode(vfmt("{}## ParticleRule {}", e.m_name, i)))
						{
							ImGui::Text("FileVersion : %f", e.m_fileVersion);


							if (ImGui::TreeNode(vfmt("Render State ##{}", i)))
							{
								static constexpr std::array CullModes =
								{ 
									"No culling", 
									"Cull front-facing polygons", 
									"Cull back-facing polygons" 
								};
								ImGui::Combo(vfmt("Cull Mode##{}", next_num()), &e.m_renderState.m_cullMode, CullModes.data(), CullModes.size());

								static constexpr std::array BlendSets =
								{
									"Normal",
									"Add",
									"Subtract",
									"Lightmap",
									"Matte",
									"Overwrite",
									"Dest",
									"Alpha Add",
									"Reverse Subtract",
									"Min",
									"Max",
									"Alpha Subtract",
									"Multiply Src Dest",
									"Composite Alpha",
									"Composite Alpha Subtract"
								};
								ImGui::Combo(vfmt("Blend Set##{}", next_num()), &e.m_renderState.m_blendSet, BlendSets.data(), BlendSets.size());
								ImGui::InputInt(vfmt("Lighting Mode##{}", next_num()), &e.m_renderState.m_lightingMode);
								ImGui::Checkbox(vfmt("Depth Write##{}", next_num()), &e.m_renderState.m_depthWrite);
								ImGui::Checkbox(vfmt("Depth Test##{}", next_num()), &e.m_renderState.m_depthTest);
								ImGui::Checkbox(vfmt("Alpha Blend##{}", next_num()), &e.m_renderState.m_alphaBlend);

								ImGui::TreePop();
							}
							
							ImGui::InputInt(vfmt("Tex Frame Id Min ##{}", next_num()), &e.m_texFrameIdMin);
							ImGui::InputInt(vfmt("Tex Frame Id Max ##{}", next_num()), &e.m_texFrameIdMax);

							ptxEffectSpawnerTreeNode(e.m_effectSpawnerAtRatio, "Effect Spawner At Ratio", i);
							ptxEffectSpawnerTreeNode(e.m_effectSpawnerOnColn, "Effect Spawner On Collision", i);

							BehavioursTreeNode(e.m_allBehaviours, "All Behaviours", i);
							
							if (ImGui::TreeNode(vfmt("PTX Bias Link##{}", i)))
							{
								for (size_t bias_link_idx = 0; bias_link_idx < e.m_biasLinks.size(); bias_link_idx++)
								{
									auto& bias_link = e.m_biasLinks[bias_link_idx];

									ImGui::Text(vfmt("Name : {}", bias_link.m_name));

									if (ImGui::TreeNode(vfmt("KeyframePropsIds##{} {}", i, bias_link_idx)))
									{
										for (auto& v : bias_link.m_keyframePropIds)
										{
											ImGui::Text(vfmt("KeyframePropId : %i", v));
										}
										ImGui::TreePop();
									}
								}
								ImGui::TreePop();
							}
						

							if (ImGui::TreeNode(vfmt("Shader Instance ##{}", i)))
							{
								ImGui::Text(vfmt("ShaderFile : {}", e.m_shaderInst.m_shaderTemplateName));
								ImGui::Text(vfmt("ShaderTechnique : {} | id : {}", e.m_shaderInst.m_shaderTemplateTechniqueName, e.m_shaderInst.m_shaderTemplateTechniqueId));

								ImGui::SeparatorText("Technique Description");
								
								static std::array DiffuseModes = 
								{ 
									"_",
									"Tex1 RGBA",
									"Tex1 RRRR",
									"Tex1 GGGG",
									"Tex1 BBBB",
									"Tex1 RGB",
									"Tex1 RG Blend"
								};

								static std::array ProjectionModes = 
								{
									"None",
									"Water",
									"Non Water",
									"All"
								};

								ImGui::Combo(vfmt("Diffuse Mode##{}", next_num()), (int*)&e.m_shaderInst.m_techniqueDesc.m_diffuseMode, DiffuseModes.data(), DiffuseModes.size());
								ImGui::Combo(vfmt("Projection Mode##{}", next_num()), (int*)&e.m_shaderInst.m_techniqueDesc.m_projMode, ProjectionModes.data(), ProjectionModes.size());

								ImGui::Checkbox(vfmt("Is Lit##{}", next_num()), &e.m_shaderInst.m_techniqueDesc.m_isLit);
								ImGui::Checkbox(vfmt("Is Soft##{}", next_num()), &e.m_shaderInst.m_techniqueDesc.m_isSoft);
								ImGui::Checkbox(vfmt("Is Screen Space##{}", next_num()), &e.m_shaderInst.m_techniqueDesc.m_isScreenSpace);
								ImGui::Checkbox(vfmt("Is Refract##{}", next_num()), &e.m_shaderInst.m_techniqueDesc.m_isRefract);
								ImGui::Checkbox(vfmt("Is NormalSpec##{}", next_num()), &e.m_shaderInst.m_techniqueDesc.m_isNormalSpec);

								ImGui::Separator();

								if (ImGui::TreeNode(vfmt("ShaderVars## {}", i)))
								{
									for (size_t shader_var_idx = 0; shader_var_idx < e.m_shaderInst.m_instVars.size(); shader_var_idx++)
									{
										auto& shader_var = e.m_shaderInst.m_instVars[shader_var_idx].GetRef();

										shader_var.UiWidgets(i, shader_var_idx);
									}
									ImGui::TreePop();
								}

								ImGui::TreePop();
							}

							if (ImGui::TreeNode(vfmt("Drawables ## {}", i)))
							{
								for (auto& drawable : e.m_drawables)
								{
									ImGui::Text(drawable.m_name);
									
									ImGui::DragFloat4(vfmt("BoundInfo##{}", next_num()), (float*)&drawable.m_vBoundInfo);
									ImGui::SameLine();
									HelpMarker("bounding box width / height / depth / bounding sphere radius");

									ImGui::Separator();
								}

								ImGui::TreePop();
							}

							static std::array SortTypes = {
								"Closest First",
								"Farthest First",
								"Newest First",
								"Oldest First",
								"Random"
							};

							static std::array DrawTypes = {
								"Sprite",
								"Model",
								"Trail"
							};

							int iSortType = e.m_sortType;
							int iDrawType = e.m_drawType;

							if (ImGui::Combo(vfmt("SortType##{}", next_num()), &iSortType, SortTypes.data(), SortTypes.size()))
							{
								e.m_sortType = (ptxSortType)iSortType;
							}
							if (ImGui::Combo(vfmt("DrawType##{}", next_num()), &iDrawType, DrawTypes.data(), DrawTypes.size()))
							{
								e.m_drawType = (ptxDrawType)iDrawType;
							}

							if (ImGui::TreeNode(vfmt("Flags ##{}", i)))
							{
								e.m_flags = BitsetWidgets<5, u8>(e.m_flags,
									{
										"PTFX_CONTAINS_REFRACTION",
										"PTFX_WATERSURFACE_RENDER_ABOVE_WATER",
										"PTFX_WATERSURFACE_RENDER_BELOW_WATER",
										"PTFX_DRAW_SHADOW_CULLED",
										"PTFX_IS_VEHICLE_INTERIOR",
									});

								ImGui::Text(vfmt("bits : {:08b}", e.m_flags));
								ImGui::TreePop();
							}

							if (ImGui::TreeNode(vfmt("Runtime Flags ##{}", i)))
							{
								e.m_runtimeFlags = BitsetWidgets<8, u8>(e.m_runtimeFlags,
									{
										"UNKNOWN1",
										"UNKNOWN2",
										"UNKNOWN3",
										"UNKNOWN4",
										"UNKNOWN5",
										"UNKNOWN6",
										"UNKNOWN7",
										"UNKNOWN8",
									});
								ImGui::Text(vfmt("Bits : {:08b}", e.m_runtimeFlags));
							}
							ImGui::TreePop();
						}
					}
				}

				ImGui::TreePop();
			}
		
			if (ImGui::TreeNode(vfmt("Texture dictionary##_{}", index)))
			{
				auto& entries = it.m_pFxList->ptxTextureDictionary.GetRef().m_Entries;
				
				for (auto& e : entries)
				{
					auto* view = e->GetTextureView();
					
					ImVec2 size = ImVec2(e->GetWidth(), e->GetHeight());
					ImVec2 UiTextureSize;
					float fAspectRatio = size.x / size.y;

					if (size.x > 256 || size.y > 256) {
						UiTextureSize = { 256.f, 256.f / fAspectRatio };
					} else {
						UiTextureSize = size;
					}

					if (view)
						ImGui::Image((void*)view, UiTextureSize);
				}

				ImGui::TreePop();
			}



			if (ImGui::TreeNode(vfmt("Model dictionary##_{}", index)))
			{
				auto& entries = it.m_pFxList->ptxModelDictionary->m_Entries;

				ImGui::Text("Entries size : %i", entries.size());


				for (size_t i = 0; i < entries.size(); i++)
				{
					auto& e = entries[i];

					if (ImGui::TreeNode(vfmt("entries[{}]", i)))
					{
						ImGui::Text("Handle : %i", e->m_HandleIndex);
						ImGui::Text("Container size QW : %i", e->m_ContainerSizeQW);

						ImGui::Text("Debug name : %s", e->m_DebugName);

						if (ImGui::TreeNode(vfmt("Shader Group##{}", i)))
						{
							auto* shader_group = e->m_ShaderGroup.Get();
							if (!shader_group)
							{
								ImGui::Text("Shader group : NULL");
							}
							else
							{
								auto* texDict = shader_group->m_TextureDictionary.Get();
								if (ImGui::TreeNode(vfmt("Textures## {}", i)))
								{
									if (!texDict)
									{
										ImGui::Text("Texture dictionary : NULL");
									}
									else
									{
										auto& textures = texDict->m_Entries;

										for (size_t j = 0; j < textures.size(); j++)
										{
											ImGui::Image((void*)textures[j]->GetTextureView(), ImVec2(256, 256));
										}

									}
									ImGui::TreePop();
								}

								if (ImGui::TreeNode(vfmt("Shaders## {}", i)))
								{
									auto& shaders_arr = e->m_ShaderGroup->m_Shaders;

									for (size_t s = 0; s < shaders_arr.size(); s++)
									{
										if (ImGui::TreeNode(vfmt("Shader entry : {}##{}", s, i)))
										{
											auto& shader = shaders_arr[s].GetRef();

											ShaderWidgets(shader, s, i);

											ImGui::TreePop();
										}
									}

									ImGui::TreePop();
								}

							}

							ImGui::TreePop();
						}

						if (ImGui::TreeNode(vfmt("Skeleton Data##{}", i)))
						{

							ImGui::TreePop();
						}

						if (ImGui::TreeNode(vfmt("rmc Lod Group##{}", i)))
						{

							ImGui::TreePop();
						}

						if (ImGui::TreeNode(vfmt("cr Joint Data##{}", i)))
						{

							ImGui::TreePop();
						}

						ImGui::TreePop();

					}

				}


				ImGui::TreePop();
			}

		}

		index++;
	}
}

void ShaderWidgets(rage::grcInstanceData& shader, size_t entry_idx, size_t shader_idx)
{
	size_t i = entry_idx;
	size_t s = shader_idx;

	if (ImGui::Button(vfmt("Copy addr ##{}{}", i, s)))
	{
		TextToClipboard(vfmt("{:X}", (u64)&shader));
	}

	ImGui::Text("VarCount : %i", u32(shader.m_VarCount));
	ImGui::Text("DrawBucket : %i", u32(shader.m_DrawBucket));
	ImGui::Text("m_PhysMtl : %i", u32(shader.m_PhysMtl));
	ImGui::Text("VarsSize : %i", u32(shader.m_VarsSize));
	ImGui::Text("TotalSize : %i", u32(shader.m_TotalSize));
	ImGui::Text(vfmt("DrawBucketMask : {:08X}", shader.m_DrawBucketMask));
	ImGui::Text("IsInstancedDraw : %s", shader.m_IsInstancedDraw ? "true" : "false");
	ImGui::Text(vfmt("UserFlags : {:08b}", shader.m_UserFlags));
	ImGui::Text("Texture Count : %i", u32(shader.m_TextureCount));
	
	ImGui::SeparatorText(vfmt("Flags : {:08b}", shader.m_Flags));
	ImGui::Text("Is material : %s", shader.isMaterial() ? "true" : "false");
	ImGui::Text("Is extra data : %s", shader.isExtraData() ? "true" : "false");

	if (ImGui::TreeNode(vfmt("Vars##{}{}", i,s)))
	{
		auto it = shader.GetIterator(grcInstanceData::IteratorMode::ITERATOR_TEX_MODE_INCLUDE);
	
		size_t idx_ = 0;
		for (auto& v : it)
		{
			ImGui::Separator();

			if (ImGui::TreeNode(vfmt("VAR {} ## {} {}", idx_, s, i)))
			{
				grcInstanceVarWidgets(v);
				ImGui::TreePop();
			}
			idx_++;
		}
	
		ImGui::Separator();

		ImGui::TreePop();
	}


	if (ImGui::TreeNode(vfmt("grcEffect ##{} {}",s,i)))
	{
		auto& effect = (*shader.m_Effect.Ptr);

		ImGui::Text("Name: %s", effect.m_Name);
		ImGui::Text("file path: %s", effect.m_FilePath);
		ImGui::Text("Dcl: %i", effect.m_Dcl);
		ImGui::Text("Ordinal: %i", effect.m_Ordinal);

		if (ImGui::TreeNode(vfmt("Techniques ##{}{}", s, i)))
		{
			for (size_t j = 0; j < effect.m_Techniques.size(); j++)
			{
				if (ImGui::TreeNode(vfmt("m_Techniques[{}]##{}{}",j,s,i)))
				{
					auto& technique_e = effect.m_Techniques[j];
					
					ImGui::Text("Name: %s", technique_e.m_Name);
					ImGui::Text("PassCount: %i", technique_e.m_PassCount);

					ImGui::TreePop();
				}
			}

			ImGui::TreePop();
		}

		if (ImGui::TreeNode(vfmt("Locals ##{}{}", s, i)))
		{
			for (size_t j = 0; j < effect.m_Locals.size(); j++)
			{
				ImGui::Text("m_Locals[%i]", j);
			}

			ImGui::TreePop();
		}

		if (ImGui::TreeNode(vfmt("Properies##{}{}", s, i)))
		{
			for (size_t j = 0; j < effect.m_Properties.size(); j++)
			{
				if (ImGui::TreeNode(vfmt("Properties[{}]##{}{}", j, i, s)))
				{
					auto& property = effect.m_Properties[j];

					ImGui::Text("Type : %s", property.Type == 0 ? "int" : property.Type == 1 ? "float" : property.Type == 2 ? "string" : "unknown");

					switch (property.Type)
					{
					case (rage::grcEffectVar::Annotation::AnnoType::AT_INT):

						ImGui::DragInt(vfmt("Value##{}", next_num()), &property.Int);
						break;

					case (rage::grcEffectVar::Annotation::AnnoType::AT_FLOAT):

						ImGui::DragFloat(vfmt("Value##{}", next_num()), &property.Float);
						break;
					
					case (rage::grcEffectVar::Annotation::AnnoType::AT_STRING):

						ImGui::Text("%s", property.String);
						break;

					default:
						break;
					}


					ImGui::TreePop();
				}

			}



			ImGui::TreePop();
		}

		ImGui::TreePop();
	}

	if (!shader.isMaterial())
	{
		auto& material = (*shader.GetMaterial());
		const char* name = material.GetMaterialName();

		if (ImGui::TreeNode(vfmt("Material : {} ##{} {}", name ? name : "(NULL)", i, s)))
		{
			ShaderWidgets(material, (i << 16), (s << 16));

			ImGui::TreePop();
		}
	}


}


void grcInstanceVarWidgets(rage::grcInstanceVar& v)
{
	ImGui::Text("Value count : %i", v.ValueCount);
	ImGui::Text("Register : %i", v.Register);
	ImGui::Text("Sample index : %i", v.SamplerIndex);
	ImGui::Text("Saved sampler index : %i", v.SavedSamplerIndex);
	ImGui::Text("Is texture : %i", v.IsTexture() ? 1 : 0);

	if (v.IsTexture())
	{
		auto* tex = v.GetTexture();
		if (tex)
			ImGui::Image((void*)tex->GetTextureView(), ImVec2(256, 256));
		else
			ImGui::Text("Texture : NULL");
	}
	else
	{
		int count = v.ValueCount;

		if (count == 1)
		{
			float* ptr = v.GetValuePtr<float>();
			ImGui::DragFloat(vfmt("value##{}", next_num()), ptr, 0.01f);
		}
		else if (count == 2)
		{
			float* ptr = v.GetValuePtr<float>();
			ImGui::DragFloat2(vfmt("value##{}", next_num()), ptr, 0.01f);
		}
		else if (count == 3)
		{
			float* ptr3 = v.GetValuePtr<float>();
			ImGui::DragFloat3(vfmt("value##{}", next_num()), ptr3, 0.01f);
		}
		else if (count == 4)
		{
			float* ptr4 = v.GetValuePtr<float>();
			ImGui::DragFloat4(vfmt("value##{}", next_num()), ptr4, 0.01f);
		}
		else
		{
			ImGui::Text("unimplemented value count : %i", v.ValueCount);
		}
	}


}


void rage::BehavioursTreeNode(atArray<datRef<ptxBehaviour>>& behaviours, const char* name, size_t EntryIdx)
{
	if (ImGui::TreeNode(vfmt("{} ##{}", name, EntryIdx)))
	{
		for (auto& behaviour : behaviours)
		{
			behaviour.GetRef().UiWidgets(EntryIdx);
		}
		ImGui::TreePop();
	}
}


void ptxSpawnedEffectScalarsWidgets(ptxSpawnedEffectScalars& scalars, const char* name, size_t entryIdx)
{
	if (ImGui::TreeNode(vfmt("Spawned effect scalars {}##{}", name, entryIdx)))
	{
		ImGui::DragFloat(vfmt("Duration Scalar ##{}",next_num()), & scalars.m_durationScalar, 0.01f);
		ImGui::DragFloat(vfmt("Playback Rate Scalar##{}", next_num()), &scalars.m_playbackRateScalar, 0.01f);
		ImGui::vColor32Edit4(vfmt("Colour Tint Scalar##{}", next_num()), scalars.m_colourTintScalar, ImGuiColorEditFlags_AlphaPreview | ImGuiColorEditFlags_AlphaBar );
		ImGui::DragFloat(vfmt("Zoom Scalar ##{}", next_num()), &scalars.m_zoomScalar, 0.01f);
	
		if (ImGui::TreeNode(vfmt("Flags##{}",entryIdx)))
		{
			scalars.m_flags = BitsetWidgets<5, u32>(scalars.m_flags,
				{
					"ACTIVE_DURATION",
					"ACTIVE_PLAYBACK_RATE",
					"ACTIVE_COLOUR_TINT",
					"ACTIVE_ZOOM",
					"ACTIVE_SIZE_SCALAR"
				});
			ImGui::Text(vfmt("Flags : {:032b}", u32(scalars.m_flags)));
			ImGui::TreePop();
		}
		ImGui::TreePop();
	}
}

void rage::ptxEffectSpawnerTreeNode(ptxEffectSpawner& spawner, const char* name, size_t EntryIdx)
{
	if (ImGui::TreeNode(vfmt("{}##{}", name, EntryIdx)))
	{
		if (spawner.m_pEffectRule)
		{
			ImGui::Text(vfmt("EffectRule : {}", spawner.m_pEffectRule->m_name));
		}
		else
		{
			ImGui::Text("EffectRule : NULL");
			ImGui::TreePop();
			return;
		}

		ptxSpawnedEffectScalarsWidgets(spawner.m_spawnedEffectScalarsMin, "Min", EntryIdx);
		ptxSpawnedEffectScalarsWidgets(spawner.m_spawnedEffectScalarsMax, "Max", EntryIdx);

		ImGui::Separator();
		
		ImGui::Text(spawner.m_name);

		ImGui::DragFloat(vfmt("TriggerInfo##{}", next_num()), &spawner.m_triggerInfo);

		ImGui::Checkbox(vfmt("Inherits Point Life##{}", next_num()), &spawner.m_inheritsPointLife);
		ImGui::Checkbox(vfmt("Tracks Point Pos##{}", next_num()), &spawner.m_tracksPointPos);
		ImGui::Checkbox(vfmt("Tracks Point Dir##{}", next_num()), &spawner.m_tracksPointDir);
		ImGui::Checkbox(vfmt("Tracks Point Neg Dir##{}", next_num()), &spawner.m_tracksPointNegDir);

		ImGui::TreePop();
	}
	
}


void rage::PtxDomainTreeNode(ptxDomainObj& DomainObj, const char* name, size_t EntryIdx)
{
	auto* ptr = DomainObj.m_pDomain.Get();
	if (!ptr)
	{
		ImGui::Text(vfmt("{} : NULL", name));
		return;
	}

	auto& domain = DomainObj.m_pDomain.GetRef();

	if (ImGui::TreeNode(vfmt("{}##_domain_{}", name, EntryIdx)))
	{
		ImGui::Text("FileVersion %f", domain.m_fileVersion);

		std::array DomainShapes = 
		{
			"Box",
			"Sphere", 
			"Cylinder",
			"Box", 
			"Attractor",
			"Invalid",
		};

		std::array DomainTypes = 
		{
			"Creation",
			"Target",
			"Attractor",
		};
		{
			int Temp_Shape_Var = domain.m_shape;
			if (Temp_Shape_Var == -1)
				Temp_Shape_Var = 5;

			if (ImGui::Combo(vfmt("Shape##_combo{}", next_num()), &Temp_Shape_Var, DomainShapes.data(), DomainShapes.size()))
			{
				if (Temp_Shape_Var == 5)
					Temp_Shape_Var = -1;

				domain.m_shape = Temp_Shape_Var;
			}
		}

		ImGui::Combo(vfmt("Type##{}", next_num()), &domain.m_type, DomainTypes.data(), DomainTypes.size());

		ImGui::InputInt(vfmt("Type##_{}", next_num()),						&domain.m_type);
		ImGui::InputInt(vfmt("Shape##_{}", next_num()),						&domain.m_shape);

		ImGui::Checkbox(vfmt("Is World Space ##{}", next_num()),			&domain.m_isWorldSpace);
		ImGui::Checkbox(vfmt("Is Point Relative ##{}", next_num()),			&domain.m_isPointRelative);
		ImGui::Checkbox(vfmt("Is Creation Relative ##{}", next_num()),		&domain.m_isCreationRelative);
		ImGui::Checkbox(vfmt("Is Target Relatve ##{}", next_num()),			&domain.m_isTargetRelative);

		ptxKeyframePropTreeNode(domain.m_positionKFP, "Position KFP##Domain", EntryIdx, PTX_KF_FLOAT4);
		ptxKeyframePropTreeNode(domain.m_rotationKFP, "Rotation KFP##Domain", EntryIdx, PTX_KF_FLOAT4);
		ptxKeyframePropTreeNode(domain.m_sizeOuterKFP, "Size Outer KFP##Domain", EntryIdx, PTX_KF_FLOAT4);
		ptxKeyframePropTreeNode(domain.m_sizeInnerKFP, "Size Inner KFP##Domain", EntryIdx, PTX_KF_FLOAT4);

		ImGui::TreePop();
	}

}


void rage::ptxKeyframePropTreeNode(
	ptxKeyframeProp& ptxKfProp,
	const char* name,
	size_t EntryIdx,
	ptxKeyframeType type,
	const char* lb1,
	const char* lb2,
	const char* lb3,
	const char* lb4)
{
	if (ImGui::TreeNode(vfmt("{}## {}", name, EntryIdx)))
	{
		ImGui::Checkbox(vfmt("Invert Bias Link## fkProp {}", next_num()), &ptxKfProp.m_invertBiasLink);
	
		ptxKeyframeTable(ptxKfProp.m_keyframe, type, lb1, lb2, lb3, lb4);

		ImGui::TreePop();
	}
}




ParticlesUi::~ParticlesUi()
{
	scrInvoke([]
		{
			STREAMING::_REMOVE_NAMED_PTFX_ASSET("core");
		});
}
