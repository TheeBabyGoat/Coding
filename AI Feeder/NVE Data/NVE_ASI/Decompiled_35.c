#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800f3380 ----
longlong FUN_1800f3380(longlong *param_1,int32_t *param_2)

{
  int32_t uVar1;
  char cVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  int32_t uStackX_9;
  longlong local_20;
  
  if (param_1[1] == param_1[2]) {
    local_20 = 0;
    uVar1 = *param_2;
    FUN_1800f9a90(&local_20,'\0');
    pcVar3 = (char *)*param_1;
    cVar2 = *pcVar3;
    *pcVar3 = '\x04';
    local_20 = *(longlong *)(pcVar3 + 8);
    *(ulonglong *)(pcVar3 + 8) = CONCAT71(uStackX_9,uVar1);
    FUN_1800f9a90(&local_20,cVar2);
    lVar5 = *param_1;
  }
  else {
    pcVar3 = *(char **)(param_1[2] + -8);
    if (*pcVar3 == '\x02') {
      plVar4 = *(longlong **)(pcVar3 + 8);
      pcVar3 = (char *)plVar4[1];
      if (pcVar3 == (char *)plVar4[2]) {
        FUN_1800f3190(plVar4,pcVar3,param_2);
      }
      else {
        *pcVar3 = '\0';
        pcVar3[8] = '\0';
        pcVar3[9] = '\0';
        pcVar3[10] = '\0';
        pcVar3[0xb] = '\0';
        pcVar3[0xc] = '\0';
        pcVar3[0xd] = '\0';
        pcVar3[0xe] = '\0';
        pcVar3[0xf] = '\0';
        uVar1 = *param_2;
        FUN_1800f9a90((longlong *)(pcVar3 + 8),*pcVar3);
        *(ulonglong *)(pcVar3 + 8) = CONCAT71(uStackX_9,uVar1);
        *pcVar3 = '\x04';
        plVar4[1] = plVar4[1] + 0x10;
      }
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_20 = 0;
      uVar1 = *param_2;
      FUN_1800f9a90(&local_20,'\0');
      pcVar3 = (char *)param_1[4];
      cVar2 = *pcVar3;
      *pcVar3 = '\x04';
      local_20 = *(longlong *)(pcVar3 + 8);
      *(ulonglong *)(pcVar3 + 8) = CONCAT71(uStackX_9,uVar1);
      FUN_1800f9a90(&local_20,cVar2);
      lVar5 = param_1[4];
    }
  }
  return lVar5;
}

