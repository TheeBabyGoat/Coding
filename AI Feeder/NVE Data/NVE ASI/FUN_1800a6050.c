#include "FUN_1800a6050.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a6050(int32_t param_1) {
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
  ulonglong uStack_90;
  int32_t local_88;
  int32_t uStack_80;
  char local_78 [8];
  int32_t uStack_70;
  int32_t local_68;
  int32_t uStack_60;
  int32_t local_58;
  int32_t uStack_50;
  int32_t local_48;
  int32_t uStack_40;
  int32_t local_38;
  ulonglong uStack_30;
  int32_t local_28;
  int32_t uStack_20;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_f8;
  local_a8 = _DAT_1801d9030;
  uStack_a0 = _UNK_1801d9038;
  local_b8 = s_Very_Low__256__1801d5878._0_8_;
  uStack_b0 = (ulonglong)
              CONCAT24(s_Very_Low__256__1801d5878._12_2_,s_Very_Low__256__1801d5878._8_4_);
  local_88 = _DAT_1801d8fe0;
  uStack_80 = _UNK_1801d8fe8;
  local_98 = DAT_1801d5888;
  uStack_90 = (ulonglong)DAT_1801d5890;
  local_68 = _DAT_1801d9020;
  uStack_60 = _UNK_1801d9028;
  local_78 = (char  [8])s_Medium__1024__1801d5898._0_8_;
  uStack_70 = (ulonglong)CONCAT14(s_Medium__1024__1801d5898[0xc],s_Medium__1024__1801d5898._8_4_);
  local_48 = _DAT_1801d9000;
  uStack_40 = _UNK_1801d9008;
  local_58 = DAT_1801d58a8;
  uStack_50 = (ulonglong)CONCAT12(DAT_1801d58b2,DAT_1801d58b0);
  local_28 = _DAT_1801d9010;
  uStack_20 = _UNK_1801d9018;
  local_38 = DAT_1801d58b8;
  uStack_30 = (ulonglong)DAT_1801d58c0;
  puVar1 = (int32_t *)FUN_1800ba8c0(param_1,5);
  _DAT_1801fca78 = puVar1 + 0x14;
  local_c0 = &DAT_1801fca68;
  puVar2 = &local_b8;
  local_c8 = &DAT_1801fca68;
  DAT_1801fca68 = puVar1;
  DAT_1801fca70 = puVar1;
  local_d8 = puVar1;
  do {
    local_d0 = puVar1;
    FUN_1800ba630(puVar1,puVar2);
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 4;
  } while (puVar2 != local_18);
  DAT_1801fca70 = puVar1;
  local_d0 = puVar1;
  _eh_vector_destructor_iterator_(&local_b8,0x20,5,thunk_FUN_1800a6800);
  atexit((_func_5014 *)&LAB_180156470);
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_f8);
  return;
}
}

