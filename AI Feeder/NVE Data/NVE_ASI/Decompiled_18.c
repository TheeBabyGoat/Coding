#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800c5490 ----
void FUN_1800c5490(longlong param_1,longlong param_2,int32_t param_3)

{
  int32_t *puVar1;
  longlong *plVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  longlong local_res10;
  
  plVar2 = DAT_1801f3ad8;
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    puVar1 = *(int32_t **)(param_1 + 0x18);
    local_res10 = param_2;
    for (puVar3 = *(int32_t **)(param_1 + 0x10); puVar3 != puVar1; puVar3 = puVar3 + 4) {
      puVar4 = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar4 = (int32_t *)*puVar3;
      }
      (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res10,puVar4,*(int32_t *)(param_1 + 8));
      if (local_res10 != 0) {
        (**(code **)(*plVar2 + 0x108))(plVar2,local_res10,param_3,4,0);
      }
    }
  }
  return;
}

// ---- Function: FUN_1800c5540 ----
void FUN_1800c5540(longlong param_1,int32_t param_2,int32_t param_3)

{
  int32_t auStack_b8 [32];
  char *local_98;
  ulonglong *local_90;
  longlong local_88;
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
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_b8;
  local_68 = _DAT_1801d9040;
  uStack_60 = _UNK_1801d9048;
  local_78 = (char  [8])s_NVE_Vignette_fx_1801cbb10._0_8_;
  uStack_70 = (ulonglong)
              CONCAT16(s_NVE_Vignette_fx_1801cbb10[0xe],
                       CONCAT24(s_NVE_Vignette_fx_1801cbb10._12_2_,s_NVE_Vignette_fx_1801cbb10._8_4_
                               ));
  local_48 = _DAT_1801d9000;
  uStack_40 = _UNK_1801d9008;
  local_58 = (char  [8])s_NVE_Rain_fx_1801cb960._0_8_;
  uStack_50 = (ulonglong)CONCAT12(s_NVE_Rain_fx_1801cb960[10],s_NVE_Rain_fx_1801cb960._8_2_);
  local_28 = _DAT_1801d9010;
  uStack_20 = _UNK_1801d9018;
  local_38 = (char  [8])s_NVE_Bloom_fx_1801cbb20._0_8_;
  uStack_30 = (ulonglong)(uint)s_NVE_Bloom_fx_1801cbb20._8_4_;
  local_98 = local_78;
  local_90 = local_18;
  local_88 = param_1;
  FUN_1800a6a40((int32_t *)(param_1 + 0x10),(longlong *)&local_98);
  _eh_vector_destructor_iterator_(local_78,0x20,3,thunk_FUN_1800a6800);
  *(int32_t *)(param_1 + 8) = param_3;
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_b8);
  return;
}

// ---- Function: FUN_1800c5680 ----
void FUN_1800c5680(longlong param_1,int32_t *param_2,int32_t param_3)