// ---- Function: FUN_1800f34d0 ----
char * FUN_1800f34d0(longlong *param_1,char *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  int32_t uVar3;
  longlong lVar4;
  char *pcVar5;
  code *pcVar6;
  char *pcVar7;
  longlong lVar8;
  void *pvVar9;
  ulonglong uVar10;
  __uint64 _Var11;
  char *pcVar12;
  char *pcVar13;
  ulonglong uVar14;
  
  lVar4 = *param_1;
  lVar8 = param_1[1] - lVar4 >> 4;
  if (lVar8 == 0xfffffffffffffff) {
    FUN_1800aa480();
    pcVar6 = (code *)swi(3);
    pcVar13 = (char *)(*pcVar6)();
    return pcVar13;
  }
  uVar1 = lVar8 + 1;
  uVar10 = param_1[2] - lVar4 >> 4;
  if (uVar10 <= 0xfffffffffffffff - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar14 = uVar1;
    if (uVar1 <= uVar10) {
      uVar14 = uVar10;
    }
    if (uVar14 < 0x1000000000000000) {
      _Var11 = uVar14 * 0x10;
      if (_Var11 == 0) {
        pcVar13 = (char *)0x0;
      }
      else if (_Var11 < 0x1000) {
        pcVar13 = (char *)operator_new(_Var11);
      }
      else {
        if (_Var11 + 0x27 <= _Var11) goto LAB_1800f36c5;
        pvVar9 = operator_new(_Var11 + 0x27);
        if (pvVar9 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar6 = (code *)swi(3);
          pcVar13 = (char *)(*pcVar6)();
          return pcVar13;
        }
        pcVar13 = (char *)((longlong)pvVar9 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pcVar13 + -8) = pvVar9;
      }
      pcVar2 = pcVar13 + ((longlong)param_2 - lVar4 & 0xfffffffffffffff0);
      *pcVar2 = '\0';
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      uVar3 = *param_3;
      FUN_1800f9a90((longlong *)(pcVar2 + 8),*pcVar2);
      *pcVar2 = '\a';
      *(int32_t *)(pcVar2 + 8) = uVar3;
      pcVar5 = (char *)param_1[1];
      pcVar12 = (char *)*param_1;
      pcVar7 = pcVar13;
      if (param_2 == pcVar5) {
        for (; pcVar12 != pcVar5; pcVar12 = pcVar12 + 0x10) {
          *pcVar7 = *pcVar12;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar12 + 8);
          *pcVar12 = '\0';
          pcVar12[8] = '\0';
          pcVar12[9] = '\0';
          pcVar12[10] = '\0';
          pcVar12[0xb] = '\0';
          pcVar12[0xc] = '\0';
          pcVar12[0xd] = '\0';
          pcVar12[0xe] = '\0';
          pcVar12[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
      }
      else {
        for (; pcVar12 != param_2; pcVar12 = pcVar12 + 0x10) {
          *pcVar7 = *pcVar12;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar12 + 8);
          *pcVar12 = '\0';
          pcVar12[8] = '\0';
          pcVar12[9] = '\0';
          pcVar12[10] = '\0';
          pcVar12[0xb] = '\0';
          pcVar12[0xc] = '\0';
          pcVar12[0xd] = '\0';
          pcVar12[0xe] = '\0';
          pcVar12[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
        pcVar5 = (char *)param_1[1];
        pcVar12 = pcVar2;
        if (param_2 != pcVar5) {
          do {
            pcVar12[0x10] = *param_2;
            *(int32_t *)(pcVar12 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = '\0';
            param_2[8] = '\0';
            param_2[9] = '\0';
            param_2[10] = '\0';
            param_2[0xb] = '\0';
            param_2[0xc] = '\0';
            param_2[0xd] = '\0';
            param_2[0xe] = '\0';
            param_2[0xf] = '\0';
            param_2 = param_2 + 0x10;
            pcVar12 = pcVar12 + 0x10;
          } while (param_2 != pcVar5);
        }
      }
      FUN_1800f9750(param_1,(longlong)pcVar13,uVar1,uVar14);
      return pcVar2;
    }
  }
LAB_1800f36c5:
  FUN_1800ba8a0();
  pcVar6 = (code *)swi(3);
  pcVar13 = (char *)(*pcVar6)();
  return pcVar13;
}

// ---- Function: FUN_1800f36e0 ----
longlong FUN_1800f36e0(longlong *param_1,int32_t *param_2)

{
  int32_t uVar1;
  char cVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_20 [3];
  
  if (param_1[1] == param_1[2]) {
    local_20[0] = 0;
    uVar1 = *param_2;
    FUN_1800f9a90(local_20,'\0');
    pcVar3 = (char *)*param_1;
    cVar2 = *pcVar3;
    *pcVar3 = '\a';
    local_20[0] = *(longlong *)(pcVar3 + 8);
    *(int32_t *)(pcVar3 + 8) = uVar1;
    FUN_1800f9a90(local_20,cVar2);
    lVar5 = *param_1;
  }
  else {
    pcVar3 = *(char **)(param_1[2] + -8);
    if (*pcVar3 == '\x02') {
      plVar4 = *(longlong **)(pcVar3 + 8);
      pcVar3 = (char *)plVar4[1];
      if (pcVar3 == (char *)plVar4[2]) {
        FUN_1800f34d0(plVar4,pcVar3,param_2);
      }
      else {
        *pcVar3 = '\0';
        pcVar3[8] = '\0';
        pcVar3[9] = '\0';
        pcVar3[10] = '\0';
        pcVar3[0xb] = '\0';
        pcVar3[0xc] = '\0';
        pcVar3[0xd] = '\0';
        pcVar3[0xe] = '\0';
        pcVar3[0xf] = '\0';
        uVar1 = *param_2;
        FUN_1800f9a90((longlong *)(pcVar3 + 8),*pcVar3);
        *(int32_t *)(pcVar3 + 8) = uVar1;
        *pcVar3 = '\a';
        plVar4[1] = plVar4[1] + 0x10;
      }
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_20[0] = 0;
      uVar1 = *param_2;
      FUN_1800f9a90(local_20,'\0');
      pcVar3 = (char *)param_1[4];
      cVar2 = *pcVar3;
      *pcVar3 = '\a';
      local_20[0] = *(longlong *)(pcVar3 + 8);
      *(int32_t *)(pcVar3 + 8) = uVar1;
      FUN_1800f9a90(local_20,cVar2);
      lVar5 = param_1[4];
    }
  }
  return lVar5;
}

// ---- Function: FUN_1800f3820 ----
char * FUN_1800f3820(longlong *param_1,char *param_2,char *param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  code *pcVar6;
  char *pcVar7;
  longlong lVar8;
  void *pvVar9;
  char *pcVar10;
  ulonglong uVar11;
  __uint64 _Var12;
  ulonglong uVar13;
  char *pcVar14;
  
  lVar4 = *param_1;
  lVar8 = param_1[1] - lVar4 >> 4;
  if (lVar8 == 0xfffffffffffffff) {
    FUN_1800aa480();
    pcVar6 = (code *)swi(3);
    pcVar14 = (char *)(*pcVar6)();
    return pcVar14;
  }
  uVar1 = lVar8 + 1;
  uVar11 = param_1[2] - lVar4 >> 4;
  if (uVar11 <= 0xfffffffffffffff - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar13 = uVar1;
    if (uVar1 <= uVar11) {
      uVar13 = uVar11;
    }
    if (uVar13 < 0x1000000000000000) {
      _Var12 = uVar13 * 0x10;
      if (_Var12 == 0) {
        pcVar14 = (char *)0x0;
      }
      else if (_Var12 < 0x1000) {
        pcVar14 = (char *)operator_new(_Var12);
      }
      else {
        if (_Var12 + 0x27 <= _Var12) goto LAB_1800f3a0a;
        pvVar9 = operator_new(_Var12 + 0x27);
        if (pvVar9 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar6 = (code *)swi(3);
          pcVar14 = (char *)(*pcVar6)();
          return pcVar14;
        }
        pcVar14 = (char *)((longlong)pvVar9 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pcVar14 + -8) = pvVar9;
      }
      pcVar2 = pcVar14 + ((longlong)param_2 - lVar4 & 0xfffffffffffffff0);
      cVar3 = *param_3;
      *pcVar2 = cVar3;
      FUN_1800f8a10((int32_t *)(pcVar2 + 8),cVar3);
      pcVar5 = (char *)param_1[1];
      pcVar10 = (char *)*param_1;
      pcVar7 = pcVar14;
      if (param_2 == pcVar5) {
        for (; pcVar10 != pcVar5; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
      }
      else {
        for (; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
        pcVar5 = (char *)param_1[1];
        pcVar10 = pcVar2;
        if (param_2 != pcVar5) {
          do {
            pcVar10[0x10] = *param_2;
            *(int32_t *)(pcVar10 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = '\0';
            param_2[8] = '\0';
            param_2[9] = '\0';
            param_2[10] = '\0';
            param_2[0xb] = '\0';
            param_2[0xc] = '\0';
            param_2[0xd] = '\0';
            param_2[0xe] = '\0';
            param_2[0xf] = '\0';
            param_2 = param_2 + 0x10;
            pcVar10 = pcVar10 + 0x10;
          } while (param_2 != pcVar5);
        }
      }
      FUN_1800f9750(param_1,(longlong)pcVar14,uVar1,uVar13);
      return pcVar2;
    }
  }
LAB_1800f3a0a:
  FUN_1800ba8a0();
  pcVar6 = (code *)swi(3);
  pcVar14 = (char *)(*pcVar6)();
  return pcVar14;
}

// ---- Function: FUN_1800f3a20 ----
longlong FUN_1800f3a20(longlong *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_10;
  
  if (param_1[1] == param_1[2]) {
    cVar1 = *param_2;
    FUN_1800f8a10(&local_10,cVar1);
    pcVar3 = (char *)*param_1;
    cVar2 = *pcVar3;
    *pcVar3 = cVar1;
    lVar4 = *(longlong *)(pcVar3 + 8);
    *(longlong *)(pcVar3 + 8) = local_10;
    local_10 = lVar4;
    FUN_1800f9a90(&local_10,cVar2);
    return *param_1;
  }
  pcVar3 = *(char **)(param_1[2] + -8);
  if (*pcVar3 == '\x02') {
    plVar5 = *(longlong **)(pcVar3 + 8);
    pcVar3 = (char *)plVar5[1];
    if (pcVar3 == (char *)plVar5[2]) {
      FUN_1800f3820(plVar5,pcVar3,param_2);
    }
    else {
      cVar1 = *param_2;
      *pcVar3 = cVar1;
      FUN_1800f8a10((int32_t *)(pcVar3 + 8),cVar1);
      plVar5[1] = plVar5[1] + 0x10;
    }
    return *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
  }
  cVar1 = *param_2;
  FUN_1800f8a10(&local_10,cVar1);
  pcVar3 = (char *)param_1[4];
  cVar2 = *pcVar3;
  *pcVar3 = cVar1;
  lVar4 = *(longlong *)(pcVar3 + 8);
  *(longlong *)(pcVar3 + 8) = local_10;
  local_10 = lVar4;
  FUN_1800f9a90(&local_10,cVar2);
  return param_1[4];
}

// ---- Function: FUN_1800f3b30 ----
int32_t *
FUN_1800f3b30(int32_t *param_1,int32_t *param_2,longlong *param_3,int32_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  int32_t *puVar11;
  int32_t local_res8 [2];
  int32_t local_res20 [8];
  char local_38 [8];
  longlong local_30;
  char local_28;
  longlong local_20;
  
  uVar4 = param_1[7];
  if (((longlong)uVar4 < 0) && (uVar4 != 0)) {
    lVar5 = -((~uVar4 >> 5) * 4 + 4);
  }
  else {
    lVar5 = (uVar4 >> 5) * 4;
  }
  uVar1 = (uVar4 & 0x1f) - 1;
  if ((uVar4 & 0x1f) == 0) {
    lVar2 = -((~uVar1 >> 5) * 4 + 4);
  }
  else {
    lVar2 = (uVar1 >> 5) * 4;
  }
  if ((*(uint *)(param_1[4] + lVar5 + lVar2) >> ((byte)uVar1 & 0x1f) & 1) == 0) {
    *param_2 = 0;
    *(int32_t *)(param_2 + 8) = 0;
  }
  else {
    local_38[0] = '\0';
    local_30 = 0;
    lVar5 = *param_3;
    local_res20[0] = param_4;
    FUN_1800f9a90(&local_30,'\0');
    local_38[0] = '\x06';
    local_res20[0] = 5;
    local_res8[0] = (int32_t)((longlong)(param_1[2] - param_1[1]) >> 3);
    plVar6 = (longlong *)param_1[0x15];
    local_30 = lVar5;
    if (plVar6 == (longlong *)0x0) {
      FUN_180123318();
      pcVar8 = (code *)swi(3);
      puVar11 = (int32_t *)(*pcVar8)();
      return puVar11;
    }
    cVar10 = (**(code **)(*plVar6 + 0x10))(plVar6,local_res8,local_res20,local_38);
    lVar5 = local_30;
    cVar9 = local_38[0];
    if (cVar10 == '\0') {
      *param_2 = 0;
      *(int32_t *)(param_2 + 8) = 0;
      FUN_1800f9a90(&local_30,local_38[0]);
    }
    else if (param_1[1] == param_1[2]) {
      local_38[0] = '\0';
      local_30 = 0;
      pcVar7 = (char *)*param_1;
      local_28 = *pcVar7;
      *pcVar7 = cVar9;
      local_20 = *(longlong *)(pcVar7 + 8);
      *(longlong *)(pcVar7 + 8) = lVar5;
      FUN_1800f9a90(&local_20,local_28);
      *param_2 = 1;
      *(int32_t *)(param_2 + 8) = *param_1;
      FUN_1800f9a90(&local_30,local_38[0]);
    }
    else {
      pcVar7 = *(char **)(param_1[2] + -8);
      if (pcVar7 == (char *)0x0) {
        *param_2 = 0;
        *(int32_t *)(param_2 + 8) = 0;
        FUN_1800f9a90(&local_30,local_38[0]);
      }
      else if (*pcVar7 == '\x02') {
        plVar6 = *(longlong **)(pcVar7 + 8);
        pcVar7 = (char *)plVar6[1];
        if (pcVar7 == (char *)plVar6[2]) {
          FUN_1800f9810(plVar6,pcVar7,local_38);
        }
        else {
          *pcVar7 = local_38[0];
          *(longlong *)(pcVar7 + 8) = local_30;
          local_38[0] = '\0';
          local_30 = 0;
          plVar6[1] = plVar6[1] + 0x10;
        }
        *param_2 = 1;
        *(longlong *)(param_2 + 8) =
             *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
        FUN_1800f9a90(&local_30,local_38[0]);
      }
      else {
        uVar4 = param_1[0xb];
        if (((longlong)uVar4 < 0) && (uVar4 != 0)) {
          lVar5 = -((~uVar4 >> 5) * 4 + 4);
        }
        else {
          lVar5 = (uVar4 >> 5) * 4;
        }
        uVar1 = (uVar4 & 0x1f) - 1;
        if ((uVar4 & 0x1f) == 0) {
          lVar2 = -((~uVar1 >> 5) * 4 + 4);
        }
        else {
          lVar2 = (uVar1 >> 5) * 4;
        }
        uVar3 = *(uint *)(param_1[8] + lVar5 + lVar2);
        FUN_1800f6c50(param_1 + 8);
        lVar5 = local_30;
        cVar9 = local_38[0];
        if ((1 << ((byte)uVar1 & 0x1f) & uVar3) == 0) {
          *param_2 = 0;
          *(int32_t *)(param_2 + 8) = 0;
          FUN_1800f9a90(&local_30,local_38[0]);
        }
        else {
          local_38[0] = '\0';
          local_30 = 0;
          pcVar7 = (char *)param_1[0xc];
          local_28 = *pcVar7;
          *pcVar7 = cVar9;
          local_20 = *(longlong *)(pcVar7 + 8);
          *(longlong *)(pcVar7 + 8) = lVar5;
          FUN_1800f9a90(&local_20,local_28);
          *param_2 = 1;
          *(int32_t *)(param_2 + 8) = param_1[0xc];
          FUN_1800f9a90(&local_30,local_38[0]);
        }
      }
    }
  }
  return param_2;
}

// ---- Function: FUN_1800f3e40 ----
int32_t *
FUN_1800f3e40(int32_t *param_1,int32_t *param_2,int32_t *param_3,int32_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  char *pcVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  int32_t *puVar11;
  int32_t *puVar12;
  int32_t local_res8 [2];
  int32_t local_res20 [8];
  char local_48 [8];
  int32_t *local_40;
  int32_t *local_38;
  int32_t *local_30;
  
  uVar5 = param_1[7];
  if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
    lVar2 = -((~uVar5 >> 5) * 4 + 4);
  }
  else {
    lVar2 = (uVar5 >> 5) * 4;
  }
  uVar1 = (uVar5 & 0x1f) - 1;
  if ((uVar5 & 0x1f) == 0) {
    lVar3 = -((~uVar1 >> 5) * 4 + 4);
  }
  else {
    lVar3 = (uVar1 >> 5) * 4;
  }
  if ((*(uint *)(param_1[4] + lVar2 + lVar3) >> ((byte)uVar1 & 0x1f) & 1) == 0) {
    *param_2 = 0;
    *(int32_t *)(param_2 + 8) = 0;
  }
  else {
    local_48[0] = '\0';
    local_40 = (int32_t *)0x0;
    local_res20[0] = param_4;
    FUN_1800f9a90((longlong *)&local_40,'\0');
    local_48[0] = '\x03';
    puVar11 = (int32_t *)operator_new(0x20);
    local_38 = local_res20;
    local_30 = puVar11;
    FUN_1800ba630(puVar11,param_3);
    local_res20[0] = 5;
    local_res8[0] = (int32_t)((longlong)(param_1[2] - param_1[1]) >> 3);
    plVar6 = (longlong *)param_1[0x15];
    local_40 = puVar11;
    if (plVar6 == (longlong *)0x0) {
      FUN_180123318();
      pcVar8 = (code *)swi(3);
      puVar12 = (int32_t *)(*pcVar8)();
      return puVar12;
    }
    cVar10 = (**(code **)(*plVar6 + 0x10))(plVar6,local_res8,local_res20,local_48);
    puVar11 = local_40;
    cVar9 = local_48[0];
    if (cVar10 == '\0') {
      *param_2 = 0;
      *(int32_t *)(param_2 + 8) = 0;
      FUN_1800f9a90((longlong *)&local_40,local_48[0]);
    }
    else if (param_1[1] == param_1[2]) {
      local_48[0] = '\0';
      local_40 = (int32_t *)0x0;
      pcVar7 = (char *)*param_1;
      cVar10 = *pcVar7;
      *pcVar7 = cVar9;
      local_38 = (int32_t *)CONCAT71(local_38._1_7_,cVar10);
      local_30 = *(int32_t **)(pcVar7 + 8);
      *(int32_t **)(pcVar7 + 8) = puVar11;
      FUN_1800f9a90((longlong *)&local_30,cVar10);
      *param_2 = 1;
      *(int32_t *)(param_2 + 8) = *param_1;
      FUN_1800f9a90((longlong *)&local_40,local_48[0]);
    }
    else {
      pcVar7 = *(char **)(param_1[2] + -8);
      if (pcVar7 == (char *)0x0) {
        *param_2 = 0;
        *(int32_t *)(param_2 + 8) = 0;
        FUN_1800f9a90((longlong *)&local_40,local_48[0]);
      }
      else if (*pcVar7 == '\x02') {
        plVar6 = *(longlong **)(pcVar7 + 8);
        pcVar7 = (char *)plVar6[1];
        if (pcVar7 == (char *)plVar6[2]) {
          FUN_1800f9810(plVar6,pcVar7,local_48);
        }
        else {
          *pcVar7 = local_48[0];
          *(int32_t **)(pcVar7 + 8) = local_40;
          local_48[0] = '\0';
          local_40 = (int32_t *)0x0;
          plVar6[1] = plVar6[1] + 0x10;
        }
        *param_2 = 1;
        *(longlong *)(param_2 + 8) =
             *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
        FUN_1800f9a90((longlong *)&local_40,local_48[0]);
      }
      else {
        uVar5 = param_1[0xb];
        if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
          lVar2 = -((~uVar5 >> 5) * 4 + 4);
        }
        else {
          lVar2 = (uVar5 >> 5) * 4;
        }
        uVar1 = (uVar5 & 0x1f) - 1;
        if ((uVar5 & 0x1f) == 0) {
          lVar3 = -((~uVar1 >> 5) * 4 + 4);
        }
        else {
          lVar3 = (uVar1 >> 5) * 4;
        }
        uVar4 = *(uint *)(param_1[8] + lVar2 + lVar3);
        FUN_1800f6c50(param_1 + 8);
        puVar11 = local_40;
        cVar9 = local_48[0];
        if ((1 << ((byte)uVar1 & 0x1f) & uVar4) == 0) {
          *param_2 = 0;
          *(int32_t *)(param_2 + 8) = 0;
          FUN_1800f9a90((longlong *)&local_40,local_48[0]);
        }
        else {
          local_48[0] = '\0';
          local_40 = (int32_t *)0x0;
          pcVar7 = (char *)param_1[0xc];
          cVar10 = *pcVar7;
          *pcVar7 = cVar9;
          local_38 = (int32_t *)CONCAT71(local_38._1_7_,cVar10);
          local_30 = *(int32_t **)(pcVar7 + 8);
          *(int32_t **)(pcVar7 + 8) = puVar11;
          FUN_1800f9a90((longlong *)&local_30,cVar10);
          *param_2 = 1;
          *(int32_t *)(param_2 + 8) = param_1[0xc];
          FUN_1800f9a90((longlong *)&local_40,local_48[0]);
        }
      }
    }
  }
  return param_2;
}

// ---- Function: FUN_1800f4170 ----
int32_t *
FUN_1800f4170(int32_t *param_1,int32_t *param_2,longlong *param_3,int32_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  char *pcVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  int32_t *puVar11;
  int32_t local_res8 [2];
  int32_t local_res20 [8];
  char local_38 [8];
  longlong local_30;
  char local_28;
  longlong local_20;
  
  uVar4 = param_1[7];
  if (((longlong)uVar4 < 0) && (uVar4 != 0)) {
    lVar5 = -((~uVar4 >> 5) * 4 + 4);
  }
  else {
    lVar5 = (uVar4 >> 5) * 4;
  }
  uVar1 = (uVar4 & 0x1f) - 1;
  if ((uVar4 & 0x1f) == 0) {
    lVar2 = -((~uVar1 >> 5) * 4 + 4);
  }
  else {
    lVar2 = (uVar1 >> 5) * 4;
  }
  if ((*(uint *)(param_1[4] + lVar5 + lVar2) >> ((byte)uVar1 & 0x1f) & 1) == 0) {
    *param_2 = 0;
    *(int32_t *)(param_2 + 8) = 0;
  }
  else {
    local_38[0] = '\0';
    local_30 = 0;
    lVar5 = *param_3;
    local_res20[0] = param_4;
    FUN_1800f9a90(&local_30,'\0');
    local_38[0] = '\x05';
    local_res20[0] = 5;
    local_res8[0] = (int32_t)((longlong)(param_1[2] - param_1[1]) >> 3);
    plVar6 = (longlong *)param_1[0x15];
    local_30 = lVar5;
    if (plVar6 == (longlong *)0x0) {
      FUN_180123318();
      pcVar8 = (code *)swi(3);
      puVar11 = (int32_t *)(*pcVar8)();
      return puVar11;
    }
    cVar10 = (**(code **)(*plVar6 + 0x10))(plVar6,local_res8,local_res20,local_38);
    lVar5 = local_30;
    cVar9 = local_38[0];
    if (cVar10 == '\0') {
      *param_2 = 0;
      *(int32_t *)(param_2 + 8) = 0;
      FUN_1800f9a90(&local_30,local_38[0]);
    }
    else if (param_1[1] == param_1[2]) {
      local_38[0] = '\0';
      local_30 = 0;
      pcVar7 = (char *)*param_1;
      local_28 = *pcVar7;
      *pcVar7 = cVar9;
      local_20 = *(longlong *)(pcVar7 + 8);
      *(longlong *)(pcVar7 + 8) = lVar5;
      FUN_1800f9a90(&local_20,local_28);
      *param_2 = 1;
      *(int32_t *)(param_2 + 8) = *param_1;
      FUN_1800f9a90(&local_30,local_38[0]);
    }
    else {
      pcVar7 = *(char **)(param_1[2] + -8);
      if (pcVar7 == (char *)0x0) {
        *param_2 = 0;
        *(int32_t *)(param_2 + 8) = 0;
        FUN_1800f9a90(&local_30,local_38[0]);
      }
      else if (*pcVar7 == '\x02') {
        plVar6 = *(longlong **)(pcVar7 + 8);
        pcVar7 = (char *)plVar6[1];
        if (pcVar7 == (char *)plVar6[2]) {
          FUN_1800f9810(plVar6,pcVar7,local_38);
        }
        else {
          *pcVar7 = local_38[0];
          *(longlong *)(pcVar7 + 8) = local_30;
          local_38[0] = '\0';
          local_30 = 0;
          plVar6[1] = plVar6[1] + 0x10;
        }
        *param_2 = 1;
        *(longlong *)(param_2 + 8) =
             *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
        FUN_1800f9a90(&local_30,local_38[0]);
      }
      else {
        uVar4 = param_1[0xb];
        if (((longlong)uVar4 < 0) && (uVar4 != 0)) {
          lVar5 = -((~uVar4 >> 5) * 4 + 4);
        }
        else {
          lVar5 = (uVar4 >> 5) * 4;
        }
        uVar1 = (uVar4 & 0x1f) - 1;
        if ((uVar4 & 0x1f) == 0) {
          lVar2 = -((~uVar1 >> 5) * 4 + 4);
        }
        else {
          lVar2 = (uVar1 >> 5) * 4;
        }
        uVar3 = *(uint *)(param_1[8] + lVar5 + lVar2);
        FUN_1800f6c50(param_1 + 8);
        lVar5 = local_30;
        cVar9 = local_38[0];
        if ((1 << ((byte)uVar1 & 0x1f) & uVar3) == 0) {
          *param_2 = 0;
          *(int32_t *)(param_2 + 8) = 0;
          FUN_1800f9a90(&local_30,local_38[0]);
        }
        else {
          local_38[0] = '\0';
          local_30 = 0;
          pcVar7 = (char *)param_1[0xc];
          local_28 = *pcVar7;
          *pcVar7 = cVar9;
          local_20 = *(longlong *)(pcVar7 + 8);
          *(longlong *)(pcVar7 + 8) = lVar5;
          FUN_1800f9a90(&local_20,local_28);
          *param_2 = 1;
          *(int32_t *)(param_2 + 8) = param_1[0xc];
          FUN_1800f9a90(&local_30,local_38[0]);
        }
      }
    }
  }
  return param_2;
}

// ---- Function: FUN_1800f4480 ----
int32_t *
FUN_1800f4480(int32_t *param_1,int32_t *param_2,int32_t param_3,int32_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  char *pcVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  int32_t *puVar11;
  int32_t local_res18;
  int32_t local_res20 [8];
  char local_38 [8];
  longlong local_30;
  char local_28;
  longlong local_20;
  
  uVar5 = param_1[7];
  if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
    lVar2 = -((~uVar5 >> 5) * 4 + 4);
  }
  else {
    lVar2 = (uVar5 >> 5) * 4;
  }
  uVar1 = (uVar5 & 0x1f) - 1;
  if ((uVar5 & 0x1f) == 0) {
    lVar3 = -((~uVar1 >> 5) * 4 + 4);
  }
  else {
    lVar3 = (uVar1 >> 5) * 4;
  }
  if ((*(uint *)(param_1[4] + lVar2 + lVar3) >> ((byte)uVar1 & 0x1f) & 1) == 0) {
    *param_2 = 0;
    *(int32_t *)(param_2 + 8) = 0;
    return param_2;
  }
  local_38[0] = '\0';
  local_res18 = param_3;
  local_res20[0] = param_4;
  FUN_1800f8a10(&local_30,'\0');
  local_res20[0] = 5;
  local_res18 = CONCAT44(local_res18._4_4_,(int)((longlong)(param_1[2] - param_1[1]) >> 3));
  plVar6 = (longlong *)param_1[0x15];
  if (plVar6 == (longlong *)0x0) {
    FUN_180123318();
    pcVar8 = (code *)swi(3);
    puVar11 = (int32_t *)(*pcVar8)();
    return puVar11;
  }
  cVar10 = (**(code **)(*plVar6 + 0x10))(plVar6,&local_res18,local_res20,local_38);
  lVar2 = local_30;
  cVar9 = local_38[0];
  if (cVar10 == '\0') {
    *param_2 = 0;
    *(int32_t *)(param_2 + 8) = 0;
    FUN_1800f9a90(&local_30,local_38[0]);
    return param_2;
  }
  if (param_1[1] == param_1[2]) {
    local_38[0] = '\0';
    local_30 = 0;
    pcVar7 = (char *)*param_1;
    local_28 = *pcVar7;
    *pcVar7 = cVar9;
    local_20 = *(longlong *)(pcVar7 + 8);
    *(longlong *)(pcVar7 + 8) = lVar2;
    FUN_1800f9a90(&local_20,local_28);
    *param_2 = 1;
    *(int32_t *)(param_2 + 8) = *param_1;
    FUN_1800f9a90(&local_30,local_38[0]);
    return param_2;
  }
  pcVar7 = *(char **)(param_1[2] + -8);
  if (pcVar7 == (char *)0x0) {
    *param_2 = 0;
    *(int32_t *)(param_2 + 8) = 0;
    FUN_1800f9a90(&local_30,local_38[0]);
    return param_2;
  }
  if (*pcVar7 == '\x02') {
    plVar6 = *(longlong **)(pcVar7 + 8);
    pcVar7 = (char *)plVar6[1];
    if (pcVar7 == (char *)plVar6[2]) {
      FUN_1800f9810(plVar6,pcVar7,local_38);
    }
    else {
      *pcVar7 = local_38[0];
      *(longlong *)(pcVar7 + 8) = local_30;
      local_38[0] = '\0';
      local_30 = 0;
      plVar6[1] = plVar6[1] + 0x10;
    }
    *param_2 = 1;
    *(longlong *)(param_2 + 8) =
         *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    FUN_1800f9a90(&local_30,local_38[0]);
    return param_2;
  }
  uVar5 = param_1[0xb];
  if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
    lVar2 = -((~uVar5 >> 5) * 4 + 4);
  }
  else {
    lVar2 = (uVar5 >> 5) * 4;
  }
  uVar1 = (uVar5 & 0x1f) - 1;
  if ((uVar5 & 0x1f) == 0) {
    lVar3 = -((~uVar1 >> 5) * 4 + 4);
  }
  else {
    lVar3 = (uVar1 >> 5) * 4;
  }
  uVar4 = *(uint *)(param_1[8] + lVar2 + lVar3);
  FUN_1800f6c50(param_1 + 8);
  lVar2 = local_30;
  cVar9 = local_38[0];
  if ((1 << ((byte)uVar1 & 0x1f) & uVar4) == 0) {
    *param_2 = 0;
    *(int32_t *)(param_2 + 8) = 0;
    FUN_1800f9a90(&local_30,local_38[0]);
    return param_2;
  }
  local_38[0] = '\0';
  local_30 = 0;
  pcVar7 = (char *)param_1[0xc];
  local_28 = *pcVar7;
  *pcVar7 = cVar9;
  local_20 = *(longlong *)(pcVar7 + 8);
  *(longlong *)(pcVar7 + 8) = lVar2;
  FUN_1800f9a90(&local_20,local_28);
  *param_2 = 1;
  *(int32_t *)(param_2 + 8) = param_1[0xc];
  FUN_1800f9a90(&local_30,local_38[0]);
  return param_2;
}

// ---- Function: FUN_1800f47c0 ----
int32_t * FUN_1800f47c0(int32_t *param_1,int32_t *param_2,byte *param_3,char param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong *plVar8;
  code *pcVar9;
  char cVar10;
  char cVar11;
  int32_t *puVar12;
  longlong *plVar13;
  int32_t local_res8;
  int32_t uStackX_c;
  char local_res20 [8];
  char acStack_a0 [8];
  longlong lStack_98;
  char cStack_90;
  longlong alStack_88 [3];
  int32_t *puStack_70;
  int32_t *puStack_68;
  int32_t *puStack_60;
  int32_t auStack_50 [2];
  ulonglong uStack_48;
  char local_38 [8];
  longlong local_30;
  char local_28;
  longlong local_20;
  
  uVar6 = param_1[7];
  if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
    lVar2 = -((~uVar6 >> 5) * 4 + 4);
  }
  else {
    lVar2 = (uVar6 >> 5) * 4;
  }
  uVar1 = (uVar6 & 0x1f) - 1;
  if ((uVar6 & 0x1f) == 0) {
    lVar3 = -((~uVar1 >> 5) * 4 + 4);
  }
  else {
    lVar3 = (uVar1 >> 5) * 4;
  }
  if ((*(uint *)(param_1[4] + lVar2 + lVar3) >> ((byte)uVar1 & 0x1f) & 1) == 0) {
    *param_2 = 0;
    *(int32_t *)(param_2 + 8) = 0;
  }
  else {
    local_38[0] = '\0';
    local_30 = 0;
    bVar4 = *param_3;
    puVar12 = (int32_t *)0x0;
    puStack_60 = (int32_t *)0x1800f4884;
    local_res20[0] = param_4;
    FUN_1800f9a90(&local_30,'\0');
    local_38[0] = '\x04';
    local_res8 = CONCAT31(local_res8._1_3_,bVar4);
    local_30 = CONCAT44(uStackX_c,local_res8);
    local_res20[0] = '\x05';
    local_res8 = (int32_t)((longlong)(param_1[2] - param_1[1]) >> 3);
    plVar13 = (longlong *)param_1[0x15];
    if (plVar13 == (longlong *)0x0) {
      puStack_60 = (int32_t *)0x1800f4acf;
      FUN_180123318();
      uVar6 = plVar13[7];
      if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
        lVar2 = -((~uVar6 >> 5) * 4 + 4);
      }
      else {
        lVar2 = (uVar6 >> 5) * 4;
      }
      uVar1 = (uVar6 & 0x1f) - 1;
      if ((uVar6 & 0x1f) == 0) {
        lVar3 = -((~uVar1 >> 5) * 4 + 4);
      }
      else {
        lVar3 = (uVar1 >> 5) * 4;
      }
      if ((*(uint *)(plVar13[4] + lVar2 + lVar3) >> ((byte)uVar1 & 0x1f) & 1) == 0) {
        *puVar12 = 0;
        *(int32_t *)(puVar12 + 8) = 0;
      }
      else {
        acStack_a0[0] = '\0';
        lStack_98 = 0;
        lVar2 = *(longlong *)param_3;
        puStack_70 = param_2;
        puStack_68 = param_1;
        puStack_60 = &stack0xffffffffffffffe8;
        uStack_48 = (ulonglong)bVar4;
        local_38[0] = param_4;
        FUN_1800f9a90(&lStack_98,'\0');
        acStack_a0[0] = '\a';
        local_38[0] = '\x05';
        auStack_50[0] = (int32_t)(plVar13[2] - plVar13[1] >> 3);
        plVar8 = (longlong *)plVar13[0x15];
        lStack_98 = lVar2;
        if (plVar8 == (longlong *)0x0) {
          FUN_180123318();
          pcVar9 = (code *)swi(3);
          puVar12 = (int32_t *)(*pcVar9)();
          return puVar12;
        }
        cVar11 = (**(code **)(*plVar8 + 0x10))(plVar8,auStack_50,local_38,acStack_a0);
        lVar2 = lStack_98;
        cVar10 = acStack_a0[0];
        if (cVar11 == '\0') {
          *puVar12 = 0;
          *(int32_t *)(puVar12 + 8) = 0;
          FUN_1800f9a90(&lStack_98,acStack_a0[0]);
        }
        else if (plVar13[1] == plVar13[2]) {
          acStack_a0[0] = '\0';
          lStack_98 = 0;
          pcVar7 = (char *)*plVar13;
          cStack_90 = *pcVar7;
          *pcVar7 = cVar10;
          alStack_88[0] = *(longlong *)(pcVar7 + 8);
          *(longlong *)(pcVar7 + 8) = lVar2;
          FUN_1800f9a90(alStack_88,cStack_90);
          *puVar12 = 1;
          *(longlong *)(puVar12 + 8) = *plVar13;
          FUN_1800f9a90(&lStack_98,acStack_a0[0]);
        }
        else {
          pcVar7 = *(char **)(plVar13[2] + -8);
          if (pcVar7 == (char *)0x0) {
            *puVar12 = 0;
            *(int32_t *)(puVar12 + 8) = 0;
            FUN_1800f9a90(&lStack_98,acStack_a0[0]);
          }
          else if (*pcVar7 == '\x02') {
            plVar8 = *(longlong **)(pcVar7 + 8);
            pcVar7 = (char *)plVar8[1];
            if (pcVar7 == (char *)plVar8[2]) {
              FUN_1800f9810(plVar8,pcVar7,acStack_a0);
            }
            else {
              *pcVar7 = acStack_a0[0];
              *(longlong *)(pcVar7 + 8) = lStack_98;
              acStack_a0[0] = '\0';
              lStack_98 = 0;
              plVar8[1] = plVar8[1] + 0x10;
            }
            *puVar12 = 1;
            *(longlong *)(puVar12 + 8) =
                 *(longlong *)(*(longlong *)(*(longlong *)(plVar13[2] + -8) + 8) + 8) + -0x10;
            FUN_1800f9a90(&lStack_98,acStack_a0[0]);
          }
          else {
            uVar6 = plVar13[0xb];
            if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
              lVar2 = -((~uVar6 >> 5) * 4 + 4);
            }
            else {
              lVar2 = (uVar6 >> 5) * 4;
            }
            uVar1 = (uVar6 & 0x1f) - 1;
            if ((uVar6 & 0x1f) == 0) {
              lVar3 = -((~uVar1 >> 5) * 4 + 4);
            }
            else {
              lVar3 = (uVar1 >> 5) * 4;
            }
            uVar5 = *(uint *)(plVar13[8] + lVar2 + lVar3);
            FUN_1800f6c50(plVar13 + 8);
            lVar2 = lStack_98;
            cVar10 = acStack_a0[0];
            if ((1 << ((byte)uVar1 & 0x1f) & uVar5) == 0) {
              *puVar12 = 0;
              *(int32_t *)(puVar12 + 8) = 0;
              FUN_1800f9a90(&lStack_98,acStack_a0[0]);
            }
            else {
              acStack_a0[0] = '\0';
              lStack_98 = 0;
              pcVar7 = (char *)plVar13[0xc];
              cStack_90 = *pcVar7;
              *pcVar7 = cVar10;
              alStack_88[0] = *(longlong *)(pcVar7 + 8);
              *(longlong *)(pcVar7 + 8) = lVar2;
              FUN_1800f9a90(alStack_88,cStack_90);
              *puVar12 = 1;
              *(longlong *)(puVar12 + 8) = plVar13[0xc];
              FUN_1800f9a90(&lStack_98,acStack_a0[0]);
            }
          }
        }
      }
      return puVar12;
    }
    puStack_60 = (int32_t *)0x1800f48c8;
    cVar11 = (**(code **)(*plVar13 + 0x10))(plVar13,&local_res8,local_res20,local_38);
    lVar2 = local_30;
    cVar10 = local_38[0];
    if (cVar11 == '\0') {
      *param_2 = 0;
      *(int32_t *)(param_2 + 8) = 0;
      puStack_60 = (int32_t *)0x1800f48e3;
      FUN_1800f9a90(&local_30,local_38[0]);
    }
    else if (param_1[1] == param_1[2]) {
      local_38[0] = '\0';
      local_30 = 0;
      pcVar7 = (char *)*param_1;
      local_28 = *pcVar7;
      *pcVar7 = cVar10;
      local_20 = *(longlong *)(pcVar7 + 8);
      *(longlong *)(pcVar7 + 8) = lVar2;
      puStack_60 = (int32_t *)0x1800f4927;
      FUN_1800f9a90(&local_20,local_28);
      *param_2 = 1;
      *(int32_t *)(param_2 + 8) = *param_1;
      puStack_60 = (int32_t *)0x1800f493f;
      FUN_1800f9a90(&local_30,local_38[0]);
    }
    else {
      pcVar7 = *(char **)(param_1[2] + -8);
      if (pcVar7 == (char *)0x0) {
        *param_2 = 0;
        *(int32_t *)(param_2 + 8) = 0;
        puStack_60 = (int32_t *)0x1800f4961;
        FUN_1800f9a90(&local_30,local_38[0]);
      }
      else if (*pcVar7 == '\x02') {
        plVar13 = *(longlong **)(pcVar7 + 8);
        pcVar7 = (char *)plVar13[1];
        if (pcVar7 == (char *)plVar13[2]) {
          puStack_60 = (int32_t *)0x1800f49a4;
          FUN_1800f9810(plVar13,pcVar7,local_38);
        }
        else {
          *pcVar7 = local_38[0];
          *(longlong *)(pcVar7 + 8) = local_30;
          local_38[0] = '\0';
          local_30 = 0;
          plVar13[1] = plVar13[1] + 0x10;
        }
        *param_2 = 1;
        *(longlong *)(param_2 + 8) =
             *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
        puStack_60 = (int32_t *)0x1800f49cc;
        FUN_1800f9a90(&local_30,local_38[0]);
      }
      else {
        uVar6 = param_1[0xb];
        if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
          lVar2 = -((~uVar6 >> 5) * 4 + 4);
        }
        else {
          lVar2 = (uVar6 >> 5) * 4;
        }
        uVar1 = (uVar6 & 0x1f) - 1;
        if ((uVar6 & 0x1f) == 0) {
          lVar3 = -((~uVar1 >> 5) * 4 + 4);
        }
        else {
          lVar3 = (uVar1 >> 5) * 4;
        }
        uVar5 = *(uint *)(param_1[8] + lVar2 + lVar3);
        puStack_60 = (int32_t *)0x1800f4a47;
        FUN_1800f6c50(param_1 + 8);
        lVar2 = local_30;
        cVar10 = local_38[0];
        if ((1 << ((byte)uVar1 & 0x1f) & uVar5) == 0) {
          *param_2 = 0;
          *(int32_t *)(param_2 + 8) = 0;
          puStack_60 = (int32_t *)0x1800f4a62;
          FUN_1800f9a90(&local_30,local_38[0]);
        }
        else {
          local_38[0] = '\0';
          local_30 = 0;
          pcVar7 = (char *)param_1[0xc];
          local_28 = *pcVar7;
          *pcVar7 = cVar10;
          local_20 = *(longlong *)(pcVar7 + 8);
          *(longlong *)(pcVar7 + 8) = lVar2;
          puStack_60 = (int32_t *)0x1800f4a9a;
          FUN_1800f9a90(&local_20,local_28);
          *param_2 = 1;
          *(int32_t *)(param_2 + 8) = param_1[0xc];
          puStack_60 = (int32_t *)0x1800f4ab3;
          FUN_1800f9a90(&local_30,local_38[0]);
        }
      }
    }
  }
  return param_2;
}

