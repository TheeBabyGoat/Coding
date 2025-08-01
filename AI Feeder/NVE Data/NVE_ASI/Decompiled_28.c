#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800d8970 ----
void FUN_1800d8970(int32_t param_1)

{
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

// ---- Function: FUN_1800d8a10 ----
char * FUN_1800d8a10(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x24 - *(int *)(param_1 + 0x24)) * 0x27) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x28)) * 0x27) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x2c)) * 0x27) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x30)) * 0x27) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x34)) * 0x27) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x38)) * 0x27) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x3c)) * 0x27) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x40)) * 0x27) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x44)) * 0x27) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x48)) * 0x27) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x4c)) * 0x27) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x50)) * 0x27) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x54)) * 0x27) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x58)) * 0x27) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x5c)) * 0x27) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x60)) * 0x27) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 100)) * 0x27) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x68)) * 0x27) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x6c)) * 0x27) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x70)) * 0x27) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x74)) * 0x27) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x78)) * 0x27) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x7c)) * 0x27) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x80)) * 0x27) % 0x7f + 0x7f;
  param_1[0x17] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x84)) * 0x27) % 0x7f + 0x7f;
  param_1[0x18] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x88)) * 0x27) % 0x7f + 0x7f;
  param_1[0x19] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x8c)) * 0x27) % 0x7f + 0x7f;
  param_1[0x1a] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x90)) * 0x27) % 0x7f + 0x7f;
  param_1[0x1b] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x94)) * 0x27) % 0x7f + 0x7f;
  param_1[0x1c] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x98)) * 0x27) % 0x7f + 0x7f;
  param_1[0x1d] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x9c)) * 0x27) % 0x7f + 0x7f;
  param_1[0x1e] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0xa0)) * 0x27) % 0x7f + 0x7f;
  param_1[0x1f] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x20] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d9270 ----
void FUN_1800d9270(void)

{
  int iVar1;
  int *lpAddress;
  int32_t *puVar2;
  longlong lVar3;
  int32_t auStack_f8 [32];
  DWORD local_d8 [4];
  char *local_c8;
  longlong local_c0;
  char local_b8 [28];
  uint local_9c;
  int32_t local_98;
  int32_t uStack_90;
  int32_t local_88;
  int32_t uStack_80;
  int32_t local_78;
  int32_t uStack_70;
  int32_t local_68;
  int32_t uStack_60;
  int32_t local_58;
  int32_t uStack_50;
  int32_t local_48;
  int32_t uStack_40;
  int32_t local_38;
  int32_t uStack_30;
  int32_t local_28;
  int32_t local_24;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_f8;
  local_88 = _DAT_1801d9780;
  uStack_80 = _UNK_1801d9788;
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_b8[4] = '\0';
  local_b8[5] = '\0';
  local_b8[6] = '\0';
  local_b8[7] = '\0';
  local_b8[8] = '\0';
  local_b8[9] = '\0';
  local_b8[10] = '\0';
  local_b8[0xb] = '\0';
  local_b8[0xc] = '\0';
  local_b8[0xd] = '\0';
  local_b8[0xe] = '\0';
  local_b8[0xf] = '\0';
  local_b8[0x10] = '\0';
  local_b8[0x11] = '\0';
  local_b8[0x12] = '\0';
  local_b8[0x13] = '\0';
  local_b8[0x14] = '\0';
  local_b8[0x15] = '\0';
  local_b8[0x16] = '\0';
  local_b8[0x17] = '\0';
  local_98 = _DAT_1801d9550;
  uStack_90 = _UNK_1801d9558;
  local_78 = _DAT_1801d9330;
  uStack_70 = _UNK_1801d9338;
  local_58 = _DAT_1801d9560;
  uStack_50 = _UNK_1801d9568;
  local_68 = _DAT_1801d92f0;
  uStack_60 = _UNK_1801d92f8;
  local_38 = _DAT_1801d9310;
  uStack_30 = _UNK_1801d9318;
  local_b8[0x18] = '\0';
  local_b8[0x19] = '\0';
  local_b8[0x1a] = '\0';
  local_b8[0x1b] = '\0';
  local_9c = local_9c & 0xff000000;
  local_48 = _DAT_1801d9180;
  uStack_40 = _UNK_1801d9188;
  local_28 = 8;
  local_24 = 2;
  local_c8 = FUN_1800d9a60(local_b8);
  lVar3 = -1;
  local_c0 = -1;
  do {
    local_c0 = local_c0 + 1;
  } while (local_c8[local_c0] != '\0');
  lpAddress = (int *)FUN_1800a68d0(&local_c8);
  iVar1 = *lpAddress;
  VirtualProtect(lpAddress,4,0x40,local_d8);
  *lpAddress = iVar1 + 4;
  VirtualProtect(lpAddress,4,local_d8[0],local_d8);
  local_88 = _DAT_1801d9130;
  uStack_80 = _UNK_1801d9138;
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_b8[4] = '\0';
  local_b8[5] = '\0';
  local_b8[6] = '\0';
  local_b8[7] = '\0';
  local_b8[8] = '\0';
  local_b8[9] = '\0';
  local_b8[10] = '\0';
  local_b8[0xb] = '\0';
  local_b8[0xc] = '\0';
  local_b8[0xd] = '\0';
  local_b8[0xe] = '\0';
  local_b8[0xf] = '\0';
  local_b8[0x10] = '\0';
  local_b8[0x11] = '\0';
  local_b8[0x12] = '\0';
  local_b8[0x13] = '\0';
  local_b8[0x14] = '\0';
  local_b8[0x15] = '\0';
  local_b8[0x16] = '\0';
  local_b8[0x17] = '\0';
  local_98 = _DAT_1801d94c0;
  uStack_90 = _UNK_1801d94c8;
  local_78 = _DAT_1801d9920;
  uStack_70 = _UNK_1801d9928;
  local_58 = _DAT_1801d99b0;
  uStack_50 = _UNK_1801d99b8;
  local_b8[0x18] = 'A';
  local_b8[0x19] = '\0';
  local_b8[0x1a] = '\0';
  local_b8[0x1b] = '\0';
  local_9c = 0x3a;
  local_68 = _DAT_1801d94b0;
  uStack_60 = _UNK_1801d94b8;
  local_48 = CONCAT44(local_48._4_4_,0x41);
  local_c8 = FUN_1800d9470(local_b8);
  do {
    lVar3 = lVar3 + 1;
  } while (local_c8[lVar3] != '\0');
  local_c0 = lVar3;
  puVar2 = (int32_t *)FUN_1800a68d0(&local_c8);
  FUN_180121510(puVar2,&LAB_1800d9450,(longlong *)&DAT_1801fc9a8);
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_f8);
  return;
}

// ---- Function: FUN_1800d9470 ----
char * FUN_1800d9470(char *param_1)

{
  int iVar1;
  
  iVar1 = ((*(int *)(param_1 + 0x18) + -0xb) * 0xf) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x1c) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x20) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x24) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x28) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x2c) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x30) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x34) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x38) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x3c) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x40) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x44) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x48) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x4c) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x50) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x54) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x58) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x5c) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x60) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 100) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x68) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x6c) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((*(int *)(param_1 + 0x70) + -0xb) * 0xf) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x17] = '\0';
  return param_1;
}

