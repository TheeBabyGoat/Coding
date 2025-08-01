#include "FUN_1800a5f00.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a5f00(int32_t param_1) {
int32_t *puVar1;
  ulonglong *puVar2;
  int32_t auStack_98 [32];
  int32_t *local_78;
  int32_t *local_70;
  int32_t *local_68;
  int32_t *local_60;
  ulonglong local_58 [3];
  int32_t uStack_40;
  int32_t local_38;
  int32_t uStack_30;
  int32_t local_28;
  int32_t uStack_20;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_98;
  local_58[2] = _DAT_1801d8fd0;
  uStack_40 = _UNK_1801d8fd8;
  local_58[0] = 0x3120746573657250;
  local_58[1] = 0;
  local_28 = _DAT_1801d8fd0;
  uStack_20 = _UNK_1801d8fd8;
  local_38 = 0x3220746573657250;
  uStack_30 = 0;
  puVar1 = (int32_t *)FUN_1800ba8c0(param_1,2);
  _DAT_1801fca60 = puVar1 + 8;
  local_60 = &DAT_1801fca50;
  puVar2 = local_58;
  local_68 = &DAT_1801fca50;
  DAT_1801fca50 = puVar1;
  DAT_1801fca58 = puVar1;
  local_78 = puVar1;
  do {
    local_70 = puVar1;
    FUN_1800ba630(puVar1,puVar2);
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 4;
  } while (puVar2 != local_18);
  DAT_1801fca58 = puVar1;
  local_70 = puVar1;
  _eh_vector_destructor_iterator_(local_58,0x20,2,thunk_FUN_1800a6800);
  atexit((_func_5014 *)&LAB_1801564a0);
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_98);
  return;
}
}

