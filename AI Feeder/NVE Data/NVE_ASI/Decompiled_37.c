#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800f7360 ----
void FUN_1800f7360(longlong param_1,int *param_2,int *param_3,ulonglong *param_4,ulonglong *param_5,
                  ulonglong *param_6)

{
  int32_t auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_68;
  int iStack_60;
  int32_t uStack_5c;
  longlong local_58;
  int iStack_50;
  int32_t uStack_4c;
  longlong local_48;
  int iStack_40;
  int32_t uStack_3c;
  
  iVar7 = -0x3d - (int)param_6[1];
  iVar2 = iVar7 * 0x13441;
  iVar2 = ((int)(iVar2 + (iVar2 >> 0x1f & 0x3ffffU)) >> 0x12) + (0 < iVar7) + 0x133;
  auVar1 = *(int32_t (*) [16])
            (&DAT_1801d69f0 + (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) * 0x10);
  uVar5 = auVar1._0_8_;
  uVar3 = *param_5 & 0xffffffff;
  uVar8 = *param_5 >> 0x20;
  uVar11 = uVar5 & 0xffffffff;
  uVar12 = uVar5 >> 0x20;
  uVar4 = uVar11 * uVar8;
  uVar6 = uVar12 * uVar3;
  uVar10 = *param_6 & 0xffffffff;
  local_58 = (((uVar5 & 0xffffffff) * uVar3 >> 0x20) + (uVar4 & 0xffffffff) + 0x80000000 +
              (uVar6 & 0xffffffff) >> 0x20) + uVar12 * uVar8 + (uVar4 >> 0x20) + (uVar6 >> 0x20);
  uVar8 = *param_6 >> 0x20;
  uVar3 = *param_4;
  iVar2 = auVar1._8_4_;
  _iStack_50 = CONCAT44(uStack_4c,(int)param_5[1] + 0x40 + iVar2);
  uVar9 = (uVar3 & 0xffffffff) * uVar12;
  uVar6 = uVar10 * uVar12;
  uVar4 = uVar8 * uVar11;
  uVar5 = (uVar3 >> 0x20) * uVar11;
  _iStack_40 = CONCAT44(uStack_3c,(int)param_4[1] + 0x40 + iVar2);
  local_48 = (((uVar3 & 0xffffffff) * uVar11 >> 0x20) + (uVar5 & 0xffffffff) + 0x80000000 +
              (uVar9 & 0xffffffff) >> 0x20) + 1 + (uVar3 >> 0x20) * uVar12 + (uVar5 >> 0x20) +
             (uVar9 >> 0x20);
  local_68 = ((uVar6 >> 0x20) - 1) +
             ((uVar10 * uVar11 >> 0x20) + (uVar4 & 0xffffffff) + 0x80000000 + (uVar6 & 0xffffffff)
             >> 0x20) + uVar8 * uVar12 + (uVar4 >> 0x20);
  _iStack_60 = CONCAT44(uStack_5c,(int)param_6[1] + 0x40 + iVar2);
  *param_3 = -auVar1._12_4_;
  FUN_1800f70d0(param_1,param_2,param_3,&local_48,&local_58,&local_68);
  return;
}

