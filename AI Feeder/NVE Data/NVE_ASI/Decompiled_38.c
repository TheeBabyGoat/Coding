#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800f87c0 ----
int32_t * FUN_1800f87c0(void)

{
  return &DAT_1801f5388;
}

// ---- Function: FUN_1800f87d0 ----
int FUN_1800f87d0(int32_t *param_1,ulonglong param_2,longlong param_3,int32_t param_4)

{
  int iVar1;
  ulonglong *puVar2;
  int32_t local_res20;
  
  local_res20 = param_4;
  puVar2 = (ulonglong *)FUN_1800f87c0();
  iVar1 = FUN_18013100c(*puVar2 | 2,param_1,param_2,param_3,(int32_t *)0x0,&local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// ---- Function: FUN_1800f8830 ----
longlong FUN_1800f8830(longlong *param_1,longlong param_2)

{
  if (0xf < (ulonglong)param_1[3]) {
    return *param_1 + param_2;
  }
  return (longlong)param_1 + param_2;
}

// ---- Function: FUN_1800f8850 ----
void FUN_1800f8850(int32_t *param_1,int32_t param_2,int32_t *param_3)

{
  code *pcVar1;
  int32_t *puVar2;
  int32_t ***pppuVar3;
  LPVOID pvVar4;
  int32_t auStack_b8 [40];
  int32_t ***local_90;
  int32_t uStack_88;
  int32_t local_80;
  ulonglong uStack_78;
  LPVOID local_70;
  int32_t uStack_68;
  int32_t local_60;
  ulonglong uStack_58;
  int32_t ***local_50 [3];
  ulonglong local_38;
  longlong local_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_b8;
  uStack_68 = 0;
  local_60 = _DAT_1801d8f70;
  uStack_58 = _UNK_1801d8f78;
  local_70 = (LPVOID)0x0;
  local_80 = _DAT_1801d9000;
  uStack_78 = _UNK_1801d9008;
  local_90 = (int32_t ***)s_other_error_1801d81f0._0_8_;
  uStack_88 = (ulonglong)CONCAT12(s_other_error_1801d81f0[10],s_other_error_1801d81f0._8_2_);
  puVar2 = (int32_t *)FUN_1800f8dd0(local_30,&local_90,500);
  FUN_1800f8bc0((longlong *)local_50,puVar2,&local_70,param_3);
  FUN_1800a6800(local_30);
  if (0xf < uStack_78) {
    pppuVar3 = local_90;
    if ((0xfff < uStack_78 + 1) &&
       (pppuVar3 = (int32_t ***)local_90[-1],
       0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pppuVar3)))) goto LAB_1800f8a08;
    thunk_FUN_18012d5e8(pppuVar3);
  }
  if (0xf < uStack_58) {
    pvVar4 = local_70;
    if ((0xfff < uStack_58 + 1) &&
       (pvVar4 = *(LPVOID *)((longlong)local_70 + -8),
       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pvVar4)))) {
      FUN_18012b7b4();
LAB_1800f8a08:
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar4);
  }
  local_90 = local_50;
  if (0xf < local_38) {
    local_90 = local_50[0];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1801d69e0;
  *(int32_t *)(param_1 + 3) = 500;
  param_1[4] = std::exception::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  uStack_88 = CONCAT71(uStack_88._1_7_,1);
  __std_exception_copy((longlong *)&local_90,param_1 + 5);
  param_1[4] = std::runtime_error::vftable;
  *param_1 = &PTR_FUN_1801d69e0;
  FUN_1800a6800((longlong *)local_50);
  FUN_1801252c0(local_10 ^ (ulonglong)auStack_b8);
  return;
}

// ---- Function: FUN_1800f8a10 ----
void FUN_1800f8a10(int32_t *param_1,char param_2)

