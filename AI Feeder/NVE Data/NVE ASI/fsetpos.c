#include "fsetpos.h"
#include <stdint.h>
#include <stddef.h>

int __cdecl fsetpos(FILE *_File,fpos_t *_Pos) {
int iVar1;
  ulong *puVar2;
  
  if ((_File != (FILE *)0x0) && (_Pos != (fpos_t *)0x0)) {
    iVar1 = FUN_18012dfb0((longlong *)_File,(LARGE_INTEGER)*_Pos,0);
    return iVar1;
  }
  puVar2 = __doserrno();
  *puVar2 = 0x16;
  FUN_18012b794();
  return -1;
}
}