// ---- Function: FUN_1800d9a60 ----
char * FUN_1800d9a60(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x69 - *(int *)(param_1 + 0x20)) * 0x28) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x24)) * 0x28) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x28)) * 0x28) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x2c)) * 0x28) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x30)) * 0x28) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x34)) * 0x28) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x38)) * 0x28) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x3c)) * 0x28) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x40)) * 0x28) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x44)) * 0x28) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x48)) * 0x28) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x4c)) * 0x28) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x50)) * 0x28) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x54)) * 0x28) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x58)) * 0x28) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x5c)) * 0x28) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x60)) * 0x28) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 100)) * 0x28) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x68)) * 0x28) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x6c)) * 0x28) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x70)) * 0x28) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x74)) * 0x28) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x78)) * 0x28) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x7c)) * 0x28) % 0x7f + 0x7f;
  param_1[0x17] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x80)) * 0x28) % 0x7f + 0x7f;
  param_1[0x18] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x84)) * 0x28) % 0x7f + 0x7f;
  param_1[0x19] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x88)) * 0x28) % 0x7f + 0x7f;
  param_1[0x1a] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x8c)) * 0x28) % 0x7f + 0x7f;
  param_1[0x1b] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x90)) * 0x28) % 0x7f + 0x7f;
  param_1[0x1c] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x94)) * 0x28) % 0x7f + 0x7f;
  param_1[0x1d] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x1e] = '\0';
  return param_1;
}

// ---- Function: FUN_1800da290 ----
int32_t FUN_1800da290(int32_t param_1,char *param_2)

{
  int32_t uVar1;
  int iVar2;
  
  uVar1 = (*DAT_1801fc9b0)();
  iVar2 = strcmp(param_2,"azimuthEastColor");
  if (iVar2 == 0) {
    DAT_1801fc9b8 = uVar1;
  }
  iVar2 = strcmp(param_2,"azimuthWestColor");
  if (iVar2 == 0) {
    DAT_1801fc9bc = uVar1;
  }
  iVar2 = strcmp(param_2,"azimuthTransitionColor");
  if (iVar2 == 0) {
    DAT_1801fc9c0 = uVar1;
  }
  iVar2 = strcmp(param_2,"zenithColor");
  if (iVar2 == 0) {
    DAT_1801fc9c4 = uVar1;
  }
  iVar2 = strcmp(param_2,"zenithTransitionColor");
  if (iVar2 == 0) {
    DAT_1801fc9c8 = uVar1;
  }
  iVar2 = strcmp(param_2,"skyPlaneColor");
  if (iVar2 == 0) {
    DAT_1801fc9cc = uVar1;
  }
  iVar2 = strcmp(param_2,"sunColor");
  if (iVar2 == 0) {
    DAT_1801fc9d0 = uVar1;
  }
  iVar2 = strcmp(param_2,"sunColorHdr");
  if (iVar2 == 0) {
    DAT_1801fc9d4 = uVar1;
  }
  iVar2 = strcmp(param_2,"sunDiscColorHdr");
  if (iVar2 == 0) {
    DAT_1801fc9d8 = uVar1;
  }
  iVar2 = strcmp(param_2,"smallCloudColorHdr");
  if (iVar2 == 0) {
    DAT_1801fc9dc = uVar1;
  }
  iVar2 = strcmp(param_2,"moonColor");
  if (iVar2 == 0) {
    DAT_1801fc9e0 = uVar1;
  }
  iVar2 = strcmp(param_2,"DirectionalMotionBlurParams");
  if (iVar2 == 0) {
    DAT_1801fc9e4 = uVar1;
  }
  iVar2 = strcmp(param_2,"DirectionalMotionBlurIterParams");
  if (iVar2 == 0) {
    DAT_1801fc9e8 = uVar1;
  }
  return uVar1;
}

