#include "FUN_1800cf1c0.h"
#include <stdint.h>
#include <stddef.h>

byte * FUN_1800cf1c0(longlong param_1,byte *param_2,byte *param_3) {
uint uVar1;
  
  if (param_2 != param_3) {
    do {
      uVar1 = FUN_180124db4((uint)*param_2,(UINT *)(param_1 + 0x10));
      *param_2 = (byte)uVar1;
      param_2 = param_2 + 1;
    } while (param_2 != param_3);
  }
  return param_2;
}
}

