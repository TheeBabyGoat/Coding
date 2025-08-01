#include "FUN_1800b0670.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800b0670((longlong *)&local_6b8,(int32_t (*) [32])&local_5c8,
                      (int32_t (*) [32])local_5f);
      }
      else {
        in_stack_fffffffffffff8f8 = iVar29;
        FUN_1800b1670((longlong *)&local_6b8,(int32_t (*) [32])&local_5c8,
                      (int32_t (*) [32])local_5f,piVar24,iVar29);
      }
    }
    else {
      in_stack_fffffffffffff8f8 = iVar29;
      FUN_1800b3170((longlong *)&local_6b8,(int32_t (*) [32])&local_5c8,
                    (int32_t (*) [32])local_5f,piVar24,iVar29,local_6e0);
    }
    p_Stack_6c0 = p_Stack_6b0;
  }
  local_6d8 = &local_5c8;
  local_6f0 = (int)local_6b8 - (int)local_6d8;
  cVar21 = '\0';
  if (local_6f5 == '\0') {
if (local_6f7 != '\x02') {
      local_6f0 = local_6f0 + 1;
    }
  }
}

longlong * FUN_1800b0670(longlong *param_1,int32_t (*param_2) [32],int32_t (*param_3) [32]) {
longlong *plVar1;
  ulonglong uVar2;
  char *pcVar3;
  int32_t in_XMM3 [16];
  longlong local_18 [2];
  
  uVar2 = in_XMM3._0_8_;
  if (in_XMM3[7] < '\0') {
    if (param_2 == param_3) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    (*param_2)[0] = 0x2d;
    param_2 = (int32_t (*) [32])(*param_2 + 1);
    uVar2 = uVar2 & 0x7fffffffffffffff;
  }
  if ((uVar2 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if ((uVar2 & 0xfffffffffffff) == 0) {
      pcVar3 = "inf";
      uVar2 = 3;
    }
    else if ((in_XMM3[7] < '\0') && ((uVar2 & 0xfffffffffffff) == 0x8000000000000)) {
      pcVar3 = "nan(ind)";
      uVar2 = 8;
    }
    else if ((uVar2 & 0x8000000000000) == 0) {
      pcVar3 = "nan(snan)";
      uVar2 = 9;
    }
    else {
      pcVar3 = "nan";
      uVar2 = 3;
    }
    if ((longlong)param_3 - (longlong)param_2 < (longlong)uVar2) {
      *param_1 = (longlong)param_3;
      *(int32_t *)(param_1 + 1) = 0x84;
      return param_1;
    }
    FUN_180150fd0((int32_t *)param_2,(int32_t *)pcVar3,uVar2);
    *(int32_t *)(param_1 + 1) = 0;
    *param_1 = (longlong)(*param_2 + uVar2);
    return param_1;
  }
  plVar1 = FUN_1800b1490(local_18,param_2,param_3,uVar2,0);
  *param_1 = *plVar1;
  *(int *)(param_1 + 1) = (int)plVar1[1];
  return param_1;
}
}

