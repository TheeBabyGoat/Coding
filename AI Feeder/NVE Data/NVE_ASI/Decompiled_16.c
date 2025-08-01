#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800baaa0 ----
int32_t FUN_1800baaa0(void)

{
  int *piVar1;
  char *local_18;
  int32_t local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801fb360) {
    FUN_180125398(&DAT_1801fb360);
    if (DAT_1801fb360 == -1) {
      local_18 = "8A 48 03 33 FF";
      local_10 = 0xe;
      piVar1 = (int *)FUN_1800a68d0(&local_18);
      DAT_1801fb368 = (int32_t *)((longlong)piVar1 + (longlong)*piVar1 + 4);
      _Init_thread_footer(&DAT_1801fb360);
    }
  }
  return *DAT_1801fb368;
}

// ---- Function: FUN_1800bab30 ----
int32_t * FUN_1800bab30(int32_t *param_1)

{
  __uint64 _Var1;
  __uint64 _Var2;
  int iVar3;
  __uint64 *p_Var4;
  int32_t uVar5;
  
  if (DAT_1801f3a38 != '\0') {
    nativeInit(0x1f400fef721170da);
    p_Var4 = nativeCall();
    _Var2 = p_Var4[1];
    _Var1 = p_Var4[2];
    *param_1 = (int)*p_Var4;
    param_1[1] = (int)_Var2;
    param_1[2] = (int)_Var1;
    return param_1;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801fb370) {
    FUN_180125398(&DAT_1801fb370);
    if (DAT_1801fb370 == -1) {
      iVar3 = FUN_18011ccf0();
      DAT_1801fb374 = iVar3 < 0xcba;
      _Init_thread_footer(&DAT_1801fb370);
    }
  }
  if (DAT_1801fb374 == '\0') {
    FUN_1800bacc0();
  }
  else {
    FUN_1800bad50();
  }
  uVar5 = FUN_18014fb00();
  *param_1 = (int)uVar5;
  uVar5 = FUN_18014df60();
  param_1[2] = 0;
  param_1[1] = (int)uVar5;
  return param_1;
}

// ---- Function: FUN_1800bac30 ----
int32_t FUN_1800bac30(void)

{
  int *piVar1;
  char *local_18;
  int32_t local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801fb380) {
    FUN_180125398(&DAT_1801fb380);
    if (DAT_1801fb380 == -1) {
      local_18 = "F3 0F 58 83 00 01 00 00 0F 2F C6";
      local_10 = 0x20;
      piVar1 = (int *)FUN_1800a68d0(&local_18);
      DAT_1801fb388 = (int32_t *)((longlong)piVar1 + (longlong)*piVar1 + 4);
      _Init_thread_footer(&DAT_1801fb380);
    }
  }
  return *DAT_1801fb388;
}

// ---- Function: FUN_1800bacc0 ----
longlong FUN_1800bacc0(void)

{
  int *piVar1;
  char *local_18;
  int32_t local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801f3a48) {
    FUN_180125398(&DAT_1801f3a48);
    if (DAT_1801f3a48 == -1) {
      local_18 = "BA 95 C8 C9 AA";
      local_10 = 0xe;
      piVar1 = (int *)FUN_1800a68d0(&local_18);
      DAT_1801f3a50 = (longlong)piVar1 + (longlong)*piVar1 + 4;
      _Init_thread_footer(&DAT_1801f3a48);
    }
  }
  return DAT_1801f3a50;
}

// ---- Function: FUN_1800bad50 ----
longlong FUN_1800bad50(void)

{
  int *piVar1;
  char *local_18;
  int32_t local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801f3a58) {
    FUN_180125398(&DAT_1801f3a58);
    if (DAT_1801f3a58 == -1) {
      local_18 = "BA 95 C8 C9 AA";
      local_10 = 0xe;
      piVar1 = (int *)FUN_1800a68d0(&local_18);
      DAT_1801f3a60 = (longlong)piVar1 + (longlong)*piVar1 + 4;
      _Init_thread_footer(&DAT_1801f3a58);
    }
  }
  return DAT_1801f3a60;
}

// ---- Function: FUN_1800bade0 ----
float FUN_1800bade0(float param_1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = DAT_1801d8e18;
  if (param_1 < DAT_1801d8e18) {
    return (param_1 + param_1) * param_1;
  }
  dVar2 = (double)FUN_18014e460((double)(DAT_1801d8e60 - (param_1 + param_1)),DAT_1801d8e68);
  return DAT_1801d8e38 - (float)dVar2 * fVar1;
}

// ---- Function: FUN_1800bae50 ----
float FUN_1800bae50(float param_1,float param_2,float param_3)

{
  double dVar1;
  float fVar2;
  
  fVar2 = DAT_1801d8e18;
  if (DAT_1801d8e18 <= param_3) {
    dVar1 = (double)FUN_18014e460((double)(DAT_1801d8e60 - (param_3 + param_3)),DAT_1801d8e68);
    fVar2 = DAT_1801d8e38 - (float)dVar1 * fVar2;
  }
  else {
    fVar2 = (param_3 + param_3) * param_3;
  }
  return (param_2 - param_1) * fVar2 + param_1;
}

