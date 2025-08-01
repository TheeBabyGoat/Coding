#include "FUN_1800c78f0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c78f0(longlong *param_1) {
LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  LPVOID local_res8;
  
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1e0,&local_res8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1e0,&local_res8);
  if (local_res8 != (LPVOID)0x0) {
    FUN_1800c8fd0((longlong)local_res8 + 0x20);
    pvVar1 = *(LPVOID *)((longlong)local_res8 + 8);
    if (pvVar1 != (LPVOID)0x0) {
      pvVar3 = pvVar1;
      if ((0xfff < (*(longlong *)((longlong)local_res8 + 0x18) - (longlong)pvVar1 &
                   0xfffffffffffffff8U)) &&
         (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
        FUN_18012b7b4();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      thunk_FUN_18012d5e8(pvVar3);
      *(int32_t *)((longlong)local_res8 + 8) = 0;
      *(int32_t *)((longlong)local_res8 + 0x10) = 0;
      *(int32_t *)((longlong)local_res8 + 0x18) = 0;
    }
    thunk_FUN_18012d5e8(local_res8);
  }
  (**(code **)(*param_1 + 0x10))(param_1,&DAT_1801cc1e0,0);
  return;
}
}

