#include "FUN_1800d34e0.h"
#include <stdint.h>
#include <stddef.h>

longlong FUN_1800d34e0(longlong param_1) {
int iVar1;
  char *pcVar2;
  int *piVar3;
  longlong lVar4;
  
  lVar4 = 4;
  pcVar2 = (char *)(param_1 + 2);
  piVar3 = (int *)(param_1 + 0x3c);
  do {
    iVar1 = ((piVar3[-1] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[-2] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((*piVar3 + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[-1] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[1] + -0x6b) * 0x37) % 0x7f + 0x7f;
    *pcVar2 = (char)iVar1 +
              (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
              (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[2] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[1] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[3] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[2] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[4] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[3] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[5] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[4] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[6] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[5] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[7] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[6] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[8] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[7] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[9] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[8] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[10] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[9] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    iVar1 = ((piVar3[0xb] + -0x6b) * 0x37) % 0x7f + 0x7f;
    pcVar2[10] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
    lVar4 = lVar4 + -1;
    pcVar2 = pcVar2 + 0xd;
    piVar3 = piVar3 + 0xd;
  } while (lVar4 != 0);
  *(int32_t *)(param_1 + 0x34) = 0;
  return param_1;
}
}