// ---- Function: FUN_1800baee0 ----
void FUN_1800baee0(int32_t param_1,int32_t *param_2,int32_t param_3,int32_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  int *piVar3;
  code *local_res8 [4];
  
  DAT_1801f3ad0 = param_2;
  DAT_1801f3ad8 = param_1;
  DAT_1801fb430 = param_3;
  DAT_1801fb438 = param_4;
  if (DAT_1801f3ac8 == '\0') {
    FUN_1800bb5c0();
    FUN_1800bd640(param_1,param_2);
    FUN_1800be150();
    FUN_1800bf750();
    puVar1 = (int32_t *)(ulonglong)_tls_index;
    uVar2 = 0x10;
    piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)puVar1 * 8) +
                    0x10);
    if (*piVar3 < DAT_1801fbc60) {
      puVar1 = &DAT_1801fbc60;
      FUN_180125398(&DAT_1801fbc60);
      if (DAT_1801fbc60 == -1) {
        FUN_1800c5540(0x1801fbc10,uVar2,"ScanlineFilterParams");
        atexit((_func_5014 *)&LAB_180155f60);
        puVar1 = &DAT_1801fbc60;
        _Init_thread_footer(&DAT_1801fbc60);
      }
    }
    if (*piVar3 < DAT_1801fbc64) {
      puVar1 = &DAT_1801fbc64;
      FUN_180125398(&DAT_1801fbc64);
      if (DAT_1801fbc64 == -1) {
        FUN_1800c5540(0x1801fbc38,uVar2,"VignettingColour");
        atexit((_func_5014 *)&LAB_180155f50);
        puVar1 = &DAT_1801fbc64;
        _Init_thread_footer(&DAT_1801fbc64);
      }
    }
    local_res8[0] = FUN_1800be0f0;
    if (DAT_1801ec6e0 == DAT_1801ec6e8) {
      FUN_1800c69d0(puVar1,DAT_1801ec6e0,local_res8);
    }
    else {
      *DAT_1801ec6e0 = FUN_1800be0f0;
      DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
    }
    FUN_1800be880();
    if (*piVar3 < DAT_1801fc728) {
      puVar1 = &DAT_1801fc728;
      FUN_180125398(&DAT_1801fc728);
      if (DAT_1801fc728 == -1) {
        FUN_1800c5c50(0x1801fc6d8,(int32_t *)"NVE_VolumetricClouds2024.fx","tornado_pos");
        atexit((_func_5014 *)&LAB_180156250);
        puVar1 = &DAT_1801fc728;
        _Init_thread_footer(&DAT_1801fc728);
      }
    }
    if (*piVar3 < DAT_1801fc72c) {
      puVar1 = &DAT_1801fc72c;
      FUN_180125398(&DAT_1801fc72c);
      if (DAT_1801fc72c == -1) {
        FUN_1800c5c50(0x1801fc700,(int32_t *)"NVE_VolumetricClouds2024.fx","tornado_radius");
        atexit((_func_5014 *)&LAB_180156240);
        puVar1 = &DAT_1801fc72c;
        _Init_thread_footer(&DAT_1801fc72c);
      }
    }
    local_res8[0] = FUN_1800c29a0;
    if (DAT_1801ec6e0 == DAT_1801ec6e8) {
      FUN_1800c69d0(puVar1,DAT_1801ec6e0,local_res8);
    }
    else {
      *DAT_1801ec6e0 = FUN_1800c29a0;
      DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
    }
    if (*piVar3 < DAT_1801fb510) {
      puVar1 = &DAT_1801fb510;
      FUN_180125398(&DAT_1801fb510);
      if (DAT_1801fb510 == -1) {
        FUN_1800c5c50(0x1801fb470,(int32_t *)"NVE_VolumetricAurora.fx","AuroraVisibility");
        atexit((_func_5014 *)&LAB_180155d10);
        puVar1 = &DAT_1801fb510;
        _Init_thread_footer(&DAT_1801fb510);
      }
    }
    if (*piVar3 < DAT_1801fb514) {
      puVar1 = &DAT_1801fb514;
      FUN_180125398(&DAT_1801fb514);
      if (DAT_1801fb514 == -1) {
        FUN_1800c5c50(0x1801fb498,(int32_t *)"NVE_VolumetricAurora.fx","Aurora_Color1");
        atexit((_func_5014 *)&LAB_180155d00);
        puVar1 = &DAT_1801fb514;
        _Init_thread_footer(&DAT_1801fb514);
      }
    }
    if (*piVar3 < DAT_1801fb518) {
      puVar1 = &DAT_1801fb518;
      FUN_180125398(&DAT_1801fb518);
      if (DAT_1801fb518 == -1) {
        FUN_1800c5c50(0x1801fb4c0,(int32_t *)"NVE_VolumetricAurora.fx","Aurora_Color2");
        atexit((_func_5014 *)&LAB_180155cf0);
        puVar1 = &DAT_1801fb518;
        _Init_thread_footer(&DAT_1801fb518);
      }
    }
    if (*piVar3 < DAT_1801fb51c) {
      puVar1 = &DAT_1801fb51c;
      FUN_180125398(&DAT_1801fb51c);
      if (DAT_1801fb51c == -1) {
        FUN_1800c5c50(0x1801fb4e8,(int32_t *)"NVE_VolumetricAurora.fx","Aurora_Color_Top");
        atexit((_func_5014 *)&LAB_180155ce0);
        puVar1 = &DAT_1801fb51c;
        _Init_thread_footer(&DAT_1801fb51c);
      }
    }
    local_res8[0] = (code *)&DAT_1800bb5b0;
    if (DAT_1801ec6e0 == DAT_1801ec6e8) {
      FUN_1800c69d0(puVar1,DAT_1801ec6e0,local_res8);
    }
    else {
      *DAT_1801ec6e0 = &DAT_1800bb5b0;
      DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
    }
    FUN_1800bbf30();
    FUN_1800dd220();
    DAT_1801f3ac8 = '\x01';
  }
  return;
}

// ---- Function: FUN_1800bb280 ----
void FUN_1800bb280(int32_t param_1)

