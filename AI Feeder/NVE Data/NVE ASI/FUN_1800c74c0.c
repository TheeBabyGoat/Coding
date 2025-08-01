#include "FUN_1800c74c0.h"
#include <stdint.h>
#include <stddef.h>

int32_t * FUN_1800c74c0(int32_t *param_1,int32_t param_2) {
float *pfVar1;
  void *pvVar2;
  
  *param_1 = param_2;
  *(int32_t *)(param_1 + 4) = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  *(int32_t *)(param_1 + 0x18) = 0x3f800000;
  *(int32_t *)(param_1 + 0x20) = 0;
  pfVar1 = (float *)(param_1 + 0x28);
  *pfVar1 = 0.0;
  *(int32_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  pvVar2 = operator_new(0x80);
  *(void **)pvVar2 = pvVar2;
  *(void **)((longlong)pvVar2 + 8) = pvVar2;
  *(void **)(param_1 + 0x30) = pvVar2;
  *(ulonglong *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 0x48) = 0;
  *(int32_t *)(param_1 + 0x50) = 0;
  *(int32_t *)(param_1 + 0x58) = 7;
  *(int32_t *)(param_1 + 0x60) = 8;
  *pfVar1 = 1.0;
  FUN_1800a9140((ulonglong *)(param_1 + 0x40),0x10,*(int32_t *)(param_1 + 0x30));
  param_1[0x68] = 1;
  *(int32_t *)(param_1 + 0x6c) = 0;
  *(int32_t *)(param_1 + 0x74) = 0;
  *(int32_t *)(param_1 + 0x7c) = 0;
  *(int32_t *)(param_1 + 0x84) = 0;
  *(int32_t *)(param_1 + 0x8c) = 0x3f800000;
  FUN_1800c9ae0(pfVar1,0x20);
  return param_1;
}
}

