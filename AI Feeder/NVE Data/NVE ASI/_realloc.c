#include "_realloc.h"
#include <stdint.h>
#include <stddef.h>

LPVOID _realloc_base(LPVOID param_1,ulonglong param_2) {
int iVar1;
  LPVOID pvVar2;
  ulong *puVar3;
  int32_t *puVar4;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar2 = _malloc_base(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_18013bf3c(param_1);
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar2 = HeapReAlloc(DAT_1801ee8a8,0,param_1,param_2);
          if (pvVar2 != (LPVOID)0x0) {
            return pvVar2;
          }
          iVar1 = FUN_180147668();
        } while ((iVar1 != 0) && (puVar4 = FUN_180136d74(param_2), (int)puVar4 != 0));
      }
      puVar3 = __doserrno();
      *puVar3 = 0xc;
    }
    pvVar2 = (LPVOID)0x0;
  }
  return pvVar2;
}
}