{
  int32_t *puVar1;
  int32_t *puVar2;
  
  puVar1 = DAT_1801ec6c8;
  DAT_1801f3ad8 = 0;
  puVar2 = DAT_1801ec6c0;
  if (DAT_1801ec6c0 != DAT_1801ec6c8) {
    do {
      (*(code *)*puVar2)(param_1);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  return;
}

// ---- Function: FUN_1800bb2e0 ----
void FUN_1800bb2e0(void)

{
  int32_t *puVar1;
  int32_t *puVar2;
  
  puVar1 = DAT_1801ec6e0;
  puVar2 = DAT_1801ec6d8;
  if (DAT_1801ec6d8 != DAT_1801ec6e0) {
    do {
      (*(code *)*puVar2)();
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  return;
}

// ---- Function: FUN_1800bb320 ----
int32_t FUN_1800bb320(void)

{
  longlong lVar1;
  int32_t uVar2;
  
  uVar2 = (*DAT_1801fb460)();
  lVar1 = *DAT_1801fb468;
  if (lVar1 != 0) {
    _DAT_1801fb450 = *(int32_t *)(lVar1 + 0x6d0);
    DAT_1801fb458 = *(int32_t *)(lVar1 + 0x6d8);
    _DAT_1801fb440 = *(int32_t *)(lVar1 + 0x6e0);
    DAT_1801fb448 = *(int32_t *)(lVar1 + 0x6e8);
  }
  return uVar2;
}

// ---- Function: FUN_1800bb5c0 ----
void FUN_1800bb5c0(void)

{
  int32_t *puVar1;
  int32_t uVar2;
  int *piVar3;
  int32_t auStack_a8 [32];
  char *local_88;
  ulonglong *local_80;
  char local_78 [8];
  int32_t uStack_70;
  int32_t local_68;
  int32_t uStack_60;
  char local_58 [8];
  int32_t uStack_50;
  int32_t local_48;
  int32_t uStack_40;
  char local_38 [8];
  ulonglong uStack_30;
  int32_t local_28;
  int32_t uStack_20;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_a8;
  puVar1 = (int32_t *)(ulonglong)_tls_index;
  uVar2 = 0x10;
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)puVar1 * 8) + 0x10)
  ;
  if (*piVar3 < DAT_1801fb5d0) {
    puVar1 = &DAT_1801fb5d0;
    FUN_180125398(&DAT_1801fb5d0);
    if (DAT_1801fb5d0 == -1) {
      local_68 = _DAT_1801d9040;
      uStack_60 = _UNK_1801d9048;
      local_78[0] = s_NVE_Vignette_fx_1801cbb10[0];
      local_78[1] = s_NVE_Vignette_fx_1801cbb10[1];
      local_78[2] = s_NVE_Vignette_fx_1801cbb10[2];
      local_78[3] = s_NVE_Vignette_fx_1801cbb10[3];
      local_78[4] = s_NVE_Vignette_fx_1801cbb10[4];
      local_78[5] = s_NVE_Vignette_fx_1801cbb10[5];
      local_78[6] = s_NVE_Vignette_fx_1801cbb10[6];
      local_78[7] = s_NVE_Vignette_fx_1801cbb10[7];
      uStack_70 = (ulonglong)
                  CONCAT16(s_NVE_Vignette_fx_1801cbb10[0xe],
                           CONCAT24(s_NVE_Vignette_fx_1801cbb10._12_2_,
                                    s_NVE_Vignette_fx_1801cbb10._8_4_));
      local_48 = _DAT_1801d9000;
      uStack_40 = _UNK_1801d9008;
      local_58[0] = s_NVE_Rain_fx_1801cb960[0];
      local_58[1] = s_NVE_Rain_fx_1801cb960[1];
      local_58[2] = s_NVE_Rain_fx_1801cb960[2];
      local_58[3] = s_NVE_Rain_fx_1801cb960[3];
      local_58[4] = s_NVE_Rain_fx_1801cb960[4];
      local_58[5] = s_NVE_Rain_fx_1801cb960[5];
      local_58[6] = s_NVE_Rain_fx_1801cb960[6];
      local_58[7] = s_NVE_Rain_fx_1801cb960[7];
      uStack_50 = (ulonglong)CONCAT12(s_NVE_Rain_fx_1801cb960[10],s_NVE_Rain_fx_1801cb960._8_2_);
      local_28 = _DAT_1801d9010;
      uStack_20 = _UNK_1801d9018;
      local_38[0] = s_NVE_Bloom_fx_1801cbb20[0];
      local_38[1] = s_NVE_Bloom_fx_1801cbb20[1];
      local_38[2] = s_NVE_Bloom_fx_1801cbb20[2];
      local_38[3] = s_NVE_Bloom_fx_1801cbb20[3];
      local_38[4] = s_NVE_Bloom_fx_1801cbb20[4];
      local_38[5] = s_NVE_Bloom_fx_1801cbb20[5];
      local_38[6] = s_NVE_Bloom_fx_1801cbb20[6];
      local_38[7] = s_NVE_Bloom_fx_1801cbb20[7];
      uStack_30 = (ulonglong)(uint)s_NVE_Bloom_fx_1801cbb20._8_4_;
      local_88 = local_78;
      local_80 = local_18;
      FUN_1800a6a40(&DAT_1801fb568,(longlong *)&local_88);
      uVar2 = 0x20;
      _eh_vector_destructor_iterator_(local_78,0x20,3,thunk_FUN_1800a6800);
      DAT_1801fb560 = "LightColour";
      atexit((_func_5014 *)&LAB_180155d50);
      puVar1 = &DAT_1801fb5d0;
      _Init_thread_footer(&DAT_1801fb5d0);
    }
  }
  if (*piVar3 < DAT_1801fb5d4) {
    puVar1 = &DAT_1801fb5d4;
    FUN_180125398(&DAT_1801fb5d4);
    if (DAT_1801fb5d4 == -1) {
      FUN_1800c5540(0x1801fb580,uVar2,"LightIntensity");
      atexit((_func_5014 *)&LAB_180155d40);
      puVar1 = &DAT_1801fb5d4;
      _Init_thread_footer(&DAT_1801fb5d4);
    }
  }
  if (*piVar3 < DAT_1801fb5d8) {
    puVar1 = &DAT_1801fb5d8;
    FUN_180125398(&DAT_1801fb5d8);
    if (DAT_1801fb5d8 == -1) {
      FUN_1800c5540(0x1801fb5a8,uVar2,"RainValue");
      atexit((_func_5014 *)&LAB_180155d30);
      puVar1 = &DAT_1801fb5d8;
      _Init_thread_footer(&DAT_1801fb5d8);
    }
  }
  local_88 = &LAB_1800bb850;
  if (DAT_1801ec6f8 == DAT_1801ec700) {
    FUN_1800c6820(puVar1,DAT_1801ec6f8,&local_88);
  }
  else {
    *DAT_1801ec6f8 = &LAB_1800bb850;
    DAT_1801ec6f8 = DAT_1801ec6f8 + 1;
  }
  local_88 = &LAB_1800bbf20;
  if (DAT_1801ec6e0 == DAT_1801ec6e8) {
    FUN_1800c69d0(puVar1,DAT_1801ec6e0,&local_88);
  }
  else {
    *DAT_1801ec6e0 = &LAB_1800bbf20;
    DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
  }
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_a8);
  return;
}

// ---- Function: FUN_1800bb860 ----
void FUN_1800bb860(int32_t param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t local_res8;
  longlong local_res20;
  longlong local_28 [2];
  
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    uVar3 = 0x10;
    local_res8 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x10) < DAT_1801fb520) && (FUN_180125398(&DAT_1801fb520), DAT_1801fb520 == -1)) {
      FUN_1800c5540(0x1801fb528,uVar3,"visibilityBig");
      atexit((_func_5014 *)&LAB_180155d20);
      _Init_thread_footer(&DAT_1801fb520);
    }
    puVar2 = DAT_1801fb540;
    plVar1 = DAT_1801f3ad8;
    if (param_2 == 0x320d0951) {
      if ((param_3 != 0x320d0951) && (puVar4 = DAT_1801fb538, DAT_1801f3ad8 != (longlong *)0x0)) {
        for (; puVar4 != puVar2; puVar4 = puVar4 + 4) {
          puVar5 = puVar4;
          if (0xf < (ulonglong)puVar4[3]) {
            puVar5 = (int32_t *)*puVar4;
          }
          (**(code **)(*plVar1 + 0xa0))(plVar1,local_28,puVar5,DAT_1801fb530);
          if (local_28[0] != 0) {
            (**(code **)(*plVar1 + 0x108))(plVar1,local_28[0],&DAT_1801f3ac4,1,0);
          }
        }
      }
    }
    else if (param_3 == 0x320d0951) {
      (**(code **)(*DAT_1801f3ad8 + 0xa0))(DAT_1801f3ad8,&local_res8,0,"visibilityBig");
      (**(code **)(*DAT_1801f3ad8 + 0xe8))(DAT_1801f3ad8,local_res8,&DAT_1801f3ac4,1,0);
      puVar2 = DAT_1801fb540;
      plVar1 = DAT_1801f3ad8;
      if ((DAT_1801f3ad8 != (longlong *)0x0) &&
         (puVar4 = DAT_1801fb538, DAT_1801fb538 != DAT_1801fb540)) {
        do {
          puVar5 = puVar4;
          if (0xf < (ulonglong)puVar4[3]) {
            puVar5 = (int32_t *)*puVar4;
          }
          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_res20,puVar5,DAT_1801fb530);
          if (local_res20 != 0) {
            (**(code **)(*plVar1 + 0x108))(plVar1,local_res20,&DAT_1801f3ac0,1,0);
          }
          puVar4 = puVar4 + 4;
        } while (puVar4 != puVar2);
        return;
      }
    }
  }
  return;
}

