#include "EnterCriticalSection.h"
#include <stdint.h>
#include <stddef.h>

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection) {
EnterCriticalSection(lpCriticalSection);
  return;
}
}

 EnterCriticalSection(lpCriticalSection);
        if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
uVar3 = (int)(((longlong)lpCriticalSection - (longlong)p_Var1) / 0x48) + iVar4 * 0x40;
          *(int32_t *)
           ((&DAT_1801ee410)[(longlong)(int)uVar3 >> 6] + 0x38 + (ulonglong)(uVar3 & 0x3f) * 0x48) =
               1;
          *(int32_t *)
           ((&DAT_1801ee410)[(longlong)(int)uVar3 >> 6] + 0x28 + (ulonglong)(uVar3 & 0x3f) * 0x48) =
               0xffffffffffffffff;
          goto LAB_180147e1f;
        }
}

