#include "FUN_1800ad560.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800ad560(longlong *param_1,int32_t *param_2,ulonglong param_3,longlong *param_4,
                  longlong param_5) {
char *******pppppppcVar1;
  char *******pppppppcVar2;
  char *pcVar3;
  code *pcVar4;
  char *pcVar5;
  int iVar6;
  _Locimp *p_Var7;
  longlong *plVar8;
  int32_t *puVar9;
  char *******pppppppcVar10;
  char *pcVar11;
  char cVar12;
  char *pcVar13;
  char *pcVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int32_t auStackY_1d8 [32];
  char local_1a8 [8];
  char local_1a0 [4];
  int local_19c;
  char *local_198;
  _Locimp *p_Stack_190;
  int32_t local_188;
  int local_178 [2];
  longlong *local_170;
  ulonglong local_168;
  char *local_160;
  char *local_158;
  _Locimp *p_Stack_150;
  longlong local_148;
  longlong lStack_140;
  int32_t local_138;
  char *local_128;
  longlong *local_120;
  ulonglong *local_118;
  char **local_110;
  char *local_108;
  int *local_100;
  int *local_f8;
  char **local_f0;
  char ******local_e8;
  longlong *local_e0;
  char ******local_d8;
  int32_t uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  int32_t local_b8;
  int32_t uStack_b7;
  int32_t uStack_b6;
  int32_t uStack_b5;
  int32_t uStack_b4;
  int32_t uStack_b3;
  int32_t uStack_b2;
  int32_t uStack_b1;
  char cStack_b0;
  int32_t uStack_af;
  int32_t uStack_ae;
  int32_t uStack_ad;
  int32_t uStack_ac;
  int32_t uStack_ab;
  int32_t uStack_aa;
  int32_t uStack_a9;
  longlong local_a8;
  ulonglong uStack_a0;
  char local_98 [65];
  int32_t local_57 [15];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_1d8;
  iVar6 = 0;
  cVar12 = (char)param_4[1];
  local_170 = param_1;
  local_168 = param_3;
  if (cVar12 == 'c') {
    if (0x7f < param_3) {
      FUN_1800b7ac0(0x1801835c8);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(int32_t *)((longlong)param_4 + 0xb) = 0;
    local_b8 = (int32_t)*param_4;
    uStack_b7 = *(int32_t *)((longlong)param_4 + 1);
    uStack_b6 = *(int32_t *)((longlong)param_4 + 2);
    uStack_b5 = *(int32_t *)((longlong)param_4 + 3);
    uStack_b4 = *(int32_t *)((longlong)param_4 + 4);
    uStack_b3 = *(int32_t *)((longlong)param_4 + 5);
    uStack_b2 = *(int32_t *)((longlong)param_4 + 6);
    uStack_b1 = *(int32_t *)((longlong)param_4 + 7);
    cStack_b0 = (char)param_4[1];
    uStack_af = *(int32_t *)((longlong)param_4 + 9);
    uStack_ae = *(int32_t *)((longlong)param_4 + 10);
    uStack_ad = *(int32_t *)((longlong)param_4 + 0xb);
    uStack_ac = *(int32_t *)((longlong)param_4 + 0xc);
    uStack_ab = *(int32_t *)((longlong)param_4 + 0xd);
    uStack_aa = *(int32_t *)((longlong)param_4 + 0xe);
    uStack_a9 = *(int32_t *)((longlong)param_4 + 0xf);
    local_a8 = CONCAT44(local_a8._4_4_,(int)param_4[2]);
    local_1a8[0] = (char)param_3;
    if ((cStack_b0 == '\0') || (cStack_b0 == 'c')) {
      if (cStack_b0 != '?') {
        local_198 = local_1a8;
        p_Stack_190 = (_Locimp *)0x1;
        FUN_1800b5450(param_1,param_2,(longlong *)&local_198,(longlong *)&local_b8);
        goto LAB_1800ad9e7;
      }
    }
    else if (cStack_b0 != '?') {
      local_198 = (char *)*param_4;
      p_Stack_190 = (_Locimp *)param_4[1];
      local_188 = (int32_t)param_4[2];
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
  iVar16 = 10;
  if (cVar12 == 'B') {
LAB_1800ad6be:
    iVar16 = 2;
  }
  else if (cVar12 == 'X') {
LAB_1800ad6b0:
    iVar16 = 0x10;
  }
  else {
    if (cVar12 == 'b') goto LAB_1800ad6be;
    if (cVar12 == 'o') {
      iVar16 = 8;
    }
    else if (cVar12 == 'x') goto LAB_1800ad6b0;
  }
  FUN_1800b3370((longlong *)&local_198,(int32_t *)local_98,(longlong)local_57,param_3,iVar16);
  pcVar11 = local_198;
  local_160 = local_98;
  local_19c = (int)local_198 - (int)local_160;
  if (*(char *)((longlong)param_4 + 10) != '\x02') {
    local_19c = local_19c + 1;
  }
  if ((char)param_4[1] == 'X') {
    for (pcVar13 = local_98; pcVar13 != local_198; pcVar13 = pcVar13 + 1) {
      cVar12 = *pcVar13;
      if (('`' < cVar12) && (cVar12 < '{')) {
        *pcVar13 = cVar12 + -0x20;
      }
    }
  }
  local_158 = (char *)0x0;
  p_Stack_150 = (_Locimp *)0x0;
  iVar16 = 0;
  if (*(char *)((longlong)param_4 + 0xb) != '\0') {
    cVar12 = (char)param_4[1];
    if (cVar12 == 'B') {
      local_198 = "0B";
LAB_1800ad7b1:
      iVar17 = 2;
      p_Stack_190 = (_Locimp *)0x2;
    }
    else {
      if (cVar12 == 'X') {
        local_198 = "0X";
        goto LAB_1800ad7b1;
      }
      if (cVar12 == 'b') {
        local_198 = "0b";
        goto LAB_1800ad7b1;
      }
      if (cVar12 == 'o') {
        if (local_168 == 0) goto LAB_1800ad75d;
        local_198 = "0";
        p_Stack_190 = (_Locimp *)0x1;
        iVar17 = 1;
      }
      else {
        if (cVar12 == 'x') {
          local_198 = "0x";
          goto LAB_1800ad7b1;
        }
LAB_1800ad75d:
        local_198 = (char *)0x0;
        p_Stack_190 = (_Locimp *)0x0;
        iVar17 = iVar6;
      }
    }
    local_158 = local_198;
    p_Stack_150 = p_Stack_190;
    local_19c = local_19c + iVar17;
  }
  local_178[0] = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0xf;
  local_d8 = (char ******)0x0;
  if (*(char *)((longlong)param_4 + 0xc) != '\0') {
    if (param_5 == 0) {
      p_Var7 = FUN_180124548('\x01');
      p_Stack_190 = p_Var7;
    }
    else {
      p_Var7 = *(_Locimp **)(param_5 + 8);
      p_Stack_190 = p_Var7;
      (**(code **)(*(longlong *)p_Var7 + 8))(p_Var7);
    }
    plVar8 = FUN_1800b5fd0((longlong)&local_198);
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_b8);
    if (0xf < uStack_c0) {
      pppppppcVar10 = (char *******)local_d8;
      if ((0xfff < uStack_c0 + 1) &&
         (pppppppcVar10 = (char *******)local_d8[-1],
         (char *)0x1f < (char *)((longlong)local_d8 + (-8 - (longlong)pppppppcVar10)))) {
        FUN_18012b7b4();
        goto LAB_1800adb93;
      }
      thunk_FUN_18012d5e8(pppppppcVar10);
    }
    local_d8 = (char ******)
               CONCAT17(uStack_b1,
                        CONCAT16(uStack_b2,
                                 CONCAT15(uStack_b3,
                                          CONCAT14(uStack_b4,
                                                   CONCAT13(uStack_b5,
                                                            CONCAT12(uStack_b6,
                                                                     CONCAT11(uStack_b7,local_b8))))
                                         )));
    uStack_d0 = CONCAT17(uStack_a9,
                         CONCAT16(uStack_aa,
                                  CONCAT15(uStack_ab,
                                           CONCAT14(uStack_ac,
                                                    CONCAT13(uStack_ad,
                                                             CONCAT12(uStack_ae,
                                                                      CONCAT11(uStack_af,cStack_b0))
                                                            )))));
    local_c8 = local_a8;
    uStack_c0 = uStack_a0;
    local_a8 = _DAT_1801d8f70;
    uStack_a0 = _UNK_1801d8f78;
    local_b8 = 0;
    FUN_1800a6800((longlong *)&local_b8);
    if ((p_Var7 != (_Locimp *)0x0) &&
       (puVar9 = (int32_t *)(**(code **)(*(longlong *)p_Var7 + 0x10))(p_Var7),
       puVar9 != (int32_t *)0x0)) {
      (**(code **)*puVar9)(puVar9,1);
    }
    pppppppcVar10 = &local_d8;
    if (0xf < uStack_c0) {
      pppppppcVar10 = (char *******)local_d8;
    }
    uVar15 = (longlong)pcVar11 - (longlong)local_160;
    if ((local_c8 != 0) && ((ulonglong)(longlong)*(char *)pppppppcVar10 < uVar15)) {
      pppppppcVar2 = (char *******)((longlong)pppppppcVar10 + local_c8);
      iVar16 = iVar6;
      do {
        cVar12 = *(char *)pppppppcVar10;
        uVar15 = uVar15 - (longlong)cVar12;
        iVar16 = iVar16 + 1;
        pppppppcVar1 = (char *******)((longlong)pppppppcVar10 + 1);
        if (pppppppcVar1 != pppppppcVar2) {
          cVar12 = *(char *)pppppppcVar1;
          pppppppcVar10 = pppppppcVar1;
        }
      } while ((ulonglong)(longlong)cVar12 < uVar15);
    }
    local_19c = local_19c + iVar16;
    local_178[0] = iVar16;
  }
  if ((*(char *)((longlong)param_4 + 0xd) == '\0') || (*(char *)((longlong)param_4 + 9) != '\0')) {
    local_1a0[0] = '\0';
  }
  else {
    local_1a0[0] = '\x01';
  }
  local_128 = pcVar11;
  local_118 = &local_168;
  local_110 = &local_158;
  local_108 = local_1a0;
  local_100 = &local_19c;
  local_f8 = local_178;
  local_f0 = &local_160;
  local_e0 = &param_5;
  local_120 = param_4;
  local_e8 = (char ******)&local_d8;
  if (local_1a0[0] == '\0') {
    cVar12 = *(char *)((longlong)param_4 + 9);
    if (cVar12 == '\0') {
      cVar12 = '\x02';
    }
    iVar16 = (int)*param_4;
    iVar17 = iVar6;
    if (local_19c < iVar16) {
      if (cVar12 != '\x01') {
        iVar17 = 0;
        if (cVar12 == '\x02') {
          iVar6 = iVar16 - local_19c;
        }
        else if (cVar12 == '\x03') {
          iVar6 = (iVar16 - local_19c) / 2;
          iVar17 = (iVar16 - iVar6) - local_19c;
        }
        goto LAB_1800ada5c;
      }
      iVar17 = iVar16 - local_19c;
      pcVar14 = (char *)(ulonglong)*(byte *)((longlong)param_4 + 0xe);
    }
    else {
LAB_1800ada5c:
      pcVar14 = (char *)(ulonglong)*(byte *)((longlong)param_4 + 0xe);
      pcVar13 = (char *)((longlong)param_4 + 0xf);
      local_198 = pcVar14;
      if (0 < iVar6) {
        pcVar3 = pcVar14 + (longlong)pcVar13;
        pcVar5 = pcVar13;
        do {
          for (; local_198 = pcVar14, pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
            cVar12 = *pcVar5;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[2] + param_2[1]) = cVar12;
            param_2[2] = param_2[2] + 1;
            pcVar14 = local_198;
          }
          iVar6 = iVar6 + -1;
          pcVar5 = pcVar13;
        } while (0 < iVar6);
      }
    }
    pcVar11 = (char *)((longlong)param_4 + 0xf);
    plVar8 = FUN_1800ac210((longlong *)&local_128,&local_198,param_2);
    puVar9 = (int32_t *)*plVar8;
    if (0 < iVar17) {
      pcVar13 = pcVar11;
      do {
        for (; pcVar13 != pcVar14 + (longlong)pcVar11; pcVar13 = pcVar13 + 1) {
          cVar12 = *pcVar13;
          if ((ulonglong)puVar9[3] < puVar9[2] + 1) {
            (**(code **)*puVar9)(puVar9);
          }
          *(char *)(puVar9[2] + puVar9[1]) = cVar12;
          puVar9[2] = puVar9[2] + 1;
        }
        iVar17 = iVar17 + -1;
        pcVar13 = pcVar11;
      } while (0 < iVar17);
    }
    *local_170 = (longlong)puVar9;
    if (uStack_c0 < 0x10) goto LAB_1800ad9e7;
    pppppppcVar10 = (char *******)local_d8;
    if (0xfff < uStack_c0 + 1) {
      pppppppcVar10 = (char *******)local_d8[-1];
      pcVar11 = (char *)((longlong)local_d8 + (-8 - (longlong)pppppppcVar10));
      goto joined_r0x0001800adb68;
    }
  }
  else {
    FUN_1800ac210((longlong *)&local_128,local_170,param_2);
    if (uStack_c0 < 0x10) goto LAB_1800ad9e7;
    pppppppcVar10 = (char *******)local_d8;
    if (0xfff < uStack_c0 + 1) {
      pppppppcVar10 = (char *******)local_d8[-1];
      pcVar11 = (char *)((longlong)local_d8 + (-8 - (longlong)pppppppcVar10));
joined_r0x0001800adb68:
      if ((char *)0x1f < pcVar11) {
LAB_1800adb93:
        FUN_18012b7b4();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  thunk_FUN_18012d5e8(pppppppcVar10);
LAB_1800ad9e7:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_1d8);
  return;
}
}

