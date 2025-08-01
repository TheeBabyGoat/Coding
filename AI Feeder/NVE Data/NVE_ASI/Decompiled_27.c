#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800d38c0 ----
int32_t * FUN_1800d38c0(int32_t *param_1)

{
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

// ---- Function: FUN_1800d3b50 ----
char * FUN_1800d3b50(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x38 - *(int *)(param_1 + 0x18)) * 0x27) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x1c)) * 0x27) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x20)) * 0x27) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x24)) * 0x27) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x28)) * 0x27) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x2c)) * 0x27) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x30)) * 0x27) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x34)) * 0x27) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x38)) * 0x27) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x3c)) * 0x27) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x40)) * 0x27) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x44)) * 0x27) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x48)) * 0x27) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x4c)) * 0x27) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x50)) * 0x27) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x54)) * 0x27) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x58)) * 0x27) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x5c)) * 0x27) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x60)) * 0x27) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 100)) * 0x27) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x68)) * 0x27) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x6c)) * 0x27) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x38 - *(int *)(param_1 + 0x70)) * 0x27) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x17] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d4150 ----
char * FUN_1800d4150(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x75 - *(int *)(param_1 + 0x2c)) * 0xb) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x30)) * 0xb) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x34)) * 0xb) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x38)) * 0xb) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x3c)) * 0xb) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x40)) * 0xb) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x44)) * 0xb) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x48)) * 0xb) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x4c)) * 0xb) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x50)) * 0xb) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x54)) * 0xb) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x58)) * 0xb) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x5c)) * 0xb) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x60)) * 0xb) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 100)) * 0xb) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x68)) * 0xb) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x6c)) * 0xb) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x70)) * 0xb) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x74)) * 0xb) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x78)) * 0xb) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x7c)) * 0xb) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x80)) * 0xb) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x84)) * 0xb) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x88)) * 0xb) % 0x7f + 0x7f;
  param_1[0x17] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x8c)) * 0xb) % 0x7f + 0x7f;
  param_1[0x18] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x90)) * 0xb) % 0x7f + 0x7f;
  param_1[0x19] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x94)) * 0xb) % 0x7f + 0x7f;
  param_1[0x1a] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x98)) * 0xb) % 0x7f + 0x7f;
  param_1[0x1b] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0x9c)) * 0xb) % 0x7f + 0x7f;
  param_1[0x1c] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0xa0)) * 0xb) % 0x7f + 0x7f;
  param_1[0x1d] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0xa4)) * 0xb) % 0x7f + 0x7f;
  param_1[0x1e] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0xa8)) * 0xb) % 0x7f + 0x7f;
  param_1[0x1f] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0xac)) * 0xb) % 0x7f + 0x7f;
  param_1[0x20] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0xb0)) * 0xb) % 0x7f + 0x7f;
  param_1[0x21] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0xb4)) * 0xb) % 0x7f + 0x7f;
  param_1[0x22] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0xb8)) * 0xb) % 0x7f + 0x7f;
  param_1[0x23] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0xbc)) * 0xb) % 0x7f + 0x7f;
  param_1[0x24] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0xc0)) * 0xb) % 0x7f + 0x7f;
  param_1[0x25] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0xc4)) * 0xb) % 0x7f + 0x7f;
  param_1[0x26] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 200)) * 0xb) % 0x7f + 0x7f;
  param_1[0x27] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0xcc)) * 0xb) % 0x7f + 0x7f;
  param_1[0x28] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x75 - *(int *)(param_1 + 0xd0)) * 0xb) % 0x7f + 0x7f;
  param_1[0x29] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x2a] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d4c60 ----
