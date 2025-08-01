#include "FUN_1800b7d30.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b7d30((longlong *)puVar3,(longlong *)param_1);
          local_78 = param_4;
          FUN_1800aa4a0((longlong)param_1,0,(longlong)puVar3 - (longlong)param_1 >> 5,
                        (uint *)&local_68);
          FUN_1800ba040((longlong *)&local_68);
          puVar3 = puVar3 + -4;
        } while (0x3f < (longlong)
                        ((0x20 - (longlong)param_1) + (longlong)puVar3 & 0xffffffffffffffe0U));
      }
      goto LAB_1800a9aad;
    }
    FUN_1800a9d30(&local_68,(uint *)param_1,(uint *)param_2);
    puVar1 = puStack_60;
    puVar3 = local_68;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_68 - (longlong)param_1 & 0xffffffffffffffe0U) <
        (longlong)((longlong)param_2 - (longlong)puStack_60 & 0xffffffffffffffe0U)) {
FUN_1800a98d0(param_1,local_68,param_3,param_4);
      puVar3 = param_2;
      param_1 = puVar1;
    }
}

 FUN_1800b7d30((longlong *)puVar7,(longlong *)(puVar7 + -4));
          puVar7 = puVar7 + -4;
        }
        if (param_1 != &local_58) {
if (7 < param_1[3]) {
            pvVar1 = (LPVOID)*param_1;
            pvVar6 = pvVar1;
            if ((0xfff < param_1[3] * 2 + 2) &&
               (pvVar6 = *(LPVOID *)((longlong)pvVar1 - 8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) {
LAB_1800a9d23:
              FUN_18012b7b4();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            thunk_FUN_18012d5e8(pvVar6);
          }
          *param_1 = local_58;
          param_1[1] = uStack_50;
          param_1[2] = local_48;
          param_1[3] = uStack_40;
LAB_1800a9cce:
          local_58 = local_58 & 0xffffffffffff0000;
          local_48 = uVar3;
          uStack_40 = uVar4;
        }
}

 FUN_1800b7d30((longlong *)(lVar4 * 0x20 + param_1),(longlong *)(lVar3 * 0x20 + param_1));
      lVar4 = lVar3;
    } while (lVar3 < lVar5);
  }
  if ((lVar3 == lVar5) && ((param_3 & 1) == 0)) {
FUN_1800b7d30((longlong *)(lVar3 * 0x20 + param_1),
                  (longlong *)(param_1 + -0x20 + param_3 * 0x20));
    lVar3 = param_3 - 1;
  }
}

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
}

longlong * FUN_1800b7d30(longlong *param_1,longlong *param_2) {
LPVOID pvVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  LPVOID pvVar5;
  
  if (param_1 != param_2) {
    if (7 < (ulonglong)param_1[3]) {
      pvVar1 = (LPVOID)*param_1;
      pvVar5 = pvVar1;
      if ((0xfff < param_1[3] * 2 + 2U) &&
         (pvVar5 = *(LPVOID *)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar5)))) {
        FUN_18012b7b4();
        pcVar2 = (code *)swi(3);
        plVar4 = (longlong *)(*pcVar2)();
        return plVar4;
      }
      thunk_FUN_18012d5e8(pvVar5);
    }
    param_1[3] = 7;
    param_1[2] = 0;
    *(int32_t *)param_1 = 0;
    lVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar3;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    param_2[2] = 0;
    param_2[3] = 7;
    *(int32_t *)param_2 = 0;
  }
  return param_1;
}
}