// ---- Function: FUN_1800f75a0 ----
int32_t * FUN_1800f75a0(longlong *param_1,int32_t *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int32_t *puVar3;
  LPVOID pvVar4;
  code *pcVar5;
  void *pvVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  LPVOID pvVar10;
  ulonglong uVar11;
  int32_t *puVar12;
  
  lVar2 = *param_1;
  uVar11 = 0x7fffffffffffffff;
  if (param_1[1] - lVar2 == 0x7fffffffffffffff) {
    FUN_1800aa480();
    pcVar5 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar5)();
    return puVar7;
  }
  uVar8 = param_1[2] - lVar2;
  uVar1 = (param_1[1] - lVar2) + 1;
  if (0x7fffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar8 = 0x8000000000000026;
LAB_1800f7609:
    pvVar6 = operator_new(uVar8);
    if (pvVar6 == (void *)0x0) goto LAB_1800f7718;
    puVar12 = (int32_t *)((longlong)pvVar6 + 0x27U & 0xffffffffffffffe0);
    puVar12[-1] = pvVar6;
  }
  else {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar11 = uVar1;
    if (uVar1 <= uVar8) {
      uVar11 = uVar8;
    }
    if (uVar11 == 0) {
      puVar12 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar11) {
        uVar8 = uVar11 + 0x27;
        if (uVar8 <= uVar11) {
          FUN_1800ba8a0();
          pcVar5 = (code *)swi(3);
          puVar7 = (int32_t *)(*pcVar5)();
          return puVar7;
        }
        goto LAB_1800f7609;
      }
      puVar12 = (int32_t *)operator_new(uVar11);
    }
  }
  puVar7 = (int32_t *)(((longlong)puVar12 - lVar2) + (longlong)param_2);
  *puVar7 = *param_3;
  puVar3 = (int32_t *)*param_1;
  if (param_2 == (int32_t *)param_1[1]) {
    uVar8 = param_1[1] - (longlong)puVar3;
    puVar9 = puVar12;
    param_2 = puVar3;
  }
  else {
    FUN_180150fd0(puVar12,puVar3,(longlong)param_2 - (longlong)puVar3);
    puVar9 = (int32_t *)(puVar7 + 1);
    uVar8 = param_1[1] - (longlong)param_2;
  }
  FUN_180150fd0(puVar9,param_2,uVar8);
  pvVar4 = (LPVOID)*param_1;
  if (pvVar4 != (LPVOID)0x0) {
    pvVar10 = pvVar4;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar4)) &&
       (pvVar10 = *(LPVOID *)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10)))) {
LAB_1800f7718:
      FUN_18012b7b4();
      pcVar5 = (code *)swi(3);
      puVar7 = (int32_t *)(*pcVar5)();
      return puVar7;
    }
    thunk_FUN_18012d5e8(pvVar10);
  }
  *param_1 = (longlong)puVar12;
  param_1[1] = (longlong)puVar12 + uVar1;
  param_1[2] = (longlong)puVar12 + uVar11;
  return puVar7;
}

// ---- Function: FUN_1800f7720 ----
char * FUN_1800f7720(int32_t param_1)

{
  switch(param_1) {
  case 0:
    return "<uninitialized>";
  case 1:
    return "true literal";
  case 2:
    return "false literal";
  case 3:
    return "null literal";
  case 4:
    return "string literal";
  case 5:
  case 6:
  case 7:
    return "number literal";
  case 8:
    return "\'[\'";
  case 9:
    return "\'{\'";
  case 10:
    return "\']\'";
  case 0xb:
    return "\'}\'";
  case 0xc:
    return "\':\'";
  case 0xd:
    return "\',\'";
  case 0xe:
    return "<parse error>";
  case 0xf:
    return "end of input";
  case 0x10:
    return "\'[\', \'{\', or a literal";
  default:
    return "unknown token";
  }
}

// ---- Function: FUN_1800f7810 ----
char * FUN_1800f7810(int32_t *param_1)

{
  switch(*param_1) {
  case 0:
    return "null";
  case 1:
    return "object";
  case 2:
    return "array";
  case 3:
    return "string";
  case 4:
    return "boolean";
  default:
    return "number";
  case 8:
    return "binary";
  case 9:
    return "discarded";
  }
}

// ---- Function: FUN_1800f78a0 ----
void FUN_1800f78a0(longlong param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = *(LPVOID *)(param_1 + 8);
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x18) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *(int32_t *)(param_1 + 8) = 0;
    *(int32_t *)(param_1 + 0x10) = 0;
    *(int32_t *)(param_1 + 0x18) = 0;
  }
  return;
}

