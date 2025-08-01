#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800b9b10 ----
void FUN_1800b9b10(longlong *param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4)

{
  code *pcVar1;
  LPVOID pvVar2;
  ulonglong uVar3;
  LPVOID pvVar4;
  int32_t ****ppppuVar5;
  longlong lVar6;
  CHAR *pCVar7;
  int32_t auStack_b8 [32];
  byte local_98;
  int32_t local_94;
  int32_t *local_88;
  int32_t local_80;
  longlong *local_78;
  CHAR local_70;
  int32_t uStack_6f;
  ulonglong local_60;
  ulonglong local_58;
  int32_t ***local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1801eb080 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  local_94 = 1;
  local_78 = param_1;
  uVar3 = __std_fs_code_page();
  local_88 = param_3;
  if (7 < (ulonglong)param_3[3]) {
    local_88 = (int32_t *)*param_3;
  }
  local_80 = param_3[2];
  FUN_1800b9540((LPSTR)local_50,(UINT)uVar3,&local_88);
  local_88 = param_4;
  if (7 < (ulonglong)param_4[3]) {
    local_88 = (int32_t *)*param_4;
  }
  local_80 = param_4[2];
  FUN_1800b9540(&local_70,(UINT)uVar3,&local_88);
  lVar6 = 8;
  if (local_60 == 0) {
    lVar6 = 4;
  }
  uVar3 = lVar6 + param_2[1] + local_40 + local_60;
  if ((ulonglong)param_1[3] < uVar3) {
    lVar6 = param_1[2];
    FUN_1800b9630(param_1,uVar3 - lVar6);
    param_1[2] = lVar6;
  }
  FUN_1800b9910(param_1,(int32_t *)*param_2,param_2[1]);
  FUN_1800b9910(param_1,(int32_t *)&DAT_180187990,3);
  ppppuVar5 = local_50;
  if (0xf < local_38) {
    ppppuVar5 = (int32_t ****)local_50[0];
  }
  FUN_1800b9910(param_1,ppppuVar5,local_40);
  if (local_60 != 0) {
    FUN_1800b9910(param_1,(int32_t *)&DAT_180187994,4);
    pCVar7 = &local_70;
    if (0xf < local_58) {
      pCVar7 = (CHAR *)CONCAT71(uStack_6f,local_70);
    }
    FUN_1800b9910(param_1,(int32_t *)pCVar7,local_60);
  }
  uVar3 = param_1[2];
  if (uVar3 < (ulonglong)param_1[3]) {
    param_1[2] = uVar3 + 1;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (longlong *)*param_1;
    }
    *(int32_t *)((longlong)param_1 + uVar3) = 0x22;
  }
  else {
    FUN_1800b99a0(param_1,1,(ulonglong)local_98,0x22);
  }
  if (0xf < local_58) {
    pvVar2 = (LPVOID)CONCAT71(uStack_6f,local_70);
    pvVar4 = pvVar2;
    if ((0xfff < local_58 + 1) &&
       (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) goto LAB_1800b9d62;
    thunk_FUN_18012d5e8(pvVar4);
  }
  local_60 = 0;
  local_58 = 0xf;
  local_70 = '\0';
  if (0xf < local_38) {
    ppppuVar5 = (int32_t ****)local_50[0];
    if ((0xfff < local_38 + 1) &&
       (ppppuVar5 = (int32_t ****)local_50[0][-1],
       0x1f < (ulonglong)((longlong)local_50[0] + (-8 - (longlong)ppppuVar5)))) {
      FUN_18012b7b4();
LAB_1800b9d62:
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(ppppuVar5);
  }
  FUN_1801252c0(local_30 ^ (ulonglong)auStack_b8);
  return;
}

// ---- Function: FUN_1800b9d70 ----
void FUN_1800b9d70(int32_t ***param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4
                  )

{
  int32_t auStack_88 [32];
  int32_t **local_68;
  longlong lStack_60;
  int32_t ***local_58;
  longlong local_48 [3];
  int32_t uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStack_88;
  local_68 = (int32_t **)*param_4;
  lStack_60 = param_4[1];
  local_58 = param_1;
  FUN_1800b8dc0(param_1,(ulonglong *)&local_68,param_2);
  *param_1 = (int32_t **)&PTR_FUN_1801879a0;
  FUN_1800b9f10(param_1 + 5,param_3);
  param_1[0xb] = (int32_t **)0x0;
  param_1[0xc] = (int32_t **)0x0;
  param_1[9] = (int32_t **)0x0;
  param_1[10] = (int32_t **)0x0;
  param_1[0xb] = (int32_t **)0x0;
  param_1[0xc] = (int32_t **)0x7;
  *(int32_t *)(param_1 + 9) = 0;
  local_48[1] = 0;
  local_48[2] = _DAT_1801d8f60;
  uStack_30 = _UNK_1801d8f68;
  local_48[0] = 0;
  local_68 = (int32_t **)"Unknown exception";
  if (param_1[1] != (int32_t **)0x0) {
    local_68 = param_1[1];
  }
  lStack_60 = -1;
  do {
    lStack_60 = lStack_60 + 1;
  } while (*(char *)((longlong)local_68 + lStack_60) != '\0');
  FUN_1800b9b10((longlong *)(param_1 + 0xd),&local_68,param_3,local_48);
  FUN_1800ba040(local_48);
  FUN_1801252c0(local_28 ^ (ulonglong)auStack_88);
  return;
}

// ---- Function: FUN_1800b9e60 ----
void FUN_1800b9e60(int32_t *param_1)

{
  FUN_1800a6800(param_1 + 0xd);
  FUN_1800ba040(param_1 + 9);
  FUN_1800ba040(param_1 + 5);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  return;
}

// ---- Function: FUN_1800b9ea0 ----
int32_t * FUN_1800b9ea0(int32_t *param_1,uint param_2)

{
  FUN_1800a6800(param_1 + 0xd);
  FUN_1800ba040(param_1 + 9);
  FUN_1800ba040(param_1 + 5);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}

// ---- Function: FUN_1800b9f10 ----
int32_t * FUN_1800b9f10(int32_t *param_1,int32_t *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  int32_t uVar3;
  void *pvVar4;
  int32_t *puVar5;
  ulonglong uVar6;
  __uint64 _Var7;
  
  puVar5 = (int32_t *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (int32_t *)*param_2;
  }
  if (0x7ffffffffffffffe < uVar1) {
    FUN_1800ba540();
    pcVar2 = (code *)swi(3);
    puVar5 = (int32_t *)(*pcVar2)();
    return puVar5;
  }
  if (uVar1 < 8) {
    param_1[2] = uVar1;
    param_1[3] = 7;
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    return param_1;
  }
  uVar6 = uVar1 | 7;
  if (uVar6 < 0x7fffffffffffffff) {
    if (uVar6 < 10) {
      uVar6 = 10;
    }
    if (0x7fffffffffffffff < uVar6 + 1) goto LAB_1800ba02f;
    _Var7 = (uVar6 + 1) * 2;
    if (_Var7 == 0) goto LAB_1800b9ff3;
  }
  else {
    _Var7 = 0xfffffffffffffffe;
    uVar6 = 0x7ffffffffffffffe;
  }
  if (_Var7 < 0x1000) {
    puVar5 = (int32_t *)operator_new(_Var7);
  }
  else {
    if (_Var7 + 0x27 <= _Var7) {
LAB_1800ba02f:
      FUN_1800ba8a0();
      pcVar2 = (code *)swi(3);
      puVar5 = (int32_t *)(*pcVar2)();
      return puVar5;
    }
    pvVar4 = operator_new(_Var7 + 0x27);
    if (pvVar4 == (void *)0x0) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      puVar5 = (int32_t *)(*pcVar2)();
      return puVar5;
    }
    puVar5 = (int32_t *)((longlong)pvVar4 + 0x27U & 0xffffffffffffffe0);
    puVar5[-1] = pvVar4;
  }
LAB_1800b9ff3:
  *param_1 = puVar5;
  param_1[2] = uVar1;
  param_1[3] = uVar6;
  FUN_180150fd0(puVar5,param_2,uVar1 * 2 + 2);
  return param_1;
}