// ---- Function: FUN_1800da400 ----
void FUN_1800da400(longlong param_1,int32_t param_2,int param_3,float *param_4,int param_5,
                  int param_6)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  float fVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  longlong local_res8;
  longlong *local_78;
  int32_t uStack_70;
  longlong *local_68;
  uint uStack_60;
  int32_t uStack_5c;
  
  FUN_1800c73e0(&local_res8);
  iVar2 = *(int *)(param_1 + 0x2c8);
  if (iVar2 == -0x42c809c2) {
    if (param_3 == DAT_1801fc9b8) {
      _DAT_1801ec490 = *(int32_t *)param_4;
      _DAT_1801ec498 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9bc) {
      _DAT_1801ec4a0 = *(int32_t *)param_4;
      _DAT_1801ec4a8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9c0) {
      _DAT_1801ec4b0 = *(int32_t *)param_4;
      _DAT_1801ec4b8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9c4) {
      _DAT_1801ec4c0 = *(int32_t *)param_4;
      _DAT_1801ec4c8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9c8) {
      _DAT_1801ec4d0 = *(int32_t *)param_4;
      _DAT_1801ec4d8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9cc) {
      _DAT_1801fb108 = *(int32_t *)param_4;
      uRam00000001801fb110 = *(int32_t *)(param_4 + 2);
    }
    else if (param_3 == DAT_1801fc9d0) {
      _DAT_1801ec4e0 = *(int32_t *)param_4;
      _DAT_1801ec4e8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9d4) {
      _DAT_1801ec4f0 = *(int32_t *)param_4;
      _DAT_1801ec4f8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9d8) {
      _DAT_1801ec500 = *(int32_t *)param_4;
      _DAT_1801ec508 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9dc) {
      _DAT_1801ec510 = *(int32_t *)param_4;
      _DAT_1801ec518 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9e0) {
      _DAT_1801ec520 = *(int32_t *)param_4;
      _DAT_1801ec528 = param_4[2];
    }
  }
  if ((DAT_1801f3ab8 == 0) && ((iVar2 == 0x6e413d11 || (iVar2 == 0x4cc2d981)))) {
    if ((param_3 < 0) || ((short)*(int32_t *)(param_1 + 0x18) <= param_3)) {
      lVar13 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_1 + 0x10) + (longlong)param_3 * 0x48;
    }
    lVar13 = *(longlong *)(lVar13 + 0x40);
    if ((lVar13 != 0) && (iVar10 = strcmp(*(char **)(lVar13 + 0x18),"postfx_cbuffer"), iVar10 == 0))
    {
      DAT_1801f3ab8 = *(longlong *)(lVar13 + 0x28) + 0x10;
    }
  }
  fVar8 = DAT_1801d8e38;
  if (((((iVar2 == -0x7f8a4649) || (iVar2 == 0x5a69cac1)) || (iVar2 == -0x454693b7)) ||
      ((iVar2 == -0x6470dca2 || (iVar2 == 0x443ef0a1)))) && ((param_5 == 0x10 && (param_6 == 0xe))))
  {
    if (((DAT_1801d8df8 < (float)((uint)(param_4[0xc] - _DAT_1801d8e14) & _DAT_1801d9d30)) ||
        (DAT_1801d8df8 < (float)((uint)(param_4[0xd] - DAT_1801d8e38) & _DAT_1801d9d30))) ||
       (DAT_1801d8df8 < (float)((uint)(param_4[0xe] - _DAT_1801d8e34) & _DAT_1801d9d30))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    fVar14 = param_4[0x11];
    if (((DAT_1801d8df8 < (float)((uint)(fVar14 - _DAT_1801d8eb8) & _DAT_1801d9d30)) ||
        (param_4[0x13] <= _DAT_1801d8e0c)) || (DAT_1801d8e20 <= param_4[0x13])) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((DAT_1801d8df8 < (float)((uint)(fVar14 - _DAT_1801d8ed0) & _DAT_1801d9d30)) ||
       (DAT_1801d8df8 < (float)((uint)(param_4[0x13] - _DAT_1801d8e48) & _DAT_1801d9d30))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (((DAT_1801d8df8 < (float)((uint)(param_4[0x10] - DAT_1801d8e60) & _DAT_1801d9d30)) ||
        (fVar14 <= DAT_1801d8ea8)) || (DAT_1801d8ed4 <= fVar14)) {
      if (!bVar3) goto LAB_1800da8d0;
    }
    else if ((!bVar3) && ((bVar4 || (bVar6)))) goto LAB_1800da8d0;
    if (DAT_1801d8df0 < param_4[0xf] || DAT_1801d8df0 == param_4[0xf]) {
      fVar14 = (param_4[1] - _DAT_1801ec464) * (param_4[1] - _DAT_1801ec464) +
               (*param_4 - _DAT_1801ec460) * (*param_4 - _DAT_1801ec460) +
               (param_4[2] - _DAT_1801ec468) * (param_4[2] - _DAT_1801ec468);
      if (fVar14 < 0.0) {
        fVar14 = FUN_1801501f8(fVar14);
      }
      else {
        fVar14 = SQRT(fVar14);
      }
      plVar9 = DAT_1801fb118;
      if (fVar14 <= DAT_1801f3a00) {
        plVar11 = (longlong *)DAT_1801fb118[1];
        uStack_60 = 0;
        cVar1 = *(char *)((longlong)plVar11 + 0x19);
        local_68 = plVar11;
        plVar12 = DAT_1801fb118;
        while (plVar7 = plVar11, cVar1 == '\0') {
          bVar3 = fVar14 != *(float *)((longlong)plVar7 + 0x1c);
          bVar4 = *(float *)((longlong)plVar7 + 0x1c) <= fVar14;
          uStack_60 = (bVar4 && bVar3) ^ 1;
          if (!bVar4 || !bVar3) {
            plVar12 = plVar7;
          }
          plVar11 = plVar7 + 2;
          if (!bVar4 || !bVar3) {
            plVar11 = plVar7;
          }
          cVar1 = *(char *)(*plVar11 + 0x19);
          plVar11 = (longlong *)*plVar11;
          local_68 = plVar7;
        }
        if ((*(char *)((longlong)plVar12 + 0x19) != '\0') ||
           (fVar14 < *(float *)((longlong)plVar12 + 0x1c))) {
          if (DAT_1801fb120 == 0x555555555555555) {
            FUN_1800d8950();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_78 = (longlong *)&DAT_1801fb118;
          uStack_70 = 0;
          plVar11 = (longlong *)operator_new(0x30);
          *(float *)((longlong)plVar11 + 0x1c) = fVar14;
          lVar13 = *(longlong *)(param_4 + 0xe);
          plVar11[4] = *(longlong *)(param_4 + 0xc);
          plVar11[5] = lVar13;
          *plVar11 = (longlong)plVar9;
          plVar11[1] = (longlong)plVar9;
          plVar11[2] = (longlong)plVar9;
          *(int32_t *)(plVar11 + 3) = 0;
          uStack_70 = CONCAT44(uStack_5c,uStack_60);
          local_78 = local_68;
          FUN_1800d86d0((longlong *)&DAT_1801fb118,(longlong *)&local_78,plVar11);
        }
      }
    }
  }
LAB_1800da8d0:
  if ((iVar2 == 0x6e413d11) || (iVar2 == 0x4cc2d981)) {
    if (param_3 == DAT_1801fc9e4) {
      fVar14 = fVar8;
      if ((DAT_1801f3a0d == '\0') &&
         (fVar14 = DAT_1801d8e24, DAT_1801d8e24 <= DAT_1801ebd08 * *param_4)) {
        fVar14 = DAT_1801ebd08 * *param_4;
      }
      if (((DAT_1801f3a11 != '\0') || (DAT_1801f3a10 != '\0')) || (DAT_1801f3a0f != '\0')) {
        fVar14 = 0.0;
      }
      *param_4 = fVar14;
      param_4[1] = DAT_1801ebd00;
    }
    fVar14 = DAT_1801ebd04;
    if (param_3 == DAT_1801fc9e8) {
      *param_4 = DAT_1801ebd04;
      param_4[1] = fVar8 / fVar14;
    }
  }
                    
                    
  (*_DAT_1801fc9f0)(param_1,param_2,param_3,param_4);
  return;
}

// ---- Function: FUN_1800dab50 ----
void FUN_1800dab50(void)

{
  longlong lVar1;
  int32_t *puVar2;
  longlong lVar3;
  int32_t auStack_118 [32];
  char *local_f8;
  longlong local_f0;
  char local_e8 [16];
  ulonglong local_d8;
  ulonglong uStack_d0;
  int32_t local_c8;
  int32_t uStack_c0;
  int32_t local_b8;
  int32_t uStack_b0;
  int32_t local_a8;
  int32_t uStack_a0;
  int32_t local_98;
  int32_t uStack_90;
  int32_t local_88;
  int32_t uStack_80;
  int32_t local_78;
  int32_t uStack_70;
  int32_t local_68;
  int32_t uStack_60;
  int32_t local_58;
  int32_t uStack_50;
  int32_t local_48;
  int32_t uStack_40;
  int32_t local_38;
  int32_t uStack_30;
  int32_t local_28;
  int32_t local_24;
  int32_t local_20;
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_118;
  local_a8 = _DAT_1801d9760;
  uStack_a0 = _UNK_1801d9768;
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  local_e8[8] = '\0';
  local_e8[9] = '\0';
  local_e8[10] = '\0';
  local_e8[0xb] = '\0';
  local_e8[0xc] = '\0';
  local_e8[0xd] = '\0';
  local_e8[0xe] = '\0';
  local_e8[0xf] = '\0';
  uStack_c0 = CONCAT44(0x12,(int32_t)uStack_c0);
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_b8 = _DAT_1801d9770;
  uStack_b0 = _UNK_1801d9778;
  local_88 = _DAT_1801d92c0;
  uStack_80 = _UNK_1801d92c8;
  local_98 = _DAT_1801d9760;
  uStack_90 = _UNK_1801d9768;
  local_68 = _DAT_1801d9960;
  uStack_60 = _UNK_1801d9968;
  local_58 = _DAT_1801d9960;
  uStack_50 = _UNK_1801d9968;
  local_78 = _DAT_1801d90c0;
  uStack_70 = _UNK_1801d90c8;
  local_48 = _DAT_1801d92d0;
  uStack_40 = _UNK_1801d92d8;
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  local_38 = _DAT_1801d9a60;
  uStack_30 = _UNK_1801d9a68;
  local_28 = 0x47;
  local_24 = 0x1f;
  local_20 = 5;
  local_f8 = FUN_1800dc180(local_e8);
  lVar3 = -1;
  local_f0 = -1;
  do {
    local_f0 = local_f0 + 1;
  } while (local_f8[local_f0] != '\0');
  lVar1 = FUN_1800a68d0(&local_f8);
  lVar1 = *(int *)(lVar1 + 1) + lVar1;
  FUN_180121510((int32_t *)(lVar1 + 5),FUN_1800da290,&DAT_1801fc9b0);
  FUN_1801217f0(lVar1 + 5);
  local_b8 = _DAT_1801d96f0;
  uStack_b0 = _UNK_1801d96f8;
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  local_e8[8] = '\0';
  local_e8[9] = '\0';
  local_e8[10] = '\0';
  local_e8[0xb] = '\0';
  local_e8[0xc] = '\0';
  local_e8[0xd] = '\0';
  local_e8[0xe] = '\0';
  local_e8[0xf] = '\0';
  local_d8 = 0;
  local_c8 = _DAT_1801d9720;
  uStack_c0 = _UNK_1801d9728;
  local_a8 = _DAT_1801d9840;
  uStack_a0 = _UNK_1801d9848;
  local_88 = _DAT_1801d9700;
  uStack_80 = _UNK_1801d9708;
  local_98 = _DAT_1801d9740;
  uStack_90 = _UNK_1801d9748;
  local_68 = _DAT_1801d9230;
  uStack_60 = _UNK_1801d9238;
  uStack_d0 = uStack_d0 & 0xffff000000000000;
  local_78 = _DAT_1801d9860;
  uStack_70 = _UNK_1801d9868;
  local_58 = CONCAT44(local_58._4_4_,5);
  local_f8 = FUN_1800db9f0(local_e8);
  local_f0 = -1;
  do {
    local_f0 = local_f0 + 1;
  } while (local_f8[local_f0] != '\0');
  puVar2 = (int32_t *)FUN_1800a68d0(&local_f8);
  FUN_180121510(puVar2,&LAB_1800dab20,(longlong *)&DAT_1801f3920);
  local_b8 = _DAT_1801d9160;
  uStack_b0 = _UNK_1801d9168;
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  local_e8[8] = '\0';
  local_e8[9] = '\0';
  local_e8[10] = '\0';
  local_e8[0xb] = '\0';
  local_e8[0xc] = '\0';
  local_e8[0xd] = '\0';
  local_e8[0xe] = '\0';
  local_e8[0xf] = '\0';
  local_c8 = _DAT_1801d91e0;
  uStack_c0 = _UNK_1801d91e8;
  local_a8 = _DAT_1801d9ab0;
  uStack_a0 = _UNK_1801d9ab8;
  local_d8 = local_d8 & 0xffffff0000000000;
  uStack_d0 = 0x5700000046;
  local_98 = _DAT_1801d91b0;
  uStack_90 = _UNK_1801d91b8;
  local_88 = 0x80000005f;
  local_f8 = FUN_1800db4c0(local_e8);
  local_f0 = -1;
  do {
    local_f0 = local_f0 + 1;
  } while (local_f8[local_f0] != '\0');
  puVar2 = (int32_t *)FUN_1800a68d0(&local_f8);
  FUN_180121510(puVar2,FUN_1800da400,(longlong *)&DAT_1801fc9f0);
  local_b8 = _DAT_1801d95a0;
  uStack_b0 = _UNK_1801d95a8;
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  local_e8[8] = '\0';
  local_e8[9] = '\0';
  local_e8[10] = '\0';
  local_e8[0xb] = '\0';
  local_e8[0xc] = '\0';
  local_e8[0xd] = '\0';
  local_e8[0xe] = '\0';
  local_e8[0xf] = '\0';
  local_c8 = _DAT_1801d9320;
  uStack_c0 = _UNK_1801d9328;
  local_a8 = _DAT_1801d9300;
  uStack_a0 = _UNK_1801d9308;
  local_88 = _DAT_1801d9570;
  uStack_80 = _UNK_1801d9578;
  local_d8 = local_d8 & 0xff00000000000000;
  uStack_d0 = 0x3500000002;
  local_98 = _DAT_1801d93e0;
  uStack_90 = _UNK_1801d93e8;
  local_f8 = FUN_1800daec0(local_e8);
  do {
    lVar3 = lVar3 + 1;
  } while (local_f8[lVar3] != '\0');
  local_f0 = lVar3;
  puVar2 = (int32_t *)FUN_1800a68d0(&local_f8);
  FUN_180121510(puVar2,&LAB_1800da9b0,(longlong *)&DAT_1801fc9f8);
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_118);
  return;
}

// ---- Function: FUN_1800daec0 ----
char * FUN_1800daec0(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x69 - *(int *)(param_1 + 0x18)) * 0x28) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x1c)) * 0x28) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x20)) * 0x28) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x24)) * 0x28) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x28)) * 0x28) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x2c)) * 0x28) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x30)) * 0x28) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x34)) * 0x28) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x38)) * 0x28) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x3c)) * 0x28) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x40)) * 0x28) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x44)) * 0x28) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x48)) * 0x28) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x4c)) * 0x28) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x50)) * 0x28) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x54)) * 0x28) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x58)) * 0x28) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x5c)) * 0x28) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x60)) * 0x28) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 100)) * 0x28) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x68)) * 0x28) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x69 - *(int *)(param_1 + 0x6c)) * 0x28) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x16] = '\0';
  return param_1;
}