// ---- Function: FUN_1800f7900 ----
longlong *
FUN_1800f7900(longlong *param_1,int32_t *param_2,int32_t param_3,int32_t *param_4,
             int32_t param_5,int32_t *param_6,int32_t *param_7)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  uVar2 = param_4[2] + 0xd + param_2[2] + param_6[2] + param_7[2];
  if (0xf < uVar2) {
    FUN_1800b9630(param_1,uVar2);
    param_1[2] = 0;
  }
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (int32_t *)*param_2;
  }
  FUN_1800b9910(param_1,param_2,*puVar1);
  FUN_1800b9910(param_1,(int32_t *)"parse error",0xb);
  puVar1 = param_4 + 2;
  if (0xf < (ulonglong)param_4[3]) {
    param_4 = (int32_t *)*param_4;
  }
  FUN_1800b9910(param_1,param_4,*puVar1);
  FUN_1800b9910(param_1,(int32_t *)&DAT_18018796c,2);
  puVar1 = param_6 + 2;
  if (0xf < (ulonglong)param_6[3]) {
    param_6 = (int32_t *)*param_6;
  }
  FUN_1800b9910(param_1,param_6,*puVar1);
  puVar1 = param_7 + 2;
  if (0xf < (ulonglong)param_7[3]) {
    param_7 = (int32_t *)*param_7;
  }
  FUN_1800b9910(param_1,param_7,*puVar1);
  return param_1;
}

// ---- Function: FUN_1800f7a30 ----
void FUN_1800f7a30(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int32_t *******pppppppuVar3;
  char *pcVar4;
  int32_t auStack_98 [32];
  int32_t local_78;
  longlong *local_70;
  int32_t *******local_68 [2];
  ulonglong local_58;
  ulonglong local_50;
  int32_t *******local_48 [2];
  ulonglong local_38;
  ulonglong local_30;
  char local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  local_78 = 0;
  pcVar4 = (char *)((longlong)local_14 + 1);
  uVar2 = *(ulonglong *)(param_2 + 8);
  do {
    pcVar4 = pcVar4 + -1;
    uVar1 = uVar2 / 10;
    *pcVar4 = (char)uVar2 + (char)uVar1 * -10 + '0';
    uVar2 = uVar1;
  } while (uVar1 != 0);
  local_70 = param_1;
  FUN_1800f8c90(local_48,(int32_t *)pcVar4,(int32_t *)((longlong)local_14 + 1));
  pcVar4 = (char *)((longlong)local_14 + 1);
  uVar2 = *(longlong *)(param_2 + 0x10) + 1;
  do {
    pcVar4 = pcVar4 + -1;
    uVar1 = uVar2 / 10;
    *pcVar4 = (char)uVar2 + (char)uVar1 * -10 + '0';
    uVar2 = uVar1;
  } while (uVar1 != 0);
  FUN_1800f8c90(local_68,(int32_t *)pcVar4,(int32_t *)((longlong)local_14 + 1));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  local_78 = 0x3e;
  uVar2 = local_58 + 0x12 + local_38;
  if (0xf < uVar2) {
    FUN_1800b9630(param_1,uVar2);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)" at line ",9);
  pppppppuVar3 = local_68;
  if (0xf < local_50) {
    pppppppuVar3 = local_68[0];
  }
  FUN_1800b9910(param_1,pppppppuVar3,local_58);
  FUN_1800b9910(param_1,(int32_t *)", column ",9);
  pppppppuVar3 = local_48;
  if (0xf < local_30) {
    pppppppuVar3 = local_48[0];
  }
  FUN_1800b9910(param_1,pppppppuVar3,local_38);
  FUN_1800a6800((longlong *)local_68);
  FUN_1800a6800((longlong *)local_48);
  FUN_1801252c0(local_10 ^ (ulonglong)auStack_98);
  return;
}

// ---- Function: FUN_1800f7c00 ----
void FUN_1800f7c00(int32_t ***param_1,int32_t param_2,int32_t *param_3,int32_t *param_4)

