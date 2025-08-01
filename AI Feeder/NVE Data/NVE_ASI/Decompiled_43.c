#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18011a500 ----
void FUN_18011a500(int32_t *param_1,int32_t *param_2,int32_t *param_3,float *param_4)

{
  char cVar1;
  longlong *plVar2;
  int32_t *puVar3;
  char *pcVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float local_res8 [2];
  int32_t *local_res10;
  int32_t *local_res18;
  longlong local_78 [8];
  
  pcVar4 = (char *)*param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_1800f93b0(pcVar4,local_78 + 4);
  if (*pcVar4 == '\x01') {
    plVar2 = FUN_18011c560(*(longlong **)(pcVar4 + 8),(longlong *)local_res8,&local_res10);
    local_78[5] = *plVar2;
  }
  puVar3 = FUN_1800f93b0(*param_1,local_78);
  cVar1 = FUN_1800f9210(local_78 + 4,puVar3);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)*param_1;
    uVar6 = 0xffffffffffffffff;
    uVar7 = 0xffffffffffffffff;
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    do {
      uVar7 = uVar7 + 1;
    } while (*(char *)((longlong)param_2 + uVar7) != '\0');
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
  return;
}

// ---- Function: FUN_18011a6a0 ----
void FUN_18011a6a0(int32_t *param_1,int32_t param_2,int32_t param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  int32_t *puVar3;
  char *pcVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong local_res20;
  char *local_78;
  char *local_70;
  int32_t local_68;
  float local_60 [2];
  longlong local_58 [8];
  
  pcVar4 = (char *)*param_1;
  local_70 = "streetlight_colour";
  local_78 = "shaders";
  local_res20 = param_4;
  FUN_1800f93b0(pcVar4,local_58 + 4);
  if (*pcVar4 == '\x01') {
    plVar2 = FUN_18011c560(*(longlong **)(pcVar4 + 8),&local_res20,&local_78);
    local_58[5] = *plVar2;
  }
  puVar3 = FUN_1800f93b0(*param_1,local_58);
  cVar1 = FUN_1800f9210(local_58 + 4,puVar3);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)*param_1;
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[0] = 0;
    local_58[1] = 0;
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
  return;
}

// ---- Function: FUN_18011a880 ----
void FUN_18011a880(void)

