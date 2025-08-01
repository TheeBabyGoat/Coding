#include "FUN_1800b6450.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b6450(longlong *param_1,int32_t *param_2,ulonglong param_3,longlong *param_4,
                  longlong param_5) {
char ******ppppppcVar1;
  char *pcVar2;
  char ******ppppppcVar3;
  char *pcVar4;
  code *pcVar5;
  char *pcVar6;
  int iVar7;
  _Locimp *p_Var8;
  longlong *plVar9;
  int32_t *puVar10;
  char ******ppppppcVar11;
  char *pcVar12;
  char cVar13;
  uint uVar14;
  char *pcVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  int32_t auStackY_1d8 [32];
  char local_1a8 [8];
  char local_1a0 [4];
  int local_19c;
  char *local_198;
  _Locimp *p_Stack_190;
  int32_t local_188;
  uint local_178 [2];
  int local_170 [2];
  longlong *local_168;
  char *local_160;
  char *local_158;
  _Locimp *p_Stack_150;
  longlong local_148;
  longlong lStack_140;
  int32_t local_138;
  char *local_128;
  longlong *local_120;
  uint *local_118;
  char **local_110;
  char *local_108;
  int *local_100;
  int *local_f8;
  char **local_f0;
  char *****local_e8;
  longlong *local_e0;
  char *****local_d8;
  int32_t uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  int32_t local_b8;
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
  char local_98;
  char local_97 [64];
  int32_t local_57;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_1d8;
  local_178[0] = (uint)param_3;
  iVar7 = 0;
  cVar13 = (char)param_4[1];
  local_168 = param_1;
  if (cVar13 == 'c') {
    if (0xff < local_178[0] + 0x80) {
      FUN_1800b7ac0(0x1801835c8);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(int32_t *)((longlong)param_4 + 0xb) = 0;
    local_b8._0_1_ = (int32_t)*param_4;
    local_b8._1_1_ = *(int32_t *)((longlong)param_4 + 1);
    local_b8._2_1_ = *(int32_t *)((longlong)param_4 + 2);
    local_b8._3_1_ = *(int32_t *)((longlong)param_4 + 3);
    local_b8._4_1_ = *(int32_t *)((longlong)param_4 + 4);
    local_b8._5_1_ = *(int32_t *)((longlong)param_4 + 5);
    local_b8._6_1_ = *(int32_t *)((longlong)param_4 + 6);
    local_b8._7_1_ = *(int32_t *)((longlong)param_4 + 7);
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
        FUN_1800b5450(param_1,param_2,(longlong *)&local_198,&local_b8);
        goto LAB_1800b68f2;
      }
    }
    else if (cStack_b0 != '?') {
      local_198 = (char *)*param_4;
      p_Stack_190 = (_Locimp *)param_4[1];
      local_188 = (int32_t)param_4[2];
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
  uVar14 = 10;
  if (cVar13 == 'B') {
LAB_1800b65b6:
    uVar14 = 2;
  }
  else if (cVar13 == 'X') {
LAB_1800b65a8:
    uVar14 = 0x10;
  }
  else {
    if (cVar13 == 'b') goto LAB_1800b65b6;
    if (cVar13 == 'o') {
      uVar14 = 8;
    }
    else if (cVar13 == 'x') goto LAB_1800b65a8;
  }
  FUN_1800b5650((longlong *)&local_198,(int32_t *)&local_98,&local_57,local_178[0],uVar14);
  pcVar12 = local_198;
  local_160 = &local_98;
  local_19c = (int)local_198 - (int)local_160;
  if ((int)local_178[0] < 0) {
    local_160 = local_97;
  }
  else if (*(char *)((longlong)param_4 + 10) != '\x02') {
    local_19c = local_19c + 1;
  }
  pcVar2 = local_160;
  if ((char)param_4[1] == 'X') {
    for (; pcVar2 != local_198; pcVar2 = pcVar2 + 1) {
      cVar13 = *pcVar2;
      if (('`' < cVar13) && (cVar13 < '{')) {
        *pcVar2 = cVar13 + -0x20;
      }
    }
  }
  local_158 = (char *)0x0;
  p_Stack_150 = (_Locimp *)0x0;
  iVar17 = 0;
  if (*(char *)((longlong)param_4 + 0xb) != '\0') {
    cVar13 = (char)param_4[1];
    if (cVar13 == 'B') {
      local_198 = "0B";
LAB_1800b66bb:
      iVar18 = 2;
      p_Stack_190 = (_Locimp *)0x2;
    }
    else {
      if (cVar13 == 'X') {
        local_198 = "0X";
        goto LAB_1800b66bb;
      }
      if (cVar13 == 'b') {
        local_198 = "0b";
        goto LAB_1800b66bb;
      }
      if (cVar13 == 'o') {
        if (local_178[0] == 0) goto LAB_1800b666a;
        local_198 = "0";
        p_Stack_190 = (_Locimp *)0x1;
        iVar18 = 1;
      }
      else {
        if (cVar13 == 'x') {
          local_198 = "0x";
          goto LAB_1800b66bb;
        }
LAB_1800b666a:
        local_198 = (char *)0x0;
        p_Stack_190 = (_Locimp *)0x0;
        iVar18 = iVar7;
      }
    }
    local_158 = local_198;
    p_Stack_150 = p_Stack_190;
    local_19c = local_19c + iVar18;
  }
  local_170[0] = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0xf;
  local_d8 = (char *****)0x0;
  if (*(char *)((longlong)param_4 + 0xc) != '\0') {
    if (param_5 == 0) {
      p_Var8 = FUN_180124548('\x01');
      p_Stack_190 = p_Var8;
    }
    else {
      p_Var8 = *(_Locimp **)(param_5 + 8);
      p_Stack_190 = p_Var8;
      (**(code **)(*(longlong *)p_Var8 + 8))(p_Var8);
    }
    plVar9 = FUN_1800b5fd0((longlong)&local_198);
    (**(code **)(*plVar9 + 0x28))(plVar9,&local_b8);
    if (0xf < uStack_c0) {
      ppppppcVar11 = (char ******)local_d8;
      if ((0xfff < uStack_c0 + 1) &&
         (ppppppcVar11 = (char ******)local_d8[-1],
         (char *)0x1f < (char *)((longlong)local_d8 + (-8 - (longlong)ppppppcVar11)))) {
        FUN_18012b7b4();
        goto LAB_1800b6aa3;
      }
      thunk_FUN_18012d5e8(ppppppcVar11);
    }
    local_d8 = (char *****)
               CONCAT17(local_b8._7_1_,
                        CONCAT16(local_b8._6_1_,
                                 CONCAT15(local_b8._5_1_,
                                          CONCAT14(local_b8._4_1_,
                                                   CONCAT13(local_b8._3_1_,
                                                            CONCAT12(local_b8._2_1_,
                                                                     CONCAT11(local_b8._1_1_,
                                                                              (int32_t)local_b8))
                                                           )))));
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
    local_b8._0_1_ = 0;
    FUN_1800a6800(&local_b8);
    if ((p_Var8 != (_Locimp *)0x0) &&
       (puVar10 = (int32_t *)(**(code **)(*(longlong *)p_Var8 + 0x10))(p_Var8),
       puVar10 != (int32_t *)0x0)) {
      (**(code **)*puVar10)(puVar10,1);
    }
    ppppppcVar11 = &local_d8;
    if (0xf < uStack_c0) {
      ppppppcVar11 = (char ******)local_d8;
    }
    uVar16 = (longlong)pcVar12 - (longlong)local_160;
    if ((local_c8 != 0) && ((ulonglong)(longlong)*(char *)ppppppcVar11 < uVar16)) {
      ppppppcVar3 = (char ******)((longlong)ppppppcVar11 + local_c8);
      iVar17 = iVar7;
      do {
        cVar13 = *(char *)ppppppcVar11;
        uVar16 = uVar16 - (longlong)cVar13;
        iVar17 = iVar17 + 1;
        ppppppcVar1 = (char ******)((longlong)ppppppcVar11 + 1);
        if (ppppppcVar1 != ppppppcVar3) {
          cVar13 = *(char *)ppppppcVar1;
          ppppppcVar11 = ppppppcVar1;
        }
      } while ((ulonglong)(longlong)cVar13 < uVar16);
    }
    local_19c = local_19c + iVar17;
    local_170[0] = iVar17;
  }
  if ((*(char *)((longlong)param_4 + 0xd) == '\0') || (*(char *)((longlong)param_4 + 9) != '\0')) {
    local_1a0[0] = '\0';
  }
  else {
    local_1a0[0] = '\x01';
  }
  local_128 = pcVar12;
  local_118 = local_178;
  local_110 = &local_158;
  local_108 = local_1a0;
  local_100 = &local_19c;
  local_f8 = local_170;
  local_f0 = &local_160;
  local_e0 = &param_5;
  local_120 = param_4;
  local_e8 = (char *****)&local_d8;
  if (local_1a0[0] == '\0') {
    cVar13 = *(char *)((longlong)param_4 + 9);
    if (cVar13 == '\0') {
      cVar13 = '\x02';
    }
    iVar17 = (int)*param_4;
    iVar18 = iVar7;
    if (local_19c < iVar17) {
      if (cVar13 != '\x01') {
        iVar18 = 0;
        if (cVar13 == '\x02') {
          iVar7 = iVar17 - local_19c;
        }
        else if (cVar13 == '\x03') {
          iVar7 = (iVar17 - local_19c) / 2;
          iVar18 = (iVar17 - iVar7) - local_19c;
        }
        goto LAB_1800b6967;
      }
      iVar18 = iVar17 - local_19c;
      pcVar15 = (char *)(ulonglong)*(byte *)((longlong)param_4 + 0xe);
    }
    else {
LAB_1800b6967:
      pcVar15 = (char *)(ulonglong)*(byte *)((longlong)param_4 + 0xe);
      pcVar2 = (char *)((longlong)param_4 + 0xf);
      local_198 = pcVar15;
      if (0 < iVar7) {
        pcVar4 = pcVar15 + (longlong)pcVar2;
        pcVar6 = pcVar2;
        do {
          for (; local_198 = pcVar15, pcVar6 != pcVar4; pcVar6 = pcVar6 + 1) {
            cVar13 = *pcVar6;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[2] + param_2[1]) = cVar13;
            param_2[2] = param_2[2] + 1;
            pcVar15 = local_198;
          }
          iVar7 = iVar7 + -1;
          pcVar6 = pcVar2;
        } while (0 < iVar7);
      }
    }
    pcVar12 = (char *)((longlong)param_4 + 0xf);
    plVar9 = FUN_1800b6210((longlong *)&local_128,&local_198,param_2);
    puVar10 = (int32_t *)*plVar9;
    if (0 < iVar18) {
      pcVar2 = pcVar12;
      do {
        for (; pcVar2 != pcVar15 + (longlong)pcVar12; pcVar2 = pcVar2 + 1) {
          cVar13 = *pcVar2;
          if ((ulonglong)puVar10[3] < puVar10[2] + 1) {
            (**(code **)*puVar10)(puVar10);
          }
          *(char *)(puVar10[2] + puVar10[1]) = cVar13;
          puVar10[2] = puVar10[2] + 1;
        }
        iVar18 = iVar18 + -1;
        pcVar2 = pcVar12;
      } while (0 < iVar18);
    }
    *local_168 = (longlong)puVar10;
    if (uStack_c0 < 0x10) goto LAB_1800b68f2;
    ppppppcVar11 = (char ******)local_d8;
    if (0xfff < uStack_c0 + 1) {
      ppppppcVar11 = (char ******)local_d8[-1];
      pcVar12 = (char *)((longlong)local_d8 + (-8 - (longlong)ppppppcVar11));
      goto joined_r0x0001800b6a78;
    }
  }
  else {
    FUN_1800b6210((longlong *)&local_128,local_168,param_2);
    if (uStack_c0 < 0x10) goto LAB_1800b68f2;
    ppppppcVar11 = (char ******)local_d8;
    if (0xfff < uStack_c0 + 1) {
      ppppppcVar11 = (char ******)local_d8[-1];
      pcVar12 = (char *)((longlong)local_d8 + (-8 - (longlong)ppppppcVar11));
joined_r0x0001800b6a78:
      if ((char *)0x1f < pcVar12) {
LAB_1800b6aa3:
        FUN_18012b7b4();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  thunk_FUN_18012d5e8(ppppppcVar11);
LAB_1800b68f2:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_1d8);
  return;
}
}

 FUN_1800b6450(param_2,*(int32_t **)*param_3,(ulonglong)*(uint *)(param_1 + 8),
                  (longlong *)&local_68,((int32_t *)*param_3)[3]);
    break;
  case 2:
    puVar3 = (int32_t *)param_3[1];
    local_68 = (byte *)*puVar3;
    lStack_60 = puVar3[1];
    local_58 = *(int32_t *)(puVar3 + 2);
    FUN_1800ac410(param_2,*(int32_t **)*param_3,(ulonglong)*(uint *)(param_1 + 8),
                  (longlong *)&local_68,((int32_t *)*param_3)[3]);
    break;
  case 3:
    puVar3 = (int32_t *)param_3[1];
    local_68 = (byte *)*puVar3;
    lStack_60 = puVar3[1];
    local_58 = *(int32_t *)(puVar3 + 2);
    FUN_1800acef0(param_2,*(int32_t **)*param_3,*(ulonglong *)(param_1 + 8),(longlong *)&local_68
                  ,((int32_t *)*param_3)[3]);
    break;
  case 4:
    puVar3 = (int32_t *)param_3[1];
    local_68 = (byte *)*puVar3;
    lStack_60 = puVar3[1];
    local_58 = *(int32_t *)(puVar3 + 2);
    FUN_1800ad560(param_2,*(int32_t **)*param_3,*(ulonglong *)(param_1 + 8),(longlong *)&local_68
                  ,((int32_t *)*param_3)[3]);
    break;
  case 5:
    puVar3 = (int32_t *)param_3[1];
    local_68 = (byte *)*puVar3;
    lStack_60 = puVar3[1];
    local_58 = *(int32_t *)(puVar3 + 2);
    FUN_1800adbb0(param_2,*(int32_t **)*param_3,(ulonglong)(byte)param_1[8],(longlong *)&local_68
                  ,((int32_t *)*param_3)[3]);
    break;
  case 6:
    puVar3 = (int32_t *)param_3[1];
    local_res8[0] = param_1[8];
    local_48 = *(int32_t *)puVar3;
    uStack_47 = *(int32_t *)((longlong)puVar3 + 1);
    uStack_46 = *(int32_t *)((longlong)puVar3 + 2);
    uStack_45 = *(int32_t *)((longlong)puVar3 + 3);
    uStack_44 = *(int32_t *)((longlong)puVar3 + 4);
    uStack_43 = *(int32_t *)((longlong)puVar3 + 5);
    uStack_42 = *(int32_t *)((longlong)puVar3 + 6);
    uStack_41 = *(int32_t *)((longlong)puVar3 + 7);
    local_68 = (byte *)*puVar3;
    cStack_40 = *(char *)(puVar3 + 1);
    uStack_3f = *(int32_t *)((longlong)puVar3 + 9);
    uStack_3e = *(int32_t *)((longlong)puVar3 + 10);
    uStack_3d = *(int32_t *)((longlong)puVar3 + 0xb);
    uStack_3c = *(int32_t *)((longlong)puVar3 + 0xc);
    uStack_3b = *(int32_t *)((longlong)puVar3 + 0xd);
    uStack_3a = *(int32_t *)((longlong)puVar3 + 0xe);
    uStack_39 = *(int32_t *)((longlong)puVar3 + 0xf);
    lStack_60 = puVar3[1];
    local_58 = *(int32_t *)(puVar3 + 2);
    puVar3 = *(int32_t **)*param_3;
    local_28 = local_48;
    uStack_27 = uStack_47;
    uStack_26 = uStack_46;
    uStack_25 = uStack_45;
    uStack_24 = uStack_44;
    uStack_23 = uStack_43;
    uStack_22 = uStack_42;
    uStack_21 = uStack_41;
    cStack_20 = cStack_40;
    uStack_1f = uStack_3f;
    uStack_1e = uStack_3e;
    uStack_1d = uStack_3d;
    uStack_1c = uStack_3c;
    uStack_1b = uStack_3b;
    uStack_1a = uStack_3a;
    uStack_19 = uStack_39;
    local_18 = local_58;
    if ((cStack_40 == '\0') || (cStack_40 == 'c')) {
if (cStack_40 != '?') {
        local_68 = local_res8;
        lStack_60 = 1;
        plVar2 = (longlong *)&local_28;
        goto LAB_1800b6cb9;
      }
    }
}

