#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800cd370 ----
uint FUN_1800cd370(longlong param_1,uint param_2)

{
  int32_t *puVar1;
  ulonglong uVar2;
  int32_t *puVar3;
  int iVar4;
  
  uVar2 = **(ulonglong **)(param_1 + 0x38);
  if (((uVar2 != 0) && (**(ulonglong **)(param_1 + 0x18) < uVar2)) &&
     ((param_2 == 0xffffffff || (*(byte *)(uVar2 - 1) == param_2)))) {
    **(int **)(param_1 + 0x50) = **(int **)(param_1 + 0x50) + 1;
    **(longlong **)(param_1 + 0x38) = **(longlong **)(param_1 + 0x38) + -1;
    if (param_2 == 0xffffffff) {
      param_2 = 0;
    }
    return param_2;
  }
  if ((*(FILE **)(param_1 + 0x80) != (FILE *)0x0) && (param_2 != 0xffffffff)) {
    if ((*(longlong *)(param_1 + 0x68) == 0) &&
       (iVar4 = ungetc(param_2 & 0xff,*(FILE **)(param_1 + 0x80)), iVar4 != -1)) {
      return param_2;
    }
    puVar1 = (int32_t *)(param_1 + 0x70);
    if ((int32_t *)**(longlong **)(param_1 + 0x38) != puVar1) {
      *puVar1 = (char)param_2;
      puVar3 = (int32_t *)**(longlong **)(param_1 + 0x18);
      if (puVar3 != puVar1) {
        *(int32_t **)(param_1 + 0x88) = puVar3;
        *(longlong *)(param_1 + 0x90) =
             (longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38);
      }
      **(longlong **)(param_1 + 0x18) = (longlong)puVar1;
      **(longlong **)(param_1 + 0x38) = (longlong)puVar1;
      **(int **)(param_1 + 0x50) = ((int)param_1 - (int)puVar1) + 0x71;
      return param_2;
    }
  }
  return 0xffffffff;
}

// ---- Function: FUN_1800cd460 ----
void FUN_1800cd460(longlong param_1,int param_2)

{
  byte *pbVar1;
  longlong lVar2;
  int32_t uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  int32_t auStack_88 [32];
  int32_t *local_68;
  int32_t *local_60;
  ulonglong *local_58;
  longlong *local_50;
  byte local_48;
  int32_t local_47 [7];
  longlong local_40;
  int32_t local_38;
  int32_t local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_88;
  if (param_2 != -1) {
    uVar7 = **(ulonglong **)(param_1 + 0x40);
    bVar8 = (byte)param_2;
    if (uVar7 != 0) {
      iVar5 = **(int **)(param_1 + 0x58);
      if (uVar7 < uVar7 + (longlong)iVar5) {
        **(int **)(param_1 + 0x58) = iVar5 + -1;
        pbVar1 = (byte *)**(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x40) = (longlong)(pbVar1 + 1);
        *pbVar1 = bVar8;
        goto LAB_1800cd5db;
      }
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
        lVar2 = *(longlong *)(param_1 + 0x88);
        uVar3 = *(int32_t *)(param_1 + 0x90);
        **(longlong **)(param_1 + 0x18) = lVar2;
        **(longlong **)(param_1 + 0x38) = lVar2;
        **(int **)(param_1 + 0x50) = (int)uVar3 - (int)lVar2;
      }
      plVar4 = *(longlong **)(param_1 + 0x68);
      if (plVar4 != (longlong *)0x0) {
        local_50 = &local_40;
        local_58 = &local_10;
        local_60 = local_30;
        local_68 = &local_38;
        local_48 = bVar8;
        iVar5 = (**(code **)(*plVar4 + 0x38))(plVar4,param_1 + 0x74,&local_48,local_47);
        if ((iVar5 == 0) || (iVar5 == 1)) {
          uVar7 = local_40 - (longlong)local_30;
          if ((uVar7 == 0) ||
             (uVar6 = FUN_18012e4a0(local_30,1,uVar7,*(longlong *)(param_1 + 0x80)), uVar7 == uVar6)
             ) {
            *(int32_t *)(param_1 + 0x71) = 1;
          }
          goto LAB_1800cd5db;
        }
        bVar8 = local_48;
        if (iVar5 != 3) goto LAB_1800cd5db;
      }
      FUN_18012eca4(bVar8,*(longlong **)(param_1 + 0x80));
    }
  }
