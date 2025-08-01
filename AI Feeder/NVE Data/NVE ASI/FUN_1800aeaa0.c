#include "FUN_1800aeaa0.h"
#include <stdint.h>
#include <stddef.h>

longlong * FUN_1800aeaa0(longlong *param_1,char *param_2,char *param_3,uint param_4,int param_5) {
ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  char *local_28;
  int32_t local_20;
  
  if (param_4 == 0) {
    if (param_5 == 1) {
      if (4 < (longlong)param_3 - (longlong)param_2) {
        param_3 = param_2 + 5;
        *(int32_t *)param_2 = DAT_18018316c;
        param_2[4] = DAT_180183170;
        local_20 = 0;
        goto LAB_1800aeb8e;
      }
    }
    else if (param_2 != param_3) {
      *param_2 = '0';
      param_3 = param_2 + 1;
      local_20 = 0;
      goto LAB_1800aeb8e;
    }
    local_20 = 0x84;
  }
  else {
    uVar2 = param_4 & 0x7fffff;
    uVar3 = param_4 >> 0x17;
    if ((param_5 == 2) && (0 < (int)(uVar3 - 0x96))) {
      FUN_1800ae4a0((longlong *)&local_28,param_2,(longlong)param_3,uVar2 | 0x800000,uVar3 - 0x96);
      param_3 = local_28;
    }
    else {
      uVar1 = FUN_1800adf10(uVar2,uVar3);
      FUN_1800ae6e0((longlong *)&local_28,param_2,(longlong)param_3,uVar1,param_5,uVar2,uVar3);
      param_3 = local_28;
    }
  }
LAB_1800aeb8e:
  *param_1 = (longlong)param_3;
  *(int32_t *)(param_1 + 1) = local_20;
  return param_1;
}
}

 FUN_1800aeaa0(param_1,param_2,param_3,uVar3,param_5);
    return param_1;
  }
  if (uVar3 == 0) {
if (3 < (longlong)param_3 - (longlong)param_2) {
      builtin_strncpy(param_2,"0p+0",4);
      *param_1 = (longlong)(param_2 + 4);
      *(int32_t *)(param_1 + 1) = 0;
      return param_1;
    }
  }
}

