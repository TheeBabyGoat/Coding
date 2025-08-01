#include "FUN_1800ca5d0.h"
#include <stdint.h>
#include <stddef.h>

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

void FUN_1800ca5d0(ulonglong *param_1,int32_t *param_2,ulonglong param_3) {
code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  
  puVar5 = (int32_t *)*param_1;
  uVar2 = (longlong)(param_1[2] - (longlong)puVar5) / 0x28;
  if (uVar2 < param_3) {
    if (0x666666666666666 < param_3) {
      FUN_1800aa480();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 0x666666666666666;
    if ((uVar2 <= 0x666666666666666 - (uVar2 >> 1)) &&
       (uVar3 = uVar2 + (uVar2 >> 1), uVar3 < param_3)) {
      uVar3 = param_3;
    }
    if (puVar5 != (int32_t *)0x0) {
      puVar4 = puVar5;
      if ((0xfff < uVar2 * 0x28) &&
         (puVar4 = (int32_t *)puVar5[-1],
         0x1f < (ulonglong)((longlong)puVar5 + (-8 - (longlong)puVar4)))) {
        FUN_18012b7b4();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      thunk_FUN_18012d5e8(puVar4);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    FUN_1800ca8d0(param_1,uVar3);
    puVar5 = (int32_t *)*param_1;
    uVar2 = param_3 * 0x28;
    FUN_180150fd0(puVar5,param_2,uVar2);
  }
  else {
    uVar2 = (longlong)(param_1[1] - (longlong)puVar5) / 0x28;
    if (uVar2 < param_3) {
      FUN_180150fd0(puVar5,param_2,uVar2 * 0x28);
      puVar5 = (int32_t *)param_1[1];
      param_2 = param_2 + uVar2 * 5;
      param_3 = param_3 - uVar2;
    }
    uVar2 = param_3 * 0x28;
    FUN_180150fd0(puVar5,param_2,uVar2);
  }
  param_1[1] = uVar2 + (longlong)puVar5;
  return;
}
}