LAB_1800cd5db:
  FUN_1801252c0(local_10 ^ (ulonglong)auStack_88);
  return;
}

// ---- Function: FUN_1800cd640 ----
void FUN_1800cd640(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  LPVOID pvVar3;
  int32_t *puVar4;
  
  *param_1 = (longlong)&PTR_LAB_1801cc438;
  if ((param_1[0x10] != 0) && (*(longlong **)param_1[3] == param_1 + 0xe)) {
    lVar1 = param_1[0x12];
    lVar2 = param_1[0x11];
    *(longlong *)param_1[3] = lVar2;
    *(longlong *)param_1[7] = lVar2;
    *(int *)param_1[10] = (int)lVar1 - (int)lVar2;
  }
  if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
    if (param_1[0x10] != 0) {
      if (*(longlong **)param_1[3] == param_1 + 0xe) {
        lVar1 = param_1[0x12];
        lVar2 = param_1[0x11];
        *(longlong *)param_1[3] = lVar2;
        *(longlong *)param_1[7] = lVar2;
        *(int *)param_1[10] = (int)lVar1 - (int)lVar2;
      }
      FUN_1800cde50(param_1);
      FUN_18012f050((int *)param_1[0x10]);
    }
    *(int32_t *)((longlong)param_1 + 0x7c) = 0;
    *(int32_t *)((longlong)param_1 + 0x71) = 0;
    param_1[3] = (longlong)(param_1 + 1);
    param_1[4] = (longlong)(param_1 + 2);
    param_1[7] = (longlong)(param_1 + 5);
    param_1[8] = (longlong)(param_1 + 6);
    param_1[10] = (longlong)(param_1 + 9);
    param_1[0xb] = (longlong)param_1 + 0x4c;
    param_1[2] = 0;
    param_1[6] = 0;
    *(int32_t *)((longlong)param_1 + 0x4c) = 0;
    *(int32_t *)param_1[3] = 0;
    *(int32_t *)param_1[7] = 0;
    *(int32_t *)param_1[10] = 0;
    param_1[0x10] = 0;
    *(int32_t *)((longlong)param_1 + 0x74) = DAT_1801fc930;
    param_1[0xd] = 0;
  }
  *param_1 = (longlong)&PTR_FUN_1801cc3c0;
  pvVar3 = (LPVOID)param_1[0xc];
  if (pvVar3 != (LPVOID)0x0) {
    if (*(longlong **)((longlong)pvVar3 + 8) != (longlong *)0x0) {
      puVar4 = (int32_t *)(**(code **)(**(longlong **)((longlong)pvVar3 + 8) + 0x10))();
      if (puVar4 != (int32_t *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    thunk_FUN_18012d5e8(pvVar3);
    return;
  }
  return;
}

// ---- Function: FUN_1800cd7a0 ----
int32_t * FUN_1800cd7a0(longlong *param_1,int32_t *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_1800ce210(param_1);
  if ((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    (**(code **)(*plVar1 + 0x50))(plVar1,param_2,0,1,1);
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  else {
    *param_2 = 0xffffffffffffffff;
    param_2[1] = 0;
    param_2[2] = 0;
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return param_2;
}

// ---- Function: FUN_1800cd880 ----
longlong * FUN_1800cd880(longlong *param_1,int32_t param_2,int32_t param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  int32_t *puVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  longlong *local_98;
  int32_t local_90;
  longlong local_88;
  longlong local_80;
  int32_t **local_70 [5];
  int32_t **local_48 [6];
  
  lVar6 = (longlong)*(int *)(*param_1 + 4);
  uVar8 = 4;
  uVar5 = 4;
  if (*(longlong *)(lVar6 + 0x48 + (longlong)param_1) != 0) {
    uVar5 = 0;
  }
  uVar5 = uVar5 | *(uint *)(lVar6 + 0x10 + (longlong)param_1) & 0x16;
  *(uint *)(lVar6 + 0x10 + (longlong)param_1) = uVar5;
  uVar5 = uVar5 & *(uint *)(lVar6 + 0x14 + (longlong)param_1);
  if (uVar5 == 0) {
    plVar4 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    local_98 = param_1;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    uVar2 = FUN_1800ce210(param_1);
    local_90 = (int32_t)uVar2;
    uVar8 = 0;
    if (((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) == 0) &&
       (plVar4 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1),
       (**(code **)(*plVar4 + 0x50))(plVar4,&local_88,0,param_3,1), uVar8 = 0,
       local_80 + local_88 == -1)) {
      uVar8 = 2;
    }
    lVar6 = (longlong)*(int *)(*param_1 + 4);
    uVar5 = 4;
    if (*(longlong *)(lVar6 + 0x48 + (longlong)param_1) != 0) {
      uVar5 = 0;
    }
    uVar8 = uVar5 | *(uint *)(lVar6 + 0x10 + (longlong)param_1) & 0x17 | uVar8;
    *(uint *)(lVar6 + 0x10 + (longlong)param_1) = uVar8;
    uVar8 = uVar8 & *(uint *)(lVar6 + 0x14 + (longlong)param_1);
    if (uVar8 == 0) {
      plVar4 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      return param_1;
    }
  }
  else {
    if ((uVar5 & 4) == 0) {
      pcVar7 = "ios_base::failbit set";
      if ((uVar5 & 2) == 0) {
        pcVar7 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar7 = "ios_base::badbit set";
    }
    puVar3 = (int32_t *)FUN_1800cf690((int32_t *)&local_98,1);
    FUN_1800cf520(local_70,(int32_t *)pcVar7,puVar3);
    FUN_1801279a8((longlong *)local_70,&DAT_1801e90c8);
  }
  if ((uVar8 & 4) == 0) {
    pcVar7 = "ios_base::failbit set";
    if ((uVar8 & 2) == 0) {
      pcVar7 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar7 = "ios_base::badbit set";
  }
  puVar3 = (int32_t *)FUN_1800cf690((int32_t *)&local_88,1);
  FUN_1800cf520(local_48,(int32_t *)pcVar7,puVar3);
  FUN_1801279a8((longlong *)local_48,&DAT_1801e90c8);
  pcVar1 = (code *)swi(3);
  plVar4 = (longlong *)(*pcVar1)();
  return plVar4;
}

// ---- Function: FUN_1800cda80 ----
longlong * FUN_1800cda80(longlong *param_1,int32_t param_2,longlong param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int32_t *puVar6;
  longlong *plVar7;
  char *pcVar8;
  int32_t local_58 [4];
  int32_t **local_48 [6];
  
  param_1[1] = 0;
  plVar7 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 8))();
  }
  uVar4 = FUN_1800ce210(param_1);
  uVar3 = 0;
  if (((char)uVar4 != '\0') && (uVar3 = 0, 0 < param_3)) {
    plVar7 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    lVar5 = (**(code **)(*plVar7 + 0x40))(plVar7,param_2,param_3);
    param_1[1] = lVar5;
    uVar3 = 0;
    if (lVar5 != param_3) {
      uVar3 = 3;
    }
  }
  lVar5 = (longlong)*(int *)(*param_1 + 4);
  uVar2 = 4;
  if (*(longlong *)(lVar5 + 0x48 + (longlong)param_1) != 0) {
    uVar2 = 0;
  }
  uVar3 = uVar2 | uVar3 | *(uint *)(lVar5 + 0x10 + (longlong)param_1) & 0x17;
  *(uint *)(lVar5 + 0x10 + (longlong)param_1) = uVar3;
  uVar3 = uVar3 & *(uint *)(lVar5 + 0x14 + (longlong)param_1);
  if (uVar3 != 0) {
    if ((uVar3 & 4) == 0) {
      pcVar8 = "ios_base::failbit set";
      if ((uVar3 & 2) == 0) {
        pcVar8 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar8 = "ios_base::badbit set";
    }
    puVar6 = (int32_t *)FUN_1800cf690(local_58,1);
    FUN_1800cf520(local_48,(int32_t *)pcVar8,puVar6);
    FUN_1801279a8((longlong *)local_48,&DAT_1801e90c8);
    pcVar1 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar1)();
    return plVar7;
  }
  plVar7 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x10))();
  }
  return param_1;
}

