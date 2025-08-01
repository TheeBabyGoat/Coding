#include "FUN_1800d8620.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800d8620(int32_t *param_1,longlong *param_2) {
LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  DWORD local_res10 [6];
  
  VirtualProtect(param_1,param_2[1] - *param_2,0x40,local_res10);
  FUN_180150fd0(param_1,(int32_t *)*param_2,param_2[1] - *param_2);
  VirtualProtect(param_1,param_2[1] - *param_2,local_res10[0],local_res10);
  pvVar1 = (LPVOID)*param_2;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (ulonglong)(param_2[2] - (longlong)pvVar1)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return;
}
}

