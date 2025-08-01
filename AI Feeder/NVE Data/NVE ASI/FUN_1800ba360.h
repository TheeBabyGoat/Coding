#ifndef FUN_1800BA360_H
#define FUN_1800BA360_H

void FUN_1800ba360(int32_t *param_1,int32_t *param_2,ulonglong param_3);
 FUN_1800ba360(&local_48,param_2,uVar5);
  local_58 = pppuVar2;
  uStack_50 = uVar3;
  FUN_1800b8dc0(param_1,(ulonglong *)&local_58,&local_48);
  if (0xf < uStack_30);
 FUN_1800ba360(puVar3,(int32_t *)&DAT_180187500,0);
LAB_1800f8a95:
    *param_1 = puVar3;
    break;
  case '\x04':
    *(int32_t *)param_1 = 0;
    break;
  case '\b':
    puVar3 = (int32_t *)operator_new(0x28);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(int32_t *)(puVar3 + 4) = 0;
    *param_1 = puVar3;
    break;
  default:
    *param_1 = 0;
    if (param_2 == '\0');
 FUN_1800ba360(&local_38,(int32_t *)*ppuVar4,uVar5);
    if (0xf < uStack_20);
 FUN_1800ba360(local_b8,(int32_t *)"clouds",6);
        pcVar5 = (char *)FUN_1800edd90(plVar7,local_b8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(local_b8,(int32_t *)"clouds",6);
            plVar7 = (longlong *)FUN_1800edd90(plVar7,local_b8);
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            FUN_1800ba360(&local_d8,(int32_t *)"clouds_speed",0xc);
            pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ec1a8 = local_res8._0_4_;
          }
        }
      }
      FUN_18011a290(&local_res10,(int32_t *)"clouds","step_config",&DAT_1801ec180);
      FUN_18011a0c0(&local_res10,(int32_t *)"clouds","optimized_marching",&DAT_1801f39f6);
      FUN_18011a290(&local_res10,(int32_t *)"clouds_config","weather_extrasunny",&DAT_1801f39d8);
      FUN_18011a290(&local_res10,(int32_t *)"clouds_config","weather_clearing",&DAT_1801f39e0);
      FUN_18011a290(&local_res10,(int32_t *)"clouds_config","weather_clouds",&DAT_1801f39dc);
      FUN_18011a290(&local_res10,(int32_t *)"clouds_config","weather_overcast2",&DAT_1801f39d0);
      FUN_18011a290(&local_res10,(int32_t *)"clouds_config","weather_rain2",&DAT_1801f39cc);
      FUN_18011a290(&local_res10,(int32_t *)"clouds_config","weather_thunder",&DAT_1801f39c8);
      FUN_18011a0c0(&local_res10,(int32_t *)"shaders","override_shaders",&DAT_1801fb100);
      FUN_18011a290(&local_res10,(int32_t *)"shaders","current_rain_config",&DAT_1801f3a20);
      FUN_18011a0c0(&local_res10,(int32_t *)"reshade","msaa_acknowledged",&DAT_1801f3a39);
      FUN_18011a0c0(&local_res10,(int32_t *)"timecycle","brighten_nights",&DAT_1801f39f5);
      puVar9 = &DAT_1801f3a24;
      pcVar8 = "targeted_sparkles";
      pcVar5 = "shaders";
      FUN_18011a0c0(&local_res10,(int32_t *)"shaders","targeted_sparkles",&DAT_1801f3a24);
      FUN_18011a6a0(&local_res10,pcVar5,pcVar8,(longlong)puVar9);
      plVar7 = local_res10;
      local_res18 = "b958fbdd";
      local_res8 = (int *)0x1801d8750;
      FUN_1800f93b0(local_res10,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"shaders",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"shaders",7);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"b958fbdd",8);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebe38 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "global_multiplier";
      local_res8 = (int *)0x1801d8750;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"shaders",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"shaders",7);
            plVar7 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"global_multiplier",0x11);
            pcVar5 = (char *)FUN_1800edd90(plVar7,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd78 = local_res8._0_4_;
          }
        }
      }
      FUN_18011a290(&local_res10,(int32_t *)"shaders","aurora_preset_id",&DAT_1801f39ec);
      FUN_18011a0c0(&local_res10,(int32_t *)"shaders","aurora_enabled",&DAT_1801f39f4);
      FUN_18011a290(&local_res10,(int32_t *)"graphics","mb_config",&DAT_1801ebe34);
      plVar7 = local_res10;
      local_res18 = "mb_sample_size";
      local_res8 = (int *)0x1801d8868;
      FUN_1800f93b0(local_res10,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"mb_sample_size",0xe);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebe30 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "mb_ghosting";
      local_res8 = (int *)0x1801d8868;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"mb_ghosting",0xb);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebe28 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "mb_length_mult";
      local_res8 = (int *)0x1801d8868;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
            plVar7 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"mb_length_mult",0xe);
            pcVar5 = (char *)FUN_1800edd90(plVar7,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebe2c = local_res8._0_4_;
          }
        }
      }
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","experimental_directional_shadows",
                    &DAT_1801ebe25);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","headlights_dynamic_shadows",
                    &DAT_1801ebe24);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","volumetrics",&DAT_1801ebe14);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","dynamic_lighting",&DAT_1801f3a12);
      FUN_18011a290(&local_res10,(int32_t *)"graphics","reflection_quality_level",&DAT_1801ebe1c)
      ;
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","extended_shadows_enabled",&DAT_1801f3a14)
      ;
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","extended_reflections_enabled",
                    &DAT_1801f3a18);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","enable_peds_in_reflections",
                    &DAT_1801f3a1c);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","enable_vehicles_in_reflections",
                    &DAT_1801f3a1b);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","enable_buildings_in_reflections",
                    &DAT_1801f3a1a);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","hq_reflection_lods",&DAT_1801f3a17);
      FUN_18011a290(&local_res10,(int32_t *)"graphics","shadow_resolution",&DAT_1801ebe18);
      FUN_18011a290(&local_res10,(int32_t *)"graphics","reflection_resolution",&DAT_1801ebe20);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","unclamp_shadow_size",&DAT_1801f3a13);
      FUN_18011a0c0(&local_res10,(int32_t *)"graphics","enable_map_objects",&DAT_1801f3a16);
      plVar7 = local_res10;
      local_res18 = "mouse_sensitivity";
      local_res8 = (int *)0x1801d8a68;
      FUN_1800f93b0(local_res10,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
            plVar7 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"mouse_sensitivity",0x11);
            pcVar5 = (char *)FUN_1800edd90(plVar7,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            _DAT_1801ebdcc = local_res8._0_4_;
          }
        }
      }
      FUN_18011a0c0(&local_res10,(int32_t *)"freecam","hide_player",&DAT_1801f39e9);
      FUN_18011a0c0(&local_res10,(int32_t *)"freecam","hide_player_and_vehicle",&DAT_1801f39e8);
      FUN_18011a0c0(&local_res10,(int32_t *)"freecam","keep_tcmod_active",&DAT_1801f39e7);
      plVar7 = local_res10;
      local_res18 = "camera_speed";
      local_res8 = (int *)0x1801d8a68;
      FUN_1800f93b0(local_res10,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
            plVar7 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"camera_speed",0xc);
            pcVar5 = (char *)FUN_1800edd90(plVar7,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebdd0 = local_res8._0_4_;
          }
        }
      }
      FUN_18011a0c0(&local_res10,(int32_t *)"freecam","dof_enabled",&DAT_1801f39e5);
      plVar7 = local_res10;
      local_res18 = "dof_strength";
      local_res8 = (int *)0x1801d8a68;
      FUN_1800f93b0(local_res10,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"dof_strength",0xc);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebdb4 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "dof_distance";
      local_res8 = (int *)0x1801d8a68;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
            plVar7 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"dof_distance",0xc);
            pcVar5 = (char *)FUN_1800edd90(plVar7,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebdb0 = local_res8._0_4_;
          }
        }
      }
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_toggle_key_2024",&DAT_1801ebdac);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_slomo_key_2024",&DAT_1801ebda8);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_forward_key_2024",&DAT_1801ebda4)
      ;
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_back_key_2024",&DAT_1801ebda0);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_left_key_2024",&DAT_1801ebd9c);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_right_key_2024",&DAT_1801ebd98);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_up_key_2024",&DAT_1801ebd94);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_down_key_2024",&DAT_1801ebd90);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_double_speed_key_2024",
                    &DAT_1801ebd84);
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_fov_increase_2024",&DAT_1801ebd88
                   );
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_fov_decrease_2024",&DAT_1801ebd8c
                   );
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_rotate_left_2024",&DAT_1801ebd80)
      ;
      FUN_18011a290(&local_res10,(int32_t *)"keybinds","freecam_rotate_right_2024",&DAT_1801ebd7c
                   );
      plVar7 = local_res10;
      local_res18 = "headlights";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(local_res10,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"headlights",10);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd74 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "taillights";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"taillights",10);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd70 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "indicators";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"indicators",10);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd6c = local_res8._0_4_;
          }
        }
      }
      local_res18 = "reversing_lights";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"reversing_lights",0x10);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd68 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "default_lights";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"default_lights",0xe);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd64 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "brake_lights";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"brake_lights",0xc);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd60 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "middle_brake_lights";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"middle_brake_lights",0x13);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd5c = local_res8._0_4_;
          }
        }
      }
      local_res18 = "extra_lights";
      local_res8 = (int *)0x1801d8c58;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"extra_lights",0xc);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd58 = local_res8._0_4_;
          }
        }
      }
      FUN_18011a500(&local_res10,(int32_t *)"emissive_lights_day",(int32_t *)"siren_lights",
                    (float *)&DAT_1801ebd54);
      local_res18 = "headlights";
      local_res8 = (int *)0x1801d8d30;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"headlights",10);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd50 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "taillights";
      local_res8 = (int *)0x1801d8d30;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"taillights",10);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd4c = local_res8._0_4_;
          }
        }
      }
      local_res18 = "indicators";
      local_res8 = (int *)0x1801d8d30;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
            plVar3 = (longlong *)FUN_1800edd90(plVar7,&local_d8);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_1800ba360(local_b8,(int32_t *)"indicators",10);
            pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
            local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
            FUN_1800fe3d0(pcVar5,(float *)&local_res8);
            DAT_1801ebd48 = local_res8._0_4_;
          }
        }
      }
      local_res18 = "reversing_lights";
      local_res8 = (int *)0x1801d8d30;
      FUN_1800f93b0(plVar7,&local_d8);
      if ((char)*plVar7 == '\x01');
 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01');
 FUN_1800ba360(local_b8,param_2,uVar8);
    pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
    if (*pcVar5 == '\x01');
 FUN_1800ba360(local_b8,param_2,uVar8);
        plVar3 = (longlong *)FUN_1800edd90(plVar3,local_b8);
        local_78 = 0;
        lStack_70 = 0;
        local_68 = 0;
        local_60 = 0;
        do {
          uVar7 = uVar7 + 1;
        } while (param_3[uVar7] != '\0');
        FUN_1800ba360(&local_78,(int32_t *)param_3,uVar7);
        plVar6 = &local_78;
        pcVar5 = (char *)FUN_1800edd90(plVar3,plVar6);
        if (*pcVar5 != '\x04');
 FUN_1800ba360(local_b8,param_2,uVar10);
    pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
    if ((*pcVar5 == '\x01') &&
       (plVar3 = *(longlong **)(pcVar5 + 8), plVar6 = FUN_18011c560(plVar3,&local_c8,&local_c0),
       *plVar6 != *plVar3));
 FUN_1800ba360(local_b8,param_2,uVar10);
      plVar3 = (longlong *)FUN_1800edd90(plVar3,local_b8);
      local_78 = 0;
      lStack_70 = 0;
      local_68 = 0;
      local_60 = 0;
      do {
        uVar9 = uVar9 + 1;
      } while (param_3[uVar9] != '\0');
      FUN_1800ba360(&local_78,(int32_t *)param_3,uVar9);
      pcVar5 = (char *)FUN_1800edd90(plVar3,&local_78);
      cVar2 = *pcVar5;
      switch(cVar2);
 FUN_1800ba360(local_78,param_2,uVar7);
    pcVar4 = (char *)FUN_1800edd90(plVar2,local_78);
    if ((*pcVar4 == '\x01') &&
       (plVar2 = *(longlong **)(pcVar4 + 8),
       plVar5 = FUN_18011c560(plVar2,(longlong *)local_res8,&local_res18), *plVar5 != *plVar2));
 FUN_1800ba360(local_58,(int32_t *)"shaders",7);
    pcVar4 = (char *)FUN_1800edd90(plVar2,local_58);
    if ((*pcVar4 == '\x01') &&
       (plVar2 = *(longlong **)(pcVar4 + 8), plVar5 = FUN_18011c560(plVar2,&local_res20,&local_70),
       *plVar5 != *plVar2));

#endif