{
  longlong *plVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  longlong *plVar4;
  int32_t *puVar5;
  int32_t auStack_d8 [32];
  char *local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  char local_98 [8];
  int32_t uStack_90;
  int32_t local_88;
  int32_t uStack_80;
  char local_78 [8];
  int32_t uStack_70;
  int32_t local_68;
  int32_t uStack_60;
  char local_58 [8];
  ulonglong uStack_50;
  int32_t local_48;
  int32_t uStack_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1801eb080 ^ (ulonglong)auStack_d8;
  local_88 = _DAT_1801d9040;
  uStack_80 = _UNK_1801d9048;
  local_98 = (char  [8])s_NVE_Vignette_fx_1801cbb10._0_8_;
  uStack_90 = (ulonglong)
              CONCAT16(s_NVE_Vignette_fx_1801cbb10[0xe],
                       CONCAT24(s_NVE_Vignette_fx_1801cbb10._12_2_,s_NVE_Vignette_fx_1801cbb10._8_4_
                               ));
  local_68 = _DAT_1801d9000;
  uStack_60 = _UNK_1801d9008;
  local_78 = (char  [8])s_NVE_Rain_fx_1801cb960._0_8_;
  uStack_70 = (ulonglong)CONCAT12(s_NVE_Rain_fx_1801cb960[10],s_NVE_Rain_fx_1801cb960._8_2_);
  local_48 = _DAT_1801d9010;
  uStack_40 = _UNK_1801d9018;
  local_58 = (char  [8])s_NVE_Bloom_fx_1801cbb20._0_8_;
  uStack_50 = (ulonglong)(uint)s_NVE_Bloom_fx_1801cbb20._8_4_;
  local_b8 = local_98;
  local_b0 = local_38;
  local_a8 = param_1;
  FUN_1800a6a40((int32_t *)(param_1 + 0x10),(longlong *)&local_b8);
  _eh_vector_destructor_iterator_(local_98,0x20,3,thunk_FUN_1800a6800);
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 != plVar1) {
    do {
      FUN_1800a6800(plVar4);
      plVar4 = plVar4 + 4;
    } while (plVar4 != plVar1);
    *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_1 + 0x10);
  }
  puVar2 = (int32_t *)param_2[1];
  for (puVar5 = (int32_t *)*param_2; puVar5 != puVar2; puVar5 = puVar5 + 4) {
    puVar3 = *(int32_t **)(param_1 + 0x18);
    if (puVar3 == *(int32_t **)(param_1 + 0x20)) {
      FUN_1800c6d30((longlong *)(param_1 + 0x10),puVar3,puVar5);
    }
    else {
      FUN_1800ba630(puVar3,puVar5);
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x20;
    }
  }
  *(int32_t *)(param_1 + 8) = param_3;
  FUN_1801252c0(local_38[0] ^ (ulonglong)auStack_d8);
  return;
}

// ---- Function: FUN_1800c5840 ----
void FUN_1800c5840(longlong param_1,int32_t param_2,int32_t param_3)

{
  longlong *plVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  longlong *plVar6;
  int32_t auStack_c8 [32];
  char *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  char local_88 [8];
  int32_t uStack_80;
  int32_t local_78;
  int32_t uStack_70;
  char local_68 [8];
  int32_t uStack_60;
  int32_t local_58;
  int32_t uStack_50;
  char local_48 [8];
  ulonglong uStack_40;
  int32_t local_38;
  int32_t uStack_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1801eb080 ^ (ulonglong)auStack_c8;
  local_78 = _DAT_1801d9040;
  uStack_70 = _UNK_1801d9048;
  local_88 = (char  [8])s_NVE_Vignette_fx_1801cbb10._0_8_;
  uStack_80 = (ulonglong)
              CONCAT16(s_NVE_Vignette_fx_1801cbb10[0xe],
                       CONCAT24(s_NVE_Vignette_fx_1801cbb10._12_2_,s_NVE_Vignette_fx_1801cbb10._8_4_
                               ));
  local_58 = _DAT_1801d9000;
  uStack_50 = _UNK_1801d9008;
  local_68 = (char  [8])s_NVE_Rain_fx_1801cb960._0_8_;
  uStack_60 = (ulonglong)CONCAT12(s_NVE_Rain_fx_1801cb960[10],s_NVE_Rain_fx_1801cb960._8_2_);
  local_38 = _DAT_1801d9010;
  uStack_30 = _UNK_1801d9018;
  local_48 = (char  [8])s_NVE_Bloom_fx_1801cbb20._0_8_;
  uStack_40 = (ulonglong)(uint)s_NVE_Bloom_fx_1801cbb20._8_4_;
  local_a8 = local_88;
  local_a0 = local_28;
  local_98 = param_1;
  FUN_1800a6a40((int32_t *)(param_1 + 0x10),(longlong *)&local_a8);
  _eh_vector_destructor_iterator_(local_88,0x20,3,thunk_FUN_1800a6800);
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar6 = *(longlong **)(param_1 + 0x10);
  puVar3 = DAT_1801fbbd8;
  puVar4 = DAT_1801fbbe0;
  if (plVar6 != plVar1) {
    do {
      FUN_1800a6800(plVar6);
      plVar6 = plVar6 + 4;
    } while (plVar6 != plVar1);
    *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_1 + 0x10);
    puVar3 = DAT_1801fbbd8;
    puVar4 = DAT_1801fbbe0;
  }
  for (; puVar5 = DAT_1801fbbe0, puVar3 != DAT_1801fbbe0; puVar3 = puVar3 + 4) {
    puVar2 = *(int32_t **)(param_1 + 0x18);
    if (puVar2 == *(int32_t **)(param_1 + 0x20)) {
      DAT_1801fbbe0 = puVar4;
      FUN_1800c6d30((longlong *)(param_1 + 0x10),puVar2,puVar3);
    }
    else {
      DAT_1801fbbe0 = puVar4;
      FUN_1800ba630(puVar2,puVar3);
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x20;
    }
    puVar4 = DAT_1801fbbe0;
    DAT_1801fbbe0 = puVar5;
  }
  DAT_1801fbbe0 = puVar4;
  *(int32_t *)(param_1 + 8) = param_3;
  FUN_1801252c0(local_28[0] ^ (ulonglong)auStack_c8);
  return;
}