{
  int32_t **ppuVar1;
  code *pcVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  LPVOID pvVar5;
  int32_t *****pppppuVar6;
  int32_t uVar7;
  int32_t auStackY_118 [32];
  int32_t in_stack_ffffffffffffff08;
  int32_t ****local_d0;
  int32_t uStack_c8;
  int32_t local_c0;
  ulonglong uStack_b8;
  LPVOID local_b0;
  int32_t uStack_a8;
  int32_t local_a0;
  ulonglong uStack_98;
  int32_t ****local_90 [3];
  ulonglong local_78;
  longlong local_70 [4];
  longlong local_50 [4];
  ulonglong local_30;
  
  local_30 = DAT_1801eb080 ^ (ulonglong)auStackY_118;
  uStack_a8 = 0;
  local_a0 = _DAT_1801d8f70;
  uStack_98 = _UNK_1801d8f78;
  local_b0 = (LPVOID)0x0;
  local_d0 = (int32_t ****)param_1;
  puVar3 = (int32_t *)FUN_1800f7a30(local_50,(longlong)param_3);
  local_c0 = _DAT_1801d9000;
  uStack_b8 = _UNK_1801d9008;
  local_d0 = (int32_t ****)s_parse_error_1801d7d60._0_8_;
  uStack_c8 = (ulonglong)CONCAT12(s_parse_error_1801d7d60[10],s_parse_error_1801d7d60._8_2_);
  uVar7 = 0x65;
  puVar4 = (int32_t *)FUN_1800f8dd0(local_70,&local_d0,0x65);
  FUN_1800f7900((longlong *)local_90,puVar4,uVar7,puVar3,in_stack_ffffffffffffff08,&local_b0,param_4
               );
  FUN_1800a6800(local_70);
  if (uStack_b8 < 0x10) {
LAB_1800f7d07:
    FUN_1800a6800(local_50);
    if (0xf < uStack_98) {
      pvVar5 = local_b0;
      if ((0xfff < uStack_98 + 1) &&
         (pvVar5 = *(LPVOID *)((longlong)local_b0 + -8),
         0x1f < (ulonglong)((longlong)local_b0 + (-8 - (longlong)pvVar5)))) goto LAB_1800f7e11;
      thunk_FUN_18012d5e8(pvVar5);
    }
    ppuVar1 = (int32_t **)*param_3;
    local_d0 = local_90;
    if (0xf < local_78) {
      local_d0 = local_90[0];
    }
    param_1[1] = (int32_t **)0x0;
    param_1[2] = (int32_t **)0x0;
    *param_1 = (int32_t **)&PTR_FUN_1801d69e0;
    *(int32_t *)(param_1 + 3) = 0x65;
    param_1[4] = (int32_t **)std::exception::vftable;
    param_1[5] = (int32_t **)0x0;
    param_1[6] = (int32_t **)0x0;
    uStack_c8 = CONCAT71(uStack_c8._1_7_,1);
    __std_exception_copy((longlong *)&local_d0,(longlong *)(param_1 + 5));
    param_1[4] = (int32_t **)std::runtime_error::vftable;
    *param_1 = (int32_t **)&PTR_FUN_1801d7d70;
    param_1[7] = ppuVar1;
    if (local_78 < 0x10) {
LAB_1800f7de8:
      FUN_1801252c0(local_30 ^ (ulonglong)auStackY_118);
      return;
    }
    pppppuVar6 = (int32_t *****)local_90[0];
    if ((local_78 + 1 < 0x1000) ||
       (pppppuVar6 = (int32_t *****)local_90[0][-1],
       (ulonglong)((longlong)local_90[0] + (-8 - (longlong)pppppuVar6)) < 0x20)) {
      thunk_FUN_18012d5e8(pppppuVar6);
      goto LAB_1800f7de8;
    }
    FUN_18012b7b4();
  }
  else {
    pppppuVar6 = (int32_t *****)local_d0;
    if ((uStack_b8 + 1 < 0x1000) ||
       (pppppuVar6 = (int32_t *****)local_d0[-1],
       (ulonglong)((longlong)local_d0 + (-8 - (longlong)pppppuVar6)) < 0x20)) {
      thunk_FUN_18012d5e8(pppppuVar6);
      goto LAB_1800f7d07;
    }
  }
  FUN_18012b7b4();
LAB_1800f7e11:
  FUN_18012b7b4();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ---- Function: FUN_1800f7e20 ----
int32_t * FUN_1800f7e20(int32_t *param_1,uint param_2)

{
  param_1[4] = std::exception::vftable;
  __std_exception_destroy(param_1 + 5);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}

// ---- Function: FUN_1800f7e80 ----
int32_t * FUN_1800f7e80(int32_t *param_1,longlong param_2)

{
  FUN_1800f9190(param_1,param_2);
  *param_1 = &PTR_FUN_1801d7d70;
  param_1[7] = *(int32_t *)(param_2 + 0x38);
  return param_1;
}

// ---- Function: FUN_1800f7ec0 ----
void FUN_1800f7ec0(longlong param_1)

{
  longlong *plVar1;
  LPVOID pvVar2;
  code *pcVar3;
  LPVOID pvVar4;
  
  FUN_1800f9a90((longlong *)(param_1 + 0xc0),*(char *)(param_1 + 0xb8));
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x70));
    *(int32_t *)(param_1 + 0xa8) = 0;
  }
  pvVar2 = *(LPVOID *)(param_1 + 0x40);
  if (pvVar2 != (LPVOID)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (*(longlong *)(param_1 + 0x50) - (longlong)pvVar2 & 0xfffffffffffffffcU)) &&
       (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) goto LAB_1800f7feb;
    thunk_FUN_18012d5e8(pvVar4);
    *(int32_t *)(param_1 + 0x40) = 0;
    *(int32_t *)(param_1 + 0x48) = 0;
    *(int32_t *)(param_1 + 0x50) = 0;
  }
  pvVar2 = *(LPVOID *)(param_1 + 0x20);
  if (pvVar2 != (LPVOID)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (*(longlong *)(param_1 + 0x30) - (longlong)pvVar2 & 0xfffffffffffffffcU)) &&
       (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) goto LAB_1800f7feb;
    thunk_FUN_18012d5e8(pvVar4);
    *(int32_t *)(param_1 + 0x20) = 0;
    *(int32_t *)(param_1 + 0x28) = 0;
    *(int32_t *)(param_1 + 0x30) = 0;
  }
  pvVar2 = *(LPVOID *)(param_1 + 8);
  if (pvVar2 != (LPVOID)0x0) {
    pvVar4 = pvVar2;
    if ((0xfff < (*(longlong *)(param_1 + 0x18) - (longlong)pvVar2 & 0xfffffffffffffff8U)) &&
       (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
LAB_1800f7feb:
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar4);
    *(int32_t *)(param_1 + 8) = 0;
    *(int32_t *)(param_1 + 0x10) = 0;
    *(int32_t *)(param_1 + 0x18) = 0;
  }
  return;
}