// ---- Function: FUN_1800ba040 ----
void FUN_1800ba040(longlong *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  if (7 < (ulonglong)param_1[3]) {
    pvVar1 = (LPVOID)*param_1;
    pvVar3 = pvVar1;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  *(int32_t *)param_1 = 0;
  return;
}

// ---- Function: thunk_FUN_1800ba040 ----
void thunk_FUN_1800ba040(longlong *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  if (7 < (ulonglong)param_1[3]) {
    pvVar1 = (LPVOID)*param_1;
    pvVar3 = pvVar1;
    if ((0xfff < param_1[3] * 2 + 2U) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  *(int32_t *)param_1 = 0;
  return;
}

// ---- Function: FUN_1800ba0c0 ----
int32_t * FUN_1800ba0c0(int32_t *param_1,longlong param_2)

{
  int32_t uVar1;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(int32_t *)(param_2 + 0x20);
  param_1[3] = *(int32_t *)(param_2 + 0x18);
  param_1[4] = uVar1;
  *param_1 = &PTR_FUN_1801879a0;
  FUN_1800b9f10(param_1 + 5,(int32_t *)(param_2 + 0x28));
  FUN_1800b9f10(param_1 + 9,(int32_t *)(param_2 + 0x48));
  FUN_1800ba630(param_1 + 0xd,(int32_t *)(param_2 + 0x68));
  return param_1;
}

// ---- Function: FUN_1800ba150 ----
int32_t * FUN_1800ba150(int32_t *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}

// ---- Function: FUN_1800ba1a0 ----
int32_t * FUN_1800ba1a0(int32_t *param_1,longlong param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(int32_t *)(param_2 + 0x18);
  uVar2 = *(int32_t *)(param_2 + 0x20);
  *param_1 = std::system_error::vftable;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}

// ---- Function: FUN_1800ba200 ----
int32_t * FUN_1800ba200(int32_t *param_1,longlong param_2)

{
  int32_t uVar1;
  
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::_System_error::vftable;
  uVar1 = *(int32_t *)(param_2 + 0x20);
  param_1[3] = *(int32_t *)(param_2 + 0x18);
  param_1[4] = uVar1;
  return param_1;
}

// ---- Function: FUN_1800ba250 ----
int32_t * FUN_1800ba250(int32_t *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::runtime_error::vftable;
  return param_1;
}

// ---- Function: FUN_1800ba290 ----
void FUN_1800ba290(int32_t param_1,int32_t *param_2,int32_t *param_3)

{
  code *pcVar1;
  int32_t local_c8;
  int32_t uStack_c0;
  int32_t local_b8 [4];
  int32_t **local_98 [18];
  
  local_c8 = *param_2;
  uStack_c0 = param_2[1];
  FUN_1800ba470(local_b8,(int32_t *)"exists");
  FUN_1800b9d70(local_98,local_b8,param_3,&local_c8);
  FUN_1801279a8((longlong *)local_98,&DAT_1801e8f98);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800ba2f0 ----
void FUN_1800ba2f0(longlong *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = (LPVOID)*param_1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xfffffffffffffffcU)) &&
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
  return;
}

// ---- Function: FUN_1800ba360 ----
void FUN_1800ba360(int32_t *param_1,int32_t *param_2,ulonglong param_3)

{
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

// ---- Function: FUN_1800ba470 ----
int32_t * FUN_1800ba470(int32_t *param_1,int32_t *param_2)

{
  ulonglong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (*(char *)((longlong)param_2 + uVar1) != '\0');
  FUN_1800ba360(param_1,param_2,uVar1);
  return param_1;
}

// ---- Function: FUN_1800ba4b0 ----
void FUN_1800ba4b0(longlong *param_1)

{
  longlong *plVar1;
  LPVOID pvVar2;
  code *pcVar3;
  LPVOID pvVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_1;
  if (plVar5 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar5 != plVar1; plVar5 = plVar5 + 4) {
      FUN_1800a6800(plVar5);
    }
    pvVar2 = (LPVOID)*param_1;
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xffffffffffffffe0U)) &&
       (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