{
  char cVar1;
  int32_t uVar2;
  float fVar3;
  int32_t uVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong *plVar7;
  FILE *_File;
  longlong lVar8;
  char *pcVar9;
  int32_t auStack_e8 [48];
  char local_b8 [8];
  char *local_b0;
  longlong *local_a8;
  char *local_a0;
  char *local_98;
  longlong local_90 [4];
  char local_70 [8];
  longlong *local_68;
  char *local_60;
  int32_t uStack_58;
  int32_t local_50;
  int32_t local_48;
  longlong local_40 [2];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_1801eb080 ^ (ulonglong)auStack_e8;
  local_70[0] = '\0';
  FUN_1800f8a10(&local_68,'\0');
  plVar7 = local_68;
  local_a8 = (longlong *)local_70;
  local_a0 = "checks";
  if (local_70[0] == '\x01') {
    plVar5 = FUN_18011c560(local_68,(longlong *)&local_98,&local_a0);
    if (*plVar5 == *plVar7) goto LAB_18011a8f4;
  }
  else {
LAB_18011a8f4:
    local_98 = local_b8;
    local_b8[0] = '\0';
    FUN_1800f8a10(&local_b0,'\0');
    local_60 = (char *)0x0;
    uStack_58 = 0;
    local_50 = 0;
    local_48 = 0;
    FUN_1800ba360(&local_60,(int32_t *)"checks",6);
    pcVar6 = (char *)FUN_1800edd90((longlong *)local_70,(longlong *)&local_60);
    cVar1 = *pcVar6;
    *pcVar6 = local_b8[0];
    pcVar9 = *(char **)(pcVar6 + 8);
    *(char **)(pcVar6 + 8) = local_b0;
    local_b8[0] = cVar1;
    local_b0 = pcVar9;
    FUN_1800f9a90((longlong *)&local_b0,cVar1);
  }
  uVar4 = DAT_1801f3a3b;
  local_98 = local_b8;
  local_b8[0] = '\0';
  local_b0 = (char *)0x0;
  FUN_1800f9a90((longlong *)&local_b0,'\0');
  local_b8[0] = '\x04';
  local_a0 = (char *)CONCAT71(local_a0._1_7_,uVar4);
  local_b0 = local_a0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  FUN_1800ba360(local_90,(int32_t *)"checks",6);
  plVar7 = (longlong *)FUN_1800edd90((longlong *)local_70,local_90);
  local_50 = 0xe;
  local_48 = 0xf;
  local_60 = (char *)s_accepted_quant_1801d8638._0_8_;
  uStack_58._0_6_ = CONCAT24(s_accepted_quant_1801d8638._12_2_,s_accepted_quant_1801d8638._8_4_);
  uStack_58 = (ulonglong)(uint6)uStack_58;
  pcVar6 = (char *)FUN_1800edd90(plVar7,(longlong *)&local_60);
  cVar1 = *pcVar6;
  *pcVar6 = local_b8[0];
  pcVar9 = *(char **)(pcVar6 + 8);
  *(char **)(pcVar6 + 8) = local_b0;
  local_b8[0] = cVar1;
  local_b0 = pcVar9;
  FUN_1800f9a90((longlong *)&local_b0,cVar1);
  plVar7 = local_68;
  local_a0 = "checks";
  if (local_70[0] == '\x01') {
    plVar5 = FUN_18011c560(local_68,(longlong *)&local_98,&local_a0);
    if (*plVar5 == *plVar7) goto LAB_18011aa5d;
  }
  else {
LAB_18011aa5d:
    local_98 = local_b8;
    local_b8[0] = '\0';
    FUN_1800f8a10(&local_b0,'\0');
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    FUN_1800ba360(local_90,(int32_t *)"checks",6);
    pcVar6 = (char *)FUN_1800edd90((longlong *)local_70,local_90);
    cVar1 = *pcVar6;
    *pcVar6 = local_b8[0];
    pcVar9 = *(char **)(pcVar6 + 8);
    *(char **)(pcVar6 + 8) = local_b0;
    local_b8[0] = cVar1;
    local_b0 = pcVar9;
    FUN_1800f9a90((longlong *)&local_b0,cVar1);
  }
  uVar4 = DAT_1801f3a3a;
  local_98 = local_b8;
  local_b8[0] = '\0';
  local_b0 = (char *)0x0;
  FUN_1800f9a90((longlong *)&local_b0,'\0');
  local_b8[0] = '\x04';
  local_a0 = (char *)CONCAT71(local_a0._1_7_,uVar4);
  local_b0 = local_a0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  FUN_1800ba360(local_90,(int32_t *)"checks",6);
  plVar7 = (longlong *)FUN_1800edd90((longlong *)local_70,local_90);
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (char *)operator_new(0x20);
  uVar2 = s_accepted_graphics_disclaimer_1801d8648._8_8_;
  local_50 = 0x1c;
  local_48 = 0x1f;
  *(int32_t *)local_60 = s_accepted_graphics_disclaimer_1801d8648._0_8_;
  *(int32_t *)(local_60 + 8) = uVar2;
  *(int32_t *)(local_60 + 0x10) = s_accepted_graphics_disclaimer_1801d8648._16_8_;
  *(int32_t *)(local_60 + 0x18) = s_accepted_graphics_disclaimer_1801d8648._24_4_;
  local_60[0x1c] = '\0';
  pcVar6 = (char *)FUN_1800edd90(plVar7,(longlong *)&local_60);
  cVar1 = *pcVar6;
  *pcVar6 = local_b8[0];
  pcVar9 = *(char **)(pcVar6 + 8);
  *(char **)(pcVar6 + 8) = local_b0;
  local_b8[0] = cVar1;
  local_b0 = pcVar9;
  FUN_1800f9a90((longlong *)&local_b0,cVar1);
  plVar7 = local_68;
  local_a0 = "clouds";
  if (local_70[0] == '\x01') {
    plVar5 = FUN_18011c560(local_68,(longlong *)&local_98,&local_a0);
    if (*plVar5 == *plVar7) goto LAB_18011abe7;
  }
  else {
LAB_18011abe7:
    local_98 = local_b8;
    local_b8[0] = '\0';
    FUN_1800f8a10(&local_b0,'\0');
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    FUN_1800ba360(local_90,(int32_t *)"clouds",6);
    pcVar6 = (char *)FUN_1800edd90((longlong *)local_70,local_90);
    cVar1 = *pcVar6;
    *pcVar6 = local_b8[0];
    pcVar9 = *(char **)(pcVar6 + 8);
    *(char **)(pcVar6 + 8) = local_b0;
    local_b8[0] = cVar1;
    local_b0 = pcVar9;
    FUN_1800f9a90((longlong *)&local_b0,cVar1);
  }
  local_98 = local_b8;
  local_b8[0] = '\0';
  local_b0 = (char *)0x0;
  pcVar9 = (char *)(longlong)DAT_1801ec1a4;
  FUN_1800f9a90((longlong *)&local_b0,'\0');
  local_b8[0] = '\x05';
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_b0 = pcVar9;
  FUN_1800ba360(local_90,(int32_t *)"clouds",6);
  plVar7 = (longlong *)FUN_1800edd90((longlong *)local_70,local_90);
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (char *)operator_new(0x20);
  uVar2 = s_clouds_technique_1801d8678._8_8_;
  local_50 = 0x10;
  local_48 = 0x1f;
  *(int32_t *)local_60 = s_clouds_technique_1801d8678._0_8_;
  *(int32_t *)(local_60 + 8) = uVar2;
  local_60[0x10] = '\0';
  pcVar6 = (char *)FUN_1800edd90(plVar7,(longlong *)&local_60);
  cVar1 = *pcVar6;
  *pcVar6 = local_b8[0];
  pcVar9 = *(char **)(pcVar6 + 8);
  *(char **)(pcVar6 + 8) = local_b0;
  local_b8[0] = cVar1;
  local_b0 = pcVar9;
  FUN_1800f9a90((longlong *)&local_b0,cVar1);
  plVar7 = local_68;
  local_a0 = "clouds";
  if (local_70[0] == '\x01') {
    plVar5 = FUN_18011c560(local_68,(longlong *)&local_98,&local_a0);
    if (*plVar5 == *plVar7) goto LAB_18011ad4d;
  }
  else {
LAB_18011ad4d:
    local_98 = local_b8;
    local_b8[0] = '\0';
    FUN_1800f8a10(&local_b0,'\0');
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    FUN_1800ba360(local_90,(int32_t *)"clouds",6);
    pcVar6 = (char *)FUN_1800edd90((longlong *)local_70,local_90);
    cVar1 = *pcVar6;
    *pcVar6 = local_b8[0];
    pcVar9 = *(char **)(pcVar6 + 8);
    *(char **)(pcVar6 + 8) = local_b0;
    local_b8[0] = cVar1;
    local_b0 = pcVar9;
    FUN_1800f9a90((longlong *)&local_b0,cVar1);
  }
  fVar3 = DAT_1801ec1a8;
  local_98 = local_b8;
  local_b8[0] = '\0';
  local_b0 = (char *)0x0;
  FUN_1800f9a90((longlong *)&local_b0,'\0');
  local_b8[0] = '\a';
  local_b0 = (char *)(double)fVar3;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  FUN_1800ba360(local_90,(int32_t *)"clouds",6);
  plVar7 = (longlong *)FUN_1800edd90((longlong *)local_70,local_90);
  local_50 = 0xc;
  local_48 = 0xf;
  local_60 = (char *)s_clouds_speed_1801d86a0._0_8_;
  uStack_58 = (ulonglong)(uint)s_clouds_speed_1801d86a0._8_4_;
  pcVar6 = (char *)FUN_1800edd90(plVar7,(longlong *)&local_60);
  cVar1 = *pcVar6;
  *pcVar6 = local_b8[0];
  pcVar9 = *(char **)(pcVar6 + 8);
  *(char **)(pcVar6 + 8) = local_b0;
  local_b8[0] = cVar1;
  local_b0 = pcVar9;
  FUN_1800f9a90((longlong *)&local_b0,cVar1);
  plVar7 = local_68;
  local_a0 = "clouds";
  if (local_70[0] == '\x01') {
    plVar5 = FUN_18011c560(local_68,(longlong *)&local_98,&local_a0);
    if (*plVar5 == *plVar7) goto LAB_18011aeab;
  }
  else {
LAB_18011aeab:
    local_98 = local_b8;
    local_b8[0] = '\0';
    FUN_1800f8a10(&local_b0,'\0');
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    FUN_1800ba360(local_90,(int32_t *)"clouds",6);
    pcVar6 = (char *)FUN_1800edd90((longlong *)local_70,local_90);
    cVar1 = *pcVar6;
    *pcVar6 = local_b8[0];
    pcVar9 = *(char **)(pcVar6 + 8);
    *(char **)(pcVar6 + 8) = local_b0;
    local_b8[0] = cVar1;
    local_b0 = pcVar9;
    FUN_1800f9a90((longlong *)&local_b0,cVar1);
  }
  local_98 = local_b8;
  local_b8[0] = '\0';
  local_b0 = (char *)0x0;
  pcVar9 = (char *)(longlong)DAT_1801ec180;
  FUN_1800f9a90((longlong *)&local_b0,'\0');
  local_b8[0] = '\x05';
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_b0 = pcVar9;
  FUN_1800ba360(local_90,(int32_t *)"clouds",6);
  plVar7 = (longlong *)FUN_1800edd90((longlong *)local_70,local_90);
  local_50 = 0xb;
  local_48 = 0xf;
  local_60 = (char *)s_step_config_1801d8690._0_8_;
  uStack_58 = (ulonglong)CONCAT12(s_step_config_1801d8690[10],s_step_config_1801d8690._8_2_);
  pcVar6 = (char *)FUN_1800edd90(plVar7,(longlong *)&local_60);
  cVar1 = *pcVar6;
  *pcVar6 = local_b8[0];
  pcVar9 = *(char **)(pcVar6 + 8);
  *(char **)(pcVar6 + 8) = local_b0;
  local_b8[0] = cVar1;
  local_b0 = pcVar9;
  FUN_1800f9a90((longlong *)&local_b0,cVar1);
  plVar7 = local_68;
  local_a0 = "clouds";
  if (local_70[0] == '\x01') {
    plVar5 = FUN_18011c560(local_68,(longlong *)&local_98,&local_a0);
    if (*plVar5 == *plVar7) goto LAB_18011b00c;
  }
  else {
LAB_18011b00c:
    local_98 = local_b8;
    local_b8[0] = '\0';
    FUN_1800f8a10(&local_b0,'\0');
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    FUN_1800ba360(local_90,(int32_t *)"clouds",6);
    pcVar6 = (char *)FUN_1800edd90((longlong *)local_70,local_90);
    cVar1 = *pcVar6;
    *pcVar6 = local_b8[0];
    pcVar9 = *(char **)(pcVar6 + 8);
    *(char **)(pcVar6 + 8) = local_b0;
    local_b8[0] = cVar1;
    local_b0 = pcVar9;
    FUN_1800f9a90((longlong *)&local_b0,cVar1);
  }
  uVar4 = DAT_1801f39f6;
  local_98 = local_b8;
  local_b8[0] = '\0';
  local_b0 = (char *)0x0;
  FUN_1800f9a90((longlong *)&local_b0,'\0');
  local_b8[0] = '\x04';
  local_a0 = (char *)CONCAT71(local_a0._1_7_,uVar4);
  local_b0 = local_a0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  FUN_1800ba360(local_90,(int32_t *)"clouds",6);
  plVar7 = (longlong *)FUN_1800edd90((longlong *)local_70,local_90);
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (char *)operator_new(0x20);
  uVar2 = s_optimized_marching_1801d86c8._8_8_;
  local_50 = 0x12;
  local_48 = 0x1f;
  *(int32_t *)local_60 = s_optimized_marching_1801d86c8._0_8_;
  *(int32_t *)(local_60 + 8) = uVar2;
  *(int32_t *)(local_60 + 0x10) = s_optimized_marching_1801d86c8._16_2_;
  local_60[0x12] = '\0';
  pcVar6 = (char *)FUN_1800edd90(plVar7,(longlong *)&local_60);
  cVar1 = *pcVar6;
  *pcVar6 = local_b8[0];
  pcVar9 = *(char **)(pcVar6 + 8);
  *(char **)(pcVar6 + 8) = local_b0;
  local_b8[0] = cVar1;
  local_b0 = pcVar9;
  FUN_1800f9a90((longlong *)&local_b0,cVar1);
  plVar7 = local_68;
  local_a0 = "clouds_config";
  if (local_70[0] == '\x01') {
    plVar5 = FUN_18011c560(local_68,(longlong *)&local_98,&local_a0);
    if (*plVar5 == *plVar7) goto LAB_18011b18b;
  }
  else {
LAB_18011b18b:
    local_98 = local_b8;
    local_b8[0] = '\0';
    FUN_1800f8a10(&local_b0,'\0');
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    FUN_1800ba360(local_90,(int32_t *)"clouds_config",0xd);
    pcVar6 = (char *)FUN_1800edd90((longlong *)local_70,local_90);
    cVar1 = *pcVar6;
    *pcVar6 = local_b8[0];
    pcVar9 = *(char **)(pcVar6 + 8);
    *(char **)(pcVar6 + 8) = local_b0;
    local_b8[0] = cVar1;
    local_b0 = pcVar9;
    FUN_1800f9a90((longlong *)&local_b0,cVar1);
  }
  local_98 = local_b8;
  local_b8[0] = '\0';
  local_b0 = (char *)0x0;
  pcVar9 = (char *)(longlong)DAT_1801f39d8;
  FUN_1800f9a90((longlong *)&local_b0,'\0');
  local_b8[0] = '\x05';
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_b0 = pcVar9;
  FUN_1800ba360(local_90,(int32_t *)"clouds_config",0xd);
  plVar7 = (longlong *)FUN_1800edd90((longlong *)local_70,local_90);
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (char *)operator_new(0x20);
  uVar2 = s_weather_extrasunny_1801d86b0._8_8_;
  local_50 = 0x12;
  local_48 = 0x1f;
  *(int32_t *)local_60 = s_weather_extrasunny_1801d86b0._0_8_;
  *(int32_t *)(local_60 + 8) = uVar2;
  *(int32_t *)(local_60 + 0x10) = s_weather_extrasunny_1801d86b0._16_2_;
  local_60[0x12] = '\0';
  pcVar6 = (char *)FUN_1800edd90(plVar7,(longlong *)&local_60);
  cVar1 = *pcVar6;
  *pcVar6 = local_b8[0];
  pcVar9 = *(char **)(pcVar6 + 8);
  *(char **)(pcVar6 + 8) = local_b0;
  local_b8[0] = cVar1;
  local_b0 = pcVar9;
  FUN_1800f9a90((longlong *)&local_b0,cVar1);
  plVar7 = local_68;
  local_a0 = "clouds_config";
  if (local_70[0] == '\x01') {
    plVar5 = FUN_18011c560(local_68,(longlong *)&local_98,&local_a0);
    if (*plVar5 == *plVar7) goto LAB_18011b2fc;
  }
  else {
LAB_18011b2fc:
    local_98 = local_b8;
    local_b8[0] = '\0';
    FUN_1800f8a10(&local_b0,'\0');
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    FUN_1800ba360(local_90,(int32_t *)"clouds_config",0xd);
    pcVar6 = (char *)FUN_1800edd90((longlong *)local_70,local_90);
    cVar1 = *pcVar6;
    *pcVar6 = local_b8[0];
    pcVar9 = *(char **)(pcVar6 + 8);
    *(char **)(pcVar6 + 8) = local_b0;
    local_b8[0] = cVar1;
    local_b0 = pcVar9;
    FUN_1800f9a90((longlong *)&local_b0,cVar1);
  }
  local_98 = local_b8;
  local_b8[0] = '\0';
  local_b0 = (char *)0x0;
  pcVar9 = (char *)(longlong)DAT_1801f39e0;
  FUN_1800f9a90((longlong *)&local_b0,'\0');
  local_b8[0] = '\x05';
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_b0 = pcVar9;
  FUN_1800ba360(local_90,(int32_t *)"clouds_config",0xd);
  plVar7 = (longlong *)FUN_1800edd90((longlong *)local_70,local_90);
  local_60 = (char *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (char *)operator_new(0x20);
  uVar2 = s_weather_clearing_1801d86e0._8_8_;
  local_50 = 0x10;
  local_48 = 0x1f;
  *(int32_t *)local_60 = s_weather_clearing_1801d86e0._0_8_;
  *(int32_t *)(local_60 + 8) = uVar2;
  local_60[0x10] = '\0';
  pcVar6 = (char *)FUN_1800edd90(plVar7,(longlong *)&local_60);
  cVar1 = *pcVar6;
  *pcVar6 = local_b8[0];
  pcVar9 = *(char **)(pcVar6 + 8);
  *(char **)(pcVar6 + 8) = local_b0;
  local_b8[0] = cVar1;
  local_b0 = pcVar9;
  FUN_1800f9a90((longlong *)&local_b0,cVar1);
  local_a0 = "clouds_config";
  if (local_70[0] == '\x01') {
    plVar7 = FUN_18011c560(local_68,(longlong *)&local_98,&local_a0);
    if (*plVar7 != *local_68) goto LAB_18011b4d3;
  }
  local_98 = local_b8;
  local_b8[0] = '\0';
  FUN_1800f8a10(&local_b0,'\0');
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  FUN_1800ba360(local_90,(int32_t *)"clouds_config",0xd);
  pcVar6 = (char *)FUN_1800edd90((longlong *)local_70,local_90);
  cVar1 = *pcVar6;
  *pcVar6 = local_b8[0];
  pcVar9 = *(char **)(pcVar6 + 8);
  *(char **)(pcVar6 + 8) = local_b0;
  local_b8[0] = cVar1;
  local_b0 = pcVar9;
  FUN_1800f9a90((longlong *)&local_b0,cVar1);
LAB_18011b4d3:
  local_98 = local_b8;
  local_b8[0] = '\0';
  local_b0 = (char *)0x0;
  pcVar9 = (char *)(longlong)DAT_1801f39dc;
  FUN_1800f9a90((longlong *)&local_b0,'\0');
  local_b8[0] = '\x05';
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_b0 = pcVar9;
  FUN_1800ba360(local_90,(int32_t *)"clouds_config",0xd);
  plVar7 = (longlong *)FUN_1800edd90((longlong *)local_70,local_90);
  local_50 = 0xe;
  local_48 = 0xf;
  local_60 = (char *)s_weather_clouds_1801d8720._0_8_;
  uStack_58._0_6_ = CONCAT24(s_weather_clouds_1801d8720._12_2_,s_weather_clouds_1801d8720._8_4_);
  uStack_58 = (ulonglong)(uint6)uStack_58;
  pcVar6 = (char *)FUN_1800edd90(plVar7,(longlong *)&local_60);
  cVar1 = *pcVar6;
  *pcVar6 = local_b8[0];
  pcVar9 = *(char **)(pcVar6 + 8);
  *(char **)(pcVar6 + 8) = local_b0;
  local_b8[0] = cVar1;
  local_b0 = pcVar9;
  FUN_1800f9a90((longlong *)&local_b0,cVar1);
  FUN_18011c020(&local_a8,"clouds_config",(int32_t *)"weather_overcast2",&DAT_1801f39d0);
  FUN_18011c020(&local_a8,"clouds_config",(int32_t *)"weather_rain2",&DAT_1801f39cc);
  FUN_18011c020(&local_a8,"clouds_config",(int32_t *)"weather_thunder",&DAT_1801f39c8);
  FUN_18011be60(&local_a8,"shaders",(int32_t *)"override_shaders",&DAT_1801fb100);
  FUN_18011c020(&local_a8,"shaders",(int32_t *)"current_rain_config",&DAT_1801f3a20);
  FUN_18011be60(&local_a8,"reshade",(int32_t *)"msaa_acknowledged",&DAT_1801f3a39);
  FUN_18011be60(&local_a8,"timecycle",(int32_t *)"brighten_nights",&DAT_1801f39f5);
  pcVar6 = "targeted_sparkles";
  pcVar9 = "shaders";
  FUN_18011be60(&local_a8,"shaders",(int32_t *)"targeted_sparkles",&DAT_1801f3a24);
  FUN_18011c3a0(&local_a8,pcVar9,(longlong)pcVar6);
  FUN_18011c1d0(&local_a8,"shaders",(int32_t *)"b958fbdd",(float *)&DAT_1801ebe38);
  FUN_18011c1d0(&local_a8,"shaders",(int32_t *)"global_multiplier",(float *)&DAT_1801ebd78);
  FUN_18011c020(&local_a8,"shaders",(int32_t *)"aurora_preset_id",&DAT_1801f39ec);
  FUN_18011be60(&local_a8,"shaders",(int32_t *)"aurora_enabled",&DAT_1801f39f4);
  FUN_18011c020(&local_a8,"graphics",(int32_t *)"mb_config",&DAT_1801ebe34);
  FUN_18011c1d0(&local_a8,"graphics",(int32_t *)"mb_sample_size",(float *)&DAT_1801ebe30);
  FUN_18011c1d0(&local_a8,"graphics",(int32_t *)"mb_ghosting",(float *)&DAT_1801ebe28);
  FUN_18011c1d0(&local_a8,"graphics",(int32_t *)"mb_length_mult",(float *)&DAT_1801ebe2c);
  FUN_18011be60(&local_a8,"graphics",(int32_t *)"experimental_directional_shadows",&DAT_1801ebe25
               );
  FUN_18011be60(&local_a8,"graphics",(int32_t *)"headlights_dynamic_shadows",&DAT_1801ebe24);
  FUN_18011be60(&local_a8,"graphics",(int32_t *)"volumetrics",&DAT_1801ebe14);
  FUN_18011be60(&local_a8,"graphics",(int32_t *)"dynamic_lighting",&DAT_1801f3a12);
  FUN_18011c020(&local_a8,"graphics",(int32_t *)"reflection_quality_level",&DAT_1801ebe1c);
  FUN_18011be60(&local_a8,"graphics",(int32_t *)"extended_shadows_enabled",&DAT_1801f3a14);
  FUN_18011be60(&local_a8,"graphics",(int32_t *)"extended_reflections_enabled",&DAT_1801f3a18);
  FUN_18011be60(&local_a8,"graphics",(int32_t *)"enable_peds_in_reflections",&DAT_1801f3a1c);
  FUN_18011be60(&local_a8,"graphics",(int32_t *)"enable_vehicles_in_reflections",&DAT_1801f3a1b);
  FUN_18011be60(&local_a8,"graphics",(int32_t *)"enable_buildings_in_reflections",&DAT_1801f3a1a)
  ;
  FUN_18011be60(&local_a8,"graphics",(int32_t *)"hq_reflection_lods",&DAT_1801f3a17);
  FUN_18011c020(&local_a8,"graphics",(int32_t *)"shadow_resolution",&DAT_1801ebe18);
  FUN_18011c020(&local_a8,"graphics",(int32_t *)"reflection_resolution",&DAT_1801ebe20);
  FUN_18011be60(&local_a8,"graphics",(int32_t *)"unclamp_shadow_size",&DAT_1801f3a13);
  FUN_18011be60(&local_a8,"graphics",(int32_t *)"enable_map_objects",&DAT_1801f3a16);
  FUN_18011c1d0(&local_a8,"freecam",(int32_t *)"mouse_sensitivity",(float *)&DAT_1801ebdcc);
  FUN_18011be60(&local_a8,"freecam",(int32_t *)"hide_player",&DAT_1801f39e9);
  FUN_18011be60(&local_a8,"freecam",(int32_t *)"hide_player_and_vehicle",&DAT_1801f39e8);
  FUN_18011be60(&local_a8,"freecam",(int32_t *)"keep_tcmod_active",&DAT_1801f39e7);
  FUN_18011c1d0(&local_a8,"freecam",(int32_t *)"camera_speed",(float *)&DAT_1801ebdd0);
  FUN_18011be60(&local_a8,"freecam",(int32_t *)"dof_enabled",&DAT_1801f39e5);
  FUN_18011c1d0(&local_a8,"freecam",(int32_t *)"dof_strength",(float *)&DAT_1801ebdb4);
  FUN_18011c1d0(&local_a8,"freecam",(int32_t *)"dof_distance",(float *)&DAT_1801ebdb0);
  FUN_18011c020(&local_a8,"keybinds",(int32_t *)"freecam_toggle_key_2024",&DAT_1801ebdac);
  FUN_18011c020(&local_a8,"keybinds",(int32_t *)"freecam_slomo_key_2024",&DAT_1801ebda8);
  FUN_18011c020(&local_a8,"keybinds",(int32_t *)"freecam_forward_key_2024",&DAT_1801ebda4);
  FUN_18011c020(&local_a8,"keybinds",(int32_t *)"freecam_back_key_2024",&DAT_1801ebda0);
  FUN_18011c020(&local_a8,"keybinds",(int32_t *)"freecam_left_key_2024",&DAT_1801ebd9c);
  FUN_18011c020(&local_a8,"keybinds",(int32_t *)"freecam_right_key_2024",&DAT_1801ebd98);
  FUN_18011c020(&local_a8,"keybinds",(int32_t *)"freecam_up_key_2024",&DAT_1801ebd94);
  FUN_18011c020(&local_a8,"keybinds",(int32_t *)"freecam_down_key_2024",&DAT_1801ebd90);
  FUN_18011c020(&local_a8,"keybinds",(int32_t *)"freecam_double_speed_key_2024",&DAT_1801ebd84);
  FUN_18011c020(&local_a8,"keybinds",(int32_t *)"freecam_fov_increase_2024",&DAT_1801ebd88);
  FUN_18011c020(&local_a8,"keybinds",(int32_t *)"freecam_fov_decrease_2024",&DAT_1801ebd8c);
  FUN_18011c020(&local_a8,"keybinds",(int32_t *)"freecam_rotate_left_2024",&DAT_1801ebd80);
  FUN_18011c020(&local_a8,"keybinds",(int32_t *)"freecam_rotate_right_2024",&DAT_1801ebd7c);
  FUN_18011c1d0(&local_a8,"emissive_lights_day",(int32_t *)"headlights",(float *)&DAT_1801ebd74);
  FUN_18011c1d0(&local_a8,"emissive_lights_day",(int32_t *)"taillights",(float *)&DAT_1801ebd70);
  FUN_18011c1d0(&local_a8,"emissive_lights_day",(int32_t *)"indicators",(float *)&DAT_1801ebd6c);
  FUN_18011c1d0(&local_a8,"emissive_lights_day",(int32_t *)"reversing_lights",
                (float *)&DAT_1801ebd68);
  FUN_18011c1d0(&local_a8,"emissive_lights_day",(int32_t *)"default_lights",
                (float *)&DAT_1801ebd64);
  FUN_18011c1d0(&local_a8,"emissive_lights_day",(int32_t *)"brake_lights",(float *)&DAT_1801ebd60
               );
  FUN_18011c1d0(&local_a8,"emissive_lights_day",(int32_t *)"middle_brake_lights",
                (float *)&DAT_1801ebd5c);
  FUN_18011c1d0(&local_a8,"emissive_lights_day",(int32_t *)"extra_lights",(float *)&DAT_1801ebd58
               );
  FUN_18011c1d0(&local_a8,"emissive_lights_day",(int32_t *)"siren_lights",(float *)&DAT_1801ebd54
               );
  FUN_18011c1d0(&local_a8,"emissive_lights_night",(int32_t *)"headlights",(float *)&DAT_1801ebd50
               );
  FUN_18011c1d0(&local_a8,"emissive_lights_night",(int32_t *)"taillights",(float *)&DAT_1801ebd4c
               );
  FUN_18011c1d0(&local_a8,"emissive_lights_night",(int32_t *)"indicators",(float *)&DAT_1801ebd48
               );
  FUN_18011c1d0(&local_a8,"emissive_lights_night",(int32_t *)"reversing_lights",
                (float *)&DAT_1801ebd44);
  FUN_18011c1d0(&local_a8,"emissive_lights_night",(int32_t *)"default_lights",
                (float *)&DAT_1801ebd40);
  FUN_18011c1d0(&local_a8,"emissive_lights_night",(int32_t *)"brake_lights",
                (float *)&DAT_1801ebd3c);
  FUN_18011c1d0(&local_a8,"emissive_lights_night",(int32_t *)"middle_brake_lights",
                (float *)&DAT_1801ebd38);
  FUN_18011c1d0(&local_a8,"emissive_lights_night",(int32_t *)"extra_lights",
                (float *)&DAT_1801ebd34);
  pcVar6 = "siren_lights";
  pcVar9 = "emissive_lights_night";
  FUN_18011c1d0(&local_a8,"emissive_lights_night",(int32_t *)"siren_lights",
                (float *)&DAT_1801ebd30);
  _File = (FILE *)FUN_180117e60('\0',pcVar9,(int32_t **)pcVar6);
  FUN_1800eb7a0(local_70,local_40);
  lVar8 = FUN_1800f8830(local_40,0);
  FUN_18012e4a0(lVar8,local_30,1,(longlong)_File);
  fflush(_File);
  FUN_18012f050((int *)_File);
  FUN_1800a6800(local_40);
  FUN_1800f9a90((longlong *)&local_68,local_70[0]);
  FUN_1801252c0(local_20 ^ (ulonglong)auStack_e8);
  return;
}

// ---- Function: FUN_18011be60 ----
void FUN_18011be60(int32_t *param_1,char *param_2,int32_t *param_3,int32_t *param_4)

{
  char cVar1;
  int32_t uVar2;
  char *pcVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *local_res8;
  char *local_res10;
  char local_88 [8];
  char *local_80;
  char *local_78;
  int32_t uStack_70;
  int32_t local_68;
  int32_t local_60;
  char *local_58;
  int32_t uStack_50;
  int32_t local_48;
  int32_t local_40;
  
  uVar7 = 0xffffffffffffffff;
  if (*(char *)*param_1 == '\x01') {
    plVar6 = *(longlong **)((char *)*param_1 + 8);
    local_res10 = param_2;
    plVar4 = FUN_18011c560(plVar6,(longlong *)&local_res8,&local_res10);
    if (*plVar4 != *plVar6) goto LAB_18011bf30;
  }
  local_res10 = local_88;
  local_88[0] = '\0';
  FUN_1800f8a10(&local_80,'\0');
  plVar6 = (longlong *)*param_1;
  local_78 = (char *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uVar8 = 0xffffffffffffffff;
  do {
    uVar8 = uVar8 + 1;
  } while (param_2[uVar8] != '\0');
  FUN_1800ba360(&local_78,(int32_t *)param_2,uVar8);
  pcVar5 = (char *)FUN_1800edd90(plVar6,(longlong *)&local_78);
  cVar1 = *pcVar5;
  *pcVar5 = local_88[0];
  pcVar3 = *(char **)(pcVar5 + 8);
  *(char **)(pcVar5 + 8) = local_80;
  local_88[0] = cVar1;
  local_80 = pcVar3;
  FUN_1800f9a90((longlong *)&local_80,cVar1);
LAB_18011bf30:
  local_res8 = local_88;
  local_88[0] = '\0';
  local_80 = (char *)0x0;
  uVar2 = *param_4;
  FUN_1800f9a90((longlong *)&local_80,'\0');
  local_88[0] = '\x04';
  local_res10 = (char *)CONCAT71(local_res10._1_7_,uVar2);
  local_80 = local_res10;
  plVar6 = (longlong *)*param_1;
  local_78 = (char *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uVar8 = 0xffffffffffffffff;
  do {
    uVar8 = uVar8 + 1;
  } while (param_2[uVar8] != '\0');
  FUN_1800ba360(&local_78,(int32_t *)param_2,uVar8);
  plVar6 = (longlong *)FUN_1800edd90(plVar6,(longlong *)&local_78);
  local_58 = (char *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  do {
    uVar7 = uVar7 + 1;
  } while (*(char *)((longlong)param_3 + uVar7) != '\0');
  FUN_1800ba360(&local_58,param_3,uVar7);
  pcVar5 = (char *)FUN_1800edd90(plVar6,(longlong *)&local_58);
  cVar1 = *pcVar5;
  *pcVar5 = local_88[0];
  pcVar3 = *(char **)(pcVar5 + 8);
  *(char **)(pcVar5 + 8) = local_80;
  local_88[0] = cVar1;
  local_80 = pcVar3;
  FUN_1800f9a90((longlong *)&local_80,cVar1);
  return;
}

// ---- Function: FUN_18011c020 ----
void FUN_18011c020(int32_t *param_1,char *param_2,int32_t *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_res8;
  char *local_res10;
  char local_88 [8];
  longlong local_80 [9];
  
  uVar7 = 0xffffffffffffffff;
  if (*(char *)*param_1 == '\x01') {
    plVar6 = *(longlong **)((char *)*param_1 + 8);
    local_res10 = param_2;
    plVar4 = FUN_18011c560(plVar6,&local_res8,&local_res10);
    if (*plVar4 != *plVar6) goto LAB_18011c0f0;
  }
  local_res10 = local_88;
  local_88[0] = '\0';
  FUN_1800f8a10(local_80,'\0');
  plVar6 = (longlong *)*param_1;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  uVar8 = 0xffffffffffffffff;
  do {
    uVar8 = uVar8 + 1;
  } while (param_2[uVar8] != '\0');
  FUN_1800ba360(local_80 + 1,(int32_t *)param_2,uVar8);
  pcVar5 = (char *)FUN_1800edd90(plVar6,local_80 + 1);
  cVar1 = *pcVar5;
  *pcVar5 = local_88[0];
  lVar3 = *(longlong *)(pcVar5 + 8);
  *(longlong *)(pcVar5 + 8) = local_80[0];
  local_88[0] = cVar1;
  local_80[0] = lVar3;
  FUN_1800f9a90(local_80,cVar1);
LAB_18011c0f0:
  local_res10 = local_88;
  local_88[0] = '\0';
  local_80[0] = 0;
  iVar2 = *param_4;
  FUN_1800f9a90(local_80,'\0');
  local_88[0] = '\x05';
  plVar6 = (longlong *)*param_1;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  uVar8 = 0xffffffffffffffff;
  do {
    uVar8 = uVar8 + 1;
  } while (param_2[uVar8] != '\0');
  local_80[0] = (longlong)iVar2;
  FUN_1800ba360(local_80 + 1,(int32_t *)param_2,uVar8);
  plVar6 = (longlong *)FUN_1800edd90(plVar6,local_80 + 1);
  local_80[5] = 0;
  local_80[6] = 0;
  local_80[7] = 0;
  local_80[8] = 0;
  do {
    uVar7 = uVar7 + 1;
  } while (*(char *)((longlong)param_3 + uVar7) != '\0');
  FUN_1800ba360(local_80 + 5,param_3,uVar7);
  pcVar5 = (char *)FUN_1800edd90(plVar6,local_80 + 5);
  cVar1 = *pcVar5;
  *pcVar5 = local_88[0];
  lVar3 = *(longlong *)(pcVar5 + 8);
  *(longlong *)(pcVar5 + 8) = local_80[0];
  local_88[0] = cVar1;
  local_80[0] = lVar3;
  FUN_1800f9a90(local_80,cVar1);
  return;
}

// ---- Function: FUN_18011c1d0 ----
void FUN_18011c1d0(int32_t *param_1,char *param_2,int32_t *param_3,float *param_4)

{
  float fVar1;
  char cVar2;
  double dVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong local_res8;
  char *local_res10;
  char local_98 [8];
  double local_90;
  longlong local_88 [10];
  
  uVar7 = 0xffffffffffffffff;
  if (*(char *)*param_1 == '\x01') {
    plVar6 = *(longlong **)((char *)*param_1 + 8);
    local_res10 = param_2;
    plVar4 = FUN_18011c560(plVar6,&local_res8,&local_res10);
    if (*plVar4 != *plVar6) goto LAB_18011c2ad;
  }
  local_res10 = local_98;
  local_98[0] = '\0';
  FUN_1800f8a10(&local_90,'\0');
  plVar6 = (longlong *)*param_1;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  uVar8 = 0xffffffffffffffff;
  do {
    uVar8 = uVar8 + 1;
  } while (param_2[uVar8] != '\0');
  FUN_1800ba360(local_88,(int32_t *)param_2,uVar8);
  pcVar5 = (char *)FUN_1800edd90(plVar6,local_88);
  cVar2 = *pcVar5;
  *pcVar5 = local_98[0];
  dVar3 = *(double *)(pcVar5 + 8);
  *(double *)(pcVar5 + 8) = local_90;
  local_98[0] = cVar2;
  local_90 = dVar3;
  FUN_1800f9a90((longlong *)&local_90,cVar2);
LAB_18011c2ad:
  local_res10 = local_98;
  local_98[0] = '\0';
  local_90 = 0.0;
  fVar1 = *param_4;
  FUN_1800f9a90((longlong *)&local_90,'\0');
  local_98[0] = '\a';
  local_90 = (double)fVar1;
  plVar6 = (longlong *)*param_1;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  uVar8 = 0xffffffffffffffff;
  do {
    uVar8 = uVar8 + 1;
  } while (param_2[uVar8] != '\0');
  FUN_1800ba360(local_88,(int32_t *)param_2,uVar8);
  plVar6 = (longlong *)FUN_1800edd90(plVar6,local_88);
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  do {
    uVar7 = uVar7 + 1;
  } while (*(char *)((longlong)param_3 + uVar7) != '\0');
  FUN_1800ba360(local_88 + 4,param_3,uVar7);
  pcVar5 = (char *)FUN_1800edd90(plVar6,local_88 + 4);
  cVar2 = *pcVar5;
  *pcVar5 = local_98[0];
  dVar3 = *(double *)(pcVar5 + 8);
  *(double *)(pcVar5 + 8) = local_90;
  local_98[0] = cVar2;
  local_90 = dVar3;
  FUN_1800f9a90((longlong *)&local_90,cVar2);
  return;
}

// ---- Function: FUN_18011c3a0 ----
void FUN_18011c3a0(int32_t *param_1,int32_t param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong local_res18;
  char *local_res20;
  char local_68 [8];
  longlong local_60 [9];
  
  local_res20 = "shaders";
  local_res18 = param_3;
  if (*(char *)*param_1 == '\x01') {
    plVar5 = *(longlong **)((char *)*param_1 + 8);
    plVar3 = FUN_18011c560(plVar5,&local_res18,&local_res20);
    if (*plVar3 != *plVar5) goto LAB_18011c467;
  }
  local_res20 = local_68;
  local_68[0] = '\0';
  FUN_1800f8a10(local_60,'\0');
  plVar5 = (longlong *)*param_1;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  FUN_1800ba360(local_60 + 1,(int32_t *)"shaders",7);
  pcVar4 = (char *)FUN_1800edd90(plVar5,local_60 + 1);
  cVar1 = *pcVar4;
  *pcVar4 = local_68[0];
  lVar2 = *(longlong *)(pcVar4 + 8);
  *(longlong *)(pcVar4 + 8) = local_60[0];
  local_68[0] = cVar1;
  local_60[0] = lVar2;
  FUN_1800f9a90(local_60,cVar1);
LAB_18011c467:
  local_res20 = local_68;
  local_68[0] = '\0';
  local_60[0] = 0;
  FUN_1800fdac0(local_68,(float *)&DAT_1801ec480);
  plVar5 = (longlong *)*param_1;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  FUN_1800ba360(local_60 + 1,(int32_t *)"shaders",7);
  plVar5 = (longlong *)FUN_1800edd90(plVar5,local_60 + 1);
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  local_60[8] = 0;
  FUN_1800ba360(local_60 + 5,(int32_t *)"streetlight_colour",0x12);
  pcVar4 = (char *)FUN_1800edd90(plVar5,local_60 + 5);
  cVar1 = *pcVar4;
  *pcVar4 = local_68[0];
  lVar2 = *(longlong *)(pcVar4 + 8);
  *(longlong *)(pcVar4 + 8) = local_60[0];
  local_68[0] = cVar1;
  local_60[0] = lVar2;
  FUN_1800f9a90(local_60,cVar1);
  return;
}

// ---- Function: FUN_18011c530 ----
float FUN_18011c530(char *param_1)

{
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FUN_1800fe3d0(param_1,local_res10);
  return local_res10[0];
}

// ---- Function: FUN_18011c560 ----
longlong * FUN_18011c560(longlong *param_1,longlong *param_2,int32_t *param_3)

{
  longlong *plVar1;
  void *pvVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong _Size;
  bool bVar9;
  
  plVar1 = (longlong *)*param_1;
  plVar8 = (longlong *)plVar1[1];
  plVar6 = plVar1;
  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    pvVar2 = (void *)*param_3;
    plVar7 = plVar1;
    do {
      uVar5 = FUN_1800fe860(plVar8 + 4,pvVar2);
      bVar9 = (char)uVar5 < '\0';
      plVar6 = plVar8;
      if (bVar9) {
        plVar6 = plVar7;
      }
      plVar7 = plVar8 + 2;
      if (!bVar9) {
        plVar7 = plVar8;
      }
      plVar8 = (longlong *)*plVar7;
      plVar7 = plVar6;
    } while (*(char *)((longlong)plVar8 + 0x19) == '\0');
  }
  if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
    plVar8 = plVar6 + 4;
    uVar5 = 0xffffffffffffffff;
    do {
      uVar5 = uVar5 + 1;
    } while (*(char *)((longlong)*param_3 + uVar5) != '\0');
    uVar3 = plVar6[6];
    if (0xf < (ulonglong)plVar6[7]) {
      plVar8 = (longlong *)*plVar8;
    }
    _Size = uVar3;
    if (uVar5 < uVar3) {
      _Size = uVar5;
    }
    iVar4 = memcmp(plVar8,(void *)*param_3,_Size);
    if (iVar4 == 0) {
      if ((uVar3 < uVar5) || (uVar3 <= uVar5)) goto LAB_18011c622;
    }
    else if (iVar4 < 0) {
LAB_18011c622:
      *param_2 = (longlong)plVar6;
      return param_2;
    }
  }
  *param_2 = (longlong)plVar1;
  return param_2;
}

// ---- Function: FUN_18011c630 ----
longlong * FUN_18011c630(longlong *param_1,int32_t param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  uVar4 = 0xffffffffffffffff;
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (*(char *)(*param_3 + lVar1) != '\0');
  uVar2 = lVar3 + 0x1e;
  if (0xf < uVar2) {
    FUN_1800b9630(param_1,uVar2);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"type must be boolean, but is ",0x1d);
  do {
    uVar4 = uVar4 + 1;
  } while (*(char *)(*param_3 + uVar4) != '\0');
  FUN_1800b9910(param_1,(int32_t *)*param_3,uVar4);
  return param_1;
}

// ---- Function: FUN_18011c6f0 ----
uint FUN_18011c6f0(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x10) < DAT_1801fcfd0) && (FUN_180125398(&DAT_1801fcfd0), DAT_1801fcfd0 == -1)) {
    FUN_18011d240();
    _Init_thread_footer(&DAT_1801fcfd0);
  }
  uVar4 = param_1 ^ 0x80000000;
  iVar2 = (param_2 ^ 0x80000000) - uVar4;
  if (iVar2 != -1) {
    uVar3 = iVar2 + 1;
    uVar1 = FUN_18011d2a0((uint *)&DAT_1801fcfe0);
    lVar5 = (ulonglong)uVar1 * (ulonglong)uVar3;
    uVar1 = (uint)lVar5;
    if (uVar1 < uVar3) {
      while (uVar1 < -uVar3 % uVar3) {
        uVar1 = FUN_18011d2a0((uint *)&DAT_1801fcfe0);
        lVar5 = (ulonglong)uVar1 * (ulonglong)uVar3;
        uVar1 = (uint)lVar5;
      }
    }
    return uVar4 + (int)((ulonglong)lVar5 >> 0x20) ^ 0x80000000;
  }
  uVar1 = FUN_18011d2a0((uint *)&DAT_1801fcfe0);
  return uVar4 + uVar1 ^ 0x80000000;
}

