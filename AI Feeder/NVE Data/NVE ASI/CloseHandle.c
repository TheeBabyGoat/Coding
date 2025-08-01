#include "CloseHandle.h"
#include <stdint.h>
#include <stddef.h>

 CloseHandle(pvVar8);
            uVar2 = local_a0._8_4_;
            local_a0._0_8_ = CONCAT44(uVar3,local_a0._0_4_) & 0x7fffffffffffffff;
            pvVar8 = CreateFileW(param_3,SUB84(local_a0._0_8_,4),(DWORD)local_70,&local_68,uVar2,
                                 (DWORD)local_78,(HANDLE)0x0);
            if (pvVar8 == (HANDLE)0xffffffffffffffff) {
DVar4 = GetLastError();
              FUN_1801312a8(DVar4);
              pbVar1 = (byte *)((&DAT_1801ee410)[(longlong)(int)*param_2 >> 6] + 0x38 +
                               (ulonglong)(*param_2 & 0x3f) * 0x48);
              *pbVar1 = *pbVar1 & 0xfe;
              FUN_180147e48(*param_2);
              goto LAB_180148dd9;
            }
}

