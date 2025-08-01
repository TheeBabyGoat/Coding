#include "_difftime64.h"
#include <stdint.h>
#include <stddef.h>

double __cdecl _difftime64(__time64_t _Time1,__time64_t _Time2) {
ulong *puVar1;
  double dVar2;
  
  if ((_Time2 < 0) || (_Time1 < 0)) {
    puVar1 = __doserrno();
    dVar2 = 0.0;
    *puVar1 = 0x16;
  }
  else {
    dVar2 = (double)(_Time1 - _Time2);
  }
  return dVar2;
}
}