// ---- Function: FUN_1800db4c0 ----
char * FUN_1800db4c0(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x1a - *(int *)(param_1 + 0x18)) * 0x2d) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x1c)) * 0x2d) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x20)) * 0x2d) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x24)) * 0x2d) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x28)) * 0x2d) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x2c)) * 0x2d) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x30)) * 0x2d) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x34)) * 0x2d) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x38)) * 0x2d) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x3c)) * 0x2d) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x40)) * 0x2d) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x44)) * 0x2d) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x48)) * 0x2d) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x4c)) * 0x2d) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x50)) * 0x2d) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x54)) * 0x2d) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x58)) * 0x2d) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x5c)) * 0x2d) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 0x60)) * 0x2d) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x1a - *(int *)(param_1 + 100)) * 0x2d) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x14] = '\0';
  return param_1;
}

// ---- Function: FUN_1800db9f0 ----
char * FUN_1800db9f0(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x65 - *(int *)(param_1 + 0x20)) * 0x1b) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x24)) * 0x1b) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x28)) * 0x1b) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x2c)) * 0x1b) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x30)) * 0x1b) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x34)) * 0x1b) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x38)) * 0x1b) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x3c)) * 0x1b) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x40)) * 0x1b) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x44)) * 0x1b) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x48)) * 0x1b) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x4c)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x50)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x54)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x58)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x5c)) * 0x1b) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x60)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 100)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x68)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x6c)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x70)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x74)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x78)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x7c)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x17] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x80)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x18] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x84)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x19] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x88)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x1a] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x8c)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x1b] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x65 - *(int *)(param_1 + 0x90)) * 0x1b) % 0x7f + 0x7f;
  param_1[0x1c] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x1d] = '\0';
  return param_1;
}

