#include "FUN_1800d1d80.h"
#include <stdint.h>
#include <stddef.h>

char * FUN_1800d1d80(char *param_1) {
int iVar1;
  
  iVar1 = ((*(int *)(param_1 + 0x10) + -0x5c) * 0x13) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x14) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x18) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x1c) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x20) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x24) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x28) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x2c) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x30) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x34) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x38) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x3c) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x40) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x44) + -0x5c) * 0x13) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0xe] = '\0';
  return param_1;
}
}

