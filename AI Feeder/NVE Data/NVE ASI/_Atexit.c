#include "_Atexit.h"
#include <stdint.h>
#include <stddef.h>

void __cdecl _Atexit(void (__cdecl*)(void))
   
   Library: Visual Studio 2019 Release */

void __cdecl _Atexit(_func_void *param_1) {
PVOID pvVar1;
  
  if (DAT_1801eb060 != 0) {
    pvVar1 = EncodePointer(param_1);
    DAT_1801eb060 = DAT_1801eb060 + -1;
    *(PVOID *)(&DAT_1801ed530 + DAT_1801eb060 * 8) = pvVar1;
    return;
  }
                    
  abort();
}
}