// ---- Function: FUN_1800f8000 ----
void FUN_1800f8000(void)

{
  code *pcVar1;
  
  FUN_180123338(0x1801d7d80);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_1800f8020 ----
void FUN_1800f8020(longlong *param_1,ulonglong param_2,int *param_3)

{
  int32_t (*pauVar1) [32];
  LPVOID pvVar2;
  code *pcVar3;
  ulonglong uVar4;
  void *pvVar5;
  ulonglong uVar6;
  LPVOID pvVar7;
  int32_t *puVar8;
  longlong lVar9;
  
  if (0x3fffffffffffffff < param_2) {
    FUN_1800aa480();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = param_1[2] - *param_1 >> 2;
  lVar9 = param_1[1] - *param_1 >> 2;
  if ((0x3fffffffffffffff - (uVar6 >> 1) < uVar6) ||
     ((uVar6 = (uVar6 >> 1) + uVar6, uVar4 = param_2, param_2 <= uVar6 &&
      (uVar4 = uVar6, 0x3fffffffffffffff < uVar6)))) {
LAB_1800f819b:
    FUN_1800ba8a0();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = uVar4 * 4;
  if (uVar4 == 0) {
    puVar8 = (int32_t *)0x0;
  }
  else if (uVar4 < 0x1000) {
    puVar8 = (int32_t *)operator_new(uVar4);
  }
  else {
    if (uVar4 + 0x27 <= uVar4) goto LAB_1800f819b;
    pvVar5 = operator_new(uVar4 + 0x27);
    if (pvVar5 == (void *)0x0) goto LAB_1800f8195;
    puVar8 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    puVar8[-1] = pvVar5;
  }
  pauVar1 = (int32_t (*) [32])((longlong)puVar8 + lVar9 * 4);
  lVar9 = param_2 - lVar9;
  if (*param_3 == 0) {
    FUN_180151670(pauVar1,0,lVar9 * 4);
  }
  else {
    for (; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(int *)*pauVar1 = *param_3;
      pauVar1 = (int32_t (*) [32])(*pauVar1 + 4);
    }
  }
  FUN_180150fd0(puVar8,(int32_t *)*param_1,param_1[1] - *param_1);
  pvVar2 = (LPVOID)*param_1;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar7 = pvVar2;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xfffffffffffffffcU)) &&
       (pvVar7 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar7)))) {
LAB_1800f8195:
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar7);
  }
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)puVar8 + param_2 * 4;
  param_1[2] = uVar4 + (longlong)puVar8;
  return;
}

