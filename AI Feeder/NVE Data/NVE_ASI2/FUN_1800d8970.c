#include "FUN_1800d8970.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800d8970(3);
        }
        if (DAT_1801f3a13 != '\0') {
local_1e8 = (code *)0x1801d4f58;
          local_1e0 = (int32_t **)0x1d;
          lpAddress = (int32_t *)FUN_1800a68d0(&local_1e8);
          VirtualProtect(lpAddress,100,0x40,(PDWORD)local_1d8);
          uVar7 = _UNK_1801d9d7c;
          uVar6 = _UNK_1801d9d78;
          uVar5 = _UNK_1801d9d74;
          uVar9 = _DAT_1801d9d70;
          *(int32_t *)lpAddress = _DAT_1801d9d70;
          *(int32_t *)((longlong)lpAddress + 4) = uVar5;
          *(int32_t *)(lpAddress + 1) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0xc) = uVar7;
          *(int32_t *)(lpAddress + 2) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x14) = uVar5;
          *(int32_t *)(lpAddress + 3) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x1c) = uVar7;
          *(int32_t *)(lpAddress + 4) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x24) = uVar5;
          *(int32_t *)(lpAddress + 5) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x2c) = uVar7;
          *(int32_t *)(lpAddress + 6) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x34) = uVar5;
          *(int32_t *)(lpAddress + 7) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x3c) = uVar7;
          *(int32_t *)(lpAddress + 8) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x44) = uVar5;
          *(int32_t *)(lpAddress + 9) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x4c) = uVar7;
          *(int32_t *)(lpAddress + 10) = uVar9;
          *(int32_t *)((longlong)lpAddress + 0x54) = uVar5;
          *(int32_t *)(lpAddress + 0xb) = uVar6;
          *(int32_t *)((longlong)lpAddress + 0x5c) = uVar7;
          *(int32_t *)(lpAddress + 0xc) = uVar9;
          VirtualProtect(lpAddress,100,local_1d8._0_4_,(PDWORD)local_1d8);
        }
}

void FUN_1800d8970(int32_t param_1) {
int32_t *puVar1;
  char *local_18;
  int32_t local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10
              ) < DAT_1801fc990) {
    FUN_180125398(&DAT_1801fc990);
    if (DAT_1801fc990 == -1) {
      local_18 = "41 8A F4 F3 44 0F 59 93";
      local_10 = 0x17;
      puVar1 = (int32_t *)FUN_1800a68d0(&local_18);
      *puVar1 = 0xb640;
      DAT_1801fc998 = puVar1 + 1;
      *(int32_t *)DAT_1801fc998 = param_1;
      _Init_thread_footer(&DAT_1801fc990);
    }
  }
  *(int32_t *)DAT_1801fc998 = param_1;
  return;
}
}