// ---- Function: FUN_1800dc180 ----
char * FUN_1800dc180(char *param_1)

{
  int iVar1;
  
  iVar1 = ((0x24 - *(int *)(param_1 + 0x2c)) * 0x27) % 0x7f + 0x7f;
  *param_1 = (char)iVar1 +
             (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
             (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x30)) * 0x27) % 0x7f + 0x7f;
  param_1[1] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x34)) * 0x27) % 0x7f + 0x7f;
  param_1[2] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x38)) * 0x27) % 0x7f + 0x7f;
  param_1[3] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x3c)) * 0x27) % 0x7f + 0x7f;
  param_1[4] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x40)) * 0x27) % 0x7f + 0x7f;
  param_1[5] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x44)) * 0x27) % 0x7f + 0x7f;
  param_1[6] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x48)) * 0x27) % 0x7f + 0x7f;
  param_1[7] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x4c)) * 0x27) % 0x7f + 0x7f;
  param_1[8] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x50)) * 0x27) % 0x7f + 0x7f;
  param_1[9] = (char)iVar1 +
               (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
               (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x54)) * 0x27) % 0x7f + 0x7f;
  param_1[10] = (char)iVar1 +
                (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x58)) * 0x27) % 0x7f + 0x7f;
  param_1[0xb] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x5c)) * 0x27) % 0x7f + 0x7f;
  param_1[0xc] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x60)) * 0x27) % 0x7f + 0x7f;
  param_1[0xd] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 100)) * 0x27) % 0x7f + 0x7f;
  param_1[0xe] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x68)) * 0x27) % 0x7f + 0x7f;
  param_1[0xf] = (char)iVar1 +
                 (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
                 (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x6c)) * 0x27) % 0x7f + 0x7f;
  param_1[0x10] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x70)) * 0x27) % 0x7f + 0x7f;
  param_1[0x11] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x74)) * 0x27) % 0x7f + 0x7f;
  param_1[0x12] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x78)) * 0x27) % 0x7f + 0x7f;
  param_1[0x13] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x7c)) * 0x27) % 0x7f + 0x7f;
  param_1[0x14] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x80)) * 0x27) % 0x7f + 0x7f;
  param_1[0x15] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x84)) * 0x27) % 0x7f + 0x7f;
  param_1[0x16] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x88)) * 0x27) % 0x7f + 0x7f;
  param_1[0x17] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x8c)) * 0x27) % 0x7f + 0x7f;
  param_1[0x18] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x90)) * 0x27) % 0x7f + 0x7f;
  param_1[0x19] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x94)) * 0x27) % 0x7f + 0x7f;
  param_1[0x1a] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x98)) * 0x27) % 0x7f + 0x7f;
  param_1[0x1b] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0x9c)) * 0x27) % 0x7f + 0x7f;
  param_1[0x1c] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0xa0)) * 0x27) % 0x7f + 0x7f;
  param_1[0x1d] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0xa4)) * 0x27) % 0x7f + 0x7f;
  param_1[0x1e] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0xa8)) * 0x27) % 0x7f + 0x7f;
  param_1[0x1f] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0xac)) * 0x27) % 0x7f + 0x7f;
  param_1[0x20] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0xb0)) * 0x27) % 0x7f + 0x7f;
  param_1[0x21] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0xb4)) * 0x27) % 0x7f + 0x7f;
  param_1[0x22] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0xb8)) * 0x27) % 0x7f + 0x7f;
  param_1[0x23] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0xbc)) * 0x27) % 0x7f + 0x7f;
  param_1[0x24] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0xc0)) * 0x27) % 0x7f + 0x7f;
  param_1[0x25] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 0xc4)) * 0x27) % 0x7f + 0x7f;
  param_1[0x26] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  iVar1 = ((0x24 - *(int *)(param_1 + 200)) * 0x27) % 0x7f + 0x7f;
  param_1[0x27] =
       (char)iVar1 +
       (((char)(iVar1 / 0x7f) + (char)(iVar1 >> 0x1f)) -
       (char)((longlong)iVar1 * 0x81020409 >> 0x3f)) * -0x7f;
  param_1[0x28] = '\0';
  return param_1;
}

// ---- Function: FUN_1800dcc80 ----
void FUN_1800dcc80(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4)

{
  char cVar1;
  float fVar2;
  
  FUN_1800de850(&DAT_1801d5220,param_2,param_3,param_4);
  cVar1 = (**(code **)(DAT_1801f3ae0 + 0x8b8))(0);
  if (cVar1 != '\0') {
    (**(code **)(DAT_1801f3ae0 + 0x6a0))();
    fVar2 = (float)(**(code **)(DAT_1801f3ae0 + 0x220))();
    (**(code **)(DAT_1801f3ae0 + 0x208))(fVar2 * _DAT_1801d8ec8);
    (**(code **)(DAT_1801f3ae0 + 0x348))(param_1,0);
    (**(code **)(DAT_1801f3ae0 + 0x210))();
                    
                    
    (**(code **)(DAT_1801f3ae0 + 0x6a8))();
    return;
  }
  return;
}

// ---- Function: FUN_1800dcd20 ----
void FUN_1800dcd20(int32_t param_1,void *param_2)

