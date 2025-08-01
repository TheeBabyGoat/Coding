#include "FUN_1800d38c0.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800d38c0(int32_t *param_1) {
char *pcVar1;
  int *piVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar3 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *(int32_t *)((longlong)param_1 + 0x34) = 0;
  piVar2 = (int *)((longlong)param_1 + 0x3c);
  do {
    piVar2[-1] = ((char)(&DAT_1801d4e30)[lVar3] * 0x61 + 0x6b) % 0x7f;
    *piVar2 = ((char)(&DAT_1801d4e31)[lVar3] * 0x61 + 0x6b) % 0x7f;
    piVar2[1] = ((char)(&DAT_1801d4e32)[lVar3] * 0x61 + 0x6b) % 0x7f;
    piVar2[2] = ((char)(&DAT_1801d4e33)[lVar3] * 0x61 + 0x6b) % 0x7f;
    piVar2[3] = ((char)(&DAT_1801d4e34)[lVar3] * 0x61 + 0x6b) % 0x7f;
    piVar2[4] = ((char)(&DAT_1801d4e35)[lVar3] * 0x61 + 0x6b) % 0x7f;
    piVar2[5] = ((char)(&DAT_1801d4e36)[lVar3] * 0x61 + 0x6b) % 0x7f;
    piVar2[6] = ((char)(&DAT_1801d4e37)[lVar3] * 0x61 + 0x6b) % 0x7f;
    piVar2[7] = ((char)(&DAT_1801d4e38)[lVar3] * 0x61 + 0x6b) % 0x7f;
    piVar2[8] = ((char)(&DAT_1801d4e39)[lVar3] * 0x61 + 0x6b) % 0x7f;
    piVar2[9] = ((char)(&DAT_1801d4e3a)[lVar3] * 0x61 + 0x6b) % 0x7f;
    piVar2[10] = ((char)(&DAT_1801d4e3b)[lVar3] * 0x61 + 0x6b) % 0x7f;
    pcVar1 = &DAT_1801d4e3c + lVar3;
    lVar3 = lVar3 + 0xd;
    piVar2[0xb] = (*pcVar1 * 0x61 + 0x6b) % 0x7f;
    piVar2 = piVar2 + 0xd;
  } while (lVar3 < 0x34);
  return param_1;
}
}

