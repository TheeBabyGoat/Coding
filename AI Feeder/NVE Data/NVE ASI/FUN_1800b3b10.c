#include "FUN_1800b3b10.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b3b10(param_1,param_2,param_3,(int *)&local_198,param_5);
      goto LAB_1800ac897;
    }
    local_148 = *param_4;
    lStack_140 = param_4[1];
    local_138 = (int32_t)param_4[2];
    local_198 = local_1a8;
    p_Stack_190 = (_Locimp *)0x1;
    FUN_1800b4bf0(param_1,param_2,(longlong *)&local_198,(int *)&local_148,0x27);
    goto LAB_1800ac897;
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
*(int32_t *)((longlong)param_4 + 10) = 2;
  }
}

 FUN_1800b3b10(param_1,param_2,param_3,(int *)&local_198,param_5);
      goto LAB_1800ad392;
    }
    local_148 = *param_4;
    lStack_140 = param_4[1];
    local_138 = (int32_t)param_4[2];
    local_198 = local_1a8;
    p_Stack_190 = (_Locimp *)0x1;
    FUN_1800b4bf0(param_1,param_2,(longlong *)&local_198,(int *)&local_148,0x27);
    goto LAB_1800ad392;
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
*(int32_t *)((longlong)param_4 + 10) = 2;
  }
}

 FUN_1800b3b10(param_1,param_2,param_3,(int *)&local_198,param_5);
      goto LAB_1800ad9e7;
    }
    local_148 = *param_4;
    lStack_140 = param_4[1];
    local_138 = (int32_t)param_4[2];
    local_198 = local_1a8;
    p_Stack_190 = (_Locimp *)0x1;
    FUN_1800b4bf0(param_1,param_2,(longlong *)&local_198,(int *)&local_148,0x27);
    goto LAB_1800ad9e7;
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
*(int32_t *)((longlong)param_4 + 10) = 2;
  }
}

