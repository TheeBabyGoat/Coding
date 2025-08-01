#include "FUN_1800b8980.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800b8980(int32_t *param_1,longlong *param_2) {
longlong *plVar1;
  longlong lVar2;
  LPVOID pvVar3;
  code *pcVar4;
  int32_t *puVar5;
  LPVOID pvVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar1 = param_1 + 4;
  param_1[6] = 0;
  param_1[7] = 0;
  *plVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 7;
  *(int32_t *)plVar1 = 0;
  lVar2 = param_2[4];
  param_2[4] = -1;
  param_1[8] = lVar2;
  if (plVar1 != param_2) {
    if (7 < (ulonglong)param_1[7]) {
      pvVar3 = (LPVOID)*plVar1;
      pvVar6 = pvVar3;
      if ((0xfff < param_1[7] * 2 + 2U) &&
         (pvVar6 = *(LPVOID *)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6)))) {
        FUN_18012b7b4();
        pcVar4 = (code *)swi(3);
        puVar5 = (int32_t *)(*pcVar4)();
        return puVar5;
      }
      thunk_FUN_18012d5e8(pvVar6);
    }
    param_1[6] = 0;
    param_1[7] = 7;
    *(int32_t *)plVar1 = 0;
    lVar2 = param_2[1];
    *plVar1 = *param_2;
    param_1[5] = lVar2;
    lVar2 = param_2[3];
    param_1[6] = param_2[2];
    param_1[7] = lVar2;
    param_2[2] = 0;
    param_2[3] = 7;
    *(int32_t *)param_2 = 0;
  }
  FUN_1800b8810(param_1,(uint *)(param_2 + 5));
  return param_1;
}
}

 FUN_1800b8980(puVar7 + 2,(longlong *)local_2b8);
    *param_1 = puVar7 + 2;
    plVar3 = (longlong *)param_1[1];
    param_1[1] = puVar7;
    if (plVar3 != (longlong *)0x0) {
LOCK();
      plVar1 = plVar3 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
}