// ---- Function: FUN_1800bba70 ----
void FUN_1800bba70(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int32_t *puVar9;
  float fVar10;
  float fVar11;
  longlong local_res8;
  longlong local_res10;
  int32_t local_48;
  int32_t local_44;
  int32_t local_40;
  
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    local_res8 = param_1;
    (**(code **)(*DAT_1801f3ad8 + 0xa0))(DAT_1801f3ad8,&local_res8,0,"LightIntensityMinDistance");
    (**(code **)(*DAT_1801f3ad8 + 0xe8))(DAT_1801f3ad8,local_res8,&DAT_1801f3a04,1,0);
    (**(code **)(*DAT_1801f3ad8 + 0xa0))(DAT_1801f3ad8,&local_res10,0,"LightIntensityMaxDistance");
    (**(code **)(*DAT_1801f3ad8 + 0xe8))(DAT_1801f3ad8,local_res10,&DAT_1801f3a00,1,0);
    (**(code **)(*DAT_1801f3ad8 + 0xa0))(DAT_1801f3ad8,&local_res8,0,"LightFadeSpeed");
    (**(code **)(*DAT_1801f3ad8 + 0xe8))(DAT_1801f3ad8,local_res8,&DAT_1801f39fc,1,0);
    (**(code **)(*DAT_1801f3ad8 + 0xa0))(DAT_1801f3ad8,&local_res10,0,"RainFadeInSpeed");
    (**(code **)(*DAT_1801f3ad8 + 0xe8))(DAT_1801f3ad8,local_res10,&DAT_1801ebe10,1,0);
    (**(code **)(*DAT_1801f3ad8 + 0xa0))(DAT_1801f3ad8,&local_res8,0,"RainFadeOutSpeed");
    (**(code **)(*DAT_1801f3ad8 + 0xe8))(DAT_1801f3ad8,local_res8,&DAT_1801ebe0c,1,0);
    fVar11 = 0.0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x10) < DAT_1801fb550) && (FUN_180125398(&DAT_1801fb550), DAT_1801fb550 == -1)) {
      DAT_1801fb554 = 0.0;
      _Init_thread_footer(&DAT_1801fb550);
    }
    puVar3 = DAT_1801fb570;
    plVar5 = DAT_1801f3ad8;
    if (DAT_1801fb120 != 0) {
      plVar7 = (longlong *)*DAT_1801fb118;
      plVar8 = plVar7;
      if (plVar7 != DAT_1801fb118) {
        while( true ) {
          plVar2 = (longlong *)plVar7[2];
          if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar2 + 0x19);
            plVar7 = plVar2;
            plVar2 = (longlong *)*plVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar2 + 0x19);
              plVar7 = plVar2;
              plVar2 = (longlong *)*plVar2;
            }
          }
          else {
            cVar1 = *(char *)(plVar7[1] + 0x19);
            plVar6 = (longlong *)plVar7[1];
            plVar2 = plVar7;
            while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
              cVar1 = *(char *)(plVar7[1] + 0x19);
              plVar6 = (longlong *)plVar7[1];
              plVar2 = plVar7;
            }
          }
          if (plVar7 == DAT_1801fb118) break;
          if (*(float *)((longlong)plVar7 + 0x1c) <= *(float *)((longlong)plVar8 + 0x1c) &&
              *(float *)((longlong)plVar8 + 0x1c) != *(float *)((longlong)plVar7 + 0x1c)) {
            plVar8 = plVar7;
          }
        }
      }
      fVar11 = *(float *)((longlong)plVar8 + 0x1c) - _DAT_1801f3a04;
      local_44 = *(int32_t *)((longlong)plVar8 + 0x24);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar11 = DAT_1801d8e38 - fVar11 / DAT_1801f3a00;
      local_48 = (int32_t)plVar8[4];
      local_40 = (int32_t)plVar8[5];
      puVar4 = DAT_1801fb568;
      if (DAT_1801f3ad8 != (longlong *)0x0) {
        for (; puVar4 != puVar3; puVar4 = puVar4 + 4) {
          puVar9 = puVar4;
          if (0xf < (ulonglong)puVar4[3]) {
            puVar9 = (int32_t *)*puVar4;
          }
          (**(code **)(*plVar5 + 0xa0))(plVar5,&local_res10,puVar9,DAT_1801fb560);
          if (local_res10 != 0) {
            (**(code **)(*plVar5 + 0x108))(plVar5,local_res10,&local_48,3,0);
          }
        }
      }
    }
    fVar10 = 0.0;
    if (0.0 <= fVar11) {
      fVar10 = fVar11;
    }
    if ((fVar10 == 0.0) && (0.0 < DAT_1801fb554)) {
      fVar10 = DAT_1801fb554 - DAT_1801d8de4;
    }
    DAT_1801fb554 = FUN_1800bae50(fVar10,DAT_1801fb554,DAT_1801f39fc);
    puVar4 = DAT_1801fb598;
    plVar5 = DAT_1801f3ad8;
    puVar3 = DAT_1801fb590;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar3 != puVar4; puVar3 = puVar3 + 4) {
        puVar9 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar9 = (int32_t *)*puVar3;
        }
        (**(code **)(*plVar5 + 0xa0))(plVar5,&local_res8,puVar9,DAT_1801fb588);
        if (local_res8 != 0) {
          (**(code **)(*plVar5 + 0x108))(plVar5,local_res8,&DAT_1801fb554,1,0);
        }
      }
    }
    puVar4 = DAT_1801fb5c0;
    plVar5 = DAT_1801f3ad8;
    puVar3 = DAT_1801fb5b8;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar3 != puVar4; puVar3 = puVar3 + 4) {
        puVar9 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar9 = (int32_t *)*puVar3;
        }
        (**(code **)(*plVar5 + 0xa0))(plVar5,&local_res10,puVar9,DAT_1801fb5b0);
        if (local_res10 != 0) {
          (**(code **)(*plVar5 + 0x108))(plVar5,local_res10,&DAT_1801f39f8,1,0);
        }
      }
    }
    FUN_1800a90d0();
  }
  return;
}

// ---- Function: FUN_1800bbf30 ----
void FUN_1800bbf30(void)

