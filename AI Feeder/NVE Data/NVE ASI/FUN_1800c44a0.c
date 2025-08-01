#include "FUN_1800c44a0.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800c44a0(int32_t *param_1) {
longlong lVar1;
  int *piVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar3 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 0;
  *(int32_t *)((longlong)param_1 + 0x42) = 0;
  piVar2 = (int *)(param_1 + 9);
  do {
    piVar2[-1] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3] * 0xd
                 + 0x26) % 0x7f;
    *piVar2 = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 1] * 0xd
              + 0x26) % 0x7f;
    piVar2[1] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 2] *
                 0xd + 0x26) % 0x7f;
    piVar2[2] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 3] *
                 0xd + 0x26) % 0x7f;
    piVar2[3] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 4] *
                 0xd + 0x26) % 0x7f;
    piVar2[4] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 5] *
                 0xd + 0x26) % 0x7f;
    piVar2[5] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 6] *
                 0xd + 0x26) % 0x7f;
    piVar2[6] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 7] *
                 0xd + 0x26) % 0x7f;
    piVar2[7] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 8] *
                 0xd + 0x26) % 0x7f;
    piVar2[8] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar3 + 9] *
                 0xd + 0x26) % 0x7f;
    lVar1 = lVar3 + 10;
    lVar3 = lVar3 + 0xb;
    piVar2[9] = ("You can disable MSAA by going into the GTAV graphics settings tab."[lVar1] * 0xd +
                0x26) % 0x7f;
    piVar2 = piVar2 + 0xb;
  } while (lVar3 < 0x42);
  return param_1;
}
}

