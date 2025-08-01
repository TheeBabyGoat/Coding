#include "FUN_1800cd640.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800cd640(longlong *param_1) {
longlong lVar1;
  longlong lVar2;
  LPVOID pvVar3;
  int32_t *puVar4;
  
  *param_1 = (longlong)&PTR_LAB_1801cc438;
  if ((param_1[0x10] != 0) && (*(longlong **)param_1[3] == param_1 + 0xe)) {
    lVar1 = param_1[0x12];
    lVar2 = param_1[0x11];
    *(longlong *)param_1[3] = lVar2;
    *(longlong *)param_1[7] = lVar2;
    *(int *)param_1[10] = (int)lVar1 - (int)lVar2;
  }
  if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
    if (param_1[0x10] != 0) {
      if (*(longlong **)param_1[3] == param_1 + 0xe) {
        lVar1 = param_1[0x12];
        lVar2 = param_1[0x11];
        *(longlong *)param_1[3] = lVar2;
        *(longlong *)param_1[7] = lVar2;
        *(int *)param_1[10] = (int)lVar1 - (int)lVar2;
      }
      FUN_1800cde50(param_1);
      FUN_18012f050((int *)param_1[0x10]);
    }
    *(int32_t *)((longlong)param_1 + 0x7c) = 0;
    *(int32_t *)((longlong)param_1 + 0x71) = 0;
    param_1[3] = (longlong)(param_1 + 1);
    param_1[4] = (longlong)(param_1 + 2);
    param_1[7] = (longlong)(param_1 + 5);
    param_1[8] = (longlong)(param_1 + 6);
    param_1[10] = (longlong)(param_1 + 9);
    param_1[0xb] = (longlong)param_1 + 0x4c;
    param_1[2] = 0;
    param_1[6] = 0;
    *(int32_t *)((longlong)param_1 + 0x4c) = 0;
    *(int32_t *)param_1[3] = 0;
    *(int32_t *)param_1[7] = 0;
    *(int32_t *)param_1[10] = 0;
    param_1[0x10] = 0;
    *(int32_t *)((longlong)param_1 + 0x74) = DAT_1801fc930;
    param_1[0xd] = 0;
  }
  *param_1 = (longlong)&PTR_FUN_1801cc3c0;
  pvVar3 = (LPVOID)param_1[0xc];
  if (pvVar3 != (LPVOID)0x0) {
    if (*(longlong **)((longlong)pvVar3 + 8) != (longlong *)0x0) {
      puVar4 = (int32_t *)(**(code **)(**(longlong **)((longlong)pvVar3 + 8) + 0x10))();
      if (puVar4 != (int32_t *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    thunk_FUN_18012d5e8(pvVar3);
    return;
  }
  return;
}
}

 FUN_1800cd640((longlong *)(param_1 + -0xa0));
  *(int32_t ***)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0xb0) =
       &PTR_LAB_1801cc4b0;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)piVar1 + 4) + -0xb4) =
       *(int *)(*(longlong *)piVar1 + 4) + -0x18;
  *(int32_t ***)param_1 = &PTR_LAB_1801cc4d0;
  std::ios_base::_Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
thunk_FUN_18012d5e8(piVar1);
  }
}

