#include "FUN_1800cb100.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800cb100((longlong *)(puVar10 + 0xc));
          thunk_FUN_18012d5e8(puVar10);
          plVar6 = local_88;
        }
        else {
          puVar11 = (ulonglong *)*puVar10;
        }
        puVar10 = puVar11;
      } while (puVar11 != (ulonglong *)local_res10[5]);
    }
    for (plVar8 = (longlong *)*plVar6; plVar8 != plVar6; plVar8 = (longlong *)*plVar8) {
plVar7 = FUN_1800ca060((float *)(local_res10 + 4),local_d8,(ulonglong *)(plVar8 + 2));
      lVar3 = *plVar7;
      lVar4 = plVar8[4];
      *(longlong *)(lVar3 + 0x18) = plVar8[3];
      *(longlong *)(lVar3 + 0x20) = lVar4;
      lVar4 = plVar8[6];
      *(longlong *)(lVar3 + 0x28) = plVar8[5];
      *(longlong *)(lVar3 + 0x30) = lVar4;
      *(int *)(lVar3 + 0x38) = (int)plVar8[7];
      uVar5 = *(int32_t *)((longlong)plVar8 + 0x44);
      *(int32_t *)(lVar3 + 0x3c) = *(int32_t *)((longlong)plVar8 + 0x3c);
      *(int32_t *)(lVar3 + 0x44) = uVar5;
      uVar5 = *(int32_t *)((longlong)plVar8 + 0x54);
      *(int32_t *)(lVar3 + 0x4c) = *(int32_t *)((longlong)plVar8 + 0x4c);
      *(int32_t *)(lVar3 + 0x54) = uVar5;
      *(int32_t *)(lVar3 + 0x5c) = *(int32_t *)((longlong)plVar8 + 0x5c);
      puVar10 = (ulonglong *)(plVar8 + 0xc);
      if ((ulonglong *)(lVar3 + 0x60) != puVar10) {
        FUN_1800ca5d0((ulonglong *)(lVar3 + 0x60),(int32_t *)*puVar10,
                      (longlong)(plVar8[0xd] - *puVar10) / 0x28);
      }
      *(char *)(lVar3 + 0x78) = (char)plVar8[0xf];
      *(int32_t *)(lVar3 + 0x79) = *(int32_t *)((longlong)plVar8 + 0x79);
      *(ulonglong *)(lVar3 + 0x80) = *local_res10;
      if (*(longlong *)(lVar3 + 0x88) == -1) {
        *(ulonglong *)(lVar3 + 0x88) = *local_res10;
      }
    }
}

 FUN_1800cb100((longlong *)(*(longlong *)(param_1 + 8) + 0x60));
  }
  if (*(LPVOID *)(param_1 + 8) != (LPVOID)0x0) {
thunk_FUN_18012d5e8(*(LPVOID *)(param_1 + 8));
    return;
  }
}

 FUN_1800cb100((longlong *)(*(longlong *)(param_1 + 8) + 0x60));
  }
  if (*(LPVOID *)(param_1 + 8) != (LPVOID)0x0) {
thunk_FUN_18012d5e8(*(LPVOID *)(param_1 + 8));
    return;
  }
}

void FUN_1800cb100(longlong *param_1) {
LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = (LPVOID)*param_1;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar1) / 0x28) * 0x28)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
}

