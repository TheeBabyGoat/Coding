#include "_CreateFrameInfo.h"
#include <stdint.h>
#include <stddef.h>

int32_t * _CreateFrameInfo(int32_t *param_1,int32_t param_2) {
longlong lVar1;
  int32_t uVar2;
  
  *param_1 = param_2;
  lVar1 = __vcrt_getptd();
  if (param_1 < *(int32_t **)(lVar1 + 0x58)) {
    lVar1 = __vcrt_getptd();
    uVar2 = *(int32_t *)(lVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  lVar1 = __vcrt_getptd();
  *(int32_t **)(lVar1 + 0x58) = param_1;
  return param_1;
}
}

