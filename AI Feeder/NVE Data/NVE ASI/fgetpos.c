#include "fgetpos.h"
#include <stdint.h>
#include <stddef.h>

int __cdecl fgetpos(FILE *_File,fpos_t *_Pos) {
int iVar1;
  ulong *puVar2;
  LARGE_INTEGER LVar3;
  
  if ((_File == (FILE *)0x0) || (_Pos == (fpos_t *)0x0)) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_18012b794();
    iVar1 = -1;
  }
  else {
    LVar3 = FUN_18013da60((longlong *)_File);
    *_Pos = (fpos_t)LVar3;
    iVar1 = (LVar3.QuadPart != -1) - 1;
  }
  return iVar1;
}
}

