#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800b9200 ----
void FUN_1800b9200(int32_t **param_1,int32_t *param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t auStack_68 [32];
  int32_t **local_48;
  int32_t local_40;
  int32_t **local_38 [3];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_68;
  local_48 = param_1;
  (**(code **)(*(longlong *)param_2[1] + 0x10))
            ((longlong *)param_2[1],local_38,*(int32_t *)param_2);
  *param_1 = std::exception::vftable;
  local_40 = 1;
  local_48 = local_38;
  if (0xf < local_20) {
    local_48 = local_38[0];
  }
  param_1[1] = (int32_t *)0x0;
  param_1[2] = (int32_t *)0x0;
  __std_exception_copy((longlong *)&local_48,(longlong *)(param_1 + 1));
  *param_1 = std::runtime_error::vftable;
  FUN_1800a6800((longlong *)local_38);
  puVar1 = (int32_t *)*param_2;
  puVar2 = (int32_t *)param_2[1];
  *param_1 = std::system_error::vftable;
  param_1[3] = puVar1;
  param_1[4] = puVar2;
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_68);
  return;
}

// ---- Function: FUN_1800b92c0 ----
LPVOID FUN_1800b92c0(LPVOID param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}

// ---- Function: FUN_1800b92f0 ----
char * FUN_1800b92f0(void)

{
  return "system";
}

// ---- Function: FUN_1800b9310 ----
int32_t * FUN_1800b9310(int32_t param_1,int32_t *param_2,DWORD param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  char *local_20;
  ulonglong local_18;
  
  local_20 = (char *)0x0;
  local_18 = FUN_180123ca4(param_3,(longlong *)&local_20);
  if ((local_20 == (char *)0x0) || (pcVar1 = local_20, uVar2 = local_18, local_18 == 0)) {
    pcVar1 = "unknown error";
    uVar2 = 0xd;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_1800ba360(param_2,(int32_t *)pcVar1,uVar2);
  LocalFree(local_20);
  return param_2;
}

// ---- Function: FUN_1800b9390 ----
char * FUN_1800b9390(void)

{
  return "generic";
}

// ---- Function: FUN_1800b93a0 ----
int32_t * FUN_1800b93a0(int32_t param_1,int32_t *param_2,int param_3)

{
  char *pcVar1;
  ulonglong uVar2;
  
  pcVar1 = FUN_180123c58(param_3);
  uVar2 = 0xffffffffffffffff;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  do {
    uVar2 = uVar2 + 1;
  } while (pcVar1[uVar2] != '\0');
  FUN_1800ba360(param_2,(int32_t *)pcVar1,uVar2);
  return param_2;
}

// ---- Function: FUN_1800b93f0 ----
int * FUN_1800b93f0(int32_t param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    *param_2 = 0;
    *(int32_t ***)(param_2 + 2) = &PTR_vftable_1801ebd10;
    return param_2;
  }
  iVar1 = FUN_180123c80(param_3);
  if (iVar1 == 0) {
    *param_2 = param_3;
    *(int32_t ***)(param_2 + 2) = &PTR_vftable_1801ebd20;
    return param_2;
  }
  *param_2 = iVar1;
  *(int32_t ***)(param_2 + 2) = &PTR_vftable_1801ebd10;
  return param_2;
}

// ---- Function: FUN_1800b9470 ----
longlong FUN_1800b9470(longlong param_1,int *param_2,int param_3)

{
  uint7 uVar1;
  
  uVar1 = (uint7)((ulonglong)*(longlong *)(param_2 + 2) >> 8);
  if ((*(longlong *)(param_1 + 8) == *(longlong *)(*(longlong *)(param_2 + 2) + 8)) &&
     (*param_2 == param_3)) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}

// ---- Function: FUN_1800b9490 ----
int32_t * FUN_1800b9490(int32_t param_1,int32_t *param_2,int32_t param_3)

{
  *param_2 = param_3;
  *(int32_t *)(param_2 + 2) = param_1;
  return param_2;
}