// ---- Function: FUN_1800f81b0 ----
ulonglong FUN_1800f81b0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int32_t (*pauVar11) [32];
  ulonglong uVar12;
  uint *puVar13;
  uint *puVar14;
  byte local_18 [16];
  
  lVar4 = *param_1;
  uVar10 = (*param_2 - lVar4 >> 2) * 0x20 + param_2[1];
  if (param_1[3] == 0x7fffffffffffffff) {
    FUN_1800f8000();
    pcVar2 = (code *)swi(3);
    uVar10 = (*pcVar2)();
    return uVar10;
  }
  pauVar11 = (int32_t (*) [32])param_1[1];
  uVar8 = param_1[3] + 0x20U >> 5;
  uVar7 = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  uVar3 = (longlong)pauVar11 - lVar4 >> 2;
  if (uVar8 < uVar3) {
    param_1[1] = lVar4 + uVar8 * 4;
  }
  else if (uVar3 < uVar8) {
    if ((ulonglong)(param_1[2] - lVar4 >> 2) < uVar8) {
      FUN_1800f8020(param_1,uVar8,(int *)local_18);
    }
    else {
      lVar9 = uVar8 - uVar3;
      local_18[4] = 0;
      local_18[5] = 0;
      local_18[6] = 0;
      local_18[7] = 0;
      lVar4 = 0;
      do {
        bVar1 = local_18[lVar4];
        lVar5 = lVar4 + 1;
        if (bVar1 != local_18[lVar4 + 4]) {
          uVar7 = -(uint)(bVar1 < local_18[lVar4 + 4]) | 1;
          break;
        }
        lVar4 = lVar5;
      } while (lVar5 != 4);
      if ((uVar7 == 0) || (lVar9 != 0)) {
        FUN_180151670(pauVar11,0,lVar9 * 4);
        pauVar11 = (int32_t (*) [32])((longlong)pauVar11 + lVar9 * 4);
      }
      param_1[1] = (longlong)pauVar11;
    }
  }
  uVar3 = param_1[3];
  if (uVar3 == 0) {
    param_1[3] = 1;
  }
  else {
    lVar4 = *param_1;
    if (((longlong)uVar3 < 0) && (uVar3 != 0)) {
      lVar9 = -((~uVar3 >> 5) * 4 + 4);
    }
    else {
      lVar9 = (uVar3 >> 5) * 4;
    }
    puVar13 = (uint *)(lVar4 + lVar9);
    uVar8 = uVar3 + 1;
    param_1[3] = uVar8;
    if (((longlong)uVar8 < 0) && (uVar8 != 0)) {
      lVar9 = -((~uVar8 >> 5) * 4 + 4);
    }
    else {
      lVar9 = (uVar8 >> 5) * 4;
    }
    puVar14 = (uint *)(lVar4 + lVar9);
    if (((longlong)uVar10 < 0) && (uVar10 != 0)) {
      lVar9 = -((~uVar10 >> 5) * 4 + 4);
    }
    else {
      lVar9 = (uVar10 >> 5) * 4;
    }
    uVar3 = (ulonglong)((uint)uVar3 & 0x1f);
    uVar8 = uVar8 & 0x1f;
    while (((uint *)(lVar4 + lVar9) != puVar13 || (((uint)uVar10 & 0x1f) != uVar3))) {
      if (uVar3 == 0) {
        uVar6 = 0x1f;
      }
      else {
        uVar6 = uVar3 - 1;
      }
      if (uVar3 == 0) {
        puVar13 = puVar13 + -1;
      }
      if (uVar8 == 0) {
        uVar12 = 0x1f;
      }
      else {
        uVar12 = uVar8 - 1;
      }
      if (uVar8 == 0) {
        puVar14 = puVar14 + -1;
      }
      uVar3 = uVar6;
      uVar8 = uVar12;
      if ((*puVar13 & 1 << ((byte)uVar6 & 0x1f)) == 0) {
        *puVar14 = *puVar14 & ~(1 << ((uint)uVar12 & 0x1f));
      }
      else {
        *puVar14 = *puVar14 | 1 << ((uint)uVar12 & 0x1f);
      }
    }
  }
  return uVar10;
}

