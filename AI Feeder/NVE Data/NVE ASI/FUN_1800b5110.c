#include "FUN_1800b5110.h"
#include <stdint.h>
#include <stddef.h>

byte * FUN_1800b5110(int32_t *param_1,int *param_2) {
int iVar1;
  uint uVar2;
  longlong *plVar3;
  int32_t *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  ulonglong uVar10;
  longlong local_58 [2];
  byte *local_48;
  byte *local_40;
  longlong local_38;
  uint local_30 [2];
  int32_t local_28;
  
  local_48 = (byte *)*param_1;
  iVar1 = *param_2;
  pbVar9 = local_48 + param_1[1];
  local_38 = 0;
  local_30[0] = 0;
  local_40 = pbVar9;
  if (local_48 != pbVar9) {
    plVar3 = FUN_1800b7820(local_58,local_48,pbVar9,local_30);
    local_38 = *plVar3;
  }
  local_28 = 0;
  iVar8 = 0;
  iVar7 = 0;
  if (local_48 == local_40) {
LAB_1800b525f:
    *param_2 = iVar8;
    return local_48;
  }
  do {
    iVar8 = iVar7;
    if ((iVar8 == iVar1) && (-1 < iVar1)) goto LAB_1800b525f;
    if (local_30[0] < 0x25fd) {
      uVar2 = 1;
      puVar5 = &DAT_180184f70;
      do {
        if (local_30[0] < *puVar5) goto LAB_1800b5227;
        uVar2 = uVar2 ^ 3;
        puVar5 = puVar5 + 1;
      } while (puVar5 != (uint *)&DAT_180185298);
      uVar2 = 1;
    }
    else {
      puVar4 = &DAT_180184f70;
      uVar6 = 0xca;
      do {
        uVar10 = uVar6 >> 1;
        if ((uint)puVar4[uVar10] <= local_30[0]) {
          puVar4 = puVar4 + uVar10 + 1;
          uVar10 = uVar6 + (-1 - uVar10);
        }
        uVar6 = uVar10;
      } while (0 < (longlong)uVar10);
      uVar2 = ((uint)((longlong)(puVar4 + -0x600613dc) >> 2) & 1) + 1;
    }
LAB_1800b5227:
    if ((int)(0x7fffffff - uVar2) < iVar8) {
      if (iVar1 < 0) {
        *param_2 = 0x7fffffff;
        return pbVar9;
      }
      goto LAB_1800b525f;
    }
    iVar7 = iVar8 + uVar2;
    if (((iVar1 < iVar7) && (-1 < iVar1)) ||
       (FUN_1800b4dd0((longlong *)&local_48), iVar8 = iVar7, local_48 == local_40))
    goto LAB_1800b525f;
  } while( true );
}
}

