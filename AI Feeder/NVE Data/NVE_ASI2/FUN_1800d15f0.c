#include "FUN_1800d15f0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800d15f0(longlong param_1) {
(*DAT_1801fc960)();
  if (DAT_1801f3a1c != '\0') {
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 2;
  }
  if (DAT_1801f3a1b != '\0') {
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 0x10;
  }
  if (DAT_1801f3a1a != '\0') {
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 0x20;
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) | 0x200;
  }
  *(uint *)(param_1 + 0x4e4) = *(uint *)(param_1 + 0x4e4) | 0x620;
  return;
}
}

