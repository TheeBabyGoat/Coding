#include "FUN_1800aad80.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800aad80(int32_t *param_1,longlong *param_2,longlong *param_3) {
uint uVar1;
  int32_t uVar2;
  char cVar3;
  int32_t uVar4;
  code *pcVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  int32_t extraout_var;
  int32_t extraout_var_00;
  longlong lVar11;
  int32_t *puVar12;
  char *pcVar13;
  int32_t *puVar14;
  char *pcVar15;
  int32_t *puVar16;
  int32_t auStackY_158 [32];
  char *local_128;
  int32_t local_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  longlong local_110;
  char local_108 [24];
  char local_f0 [24];
  char local_d8 [24];
  char local_c0 [24];
  char local_a8 [24];
  char local_90 [24];
  char local_78 [24];
  char local_60 [24];
  ulonglong local_48 [4];
  
  local_48[0] = DAT_1801eb080 ^ (ulonglong)auStackY_158;
  switch(*param_1) {
  case 0:
    *param_2 = *param_3;
    goto LAB_1800aae54;
  case 1:
    puVar12 = (int32_t *)*param_3;
    FUN_1800b5650((longlong *)&local_128,(int32_t *)local_c0,(int32_t *)local_a8,
                  *(uint *)(param_1 + 8),10);
    pcVar15 = local_128;
    for (pcVar13 = local_c0; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[2] + puVar12[1]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 2:
    puVar12 = (int32_t *)*param_3;
    FUN_1800b4050((longlong *)&local_128,(int32_t *)local_a8,(longlong)local_90,
                  (ulonglong)*(uint *)(param_1 + 8),10);
    pcVar15 = local_128;
    for (pcVar13 = local_a8; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 3:
    puVar12 = (int32_t *)*param_3;
    FUN_1800aca60((longlong *)&local_128,(int32_t *)local_90,(int32_t *)local_78,
                  *(ulonglong *)(param_1 + 8),10);
    pcVar15 = local_128;
    for (pcVar13 = local_90; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[2] + puVar12[1]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 4:
    puVar12 = (int32_t *)*param_3;
    FUN_1800b3370((longlong *)&local_128,(int32_t *)local_78,(longlong)local_60,
                  *(ulonglong *)(param_1 + 8),10);
    pcVar15 = local_128;
    for (pcVar13 = local_78; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 5:
    puVar12 = (int32_t *)*param_3;
    pcVar13 = "false";
    if (param_1[8] != '\0') {
      pcVar13 = "true";
    }
    cVar3 = *pcVar13;
    while (cVar3 != '\0') {
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[2] + puVar12[1]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
      cVar3 = *pcVar13;
    }
    break;
  case 6:
    puVar12 = (int32_t *)*param_3;
    uVar4 = param_1[8];
    if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
      (**(code **)*puVar12)(puVar12);
    }
    *(int32_t *)(puVar12[1] + puVar12[2]) = uVar4;
    puVar12[2] = puVar12[2] + 1;
    break;
  case 7:
    uVar1 = *(uint *)(param_1 + 8);
    puVar12 = (int32_t *)*param_3;
    sVar6 = _fdclass(uVar1);
    if (sVar6 == 2) {
      uVar8 = FUN_18012d6a4(uVar1);
      if (uVar8 != 0) {
        local_108[0] = '-';
      }
      pcVar13 = local_108;
      if (uVar8 != 0) {
        pcVar13 = local_108 + 1;
      }
      *(short *)pcVar13 = (short)DAT_18018338c;
      pcVar15 = pcVar13 + 3;
      pcVar13[2] = (char)((uint)DAT_18018338c >> 0x10);
      if (pcVar15 == local_108) goto LAB_1800ab0c0;
    }
    else {
LAB_1800ab0c0:
      plVar10 = FUN_1800add90((longlong *)&local_128,local_108,local_f0,uVar1);
      pcVar15 = (char *)*plVar10;
    }
    for (pcVar13 = local_108; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 8:
    uVar2 = *(int32_t *)(param_1 + 8);
    puVar12 = (int32_t *)*param_3;
    sVar6 = _dclass(uVar2);
    if (sVar6 == 2) {
      uVar7 = FUN_18012d654(uVar2);
      iVar9 = (int)CONCAT62(extraout_var,uVar7);
      if (iVar9 != 0) {
        local_f0[0] = '-';
      }
      pcVar13 = local_f0;
      if (iVar9 != 0) {
        pcVar13 = local_f0 + 1;
      }
      *(short *)pcVar13 = (short)DAT_18018338c;
      pcVar13[2] = (char)((uint)DAT_18018338c >> 0x10);
      pcVar15 = pcVar13 + 3;
      if (pcVar13 + 3 == local_f0) goto LAB_1800ab17e;
    }
    else {
LAB_1800ab17e:
      FUN_1800b0670((longlong *)&local_128,(int32_t (*) [32])local_f0,
                    (int32_t (*) [32])local_d8);
      pcVar15 = local_128;
    }
    for (pcVar13 = local_f0; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 9:
    uVar2 = *(int32_t *)(param_1 + 8);
    puVar12 = (int32_t *)*param_3;
    sVar6 = _dclass(uVar2);
    if (sVar6 == 2) {
      uVar7 = FUN_18012d654(uVar2);
      iVar9 = (int)CONCAT62(extraout_var_00,uVar7);
      if (iVar9 != 0) {
        local_d8[0] = '-';
      }
      pcVar13 = local_d8;
      if (iVar9 != 0) {
        pcVar13 = local_d8 + 1;
      }
      *(short *)pcVar13 = (short)DAT_18018338c;
      pcVar13[2] = (char)((uint)DAT_18018338c >> 0x10);
      pcVar15 = pcVar13 + 3;
      if (pcVar13 + 3 == local_d8) goto LAB_1800ab23a;
    }
    else {
LAB_1800ab23a:
      FUN_1800b0670((longlong *)&local_128,(int32_t (*) [32])local_d8,
                    (int32_t (*) [32])local_c0);
      pcVar15 = local_128;
    }
    for (pcVar13 = local_d8; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 10:
    puVar12 = (int32_t *)*param_3;
    FUN_1800b3370((longlong *)&local_128,(int32_t *)local_60,(longlong)local_48,
                  *(ulonglong *)(param_1 + 8),0x10);
    if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
      (**(code **)*puVar12)(puVar12);
    }
    *(int32_t *)(puVar12[2] + puVar12[1]) = 0x30;
    puVar12[2] = puVar12[2] + 1;
    if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
      (**(code **)*puVar12)(puVar12);
    }
    pcVar15 = local_128;
    *(int32_t *)(puVar12[1] + puVar12[2]) = 0x78;
    lVar11 = puVar12[2] + 1;
    puVar12[2] = lVar11;
    for (pcVar13 = local_60; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
      cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < lVar11 + 1U) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
      lVar11 = puVar12[2];
    }
    break;
  case 0xb:
    pcVar13 = *(char **)(param_1 + 8);
    puVar12 = (int32_t *)*param_3;
    if (pcVar13 == (char *)0x0) {
      FUN_1800b7ac0(0x180184f48);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar3 = *pcVar13;
    while (cVar3 != '\0') {
      cVar3 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[2] + puVar12[1]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
      cVar3 = *pcVar13;
    }
    break;
  case 0xc:
    puVar14 = *(int32_t **)(param_1 + 8);
    puVar12 = (int32_t *)*param_3;
    puVar16 = puVar14 + *(longlong *)(param_1 + 0x10);
    for (; puVar14 != puVar16; puVar14 = puVar14 + 1) {
      uVar4 = *puVar14;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(int32_t *)(puVar12[1] + puVar12[2]) = uVar4;
      puVar12[2] = puVar12[2] + 1;
    }
    break;
  case 0xd:
    local_128 = (char *)*param_3;
    local_120 = (int32_t)param_3[1];
    uStack_11c = *(int32_t *)((longlong)param_3 + 0xc);
    uStack_118 = (int32_t)param_3[2];
    uStack_114 = *(int32_t *)((longlong)param_3 + 0x14);
    local_110 = param_3[3];
    (**(code **)(param_1 + 0x10))(param_3[4],&local_128,*(int32_t *)(param_1 + 8));
    *param_2 = (longlong)local_128;
    goto LAB_1800aae54;
  default:
    FUN_18012b7b4();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *param_2 = (longlong)puVar12;
LAB_1800aae54:
  FUN_1801252c0(local_48[0] ^ (ulonglong)auStackY_158);
  return;
}
}

