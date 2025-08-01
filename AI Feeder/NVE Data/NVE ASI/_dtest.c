#include "_dtest.h"
#include <stdint.h>
#include <stddef.h>

short _dtest(short *param_1) {
short sVar1;
  
  if ((param_1[3] & 0x7ff0U) == 0x7ff0) {
    if ((((*(byte *)(param_1 + 3) & 0xf) != 0) || (param_1[2] != 0)) ||
       ((param_1[1] != 0 || (sVar1 = 1, *param_1 != 0)))) {
      return 2;
    }
  }
  else if (((((param_1[3] & 0x7fffU) != 0) || (sVar1 = 0, param_1[2] != 0)) || (param_1[1] != 0)) ||
          (*param_1 != 0)) {
    sVar1 = ((param_1[3] & 0x7ff0U) != 0) - 2;
  }
  return sVar1;
}
}