void FUN_1800b3b10(longlong *param_1,int32_t *param_2,ulonglong param_3,int *param_4,
                  longlong param_5) {
char *****pppppcVar1;
  char *****pppppcVar2;
  char cVar3;
  code *pcVar4;
  _Locimp *p_Var5;
  longlong *plVar6;
  int32_t *puVar7;
  char *****pppppcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int32_t auStackY_1b8 [32];
  int32_t in_stack_fffffffffffffe68;
  int32_t uVar15;
  byte local_188 [8];
  char local_180 [4];
  int local_17c;
  char *local_178;
  int32_t uStack_170;
  int local_168 [4];
  char *local_158;
  _Locimp *p_Stack_150;
  int local_148;
  char *local_138 [2];
  char *local_128;
  int *local_120;
  byte *local_118;
  char **local_110;
  char *local_108;
  int *local_100;
  int *local_f8;
  char **local_f0;
  char ****local_e8;
  longlong *local_e0;
  char ****local_d8;
  int32_t uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  int32_t local_b8;
  int32_t uStack_b7;
  int32_t uStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  char local_98 [65];
  int32_t local_57 [15];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_1b8;
  local_188[0] = (byte)param_3;
  iVar13 = 0;
  cVar3 = (char)param_4[2];
  if (cVar3 == 'c') {
    if (0x7f < local_188[0]) {
      FUN_1800b7ac0(0x1801835c8);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(int32_t *)((longlong)param_4 + 0xb) = 0;
    local_158 = *(char **)param_4;
    p_Stack_150 = *(_Locimp **)(param_4 + 2);
    local_148 = param_4[4];
    FUN_1800b5580(param_1,param_2,param_3,(longlong *)&local_158,param_5);
    goto LAB_1800b3ed6;
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
    *(int32_t *)((longlong)param_4 + 10) = 2;
  }
  iVar10 = 10;
  iVar12 = 2;
  if (cVar3 == 'B') {
LAB_1800b3bc2:
    iVar10 = 2;
  }
  else if (cVar3 == 'X') {
LAB_1800b3bb4:
    iVar10 = 0x10;
  }
  else {
    if (cVar3 == 'b') goto LAB_1800b3bc2;
    if (cVar3 == 'o') {
      iVar10 = 8;
    }
    else if (cVar3 == 'x') goto LAB_1800b3bb4;
  }
  uVar15 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe68 >> 0x20),iVar10);
  FUN_1800b4260((longlong *)&local_158,(int32_t *)local_98,(longlong)local_57,param_3 & 0xff,
                iVar10);
  pcVar9 = local_158;
  local_138[0] = local_98;
  local_17c = (int)local_158 - (int)local_138[0];
  if (*(char *)((longlong)param_4 + 10) != '\x02') {
    local_17c = local_17c + 1;
  }
  if ((char)param_4[2] == 'X') {
    for (pcVar11 = local_98; pcVar11 != local_158; pcVar11 = pcVar11 + 1) {
      cVar3 = *pcVar11;
      if (('`' < cVar3) && (cVar3 < '{')) {
        *pcVar11 = cVar3 + -0x20;
      }
    }
  }
  local_178 = (char *)0x0;
  uStack_170 = 0;
  if (*(char *)((longlong)param_4 + 0xb) != '\0') {
    cVar3 = (char)param_4[2];
    if (cVar3 == 'B') {
      local_178 = "0B";
LAB_1800b3caf:
      uStack_170 = 2;
    }
    else {
      if (cVar3 == 'X') {
        local_178 = "0X";
        goto LAB_1800b3caf;
      }
      if (cVar3 == 'b') {
        local_178 = "0b";
        goto LAB_1800b3caf;
      }
      if (cVar3 == 'o') {
        if (local_188[0] == 0) goto LAB_1800b3c61;
        local_178 = "0";
        uStack_170 = 1;
        iVar12 = 1;
      }
      else {
        if (cVar3 == 'x') {
          local_178 = "0x";
          goto LAB_1800b3caf;
        }
LAB_1800b3c61:
        local_178 = (char *)0x0;
        uStack_170 = 0;
        iVar12 = 0;
      }
    }
    local_17c = local_17c + iVar12;
  }
  local_168[0] = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0xf;
  local_d8 = (char ****)0x0;
  if ((char)param_4[3] != '\0') {
    if (param_5 == 0) {
      p_Var5 = FUN_180124548('\x01');
      p_Stack_150 = p_Var5;
    }
    else {
      p_Var5 = *(_Locimp **)(param_5 + 8);
      p_Stack_150 = p_Var5;
      (**(code **)(*(longlong *)p_Var5 + 8))(p_Var5);
    }
    plVar6 = FUN_1800b5fd0((longlong)&local_158);
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_b8);
    if (0xf < uStack_c0) {
      pppppcVar8 = (char *****)local_d8;
      if ((0xfff < uStack_c0 + 1) &&
         (pppppcVar8 = (char *****)local_d8[-1],
         (char *)0x1f < (char *)((longlong)local_d8 + (-8 - (longlong)pppppcVar8)))) {
        FUN_18012b7b4();
        goto LAB_1800b3f48;
      }
      thunk_FUN_18012d5e8(pppppcVar8);
    }
    local_d8 = (char ****)CONCAT71(uStack_b7,local_b8);
    uStack_d0 = uStack_b0;
    local_c8 = local_a8;
    uStack_c0 = uStack_a0;
    local_a8 = _DAT_1801d8f70;
    uStack_a0 = _UNK_1801d8f78;
    local_b8 = 0;
    FUN_1800a6800((longlong *)&local_b8);
    if ((p_Var5 != (_Locimp *)0x0) &&
       (puVar7 = (int32_t *)(**(code **)(*(longlong *)p_Var5 + 0x10))(),
       puVar7 != (int32_t *)0x0)) {
      (**(code **)*puVar7)(puVar7,1);
    }
    pppppcVar8 = &local_d8;
    if (0xf < uStack_c0) {
      pppppcVar8 = (char *****)local_d8;
    }
    uVar14 = (longlong)pcVar9 - (longlong)local_138[0];
    if ((local_c8 != 0) && ((ulonglong)(longlong)*(char *)pppppcVar8 < uVar14)) {
      pppppcVar2 = (char *****)((longlong)pppppcVar8 + local_c8);
      do {
        cVar3 = *(char *)pppppcVar8;
        uVar14 = uVar14 - (longlong)cVar3;
        iVar13 = iVar13 + 1;
        pppppcVar1 = (char *****)((longlong)pppppcVar8 + 1);
        if (pppppcVar1 != pppppcVar2) {
          cVar3 = *(char *)pppppcVar1;
          pppppcVar8 = pppppcVar1;
        }
      } while ((ulonglong)(longlong)cVar3 < uVar14);
    }
    local_17c = local_17c + iVar13;
    local_168[0] = iVar13;
  }
  if ((*(char *)((longlong)param_4 + 0xd) == '\0') || (*(char *)((longlong)param_4 + 9) != '\0')) {
    local_180[0] = '\0';
  }
  else {
    local_180[0] = '\x01';
  }
  local_128 = pcVar9;
  local_118 = local_188;
  local_110 = &local_178;
  local_108 = local_180;
  local_100 = &local_17c;
  local_f8 = local_168;
  local_f0 = local_138;
  local_e8 = (char ****)&local_d8;
  local_e0 = &param_5;
  local_120 = param_4;
  if (local_180[0] == '\0') {
    FUN_1800b39a0(param_1,param_2,local_17c,param_4,uVar15,(longlong *)&local_128);
    if (uStack_c0 < 0x10) goto LAB_1800b3ed6;
    pppppcVar8 = (char *****)local_d8;
    if (0xfff < uStack_c0 + 1) {
      pppppcVar8 = (char *****)local_d8[-1];
      pcVar9 = (char *)((longlong)local_d8 + (-8 - (longlong)pppppcVar8));
      goto joined_r0x0001800b3f3e;
    }
  }
  else {
    FUN_1800ac210((longlong *)&local_128,param_1,param_2);
    if (uStack_c0 < 0x10) goto LAB_1800b3ed6;
    pppppcVar8 = (char *****)local_d8;
    if (0xfff < uStack_c0 + 1) {
      pppppcVar8 = (char *****)local_d8[-1];
      pcVar9 = (char *)((longlong)local_d8 + (-8 - (longlong)pppppcVar8));
joined_r0x0001800b3f3e:
      if ((char *)0x1f < pcVar9) {
LAB_1800b3f48:
        FUN_18012b7b4();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  thunk_FUN_18012d5e8(pppppcVar8);
LAB_1800b3ed6:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_1b8);
  return;
}
}

 FUN_1800b3b10(param_1,param_2,param_3,(int *)&local_198,param_5);
      goto LAB_1800b68f2;
    }
    local_148 = *param_4;
    lStack_140 = param_4[1];
    local_138 = (int32_t)param_4[2];
    local_198 = local_1a8;
    p_Stack_190 = (_Locimp *)0x1;
    FUN_1800b4bf0(param_1,param_2,(longlong *)&local_198,(int *)&local_148,0x27);
    goto LAB_1800b68f2;
  }
  if (*(char *)((longlong)param_4 + 10) == '\0') {
*(int32_t *)((longlong)param_4 + 10) = 2;
  }
}

