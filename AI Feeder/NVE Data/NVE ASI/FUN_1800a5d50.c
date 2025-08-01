#include "FUN_1800a5d50.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a5d50(int32_t param_1) {
int32_t *puVar1;
  ulonglong *puVar2;
  int32_t auStack_f8 [32];
  int32_t *local_d8;
  int32_t *local_d0;
  int32_t *local_c8;
  int32_t *local_c0;
  ulonglong local_b8;
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
  int32_t uStack_20;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_f8;
  local_a8 = _DAT_1801d9020;
  uStack_a0 = _UNK_1801d9028;
  local_b8 = s_Low__Vanilla__1801d5858._0_8_;
  uStack_b0 = (ulonglong)CONCAT14(s_Low__Vanilla__1801d5858[0xc],s_Low__Vanilla__1801d5858._8_4_);
  uStack_90 = 0;
  local_88 = _DAT_1801d8fb0;
  uStack_80 = _UNK_1801d8fb8;
  local_98 = (ulonglong)CONCAT24(s_Medium_1801d5868._4_2_,s_Medium_1801d5868._0_4_);
  uStack_70 = 0;
  local_68 = _DAT_1801d8f90;
  uStack_60 = _UNK_1801d8f98;
  local_78 = 0x68676948;
  local_48 = _DAT_1801d8fd0;
  uStack_40 = _UNK_1801d8fd8;
  local_58 = 0x64656c6261736944;
  uStack_50 = 0;
  uStack_30 = 0;
  local_28 = _DAT_1801d8fb0;
  uStack_20 = _UNK_1801d8fb8;
  local_38 = (ulonglong)CONCAT24(s_Custom_1801d5870._4_2_,s_Custom_1801d5870._0_4_);
  puVar1 = (int32_t *)FUN_1800ba8c0(param_1,5);
  _DAT_1801fca48 = puVar1 + 0x14;
  local_c0 = &DAT_1801fca38;
  puVar2 = &local_b8;
  local_c8 = &DAT_1801fca38;
  DAT_1801fca38 = puVar1;
  DAT_1801fca40 = puVar1;
  local_d8 = puVar1;
  do {
    local_d0 = puVar1;
    FUN_1800ba630(puVar1,puVar2);
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 4;
  } while (puVar2 != local_18);
  DAT_1801fca40 = puVar1;
  local_d0 = puVar1;
  _eh_vector_destructor_iterator_(&local_b8,0x20,5,thunk_FUN_1800a6800);
  atexit((_func_5014 *)&LAB_1801564c0);
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_f8);
  return;
}
}

