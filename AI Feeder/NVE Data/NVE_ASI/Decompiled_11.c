#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800b7350 ----
int32_t *
FUN_1800b7350(int32_t *param_1,ulonglong param_2,int32_t param_3,ulonglong param_4,
             int32_t *param_5,ulonglong param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  code *pcVar5;
  void *pvVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  
  lVar2 = param_1[2];
  uVar9 = 0x7fffffffffffffff;
  if (0x7fffffffffffffffU - lVar2 < param_2) {
    FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar8 = lVar2 + param_2 | 0xf;
  uVar3 = param_1[3];
  if ((uVar8 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = (uVar3 >> 1) + uVar3;
    uVar9 = uVar8;
    if (uVar8 < uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 + 1;
    if (uVar1 == 0) {
      puVar7 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar8 = uVar9 + 0x28;
        if (uVar8 <= uVar1) {
          FUN_1800ba8a0();
          pcVar5 = (code *)swi(3);
          puVar7 = (int32_t *)(*pcVar5)();
          return puVar7;
        }
        goto LAB_1800b73f8;
      }
      puVar7 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_1800b73f8:
    pvVar6 = operator_new(uVar8);
    if (pvVar6 == (void *)0x0) goto LAB_1800b74ec;
    puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar6;
  }
  param_1[3] = uVar9;
  puVar10 = (int32_t *)(param_4 + (longlong)puVar7);
  param_1[2] = lVar2 + param_2;
  if (uVar3 < 0x10) {
    FUN_180150fd0(puVar7,param_1,param_4);
    FUN_180150fd0(puVar10,param_5,param_6);
    FUN_180150fd0((int32_t *)((longlong)puVar10 + param_6),
                  (int32_t *)(param_4 + (longlong)param_1),(lVar2 - param_4) + 1);
  }
  else {
    puVar4 = (int32_t *)*param_1;
    FUN_180150fd0(puVar7,puVar4,param_4);
    FUN_180150fd0(puVar10,param_5,param_6);
    FUN_180150fd0((int32_t *)((longlong)puVar10 + param_6),
                  (int32_t *)((longlong)puVar4 + param_4),(lVar2 - param_4) + 1);
    puVar10 = puVar4;
    if ((0xfff < uVar3 + 1) &&
       (puVar10 = (int32_t *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar10)))) {
LAB_1800b74ec:
      FUN_18012b7b4();
      pcVar5 = (code *)swi(3);
      puVar7 = (int32_t *)(*pcVar5)();
      return puVar7;
    }
    thunk_FUN_18012d5e8(puVar10);
  }
  *param_1 = puVar7;
  return param_1;
}

// ---- Function: FUN_1800b7500 ----
int32_t *
FUN_1800b7500(int32_t *param_1,ulonglong param_2,int32_t *param_3,ulonglong param_4)

{
  int32_t *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  int32_t *puVar4;
  ulonglong uVar5;
  
  uVar2 = param_1[2];
  if (uVar2 < param_2) {
    FUN_1800b7330();
    pcVar3 = (code *)swi(3);
    puVar4 = (int32_t *)(*pcVar3)();
    return puVar4;
  }
  if (param_1[3] - uVar2 < param_4) {
    puVar4 = FUN_1800b7350(param_1,param_4,uVar2,param_2,param_3,param_4);
    return puVar4;
  }
  param_1[2] = uVar2 + param_4;
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (int32_t *)*param_1;
  }
  puVar1 = (int32_t *)((longlong)puVar4 + param_2);
  uVar5 = param_4;
  if ((puVar1 < (int32_t *)((longlong)param_3 + param_4)) &&
     (param_3 <= (int32_t *)(uVar2 + (longlong)puVar4))) {
    if (param_3 < puVar1) {
      uVar5 = (longlong)puVar1 - (longlong)param_3;
    }
    else {
      uVar5 = 0;
    }
  }
  FUN_180150fd0((int32_t *)((longlong)puVar1 + param_4),puVar1,(uVar2 - param_2) + 1);
  FUN_180150fd0(puVar1,param_3,uVar5);
  FUN_180150fd0((int32_t *)(uVar5 + (longlong)puVar1),
                (int32_t *)((longlong)param_3 + param_4 + uVar5),param_4 - uVar5);
  return param_1;
}

// ---- Function: FUN_1800b7600 ----
void FUN_1800b7600(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  plVar2 = *(longlong **)(param_1 + 0x20);
  *(int32_t *)(param_1 + 0x10) = 0;
  if ((ulonglong)plVar2[3] < 0x10) {
    lVar4 = plVar2[2] + (longlong)plVar2;
    plVar3 = plVar2;
  }
  else {
    lVar4 = *plVar2 + plVar2[2];
    plVar3 = (longlong *)*plVar2;
  }
  FUN_1800b7500(plVar2,lVar4 - (longlong)plVar3,(int32_t *)(param_1 + 0x28),
                ((lVar1 + param_1) - (param_1 + 0x28)) + 0x28);
  *(longlong **)(param_1 + 0x20) = plVar2;
  return;
}

// ---- Function: FUN_1800b7670 ----
void FUN_1800b7670(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int32_t auStack_1e8 [32];
  int32_t local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  int32_t local_198;
  int32_t uStack_190;
  int32_t ***local_188;
  ulonglong local_180;
  ulonglong uStack_178;
  int32_t local_170;
  int32_t **local_168;
  int32_t *local_160;
  ulonglong local_158;
  int32_t local_150;
  longlong *local_148;
  int32_t local_140 [33];
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_1e8;
  uVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  local_1c8 = 1;
  uVar1 = *param_3;
  if (uVar1 != 0) {
    uVar7 = uVar5;
    do {
      uVar2 = *(ulonglong *)(param_3[1] + uVar7 * 8);
      bVar4 = (byte)(uVar2 >> 0x3c);
      if (bVar4 == 0xc) {
        uVar5 = uVar5 + *(longlong *)(param_3[1] + (uVar2 & 0xfffffffffffffff) + 8 + uVar1 * 8);
      }
      else if (bVar4 == 0xb) {
        uVar5 = uVar5 + 0x20;
      }
      else {
        uVar5 = uVar5 + 8;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
  }
  local_1c0 = param_1;
  if ((ulonglong)param_1[3] < uVar5 + param_2[1]) {
    FUN_1800b9630(param_1,uVar5 + param_2[1]);
    param_1[2] = 0;
  }
  local_160 = local_140;
  local_158 = 0;
  local_150 = 0x100;
  local_168 = &PTR_FUN_1801835f0;
  local_1a8 = *param_2;
  lStack_1a0 = param_2[1];
  local_198 = 0;
  uStack_190 = 0;
  local_188 = &local_168;
  local_180 = *param_3;
  uStack_178 = param_3[1];
  local_170 = 0;
  local_1b8 = *param_2;
  lStack_1b0 = param_2[1];
  local_148 = param_1;
  FUN_1800b71b0(&local_1b8,&local_1a8);
  FUN_1800b7600((longlong)&local_168);
  uVar1 = local_158;
  local_168 = &PTR_FUN_1801835f0;
  if (local_158 != 0) {
    local_158 = 0;
    if ((ulonglong)local_148[3] < 0x10) {
      lVar6 = local_148[2] + (longlong)local_148;
      plVar3 = local_148;
    }
    else {
      lVar6 = *local_148 + local_148[2];
      plVar3 = (longlong *)*local_148;
    }
    FUN_1800b7500(local_148,lVar6 - (longlong)plVar3,local_140,uVar1);
  }
  FUN_1801252c0(local_38 ^ (ulonglong)auStack_1e8);
  return;
}

// ---- Function: FUN_1800b7820 ----
longlong * FUN_1800b7820(longlong *param_1,byte *param_2,byte *param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  
  bVar1 = *param_2;
  *param_4 = (uint)bVar1;
  if (bVar1 < 0x80) {
    *(int32_t *)(param_1 + 1) = 1;
    *param_1 = (longlong)(param_2 + 1);
    return param_1;
  }
  if (bVar1 - 0xc2 < 0x1e) {
    uVar3 = 2;
  }
  else if (bVar1 - 0xe0 < 0x10) {
    uVar3 = 3;
  }
  else {
    if (4 < bVar1 - 0xf0) {
      *param_1 = (longlong)(param_2 + 1);
      *param_4 = 0xfffd;
      *(int32_t *)(param_1 + 1) = 0;
      return param_1;
    }
    uVar3 = 4;
  }
  pbVar6 = param_2 + 1;
  if (pbVar6 == param_3) {
    *param_1 = (longlong)param_3;
    *param_4 = 0xfffd;
    *(int32_t *)(param_1 + 1) = 0;
    return param_1;
  }
  if (bVar1 == 0xe0) {
    if (0x9f < *pbVar6) goto LAB_1800b7907;
  }
  else {
    if (bVar1 == 0xed) {
      bVar7 = *pbVar6 < 0x9f;
      bVar8 = *pbVar6 == 0x9f;
    }
    else {
      if (bVar1 == 0xf0) {
        if (*pbVar6 < 0x90) {
          *param_1 = (longlong)pbVar6;
          *param_4 = 0xfffd;
          *(int32_t *)(param_1 + 1) = 0;
          return param_1;
        }
        goto LAB_1800b7907;
      }
      if (bVar1 != 0xf4) goto LAB_1800b7907;
      bVar7 = *pbVar6 < 0x8f;
      bVar8 = *pbVar6 == 0x8f;
    }
    if (bVar7 || bVar8) {
LAB_1800b7907:
      if (uVar3 == 2) {
        uVar2 = 0x1f;
      }
      else if (uVar3 == 3) {
        uVar2 = 0xf;
      }
      else {
        uVar2 = 7;
      }
      uVar2 = uVar2 & bVar1;
      uVar4 = (ulonglong)uVar3;
      iVar5 = 1;
      *param_4 = uVar2;
      if (1 < uVar4) {
        do {
          if (((param_3 <= param_2 + iVar5) || (bVar1 = *pbVar6, bVar1 < 0x80)) || (0xbf < bVar1)) {
            *param_4 = 0xfffd;
            *param_1 = (longlong)(param_2 + iVar5);
            *(int32_t *)(param_1 + 1) = 0;
            return param_1;
          }
          pbVar6 = pbVar6 + 1;
          uVar2 = bVar1 & 0x3f | uVar2 << 6;
          iVar5 = iVar5 + 1;
          *param_4 = uVar2;
        } while ((longlong)pbVar6 - (longlong)param_2 < (longlong)uVar4);
      }
      *(int32_t *)(param_1 + 1) = 1;
      *param_1 = (longlong)(param_2 + uVar4);
      return param_1;
    }
  }
  *param_1 = (longlong)pbVar6;
  *param_4 = 0xfffd;
  *(int32_t *)(param_1 + 1) = 0;
  return param_1;
}

// ---- Function: FUN_1800b79e0 ----
int32_t * FUN_1800b79e0(int32_t *param_1,longlong param_2)

{
  longlong local_18;
  int32_t local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  __std_exception_copy(&local_18,param_1 + 1);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}

// ---- Function: FUN_1800b7a30 ----
int32_t * FUN_1800b7a30(int32_t *param_1,longlong param_2)

{
  longlong local_18;
  int32_t local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  __std_exception_copy(&local_18,param_1 + 1);
  *param_1 = &PTR_FUN_1801878d8;
  return param_1;
}

// ---- Function: FUN_1800b7a80 ----
int32_t * FUN_1800b7a80(int32_t *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = &PTR_FUN_1801878d8;
  return param_1;
}

// ---- Function: FUN_1800b7ac0 ----
void FUN_1800b7ac0(longlong param_1)

{
  code *pcVar1;
  longlong local_28 [5];
  
  FUN_1800b7a30(local_28,param_1);
  FUN_1801279a8(local_28,&DAT_1801e8e60);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800b7af0 ----
void FUN_1800b7af0(LPCWSTR param_1,int32_t param_2,longlong *param_3,LPWIN32_FIND_DATAW param_4)

{
  HANDLE pvVar1;
  DWORD DVar2;
  longlong lVar3;
  LPCWSTR pWVar4;
  int32_t uVar5;
  int32_t auStack_98 [32];
  ulonglong local_78;
  int32_t **ppuStack_70;
  int32_t local_68;
  int32_t local_60;
  WCHAR local_58 [16];
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  pWVar4 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    pWVar4 = *(LPCWSTR *)param_1;
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (pWVar4[lVar3] != L'\0');
  if ((lVar3 != 0) && (lVar3 == *(longlong *)(param_1 + 8))) {
    FUN_1800b9f10((int32_t *)local_58,(int32_t *)param_1);
    local_78 = 0;
    ppuStack_70 = (int32_t **)0x0;
    local_68 = 0;
    local_60 = 0;
    uVar5 = 1;
    FUN_1800b86e0(&local_78,(int32_t *)&DAT_1801878f0,1);
    FUN_1800b84a0((uint *)param_1,(uint *)&local_78,uVar5);
    FUN_1800ba040((longlong *)&local_78);
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
      param_1 = *(LPCWSTR *)param_1;
    }
    DVar2 = __std_fs_directory_iterator_open(param_1,param_3,param_4);
    if (DVar2 == 0) {
      pvVar1 = (HANDLE)*param_3;
      while (param_4->cFileName[0] == L'.') {
        if (((param_4->cFileName[1] != L'\0') &&
            ((param_4->cFileName[1] != L'.' || (param_4->cFileName[2] != L'\0')))) ||
           (DVar2 = FUN_1801235d8(pvVar1,param_4), DVar2 != 0)) break;
      }
    }
    else if ((DVar2 != 5) && (DVar2 == 2)) {
      local_78 = local_78 & 0xffffffff00000000;
      ppuStack_70 = &PTR_vftable_1801ebd20;
      FUN_1800b8cb0(local_58,(longlong *)&local_78);
    }
    FUN_1800ba040((longlong *)local_58);
  }
  FUN_1801252c0(local_38 ^ (ulonglong)auStack_98);
  return;
}

// ---- Function: FUN_1800b7c70 ----
void FUN_1800b7c70(longlong *param_1)

{
  FUN_1801235f8((HANDLE)param_1[4]);
  FUN_1800ba040(param_1);
  return;
}

// ---- Function: FUN_1800b7c90 ----
void FUN_1800b7c90(longlong param_1)

{
  FUN_1801235f8(*(HANDLE *)(param_1 + 0x50));
  FUN_1800ba040((longlong *)(param_1 + 0x30));
  return;
}

// ---- Function: FUN_1800b7ce0 ----
void FUN_1800b7ce0(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    
                    
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}

// ---- Function: IGCS_StartScreenshotSession ----
int32_t IGCS_StartScreenshotSession(void)

{
                    
  return 0;
}

// ---- Function: FUN_1800b7d30 ----
longlong * FUN_1800b7d30(longlong *param_1,longlong *param_2)

{
  LPVOID pvVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  LPVOID pvVar5;
  
  if (param_1 != param_2) {
    if (7 < (ulonglong)param_1[3]) {
      pvVar1 = (LPVOID)*param_1;
      pvVar5 = pvVar1;
      if ((0xfff < param_1[3] * 2 + 2U) &&
         (pvVar5 = *(LPVOID *)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5)))) {
        FUN_18012b7b4();
        pcVar2 = (code *)swi(3);
        plVar4 = (longlong *)(*pcVar2)();
        return plVar4;
      }
      thunk_FUN_18012d5e8(pvVar5);
    }
    param_1[3] = 7;
    param_1[2] = 0;
    *(int32_t *)param_1 = 0;
    lVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar3;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    param_2[2] = 0;
    param_2[3] = 7;
    *(int32_t *)param_2 = 0;
  }
  return param_1;
}

// ---- Function: FUN_1800b7dd0 ----
uint * FUN_1800b7dd0(uint *param_1,uint *param_2)

{
  uint uVar1;
  short sVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2 - (longlong)param_1 >> 1;
  if (lVar3 < 2) {
    return param_1;
  }
  uVar1 = *param_1;
  sVar2 = (short)(uVar1 >> 0x10);
  if ((uVar1 & 0xffffffdf) - 0x3a0041 < 0x1a) {
    return param_1 + 1;
  }
  if (((short)uVar1 != 0x5c) && ((short)uVar1 != 0x2f)) {
    return param_1;
  }
  if ((3 < lVar3) &&
     ((*(short *)((longlong)param_1 + 6) == 0x5c || (*(short *)((longlong)param_1 + 6) == 0x2f)))) {
    if ((lVar3 != 4) && (((short)param_1[2] == 0x5c || ((short)param_1[2] == 0x2f))))
    goto LAB_1800b7e8f;
    sVar2 = *(short *)((longlong)param_1 + 2);
    if ((((sVar2 == 0x5c) || (sVar2 == 0x2f)) &&
        (((short)param_1[1] == 0x3f || ((short)param_1[1] == 0x2e)))) ||
       ((sVar2 == 0x3f && ((short)param_1[1] == 0x3f)))) {
      return (uint *)((longlong)param_1 + 6);
    }
  }
  if (lVar3 < 3) {
    return param_1;
  }
LAB_1800b7e8f:
  if ((((sVar2 == 0x5c) || (sVar2 == 0x2f)) && ((short)param_1[1] != 0x5c)) &&
     (((short)param_1[1] != 0x2f && (param_1 = (uint *)((longlong)param_1 + 6), param_1 != param_2))
     )) {
    while (((short)*param_1 != 0x5c && ((short)*param_1 != 0x2f))) {
      param_1 = (uint *)((longlong)param_1 + 2);
      if (param_1 == param_2) {
        return param_1;
      }
    }
  }
  return param_1;
}

// ---- Function: FUN_1800b7ee0 ----
longlong * FUN_1800b7ee0(longlong *param_1,ulonglong param_2,int32_t param_3,int32_t *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  LPVOID pvVar3;
  code *pcVar4;
  void *pvVar5;
  longlong *plVar6;
  __uint64 _Var7;
  LPVOID pvVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int32_t *puVar11;
  
  uVar10 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffe < param_2) {
    FUN_1800ba540();
    pcVar4 = (code *)swi(3);
    plVar6 = (longlong *)(*pcVar4)();
    return plVar6;
  }
  uVar9 = param_2 | 7;
  puVar11 = (int32_t *)0x0;
  uVar2 = param_1[3];
  if ((uVar9 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
    uVar1 = uVar2 + (uVar2 >> 1);
    uVar10 = uVar9;
    if (uVar9 < uVar1) {
      uVar10 = uVar1;
    }
    if (0x7fffffffffffffff < uVar10 + 1) goto LAB_1800b8032;
    _Var7 = (uVar10 + 1) * 2;
    if (_Var7 != 0) goto LAB_1800b7f76;
  }
  else {
    _Var7 = 0xfffffffffffffffe;
LAB_1800b7f76:
    if (_Var7 < 0x1000) {
      puVar11 = (int32_t *)operator_new(_Var7);
    }
    else {
      if (_Var7 + 0x27 <= _Var7) {
LAB_1800b8032:
        FUN_1800ba8a0();
        pcVar4 = (code *)swi(3);
        plVar6 = (longlong *)(*pcVar4)();
        return plVar6;
      }
      pvVar5 = operator_new(_Var7 + 0x27);
      if (pvVar5 == (void *)0x0) goto LAB_1800b802c;
      puVar11 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
      puVar11[-1] = pvVar5;
    }
  }
  param_1[3] = uVar10;
  param_1[2] = param_2;
  FUN_180150fd0(puVar11,param_4,param_2 * 2);
  *(int32_t *)(param_2 * 2 + (longlong)puVar11) = 0;
  if (7 < uVar2) {
    pvVar3 = (LPVOID)*param_1;
    pvVar8 = pvVar3;
    if ((0xfff < uVar2 * 2 + 2) &&
       (pvVar8 = *(LPVOID *)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar8)))) {
LAB_1800b802c:
      FUN_18012b7b4();
      pcVar4 = (code *)swi(3);
      plVar6 = (longlong *)(*pcVar4)();
      return plVar6;
    }
    thunk_FUN_18012d5e8(pvVar8);
  }
  *param_1 = (longlong)puVar11;
  return param_1;
}

