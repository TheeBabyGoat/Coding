#include "FUN_1800b84a0.h"
#include <stdint.h>
#include <stddef.h>

uint * FUN_1800b84a0(uint *param_1,uint *param_2,int32_t param_3) {
uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  
  uVar9 = *(ulonglong *)(param_2 + 6);
  puVar7 = param_2;
  if (7 < uVar9) {
    puVar7 = *(uint **)param_2;
  }
  lVar2 = *(longlong *)(param_2 + 4);
  lVar10 = lVar2 * 2;
  lVar8 = lVar10 >> 1;
  if ((lVar8 < 2) || (0x19 < (*puVar7 & 0xffffffdf) - 0x3a0041)) {
    puVar6 = FUN_1800b7dd0(puVar7,(uint *)(lVar10 + (longlong)puVar7));
    if (puVar7 != puVar6) goto LAB_1800b8602;
  }
  else if ((2 < lVar8) && (((short)puVar7[1] == 0x5c || ((short)puVar7[1] == 0x2f)))) {
LAB_1800b8602:
    puVar7 = (uint *)FUN_1800b8040((longlong *)param_1,(longlong *)param_2,param_3);
    return puVar7;
  }
  puVar7 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar7 = *(uint **)param_1;
  }
  puVar6 = (uint *)((longlong)puVar7 + *(longlong *)(param_1 + 4) * 2);
  puVar11 = param_2;
  if (7 < uVar9) {
    puVar11 = *(uint **)param_2;
  }
  puVar1 = (uint *)((longlong)puVar11 + lVar2 * 2);
  puVar4 = FUN_1800b7dd0(puVar7,puVar6);
  puVar5 = FUN_1800b7dd0(puVar11,puVar1);
  if (puVar11 != puVar5) {
    uVar12 = (longlong)puVar5 - (longlong)puVar11 >> 1;
    uVar13 = (longlong)puVar4 - (longlong)puVar7 >> 1;
    uVar9 = uVar13;
    if (uVar12 < uVar13) {
      uVar9 = uVar12;
    }
    if (uVar9 != 0) {
      lVar10 = (longlong)puVar7 - (longlong)puVar11;
      do {
        if (*(short *)(lVar10 + (longlong)puVar11) != (short)*puVar11) goto LAB_1800b8617;
        puVar11 = (uint *)((longlong)puVar11 + 2);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if ((uVar13 < uVar12) || (uVar12 < uVar13)) {
LAB_1800b8617:
      puVar7 = (uint *)FUN_1800b8040((longlong *)param_1,(longlong *)param_2,uVar12);
      return puVar7;
    }
  }
  puVar14 = (ulonglong *)(param_1 + 4);
  if ((puVar5 == puVar1) || (((short)*puVar5 != 0x5c && ((short)*puVar5 != 0x2f)))) {
    if (puVar4 == puVar6) {
      if ((longlong)((longlong)puVar4 - (longlong)puVar7 & 0xfffffffffffffffeU) < 6)
      goto LAB_1800b869f;
      uVar9 = *puVar14;
    }
    else {
      if ((*(short *)((longlong)puVar6 + -2) == 0x5c) || (*(short *)((longlong)puVar6 + -2) == 0x2f)
         ) goto LAB_1800b869f;
      uVar9 = *(ulonglong *)(param_1 + 4);
    }
    if (uVar9 < *(ulonglong *)(param_1 + 6)) {
      *(ulonglong *)(param_1 + 4) = uVar9 + 1;
      puVar7 = param_1;
      if (7 < *(ulonglong *)(param_1 + 6)) {
        puVar7 = *(uint **)param_1;
      }
      *(int32_t *)((longlong)puVar7 + uVar9 * 2) = 0x5c;
    }
    else {
      FUN_1800b80c0((int32_t *)param_1,1,(ulonglong)puVar6 & 0xff,0x5c);
    }
  }
  else {
    uVar9 = (longlong)puVar4 - (longlong)puVar7 >> 1;
    if (*puVar14 < uVar9) {
      FUN_1800b7330();
      pcVar3 = (code *)swi(3);
      puVar7 = (uint *)(*pcVar3)();
      return puVar7;
    }
    *puVar14 = uVar9;
    puVar7 = param_1;
    if (7 < *(ulonglong *)(param_1 + 6)) {
      puVar7 = *(uint **)param_1;
    }
    *(int32_t *)((longlong)puVar7 + uVar9 * 2) = 0;
  }
LAB_1800b869f:
  FUN_1800b8410((int32_t *)param_1,(int32_t *)puVar5,(longlong)puVar1 - (longlong)puVar5 >> 1)
  ;
  return param_1;
}
}

