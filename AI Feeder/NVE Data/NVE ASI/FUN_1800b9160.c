#include "FUN_1800b9160.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b9160(int32_t *param_1,ulonglong param_2,byte param_3) {
ulonglong uVar1;
  ulonglong uVar2;
  byte local_res8;
  
  uVar1 = param_1[2];
  if (param_2 <= uVar1) {
    param_1[2] = param_2;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (int32_t *)*param_1;
    }
    *(int32_t *)((longlong)param_1 + param_2) = 0;
    return;
  }
  uVar2 = param_2 - uVar1;
  if (uVar2 <= param_1[3] - uVar1) {
    param_1[2] = param_2;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (int32_t *)*param_1;
    }
    FUN_180151670((int32_t (*) [32])(uVar1 + (longlong)param_1),param_3,uVar2);
    *(int32_t *)((longlong)(uVar1 + (longlong)param_1) + uVar2) = 0;
    return;
  }
  FUN_1800b8fd0(param_1,uVar2,(ulonglong)local_res8,uVar2,param_3);
  return;
}
}

 FUN_1800b9160(puVar4,param_1[0x4e] * 2,0x20);
      }
      puVar9 = (int32_t *)**(longlong **)(param_2 + 8);
      if (puVar9 != (int32_t *)((*(longlong **)(param_2 + 8))[1] + -0x10)) {
do {
          puVar6 = puVar4;
          if (0xf < (ulonglong)param_1[0x4f]) {
            puVar6 = (int32_t *)*puVar4;
          }
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,puVar6,(ulonglong)uVar14);
          FUN_1800eba90(param_1,puVar9,'\x01',0,param_5,uVar14);
          (**(code **)(*(longlong *)*param_1 + 8))((longlong *)*param_1,&DAT_1801d67cc,2);
          puVar9 = puVar9 + 0x10;
        } while (puVar9 != (int32_t *)(*(longlong *)(*(longlong *)(param_2 + 8) + 8) + -0x10));
      }
}

 FUN_1800b9160(puVar4,param_1[0x4e] * 2,0x20);
      }
      if (0xf < (ulonglong)param_1[0x4f]) {
puVar4 = (int32_t *)*puVar4;
      }
}

