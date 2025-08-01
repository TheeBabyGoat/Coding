#include "_purecall.h"
#include <stdint.h>
#include <stddef.h>

void _purecall(void) {
longlong lVar1;
  
  lVar1 = FUN_180127578();
  if (lVar1 != 0) {
    (*(code *)PTR__guard_dispatch_icall_180157468)();
  }
                    
  abort();
}
}

