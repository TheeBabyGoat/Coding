#include "FUN_1800c4130.h"
#include <stdint.h>
#include <stddef.h>

longlong FUN_1800c4130(longlong param_1) {
int iVar1;
  char *pcVar2;
  int *piVar3;
  longlong lVar4;
  
  lVar4 = 6;
  piVar3 = (int *)(param_1 + 0x48);
  pcVar2 = (char *)(param_1 + 2);
  do {
    iVar1 = ((0x26 - piVar3[-1]) * 0x27) % 0x7f + 0x7f;
    pcVar2[-2] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - *piVar3) * 0x27) % 0x7f + 0x7f;
    pcVar2[-1] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[1]) * 0x27) % 0x7f + 0x7f;
    *pcVar2 = (char)iVar1 +
              (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
              (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[2]) * 0x27) % 0x7f + 0x7f;
    pcVar2[1] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[3]) * 0x27) % 0x7f + 0x7f;
    pcVar2[2] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[4]) * 0x27) % 0x7f + 0x7f;
    pcVar2[3] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[5]) * 0x27) % 0x7f + 0x7f;
    pcVar2[4] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[6]) * 0x27) % 0x7f + 0x7f;
    pcVar2[5] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[7]) * 0x27) % 0x7f + 0x7f;
    pcVar2[6] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[8]) * 0x27) % 0x7f + 0x7f;
    pcVar2[7] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((0x26 - piVar3[9]) * 0x27) % 0x7f + 0x7f;
    piVar3 = piVar3 + 0xb;
    pcVar2[8] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    lVar4 = lVar4 + -1;
    pcVar2 = pcVar2 + 0xb;
  } while (lVar4 != 0);
  *(int32_t *)(param_1 + 0x42) = 0;
  return param_1;
}
}

