#include "FUN_1800cf710.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800cf710(int32_t *param_1,ulonglong param_2) {
LPVOID pvVar1;
  int32_t *puVar2;
  
  pvVar1 = (LPVOID)param_1[0xc];
  *param_1 = &PTR_FUN_1801cc3c0;
  if (pvVar1 != (LPVOID)0x0) {
    if (*(longlong **)((longlong)pvVar1 + 8) != (longlong *)0x0) {
      puVar2 = (int32_t *)(**(code **)(**(longlong **)((longlong)pvVar1 + 8) + 0x10))();
      if (puVar2 != (int32_t *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    thunk_FUN_18012d5e8(pvVar1);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_18012d5e8(param_1);
  }
  return param_1;
}
}

