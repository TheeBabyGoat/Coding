#include "FUN_1800cfce0.h"
#include <stdint.h>
#include <stddef.h>

uint * FUN_1800cfce0(uint *param_1,int32_t param_2,uint *param_3) {
short sVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  int32_t *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  
  lVar3 = DAT_1801fc920;
  lVar2 = *(longlong *)(param_3 + 4);
  puVar4 = param_3;
  if (7 < *(ulonglong *)(param_3 + 6)) {
    puVar4 = *(uint **)param_3;
  }
  if (((lVar2 == 0) ||
      (((3 < lVar2 * 2 && ((*puVar4 & 0xffffffdf) - 0x3a0041 < 0x1a)) || ((short)*puVar4 == 0x5c))))
     || ((short)*puVar4 == 0x2f)) {
    puVar4 = param_3;
    FUN_1800b9f10((int32_t *)param_1,&DAT_1801fc910);
    FUN_1800b84a0(param_1,param_3,puVar4);
    return param_1;
  }
  puVar7 = (uint *)&DAT_1801fc910;
  if (7 < DAT_1801fc928) {
    puVar7 = DAT_1801fc910;
  }
  if (DAT_1801fc920 == 2) {
    if (0x19 < (*puVar7 & 0xffffffdf) - 0x3a0041) {
LAB_1800cfdd4:
      sVar1 = *(short *)((longlong)puVar7 + DAT_1801fc920 * 2 + -2);
      if ((sVar1 != 0x5c) && (sVar1 != 0x2f)) {
        lVar8 = 1;
        goto LAB_1800cfd96;
      }
    }
  }
  else if (DAT_1801fc920 != 0) goto LAB_1800cfdd4;
  lVar8 = 0;
LAB_1800cfd96:
  uVar6 = lVar8 + DAT_1801fc920 + lVar2;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 7;
  param_1[7] = 0;
  *(int32_t *)param_1 = 0;
  if (uVar6 < 8) {
    *(ulonglong *)(param_1 + 4) = uVar6;
  }
  else {
    FUN_1800cfb70((int32_t *)param_1,uVar6);
  }
  puVar9 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar9 = *(uint **)param_1;
  }
  FUN_180150fd0((int32_t *)puVar9,(int32_t *)puVar7,lVar3 * 2);
  puVar5 = (int32_t *)(lVar3 * 2 + (longlong)puVar9);
  if ((char)lVar8 != '\0') {
    *(int32_t *)puVar5 = 0x5c;
    puVar5 = (int32_t *)((longlong)puVar5 + 2);
  }
  FUN_180150fd0(puVar5,(int32_t *)puVar4,lVar2 * 2);
  *(ulonglong *)(param_1 + 4) = uVar6;
  puVar4 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar4 = *(uint **)param_1;
  }
  *(int32_t *)((longlong)puVar4 + uVar6 * 2) = 0;
  return param_1;
}
}