// ---- Function: FUN_1800c5a10 ----
void FUN_1800c5a10(void)

{
  code *pcVar1;
  longlong *plVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int32_t auStack_c8 [32];
  int32_t *local_a8;
  char *local_98;
  ulonglong *puStack_90;
  longlong local_88;
  ulonglong uStack_80;
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
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_c8;
  local_a8 = &DAT_1801fb9e0;
  local_68 = _DAT_1801d9040;
  uStack_60 = _UNK_1801d9048;
  local_78 = (char  [8])s_NVE_Vignette_fx_1801cbb10._0_8_;
  uStack_70 = (ulonglong)
              CONCAT16(s_NVE_Vignette_fx_1801cbb10[0xe],
                       CONCAT24(s_NVE_Vignette_fx_1801cbb10._12_2_,s_NVE_Vignette_fx_1801cbb10._8_4_
                               ));
  local_48 = _DAT_1801d9000;
  uStack_40 = _UNK_1801d9008;
  local_58 = (char  [8])s_NVE_Rain_fx_1801cb960._0_8_;
  uStack_50 = (ulonglong)CONCAT12(s_NVE_Rain_fx_1801cb960[10],s_NVE_Rain_fx_1801cb960._8_2_);
  local_28 = _DAT_1801d9010;
  uStack_20 = _UNK_1801d9018;
  local_38 = (char  [8])s_NVE_Bloom_fx_1801cbb20._0_8_;
  uStack_30 = (ulonglong)(uint)s_NVE_Bloom_fx_1801cbb20._8_4_;
  local_98 = local_78;
  puStack_90 = local_18;
  FUN_1800a6a40(&DAT_1801fb9f0,(longlong *)&local_98);
  _eh_vector_destructor_iterator_(local_78,0x20,3,thunk_FUN_1800a6800);
  plVar2 = DAT_1801fb9f8;
  plVar5 = DAT_1801fb9f0;
  if (DAT_1801fb9f0 != DAT_1801fb9f8) {
    do {
      FUN_1800a6800(plVar5);
      plVar5 = plVar5 + 4;
    } while (plVar5 != plVar2);
    DAT_1801fb9f8 = DAT_1801fb9f0;
  }
  local_98 = (char *)0x0;
  puStack_90 = (ulonglong *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_1800ba360(&local_98,(int32_t *)"NVE_Rain.fx",0xb);
  plVar2 = DAT_1801fb9f8;
  if (DAT_1801fb9f8 == DAT_1801fba00) {
    FUN_1800c63b0((longlong *)&DAT_1801fb9f0,DAT_1801fb9f8,&local_98);
    uVar4 = uStack_80;
  }
  else {
    *DAT_1801fb9f8 = (longlong)local_98;
    plVar2[1] = (longlong)puStack_90;
    plVar2[2] = local_88;
    plVar2[3] = uStack_80;
    local_98 = (char *)((ulonglong)local_98 & 0xffffffffffffff00);
    DAT_1801fb9f8 = DAT_1801fb9f8 + 4;
    uVar4 = 0xf;
  }
  if (0xf < uVar4) {
    pcVar3 = local_98;
    if ((0xfff < uVar4 + 1) &&
       (pcVar3 = *(char **)(local_98 + -8), (char *)0x1f < local_98 + (-8 - (longlong)pcVar3))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pcVar3);
  }
  DAT_1801fb9e8 = "INITIAL_LIFETIME";
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_c8);
  return;
}

