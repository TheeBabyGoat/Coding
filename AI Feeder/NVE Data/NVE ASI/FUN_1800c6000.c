#include "FUN_1800c6000.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800c6000(FUN_1800bb280);
    if ((*piVar7 < DAT_1801fc750) && (FUN_180125398(&DAT_1801fc750), DAT_1801fc750 == -1)) {
pHVar4 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc758 = GetProcAddress(pHVar4,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc750);
    }
}

void FUN_1800c6000(int32_t param_1) {
HMODULE hModule;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801f3a70) {
    FUN_180125398(&DAT_1801f3a70);
    if (DAT_1801f3a70 == -1) {
      hModule = (HMODULE)FUN_1800c6f60();
      DAT_1801f3a68 = GetProcAddress(hModule,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801f3a70);
    }
  }
  if (DAT_1801f3a68 != (FARPROC)0x0) {
                    
                    
    (*DAT_1801f3a68)(0x4e,param_1);
    return;
  }
  return;
}
}