{
  float fVar1;
  char cVar2;
  size_t _Size;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  ulonglong uVar7;
  size_t sVar8;
  longlong *_Buf1;
  int32_t ****ppppuVar9;
  code *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  code *pcVar13;
  longlong lVar14;
  code *pcVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  int32_t auStack_d8 [32];
  char *local_b8;
  int32_t uStack_b0;
  char *local_a8;
  int32_t uStack_a0;
  ulonglong local_98;
  ulonglong *local_90;
  ulonglong local_88;
  ulonglong *local_80;
  int32_t ***local_78 [3];
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1801eb080 ^ (ulonglong)auStack_d8;
  pcVar5 = (char *)(**(code **)(DAT_1801f3ae0 + 8))();
  local_b8 = pcVar5;
  fVar20 = (float)(**(code **)(DAT_1801f3ae0 + 0x200))();
  fVar1 = *(float *)(pcVar5 + 0x54);
  fVar21 = (float)(**(code **)(DAT_1801f3ae0 + 0x2f8))();
  iVar16 = 0;
  uVar11 = DAT_1801fb3d8 - DAT_1801fb3d0 >> 5;
  iVar17 = DAT_1801f39ec;
  if (uVar11 != 0) {
    uVar7 = 0;
    lVar14 = 0;
    do {
      if ((ulonglong)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5) <= uVar7) goto LAB_1800dd214;
      pcVar6 = (char *)(uVar7 * 0x20 + DAT_1801fb3d0);
      if (0xf < *(ulonglong *)(lVar14 + 0x18 + DAT_1801fb3d0)) {
        pcVar6 = *(char **)(lVar14 + DAT_1801fb3d0);
      }
      lVar12 = (longlong)param_2 - (longlong)pcVar6;
      do {
        cVar4 = *pcVar6;
        cVar2 = pcVar6[lVar12];
        if (cVar4 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      iVar17 = iVar16;
      if (cVar4 == cVar2) break;
      iVar16 = iVar16 + 1;
      lVar14 = lVar14 + 0x20;
      uVar7 = (ulonglong)iVar16;
      iVar17 = DAT_1801f39ec;
    } while (uVar7 < uVar11);
  }
  DAT_1801f39ec = iVar17;
  (**(code **)(DAT_1801f3ae0 + 0x1e8))((fVar20 - (fVar1 + fVar1)) - (fVar21 + fVar21));
  local_90 = (ulonglong *)0x1801d52c0;
  local_98 = 0xb000000000000000;
  local_88 = 1;
  local_80 = &local_98;
  local_a8 = "##arrow_combo_{}";
  uStack_a0 = 0x10;
  FUN_1800b7670((longlong *)local_78,(longlong *)&local_a8,&local_88);
  ppppuVar9 = local_78;
  if (0xf < local_60) {
    ppppuVar9 = (int32_t ****)local_78[0];
  }
  pcVar15 = *(code **)(DAT_1801f3ae0 + 0x3f0);
  cVar4 = (*pcVar15)(ppppuVar9,param_2,0x20);
  FUN_1800a6800((longlong *)local_78);
  if (cVar4 != '\0') {
    iVar17 = 0;
    if (DAT_1801fb3d8 - DAT_1801fb3d0 >> 5 != 0) {
      local_a8 = (char *)0x0;
      lVar14 = 0;
      do {
        lVar3 = DAT_1801fb3d8;
        lVar12 = DAT_1801fb3d0;
        plVar18 = (longlong *)(DAT_1801fb3d0 + lVar14);
        sVar8 = 0xffffffffffffffff;
        do {
          sVar8 = sVar8 + 1;
        } while (*(char *)((longlong)param_2 + sVar8) != '\0');
        _Size = *(size_t *)(DAT_1801fb3d0 + 0x10 + lVar14);
        uVar11 = *(ulonglong *)(DAT_1801fb3d0 + 0x18 + lVar14);
        _Buf1 = plVar18;
        if (0xf < uVar11) {
          _Buf1 = (longlong *)*plVar18;
        }
        if (_Size == sVar8) {
          if (_Size == 0) {
            bVar19 = true;
          }
          else {
            iVar16 = memcmp(_Buf1,param_2,_Size);
            bVar19 = iVar16 == 0;
            uVar11 = *(ulonglong *)(lVar12 + 0x18 + lVar14);
          }
        }
        else {
          bVar19 = false;
        }
        local_98 = 0;
        if ((char *)(lVar3 - lVar12 >> 5) <= local_a8) {
          FUN_1800ddc20();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        if (0xf < uVar11) {
          plVar18 = (longlong *)*plVar18;
        }
        pcVar15 = (code *)&local_98;
        cVar4 = (**(code **)(DAT_1801f3ae0 + 0x5f0))(plVar18,bVar19,0);
        if (cVar4 != '\0') {
          DAT_1801f39ec = iVar17;
          if ((ulonglong)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5) <= (ulonglong)(longlong)iVar17) {
LAB_1800dd214:
            FUN_1800ddc20();
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          param_2 = (void *)((longlong)iVar17 * 0x20 + DAT_1801fb3d0);
          if (0xf < *(ulonglong *)(DAT_1801fb3d0 + 0x18 + lVar14)) {
            param_2 = *(void **)(DAT_1801fb3d0 + lVar14);
          }
        }
        if (bVar19 != false) {
          (**(code **)(DAT_1801f3ae0 + 0x8a0))();
        }
        iVar17 = iVar17 + 1;
        local_a8 = local_a8 + 1;
        lVar14 = lVar14 + 0x20;
        pcVar5 = local_b8;
      } while ((ulonglong)(longlong)iVar17 < (ulonglong)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5));
    }
    (**(code **)(DAT_1801f3ae0 + 0x3f8))();
  }
  (**(code **)(DAT_1801f3ae0 + 0x1f0))();
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(0,fVar1);
  local_80 = (ulonglong *)0x1801d52c0;
  local_88 = 0xb000000000000000;
  local_98 = 1;
  local_90 = &local_88;
  local_b8 = "##arrow_combo_l_{}";
  uStack_b0 = 0x12;
  FUN_1800b7670((longlong *)local_78,(longlong *)&local_b8,&local_98);
  ppppuVar9 = local_78;
  if (0xf < local_60) {
    ppppuVar9 = (int32_t ****)local_78[0];
  }
  cVar4 = (**(code **)(DAT_1801f3ae0 + 0x3a0))(ppppuVar9,0);
  FUN_1800a6800((longlong *)local_78);
  if ((cVar4 != '\0') && (DAT_1801f39ec = DAT_1801f39ec + -1, DAT_1801f39ec < 0)) {
    DAT_1801f39ec = (int)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5) + -1;
  }
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(0,fVar1);
  local_80 = (ulonglong *)0x1801d52c0;
  local_88 = 0xb000000000000000;
  local_98 = 1;
  local_90 = &local_88;
  local_b8 = "##arrow_combo_r_{}";
  uStack_b0 = 0x12;
  FUN_1800b7670((longlong *)local_78,(longlong *)&local_b8,&local_98);
  ppppuVar9 = local_78;
  if (0xf < local_60) {
    ppppuVar9 = (int32_t ****)local_78[0];
  }
  pcVar13 = *(code **)(DAT_1801f3ae0 + 0x3a0);
  cVar4 = (*pcVar13)(ppppuVar9,1);
  FUN_1800a6800((longlong *)local_78);
  if ((cVar4 != '\0') &&
     (DAT_1801f39ec = DAT_1801f39ec + 1,
     (ulonglong)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5) <= (ulonglong)(longlong)DAT_1801f39ec)) {
    DAT_1801f39ec = 0;
  }
  pcVar10 = *(code **)(DAT_1801f3ae0 + 0x2a0);
  (*pcVar10)(0,*(int32_t *)(pcVar5 + 0x54));
  FUN_1800c70b0("Aurora Preset",pcVar10,pcVar13,pcVar15);
  FUN_1801252c0(local_58 ^ (ulonglong)auStack_d8);
  return;
}

// ---- Function: FUN_1800dd220 ----
void FUN_1800dd220(void)