// ---- Function: FUN_1800c5c50 ----
void FUN_1800c5c50(longlong param_1,int32_t *param_2,int32_t param_3)

{
  longlong *plVar1;
  int32_t *puVar2;
  code *pcVar3;
  char *pcVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int32_t auStack_e8 [32];
  longlong local_c8;
  char *local_b8;
  ulonglong *puStack_b0;
  int32_t local_a8;
  ulonglong uStack_a0;
  char local_98 [8];
  int32_t uStack_90;
  int32_t local_88;
  int32_t uStack_80;
  char local_78 [8];
  int32_t uStack_70;
  int32_t local_68;
  int32_t uStack_60;
  char local_58 [8];
  ulonglong uStack_50;
  int32_t local_48;
  int32_t uStack_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1801eb080 ^ (ulonglong)auStack_e8;
  local_88 = _DAT_1801d9040;
  uStack_80 = _UNK_1801d9048;
  local_98 = (char  [8])s_NVE_Vignette_fx_1801cbb10._0_8_;
  uStack_90 = (ulonglong)
              CONCAT16(s_NVE_Vignette_fx_1801cbb10[0xe],
                       CONCAT24(s_NVE_Vignette_fx_1801cbb10._12_2_,s_NVE_Vignette_fx_1801cbb10._8_4_
                               ));
  local_68 = _DAT_1801d9000;
  uStack_60 = _UNK_1801d9008;
  local_78 = (char  [8])s_NVE_Rain_fx_1801cb960._0_8_;
  uStack_70 = (ulonglong)CONCAT12(s_NVE_Rain_fx_1801cb960[10],s_NVE_Rain_fx_1801cb960._8_2_);
  local_48 = _DAT_1801d9010;
  uStack_40 = _UNK_1801d9018;
  local_58 = (char  [8])s_NVE_Bloom_fx_1801cbb20._0_8_;
  uStack_50 = (ulonglong)(uint)s_NVE_Bloom_fx_1801cbb20._8_4_;
  local_b8 = local_98;
  puStack_b0 = local_38;
  local_c8 = param_1;
  FUN_1800a6a40((int32_t *)(param_1 + 0x10),(longlong *)&local_b8);
  _eh_vector_destructor_iterator_(local_98,0x20,3,thunk_FUN_1800a6800);
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 != plVar1) {
    do {
      FUN_1800a6800(plVar5);
      plVar5 = plVar5 + 4;
    } while (plVar5 != plVar1);
    *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_1 + 0x10);
  }
  local_b8 = (char *)0x0;
  puStack_b0 = (ulonglong *)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  uVar6 = 0xffffffffffffffff;
  do {
    uVar6 = uVar6 + 1;
  } while (*(char *)((longlong)param_2 + uVar6) != '\0');
  FUN_1800ba360(&local_b8,param_2,uVar6);
  puVar2 = *(int32_t **)(param_1 + 0x18);
  if (puVar2 == *(int32_t **)(param_1 + 0x20)) {
    FUN_1800c63b0((longlong *)(param_1 + 0x10),puVar2,&local_b8);
    uVar6 = uStack_a0;
  }
  else {
    *puVar2 = local_b8;
    puVar2[1] = puStack_b0;
    puVar2[2] = local_a8;
    puVar2[3] = uStack_a0;
    local_b8 = (char *)((ulonglong)local_b8 & 0xffffffffffffff00);
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x20;
    uVar6 = 0xf;
  }
  if (0xf < uVar6) {
    pcVar4 = local_b8;
    if ((0xfff < uVar6 + 1) &&
       (pcVar4 = *(char **)(local_b8 + -8), (char *)0x1f < local_b8 + (-8 - (longlong)pcVar4))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(pcVar4);
  }
  *(int32_t *)(param_1 + 8) = param_3;
  FUN_1801252c0(local_38[0] ^ (ulonglong)auStack_e8);
  return;
}

