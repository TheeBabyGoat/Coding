#include "FUN_1800dd220.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800dd220(void) {
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
}