// ---- Function: FUN_18011c7e0 ----
void FUN_18011c7e0(char *param_1)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  int32_t ****ppppuVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *pcVar7;
  int32_t auStack_78 [32];
  byte local_48;
  int32_t ***local_40;
  int32_t uStack_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1801eb080 ^ (ulonglong)auStack_78;
  uStack_38 = 0;
  uVar5 = 0;
  local_30 = 0;
  local_28 = 0xf;
  local_40 = (int32_t ****)0x0;
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  if (uVar3 == 0) {
    local_30 = uVar3;
                    
    local_40._0_1_ = 0;
  }
  else if (uVar3 < 0x10) {
    local_30 = uVar3;
    FUN_180151670((int32_t (*) [32])&local_40,0,uVar3);
    *(int32_t *)((longlong)&local_40 + uVar3) = 0;
  }
  else {
    FUN_1800b8fd0((int32_t *)&local_40,uVar3,(ulonglong)local_48,uVar3,0);
  }
  ppppuVar4 = &local_40;
  if (0xf < local_28) {
    ppppuVar4 = (int32_t ****)local_40;
  }
  if (*(ulonglong *)(param_1 + 0x18) < 0x10) {
    pcVar7 = param_1 + *(longlong *)(param_1 + 0x10);
  }
  else {
    pcVar7 = *(char **)param_1 + *(longlong *)(param_1 + 0x10);
    param_1 = *(char **)param_1;
  }
  if (param_1 != pcVar7) {
    lVar6 = (longlong)ppppuVar4 - (longlong)param_1;
    do {
      iVar2 = tolower((int)*param_1);
      param_1[lVar6] = (char)iVar2;
      param_1 = param_1 + 1;
    } while (param_1 != pcVar7);
  }
  while( true ) {
    ppppuVar4 = &local_40;
    if (0xf < local_28) {
      ppppuVar4 = (int32_t ****)local_40;
    }
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (*(char *)((longlong)ppppuVar4 + uVar3) != '\0');
    if (uVar3 <= uVar5) break;
    if (local_30 <= uVar5) goto LAB_18011c991;
    uVar5 = uVar5 + 1;
  }
  if (0xf < local_28) {
    ppppuVar4 = (int32_t ****)local_40;
    if ((0xfff < local_28 + 1) &&
       (ppppuVar4 = (int32_t ****)local_40[-1],
       0x1f < (ulonglong)((longlong)local_40 + (-8 - (longlong)ppppuVar4)))) {
      FUN_18012b7b4();
LAB_18011c991:
      FUN_1800b7330();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(ppppuVar4);
  }
  FUN_1801252c0(local_20 ^ (ulonglong)auStack_78);
  return;
}

