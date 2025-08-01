#include "FUN_1800c6f60.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c6f60(void) {
int iVar1;
  HANDLE pvVar2;
  FARPROC pFVar3;
  uint uVar4;
  ulonglong uVar5;
  int32_t auStack_2048 [32];
  uint local_2028 [4];
  longlong local_2018 [1024];
  ulonglong local_18;
  int32_t uStack_10;
  
  uStack_10 = 0x1800c6f6c;
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_2048;
  uVar5 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x10) < DAT_1801f3aa0) && (FUN_180125398(&DAT_1801f3aa0), DAT_1801f3aa0 == -1)) {
    DAT_1801f3aa8 = 0;
    _Init_thread_footer(&DAT_1801f3aa0);
  }
  if (DAT_1801f3aa8 == 0) {
    local_2028[0] = 0;
    pvVar2 = GetCurrentProcess();
    iVar1 = K32EnumProcessModules(pvVar2,local_2018,0x2000,local_2028);
    if (iVar1 != 0) {
      if (0x2000 < local_2028[0]) {
        local_2028[0] = 0x2000;
      }
      if ((local_2028[0] & 0xfffffff8) != 0) {
        do {
          pFVar3 = GetProcAddress((HMODULE)local_2018[uVar5],"ReShadeRegisterAddon");
          if ((pFVar3 != (FARPROC)0x0) &&
             (pFVar3 = GetProcAddress((HMODULE)local_2018[uVar5],"ReShadeUnregisterAddon"),
             pFVar3 != (FARPROC)0x0)) {
            DAT_1801f3aa8 = local_2018[uVar5];
            break;
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < local_2028[0] >> 3);
      }
    }
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_2048);
  return;
}
}

