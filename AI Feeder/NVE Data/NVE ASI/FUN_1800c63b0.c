#include "FUN_1800c63b0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800c63b0((longlong *)&DAT_1801fb9f0,DAT_1801fb9f8,&local_98);
    uVar4 = uStack_80;
  }
  else {
    *DAT_1801fb9f8 = (longlong)local_98;
    plVar2[1] = (longlong)puStack_90;
    plVar2[2] = local_88;
    plVar2[3] = uStack_80;
    local_98 = (char *)((ulonglong)local_98 & 0xffffffffffffff00);
    DAT_1801fb9f8 = DAT_1801fb9f8 + 4;
    uVar4 = 0xf;
  }
  if (0xf < uVar4) {
pcVar3 = local_98;
    if ((0xfff < uVar4 + 1) &&
       (pcVar3 = *(char **)(local_98 + -8), (char *)0x1f < local_98 + (-8 - (longlong)pcVar3))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pcVar3);
  }
}

 FUN_1800c63b0((longlong *)(param_1 + 0x10),puVar2,&local_b8);
    uVar6 = uStack_a0;
  }
  else {
    *puVar2 = local_b8;
    puVar2[1] = puStack_b0;
    puVar2[2] = local_a8;
    puVar2[3] = uStack_a0;
    local_b8 = (char *)((ulonglong)local_b8 & 0xffffffffffffff00);
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x20;
    uVar6 = 0xf;
  }
  if (0xf < uVar6) {
pcVar4 = local_b8;
    if ((0xfff < uVar6 + 1) &&
       (pcVar4 = *(char **)(local_b8 + -8), (char *)0x1f < local_b8 + (-8 - (longlong)pcVar4))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(pcVar4);
  }
}

int32_t * FUN_1800c63b0(longlong *param_1,int32_t *param_2,int32_t *param_3) {
ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  int32_t uVar4;
  longlong lVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  int32_t *puVar11;
  ulonglong uVar12;
  
  lVar2 = *param_1;
  lVar5 = param_1[1] - lVar2 >> 5;
  if (lVar5 == 0x7ffffffffffffff) {
    FUN_1800aa480();
    pcVar3 = (code *)swi(3);
    puVar8 = (int32_t *)(*pcVar3)();
    return puVar8;
  }
  uVar9 = param_1[2] - lVar2 >> 5;
  uVar1 = lVar5 + 1;
  uVar12 = 0x7ffffffffffffff;
  if ((uVar9 <= 0x7ffffffffffffff - (uVar9 >> 1)) && (uVar12 = (uVar9 >> 1) + uVar9, uVar12 < uVar1)
     ) {
    uVar12 = uVar1;
  }
  puVar6 = (int32_t *)FUN_1800ba8c0(uVar9,uVar12);
  puVar11 = (int32_t *)(((longlong)param_2 - lVar2 & 0xffffffffffffffe0U) + (longlong)puVar6);
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  uVar4 = param_3[1];
  *puVar11 = *param_3;
  puVar11[1] = uVar4;
  uVar4 = param_3[3];
  puVar11[2] = param_3[2];
  puVar11[3] = uVar4;
  param_3[3] = 0xf;
  *(int32_t *)param_3 = 0;
  param_3[2] = 0;
  puVar8 = (int32_t *)param_1[1];
  puVar7 = (int32_t *)*param_1;
  puVar10 = puVar6;
  if (param_2 == puVar8) {
    for (; puVar7 != puVar8; puVar7 = puVar7 + 4) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uVar4 = puVar7[1];
      *puVar10 = *puVar7;
      puVar10[1] = uVar4;
      uVar4 = puVar7[3];
      puVar10[2] = puVar7[2];
      puVar10[3] = uVar4;
      *(int32_t *)puVar7 = 0;
      puVar7[2] = 0;
      puVar7[3] = 0xf;
      puVar10 = puVar10 + 4;
    }
  }
  else {
    for (; puVar7 != param_2; puVar7 = puVar7 + 4) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uVar4 = puVar7[1];
      *puVar10 = *puVar7;
      puVar10[1] = uVar4;
      uVar4 = puVar7[3];
      puVar10[2] = puVar7[2];
      puVar10[3] = uVar4;
      *(int32_t *)puVar7 = 0;
      puVar7[2] = 0;
      puVar7[3] = 0xf;
      puVar10 = puVar10 + 4;
    }
    puVar8 = (int32_t *)param_1[1];
    puVar7 = puVar11;
    if (param_2 != puVar8) {
      do {
        puVar10 = puVar7 + 4;
        *puVar10 = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        uVar4 = param_2[1];
        *puVar10 = *param_2;
        puVar7[5] = uVar4;
        uVar4 = param_2[3];
        puVar7[6] = param_2[2];
        puVar7[7] = uVar4;
        *(int32_t *)param_2 = 0;
        param_2[2] = 0;
        param_2[3] = 0xf;
        param_2 = param_2 + 4;
        puVar7 = puVar10;
      } while (param_2 != puVar8);
    }
  }
  FUN_1800c6c70(param_1,(longlong)puVar6,uVar1,uVar12);
  return puVar11;
}
}

