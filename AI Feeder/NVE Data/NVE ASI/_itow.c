#include "_itow.h"
#include <stdint.h>
#include <stddef.h>

 _itow_s(_Val,(wchar_t *)(param_3 + 0x100),0x10,10);
          return 1;
        }
        uVar6 = FUN_180145f04((short *)(param_3 + 0x100),0x10,0x18017cea8,5);
        if (uVar6 == 0) {
return 1;
        }
}

errno_t __cdecl _itow_s(int _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix) {
bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((_Radix == 10) && (_Val < 0)) {
    bVar1 = true;
  }
  iVar2 = common_xtox_s<unsigned_long,wchar_t>(_Val,_DstBuf,_SizeInWords,_Radix,bVar1);
  return iVar2;
}
}