char * FUN_1800d4c60(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x7a - *(int *)(param_1 + 0x24)) * 0x23) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x28)) * 0x23) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x2c)) * 0x23) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x30)) * 0x23) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x34)) * 0x23) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x38)) * 0x23) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x3c)) * 0x23) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x40)) * 0x23) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x44)) * 0x23) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x48)) * 0x23) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x4c)) * 0x23) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x50)) * 0x23) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x54)) * 0x23) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x58)) * 0x23) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x5c)) * 0x23) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x60)) * 0x23) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 100)) * 0x23) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x68)) * 0x23) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x6c)) * 0x23) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x70)) * 0x23) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x74)) * 0x23) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x78)) * 0x23) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x7c)) * 0x23) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x80)) * 0x23) % 0x7f + 0x7f;
  param_1[0x17] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x84)) * 0x23) % 0x7f + 0x7f;
  param_1[0x18] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x88)) * 0x23) % 0x7f + 0x7f;
  param_1[0x19] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x8c)) * 0x23) % 0x7f + 0x7f;
  param_1[0x1a] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x90)) * 0x23) % 0x7f + 0x7f;
  param_1[0x1b] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x94)) * 0x23) % 0x7f + 0x7f;
  param_1[0x1c] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x98)) * 0x23) % 0x7f + 0x7f;
  param_1[0x1d] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0x9c)) * 0x23) % 0x7f + 0x7f;
  param_1[0x1e] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x7a - *(int *)(param_1 + 0xa0)) * 0x23) % 0x7f + 0x7f;
  param_1[0x1f] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x20] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d54c0 ----
char * FUN_1800d54c0(char *param_1)

{
  int iVar1;
  
  iVar1 = ((*(int *)(param_1 + 0x18) + -0x1d) * 0x33) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x1c) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x20) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x24) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x28) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x2c) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x30) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x34) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x38) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x3c) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x40) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x44) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x48) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x4c) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x50) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x54) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x58) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x5c) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x60) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 100) + -0x1d) * 0x33) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x14] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d59f0 ----
char * FUN_1800d59f0(char *param_1)

{
  int iVar1;
  
  iVar1 = ((*(int *)(param_1 + 0x20) + -0x30) * 10) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x24) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x28) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x2c) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x30) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x34) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x38) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x3c) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x40) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x44) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x48) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x4c) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x50) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x54) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x58) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x5c) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x60) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 100) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x68) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x6c) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x70) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x74) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x78) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x7c) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0x17] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x80) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0x18] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x84) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0x19] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x88) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0x1a] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x8c) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0x1b] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x90) + -0x30) * 10) % 0x7f + 0x7f;
  param_1[0x1c] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x1d] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d61c0 ----
char * FUN_1800d61c0(char *param_1)

{
  int iVar1;
  
  iVar1 = ((*(int *)(param_1 + 0x1c) + -0xb) * 0xf) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x20) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x24) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x28) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x2c) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x30) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x34) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x38) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x3c) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x40) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x44) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x48) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x4c) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x50) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x54) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x58) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x5c) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x60) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 100) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x68) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x6c) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x70) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x74) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x78) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x17] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x7c) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x18] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x80) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x19] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x1a] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d6880 ----
char * FUN_1800d6880(char *param_1)

{
  int iVar1;
  
  iVar1 = ((*(int *)(param_1 + 0x2c) + -2) * 0x19) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x30) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x34) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x38) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x3c) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x40) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x44) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x48) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x4c) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x50) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x54) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x58) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x5c) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x60) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 100) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x68) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x6c) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x70) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x74) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x78) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x7c) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x80) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x84) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x88) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x17] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x8c) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x18] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x90) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x19] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x94) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x1a] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x98) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x1b] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x9c) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x1c] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0xa0) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x1d] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0xa4) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x1e] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0xa8) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x1f] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0xac) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x20] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0xb0) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x21] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0xb4) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x22] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0xb8) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x23] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0xbc) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x24] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0xc0) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x25] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0xc4) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x26] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 200) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x27] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0xcc) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x28] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0xd0) + -2) * 0x19) % 0x7f + 0x7f;
  param_1[0x29] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x2a] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d7390 ----
int32_t * FUN_1800d7390(int32_t *param_1)

{
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

// ---- Function: FUN_1800d7430 ----
char * FUN_1800d7430(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x1a - *(int *)(param_1 + 0x1c)) * 0x2d) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x20)) * 0x2d) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x24)) * 0x2d) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x28)) * 0x2d) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x2c)) * 0x2d) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x30)) * 0x2d) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x34)) * 0x2d) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x38)) * 0x2d) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x3c)) * 0x2d) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x40)) * 0x2d) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x44)) * 0x2d) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x48)) * 0x2d) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x4c)) * 0x2d) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x50)) * 0x2d) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x54)) * 0x2d) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x58)) * 0x2d) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x5c)) * 0x2d) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x60)) * 0x2d) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 100)) * 0x2d) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x68)) * 0x2d) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x6c)) * 0x2d) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x70)) * 0x2d) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x74)) * 0x2d) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x78)) * 0x2d) % 0x7f + 0x7f;
  param_1[0x17] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x7c)) * 0x2d) % 0x7f + 0x7f;
  param_1[0x18] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x80)) * 0x2d) % 0x7f + 0x7f;
  param_1[0x19] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x1a] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d7af0 ----