// ---- Function: FUN_1800b94a0 ----
int32_t FUN_1800b94a0(longlong *param_1,int32_t param_2,int *param_3)

{
  int *piVar1;
  uint7 uVar2;
  int32_t local_18 [16];
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x18))(param_1,local_18,param_2);
  uVar2 = (uint7)((ulonglong)piVar1 >> 8);
  if ((*(longlong *)(*(longlong *)(piVar1 + 2) + 8) == *(longlong *)(*(longlong *)(param_3 + 2) + 8)
      ) && (*piVar1 == *param_3)) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}

// ---- Function: FUN_1800b94e0 ----
int32_t * FUN_1800b94e0(int32_t *param_1,int32_t param_2)

{
  *param_1 = param_2;
  *(int32_t ***)(param_1 + 2) = &PTR_vftable_1801ebd20;
  return param_1;
}

// ---- Function: FUN_1800b9500 ----
void FUN_1800b9500(int32_t param_1)

{
  code *pcVar1;
  int32_t *puVar2;
  int32_t local_58;
  int32_t uStack_50;
  int32_t local_48 [4];
  int32_t *local_38 [7];
  
  puVar2 = (int32_t *)FUN_1800b94e0(local_48,param_1);
  local_58 = *puVar2;
  uStack_50 = puVar2[1];
  FUN_1800b9200(local_38,&local_58);
  FUN_1801279a8((longlong *)local_38,&DAT_1801e8ea8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800b9540 ----
LPSTR FUN_1800b9540(LPSTR param_1,UINT param_2,int32_t *param_3)

{
  ulonglong uVar1;
  LPCWSTR pWVar2;
  code *pcVar3;
  int iVar4;
  int32_t uVar5;
  LPSTR pCVar6;
  
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\x0f';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  *param_1 = '\0';
  uVar1 = param_3[1];
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
      FUN_1800b8f90(0x16);
      pcVar3 = (code *)swi(3);
      pCVar6 = (LPSTR)(*pcVar3)();
      return pCVar6;
    }
    pWVar2 = (LPCWSTR)*param_3;
    uVar5 = FUN_180123494(param_2,pWVar2,(int)uVar1,(LPSTR)0x0,0);
    iVar4 = (int)((ulonglong)uVar5 >> 0x20);
    if (iVar4 != 0) {
      FUN_1800b9500(iVar4);
      pcVar3 = (code *)swi(3);
      pCVar6 = (LPSTR)(*pcVar3)();
      return pCVar6;
    }
    FUN_1800b9160((int32_t *)param_1,(longlong)(int)uVar5,0);
    pCVar6 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pCVar6 = *(LPSTR *)param_1;
    }
    uVar5 = FUN_180123494(param_2,pWVar2,(int)uVar1,pCVar6,(int)uVar5);
    iVar4 = (int)((ulonglong)uVar5 >> 0x20);
    if (iVar4 != 0) {
      FUN_1800b9500(iVar4);
      pcVar3 = (code *)swi(3);
      pCVar6 = (LPSTR)(*pcVar3)();
      return pCVar6;
    }
  }
  return param_1;
}

