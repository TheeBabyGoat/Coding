#include "_RTC.h"
#include <stdint.h>
#include <stddef.h>

 _RTC_Initialize();
      FUN_180126698();
      __scrt_initialize_default_local_stdio_options();
      uVar7 = FUN_180138208((int32_t *)&DAT_1801576b8,(int32_t *)&DAT_1801576f0);
      if (((int)uVar7 == 0) && (uVar7 = __scrt_dllmain_after_initialize_c(), (char)uVar7 != '\0')) {
FUN_1801381c4((int32_t *)&DAT_180157498,(int32_t *)&DAT_180157698);
        DAT_1801ed688 = 2;
        bVar2 = false;
      }
}

void _RTC_Initialize(void) {
longlong *plVar1;
  
  for (plVar1 = &DAT_1801ded00; plVar1 < &DAT_1801ded00; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_180157468)();
    }
  }
  return;
}
}

