#include "_calloc.h"
#include <stdint.h>
#include <stddef.h>

LPVOID _calloc_base(ulonglong param_1,ulonglong param_2) {
int iVar1;
  int32_t *puVar2;
  LPVOID pvVar3;
  ulong *puVar4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1801ee8a8,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar1 = FUN_180147668();
    } while ((iVar1 != 0) && (puVar2 = FUN_180136d74(dwBytes), (int)puVar2 != 0));
  }
  puVar4 = __doserrno();
  *puVar4 = 0xc;
  return (LPVOID)0x0;
}
}