{
  code *pcVar1;
  void *pvVar2;
  int32_t *puVar3;
  char *pcVar4;
  int32_t auStack_98 [32];
  int32_t local_78 [8];
  longlong local_70 [7];
  int32_t *local_38;
  int32_t *local_30;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  switch(param_2) {
  case '\0':
  case '\x05':
  case '\x06':
  case '\a':
    *param_1 = 0;
    break;
  case '\x01':
    puVar3 = (int32_t *)operator_new(0x10);
    local_38 = local_78;
    *puVar3 = 0;
    puVar3[1] = 0;
    local_30 = puVar3;
    pvVar2 = operator_new(0x50);
    *(void **)pvVar2 = pvVar2;
    *(void **)((longlong)pvVar2 + 8) = pvVar2;
    *(void **)((longlong)pvVar2 + 0x10) = pvVar2;
    *(int32_t *)((longlong)pvVar2 + 0x18) = 0x101;
    *puVar3 = pvVar2;
    goto LAB_1800f8a95;
  case '\x02':
    puVar3 = (int32_t *)operator_new(0x18);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *param_1 = puVar3;
    break;
  case '\x03':
    puVar3 = (int32_t *)operator_new(0x20);
    local_38 = local_78;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    local_30 = puVar3;
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
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_98);
  return;
}

// ---- Function: FUN_1800f8bc0 ----
longlong *
FUN_1800f8bc0(longlong *param_1,int32_t *param_2,int32_t *param_3,int32_t *param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  uVar2 = param_2[2] + param_4[2] + param_3[2];
  if (0xf < uVar2) {
    FUN_1800b9630(param_1,uVar2);
    param_1[2] = 0;
  }
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (int32_t *)*param_2;
  }
  FUN_1800b9910(param_1,param_2,*puVar1);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (int32_t *)*param_3;
  }
  FUN_1800b9910(param_1,param_3,*puVar1);
  puVar1 = param_4 + 2;
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (int32_t *)*param_4;
  }
  FUN_1800b9910(param_1,param_4,*puVar1);
  return param_1;
}