// ---- Function: FUN_18011c9a0 ----
ulonglong * FUN_18011c9a0(ulonglong *param_1,longlong *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *pvVar4;
  void *pvVar5;
  ulonglong *puVar6;
  __uint64 _Var7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  
  pvVar5 = (void *)0x0;
  if ((ulonglong)param_2[3] < 0x10) {
    plVar9 = (longlong *)(param_2[2] + (longlong)param_2);
  }
  else {
    plVar9 = (longlong *)(param_2[2] + *param_2);
    param_2 = (longlong *)*param_2;
  }
  uVar8 = 7;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  if (param_2 == plVar9) {
    *(int32_t *)param_1 = 0;
    return param_1;
  }
  uVar10 = (longlong)plVar9 - (longlong)param_2;
  if (0x7ffffffffffffffe < uVar10) {
    FUN_1800ba540();
    pcVar1 = (code *)swi(3);
    puVar6 = (ulonglong *)(*pcVar1)();
    return puVar6;
  }
  if (uVar10 < 8) goto LAB_18011caa3;
  uVar8 = uVar10 | 7;
  if (uVar8 < 0x7fffffffffffffff) {
    if (uVar8 < 10) {
      uVar8 = 10;
    }
    if (0x7fffffffffffffff < uVar8 + 1) goto LAB_18011cb01;
    _Var7 = (uVar8 + 1) * 2;
    if (_Var7 != 0) goto LAB_18011ca36;
  }
  else {
    uVar8 = 0x7ffffffffffffffe;
    _Var7 = 0xfffffffffffffffe;
LAB_18011ca36:
    if (_Var7 < 0x1000) {
      pvVar5 = operator_new(_Var7);
    }
    else {
      if (_Var7 + 0x27 <= _Var7) {
LAB_18011cb01:
        FUN_1800ba8a0();
        pcVar1 = (code *)swi(3);
        puVar6 = (ulonglong *)(*pcVar1)();
        return puVar6;
      }
      pvVar4 = operator_new(_Var7 + 0x27);
      if (pvVar4 == (void *)0x0) {
        FUN_18012b7b4();
        pcVar1 = (code *)swi(3);
        puVar6 = (ulonglong *)(*pcVar1)();
        return puVar6;
      }
      pvVar5 = (void *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
      *(void **)((longlong)pvVar5 - 8) = pvVar4;
    }
  }
  *param_1 = (ulonglong)pvVar5;
  param_1[3] = uVar8;
LAB_18011caa3:
  uVar2 = uVar10;
  puVar6 = param_1;
  puVar11 = param_1;
  if (7 < uVar8) {
    puVar6 = (ulonglong *)*param_1;
    puVar11 = puVar6;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    lVar3 = *param_2;
    param_2 = (longlong *)((longlong)param_2 + 1);
    *(short *)puVar6 = (short)(char)lVar3;
    puVar6 = (ulonglong *)((longlong)puVar6 + 2);
  }
  param_1[2] = uVar10;
  *(short *)((longlong)puVar11 + uVar10 * 2) = 0;
  return param_1;
}

// ---- Function: FUN_18011cb10 ----
void FUN_18011cb10(int32_t *param_1,int32_t *param_2,int32_t **param_3)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  int32_t uVar4;
  LPCWSTR **pppWVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  int32_t auStackY_98 [32];
  int32_t *local_58;
  ulonglong local_50;
  LPCWSTR *local_40 [3];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1801eb080 ^ (ulonglong)auStackY_98;
  local_58 = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801fe368) {
    FUN_180125398(&DAT_1801fe368);
    if (DAT_1801fe368 == -1) {
      atexit((_func_5014 *)&LAB_180156910);
      _Init_thread_footer(&DAT_1801fe368);
    }
  }
  if (DAT_1801ec2a8 == 0) {
    pcVar3 = common_getenv<char>("appdata");
    uVar7 = 0xffffffffffffffff;
    do {
      uVar7 = uVar7 + 1;
    } while (pcVar3[uVar7] != '\0');
    FUN_1800de6e0((longlong *)&DAT_1801ec298,(int32_t *)pcVar3,uVar7);
    FUN_1800b9910((longlong *)&DAT_1801ec298,(int32_t *)"\\NVE\\",5);
    local_50 = DAT_1801ec2a8;
    puVar6 = &DAT_1801ec298;
    if (0xf < DAT_1801ec2b0) {
      puVar6 = DAT_1801ec298;
    }
    uVar7 = __std_fs_code_page();
    param_3 = &local_58;
    local_58 = puVar6;
    FUN_1800aab10((LPWSTR)local_40,(UINT)uVar7,param_3);
    pppWVar5 = local_40;
    if (7 < local_28) {
      pppWVar5 = (LPCWSTR **)local_40[0];
    }
    uVar4 = __std_fs_create_directory((LPCWSTR)pppWVar5);
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar2 != 0) goto LAB_18011ccd3;
    FUN_1800ba040((longlong *)local_40);
  }
  uVar7 = param_2[2];
  if (uVar7 <= 0x7fffffffffffffff - DAT_1801ec2a8) {
    puVar6 = &DAT_1801ec298;
    if (0xf < DAT_1801ec2b0) {
      puVar6 = DAT_1801ec298;
    }
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (int32_t *)*param_2;
    }
    FUN_1800cfa40(param_1,uVar7,param_3,puVar6,DAT_1801ec2a8,param_2,uVar7);
    FUN_1801252c0(local_20 ^ (ulonglong)auStackY_98);
    return;
  }
  FUN_1800ba540();
  iVar2 = (int)(uVar7 >> 0x20);
