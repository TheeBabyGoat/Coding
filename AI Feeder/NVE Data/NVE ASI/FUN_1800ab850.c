#include "FUN_1800ab850.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800ab850(longlong param_1,int32_t *param_2,ulonglong param_3) {
longlong lVar1;
  ulonglong uVar2;
  int32_t *puVar3;
  
  if (param_3 < *(ulonglong *)(param_1 + 8)) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar2 = *(ulonglong *)(lVar1 + param_3 * 8);
    if ((byte)(uVar2 >> 0x3c) < 0xe) {
                    
                    
      puVar3 = (int32_t *)
               (*(code *)((ulonglong)*(uint *)(&DAT_1800ab978 + (uVar2 >> 0x3c) * 4) + 0x180000000))
                         (lVar1,param_2,(uVar2 & 0xfffffffffffffff) + lVar1);
      return puVar3;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}
}

