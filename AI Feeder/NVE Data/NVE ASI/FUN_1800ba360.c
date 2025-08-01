#include "FUN_1800ba360.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800ba360(int32_t *param_1,int32_t *param_2,ulonglong param_3) {
ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void *pvVar5;
  int32_t *puVar6;
  
  if (0x7fffffffffffffff < param_3) {
    FUN_1800ba540();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    FUN_180150fd0(param_1,param_2,param_3);
    *(int32_t *)(param_3 + (longlong)param_1) = 0;
    return;
  }
  uVar3 = param_3 | 0xf;
  if (uVar3 < 0x8000000000000000) {
    if (uVar3 < 0x16) {
      uVar3 = 0x16;
    }
    uVar1 = uVar3 + 1;
    if (uVar1 == 0) {
      puVar6 = (int32_t *)0x0;
      goto LAB_1800ba424;
    }
    if (uVar1 < 0x1000) {
      puVar6 = (int32_t *)operator_new(uVar1);
      goto LAB_1800ba424;
    }
    uVar4 = uVar3 + 0x28;
    if (uVar4 <= uVar1) {
      FUN_1800ba8a0();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar4 = 0x8000000000000027;
    uVar3 = 0x7fffffffffffffff;
  }
  pvVar5 = operator_new(uVar4);
  if (pvVar5 == (void *)0x0) {
    FUN_18012b7b4();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar6 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
  puVar6[-1] = pvVar5;
LAB_1800ba424:
  *param_1 = puVar6;
  param_1[2] = param_3;
  param_1[3] = uVar3;
  FUN_180150fd0(puVar6,param_2,param_3);
  *(int32_t *)((longlong)puVar6 + param_3) = 0;
  return;
}
}

 FUN_1800ba360(&local_48,param_2,uVar5);
  local_58 = pppuVar2;
  uStack_50 = uVar3;
  FUN_1800b8dc0(param_1,(ulonglong *)&local_58,&local_48);
  if (0xf < uStack_30) {
pvVar4 = local_48;
    if ((0xfff < uStack_30 + 1) &&
       (pvVar4 = *(LPVOID *)((longlong)local_48 + -8),
       0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)pvVar4)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar4);
  }
}

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
    if (param_2 == '\0') {
pcVar4 = "961c151d2e87f2686a955a9be24d316f1362bf21 3.11.2";
      FUN_1800ba470(&local_38,(int32_t *)"961c151d2e87f2686a955a9be24d316f1362bf21 3.11.2");
      FUN_1800f8850(local_70,pcVar4,&local_38);
      FUN_1801279a8(local_70,&DAT_1801e9268);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
}

 FUN_1800ba360(&local_38,(int32_t *)*ppuVar4,uVar5);
    if (0xf < uStack_20) {
pvVar2 = local_38;
      if ((0xfff < uStack_20 + 1) &&
         (pvVar2 = *(LPVOID *)((longlong)local_38 + -8),
         0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar2)))) goto LAB_180112a34;
      thunk_FUN_18012d5e8(pvVar2);
    }
}

 FUN_1800ba360(local_b8,(int32_t *)"clouds",6);
        pcVar5 = (char *)FUN_1800edd90(plVar7,local_b8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"shaders",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"shaders",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"graphics",8);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"freecam",7);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_day",0x13);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            local_d8 = 0;
            lStack_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
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
      if ((char)*plVar7 == '\x01') {
plVar3 = FUN_18011c560((longlong *)plVar7[1],&local_res20,&local_res8);
        lStack_d0 = *plVar3;
      }
}

 FUN_1800ba360(&local_d8,(int32_t *)"emissive_lights_night",0x15);
        pcVar5 = (char *)FUN_1800edd90(plVar7,&local_d8);
        if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
          plVar6 = FUN_18011c560(plVar3,(longlong *)&local_res8,&local_res18);
          if (*plVar6 != *plVar3) {
            plVar3 = FUN_1800ba470(&local_d8,(int32_t *)"emissive_lights_night");
            plVar7 = (longlong *)FUN_1800edd90(plVar7,plVar3);
            pcVar5 = (char *)FUN_1800eca60(plVar7,(int32_t *)"reversing_lights");
            DAT_1801ebd44 = FUN_18011c530(pcVar5);
          }
        }
}

 FUN_1800ba360(local_b8,param_2,uVar8);
    pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
    if (*pcVar5 == '\x01') {
plVar3 = *(longlong **)(pcVar5 + 8);
      plVar6 = FUN_18011c560(plVar3,&local_c8,&local_c0);
      if (*plVar6 != *plVar3) {
        plVar3 = (longlong *)*param_1;
        local_b8[0] = 0;
        local_b8[1] = 0;
        local_b8[2] = 0;
        local_b8[3] = 0;
        uVar8 = 0xffffffffffffffff;
        do {
          uVar8 = uVar8 + 1;
        } while (*(char *)((longlong)param_2 + uVar8) != '\0');
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
        if (*pcVar5 != '\x04') {
          local_c0 = FUN_1800f7810(pcVar5);
          plVar3 = FUN_18011c630(&local_78,plVar6,(longlong *)&local_c0);
          FUN_1800ed150(local_b8,0x12e,plVar3);
          FUN_1801279a8(local_b8,&DAT_1801e9200);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *param_4 = pcVar5[8];
      }
    }
}

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
        if (*pcVar5 != '\x04') {
local_c0 = FUN_1800f7810(pcVar5);
          plVar3 = FUN_18011c630(&local_78,plVar6,(longlong *)&local_c0);
          FUN_1800ed150(local_b8,0x12e,plVar3);
          FUN_1801279a8(local_b8,&DAT_1801e9200);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
}

 FUN_1800ba360(local_b8,param_2,uVar10);
    pcVar5 = (char *)FUN_1800edd90(plVar3,local_b8);
    if ((*pcVar5 == '\x01') &&
       (plVar3 = *(longlong **)(pcVar5 + 8), plVar6 = FUN_18011c560(plVar3,&local_c8,&local_c0),
       *plVar6 != *plVar3)) {
plVar3 = (longlong *)*param_1;
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_b8[2] = 0;
      local_b8[3] = 0;
      uVar10 = 0xffffffffffffffff;
      do {
        uVar10 = uVar10 + 1;
      } while (*(char *)((longlong)param_2 + uVar10) != '\0');
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
      switch(cVar2) {
      default:
        local_c0 = FUN_1800f7810(pcVar5);
        plVar3 = FUN_1800f24a0(&local_78,(int32_t *)"type must be number, but is ",
                               (longlong *)&local_c0);
        FUN_1800ed150(local_b8,0x12e,plVar3);
        FUN_1801279a8(local_b8,&DAT_1801e9200);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      case '\x04':
        pdVar7 = (double *)(pcVar5 + 8);
        if (cVar2 != '\x04') {
          pdVar7 = pdVar11;
        }
        uVar8 = (uint)*(byte *)pdVar7;
        break;
      case '\x05':
        pdVar7 = (double *)(pcVar5 + 8);
        if (1 < (byte)(cVar2 - 5U)) {
          pdVar7 = pdVar11;
        }
        uVar8 = *(uint *)pdVar7;
        break;
      case '\x06':
        pdVar7 = (double *)(pcVar5 + 8);
        if (cVar2 != '\x06') {
          pdVar7 = pdVar11;
        }
        uVar8 = *(uint *)pdVar7;
        break;
      case '\a':
        pdVar7 = (double *)(pcVar5 + 8);
        if (cVar2 != '\a') {
          pdVar7 = pdVar11;
        }
        uVar8 = (uint)*pdVar7;
      }
      *param_4 = uVar8;
    }
}

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
      switch(cVar2) {
default:
        local_c0 = FUN_1800f7810(pcVar5);
        plVar3 = FUN_1800f24a0(&local_78,(int32_t *)"type must be number, but is ",
                               (longlong *)&local_c0);
        FUN_1800ed150(local_b8,0x12e,plVar3);
        FUN_1801279a8(local_b8,&DAT_1801e9200);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      case '\x04':
        pdVar7 = (double *)(pcVar5 + 8);
        if (cVar2 != '\x04') {
          pdVar7 = pdVar11;
        }
        uVar8 = (uint)*(byte *)pdVar7;
        break;
      case '\x05':
        pdVar7 = (double *)(pcVar5 + 8);
        if (1 < (byte)(cVar2 - 5U)) {
          pdVar7 = pdVar11;
        }
        uVar8 = *(uint *)pdVar7;
        break;
      case '\x06':
        pdVar7 = (double *)(pcVar5 + 8);
        if (cVar2 != '\x06') {
          pdVar7 = pdVar11;
        }
        uVar8 = *(uint *)pdVar7;
        break;
      case '\a':
        pdVar7 = (double *)(pcVar5 + 8);
        if (cVar2 != '\a') {
          pdVar7 = pdVar11;
        }
        uVar8 = (uint)*pdVar7;
      }
}

 FUN_1800ba360(local_78,param_2,uVar7);
    pcVar4 = (char *)FUN_1800edd90(plVar2,local_78);
    if ((*pcVar4 == '\x01') &&
       (plVar2 = *(longlong **)(pcVar4 + 8),
       plVar5 = FUN_18011c560(plVar2,(longlong *)local_res8,&local_res18), *plVar5 != *plVar2)) {
plVar2 = (longlong *)*param_1;
      local_78[0] = 0;
      local_78[1] = 0;
      local_78[2] = 0;
      uVar7 = 0xffffffffffffffff;
      local_78[3] = 0;
      do {
        uVar7 = uVar7 + 1;
      } while (*(char *)((longlong)param_2 + uVar7) != '\0');
      FUN_1800ba360(local_78,param_2,uVar7);
      plVar2 = (longlong *)FUN_1800edd90(plVar2,local_78);
      local_78[6] = 0;
      local_78[4] = 0;
      local_78[5] = 0;
      local_78[7] = 0;
      do {
        uVar6 = uVar6 + 1;
      } while (*(char *)((longlong)param_3 + uVar6) != '\0');
      FUN_1800ba360(local_78 + 4,param_3,uVar6);
      pcVar4 = (char *)FUN_1800edd90(plVar2,local_78 + 4);
      local_res8[0] = 0.0;
      FUN_1800fe3d0(pcVar4,local_res8);
      *param_4 = local_res8[0];
    }
}

 FUN_1800ba360(local_58,(int32_t *)"shaders",7);
    pcVar4 = (char *)FUN_1800edd90(plVar2,local_58);
    if ((*pcVar4 == '\x01') &&
       (plVar2 = *(longlong **)(pcVar4 + 8), plVar5 = FUN_18011c560(plVar2,&local_res20,&local_70),
       *plVar5 != *plVar2)) {
plVar2 = (longlong *)*param_1;
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[0] = 0;
      local_58[1] = 0;
      FUN_1800ba360(local_58,(int32_t *)"shaders",7);
      plVar2 = (longlong *)FUN_1800edd90(plVar2,local_58);
      local_58[6] = 0;
      local_58[7] = 0;
      local_58[4] = 0;
      local_58[5] = 0;
      FUN_1800ba360(local_58 + 4,(int32_t *)"streetlight_colour",0x12);
      local_68 = 0;
      local_60[0] = 0.0;
      pcVar4 = (char *)FUN_1800edd90(plVar2,local_58 + 4);
      pcVar6 = (char *)FUN_1800fe180(pcVar4,&DAT_1801d8504);
      FUN_1800fe3d0(pcVar6,(float *)&local_68);
      pcVar6 = (char *)FUN_1800fe180(pcVar4,&DAT_1801d850c);
      FUN_1800fe3d0(pcVar6,(float *)((longlong)&local_68 + 4));
      pcVar4 = (char *)FUN_1800fe180(pcVar4,&DAT_1801d8508);
      FUN_1800fe3d0(pcVar4,local_60);
      _DAT_1801ec480 = local_68;
      _DAT_1801ec488 = local_60[0];
    }
}