// ---- Function: FUN_1800f8c90 ----
int32_t * FUN_1800f8c90(int32_t *param_1,int32_t *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  void *pvVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  
  puVar6 = (int32_t *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 == param_3) {
    param_1[3] = 0xf;
    *(int32_t *)param_1 = 0;
    return param_1;
  }
  uVar7 = (longlong)param_3 - (longlong)param_2;
  if (0x7fffffffffffffff < uVar7) {
    FUN_1800ba540();
    pcVar2 = (code *)swi(3);
    puVar6 = (int32_t *)(*pcVar2)();
    return puVar6;
  }
  if (uVar7 < 0x10) {
    param_1[2] = uVar7;
    param_1[3] = 0xf;
    FUN_180150fd0(param_1,param_2,uVar7);
    *(int32_t *)(uVar7 + (longlong)param_1) = 0;
    return param_1;
  }
  uVar3 = uVar7 | 0xf;
  if (uVar3 < 0x8000000000000000) {
    if (uVar3 < 0x16) {
      uVar3 = 0x16;
    }
    uVar1 = uVar3 + 1;
    if (uVar1 == 0) goto LAB_1800f8d7a;
    if (uVar1 < 0x1000) {
      puVar6 = (int32_t *)operator_new(uVar1);
      goto LAB_1800f8d7a;
    }
    uVar4 = uVar3 + 0x28;
    if (uVar4 <= uVar1) {
      FUN_1800ba8a0();
      pcVar2 = (code *)swi(3);
      puVar6 = (int32_t *)(*pcVar2)();
      return puVar6;
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
    puVar6 = (int32_t *)(*pcVar2)();
    return puVar6;
  }
  puVar6 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
  puVar6[-1] = pvVar5;
LAB_1800f8d7a:
  *param_1 = puVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar3;
  FUN_180150fd0(puVar6,param_2,uVar7);
  *(int32_t *)((longlong)puVar6 + uVar7) = 0;
  return param_1;
}

// ---- Function: FUN_1800f8dd0 ----
void FUN_1800f8dd0(longlong *param_1,int32_t *param_2,uint param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int32_t ****ppppuVar4;
  uint uVar5;
  char *pcVar6;
  int32_t auStack_88 [32];
  byte local_68;
  int32_t local_64;
  longlong *local_60;
  int32_t ***local_58 [2];
  ulonglong local_48;
  ulonglong local_40;
  char local_25 [5];
  ulonglong local_20;
  char *pcVar7;
  
  local_20 = DAT_1801eb080 ^ (ulonglong)auStack_88;
  local_64 = 0;
  pcVar6 = local_25 + 2;
  if ((int)param_3 < 0) {
    uVar5 = -param_3;
    do {
      pcVar7 = pcVar6;
      pcVar6 = pcVar7 + -1;
      *pcVar6 = (char)uVar5 + (char)((ulonglong)uVar5 / 10) * -10 + '0';
      uVar5 = (uint)((ulonglong)uVar5 / 10);
    } while (uVar5 != 0);
    pcVar6 = pcVar7 + -2;
    *pcVar6 = '-';
  }
  else {
    do {
      pcVar6 = pcVar6 + -1;
      uVar5 = param_3 / 10;
      *pcVar6 = (char)param_3 + (char)uVar5 * -10 + '0';
      param_3 = uVar5;
    } while (uVar5 != 0);
  }
  local_60 = param_1;
  FUN_1800f8c90(local_58,(int32_t *)pcVar6,(int32_t *)(local_25 + 2));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  local_64 = 0xe;
  uVar3 = local_48 + 0x13 + param_2[2];
  if (0xf < uVar3) {
    FUN_1800b9630(param_1,uVar3);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"[json.exception.",0x10);
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (int32_t *)*param_2;
  }
  FUN_1800b9910(param_1,param_2,*puVar1);
  uVar3 = param_1[2];
  if (uVar3 < (ulonglong)param_1[3]) {
    param_1[2] = uVar3 + 1;
    plVar2 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar2 = (longlong *)*param_1;
    }
    *(int32_t *)((longlong)plVar2 + uVar3) = 0x2e;
  }
  else {
    FUN_1800b99a0(param_1,1,(ulonglong)local_68,0x2e);
  }
  ppppuVar4 = local_58;
  if (0xf < local_40) {
    ppppuVar4 = (int32_t ****)local_58[0];
  }
  FUN_1800b9910(param_1,ppppuVar4,local_48);
  FUN_1800b9910(param_1,(int32_t *)&DAT_1801d8230,2);
  FUN_1800a6800((longlong *)local_58);
  FUN_1801252c0(local_20 ^ (ulonglong)auStack_88);
  return;
}

// ---- Function: FUN_1800f8fa0 ----
void FUN_1800f8fa0(int32_t *param_1,uint param_2,int32_t *param_3)

