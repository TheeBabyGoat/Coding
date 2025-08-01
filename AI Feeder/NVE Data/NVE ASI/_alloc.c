#include "_alloc.h"
#include <stdint.h>
#include <stddef.h>

int __cdecl _alloc_osfhnd(void) {
LPCRITICAL_SECTION p_Var1;
  int32_t *puVar2;
  uint uVar3;
  int iVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
  __acrt_lock(7);
  uVar3 = 0xffffffff;
  iVar4 = 0;
  do {
    if (0x7f < iVar4) {
LAB_180147e1f:
      __acrt_unlock(7);
      return uVar3;
    }
    p_Var1 = (LPCRITICAL_SECTION)(&DAT_1801ee410)[iVar4];
    if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
      puVar2 = __acrt_lowio_create_handle_array();
      (&DAT_1801ee410)[iVar4] = puVar2;
      if (puVar2 != (int32_t *)0x0) {
        DAT_1801ee810 = DAT_1801ee810 + 0x40;
        uVar3 = iVar4 << 6;
        __acrt_lowio_lock_fh(uVar3);
        *(int32_t *)((&DAT_1801ee410)[(longlong)(int)uVar3 >> 6] + 0x38) = 1;
      }
      goto LAB_180147e1f;
    }
    for (lpCriticalSection = p_Var1;
        lpCriticalSection != (LPCRITICAL_SECTION)&p_Var1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
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
        LeaveCriticalSection(lpCriticalSection);
      }
    }
    iVar4 = iVar4 + 1;
  } while( true );
}
}

