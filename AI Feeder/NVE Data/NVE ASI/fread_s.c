#include "fread_s.h"
#include <stdint.h>
#include <stddef.h>

size_t __cdecl fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File) {
ulong *puVar1;
  ulonglong uVar2;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_File != (FILE *)0x0) {
      FUN_18012ef14((longlong)_File);
      uVar2 = FUN_18012e544((int32_t (*) [32])_DstBuf,_DstSize,_ElementSize,_Count,
                            (longlong *)_File);
      FUN_18012ef20((longlong)_File);
      return uVar2;
    }
    if (_DstSize != 0xffffffffffffffff) {
      FUN_180151670((int32_t (*) [32])_DstBuf,0,_DstSize);
    }
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_18012b794();
  }
  return 0;
}
}