{
  ulonglong *puVar1;
  int32_t uVar2;
  longlong *plVar3;
  char *pcVar4;
  int32_t local_res8 [2];
  byte local_res10 [8];
  int32_t local_18 [2];
  
  if (2 < DAT_1801ec1a4) {
    DAT_1801ec1a4 = 0;
  }
  FUN_180113bb0();
  local_res8[0] = DAT_1801f39d8;
  plVar3 = FUN_1800ddeb0((float *)&DAT_1801f7300,local_18,(byte *)local_res8);
  uVar2 = *(int32_t *)(*plVar3 + 0x18);
  local_res10[0] = 0x79;
  local_res10[1] = 10;
  local_res10[2] = 0xaa;
  local_res10[3] = 0x97;
  plVar3 = FUN_1800ddeb0((float *)&DAT_1801fb390,local_18,local_res10);
  *(int32_t *)(*plVar3 + 0x18) = uVar2;
  local_res8[0] = DAT_1801f39dc;
  plVar3 = FUN_1800ddeb0((float *)&DAT_1801f7300,local_18,(byte *)local_res8);
  uVar2 = *(int32_t *)(*plVar3 + 0x18);
  local_res10[0] = 0x5c;
  local_res10[1] = 0xaf;
  local_res10[2] = 0xfd;
  local_res10[3] = 0x30;
  plVar3 = FUN_1800ddeb0((float *)&DAT_1801fb390,local_18,local_res10);
  *(int32_t *)(*plVar3 + 0x18) = uVar2;
  local_res8[0] = DAT_1801f39d0;
  plVar3 = FUN_1800ddeb0((float *)&DAT_1801f7300,local_18,(byte *)local_res8);
  uVar2 = *(int32_t *)(*plVar3 + 0x18);
  local_res10[0] = 0x2d;
  local_res10[1] = 0x8d;
  local_res10[2] = 0x89;
  local_res10[3] = 0xbb;
  plVar3 = FUN_1800ddeb0((float *)&DAT_1801fb390,local_18,local_res10);
  *(int32_t *)(*plVar3 + 0x18) = uVar2;
  local_res8[0] = DAT_1801f39c8;
  plVar3 = FUN_1800ddeb0((float *)&DAT_1801f7300,local_18,(byte *)local_res8);
  uVar2 = *(int32_t *)(*plVar3 + 0x18);
  local_res10[0] = 0x9f;
  local_res10[1] = 0x82;
  local_res10[2] = 0x77;
  local_res10[3] = 0xb6;
  plVar3 = FUN_1800ddeb0((float *)&DAT_1801fb390,local_18,local_res10);
  *(int32_t *)(*plVar3 + 0x18) = uVar2;
  local_res8[0] = DAT_1801f39cc;
  plVar3 = FUN_1800ddeb0((float *)&DAT_1801f7300,local_18,(byte *)local_res8);
  uVar2 = *(int32_t *)(*plVar3 + 0x18);
  local_res10[0] = 0x40;
  local_res10[1] = 0x98;
  local_res10[2] = 0xa6;
  local_res10[3] = 0x54;
  plVar3 = FUN_1800ddeb0((float *)&DAT_1801fb390,local_18,local_res10);
  *(int32_t *)(*plVar3 + 0x18) = uVar2;
  local_res8[0] = DAT_1801f39d4;
  plVar3 = FUN_1800ddeb0((float *)&DAT_1801f7300,local_18,(byte *)local_res8);
  uVar2 = *(int32_t *)(*plVar3 + 0x18);
  local_res10[0] = 0x44;
  local_res10[1] = 0x76;
  local_res10[2] = 0x73;
  local_res10[3] = 0xae;
  plVar3 = FUN_1800ddeb0((float *)&DAT_1801fb390,local_18,local_res10);
  *(int32_t *)(*plVar3 + 0x18) = uVar2;
  DAT_1801ec1a0 = DAT_1801f39ec;
  pcVar4 = (char *)((longlong)DAT_1801f39ec * 0x20 + DAT_1801fb3d0);
  if (pcVar4 != s_Color_Preset_1_1801ec6a0) {
    puVar1 = (ulonglong *)(pcVar4 + 0x10);
    if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
      pcVar4 = *(char **)pcVar4;
    }
    FUN_1800de6e0((longlong *)s_Color_Preset_1_1801ec6a0,(int32_t *)pcVar4,*puVar1);
  }
  FUN_1800ddb30(DAT_1801ec1a0);
  return;
}

// ---- Function: FUN_1800dd440 ----
void FUN_1800dd440(int32_t param_1,int32_t *param_2,int32_t *param_3,int32_t param_4)

{
  char *pcVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  char *pcVar4;
  int32_t *puVar5;
  int32_t uVar6;
  code *pcVar7;
  ulonglong uVar8;
  int32_t uVar9;
  int32_t local_res8;
  int32_t local_resc;
  int32_t local_res10 [6];
  int32_t local_28;
  int32_t uStack_20;
  
  if (DAT_1801f3b19 != '\0') {
    (**(code **)(DAT_1801f3ae0 + 0x880))(1);
    local_28 = _DAT_1801d9c80;
    uStack_20 = _UNK_1801d9c88;
    (**(code **)(DAT_1801f3ae0 + 0x1a0))(0x15,&local_28);
    local_28 = _DAT_1801d9c90;
    uStack_20 = _UNK_1801d9c98;
    (**(code **)(DAT_1801f3ae0 + 0x1a0))(0,&local_28);
    (**(code **)(DAT_1801f3ae0 + 0x118))(local_res10);
    local_res8 = local_res10[0];
    local_resc = 0;
    param_3 = *(int32_t **)(DAT_1801f3ae0 + 0x388);
    (*(code *)param_3)("You must restart your game to apply the changes below.",&local_res8);
    param_2 = *(int32_t **)(DAT_1801f3ae0 + 0x1a8);
    (*(code *)param_2)(2);
    (**(code **)(DAT_1801f3ae0 + 0x888))();
  }
  FUN_1800c70b0("Note: CTRL+Click to input value manually",param_2,param_3,param_4);
  FUN_1800c70b0("Clouds Config",param_2,param_3,param_4);
  (**(code **)(DAT_1801f3ae0 + 0x2c0))();
  FUN_1800dd7f0("Extrasunny",0x97aa0a79,&DAT_1801f39d8);
  FUN_1800dd7f0("Clouds",0x30fdaf5c,&DAT_1801f39dc);
  FUN_1800dd7f0("Overcast",0xbb898d2d,&DAT_1801f39d0);
  FUN_1800dd7f0("Thunder",0xb677829f,&DAT_1801f39c8);
  FUN_1800dd7f0(&DAT_1801d51e0,0x54a69840,&DAT_1801f39cc);
  FUN_1800dd7f0("Foggy",0xae737644,&DAT_1801f39d4);
  (**(code **)(DAT_1801f3ae0 + 0x298))();
  (**(code **)(DAT_1801f3ae0 + 0x478))
            ("Clouds Speed",&DAT_1801ec1a8,0,DAT_1801d8edc,&DAT_1801cb828,0x10);
  (**(code **)(DAT_1801f3ae0 + 0x298))();
  puVar2 = &DAT_1801ec180;
  uVar9 = 4;
  uVar6 = 0;
  (**(code **)(DAT_1801f3ae0 + 0x4a0))
            ("Performance Mode##clouds_config",&DAT_1801ec180,0,4,&DAT_1801d5314,0);
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(*(code **)(DAT_1801f3ae0 + 0x2a0),DAT_1801d8f38);
  FUN_1800dcc80("Lower number means higher quality",puVar2,uVar6,uVar9);
  puVar3 = &DAT_1801f39f6;
  pcVar7 = *(code **)(DAT_1801f3ae0 + 0x3a8);
  (*pcVar7)("Optimized Marching");
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(*(code **)(DAT_1801f3ae0 + 0x2a0),DAT_1801d8f38);
  FUN_1800dcc80("Adds some banding and flickering, but improves FPS.",puVar3,pcVar7,uVar9);
  (**(code **)(DAT_1801f3ae0 + 0x2c8))();
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  FUN_1800c70b0("Aurora Config",puVar3,pcVar7,uVar9);
  (**(code **)(DAT_1801f3ae0 + 0x2c0))();
  pcVar1 = "Aurora Enabled";
  (**(code **)(DAT_1801f3ae0 + 0x3a8))("Aurora Enabled",&DAT_1801f39f4);
  pcVar4 = s_Color_Preset_1_1801ec6a0;
  if (0xf < DAT_1801ec6b8) {
    pcVar4 = (char *)s_Color_Preset_1_1801ec6a0._0_8_;
  }
  FUN_1800dcd20(pcVar1,pcVar4);
  if ((ulonglong)(longlong)DAT_1801f39ec < (ulonglong)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5)) {
    puVar5 = (int32_t *)(DAT_1801fb3d0 + (longlong)DAT_1801f39ec * 0x20);
    if (0xf < (ulonglong)puVar5[3]) {
      puVar5 = (int32_t *)*puVar5;
    }
    uVar8 = 0xffffffffffffffff;
    do {
      uVar8 = uVar8 + 1;
    } while (*(char *)((longlong)puVar5 + uVar8) != '\0');
    FUN_1800de6e0((longlong *)s_Color_Preset_1_1801ec6a0,puVar5,uVar8);
    if (DAT_1801ec1a0 != DAT_1801f39ec) {
      DAT_1801ec1a0 = FUN_1800ddb30(DAT_1801f39ec);
    }
                    
                    
    (**(code **)(DAT_1801f3ae0 + 0x2c8))(*(code **)(DAT_1801f3ae0 + 0x2c8));
    return;
  }
  FUN_1800ddc20();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// ---- Function: FUN_1800dd7f0 ----
