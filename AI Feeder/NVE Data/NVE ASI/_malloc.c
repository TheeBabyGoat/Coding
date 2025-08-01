#include "_malloc.h"
#include <stdint.h>
#include <stddef.h>

LPVOID _malloc_base(ulonglong param_1) {
int iVar1;
  int32_t *puVar2;
  LPVOID pvVar3;
  ulong *puVar4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1801ee8a8,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar1 = FUN_180147668();
    } while ((iVar1 != 0) && (puVar2 = FUN_180136d74(param_1), (int)puVar2 != 0));
  }
  puVar4 = __doserrno();
  *puVar4 = 0xc;
  return (LPVOID)0x0;
}
}

