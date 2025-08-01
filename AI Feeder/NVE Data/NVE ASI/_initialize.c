#include "_initialize.h"
#include <stdint.h>
#include <stddef.h>

int32_t _initialize_onexit_table(longlong *param_1) {
longlong lVar1;
  
  lVar1 = DAT_1801eb080;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_1801eb080;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  return 0;
}
}