{
  code *pcVar1;
  int32_t uVar2;
  int32_t *puVar3;
  int32_t ****ppppuVar4;
  LPVOID pvVar5;
  int32_t auStack_c8 [40];
  int32_t ****local_a0;
  int32_t uStack_98;
  int32_t local_90;
  ulonglong uStack_88;
  LPVOID local_80;
  int32_t uStack_78;
  int32_t local_70;
  ulonglong uStack_68;
  int32_t ****local_60 [3];
  ulonglong local_48;
  longlong local_40 [4];
  ulonglong local_20;
  
  local_20 = DAT_1801eb080 ^ (ulonglong)auStack_c8;
  uStack_78 = 0;
  local_70 = _DAT_1801d8f70;
  uStack_68 = _UNK_1801d8f78;
  local_80 = (LPVOID)0x0;
  local_a0 = (int32_t ****)0x0;
  uStack_98 = 0;
  local_a0 = (int32_t ****)operator_new(0x20);
  uVar2 = s_invalid_iterator_1801d8250._8_8_;
  local_90 = _DAT_1801d9050;
  uStack_88 = _UNK_1801d9058;
  *local_a0 = (int32_t ***)s_invalid_iterator_1801d8250._0_8_;
  local_a0[1] = (int32_t ***)uVar2;
  *(char *)(local_a0 + 2) = '\0';
  puVar3 = (int32_t *)FUN_1800f8dd0(local_40,&local_a0,param_2);
  FUN_1800f8bc0((longlong *)local_60,puVar3,&local_80,param_3);
  FUN_1800a6800(local_40);
  if (0xf < uStack_88) {
    ppppuVar4 = local_a0;
    if ((0xfff < uStack_88 + 1) &&
       (ppppuVar4 = (int32_t ****)local_a0[-1],
       (char *)0x1f < (char *)((longlong)local_a0 + (-8 - (longlong)ppppuVar4))))
    goto LAB_1800f915b;
    thunk_FUN_18012d5e8(ppppuVar4);
  }
  if (0xf < uStack_68) {
    pvVar5 = local_80;
    if ((0xfff < uStack_68 + 1) &&
       (pvVar5 = *(LPVOID *)((longlong)local_80 + -8),
       0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)pvVar5)))) {
      FUN_18012b7b4();
LAB_1800f915b:
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar5);
  }
  local_a0 = local_60;
  if (0xf < local_48) {
    local_a0 = local_60[0];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1801d69e0;
  *(uint *)(param_1 + 3) = param_2;
  param_1[4] = std::exception::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  uStack_98 = CONCAT71(uStack_98._1_7_,1);
  __std_exception_copy((longlong *)&local_a0,param_1 + 5);
  param_1[4] = std::runtime_error::vftable;
  *param_1 = &PTR_FUN_1801d69e0;
  FUN_1800a6800((longlong *)local_60);
  FUN_1801252c0(local_20 ^ (ulonglong)auStack_c8);
  return;
}

// ---- Function: FUN_1800f9170 ----
void FUN_1800f9170(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x20) + 8))();
  return;
}

// ---- Function: FUN_1800f9190 ----
int32_t * FUN_1800f9190(int32_t *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = &PTR_FUN_1801d69e0;
  *(int32_t *)(param_1 + 3) = *(int32_t *)(param_2 + 0x18);
  param_1[4] = std::exception::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  __std_exception_copy((longlong *)(param_2 + 0x28),param_1 + 5);
  param_1[4] = std::runtime_error::vftable;
  return param_1;
}

// ---- Function: FUN_1800f9210 ----
void FUN_1800f9210(int32_t *param_1,int32_t *param_2)

{
  code *pcVar1;
  int32_t auStack_88 [32];
  longlong local_68 [7];
  int32_t local_30 [4];
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_88;
  if ((int32_t *)*param_1 == (int32_t *)*param_2) {
    switch(*(int32_t *)*param_1) {
    default:
      break;
    case 1:
      break;
    case 2:
    }
    FUN_1801252c0(local_10 ^ (ulonglong)auStack_88);
    return;
  }
  FUN_1800ba470(local_30,(int32_t *)"cannot compare iterators of different containers");
  FUN_1800f8fa0(local_68,0xd4,local_30);
  FUN_1801279a8(local_68,&DAT_1801e92f8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800f92f0 ----
int32_t * FUN_1800f92f0(int32_t *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  switch(*(int32_t *)*param_1) {
  default:
    param_1[3] = param_1[3] + 1;
    return param_1;
  case 1:
    break;
  case 2:
    param_1[2] = param_1[2] + 0x10;
    return param_1;
  }
  plVar4 = (longlong *)param_1[1];
  plVar3 = (longlong *)plVar4[2];
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar3 + 0x19);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x19);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
  }
  else {
    plVar3 = (longlong *)plVar4[1];
    plVar2 = plVar3;
    if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
      while (plVar3 = plVar2, plVar4 == (longlong *)plVar3[2]) {
        plVar2 = (longlong *)plVar3[1];
        plVar4 = plVar3;
        if (*(char *)((longlong)plVar2 + 0x19) != '\0') {
          param_1[1] = plVar2;
          return param_1;
        }
      }
    }
  }
  param_1[1] = plVar3;
  return param_1;
}

