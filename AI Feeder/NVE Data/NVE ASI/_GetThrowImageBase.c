#include "_GetThrowImageBase.h"
#include <stdint.h>
#include <stddef.h>

int32_t _GetThrowImageBase(void) {
longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  return *(int32_t *)(lVar1 + 0x68);
}
}

