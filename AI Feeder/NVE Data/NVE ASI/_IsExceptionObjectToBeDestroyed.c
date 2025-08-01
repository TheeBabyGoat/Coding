#include "_IsExceptionObjectToBeDestroyed.h"
#include <stdint.h>
#include <stddef.h>

int32_t _IsExceptionObjectToBeDestroyed(longlong param_1) {
longlong lVar1;
  longlong *plVar2;
  
  lVar1 = __vcrt_getptd();
  plVar2 = *(longlong **)(lVar1 + 0x58);
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar2 == param_1) break;
    plVar2 = (longlong *)plVar2[1];
  }
  return 0;
}
}

