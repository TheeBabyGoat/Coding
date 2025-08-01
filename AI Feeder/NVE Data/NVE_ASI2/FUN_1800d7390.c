#include "FUN_1800d7390.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800d7390(int32_t *param_1) {
char *pcVar1;
  longlong lVar2;
  int *piVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar2 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(int32_t *)(param_1 + 9) = 0;
  *(int32_t *)((longlong)param_1 + 0x4a) = 0;
  piVar3 = (int *)(param_1 + 10);
  do {
    piVar3[-1] = ((char)(&DAT_1801d4de0)[lVar2] * 0x49 + 0x69) % 0x7f;
    pcVar1 = &DAT_1801d4de1 + lVar2;
    lVar2 = lVar2 + 2;
    *piVar3 = (*pcVar1 * 0x49 + 0x69) % 0x7f;
    piVar3 = piVar3 + 2;
  } while (lVar2 < 0x4a);
  return param_1;
}
}