// ---- Function: FUN_1800b9630 ----
int32_t * FUN_1800b9630(int32_t *param_1,ulonglong param_2)

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
    uVar1 = uVar3 + (uVar3 >> 1);
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
        goto LAB_1800b96ce;
      }
      puVar7 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_1800b96ce:
    pvVar6 = operator_new(uVar8);
    if (pvVar6 == (void *)0x0) goto LAB_1800b976a;
    puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar6;
  }
  param_1[2] = lVar2 + param_2;
  param_1[3] = uVar9;
  if (uVar3 < 0x10) {
    FUN_180150fd0(puVar7,param_1,lVar2 + 1U);
  }
  else {
    puVar4 = (int32_t *)*param_1;
    FUN_180150fd0(puVar7,puVar4,lVar2 + 1U);
    puVar10 = puVar4;
    if ((0xfff < uVar3 + 1) &&
       (puVar10 = (int32_t *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar10)))) {
LAB_1800b976a:
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

// ---- Function: FUN_1800b9780 ----
int32_t *
FUN_1800b9780(int32_t *param_1,ulonglong param_2,int32_t param_3,int32_t *param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  code *pcVar5;
  void *pvVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  
  uVar2 = param_1[2];
  uVar9 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar2 < param_2) {
    FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar3 = param_1[3];
  uVar8 = uVar2 + param_2 | 0xf;
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
        goto LAB_1800b982a;
      }
      puVar7 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_1800b982a:
    pvVar6 = operator_new(uVar8);
    if (pvVar6 == (void *)0x0) goto LAB_1800b98f3;
    puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar6;
  }
  param_1[2] = uVar2 + param_2;
  puVar10 = (int32_t *)(uVar2 + (longlong)puVar7);
  param_1[3] = uVar9;
  if (uVar3 < 0x10) {
    FUN_180150fd0(puVar7,param_1,uVar2);
    FUN_180150fd0(puVar10,param_4,param_5);
    *(int32_t *)((longlong)puVar10 + param_5) = 0;
  }
  else {
    puVar4 = (int32_t *)*param_1;
    FUN_180150fd0(puVar7,puVar4,uVar2);
    FUN_180150fd0(puVar10,param_4,param_5);
    *(int32_t *)((longlong)puVar10 + param_5) = 0;
    puVar10 = puVar4;
    if ((0xfff < uVar3 + 1) &&
       (puVar10 = (int32_t *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar10)))) {
LAB_1800b98f3:
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

// ---- Function: FUN_1800b9910 ----
longlong * FUN_1800b9910(longlong *param_1,int32_t *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  byte local_res8;
  
  lVar1 = param_1[2];
  if (param_3 <= (ulonglong)(param_1[3] - lVar1)) {
    param_1[2] = lVar1 + param_3;
    plVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar2 = (longlong *)*param_1;
    }
    FUN_180150fd0((int32_t *)((longlong)plVar2 + lVar1),param_2,param_3);
    *(int32_t *)((longlong)plVar2 + lVar1 + param_3) = 0;
    return param_1;
  }
  plVar2 = FUN_1800b9780(param_1,param_3,(ulonglong)local_res8,param_2,param_3);
  return plVar2;
}

// ---- Function: FUN_1800b99a0 ----
int32_t *
FUN_1800b99a0(int32_t *param_1,ulonglong param_2,int32_t param_3,int32_t param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  code *pcVar5;
  void *pvVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  
  uVar2 = param_1[2];
  uVar9 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff - uVar2 < param_2) {
    FUN_1800ba540();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar3 = param_1[3];
  uVar8 = uVar2 + param_2 | 0xf;
  if ((uVar8 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
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
        goto LAB_1800b9a46;
      }
      puVar7 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar8 = 0x8000000000000027;
LAB_1800b9a46:
    pvVar6 = operator_new(uVar8);
    if (pvVar6 == (void *)0x0) goto LAB_1800b9afa;
    puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = pvVar6;
  }
  param_1[2] = uVar2 + param_2;
  param_1[3] = uVar9;
  if (uVar3 < 0x10) {
    FUN_180150fd0(puVar7,param_1,uVar2);
    *(int32_t *)(uVar2 + (longlong)puVar7) = param_4;
    *(int32_t *)(uVar2 + 1 + (longlong)puVar7) = 0;
  }
  else {
    puVar4 = (int32_t *)*param_1;
    FUN_180150fd0(puVar7,puVar4,uVar2);
    *(int32_t *)(uVar2 + (longlong)puVar7) = param_4;
    *(int32_t *)(uVar2 + 1 + (longlong)puVar7) = 0;
    puVar10 = puVar4;
    if ((0xfff < uVar3 + 1) &&
       (puVar10 = (int32_t *)puVar4[-1],
       0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar10)))) {
LAB_1800b9afa:
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