{
  longlong lVar1;
  int32_t *puVar2;
  int32_t *local_res8;
  
  puVar2 = (int32_t *)(ulonglong)_tls_index;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)puVar2 * 8);
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba08) {
    puVar2 = &DAT_1801fba08;
    FUN_180125398(&DAT_1801fba08);
    if (DAT_1801fba08 == -1) {
      FUN_1800c5c50(0x1801fb5e0,(int32_t *)"NVE_Rain.fx","CameraDelta");
      atexit((_func_5014 *)&LAB_180155ec0);
      puVar2 = &DAT_1801fba08;
      _Init_thread_footer(&DAT_1801fba08);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba0c) {
    puVar2 = &DAT_1801fba0c;
    FUN_180125398(&DAT_1801fba0c);
    if (DAT_1801fba0c == -1) {
      FUN_1800c5c50(0x1801fb630,(int32_t *)"NVE_Rain.fx","CameraDirection");
      atexit((_func_5014 *)&LAB_180155eb0);
      puVar2 = &DAT_1801fba0c;
      _Init_thread_footer(&DAT_1801fba0c);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba10) {
    puVar2 = &DAT_1801fba10;
    FUN_180125398(&DAT_1801fba10);
    if (DAT_1801fba10 == -1) {
      FUN_1800c5c50(0x1801fb608,(int32_t *)"NVE_Rain.fx","WindDirection");
      atexit((_func_5014 *)&LAB_180155ea0);
      puVar2 = &DAT_1801fba10;
      _Init_thread_footer(&DAT_1801fba10);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba14) {
    puVar2 = &DAT_1801fba14;
    FUN_180125398(&DAT_1801fba14);
    if (DAT_1801fba14 == -1) {
      FUN_1800c5c50(0x1801fb680,(int32_t *)"NVE_Rain.fx","ViewSpaceVelocity");
      atexit((_func_5014 *)&LAB_180155e90);
      puVar2 = &DAT_1801fba14;
      _Init_thread_footer(&DAT_1801fba14);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba18) {
    puVar2 = &DAT_1801fba18;
    FUN_180125398(&DAT_1801fba18);
    if (DAT_1801fba18 == -1) {
      FUN_1800c5c50(0x1801fb658,(int32_t *)"NVE_Rain.fx","ViewSpaceWind");
      atexit((_func_5014 *)&LAB_180155e80);
      puVar2 = &DAT_1801fba18;
      _Init_thread_footer(&DAT_1801fba18);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba1c) {
    puVar2 = &DAT_1801fba1c;
    FUN_180125398(&DAT_1801fba1c);
    if (DAT_1801fba1c == -1) {
      FUN_1800c5c50(0x1801fb6a8,(int32_t *)"NVE_Rain.fx","BlurStrength");
      atexit((_func_5014 *)&LAB_180155e70);
      puVar2 = &DAT_1801fba1c;
      _Init_thread_footer(&DAT_1801fba1c);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba20) {
    puVar2 = &DAT_1801fba20;
    FUN_180125398(&DAT_1801fba20);
    if (DAT_1801fba20 == -1) {
      FUN_1800c5c50(0x1801fb760,(int32_t *)"NVE_Rain.fx","DropletBlurStrength");
      atexit((_func_5014 *)&LAB_180155e60);
      puVar2 = &DAT_1801fba20;
      _Init_thread_footer(&DAT_1801fba20);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba24) {
    puVar2 = &DAT_1801fba24;
    FUN_180125398(&DAT_1801fba24);
    if (DAT_1801fba24 == -1) {
      FUN_1800c5c50(0x1801fb788,(int32_t *)"NVE_Rain.fx","EXTRA_DROP_CHANCE");
      atexit((_func_5014 *)&LAB_180155e50);
      puVar2 = &DAT_1801fba24;
      _Init_thread_footer(&DAT_1801fba24);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba28) {
    puVar2 = &DAT_1801fba28;
    FUN_180125398(&DAT_1801fba28);
    if (DAT_1801fba28 == -1) {
      FUN_1800c5c50(0x1801fb7b0,(int32_t *)"NVE_Rain.fx","EXTRA_DROP_SIZE_MUL");
      atexit((_func_5014 *)&LAB_180155e40);
      puVar2 = &DAT_1801fba28;
      _Init_thread_footer(&DAT_1801fba28);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba2c) {
    puVar2 = &DAT_1801fba2c;
    FUN_180125398(&DAT_1801fba2c);
    if (DAT_1801fba2c == -1) {
      FUN_1800c5c50(0x1801fb7d8,(int32_t *)"NVE_Rain.fx","EXTRA_DROP_SPEED_MUL");
      atexit((_func_5014 *)&LAB_180155e30);
      puVar2 = &DAT_1801fba2c;
      _Init_thread_footer(&DAT_1801fba2c);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba30) {
    puVar2 = &DAT_1801fba30;
    FUN_180125398(&DAT_1801fba30);
    if (DAT_1801fba30 == -1) {
      FUN_1800c5c50(0x1801fb800,(int32_t *)"NVE_Rain.fx","EXTRA_DROP_GRAVITY_MUL");
      atexit((_func_5014 *)&LAB_180155e20);
      puVar2 = &DAT_1801fba30;
      _Init_thread_footer(&DAT_1801fba30);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba34) {
    puVar2 = &DAT_1801fba34;
    FUN_180125398(&DAT_1801fba34);
    if (DAT_1801fba34 == -1) {
      FUN_1800c5c50(0x1801fb828,(int32_t *)"NVE_Rain.fx","LATERAL_DRAG");
      atexit((_func_5014 *)&LAB_180155e10);
      puVar2 = &DAT_1801fba34;
      _Init_thread_footer(&DAT_1801fba34);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba38) {
    puVar2 = &DAT_1801fba38;
    FUN_180125398(&DAT_1801fba38);
    if (DAT_1801fba38 == -1) {
      FUN_1800c5c50(0x1801fb850,(int32_t *)"NVE_Rain.fx","LATERAL_WIND");
      atexit((_func_5014 *)&LAB_180155e00);
      puVar2 = &DAT_1801fba38;
      _Init_thread_footer(&DAT_1801fba38);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba3c) {
    puVar2 = &DAT_1801fba3c;
    FUN_180125398(&DAT_1801fba3c);
    if (DAT_1801fba3c == -1) {
      FUN_1800c5c50(0x1801fb878,(int32_t *)"NVE_Rain.fx","RADIAL_DRAG");
      atexit((_func_5014 *)&LAB_180155df0);
      puVar2 = &DAT_1801fba3c;
      _Init_thread_footer(&DAT_1801fba3c);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba40) {
    puVar2 = &DAT_1801fba40;
    FUN_180125398(&DAT_1801fba40);
    if (DAT_1801fba40 == -1) {
      FUN_1800c5c50(0x1801fb8a0,(int32_t *)"NVE_Rain.fx","RADIAL_WIND");
      atexit((_func_5014 *)&LAB_180155de0);
      puVar2 = &DAT_1801fba40;
      _Init_thread_footer(&DAT_1801fba40);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba44) {
    puVar2 = &DAT_1801fba44;
    FUN_180125398(&DAT_1801fba44);
    if (DAT_1801fba44 == -1) {
      FUN_1800c5c50(0x1801fb8c8,(int32_t *)"NVE_Rain.fx","PERSISTANCE");
      atexit((_func_5014 *)&LAB_180155dd0);
      puVar2 = &DAT_1801fba44;
      _Init_thread_footer(&DAT_1801fba44);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba48) {
    puVar2 = &DAT_1801fba48;
    FUN_180125398(&DAT_1801fba48);
    if (DAT_1801fba48 == -1) {
      FUN_1800c5c50(0x1801fb8f0,(int32_t *)"NVE_Rain.fx","REFRACTION_MUL");
      atexit((_func_5014 *)&LAB_180155dc0);
      puVar2 = &DAT_1801fba48;
      _Init_thread_footer(&DAT_1801fba48);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba4c) {
    puVar2 = &DAT_1801fba4c;
    FUN_180125398(&DAT_1801fba4c);
    if (DAT_1801fba4c == -1) {
      FUN_1800c5c50(0x1801fb918,(int32_t *)"NVE_Rain.fx","INITIAL_SIZE_MUL");
      atexit((_func_5014 *)&LAB_180155db0);
      puVar2 = &DAT_1801fba4c;
      _Init_thread_footer(&DAT_1801fba4c);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba50) {
    puVar2 = &DAT_1801fba50;
    FUN_180125398(&DAT_1801fba50);
    if (DAT_1801fba50 == -1) {
      FUN_1800c5c50(0x1801fb940,(int32_t *)"NVE_Rain.fx","SIZE_MIN");
      atexit((_func_5014 *)&LAB_180155da0);
      puVar2 = &DAT_1801fba50;
      _Init_thread_footer(&DAT_1801fba50);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba54) {
    puVar2 = &DAT_1801fba54;
    FUN_180125398(&DAT_1801fba54);
    if (DAT_1801fba54 == -1) {
      FUN_1800c5c50(0x1801fb968,(int32_t *)"NVE_Rain.fx","SIZE_MAX");
      atexit((_func_5014 *)&LAB_180155d90);
      puVar2 = &DAT_1801fba54;
      _Init_thread_footer(&DAT_1801fba54);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba58) {
    puVar2 = &DAT_1801fba58;
    FUN_180125398(&DAT_1801fba58);
    if (DAT_1801fba58 == -1) {
      FUN_1800c5c50(0x1801fb990,(int32_t *)"NVE_Rain.fx","DISPLACEMENT_MAX");
      atexit((_func_5014 *)&LAB_180155d80);
      puVar2 = &DAT_1801fba58;
      _Init_thread_footer(&DAT_1801fba58);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba5c) {
    puVar2 = &DAT_1801fba5c;
    FUN_180125398(&DAT_1801fba5c);
    if (DAT_1801fba5c == -1) {
      FUN_1800c5c50(0x1801fb9b8,(int32_t *)"NVE_Rain.fx","Gravity");
      atexit((_func_5014 *)&LAB_180155d70);
      puVar2 = &DAT_1801fba5c;
      _Init_thread_footer(&DAT_1801fba5c);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba60) {
    puVar2 = &DAT_1801fba60;
    FUN_180125398(&DAT_1801fba60);
    if (DAT_1801fba60 == -1) {
      FUN_1800c5a10();
      atexit((_func_5014 *)&LAB_180155d60);
      puVar2 = &DAT_1801fba60;
      _Init_thread_footer(&DAT_1801fba60);
    }
  }
  _DAT_1801fb6d0 = _DAT_1801d9b80;
  uRam00000001801fb6d8 = _UNK_1801d9b88;
  _DAT_1801fb6e0 = _DAT_1801d9b60;
  uRam00000001801fb6e8 = _UNK_1801d9b68;
  _DAT_1801fb6f0 = _DAT_1801d9be0;
  uRam00000001801fb6f8 = _UNK_1801d9be8;
  _DAT_1801fb700 = _DAT_1801d9c40;
  uRam00000001801fb708 = _UNK_1801d9c48;
  _DAT_1801fb710 = 0x3dd4fdf4;
  _DAT_1801fb714 = 0xaa;
  _DAT_1801fb718 = 0x3f800000;
  _DAT_1801fb71c = 0x40100000;
  _DAT_1801fb720 = _DAT_1801d9bc0;
  uRam00000001801fb728 = _UNK_1801d9bc8;
  _DAT_1801fb730 = _DAT_1801d9b50;
  uRam00000001801fb738 = _UNK_1801d9b58;
  _DAT_1801fb740 = _DAT_1801d9b70;
  uRam00000001801fb748 = _UNK_1801d9b78;
  _DAT_1801fb750 = 0x3f800000;
  _DAT_1801fb754 = 0x42f00000;
  _DAT_1801fb758 = 0x3f000000;
  _DAT_1801fb75c = 0x50;
  local_res8 = &LAB_1800bd630;
  if (DAT_1801ec6e0 != DAT_1801ec6e8) {
    *DAT_1801ec6e0 = &LAB_1800bd630;
    DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
    return;
  }
  FUN_1800c69d0(puVar2,DAT_1801ec6e0,&local_res8);
  return;
}

// ---- Function: FUN_1800bc7c0 ----
void FUN_1800bc7c0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int32_t *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int32_t *puVar11;
  int32_t *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  int32_t local_d8 [160];
  
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    local_res8 = param_1;
    lVar8 = FUN_1800a6750();
    fVar1 = *(float *)(lVar8 + 0x30);
    fVar2 = *(float *)(lVar8 + 0x34);
    fVar3 = *(float *)(lVar8 + 0x38);
    lVar8 = FUN_1800a6750();
    fVar14 = *(float *)(lVar8 + 0x20);
    fVar15 = *(float *)(lVar8 + 0x24);
    fVar16 = *(float *)(lVar8 + 0x28);
    lVar8 = FUN_1800a6750();
    puVar12 = DAT_1801fb5f8;
    plVar9 = DAT_1801f3ad8;
    fVar4 = *(float *)(lVar8 + 0x10);
    fVar5 = *(float *)(lVar8 + 0x14);
    fVar6 = *(float *)(lVar8 + 0x18);
    plVar10 = DAT_1801f3ad8;
    puVar7 = DAT_1801fb5f0;
    puVar11 = DAT_1801fb620;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; DAT_1801f3ad8 = plVar10, DAT_1801fb620 = puVar11, puVar7 != puVar12;
          puVar7 = puVar7 + 4) {
        puVar11 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar11 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_res8,puVar11,DAT_1801fb5e8);
        if (local_res8 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_res8,&DAT_1801ec470,3,0);
        }
        plVar10 = DAT_1801f3ad8;
        puVar11 = DAT_1801fb620;
      }
      puVar7 = DAT_1801fb618;
      if (plVar10 != (longlong *)0x0) {
        for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
          puVar12 = puVar7;
          if (0xf < (ulonglong)puVar7[3]) {
            puVar12 = (int32_t *)*puVar7;
          }
          (**(code **)(*plVar10 + 0xa0))(plVar10,&local_res10,puVar12,DAT_1801fb610);
          if (local_res10 != 0) {
            (**(code **)(*plVar10 + 0x108))(plVar10,local_res10,&DAT_1801ec450,3,0);
          }
        }
      }
    }
    plVar10 = DAT_1801f3ad8;
    fVar13 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16;
    if (fVar13 < 0.0) {
      fVar13 = FUN_1801501f8(fVar13);
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    puVar7 = DAT_1801fb648;
    if (0.0 < fVar13) {
      fVar14 = fVar14 / fVar13;
      fVar15 = fVar15 / fVar13;
      fVar16 = fVar16 / fVar13;
    }
    plVar9 = plVar10;
    local_198 = fVar14;
    local_194 = fVar15;
    local_190 = fVar16;
    puVar11 = DAT_1801fb640;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar11 != puVar7; puVar11 = puVar11 + 4) {
        puVar12 = puVar11;
        if (0xf < (ulonglong)puVar11[3]) {
          puVar12 = (int32_t *)*puVar11;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_res18,puVar12,DAT_1801fb638);
        if (local_res18 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_res18,&local_198,3,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb670;
    local_188 = fVar5 * DAT_1801ec454 + fVar4 * DAT_1801ec450 + fVar6 * DAT_1801ec458;
    local_184 = fVar2 * DAT_1801ec454 + fVar1 * DAT_1801ec450 + fVar3 * DAT_1801ec458;
    local_180 = fVar14 * DAT_1801ec450 + fVar15 * DAT_1801ec454 + fVar16 * DAT_1801ec458;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb668;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_res20,puVar12,DAT_1801fb660);
        if (local_res20 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_res20,&local_188,3,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb698;
    local_178 = fVar5 * DAT_1801ec474 + fVar4 * DAT_1801ec470 + fVar6 * DAT_1801ec478;
    local_174 = fVar2 * DAT_1801ec474 + fVar1 * DAT_1801ec470 + fVar3 * DAT_1801ec478;
    local_170 = fVar14 * DAT_1801ec470 + fVar15 * DAT_1801ec474 + fVar16 * DAT_1801ec478;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb690;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_168,puVar12,DAT_1801fb688);
        if (local_168 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_168,&local_178,3,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb6c0;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb6b8;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_160,puVar12,DAT_1801fb6b0);
        if (local_160 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_160,&DAT_1801fb6d0 + lVar8 * 0x48,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb778;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb770;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_158,puVar12,DAT_1801fb768);
        if (local_158 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_158,lVar8 * 0x48 + 0x1801fb6d4,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb7a0;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb798;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_150,puVar12,DAT_1801fb790);
        if (local_150 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_150,&DAT_1801fb6d0 + (lVar8 * 9 + 1) * 8,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb7c8;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb7c0;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_148,puVar12,DAT_1801fb7b8);
        if (local_148 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_148,lVar8 * 0x48 + 0x1801fb6dc,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb7f0;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb7e8;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_140,puVar12,DAT_1801fb7e0);
        if (local_140 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_140,&DAT_1801fb6d0 + (lVar8 * 9 + 2) * 8,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb818;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb810;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_138,puVar12,DAT_1801fb808);
        if (local_138 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_138,lVar8 * 0x48 + 0x1801fb6e4,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb840;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb838;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_130,puVar12,DAT_1801fb830);
        if (local_130 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_130,&DAT_1801fb6d0 + (lVar8 * 9 + 3) * 8,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb868;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb860;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_128,puVar12,DAT_1801fb858);
        if (local_128 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_128,lVar8 * 0x48 + 0x1801fb6ec,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb890;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb888;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_120,puVar12,DAT_1801fb880);
        if (local_120 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_120,&DAT_1801fb6d0 + (lVar8 * 9 + 4) * 8,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb8b8;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb8b0;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_118,puVar12,DAT_1801fb8a8);
        if (local_118 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_118,lVar8 * 0x48 + 0x1801fb6f4,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb8e0;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb8d8;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_110,puVar12,DAT_1801fb8d0);
        if (local_110 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_110,&DAT_1801fb6d0 + (lVar8 * 9 + 5) * 8,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb908;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb900;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_108,puVar12,DAT_1801fb8f8);
        if (local_108 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_108,lVar8 * 0x48 + 0x1801fb6fc,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb930;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb928;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_100,puVar12,DAT_1801fb920);
        if (local_100 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_100,&DAT_1801fb6d0 + (lVar8 * 9 + 6) * 8,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb958;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb950;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_f8,puVar12,DAT_1801fb948);
        if (local_f8 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_f8,lVar8 * 0x48 + 0x1801fb704,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb980;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb978;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_f0,puVar12,DAT_1801fb970);
        if (local_f0 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_f0,&DAT_1801fb6d0 + (lVar8 * 9 + 7) * 8,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb9a8;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb9a0;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_e8,puVar12,DAT_1801fb998);
        if (local_e8 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_e8,lVar8 * 0x48 + 0x1801fb70c,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb9d0;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb9c8;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_e0,puVar12,DAT_1801fb9c0);
        if (local_e0 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_e0,&DAT_1801fb710 + lVar8 * 0x48,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb9f8;
    puVar7 = DAT_1801fb9f0;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,local_d8,puVar12,DAT_1801fb9e8);
      }
    }
  }
  return;
}

// ---- Function: FUN_1800bd640 ----
void FUN_1800bd640(int32_t param_1,int32_t *param_2)

{
  longlong lVar1;
  int32_t uVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  int32_t auStack_108 [32];
  int32_t *local_e8;
  int32_t *local_e0;
  int32_t *local_d8;
  int32_t *local_d0;
  ulonglong local_c8;
  int32_t uStack_c0;
  int32_t local_b8;
  int32_t uStack_b0;
  char local_a8 [8];
  int32_t uStack_a0;
  int32_t local_98;
  int32_t uStack_90;
  char local_88 [8];
  ulonglong uStack_80;
  int32_t local_78;
  int32_t uStack_70;
  char *local_68;
  int32_t uStack_60;
  int32_t local_58;
  int32_t uStack_50;
  char *local_48;
  int32_t uStack_40;
  int32_t local_38;
  int32_t uStack_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1801eb080 ^ (ulonglong)auStack_108;
  puVar4 = (int32_t *)(ulonglong)_tls_index;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)puVar4 * 8);
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbbd0) {
    puVar4 = &DAT_1801fbbd0;
    FUN_180125398(&DAT_1801fbbd0);
    if (DAT_1801fbbd0 == -1) {
      local_b8 = _DAT_1801d9040;
      uStack_b0 = _UNK_1801d9048;
      local_c8._0_1_ = s_NVE_Vignette_fx_1801cbb10[0];
      local_c8._1_1_ = s_NVE_Vignette_fx_1801cbb10[1];
      local_c8._2_1_ = s_NVE_Vignette_fx_1801cbb10[2];
      local_c8._3_1_ = s_NVE_Vignette_fx_1801cbb10[3];
      local_c8._4_1_ = s_NVE_Vignette_fx_1801cbb10[4];
      local_c8._5_1_ = s_NVE_Vignette_fx_1801cbb10[5];
      local_c8._6_1_ = s_NVE_Vignette_fx_1801cbb10[6];
      local_c8._7_1_ = s_NVE_Vignette_fx_1801cbb10[7];
      uStack_c0 = (ulonglong)
                  CONCAT16(s_NVE_Vignette_fx_1801cbb10[0xe],
                           CONCAT24(s_NVE_Vignette_fx_1801cbb10._12_2_,
                                    s_NVE_Vignette_fx_1801cbb10._8_4_));
      local_98 = _DAT_1801d9000;
      uStack_90 = _UNK_1801d9008;
      local_a8[0] = s_NVE_Rain_fx_1801cb960[0];
      local_a8[1] = s_NVE_Rain_fx_1801cb960[1];
      local_a8[2] = s_NVE_Rain_fx_1801cb960[2];
      local_a8[3] = s_NVE_Rain_fx_1801cb960[3];
      local_a8[4] = s_NVE_Rain_fx_1801cb960[4];
      local_a8[5] = s_NVE_Rain_fx_1801cb960[5];
      local_a8[6] = s_NVE_Rain_fx_1801cb960[6];
      local_a8[7] = s_NVE_Rain_fx_1801cb960[7];
      uStack_a0 = (ulonglong)CONCAT12(s_NVE_Rain_fx_1801cb960[10],s_NVE_Rain_fx_1801cb960._8_2_);
      local_78 = _DAT_1801d9010;
      uStack_70 = _UNK_1801d9018;
      local_88[0] = s_NVE_Bloom_fx_1801cbb20[0];
      local_88[1] = s_NVE_Bloom_fx_1801cbb20[1];
      local_88[2] = s_NVE_Bloom_fx_1801cbb20[2];
      local_88[3] = s_NVE_Bloom_fx_1801cbb20[3];
      local_88[4] = s_NVE_Bloom_fx_1801cbb20[4];
      local_88[5] = s_NVE_Bloom_fx_1801cbb20[5];
      local_88[6] = s_NVE_Bloom_fx_1801cbb20[6];
      local_88[7] = s_NVE_Bloom_fx_1801cbb20[7];
      uStack_80 = (ulonglong)(uint)s_NVE_Bloom_fx_1801cbb20._8_4_;
      local_68 = (char *)0x0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = (char *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricClouds_fx_1801cbb30._8_8_;
      local_58 = _DAT_1801d90a0;
      uStack_50 = _UNK_1801d90a8;
      *(int32_t *)local_68 = s_NVE_VolumetricClouds_fx_1801cbb30._0_8_;
      *(int32_t *)(local_68 + 8) = uVar2;
      *(int32_t *)(local_68 + 0x10) = s_NVE_VolumetricClouds_fx_1801cbb30._16_4_;
      *(int32_t *)(local_68 + 0x14) = s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
      local_68[0x16] = s_NVE_VolumetricClouds_fx_1801cbb30[0x16];
      local_68[0x17] = '\0';
      local_48 = (char *)0x0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_48 = (char *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricAurora_fx_1801cb848._8_8_;
      local_38 = _DAT_1801d90a0;
      uStack_30 = _UNK_1801d90a8;
      *(int32_t *)local_48 = s_NVE_VolumetricAurora_fx_1801cb848._0_8_;
      *(int32_t *)(local_48 + 8) = uVar2;
      *(int32_t *)(local_48 + 0x10) = s_NVE_VolumetricAurora_fx_1801cb848._16_4_;
      uVar5 = (ulonglong)(ushort)s_NVE_VolumetricAurora_fx_1801cb848._20_2_;
      *(int32_t *)(local_48 + 0x14) = s_NVE_VolumetricAurora_fx_1801cb848._20_2_;
      local_48[0x16] = s_NVE_VolumetricAurora_fx_1801cb848[0x16];
      local_48[0x17] = '\0';
      DAT_1801fbbd8 = (int32_t *)0x0;
      DAT_1801fbbe0 = (int32_t *)0x0;
      _DAT_1801fbbe8 = (int32_t *)0x0;
      puVar3 = (int32_t *)FUN_1800ba8c0(uVar5,5);
      _DAT_1801fbbe8 = puVar3 + 0x14;
      local_e8 = &DAT_1801fbbd8;
      puVar6 = &local_c8;
      local_d0 = &DAT_1801fbbd8;
      DAT_1801fbbd8 = puVar3;
      DAT_1801fbbe0 = puVar3;
      local_e0 = puVar3;
      do {
        local_d8 = puVar3;
        FUN_1800ba630(puVar3,puVar6);
        puVar3 = puVar3 + 4;
        puVar6 = puVar6 + 4;
      } while (puVar6 != local_28);
      param_2 = (int32_t *)0x20;
      DAT_1801fbbe0 = puVar3;
      local_d8 = puVar3;
      _eh_vector_destructor_iterator_(&local_c8,0x20,5,thunk_FUN_1800a6800);
      atexit((_func_5014 *)&LAB_180155f40);
      puVar4 = &DAT_1801fbbd0;
      _Init_thread_footer(&DAT_1801fbbd0);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbbf0) {
    puVar4 = &DAT_1801fbbf0;
    FUN_180125398(&DAT_1801fbbf0);
    if (DAT_1801fbbf0 == -1) {
      FUN_1800c5840(0x1801fba70,param_2,"InverseView");
      atexit((_func_5014 *)&LAB_180155f30);
      puVar4 = &DAT_1801fbbf0;
      _Init_thread_footer(&DAT_1801fbbf0);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbbf4) {
    puVar4 = &DAT_1801fbbf4;
    FUN_180125398(&DAT_1801fbbf4);
    if (DAT_1801fbbf4 == -1) {
      FUN_1800c5840(0x1801fba98,param_2,"WorldView");
      atexit((_func_5014 *)&LAB_180155f20);
      puVar4 = &DAT_1801fbbf4;
      _Init_thread_footer(&DAT_1801fbbf4);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbbf8) {
    puVar4 = &DAT_1801fbbf8;
    FUN_180125398(&DAT_1801fbbf8);
    if (DAT_1801fbbf8 == -1) {
      FUN_1800c5840(0x1801fbac0,param_2,"WorldInverseViewProjection");
      atexit((_func_5014 *)&LAB_180155f10);
      puVar4 = &DAT_1801fbbf8;
      _Init_thread_footer(&DAT_1801fbbf8);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbbfc) {
    puVar4 = &DAT_1801fbbfc;
    FUN_180125398(&DAT_1801fbbfc);
    if (DAT_1801fbbfc == -1) {
      FUN_1800c5840(0x1801fbae8,param_2,"WorldViewProjection");
      atexit((_func_5014 *)&LAB_180155f00);
      puVar4 = &DAT_1801fbbfc;
      _Init_thread_footer(&DAT_1801fbbfc);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbc00) {
    puVar4 = &DAT_1801fbc00;
    FUN_180125398(&DAT_1801fbc00);
    if (DAT_1801fbc00 == -1) {
      FUN_1800c5840(0x1801fbb10,param_2,"Projection");
      atexit((_func_5014 *)&LAB_180155ef0);
      puVar4 = &DAT_1801fbc00;
      _Init_thread_footer(&DAT_1801fbc00);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbc04) {
    puVar4 = &DAT_1801fbc04;
    FUN_180125398(&DAT_1801fbc04);
    if (DAT_1801fbc04 == -1) {
      param_2 = &DAT_1801fbbd8;
      FUN_1800c5680(0x1801fbb38,&DAT_1801fbbd8,"Clips");
      atexit((_func_5014 *)&LAB_180155ee0);
      puVar4 = &DAT_1801fbc04;
      _Init_thread_footer(&DAT_1801fbc04);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbc08) {
    puVar4 = &DAT_1801fbc08;
    FUN_180125398(&DAT_1801fbc08);
    if (DAT_1801fbc08 == -1) {
      FUN_1800c5840(0x1801fbb60,param_2,"WorldViewProjectionPrev");
      atexit((_func_5014 *)&LAB_180155ed0);
      puVar4 = &DAT_1801fbc08;
      _Init_thread_footer(&DAT_1801fbc08);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fbc0c) {
    puVar4 = &DAT_1801fbc0c;
    FUN_180125398(&DAT_1801fbc0c);
    if (DAT_1801fbc0c == -1) {
      _DAT_1801fbb90 = 0;
      uRam00000001801fbb98 = 0;
      _DAT_1801fbba0 = 0;
      uRam00000001801fbba8 = 0;
      _DAT_1801fbbb0 = 0;
      uRam00000001801fbbb8 = 0;
      _DAT_1801fbbc0 = 0;
      uRam00000001801fbbc8 = 0;
      puVar4 = &DAT_1801fbc0c;
      _Init_thread_footer(&DAT_1801fbc0c);
    }
  }
  local_e8 = (int32_t *)&LAB_1800be0e0;
  if (DAT_1801ec6e0 == DAT_1801ec6e8) {
    FUN_1800c69d0(puVar4,DAT_1801ec6e0,&local_e8);
  }
  else {
    *DAT_1801ec6e0 = &LAB_1800be0e0;
    DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
  }
  FUN_1801252c0(local_28[0] ^ (ulonglong)auStack_108);
  return;
}