// ---- Function: FUN_1800f8400 ----
void FUN_1800f8400(longlong *param_1,char *param_2)

{
  longlong lVar1;
  uint *puVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = param_1[3];
  if (((longlong)local_10 < 0) && (local_10 != 0)) {
    local_18 = -((~local_10 >> 5) * 4 + 4);
  }
  else {
    local_18 = (local_10 >> 5) * 4;
  }
  local_18 = *param_1 + local_18;
  local_10 = local_10 & 0x1f;
  uVar4 = FUN_1800f81b0(param_1,&local_18);
  if (((longlong)uVar4 < 0) && (uVar4 != 0)) {
    lVar1 = -((~uVar4 >> 5) * 4 + 4);
  }
  else {
    lVar1 = (uVar4 >> 5) * 4;
  }
  puVar6 = (uint *)(*param_1 + lVar1);
  cVar3 = *param_2;
  uVar5 = (uint)uVar4 & 0x1f;
  uVar4 = (ulonglong)uVar5 + 1;
  uVar7 = (uint)uVar4 & 0x1f;
  puVar2 = puVar6 + (uVar4 >> 5);
  if ((puVar6 != puVar2) || ((ulonglong)uVar5 != (ulonglong)uVar7)) {
    uVar8 = -1 << (sbyte)uVar5;
    uVar5 = -(uint)(cVar3 != '\0');
    if (puVar6 == puVar2) {
      uVar7 = 0xffffffff >> (0x20U - (char)uVar7 & 0x1f);
      *puVar6 = (~uVar7 | ~uVar8) & *puVar6 | uVar7 & uVar8 & uVar5;
    }
    else {
      *puVar6 = *puVar6 & ~uVar8 | uVar8 & uVar5;
      FUN_180151670((int32_t (*) [32])(puVar6 + 1),-(cVar3 != '\0'),
                    (longlong)puVar2 - (longlong)(puVar6 + 1));
      if ((ulonglong)uVar7 != 0) {
        uVar7 = 0xffffffff >> (0x20U - (char)uVar7 & 0x1f);
        *puVar2 = ~uVar7 & *puVar2 | uVar7 & uVar5;
      }
    }
  }
  return;
}

