#include "FUN_1800a6b30.h"
#include <stdint.h>
#include <stddef.h>

longlong FUN_1800a6b30(longlong param_1) {
int32_t *puVar1;
  longlong lVar2;
  
  *(int32_t *)(param_1 + 0x80) = 0;
  *(int32_t *)(param_1 + 0x88) = 0;
  *(int32_t *)(param_1 + 0x90) = 0;
  *(int32_t *)(param_1 + 0x98) = 0;
  *(int32_t *)(param_1 + 0xa0) = 0;
  *(int32_t *)(param_1 + 0xa8) = 0;
  *(int32_t *)(param_1 + 0xb0) = 0;
  *(int32_t *)(param_1 + 0xb8) = 0;
  *(int32_t *)(param_1 + 0xc0) = 0;
  *(int32_t *)(param_1 + 200) = 0;
  *(int32_t *)(param_1 + 0xd0) = 0;
  *(int32_t *)(param_1 + 0x1d4) = 0;
  *(int32_t *)(param_1 + 0x1dc) = 0;
  *(int32_t *)(param_1 + 0x1e4) = 0;
  *(int32_t *)(param_1 + 0x234) = 0;
  *(int32_t *)(param_1 + 0x23c) = 0;
  *(int32_t *)(param_1 + 0x24c) = 0;
  *(int32_t *)(param_1 + 0x254) = 0;
  *(int32_t *)(param_1 + 0x278) = 0;
  *(int32_t *)(param_1 + 0x280) = 0;
  *(int32_t *)(param_1 + 0x28c) = 0;
  *(int32_t *)(param_1 + 0x294) = 0;
  lVar2 = 0x18;
  puVar1 = (int32_t *)(param_1 + 700);
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(int32_t *)((longlong)puVar1 + 100) = 0;
    *(int32_t *)((longlong)puVar1 + 0x6c) = 0;
    *(int32_t *)((longlong)puVar1 + 0x74) = 0;
    puVar1[0x21] = 0;
    *(int32_t *)(puVar1 + 0x22) = 0;
    puVar1 = (int32_t *)((longlong)puVar1 + 300);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}
}

