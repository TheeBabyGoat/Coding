#include "_Deletegloballocale.h"
#include <stdint.h>
#include <stddef.h>

void _Deletegloballocale(longlong *param_1) {
longlong lVar1;
  
  if (*param_1 != 0) {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_180157468)();
    if (lVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_180157468)(lVar1,1);
    }
  }
  return;
}
}