// ---- Function: FUN_1800cdbe0 ----
ios_base * FUN_1800cdbe0(ios_base *param_1,uint param_2)

{
  ios_base *piVar1;
  
  piVar1 = param_1 + -0xb0;
  *(int32_t ***)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0xb0) =
       &PTR_LAB_1801cc4b8;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0xb4) =
       *(int *)(*(longlong *)piVar1 + 4) + -0xb0;
  FUN_1800cd640((longlong *)(param_1 + -0xa0));
  *(int32_t ***)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0xb0) =
       &PTR_LAB_1801cc4b0;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0xb4) =
       *(int *)(*(longlong *)piVar1 + 4) + -0x18;
  *(int32_t ***)param_1 = &PTR_LAB_1801cc4d0;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(piVar1);
  }
  return piVar1;
}

// ---- Function: FUN_1800cdcd0 ----
void FUN_1800cdcd0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// ---- Function: FUN_1800cdd00 ----
void FUN_1800cdd00(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// ---- Function: FUN_1800cdd30 ----
void FUN_1800cdd30(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = __uncaught_exceptions();
  if (iVar2 == 0) {
    FUN_1800ce150((longlong *)*param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48 + *param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}

// ---- Function: FUN_1800cdd70 ----
int32_t * FUN_1800cdd70(int32_t *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  
  *param_1 = param_2;
  plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x48 + (longlong)param_2);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(int *)((longlong)*(int *)(*param_2 + 4) + 0x10 + (longlong)param_2) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x50 + (longlong)param_2);
    if ((plVar1 == (longlong *)0x0) || (plVar1 == param_2)) {
      bVar2 = true;
    }
    else {
      FUN_1800ce000(plVar1);
      bVar2 = *(int *)((longlong)*(int *)(*param_2 + 4) + 0x10 + (longlong)param_2) == 0;
    }
  }
  else {
    bVar2 = false;
  }
  *(bool *)(param_1 + 1) = bVar2;
  return param_1;
}