LAB_18011ccd3:
  FUN_1800b8c40((int32_t *)"create_directory",iVar2,local_40);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_18011ccf0 ----
void FUN_18011ccf0(void)

{
  DWORD dwLen;
  BOOL BVar1;
  HMODULE hModule;
  void *lpData;
  int32_t auStack_248 [32];
  LPVOID local_228;
  uint local_220 [2];
  CHAR local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_248;
  if (DAT_1801ec294 == 0xffffffff) {
    hModule = GetModuleHandleW((LPCWSTR)0x0);
    GetModuleFileNameA(hModule,local_218,0x200);
    dwLen = GetFileVersionInfoSizeA(local_218,(LPDWORD)0x0);
    if (dwLen != 0) {
      lpData = operator_new((ulonglong)dwLen);
      BVar1 = GetFileVersionInfoA(local_218,0,dwLen,lpData);
      if ((BVar1 == 0) ||
         (BVar1 = VerQueryValueW(lpData,L"\\",&local_228,local_220), lpData = local_228, BVar1 == 0)
         ) {
        thunk_FUN_18012d5e8(lpData);
      }
      else {
        DAT_1801ec294 = (uint)*(ushort *)((longlong)local_228 + 0x16);
      }
    }
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_248);
  return;
}

// ---- Function: FUN_18011cdd0 ----
void FUN_18011cdd0(int *param_1,int *param_2)