// ---- Function: FUN_1800f4ad0 ----
int32_t *
FUN_1800f4ad0(int32_t *param_1,int32_t *param_2,longlong *param_3,int32_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  char *pcVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  int32_t *puVar11;
  int32_t local_res8 [2];
  int32_t local_res20 [8];
  char local_48 [8];
  longlong local_40;
  char local_38;
  longlong local_30 [3];
  
  uVar5 = param_1[7];
  if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
    lVar3 = -((~uVar5 >> 5) * 4 + 4);
  }
  else {
    lVar3 = (uVar5 >> 5) * 4;
  }
  uVar1 = (uVar5 & 0x1f) - 1;
  if ((uVar5 & 0x1f) == 0) {
    lVar2 = -((~uVar1 >> 5) * 4 + 4);
  }
  else {
    lVar2 = (uVar1 >> 5) * 4;
  }
  if ((*(uint *)(param_1[4] + lVar3 + lVar2) >> ((byte)uVar1 & 0x1f) & 1) == 0) {
    *param_2 = 0;
    *(int32_t *)(param_2 + 8) = 0;
  }
  else {
    local_48[0] = '\0';
    local_40 = 0;
    lVar3 = *param_3;
    local_res20[0] = param_4;
    FUN_1800f9a90(&local_40,'\0');
    local_48[0] = '\a';
    local_res20[0] = 5;
    local_res8[0] = (int32_t)((longlong)(param_1[2] - param_1[1]) >> 3);
    plVar6 = (longlong *)param_1[0x15];
    local_40 = lVar3;
    if (plVar6 == (longlong *)0x0) {
      FUN_180123318();
      pcVar8 = (code *)swi(3);
      puVar11 = (int32_t *)(*pcVar8)();
      return puVar11;
    }
    cVar10 = (**(code **)(*plVar6 + 0x10))(plVar6,local_res8,local_res20,local_48);
    lVar3 = local_40;
    cVar9 = local_48[0];
    if (cVar10 == '\0') {
      *param_2 = 0;
      *(int32_t *)(param_2 + 8) = 0;
      FUN_1800f9a90(&local_40,local_48[0]);
    }
    else if (param_1[1] == param_1[2]) {
      local_48[0] = '\0';
      local_40 = 0;
      pcVar7 = (char *)*param_1;
      local_38 = *pcVar7;
      *pcVar7 = cVar9;
      local_30[0] = *(longlong *)(pcVar7 + 8);
      *(longlong *)(pcVar7 + 8) = lVar3;
      FUN_1800f9a90(local_30,local_38);
      *param_2 = 1;
      *(int32_t *)(param_2 + 8) = *param_1;
      FUN_1800f9a90(&local_40,local_48[0]);
    }
    else {
      pcVar7 = *(char **)(param_1[2] + -8);
      if (pcVar7 == (char *)0x0) {
        *param_2 = 0;
        *(int32_t *)(param_2 + 8) = 0;
        FUN_1800f9a90(&local_40,local_48[0]);
      }
      else if (*pcVar7 == '\x02') {
        plVar6 = *(longlong **)(pcVar7 + 8);
        pcVar7 = (char *)plVar6[1];
        if (pcVar7 == (char *)plVar6[2]) {
          FUN_1800f9810(plVar6,pcVar7,local_48);
        }
        else {
          *pcVar7 = local_48[0];
          *(longlong *)(pcVar7 + 8) = local_40;
          local_48[0] = '\0';
          local_40 = 0;
          plVar6[1] = plVar6[1] + 0x10;
        }
        *param_2 = 1;
        *(longlong *)(param_2 + 8) =
             *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
        FUN_1800f9a90(&local_40,local_48[0]);
      }
      else {
        uVar5 = param_1[0xb];
        if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
          lVar3 = -((~uVar5 >> 5) * 4 + 4);
        }
        else {
          lVar3 = (uVar5 >> 5) * 4;
        }
        uVar1 = (uVar5 & 0x1f) - 1;
        if ((uVar5 & 0x1f) == 0) {
          lVar2 = -((~uVar1 >> 5) * 4 + 4);
        }
        else {
          lVar2 = (uVar1 >> 5) * 4;
        }
        uVar4 = *(uint *)(param_1[8] + lVar3 + lVar2);
        FUN_1800f6c50(param_1 + 8);
        lVar3 = local_40;
        cVar9 = local_48[0];
        if ((1 << ((byte)uVar1 & 0x1f) & uVar4) == 0) {
          *param_2 = 0;
          *(int32_t *)(param_2 + 8) = 0;
          FUN_1800f9a90(&local_40,local_48[0]);
        }
        else {
          local_48[0] = '\0';
          local_40 = 0;
          pcVar7 = (char *)param_1[0xc];
          local_38 = *pcVar7;
          *pcVar7 = cVar9;
          local_30[0] = *(longlong *)(pcVar7 + 8);
          *(longlong *)(pcVar7 + 8) = lVar3;
          FUN_1800f9a90(local_30,local_38);
          *param_2 = 1;
          *(int32_t *)(param_2 + 8) = param_1[0xc];
          FUN_1800f9a90(&local_40,local_48[0]);
        }
      }
    }
  }
  return param_2;
}

