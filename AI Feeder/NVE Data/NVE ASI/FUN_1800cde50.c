#include "FUN_1800cde50.h"
#include <stdint.h>
#include <stddef.h>

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
}

void FUN_1800cde50(longlong *param_1) {
int iVar1;
  int32_t auStack_68 [32];
  longlong *local_48;
  longlong local_38;
  int32_t local_30 [32];
  ulonglong local_10;
  
  local_10 = DAT_1801eb080 ^ (ulonglong)auStack_68;
  if ((param_1[0xd] == 0) || (*(char *)((longlong)param_1 + 0x71) == '\0')) {
    FUN_1801252c0(local_10 ^ (ulonglong)auStack_68);
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
  if (iVar1 != -1) {
    local_48 = &local_38;
    iVar1 = (**(code **)(*(longlong *)param_1[0xd] + 0x40))
                      ((longlong *)param_1[0xd],(longlong)param_1 + 0x74,local_30,&local_10);
    if (iVar1 == 0) {
      *(int32_t *)((longlong)param_1 + 0x71) = 0;
    }
    else if (iVar1 != 1) {
      if (iVar1 == 3) {
        *(int32_t *)((longlong)param_1 + 0x71) = 0;
      }
      goto LAB_1800cdecc;
    }
    if (local_38 - (longlong)local_30 != 0) {
      FUN_18012e4a0(local_30,1,local_38 - (longlong)local_30,param_1[0x10]);
    }
  }
LAB_1800cdecc:
  FUN_1801252c0(local_10 ^ (ulonglong)auStack_68);
  return;
}
}

