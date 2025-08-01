#include "FUN_1800c53d0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c53d0(longlong param_1,int32_t param_2,int32_t *param_3) {
int32_t *puVar1;
  longlong *plVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t local_res10;
  longlong local_res20;
  
  plVar2 = DAT_1801f3ad8;
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    puVar1 = *(int32_t **)(param_1 + 0x18);
    local_res10 = param_2;
    for (puVar4 = *(int32_t **)(param_1 + 0x10); puVar4 != puVar1; puVar4 = puVar4 + 4) {
      puVar5 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar5 = (int32_t *)*puVar4;
      }
      (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res20,puVar5,*(int32_t *)(param_1 + 8));
      uVar3 = local_res10;
      if (local_res20 != 0) {
        local_res10._4_4_ = SUB84(uVar3,4);
        local_res10._0_4_ = (uint)CONCAT21(1,*param_3);
        (**(code **)(*plVar2 + 0x100))(plVar2,local_res20,&local_res10,4,0);
      }
    }
  }
  return;
}
}

