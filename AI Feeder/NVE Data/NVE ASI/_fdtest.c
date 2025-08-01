#include "_fdtest.h"
#include <stdint.h>
#include <stddef.h>

short _fdtest(short *param_1) {
short sVar1;
  
  if ((param_1[1] & 0x7f80U) == 0x7f80) {
    if (((*(byte *)(param_1 + 1) & 0x7f) != 0) || (sVar1 = 1, *param_1 != 0)) {
      return 2;
    }
  }
  else if (((param_1[1] & 0x7fffU) != 0) || (sVar1 = 0, *param_1 != 0)) {
    sVar1 = ((param_1[1] & 0x7f80U) != 0) - 2;
  }
  return sVar1;
}
}