// ---- Function: FUN_1800f8570 ----
char * FUN_1800f8570(int32_t *param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int32_t uVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  int32_t *puVar9;
  
  iVar7 = param_2 + param_3;
  if ((param_2 <= iVar7) && (iVar7 < 0x10)) {
    lVar5 = (longlong)iVar7;
    FUN_180151670((int32_t (*) [32])((longlong)param_1 + (longlong)param_2),0x30,lVar5 - param_2)
    ;
    *(int32_t *)(lVar5 + (longlong)param_1) = 0x302e;
    return (char *)((longlong)param_1 + lVar5 + 2);
  }
  uVar1 = iVar7 - 1;
  if (uVar1 < 0xf) {
    puVar9 = (int32_t *)((longlong)iVar7 + (longlong)param_1);
    FUN_180150fd0((int32_t *)((longlong)puVar9 + 1),puVar9,(longlong)param_2 - (longlong)iVar7);
    *(int32_t *)puVar9 = 0x2e;
    pcVar4 = (char *)((longlong)param_2 + 1 + (longlong)param_1);
  }
  else {
    puVar9 = (int32_t *)((longlong)param_1 + 1);
    if (iVar7 + 3U < 4) {
      uVar6 = (ulonglong)-iVar7;
      FUN_180150fd0((int32_t *)((longlong)param_1 + uVar6 + 2),param_1,(longlong)param_2);
      *(int32_t *)param_1 = 0x30;
      *(int32_t *)puVar9 = 0x2e;
      FUN_180151670((int32_t (*) [32])((longlong)param_1 + 2),0x30,uVar6);
      pcVar4 = (char *)((longlong)param_2 + 2U + uVar6 + (longlong)param_1);
    }
    else {
      if (param_2 != 1) {
        FUN_180150fd0((int32_t *)((longlong)param_1 + 2),puVar9,(longlong)param_2 - 1);
        *(int32_t *)puVar9 = 0x2e;
        puVar9 = (int32_t *)((longlong)param_2 + 1 + (longlong)param_1);
      }
      *(int32_t *)puVar9 = 0x65;
      uVar3 = 0x2d;
      uVar8 = 1 - iVar7;
      if (-1 < (int)uVar1) {
        uVar3 = 0x2b;
        uVar8 = uVar1;
      }
      uVar6 = (ulonglong)uVar8;
      *(int32_t *)((longlong)puVar9 + 1) = uVar3;
      if (uVar8 < 10) {
        *(int32_t *)((longlong)puVar9 + 2) = 0x30;
        pcVar4 = (char *)((longlong)puVar9 + 3);
      }
      else if (uVar8 < 100) {
        pcVar4 = (char *)((longlong)puVar9 + 3);
        cVar2 = (char)(uVar6 / 10);
        *(char *)((longlong)puVar9 + 2) = cVar2 + '0';
        uVar6 = (ulonglong)(byte)((char)uVar8 + cVar2 * -10);
      }
      else {
        pcVar4 = (char *)((longlong)puVar9 + 4);
        *(char *)((longlong)puVar9 + 2) = (char)(uVar6 / 100) + '0';
        uVar8 = uVar8 + (int)(uVar6 / 100) * -100;
        uVar6 = (ulonglong)uVar8 / 10;
        *pcVar4 = (char)uVar8 + (char)uVar6 * -10 + '0';
        uVar6 = uVar6 & 0xff;
      }
      pcVar4 = pcVar4 + 1;
      *(char *)((longlong)puVar9 + 3) = (char)uVar6 + '0';
    }
  }
  return pcVar4;
}

// ---- Function: FUN_1800f8740 ----
void FUN_1800f8740(int32_t *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  int32_t auStack_58 [40];
  int32_t *local_30;
  char local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_58;
  pcVar2 = (char *)((longlong)local_14 + 1);
  do {
    pcVar2 = pcVar2 + -1;
    uVar1 = param_2 / 10;
    *pcVar2 = (char)param_2 + (char)uVar1 * -10 + '0';
    param_2 = uVar1;
  } while (uVar1 != 0);
  local_30 = param_1;
  FUN_1800f8c90(param_1,(int32_t *)pcVar2,(int32_t *)((longlong)local_14 + 1));
  FUN_1801252c0(local_10 ^ (ulonglong)auStack_58);
  return;
}

