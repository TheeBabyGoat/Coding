#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800cdf70 ----
int32_t * FUN_1800cdf70(int32_t *param_1)

{
  int32_t uVar1;
  
  FUN_1800ce2d0(param_1);
  *(int32_t *)((longlong)param_1 + 0x7c) = 0;
  *(int32_t *)((longlong)param_1 + 0x71) = 0;
  *param_1 = &PTR_LAB_1801cc438;
  param_1[3] = param_1 + 1;
  param_1[0xb] = (int32_t *)((longlong)param_1 + 0x4c);
  param_1[4] = param_1 + 2;
  param_1[7] = param_1 + 5;
  param_1[8] = param_1 + 6;
  param_1[10] = param_1 + 9;
  param_1[2] = 0;
  param_1[6] = 0;
  *(int32_t *)((longlong)param_1 + 0x4c) = 0;
  uVar1 = DAT_1801fc930;
  param_1[1] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 9) = 0;
  *(int32_t *)((longlong)param_1 + 0x74) = uVar1;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  return param_1;
}

// ---- Function: FUN_1800ce000 ----
longlong * FUN_1800ce000(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  int32_t *puVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  longlong *local_58;
  char local_50;
  int32_t local_48 [4];
  int32_t **local_38 [6];
  
  plVar4 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar4 != (longlong *)0x0) {
    FUN_1800cdd70(&local_58,param_1);
    if (local_50 != '\0') {
      iVar2 = (**(code **)(*plVar4 + 0x68))(plVar4);
      uVar6 = 4;
      uVar7 = 0;
      if (iVar2 == -1) {
        uVar7 = uVar6;
      }
      lVar5 = (longlong)*(int *)(*param_1 + 4);
      if (*(longlong *)(lVar5 + 0x48 + (longlong)param_1) != 0) {
        uVar6 = 0;
      }
      uVar7 = uVar6 | *(uint *)(lVar5 + 0x10 + (longlong)param_1) & 0x17 | uVar7;
      *(uint *)(lVar5 + 0x10 + (longlong)param_1) = uVar7;
      uVar7 = uVar7 & *(uint *)(lVar5 + 0x14 + (longlong)param_1);
      if (uVar7 != 0) {
        if ((uVar7 & 4) == 0) {
          pcVar8 = "ios_base::failbit set";
          if ((uVar7 & 2) == 0) {
            pcVar8 = "ios_base::eofbit set";
          }
        }
        else {
          pcVar8 = "ios_base::badbit set";
        }
        puVar3 = (int32_t *)FUN_1800cf690(local_48,1);
        FUN_1800cf520(local_38,(int32_t *)pcVar8,puVar3);
        FUN_1801279a8((longlong *)local_38,&DAT_1801e90c8);
        pcVar1 = (code *)swi(3);
        plVar4 = (longlong *)(*pcVar1)();
        return plVar4;
      }
    }
    iVar2 = __uncaught_exceptions();
    if (iVar2 == 0) {
      FUN_1800ce150(local_58);
    }
    plVar4 = *(longlong **)((longlong)*(int *)(*local_58 + 4) + 0x48 + (longlong)local_58);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}

