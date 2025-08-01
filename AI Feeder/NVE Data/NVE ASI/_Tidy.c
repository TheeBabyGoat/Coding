#include "_Tidy.h"
#include <stdint.h>
#include <stddef.h>

 _Tidy(param_1);
    pvVar1 = *(LPVOID *)(param_1 + 0x40);
    if (pvVar1 != (LPVOID)0x0) {
if (*(longlong *)((longlong)pvVar1 + 8) != 0) {
        lVar2 = (*(code *)PTR__guard_dispatch_icall_180157468)();
        if (lVar2 != 0) {
          (*(code *)PTR__guard_dispatch_icall_180157468)(lVar2,1);
        }
      }
      thunk_FUN_18012d5e8(pvVar1);
    }
}

