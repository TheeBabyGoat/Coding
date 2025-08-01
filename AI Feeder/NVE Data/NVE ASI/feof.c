#include "feof.h"
#include <stdint.h>
#include <stddef.h>

int __cdecl feof(FILE *_File) {
uint uVar1;
  ulong *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_18012b794();
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)&_File->_base + 4) >> 3 & 1;
  }
  return uVar1;
}
}