// ---- Function: FUN_1800ce150 ----
void FUN_1800ce150(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int32_t *puVar4;
  longlong lVar5;
  char *pcVar6;
  int32_t local_48 [4];
  int32_t **local_38 [6];
  
  lVar5 = (longlong)*(int *)(*param_1 + 4);
  if (((*(int *)(lVar5 + 0x10 + (longlong)param_1) == 0) &&
      ((*(byte *)(lVar5 + 0x18 + (longlong)param_1) & 2) != 0)) &&
     (iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x48 + (longlong)param_1) + 0x68))(), iVar2 == -1
     )) {
    lVar5 = (longlong)*(int *)(*param_1 + 4);
    uVar3 = *(uint *)(lVar5 + 0x10 + (longlong)param_1) & 0x13 | 4;
    *(uint *)(lVar5 + 0x10 + (longlong)param_1) = uVar3;
    uVar3 = uVar3 & *(uint *)(lVar5 + 0x14 + (longlong)param_1);
    if (uVar3 != 0) {
      if ((uVar3 & 4) == 0) {
        pcVar6 = "ios_base::failbit set";
        if ((uVar3 & 2) == 0) {
          pcVar6 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar6 = "ios_base::badbit set";
      }
      puVar4 = (int32_t *)FUN_1800cf690(local_48,1);
      FUN_1800cf520(local_38,(int32_t *)pcVar6,puVar4);
      FUN_1801279a8((longlong *)local_38,&DAT_1801e90c8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ---- Function: FUN_1800ce210 ----
ulonglong FUN_1800ce210(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  char *pcVar8;
  int32_t local_48 [4];
  int32_t **local_38 [6];
  
  iVar1 = *(int *)(*param_1 + 4);
  uVar5 = *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x10);
  if (uVar5 == 0) {
    plVar2 = *(longlong **)((longlong)param_1 + (longlong)iVar1 + 0x50);
    if (plVar2 != (longlong *)0x0) {
      FUN_1800ce000(plVar2);
    }
    return CONCAT71((int7)((ulonglong)*param_1 >> 8),
                    *(int *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) == 0);
  }
  uVar4 = 4;
  if (*(longlong *)((longlong)param_1 + (longlong)iVar1 + 0x48) != 0) {
    uVar4 = 0;
  }
  uVar5 = uVar4 | uVar5 & 0x15 | 2;
  *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x10) = uVar5;
  uVar5 = uVar5 & *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x14);
  if (uVar5 == 0) {
    return (ulonglong)uVar5;
  }
  if ((uVar5 & 4) == 0) {
    pcVar8 = "ios_base::failbit set";
    if ((uVar5 & 2) == 0) {
      pcVar8 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar8 = "ios_base::badbit set";
  }
  puVar6 = (int32_t *)FUN_1800cf690(local_48,1);
  FUN_1800cf520(local_38,(int32_t *)pcVar8,puVar6);
  FUN_1801279a8((longlong *)local_38,&DAT_1801e90c8);
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return uVar7;
}

// ---- Function: FUN_1800ce2d0 ----
int32_t * FUN_1800ce2d0(int32_t *param_1)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  void *pvVar7;
  _Locimp *p_Var8;
  
  *param_1 = &PTR_FUN_1801cc3c0;
  puVar1 = param_1 + 1;
  *puVar1 = 0;
  puVar2 = param_1 + 2;
  *puVar2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar3 = param_1 + 5;
  *puVar3 = 0;
  puVar4 = param_1 + 6;
  *puVar4 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar5 = param_1 + 9;
  *(int32_t *)puVar5 = 0;
  puVar6 = (int32_t *)((longlong)param_1 + 0x4c);
  *puVar6 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  pvVar7 = operator_new(0x10);
  p_Var8 = FUN_180124548('\x01');
  *(_Locimp **)((longlong)pvVar7 + 8) = p_Var8;
  param_1[0xc] = pvVar7;
  param_1[3] = puVar1;
  param_1[4] = puVar2;
  param_1[7] = puVar3;
  param_1[8] = puVar4;
  param_1[10] = puVar5;
  param_1[0xb] = puVar6;
  *puVar2 = 0;
  *puVar4 = 0;
  *puVar6 = 0;
  *puVar1 = 0;
  *puVar3 = 0;
  *(int32_t *)puVar5 = 0;
  return param_1;
}

// ---- Function: FUN_1800ce3b0 ----
void FUN_1800ce3b0(longlong param_1,int32_t param_2)

{
  longlong *plVar1;
  code *pcVar2;
  int32_t uVar3;
  uint uVar4;
  void *pvVar5;
  _Locimp *p_Var6;
  longlong *plVar7;
  int32_t *puVar8;
  char *pcVar9;
  int32_t local_48 [2];
  longlong *local_40;
  int32_t **local_38 [6];
  
  *(int32_t *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  *(int32_t *)(param_1 + 0x18) = 0x201;
  *(int32_t *)(param_1 + 0x20) = 6;
  *(int32_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  pvVar5 = operator_new(0x10);
  p_Var6 = FUN_180124548('\x01');
  *(_Locimp **)((longlong)pvVar5 + 8) = p_Var6;
  *(void **)(param_1 + 0x40) = pvVar5;
  *(int32_t *)(param_1 + 0x48) = param_2;
  *(int32_t *)(param_1 + 0x50) = 0;
  plVar1 = *(longlong **)((longlong)pvVar5 + 8);
  local_40 = plVar1;
  (**(code **)(*plVar1 + 8))(plVar1);
  plVar7 = FUN_1800cf400((longlong)local_48);
  uVar3 = (**(code **)(*plVar7 + 0x40))(plVar7,CONCAT71((int7)((ulonglong)*plVar7 >> 8),0x20));
  puVar8 = (int32_t *)(**(code **)(*plVar1 + 0x10))(plVar1);
  if (puVar8 != (int32_t *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  *(int32_t *)(param_1 + 0x58) = uVar3;
  if (*(longlong *)(param_1 + 0x48) == 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0x13;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
    uVar4 = *(uint *)(param_1 + 0x10) & *(uint *)(param_1 + 0x14);
    if (uVar4 != 0) {
      if ((uVar4 & 4) == 0) {
        pcVar9 = "ios_base::failbit set";
        if ((uVar4 & 2) == 0) {
          pcVar9 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar9 = "ios_base::badbit set";
      }
      puVar8 = (int32_t *)FUN_1800cf690(local_48,1);
      FUN_1800cf520(local_38,(int32_t *)pcVar9,puVar8);
      FUN_1801279a8((longlong *)local_38,&DAT_1801e90c8);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// ---- Function: FUN_1800ce4f0 ----
longlong * FUN_1800ce4f0(longlong *param_1,wchar_t *param_2)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  int32_t *puVar4;
  longlong *plVar5;
  char *pcVar6;
  int32_t local_58 [4];
  int32_t **local_48 [6];
  
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    param_2 = *(wchar_t **)param_2;
  }
  *param_1 = (longlong)&DAT_1801cc344;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x16] = (longlong)&PTR_FUN_1801cc4c8;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(int32_t *)(param_1 + 0x21) = 0;
  *(int32_t ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_1801cc4b0;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  FUN_1800ce3b0((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,param_1 + 2);
  *(int32_t ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_1801cc4b8;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  FUN_1800cdf70(param_1 + 2);
  lVar3 = FUN_1800ceb80((longlong)(param_1 + 2),param_2);
  if (lVar3 == 0) {
    lVar3 = (longlong)*(int *)(*param_1 + 4);
    uVar2 = 4;
    if (*(longlong *)(lVar3 + 0x48 + (longlong)param_1) != 0) {
      uVar2 = 0;
    }
    uVar2 = uVar2 | *(uint *)(lVar3 + 0x10 + (longlong)param_1) & 0x15 | 2;
    *(uint *)(lVar3 + 0x10 + (longlong)param_1) = uVar2;
    uVar2 = uVar2 & *(uint *)(lVar3 + 0x14 + (longlong)param_1);
    if (uVar2 != 0) {
      if ((uVar2 & 4) == 0) {
        pcVar6 = "ios_base::failbit set";
        if ((uVar2 & 2) == 0) {
          pcVar6 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar6 = "ios_base::badbit set";
      }
      puVar4 = (int32_t *)FUN_1800cf690(local_58,1);
      FUN_1800cf520(local_48,(int32_t *)pcVar6,puVar4);
      FUN_1801279a8((longlong *)local_48,&DAT_1801e90c8);
      pcVar1 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar1)();
      return plVar5;
    }
  }
  *(int32_t ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_LAB_1801cc4b8;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  return param_1;
}

// ---- Function: FUN_1800ce6c0 ----
longlong * FUN_1800ce6c0(longlong param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_res8;
  _Lockit local_res10 [8];
  longlong *local_res18 [2];
  
  std::_Lockit::_Lockit(local_res10,0);
  plVar5 = DAT_1801f3b00;
  local_res18[0] = DAT_1801f3b00;
  if (DAT_1801fc938 == 0) {
    std::_Lockit::_Lockit((_Lockit *)&local_res8,0);
    if (DAT_1801fc938 == 0) {
      DAT_1801ed228 = DAT_1801ed228 + 1;
      DAT_1801fc938 = (ulonglong)DAT_1801ed228;
    }
    std::_Lockit::~_Lockit((_Lockit *)&local_res8);
  }
  uVar2 = DAT_1801fc938;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = DAT_1801fc938 * 8;
  if (DAT_1801fc938 < *(ulonglong *)(lVar3 + 0x18)) {
    plVar6 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x10));
    if (plVar6 != (longlong *)0x0) goto LAB_1800ce7b3;
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  if (*(char *)(lVar3 + 0x24) == '\0') {
LAB_1800ce76c:
    if (plVar6 != (longlong *)0x0) goto LAB_1800ce7b3;
  }
  else {
    lVar3 = FUN_180124540();
    if (uVar2 < *(ulonglong *)(lVar3 + 0x18)) {
      plVar6 = *(longlong **)(lVar4 + *(longlong *)(lVar3 + 0x10));
      goto LAB_1800ce76c;
    }
  }
  plVar6 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    lVar4 = FUN_1800cea00((longlong *)local_res18,param_1);
    plVar6 = local_res18[0];
    if (lVar4 == -1) {
      FUN_1800b5f90();
      pcVar1 = (code *)swi(3);
      plVar5 = (longlong *)(*pcVar1)();
      return plVar5;
    }
    local_res8 = local_res18[0];
    FUN_180124504(local_res18[0]);
    (**(code **)(*plVar6 + 8))(plVar6);
    DAT_1801f3b00 = plVar6;
  }
LAB_1800ce7b3:
  std::_Lockit::~_Lockit(local_res10);
  return plVar6;
}

// ---- Function: FUN_1800ce7e0 ----
int32_t * FUN_1800ce7e0(float *param_1,int32_t *param_2,byte *param_3)

{
  float *pfVar1;
  int iVar2;
  int32_t *puVar3;
  longlong lVar4;
  int32_t *puVar5;
  code *pcVar6;
  int32_t *puVar7;
  ulonglong uVar8;
  int32_t *puVar9;
  float fVar10;
  
  uVar8 = (((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1]) *
            0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
          0x100000001b3;
  puVar7 = *(int32_t **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  pfVar1 = param_1 + 2;
  puVar9 = *(int32_t **)pfVar1;
  if (puVar7 != puVar9) {
    iVar2 = *(int *)(puVar7 + 2);
    puVar9 = puVar7;
    while( true ) {
      if (*(int *)param_3 == iVar2) {
        *param_2 = puVar9;
        *(int32_t *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar9 == *(int32_t **)
                     (*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar9 = (int32_t *)puVar9[1];
      iVar2 = *(int *)(puVar9 + 2);
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
    FUN_180123338(0x1801cc0f0);
    pcVar6 = (code *)swi(3);
    puVar7 = (int32_t *)(*pcVar6)();
    return puVar7;
  }
  puVar7 = (int32_t *)operator_new(0x20);
  *(int32_t *)(puVar7 + 2) = *(int32_t *)param_3;
  puVar7[3] = 0;
  fVar10 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar10 && fVar10 != *param_1) {
    FUN_1800c65a0(param_1);
    puVar3 = *(int32_t **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10);
    puVar9 = *(int32_t **)pfVar1;
    if (puVar3 != puVar9) {
      iVar2 = *(int *)(puVar3 + 2);
      puVar9 = puVar3;
      while (*(int *)(puVar7 + 2) != iVar2) {
        if (puVar9 == *(int32_t **)
                       (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar8) * 0x10)
           ) goto LAB_1800ce991;
        puVar9 = (int32_t *)puVar9[1];
        iVar2 = *(int *)(puVar9 + 2);
      }
      puVar9 = (int32_t *)*puVar9;
    }
  }
LAB_1800ce991:
  puVar3 = (int32_t *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = puVar9;
  puVar7[1] = puVar3;
  *puVar3 = puVar7;
  puVar9[1] = puVar7;
  uVar8 = *(ulonglong *)(param_1 + 0xc) & uVar8;
  lVar4 = *(longlong *)(param_1 + 6);
  puVar5 = *(int32_t **)(lVar4 + uVar8 * 0x10);
  if (puVar5 == *(int32_t **)pfVar1) {
    *(int32_t **)(lVar4 + uVar8 * 0x10) = puVar7;
  }
  else {
    if (puVar5 == puVar9) {
      *(int32_t **)(lVar4 + uVar8 * 0x10) = puVar7;
      goto LAB_1800ce9e1;
    }
    if (*(int32_t **)(lVar4 + 8 + uVar8 * 0x10) != puVar3) goto LAB_1800ce9e1;
  }
  *(int32_t **)(lVar4 + 8 + uVar8 * 0x10) = puVar7;
LAB_1800ce9e1:
  *param_2 = puVar7;
  *(int32_t *)(param_2 + 1) = 1;
  return param_2;
}

// ---- Function: FUN_1800cea00 ----
int32_t FUN_1800cea00(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  int32_t *puVar3;
  int32_t uVar4;
  char *pcVar5;
  _Lockit local_88 [8];
  LPVOID local_80;
  int32_t local_78;
  LPVOID local_70;
  int32_t local_68;
  LPVOID local_60;
  int32_t local_58;
  LPVOID local_50;
  int32_t local_48;
  LPVOID local_40;
  int32_t local_38;
  LPVOID local_30;
  int32_t local_28;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar3 = (int32_t *)operator_new(0x10);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      pcVar5 = "";
    }
    else {
      pcVar5 = *(char **)(lVar1 + 0x28);
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)(lVar1 + 0x30);
      }
    }
    std::_Lockit::_Lockit(local_88,0);
    local_80 = (LPVOID)0x0;
    local_78 = 0;
    local_70 = (LPVOID)0x0;
    local_68 = 0;
    local_60 = (LPVOID)0x0;
    local_58 = 0;
    local_50 = (LPVOID)0x0;
    local_48 = 0;
    local_40 = (LPVOID)0x0;
    local_38 = 0;
    local_30 = (LPVOID)0x0;
    local_28 = 0;
    if (pcVar5 == (char *)0x0) {
      FUN_180123380(0x1801874f0);
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    std::_Locinfo::_Locinfo_ctor((_Locinfo *)local_88,pcVar5);
    *(int32_t *)(puVar3 + 1) = 0;
    *puVar3 = std::codecvt<char,char,struct__Mbstatet>::vftable;
    *param_1 = (longlong)puVar3;
    std::_Locinfo::_Locinfo_dtor((_Locinfo *)local_88);
    if (local_30 != (LPVOID)0x0) {
      FUN_18012d5e8(local_30);
    }
    local_30 = (LPVOID)0x0;
    if (local_40 != (LPVOID)0x0) {
      FUN_18012d5e8(local_40);
    }
    local_40 = (LPVOID)0x0;
    if (local_50 != (LPVOID)0x0) {
      FUN_18012d5e8(local_50);
    }
    local_50 = (LPVOID)0x0;
    if (local_60 != (LPVOID)0x0) {
      FUN_18012d5e8(local_60);
    }
    local_60 = (LPVOID)0x0;
    if (local_70 != (LPVOID)0x0) {
      FUN_18012d5e8(local_70);
    }
    local_70 = (LPVOID)0x0;
    if (local_80 != (LPVOID)0x0) {
      FUN_18012d5e8(local_80);
    }
    local_80 = (LPVOID)0x0;
    std::_Lockit::~_Lockit(local_88);
  }
  return 2;
}

// ---- Function: FUN_1800ceb80 ----
longlong FUN_1800ceb80(longlong param_1,wchar_t *param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  longlong *plVar6;
  char cVar7;
  _iobuf *p_Var8;
  int32_t *puVar9;
  longlong *local_res8;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  
  if ((*(longlong *)(param_1 + 0x80) == 0) &&
     (p_Var8 = FUN_180124b04(param_2,0x21,0x40), p_Var8 != (_iobuf *)0x0)) {
    *(int32_t *)(param_1 + 0x7c) = 1;
    *(int32_t *)(param_1 + 0x71) = 0;
    puVar9 = (int32_t *)(param_1 + 8);
    *(int32_t **)(param_1 + 0x18) = puVar9;
    puVar1 = (int32_t *)(param_1 + 0x10);
    *(int32_t **)(param_1 + 0x20) = puVar1;
    puVar2 = (int32_t *)(param_1 + 0x28);
    *(int32_t **)(param_1 + 0x38) = puVar2;
    puVar3 = (int32_t *)(param_1 + 0x30);
    *(int32_t **)(param_1 + 0x40) = puVar3;
    puVar4 = (int32_t *)(param_1 + 0x48);
    *(int32_t **)(param_1 + 0x50) = puVar4;
    puVar5 = (int32_t *)(param_1 + 0x4c);
    *(int32_t **)(param_1 + 0x58) = puVar5;
    *puVar1 = 0;
    *puVar3 = 0;
    *puVar5 = 0;
    *puVar9 = 0;
    *puVar2 = 0;
    *puVar4 = 0;
    local_res8 = (longlong *)0x0;
    local_48 = 0;
    local_40 = 0;
    _get_stream_buffer_pointers((longlong)p_Var8,(longlong *)&local_res8,&local_48,&local_40);
    *(longlong **)(param_1 + 0x18) = local_res8;
    *(longlong **)(param_1 + 0x20) = local_res8;
    *(longlong *)(param_1 + 0x38) = local_48;
    *(longlong *)(param_1 + 0x40) = local_48;
    *(longlong *)(param_1 + 0x50) = local_40;
    *(longlong *)(param_1 + 0x58) = local_40;
    *(_iobuf **)(param_1 + 0x80) = p_Var8;
    *(int32_t *)(param_1 + 0x74) = DAT_1801fc930;
    *(int32_t *)(param_1 + 0x68) = 0;
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 8);
    local_38 = plVar6;
    (**(code **)(*plVar6 + 8))(plVar6);
    local_res8 = FUN_1800ce6c0((longlong)&local_40);
    cVar7 = (**(code **)(*local_res8 + 0x18))(local_res8);
    if (cVar7 == '\0') {
      *(longlong **)(param_1 + 0x68) = local_res8;
      *(int32_t **)(param_1 + 0x18) = puVar9;
      *(int32_t **)(param_1 + 0x20) = puVar1;
      *(int32_t **)(param_1 + 0x38) = puVar2;
      *(int32_t **)(param_1 + 0x40) = puVar3;
      *(int32_t **)(param_1 + 0x50) = puVar4;
      *(int32_t **)(param_1 + 0x58) = puVar5;
      *puVar1 = 0;
      *puVar3 = 0;
      *puVar5 = 0;
      *puVar9 = 0;
      *puVar2 = 0;
      *puVar4 = 0;
    }
    else {
      *(int32_t *)(param_1 + 0x68) = 0;
    }
    puVar9 = (int32_t *)(**(code **)(*plVar6 + 0x10))(plVar6);
    if (puVar9 != (int32_t *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  else {
    param_1 = 0;
  }
  return param_1;
}

// ---- Function: FUN_1800ced50 ----
longlong * FUN_1800ced50(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  LPVOID pvVar7;
  code *pcVar8;
  void *pvVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  LPVOID pvVar15;
  longlong *plVar16;
  
  lVar4 = *param_1;
  lVar13 = ((longlong)param_2 - lVar4) / 6 + ((longlong)param_2 - lVar4 >> 0x3f);
  lVar5 = (param_1[1] - lVar4) / 0x18;
  if (lVar5 == 0xaaaaaaaaaaaaaaa) {
    FUN_1800aa480();
    pcVar8 = (code *)swi(3);
    plVar10 = (longlong *)(*pcVar8)();
    return plVar10;
  }
  uVar1 = lVar5 + 1;
  uVar14 = (param_1[2] - lVar4) / 0x18;
  if (0xaaaaaaaaaaaaaaa - (uVar14 >> 1) < uVar14) {
LAB_1800cf03a:
    FUN_1800ba8a0();
    pcVar8 = (code *)swi(3);
    plVar10 = (longlong *)(*pcVar8)();
    return plVar10;
  }
  uVar14 = (uVar14 >> 1) + uVar14;
  uVar11 = uVar1;
  if (uVar1 <= uVar14) {
    uVar11 = uVar14;
  }
  if (0xaaaaaaaaaaaaaaa < uVar11) goto LAB_1800cf03a;
  plVar10 = (longlong *)0x0;
  uVar14 = uVar11 * 0x18;
  if (uVar14 != 0) {
    if (uVar14 < 0x1000) {
      plVar10 = (longlong *)operator_new(uVar14);
    }
    else {
      if (uVar14 + 0x27 <= uVar14) goto LAB_1800cf03a;
      pvVar9 = operator_new(uVar14 + 0x27);
      if (pvVar9 == (void *)0x0) goto LAB_1800cf034;
      plVar10 = (longlong *)((longlong)pvVar9 + 0x27U & 0xffffffffffffffe0);
      plVar10[-1] = (longlong)pvVar9;
    }
  }
  lVar4 = param_3[1];
  lVar5 = param_3[2];
  plVar3 = plVar10 + ((lVar13 >> 2) - (lVar13 >> 0x3f)) * 3;
  lVar13 = *param_3;
  plVar12 = plVar3 + 3;
  *param_3 = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  plVar3[1] = lVar4;
  *plVar3 = lVar13;
  plVar3[2] = lVar5;
  plVar6 = (longlong *)param_1[1];
  plVar16 = (longlong *)*param_1;
  plVar2 = plVar10;
  if (param_2 == plVar6) {
    for (; plVar12 = plVar2, plVar16 != plVar6; plVar16 = plVar16 + 3) {
      lVar4 = plVar16[2];
      lVar5 = plVar16[1];
      lVar13 = *plVar16;
      plVar16[2] = 0;
      plVar16[1] = 0;
      *plVar16 = 0;
      *plVar12 = lVar13;
      plVar12[1] = lVar5;
      plVar12[2] = lVar4;
      plVar2 = plVar12 + 3;
    }
  }
  else {
    for (; plVar16 != param_2; plVar16 = plVar16 + 3) {
      lVar4 = plVar16[2];
      lVar5 = plVar16[1];
      lVar13 = *plVar16;
      plVar16[2] = 0;
      plVar16[1] = 0;
      *plVar16 = 0;
      *plVar2 = lVar13;
      plVar2[1] = lVar5;
      plVar2[2] = lVar4;
      plVar2 = plVar2 + 3;
    }
    FUN_1800c6090(plVar2,plVar2);
    plVar6 = (longlong *)param_1[1];
    if (param_2 != plVar6) {
      plVar16 = param_2 + 1;
      do {
        lVar4 = plVar16[-1];
        lVar5 = plVar16[1];
        lVar13 = *plVar16;
        plVar16[1] = 0;
        *plVar16 = 0;
        plVar16[-1] = 0;
        *plVar12 = lVar4;
        plVar2 = plVar16 + 2;
        plVar12[1] = lVar13;
        plVar12[2] = lVar5;
        plVar12 = plVar12 + 3;
        plVar16 = plVar16 + 3;
      } while (plVar2 != plVar6);
    }
  }
  FUN_1800c6090(plVar12,plVar12);
  if ((longlong *)*param_1 != (longlong *)0x0) {
    FUN_1800c6090((longlong *)*param_1,(longlong *)param_1[1]);
    pvVar7 = (LPVOID)*param_1;
    pvVar15 = pvVar7;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar7) / 0x18) * 0x18)) &&
       (pvVar15 = *(LPVOID *)((longlong)pvVar7 + -8),
       0x1f < (ulonglong)((longlong)pvVar7 + (-8 - (longlong)pvVar15)))) {
LAB_1800cf034:
      FUN_18012b7b4();
      pcVar8 = (code *)swi(3);
      plVar10 = (longlong *)(*pcVar8)();
      return plVar10;
    }
    thunk_FUN_18012d5e8(pvVar15);
  }
  *param_1 = (longlong)plVar10;
  param_1[1] = (longlong)(plVar10 + uVar1 * 3);
  param_1[2] = (longlong)(plVar10 + uVar11 * 3);
  return plVar3;
}

// ---- Function: FUN_1800cf060 ----
void FUN_1800cf060(ulonglong *param_1,ulonglong param_2)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (0x7fffffffffffffff < param_2) {
    FUN_1800aa480();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 == 0) {
    pvVar3 = (void *)0x0;
  }
  else if (param_2 < 0x1000) {
    pvVar3 = operator_new(param_2);
  }
  else {
    if (param_2 + 0x27 <= param_2) {
      FUN_1800ba8a0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar2 = operator_new(param_2 + 0x27);
    if (pvVar2 == (void *)0x0) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar3 - 8) = pvVar2;
  }
  *param_1 = (ulonglong)pvVar3;
  param_1[1] = (ulonglong)pvVar3;
  param_1[2] = (longlong)pvVar3 + param_2;
  return;
}

// ---- Function: _scalar_deleting_destructor_ ----
/* Library Function - Single Match
    protected: virtual void * __ptr64 __cdecl std::ctype<char>::`scalar deleting
   destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall std::ctype<char>::_scalar_deleting_destructor_(ctype<char> *this,uint param_1)

{
  *(int32_t ***)this = vftable;
  if (*(int *)(this + 0x20) < 1) {
    if (*(int *)(this + 0x20) < 0) {
      thunk_FUN_18012d5e8(*(LPVOID *)(this + 0x18));
    }
  }
  else {
    FUN_18012d5e8(*(LPVOID *)(this + 0x18));
  }
  FUN_18012d5e8(*(LPVOID *)(this + 0x28));
  *(int32_t ***)this = _Facet_base::vftable;
  if ((param_1 & 1) != 0) {
    thunk_FUN_18012d5e8(this);
  }
  return this;
}

// ---- Function: FUN_1800cf160 ----
byte * FUN_1800cf160(longlong param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_180124c7c((uint)*param_2,(UINT *)(param_1 + 0x10));
      *param_2 = (byte)uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

// ---- Function: FUN_1800cf1b0 ----
void FUN_1800cf1b0(longlong param_1,byte param_2)

{
  FUN_180124c7c((uint)param_2,(UINT *)(param_1 + 0x10));
  return;
}

// ---- Function: FUN_1800cf1c0 ----
byte * FUN_1800cf1c0(longlong param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_180124db4((uint)*param_2,(UINT *)(param_1 + 0x10));
      *param_2 = (byte)uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}

