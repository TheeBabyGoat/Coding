#include "FUN_1800b8810.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b8810(int32_t *param_1,uint *param_2) {
uint *puVar1;
  short sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int32_t auStack_68 [40];
  uint local_40 [8];
  ulonglong local_20;
  
  local_20 = DAT_1801eb080 ^ (ulonglong)auStack_68;
  *(uint *)(param_1 + 2) = *param_2;
  *(uint *)((longlong)param_1 + 0x14) = param_2[9];
  *(int32_t *)((longlong)param_1 + 0x1c) = 6;
  if ((*param_2 & 0x400) == 0) {
    param_1[1] = CONCAT44(param_2[7],param_2[8]);
    *param_1 = *(int32_t *)(param_2 + 5);
    *(int32_t *)((longlong)param_1 + 0x1c) = 0x2e;
  }
  puVar1 = (uint *)(param_1 + 4);
  uVar11 = 0xffffffffffffffff;
  do {
    uVar11 = uVar11 + 1;
  } while (*(short *)((longlong)(param_2 + 0xb) + uVar11 * 2) != 0);
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  local_40[7] = 0;
  FUN_1800b86e0((int32_t *)local_40,(int32_t *)(param_2 + 0xb),uVar11);
  uVar3 = param_1[7];
  puVar8 = puVar1;
  if (7 < uVar3) {
    puVar8 = *(uint **)puVar1;
  }
  uVar4 = param_1[6];
  puVar9 = (uint *)((longlong)puVar8 + uVar4 * 2);
  puVar7 = FUN_1800b7dd0(puVar8,puVar9);
  if (puVar7 == puVar9) {
LAB_1800b890d:
    uVar10 = (longlong)puVar9 - (longlong)puVar8 >> 1;
    if (uVar10 <= uVar4) {
      param_1[6] = uVar10;
      puVar8 = puVar1;
      if (7 < uVar3) {
        puVar8 = *(uint **)puVar1;
      }
      *(int32_t *)((longlong)puVar8 + uVar10 * 2) = 0;
      FUN_1800b84a0(puVar1,local_40,uVar11);
      FUN_1800ba040((longlong *)local_40);
      FUN_1801252c0(local_20 ^ (ulonglong)auStack_68);
      return;
    }
    FUN_1800b7330();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  do {
    puVar6 = puVar9;
    if (((short)*puVar7 != 0x5c) && ((short)*puVar7 != 0x2f)) break;
    puVar7 = (uint *)((longlong)puVar7 + 2);
  } while (puVar7 != puVar9);
  do {
    puVar9 = puVar6;
    if (puVar7 == puVar9) goto LAB_1800b890d;
    sVar2 = *(short *)((longlong)puVar9 + -2);
    if ((sVar2 == 0x5c) || (puVar6 = (uint *)((longlong)puVar9 + -2), sVar2 == 0x2f))
    goto LAB_1800b890d;
  } while( true );
}
}

