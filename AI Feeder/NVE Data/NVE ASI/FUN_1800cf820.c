#include "FUN_1800cf820.h"
#include <stdint.h>
#include <stddef.h>

longlong FUN_1800cf820(longlong *param_1,int32_t *param_2,ulonglong param_3) {
int *piVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = param_3;
  if (0 < (longlong)param_3) {
    do {
      if ((*(int32_t **)param_1[7] == (int32_t *)0x0) ||
         (iVar3 = *(int *)param_1[10], iVar3 < 1)) {
        iVar3 = (**(code **)(*param_1 + 0x38))(param_1);
        if (iVar3 == -1) break;
        *(char *)param_2 = (char)iVar3;
        lVar2 = -1;
        uVar5 = 1;
      }
      else {
        uVar5 = uVar4;
        if ((longlong)iVar3 <= (longlong)uVar4) {
          uVar5 = (longlong)iVar3;
        }
        FUN_180150fd0(param_2,*(int32_t **)param_1[7],uVar5);
        piVar1 = (int *)param_1[10];
        lVar2 = -uVar5;
        *piVar1 = *piVar1 - (int)uVar5;
        *(longlong *)param_1[7] = *(longlong *)param_1[7] + (longlong)(int)uVar5;
      }
      uVar4 = uVar4 + lVar2;
      param_2 = (int32_t *)((longlong)param_2 + uVar5);
    } while (0 < (longlong)uVar4);
  }
  return param_3 - uVar4;
}
}

