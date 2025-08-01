#include "_msize.h"
#include <stdint.h>
#include <stddef.h>

int32_t _msize_base(longlong param_1) {
ulong *puVar1;
  int32_t uVar2;
  
  if (param_1 == 0) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_18012b794();
    return 0xffffffffffffffff;
  }
                    
                    
  uVar2 = HeapSize(DAT_1801ee8a8,0,param_1);
  return uVar2;
}
}

