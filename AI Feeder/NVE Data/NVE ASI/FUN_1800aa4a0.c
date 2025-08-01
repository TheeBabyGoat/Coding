#include "FUN_1800aa4a0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800aa4a0((longlong)param_1,lVar4,uVar2,(uint *)&local_68);
          FUN_1800ba040((longlong *)&local_68);
          puVar3 = puVar3 + -4;
        } while (0 < lVar4);
      }
      if (1 < (longlong)uVar2) {
puVar3 = param_2 + -4;
        do {
          local_68 = (ulonglong *)*puVar3;
          puStack_60 = (ulonglong *)puVar3[1];
          local_58 = puVar3[2];
          uStack_50 = puVar3[3];
          *(int32_t *)puVar3 = 0;
          puVar3[2] = 0;
          puVar3[3] = 7;
          FUN_1800b7d30((longlong *)puVar3,(longlong *)param_1);
          local_78 = param_4;
          FUN_1800aa4a0((longlong)param_1,0,(longlong)puVar3 - (longlong)param_1 >> 5,
                        (uint *)&local_68);
          FUN_1800ba040((longlong *)&local_68);
          puVar3 = puVar3 + -4;
        } while (0x3f < (longlong)
                        ((0x20 - (longlong)param_1) + (longlong)puVar3 & 0xffffffffffffffe0U));
      }
}

void FUN_1800aa4a0(longlong param_1,longlong param_2,ulonglong param_3,uint *param_4) {
int iVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint *local_38;
  int32_t local_30;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  lVar3 = param_2;
  if (param_2 < lVar5) {
    do {
      puVar2 = (uint *)((lVar4 * 2 + 2) * 0x20 + param_1);
      local_38 = puVar2 + -8;
      if (7 < *(ulonglong *)(puVar2 + -2)) {
        local_38 = *(uint **)(puVar2 + -8);
      }
      local_30 = *(int32_t *)(puVar2 + -4);
      iVar1 = FUN_1800aa740(puVar2,&local_38);
      if ((iVar1 != 0) && (bVar6 = -1 < iVar1, iVar1 = 0xff, bVar6)) {
        iVar1 = 1;
      }
      lVar3 = lVar4 * 2 + ((longlong)(char)iVar1 >> 0x3f) + 2;
      FUN_1800b7d30((longlong *)(lVar4 * 0x20 + param_1),(longlong *)(lVar3 * 0x20 + param_1));
      lVar4 = lVar3;
    } while (lVar3 < lVar5);
  }
  if ((lVar3 == lVar5) && ((param_3 & 1) == 0)) {
    FUN_1800b7d30((longlong *)(lVar3 * 0x20 + param_1),
                  (longlong *)(param_1 + -0x20 + param_3 * 0x20));
    lVar3 = param_3 - 1;
  }
  while (param_2 < lVar3) {
    lVar4 = lVar3 + -1 >> 1;
    local_38 = param_4;
    if (7 < *(ulonglong *)(param_4 + 6)) {
      local_38 = *(uint **)param_4;
    }
    local_30 = *(int32_t *)(param_4 + 4);
    puVar2 = (uint *)(lVar4 * 0x20 + param_1);
    iVar1 = FUN_1800aa740(puVar2,&local_38);
    if ((iVar1 == 0) || (-1 < iVar1)) break;
    FUN_1800b7d30((longlong *)(lVar3 * 0x20 + param_1),(longlong *)puVar2);
    lVar3 = lVar4;
  }
  FUN_1800b7d30((longlong *)(lVar3 * 0x20 + param_1),(longlong *)param_4);
  return;
}
}

