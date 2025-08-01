#include "fread.h"
#include <stdint.h>
#include <stddef.h>

size_t __cdecl fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File) {
size_t sVar1;
  
  sVar1 = fread_s(_DstBuf,0xffffffffffffffff,_ElementSize,_Count,_File);
  return sVar1;
}
}

 fread(&local_1e8,1,8,(FILE *)local_1d8._0_8_);
        ppcVar23 = (code **)0x8;
        param_4 = (FILE *)local_1d8._0_8_;
        fread(&local_1b8,1,8,(FILE *)local_1d8._0_8_);
        FUN_180117970((ulonglong)local_1e8,(longlong)local_1b8);
        iVar10 = feof((FILE *)local_1d8._0_8_);
      }
      FUN_18012f050((int *)local_1d8._0_8_);
      puVar13 = DAT_1801f39b0;
    }
    for (; puVar13 != (int32_t *)0x0; puVar13 = (int32_t *)puVar13[1]) {
(**(code **)*puVar13)(puVar13);
    }
}