// ---- Function: FUN_1800cddf0 ----
ulonglong FUN_1800cddf0(int32_t param_1,int32_t param_2,longlong param_3,longlong param_4,
                       ulonglong param_5)

{
  ulonglong uVar1;
  
  uVar1 = param_4 - param_3;
  if (0x7fffffff < (longlong)uVar1) {
    uVar1 = 0x7fffffff;
  }
  if (uVar1 < param_5) {
    param_5 = uVar1;
  }
  return param_5 & 0xffffffff;
}

// ---- Function: FUN_1800cde10 ----
int32_t
FUN_1800cde10(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
             int32_t *param_5)

{
  *param_5 = param_3;
  return 3;
}

// ---- Function: FUN_1800cde20 ----
int32_t
FUN_1800cde20(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
             int32_t *param_5,int32_t param_6,int32_t param_7,int32_t *param_8)

{
  *param_5 = param_3;
  *param_8 = param_6;
  return 3;
}

// ---- Function: FUN_1800cde40 ----
int32_t FUN_1800cde40(void)

{
  return 1;
}

// ---- Function: FUN_1800cde50 ----
void FUN_1800cde50(longlong *param_1)

{
  int iVar1;
  int32_t auStack_68 [32];
  longlong *local_48;
  longlong local_38;
  int32_t local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_68;
  if ((param_1[0xd] == 0) || (*(char *)((longlong)param_1 + 0x71) == '\0')) {
    FUN_1801252c0(local_10 ^ (ulonglong)auStack_68);
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (iVar1 != -1) {
    local_48 = &local_38;
    iVar1 = (**(code **)(*(longlong *)param_1[0xd] + 0x40))
                      ((longlong *)param_1[0xd],(longlong)param_1 + 0x74,local_30,&local_10);
    if (iVar1 == 0) {
      *(int32_t *)((longlong)param_1 + 0x71) = 0;
    }
    else if (iVar1 != 1) {
      if (iVar1 == 3) {
        *(int32_t *)((longlong)param_1 + 0x71) = 0;
      }
      goto LAB_1800cdecc;
    }
    if (local_38 - (longlong)local_30 != 0) {
      FUN_18012e4a0(local_30,1,local_38 - (longlong)local_30,param_1[0x10]);
    }
  }
LAB_1800cdecc:
  FUN_1801252c0(local_10 ^ (ulonglong)auStack_68);
  return;
}

// ---- Function: FUN_1800cdf40 ----
int32_t * FUN_1800cdf40(int32_t *param_1,ulonglong param_2)

{
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}