void FUN_1800dd7f0(int32_t param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int32_t uVar3;
  int32_t *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int32_t *puVar9;
  char cVar10;
  longlong *plVar11;
  int32_t (*pauVar12) [32];
  int32_t ****ppppuVar13;
  ulonglong uVar14;
  int32_t auStack_e8 [32];
  uint local_c8 [2];
  uint local_c0 [2];
  uint local_b8 [4];
  char *local_a8;
  int32_t uStack_a0;
  ulonglong local_98;
  int32_t *local_90;
  int32_t local_88 [2];
  int32_t local_78;
  int32_t local_70;
  int32_t ***local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_e8;
  local_c0[0] = param_2;
  plVar11 = FUN_1800ce7e0((float *)&DAT_1801fb390,&local_98,(byte *)local_c0);
  uVar3 = *(int32_t *)(*plVar11 + 0x18);
  local_78 = 0xb000000000000000;
  local_98 = 1;
  local_90 = &local_78;
  local_a8 = "Configuration [{}]##clouds_config";
  uStack_a0 = 0x21;
  local_70 = param_1;
  FUN_1800b7670((longlong *)local_68,(longlong *)&local_a8,&local_98);
  ppppuVar13 = local_68;
  if (0xf < local_50) {
    ppppuVar13 = (int32_t ****)local_68[0];
  }
  cVar10 = (**(code **)(DAT_1801f3ae0 + 0x3f0))(ppppuVar13,uVar3,0);
  FUN_1800a6800((longlong *)local_68);
  puVar9 = DAT_1801f7308;
  if (cVar10 != '\0') {
    uVar8 = local_c0[0];
    for (puVar4 = (int32_t *)*DAT_1801f7308; local_c0[0] = uVar8, puVar4 != puVar9;
        puVar4 = (int32_t *)*puVar4) {
      uVar2 = *(uint *)(puVar4 + 2);
      lVar5 = puVar4[3];
      local_c8[0] = uVar2;
      if (uVar2 == 0x13371337) {
LAB_1800dd9b9:
        plVar11 = FUN_1800ce7e0((float *)&DAT_1801fb390,&local_a8,(byte *)local_c0);
        lVar6 = *(longlong *)(*plVar11 + 0x18);
        local_78 = 0;
        cVar10 = (**(code **)(DAT_1801f3ae0 + 0x5f0))(lVar5,lVar5 == lVar6,0,&local_78);
        if (cVar10 != '\0') {
          *param_3 = uVar2;
          local_c8[0] = local_c0[0];
          local_b8[0] = uVar2;
          plVar11 = FUN_1800ce7e0((float *)&DAT_1801f7300,local_88,(byte *)local_b8);
          uVar3 = *(int32_t *)(*plVar11 + 0x18);
          plVar11 = FUN_1800ce7e0((float *)&DAT_1801fb390,local_68,(byte *)local_c8);
          *(int32_t *)(*plVar11 + 0x18) = uVar3;
          if (local_c8[0] < 0x97aa0a7a) {
            if (local_c8[0] == 0x97aa0a79) {
              DAT_1801f39d8 = local_b8[0];
            }
            else if (local_c8[0] == 0x30fdaf5c) {
              DAT_1801f39dc = local_b8[0];
            }
            else if (local_c8[0] == 0x54a69840) {
              DAT_1801f39cc = local_b8[0];
            }
            else if (local_c8[0] == 0x6db1a50d) {
              DAT_1801f39e0 = local_b8[0];
            }
          }
          else if (local_c8[0] == 0xae737644) {
            DAT_1801f39d4 = local_b8[0];
          }
          else if (local_c8[0] == 0xb677829f) {
            DAT_1801f39c8 = local_b8[0];
          }
          else if (local_c8[0] == 0xbb898d2d) {
            DAT_1801f39d0 = local_b8[0];
          }
          if (DAT_1801f3a34 == local_c8[0]) {
            FUN_180112a40(local_b8[0]);
          }
        }
        if (lVar5 == lVar6) {
          (**(code **)(DAT_1801f3ae0 + 0x8a0))();
        }
      }
      else {
        uVar14 = ((((ulonglong)(uVar2 >> 8 & 0xff) ^
                   ((ulonglong)(uVar2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3
                  ^ (ulonglong)(uVar2 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar2 >> 0x18))
                 * 0x100000001b3 & DAT_1801ec430;
        lVar6 = *(longlong *)(DAT_1801ec418 + 8 + uVar14 * 0x10);
        if (lVar6 != DAT_1801ec408) {
          lVar7 = *(longlong *)(DAT_1801ec418 + uVar14 * 0x10);
          uVar1 = *(uint *)(lVar6 + 0x10);
          while (uVar2 != uVar1) {
            if (lVar6 == lVar7) goto LAB_1800ddae1;
            lVar6 = *(longlong *)(lVar6 + 8);
            uVar1 = *(uint *)(lVar6 + 0x10);
          }
          plVar11 = FUN_1800ddc40(lVar7,&local_98,(byte *)local_c8);
          lVar6 = *plVar11;
          pauVar12 = thunk_FUN_180123e90(*(int32_t (**) [32])(lVar6 + 0x98),
                                         *(int32_t (**) [32])(lVar6 + 0xa0),uVar8);
          if (pauVar12 != *(int32_t (**) [32])(lVar6 + 0xa0)) goto LAB_1800dd9b9;
        }
      }
LAB_1800ddae1:
      uVar8 = local_c0[0];
    }
    (**(code **)(DAT_1801f3ae0 + 0x3f8))();
  }
  FUN_1801252c0(local_48 ^ (ulonglong)auStack_e8);
  return;
}