{
  longlong lVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  longlong *plVar7;
  int32_t auStack_d8 [32];
  char *local_b8;
  int32_t local_b0;
  longlong local_a8 [3];
  int32_t uStack_90;
  longlong local_88 [3];
  int32_t uStack_70;
  longlong *local_60;
  int32_t local_58;
  longlong lStack_50;
  int32_t local_48;
  HMODULE local_40;
  int32_t local_38;
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_d8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x10) < DAT_1801fe378) && (FUN_180125398(&DAT_1801fe378), DAT_1801fe378 == -1)) {
    local_40 = GetModuleHandleW((LPCWSTR)0x0);
    DAT_1801ee910 = local_40 + -0x50000000;
    local_a8[1] = 0;
    local_a8[2] = _DAT_1801d8f70;
    uStack_90 = _UNK_1801d8f78;
    local_a8[0] = 0;
    local_88[1] = 0;
    local_88[2] = _DAT_1801d8f70;
    uStack_70 = _UNK_1801d8f78;
    local_88[0] = 0;
    local_60 = (longlong *)0x0;
    local_58 = 0;
    lStack_50 = 0;
    local_48 = 0;
    local_38 = 0;
    local_b8 = "C7 05 ? ? ? ? 00 05 00 00";
    local_b0 = 0x19;
    FUN_180117400(local_a8,&local_b8);
    FUN_1801175d0(local_a8,1);
    FUN_1801175d0(local_a8,0xffffffff);
    lVar1 = *local_60;
    if (local_60 != (longlong *)0x0) {
      plVar7 = local_60;
      if ((0xfff < (lStack_50 - (longlong)local_60 & 0xfffffffffffffff8U)) &&
         (plVar7 = (longlong *)local_60[-1],
         0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)plVar7)))) {
        FUN_18012b7b4();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      thunk_FUN_18012d5e8(plVar7);
      local_60 = (longlong *)0x0;
      local_58 = 0;
      lStack_50 = 0;
    }
    FUN_1800a6800(local_88);
    FUN_1800a6800(local_a8);
    DAT_1801fe370 = (int *)((longlong)*(int *)(lVar1 + 2) + 8 + lVar1 + 2);
    _Init_thread_footer(&DAT_1801fe378);
  }
  piVar3 = DAT_1801fe370;
  if (DAT_1801fe370 == (int *)0x0) {
    *param_1 = 0;
    *param_2 = 0;
    iVar4 = DAT_1801fe380;
    iVar5 = DAT_1801fe384;
  }
  else {
    *param_1 = *DAT_1801fe370;
    *param_2 = piVar3[1];
    cVar6 = FUN_18011d000();
    if (cVar6 != '\0') {
      iVar4 = *param_1;
      iVar5 = *param_2;
      if (*param_1 != *param_2) goto LAB_18011cfcd;
    }
    *param_1 = DAT_1801fe380;
    *param_2 = DAT_1801fe384;
    iVar4 = DAT_1801fe380;
    iVar5 = DAT_1801fe384;
  }