// ---- Function: FUN_1800f4de0 ----
longlong *
FUN_1800f4de0(longlong *param_1,ulonglong param_2,int32_t *param_3,int32_t *param_4)

{
  ulonglong *puVar1;
  int32_t uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  if (0xf < param_3[2] + 0x1a) {
    FUN_1800b9630(param_1,param_3[2] + 0x1a);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"number overflow parsing \'",0x19);
  puVar1 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (int32_t *)*param_3;
  }
  FUN_1800b9910(param_1,param_3,*puVar1);
  uVar2 = *param_4;
  uVar3 = param_1[2];
  if (uVar3 < (ulonglong)param_1[3]) {
    param_1[2] = uVar3 + 1;
    plVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar4 = (longlong *)*param_1;
    }
    *(int32_t *)((longlong)plVar4 + uVar3) = uVar2;
    *(int32_t *)((longlong)plVar4 + uVar3 + 1) = 0;
    return param_1;
  }
  FUN_1800b99a0(param_1,1,param_2 & 0xff,uVar2);
  return param_1;
}

// ---- Function: FUN_1800f4ed0 ----
void FUN_1800f4ed0(int32_t *param_1,int32_t param_2,int32_t *param_3)

{
  code *pcVar1;
  int32_t *puVar2;
  int32_t ***pppuVar3;
  LPVOID pvVar4;
  int32_t auStack_b8 [40];
  int32_t ***local_90;
  ulonglong uStack_88;
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
  local_80 = _DAT_1801d9010;
  uStack_78 = _UNK_1801d9018;
  local_90 = (int32_t ***)s_out_of_range_1801d69d0._0_8_;
  uStack_88 = (ulonglong)(uint)s_out_of_range_1801d69d0._8_4_;
  puVar2 = (int32_t *)FUN_1800f8dd0(local_30,&local_90,0x196);
  FUN_1800f8bc0((longlong *)local_50,puVar2,&local_70,param_3);
  FUN_1800a6800(local_30);
  if (0xf < uStack_78) {
    pppuVar3 = local_90;
    if ((0xfff < uStack_78 + 1) &&
       (pppuVar3 = (int32_t ***)local_90[-1],
       0x1f < (ulonglong)((longlong)local_90 + (-8 - (longlong)pppuVar3)))) goto LAB_1800f507c;
    thunk_FUN_18012d5e8(pppuVar3);
  }
  if (0xf < uStack_58) {
    pvVar4 = local_70;
    if ((0xfff < uStack_58 + 1) &&
       (pvVar4 = *(LPVOID *)((longlong)local_70 + -8),
       0x1f < (ulonglong)((longlong)local_70 + (-8 - (longlong)pvVar4)))) {
      FUN_18012b7b4();
LAB_1800f507c:
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
  *(int32_t *)(param_1 + 3) = 0x196;
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

// ---- Function: FUN_1800f5090 ----
int32_t FUN_1800f5090(longlong param_1)

{
  longlong *plVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  char *pcVar5;
  int32_t uVar6;
  longlong lVar7;
  int32_t *puVar8;
  int32_t local_res8 [8];
  int local_res10 [6];
  int32_t local_18 [16];
  
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
  if (lVar7 != 0) {
    local_res10[0] = (int)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3) + -1;
    local_res8[0] = 3;
    plVar1 = *(longlong **)(param_1 + 0xa8);
    if (plVar1 == (longlong *)0x0) {
      FUN_180123318();
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    puVar8 = local_res8;
    cVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,local_res10);
    if (cVar4 == '\0') {
      pcVar5 = FUN_1800f57a0(local_18,(int32_t *)(param_1 + 0xb8),puVar8,lVar7);
      pcVar2 = *(char **)(*(longlong *)(param_1 + 0x10) + -8);
      cVar4 = *pcVar2;
      *pcVar2 = *pcVar5;
      *pcVar5 = cVar4;
      plVar1 = (longlong *)(pcVar5 + 8);
      lVar7 = *(longlong *)(pcVar2 + 8);
      *(longlong *)(pcVar2 + 8) = *plVar1;
      *plVar1 = lVar7;
      FUN_1800f9a90(plVar1,*pcVar5);
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
      FUN_1800f6c50((longlong *)(param_1 + 0x20));
      lVar7 = *(longlong *)(param_1 + 0x10);
      if ((*(longlong *)(param_1 + 8) != lVar7) && (**(char **)(lVar7 + -8) == '\x02')) {
        lVar7 = *(longlong *)(*(char **)(lVar7 + -8) + 8);
        uVar6 = FUN_1800f9ec0((int32_t *)(*(longlong *)(lVar7 + 8) + -0x10));
        plVar1 = (longlong *)(lVar7 + 8);
        *plVar1 = *plVar1 + -0x10;
        return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      goto LAB_1800f516e;
    }
  }
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
  lVar7 = FUN_1800f6c50((longlong *)(param_1 + 0x20));
LAB_1800f516e:
  return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
}

// ---- Function: FUN_1800f5180 ----
ulonglong FUN_1800f5180(int32_t *param_1,int32_t *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int32_t extraout_var;
  ulonglong uVar3;
  int iVar4;
  ulonglong _Size;
  
  uVar3 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (int32_t *)*param_2;
  }
  uVar1 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (int32_t *)*param_1;
  }
  _Size = uVar1;
  if (uVar3 < uVar1) {
    _Size = uVar3;
  }
  iVar2 = memcmp(param_1,param_2,_Size);
  iVar4 = iVar2;
  if (iVar2 == 0) {
    if (uVar1 < uVar3) {
      return 0xff;
    }
    iVar4 = 1;
    if (uVar1 <= uVar3) {
      return CONCAT44(extraout_var,iVar2) & 0xffffffffffffff00;
    }
  }
  uVar3 = 0xff;
  if (-1 < iVar4) {
    uVar3 = 1;
  }
  return uVar3;
}

// ---- Function: FUN_1800f5210 ----
longlong * FUN_1800f5210(longlong *param_1,int32_t *param_2)

{
  code *pcVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  uint uStack_20;
  int32_t uStack_1c;
  
  plVar6 = (longlong *)*param_1;
  plVar4 = (longlong *)plVar6[1];
  uStack_20 = 0;
  cVar2 = *(char *)((longlong)plVar4 + 0x19);
  plVar5 = plVar6;
  local_28 = plVar4;
  while (cVar2 == '\0') {
    local_28 = plVar4;
    uVar3 = FUN_1800f5180(plVar4 + 4,param_2);
    cVar2 = (char)uVar3;
    uStack_20 = (uint)(-1 < cVar2);
    if (-1 < cVar2) {
      plVar5 = plVar4;
    }
    plVar7 = plVar4 + 2;
    if (-1 < cVar2) {
      plVar7 = plVar4;
    }
    plVar4 = (longlong *)*plVar7;
    cVar2 = *(char *)((longlong)plVar4 + 0x19);
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') ||
     (uVar3 = FUN_1800f5180(param_2,plVar5 + 4), (char)uVar3 < '\0')) {
    if (param_1[1] == 0x333333333333333) {
      FUN_1800d8950();
      pcVar1 = (code *)swi(3);
      plVar6 = (longlong *)(*pcVar1)();
      return plVar6;
    }
    plStack_30 = (longlong *)0x0;
    local_38 = param_1;
    plVar4 = (longlong *)operator_new(0x50);
    plStack_30 = plVar4;
    FUN_1800ba630(plVar4 + 4,param_2);
    *(int32_t *)(plVar4 + 8) = 0;
    FUN_1800f8a10(plVar4 + 9,'\0');
    *plVar4 = (longlong)plVar6;
    plVar4[1] = (longlong)plVar6;
    plVar4[2] = (longlong)plVar6;
    *(int32_t *)(plVar4 + 3) = 0;
    plStack_30 = (longlong *)CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar5 = FUN_1800d86d0(param_1,(longlong *)&local_38,plVar4);
  }
  return plVar5 + 8;
}

// ---- Function: FUN_1800f5340 ----
int32_t FUN_1800f5340(longlong param_1,int32_t *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int32_t *puVar5;
  char *pcVar6;
  longlong *plVar7;
  int32_t uVar8;
  int32_t ***pppuVar9;
  int32_t **local_res10;
  int32_t local_res18 [4];
  char local_38 [8];
  int32_t *local_30;
  int32_t **local_28;
  int32_t *local_20;
  
  local_38[0] = '\0';
  local_30 = (int32_t *)0x0;
  FUN_1800f9a90((longlong *)&local_30,'\0');
  local_38[0] = '\x03';
  puVar5 = (int32_t *)operator_new(0x20);
  local_28 = &local_res10;
  local_20 = puVar5;
  FUN_1800ba630(puVar5,param_2);
  local_res10._0_1_ = 4;
  local_res18[0] = (int32_t)(*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 3);
  plVar1 = *(longlong **)(param_1 + 0xa8);
  local_30 = puVar5;
  if (plVar1 != (longlong *)0x0) {
    pcVar6 = local_38;
    pppuVar9 = &local_res10;
    cVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,local_res18);
    local_res10 = (int32_t **)CONCAT71(local_res10._1_7_,cVar4);
    FUN_1800f8400((longlong *)(param_1 + 0x40),(char *)&local_res10);
    if ((cVar4 != '\0') && (*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) != 0)) {
      local_res10 = &local_28;
      pcVar6 = FUN_1800f57a0((int32_t *)&local_28,(int32_t *)(param_1 + 0xb8),pppuVar9,pcVar6)
      ;
      plVar7 = FUN_1800f5210(*(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) + 8),
                             param_2);
      lVar3 = *plVar7;
      *(char *)plVar7 = *pcVar6;
      *pcVar6 = (char)lVar3;
      plVar1 = (longlong *)(pcVar6 + 8);
      lVar3 = plVar7[1];
      plVar7[1] = *plVar1;
      *plVar1 = lVar3;
      FUN_1800f9a90(plVar1,*pcVar6);
      *(longlong **)(param_1 + 0x60) = plVar7;
    }
    uVar8 = FUN_1800f9a90((longlong *)&local_30,local_38[0]);
    return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  }
  FUN_180123318();
  pcVar2 = (code *)swi(3);
  uVar8 = (*pcVar2)();
  return uVar8;
}