// ---- Function: FUN_1800c5e70 ----
void FUN_1800c5e70(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_1800c6110(param_1,param_1,(longlong *)plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    FUN_1800a6800(plVar3 + 4);
    thunk_FUN_18012d5e8(plVar3);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_18012d5e8((LPVOID)*param_1);
  return;
}

// ---- Function: FUN_1800c5ee0 ----
int32_t * FUN_1800c5ee0(int32_t *param_1,int32_t param_2,int32_t param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}

// ---- Function: FUN_1800c5ef0 ----
float * FUN_1800c5ef0(float *param_1,int32_t *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int32_t local_res10 [2];
  int32_t local_18 [2];
  
  local_res10[0] = 0;
  FUN_1800a9050(param_1,local_res10);
  pbVar1 = (byte *)param_2[1];
  for (pbVar2 = (byte *)*param_2; pbVar2 != pbVar1; pbVar2 = pbVar2 + 0x10) {
    FUN_1800c6190(param_1,local_18,pbVar2);
  }
  return param_1;
}

// ---- Function: FUN_1800c5f60 ----
int32_t * FUN_1800c5f60(int32_t *param_1,int32_t *param_2,int32_t param_3)

{
  *param_1 = *param_2;
  *(int32_t *)(param_1 + 2) = param_3;
  return param_1;
}

// ---- Function: FUN_1800c5f70 ----
void FUN_1800c5f70(int32_t param_1)

{
  HMODULE hModule;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801f3a80) {
    FUN_180125398(&DAT_1801f3a80);
    if (DAT_1801f3a80 == -1) {
      hModule = (HMODULE)FUN_1800c6f60();
      DAT_1801f3a78 = GetProcAddress(hModule,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801f3a80);
    }
  }
  if (DAT_1801f3a78 != (FARPROC)0x0) {
                    
                    
    (*DAT_1801f3a78)(0x4c,param_1);
    return;
  }
  return;
}

// ---- Function: FUN_1800c6000 ----
void FUN_1800c6000(int32_t param_1)

{
  HMODULE hModule;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801f3a70) {
    FUN_180125398(&DAT_1801f3a70);
    if (DAT_1801f3a70 == -1) {
      hModule = (HMODULE)FUN_1800c6f60();
      DAT_1801f3a68 = GetProcAddress(hModule,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801f3a70);
    }
  }
  if (DAT_1801f3a68 != (FARPROC)0x0) {
                    
                    
    (*DAT_1801f3a68)(0x4e,param_1);
    return;
  }
  return;
}

// ---- Function: FUN_1800c6090 ----
void FUN_1800c6090(longlong *param_1,longlong *param_2)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  if (param_1 != param_2) {
    do {
      pvVar1 = (LPVOID)*param_1;
      if (pvVar1 != (LPVOID)0x0) {
        pvVar3 = pvVar1;
        if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar1)) &&
           (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
           0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
          FUN_18012b7b4();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        thunk_FUN_18012d5e8(pvVar3);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      param_1 = param_1 + 3;
    } while (param_1 != param_2);
  }
  return;
}