char * FUN_1800d7af0(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x65 - *(int *)(param_1 + 0x14)) * 0x1b) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x18)) * 0x1b) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x1c)) * 0x1b) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x20)) * 0x1b) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x24)) * 0x1b) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x28)) * 0x1b) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x2c)) * 0x1b) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x30)) * 0x1b) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x34)) * 0x1b) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x38)) * 0x1b) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x3c)) * 0x1b) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x40)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x44)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x48)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x4c)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x50)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x54)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x11] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d7f60 ----
char * FUN_1800d7f60(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x24 - *(int *)(param_1 + 0x14)) * 0x27) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x18)) * 0x27) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x1c)) * 0x27) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x20)) * 0x27) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x24)) * 0x27) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x28)) * 0x27) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x2c)) * 0x27) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x30)) * 0x27) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x34)) * 0x27) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x38)) * 0x27) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x3c)) * 0x27) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x40)) * 0x27) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x44)) * 0x27) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x48)) * 0x27) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x4c)) * 0x27) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x50)) * 0x27) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x54)) * 0x27) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x11] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d83d0 ----
longlong * FUN_1800d83d0(int32_t param_1,int *param_2)

{
  bool bVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_38;
  int32_t uStack_30;
  longlong *local_28;
  uint uStack_20;
  int32_t uStack_1c;
  
  plVar6 = DAT_1801fb320;
  local_28 = (longlong *)DAT_1801fb320[1];
  uStack_20 = 0;
  plVar5 = DAT_1801fb320;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar3 = local_28;
    plVar7 = DAT_1801fb320;
    do {
      local_28 = plVar3;
      bVar1 = *param_2 <= *(int *)((longlong)local_28 + 0x1c);
      plVar4 = local_28;
      plVar5 = local_28;
      if (!bVar1) {
        plVar4 = local_28 + 2;
        plVar5 = plVar7;
      }
      uStack_20 = (uint)bVar1;
      plVar3 = (longlong *)*plVar4;
      plVar7 = plVar5;
    } while (*(char *)(*plVar4 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (*param_2 < *(int *)((longlong)plVar5 + 0x1c))
     ) {
    if (DAT_1801fb328 == 0x333333333333333) {
      FUN_1800d8950();
      pcVar2 = (code *)swi(3);
      plVar6 = (longlong *)(*pcVar2)();
      return plVar6;
    }
    local_38 = (longlong *)&DAT_1801fb320;
    uStack_30 = 0;
    plVar5 = (longlong *)operator_new(0x50);
    *(int *)((longlong)plVar5 + 0x1c) = *param_2;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    *plVar5 = (longlong)plVar6;
    plVar5[1] = (longlong)plVar6;
    plVar5[2] = (longlong)plVar6;
    *(int32_t *)(plVar5 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar5 = FUN_1800d86d0((longlong *)&DAT_1801fb320,(longlong *)&local_38,plVar5);
  }
  return plVar5 + 4;
}

// ---- Function: FUN_1800d84d0 ----
int32_t * FUN_1800d84d0(int32_t param_1,int32_t *param_2,int *param_3,longlong *param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int32_t uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int32_t *puVar8;
  longlong *plVar9;
  longlong *local_38;
  int32_t uStack_30;
  longlong *local_28;
  uint uStack_20;
  int32_t uStack_1c;
  
  plVar3 = DAT_1801fb320;
  local_28 = (longlong *)DAT_1801fb320[1];
  uStack_20 = 0;
  plVar7 = DAT_1801fb320;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar4 = local_28;
    plVar9 = DAT_1801fb320;
    do {
      local_28 = plVar4;
      plVar6 = local_28;
      plVar7 = local_28;
      if (*(int *)((longlong)local_28 + 0x1c) < *param_3) {
        plVar6 = local_28 + 2;
        plVar7 = plVar9;
      }
      uStack_20 = (uint)(*param_3 <= *(int *)((longlong)local_28 + 0x1c));
      plVar4 = (longlong *)*plVar6;
      plVar9 = plVar7;
    } while (*(char *)(*plVar6 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
     (*(int *)((longlong)plVar7 + 0x1c) <= *param_3)) {
    uVar5 = 0;
  }
  else {
    if (DAT_1801fb328 == 0x333333333333333) {
      FUN_1800d8950();
      pcVar1 = (code *)swi(3);
      puVar8 = (int32_t *)(*pcVar1)();
      return puVar8;
    }
    local_38 = (longlong *)&DAT_1801fb320;
    uStack_30 = 0;
    plVar7 = (longlong *)operator_new(0x50);
    *(int *)((longlong)plVar7 + 0x1c) = *param_3;
    lVar2 = param_4[1];
    plVar7[4] = *param_4;
    plVar7[5] = lVar2;
    lVar2 = param_4[3];
    plVar7[6] = param_4[2];
    plVar7[7] = lVar2;
    lVar2 = param_4[5];
    plVar7[8] = param_4[4];
    plVar7[9] = lVar2;
    *plVar7 = (longlong)plVar3;
    plVar7[1] = (longlong)plVar3;
    plVar7[2] = (longlong)plVar3;
    *(int32_t *)(plVar7 + 3) = 0;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    local_38 = local_28;
    plVar7 = FUN_1800d86d0((longlong *)&DAT_1801fb320,(longlong *)&local_38,plVar7);
    uVar5 = 1;
  }
  *param_2 = plVar7;
  *(int32_t *)(param_2 + 1) = uVar5;
  return param_2;
}

// ---- Function: FUN_1800d8620 ----
void FUN_1800d8620(int32_t *param_1,longlong *param_2)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  DWORD local_res10 [6];
  
  VirtualProtect(param_1,param_2[1] - *param_2,0x40,local_res10);
  FUN_180150fd0(param_1,(int32_t *)*param_2,param_2[1] - *param_2);
  VirtualProtect(param_1,param_2[1] - *param_2,local_res10[0],local_res10);
  pvVar1 = (LPVOID)*param_2;
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (ulonglong)(param_2[2] - (longlong)pvVar1)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return;
}

// ---- Function: FUN_1800d86d0 ----
longlong * FUN_1800d86d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int32_t *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar7 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar7;
  if (plVar7 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(int32_t *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar7[2] = (longlong)param_3;
    if (plVar7 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar7 = (longlong)param_3;
    if (plVar7 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar7 = param_3;
  do {
    if (cVar1 != '\0') {
      *(int32_t *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar6 = (longlong *)plVar7[1];
    lVar3 = *(longlong *)plVar6[1];
    if (plVar6 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar6[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(int32_t *)(plVar6 + 3) = 1;
        *(int32_t *)(lVar3 + 0x18) = 1;
        *(int32_t *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar7[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar6[2];
        if (plVar7 == plVar8) {
          plVar6[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar7 = (longlong *)plVar6[1];
            if (plVar6 == (longlong *)*plVar7) {
              *plVar7 = (longlong)plVar8;
            }
            else {
              plVar7[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(int32_t *)(plVar7[1] + 0x18) = 1;
        *(int32_t *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)*plVar6;
        *plVar6 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar6;
        }
        else {
          plVar4 = (longlong *)plVar6[1];
          if (plVar6 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar6;
          }
        }
LAB_1800d890d:
        plVar6[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar6;
        if (plVar7 == plVar8) {
          *plVar6 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar6;
          }
          plVar8[1] = plVar6[1];
          if (plVar6 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (int32_t *)plVar6[1];
            if (plVar6 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar6;
          plVar6[1] = (longlong)plVar8;
          plVar7 = plVar6;
        }
        *(int32_t *)(plVar7[1] + 0x18) = 1;
        *(int32_t *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar7[1] + 8);
        plVar8 = (longlong *)plVar6[2];
        plVar6[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar6;
        }
        plVar8[1] = plVar6[1];
        if (plVar6 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (int32_t *)plVar6[1];
          if (plVar6 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar6;
        goto LAB_1800d890d;
      }
      *(int32_t *)(plVar6 + 3) = 1;
      *(int32_t *)(lVar3 + 0x18) = 1;
      *(int32_t *)(*(longlong *)(plVar7[1] + 8) + 0x18) = 0;
      plVar7 = *(longlong **)(plVar7[1] + 8);
    }
    cVar1 = *(char *)(plVar7[1] + 0x18);
  } while( true );
}

// ---- Function: FUN_1800d8950 ----
void FUN_1800d8950(void)

{
  code *pcVar1;
  
  FUN_180123338(0x1801d4f40);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

