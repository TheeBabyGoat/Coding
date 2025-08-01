#include "FUN_1800c5f70.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800c5f70(FUN_1800baee0);
    if ((*piVar7 < DAT_1801fc740) && (FUN_180125398(&DAT_1801fc740), DAT_1801fc740 == -1)) {
pHVar4 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc748 = GetProcAddress(pHVar4,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc740);
    }
}

void FUN_1800c5f70(int32_t param_1) {
HMODULE hModule;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801f3a80) {
    FUN_180125398(&DAT_1801f3a80);
    if (DAT_1801f3a80 == -1) {
      hModule = (HMODULE)FUN_1800c6f60();
      DAT_1801f3a78 = GetProcAddress(hModule,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801f3a80);
    }
  }
  if (DAT_1801f3a78 != (FARPROC)0x0) {
                    
                    
    (*DAT_1801f3a78)(0x4c,param_1);
    return;
  }
  return;
}
}

 FUN_1800c5f70(FUN_1800c8be0);
  if (*piVar2 < DAT_1801fc8e0) {
FUN_180125398(&DAT_1801fc8e0);
    if (DAT_1801fc8e0 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc8e8 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc8e0);
    }
  }
}