// ---- Function: FUN_1800c6110 ----
void FUN_1800c6110(int32_t param_1,int32_t param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1800c6110(param_1,param_2,(longlong *)param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_1800a6800(param_3 + 4);
    thunk_FUN_18012d5e8(param_3);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

// ---- Function: FUN_1800c6190 ----
int32_t * FUN_1800c6190(float *param_1,int32_t *param_2,byte *param_3)

{
  float *pfVar1;
  int iVar2;
  int32_t *puVar3;
  longlong lVar4;
  int32_t *puVar5;
  code *pcVar6;
  int32_t uVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  float fVar11;
  
  uVar9 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar8 = *(int32_t **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  pfVar1 = param_1 + 2;
  puVar10 = *(int32_t **)pfVar1;
  if (puVar8 != puVar10) {
    iVar2 = *(int *)(puVar8 + 2);
    puVar10 = puVar8;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar10;
        *(int32_t *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar10 ==
          *(int32_t **)
           (*(longlong *)(param_1 + 6) + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10)) break;
      puVar10 = (int32_t *)puVar10[1];
      iVar2 = *(int *)(puVar10 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
    FUN_180123338(0x1801cc0f0);
    pcVar6 = (code *)swi(3);
    puVar8 = (int32_t *)(*pcVar6)();
    return puVar8;
  }
  puVar8 = (int32_t *)operator_new(0x20);
  uVar7 = *(int32_t *)(param_3 + 8);
  puVar8[2] = *(int32_t *)param_3;
  puVar8[3] = uVar7;
  fVar11 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar11 && fVar11 != *param_1) {
    FUN_1800c65a0(param_1);
    puVar3 = *(int32_t **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10);
    puVar10 = *(int32_t **)pfVar1;
    if (puVar3 != puVar10) {
      iVar2 = *(int *)(puVar3 + 2);
      puVar10 = puVar3;
      while (*(int *)(puVar8 + 2) != iVar2) {
        if (puVar10 ==
            *(int32_t **)
             (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar9) * 0x10))
        goto LAB_1800c6338;
        puVar10 = (int32_t *)puVar10[1];
        iVar2 = *(int *)(puVar10 + 2);
      }
      puVar10 = (int32_t *)*puVar10;
    }
  }
LAB_1800c6338:
  puVar3 = (int32_t *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar8 = puVar10;
  puVar8[1] = puVar3;
  *puVar3 = puVar8;
  puVar10[1] = puVar8;
  uVar9 = *(ulonglong *)(param_1 + 0xc) & uVar9;
  lVar4 = *(longlong *)(param_1 + 6);
  puVar5 = *(int32_t **)(lVar4 + uVar9 * 0x10);
  if (puVar5 == *(int32_t **)pfVar1) {
    *(int32_t **)(lVar4 + uVar9 * 0x10) = puVar8;
  }
  else {
    if (puVar5 == puVar10) {
      *(int32_t **)(lVar4 + uVar9 * 0x10) = puVar8;
      goto LAB_1800c6388;
    }
    if (*(int32_t **)(lVar4 + 8 + uVar9 * 0x10) != puVar3) goto LAB_1800c6388;
  }
  *(int32_t **)(lVar4 + 8 + uVar9 * 0x10) = puVar8;
LAB_1800c6388:
  *param_2 = puVar8;
  *(int32_t *)(param_2 + 1) = 1;
  return param_2;
}

// ---- Function: FUN_1800c63b0 ----
int32_t * FUN_1800c63b0(longlong *param_1,int32_t *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  int32_t uVar4;
  longlong lVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  int32_t *puVar11;
  ulonglong uVar12;
  
  lVar2 = *param_1;
  lVar5 = param_1[1] - lVar2 >> 5;
  if (lVar5 == 0x7ffffffffffffff) {
    FUN_1800aa480();
    pcVar3 = (code *)swi(3);
    puVar8 = (int32_t *)(*pcVar3)();
    return puVar8;
  }
  uVar9 = param_1[2] - lVar2 >> 5;
  uVar1 = lVar5 + 1;
  uVar12 = 0x7ffffffffffffff;
  if ((uVar9 <= 0x7ffffffffffffff - (uVar9 >> 1)) && (uVar12 = (uVar9 >> 1) + uVar9, uVar12 < uVar1)
     ) {
    uVar12 = uVar1;
  }
  puVar6 = (int32_t *)FUN_1800ba8c0(uVar9,uVar12);
  puVar11 = (int32_t *)(((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)puVar6);
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  uVar4 = param_3[1];
  *puVar11 = *param_3;
  puVar11[1] = uVar4;
  uVar4 = param_3[3];
  puVar11[2] = param_3[2];
  puVar11[3] = uVar4;
  param_3[3] = 0xf;
  *(int32_t *)param_3 = 0;
  param_3[2] = 0;
  puVar8 = (int32_t *)param_1[1];
  puVar7 = (int32_t *)*param_1;
  puVar10 = puVar6;
  if (param_2 == puVar8) {
    for (; puVar7 != puVar8; puVar7 = puVar7 + 4) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uVar4 = puVar7[1];
      *puVar10 = *puVar7;
      puVar10[1] = uVar4;
      uVar4 = puVar7[3];
      puVar10[2] = puVar7[2];
      puVar10[3] = uVar4;
      *(int32_t *)puVar7 = 0;
      puVar7[2] = 0;
      puVar7[3] = 0xf;
      puVar10 = puVar10 + 4;
    }
  }
  else {
    for (; puVar7 != param_2; puVar7 = puVar7 + 4) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uVar4 = puVar7[1];
      *puVar10 = *puVar7;
      puVar10[1] = uVar4;
      uVar4 = puVar7[3];
      puVar10[2] = puVar7[2];
      puVar10[3] = uVar4;
      *(int32_t *)puVar7 = 0;
      puVar7[2] = 0;
      puVar7[3] = 0xf;
      puVar10 = puVar10 + 4;
    }
    puVar8 = (int32_t *)param_1[1];
    puVar7 = puVar11;
    if (param_2 != puVar8) {
      do {
        puVar10 = puVar7 + 4;
        *puVar10 = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        uVar4 = param_2[1];
        *puVar10 = *param_2;
        puVar7[5] = uVar4;
        uVar4 = param_2[3];
        puVar7[6] = param_2[2];
        puVar7[7] = uVar4;
        *(int32_t *)param_2 = 0;
        param_2[2] = 0;
        param_2[3] = 0xf;
        param_2 = param_2 + 4;
        puVar7 = puVar10;
      } while (param_2 != puVar8);
    }
  }
  FUN_1800c6c70(param_1,(longlong)puVar6,uVar1,uVar12);
  return puVar11;
}

// ---- Function: FUN_1800c65a0 ----
void FUN_1800c65a0(float *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float fVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  fVar5 = ceilf((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
  lVar2 = 0;
  if ((DAT_1801d8f34 <= fVar5) && (fVar5 = fVar5 - DAT_1801d8f34, fVar5 < DAT_1801d8f34)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar5 + lVar2)) {
    uVar3 = (longlong)fVar5 + lVar2;
  }
  uVar4 = uVar1;
  if ((uVar1 < uVar3) && ((0x1ff < uVar1 || (uVar4 = uVar1 * 8, uVar1 * 8 < uVar3)))) {
    uVar4 = uVar3;
  }
  FUN_1800c6660((longlong)param_1,uVar4);
  return;
}