LAB_18011cfcd:
  DAT_1801fe384 = iVar5;
  DAT_1801fe380 = iVar4;
  FUN_1801252c0(local_28 ^ (ulonglong)auStack_d8);
  return;
}

// ---- Function: FUN_18011d000 ----
void FUN_18011d000(void)

{
  longlong lVar1;
  HMODULE pHVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int *piVar5;
  uint uVar6;
  int32_t auStack_c8 [32];
  char *local_a8;
  int32_t local_a0;
  longlong local_98 [3];
  int32_t uStack_80;
  longlong local_78 [3];
  int32_t uStack_60;
  longlong *local_50;
  int32_t local_48;
  longlong lStack_40;
  int32_t local_38;
  HMODULE local_30;
  int32_t local_28;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_c8;
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x10);
  if (*piVar5 < DAT_1801fe38c) {
    FUN_180125398(&DAT_1801fe38c);
    if (DAT_1801fe38c == -1) {
      local_30 = GetModuleHandleW((LPCWSTR)0x0);
      DAT_1801ee910 = local_30 + -0x50000000;
      local_98[1] = 0;
      local_98[2] = _DAT_1801d8f70;
      uStack_80 = _UNK_1801d8f78;
      local_98[0] = 0;
      local_78[1] = 0;
      local_78[2] = _DAT_1801d8f70;
      uStack_60 = _UNK_1801d8f78;
      local_78[0] = 0;
      local_50 = (longlong *)0x0;
      local_48 = 0;
      lStack_40 = 0;
      local_38 = 0;
      local_28 = 0;
      local_a8 = "42 09 0C 02 BA 01 00 00 00 83 F9 04 0F 44 C2";
      local_a0 = 0x2c;
      FUN_180117400(local_98,&local_a8);
      FUN_1801175d0(local_98,1);
      FUN_1801175d0(local_98,0xffffffff);
      lVar1 = *local_50;
      if (local_50 != (longlong *)0x0) {
        plVar3 = local_50;
        if ((0xfff < (lStack_40 - (longlong)local_50 & 0xfffffffffffffff8U)) &&
           (plVar3 = (longlong *)local_50[-1],
           0x1f < (ulonglong)((longlong)local_50 + (-8 - (longlong)plVar3)))) {
          FUN_18012b7b4();
          uVar6 = 0x13371231;
          _DAT_1801fe364 = 0xffffffff;
          _DAT_1801fcfe4 = 0x13371231;
          uVar4 = 1;
          do {
            uVar6 = (uVar6 >> 0x1e ^ uVar6) * 0x6c078965 + (int)uVar4;
            *(uint *)(&DAT_1801fcfe4 + uVar4 * 4) = uVar6;
            uVar4 = uVar4 + 1;
          } while (uVar4 < 0x270);
          _DAT_1801fcfe0 = 0x270;
          return;
        }
        thunk_FUN_18012d5e8(plVar3);
        local_50 = (longlong *)0x0;
        local_48 = 0;
        lStack_40 = 0;
      }
      FUN_1800a6800(local_78);
      FUN_1800a6800(local_98);
      DAT_1801fe388 = *(int32_t *)(lVar1 + -0xf);
      _Init_thread_footer(&DAT_1801fe38c);
    }
  }
  if (*piVar5 < DAT_1801fe390) {
    FUN_180125398(&DAT_1801fe390);
    if (DAT_1801fe390 == -1) {
      pHVar2 = GetModuleHandleW((LPCWSTR)0x0);
      DAT_1801fe398 =
           *(int32_t *)
            ((longlong)&pHVar2[4].unused +
            (ulonglong)*(uint *)((longlong)&pHVar2[0x34].unused + (longlong)pHVar2[0xf].unused));
      _Init_thread_footer(&DAT_1801fe390);
    }
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_c8);
  return;
}