// ---- Function: FUN_1800f93b0 ----
int32_t * FUN_1800f93b0(int32_t param_1,int32_t *param_2)

{
  int32_t *puVar1;
  
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x8000000000000000;
  puVar1 = (int32_t *)*param_2;
  switch(*puVar1) {
  case 1:
    param_2[1] = 0;
  }
  switch(*puVar1) {
  default:
    param_2[3] = 1;
    return param_2;
  case 1:
    param_2[1] = **(int32_t **)(puVar1 + 8);
    return param_2;
  case 2:
    param_2[2] = *(int32_t *)(*(longlong *)(puVar1 + 8) + 8);
    return param_2;
  }
}

// ---- Function: FUN_1800f9490 ----
int32_t * FUN_1800f9490(int32_t param_1,int32_t *param_2)

{
  int32_t *puVar1;
  
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x8000000000000000;
  puVar1 = (int32_t *)*param_2;
  switch(*puVar1) {
  case 1:
    param_2[1] = 0;
  }
  switch(*puVar1) {
  case 0:
    param_2[3] = 1;
    return param_2;
  case 1:
    param_2[1] = *(int32_t *)**(int32_t **)(puVar1 + 8);
    return param_2;
  case 2:
    param_2[2] = **(int32_t **)(puVar1 + 8);
    return param_2;
  default:
    param_2[3] = 0;
    return param_2;
  }
}

// ---- Function: FUN_1800f9570 ----
void FUN_1800f9570(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int32_t *puVar3;
  code *pcVar4;
  int32_t *puVar5;
  void *pvVar6;
  int32_t *puVar7;
  __uint64 _Var8;
  int32_t *puVar9;
  
  lVar1 = *param_1;
  if ((ulonglong)(param_1[2] - lVar1 >> 4) < param_2) {
    if (0xfffffffffffffff < param_2) {
      FUN_1800aa480();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar7 = (int32_t *)0x0;
    lVar2 = param_1[1];
    _Var8 = param_2 * 0x10;
    if (_Var8 != 0) {
      if (_Var8 < 0x1000) {
        puVar7 = (int32_t *)operator_new(_Var8);
      }
      else {
        if (_Var8 + 0x27 <= _Var8) {
          FUN_1800ba8a0();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar6 = operator_new(_Var8 + 0x27);
        if (pvVar6 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar7 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
        *(void **)(puVar7 + -8) = pvVar6;
      }
    }
    puVar3 = (int32_t *)param_1[1];
    puVar5 = puVar7;
    for (puVar9 = (int32_t *)*param_1; puVar9 != puVar3; puVar9 = puVar9 + 0x10) {
      *puVar5 = *puVar9;
      *(int32_t *)(puVar5 + 8) = *(int32_t *)(puVar9 + 8);
      *puVar9 = 0;
      *(int32_t *)(puVar9 + 8) = 0;
      puVar5 = puVar5 + 0x10;
    }
    FUN_1800f9750(param_1,(longlong)puVar7,lVar2 - lVar1 >> 4,param_2);
  }
  return;
}

// ---- Function: FUN_1800f9680 ----
void FUN_1800f9680(longlong param_1)

{
  int32_t *puVar1;
  LPVOID pvVar2;
  code *pcVar3;
  LPVOID pvVar4;
  int32_t *puVar5;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  puVar1 = *(int32_t **)(param_1 + 0x20);
  for (puVar5 = *(int32_t **)(param_1 + 0x18); puVar5 != puVar1; puVar5 = puVar5 + 0x10) {
    FUN_1800f9ec0(puVar5);
  }
  pvVar2 = *(LPVOID *)(param_1 + 8);
  pvVar4 = pvVar2;
  if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 4)) &&
     (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
     0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
    FUN_18012b7b4();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  thunk_FUN_18012d5e8(pvVar4);
  return;
}

