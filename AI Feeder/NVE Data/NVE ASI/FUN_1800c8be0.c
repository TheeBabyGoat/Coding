#include "FUN_1800c8be0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c8be0(longlong *param_1,longlong *param_2) {
int32_t *puVar1;
  int32_t *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  longlong *local_res8;
  longlong *local_res10;
  int local_118 [2];
  int local_110 [2];
  uint local_108;
  ulonglong *local_100;
  int32_t local_f8;
  int local_f0;
  int32_t local_ec;
  uint uStack_e4;
  ushort uStack_e0;
  int32_t local_c8 [4];
  int32_t local_c4 [4];
  longlong *local_c0;
  int32_t *local_b8;
  int32_t local_b0;
  float local_a8 [2];
  int32_t *local_a0;
  int32_t local_98;
  ulonglong local_90;
  int32_t local_88;
  int32_t uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  
  local_res8 = param_1;
  local_res10 = param_2;
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1f0,&local_c0);
  (**(code **)(*plVar10 + 8))(plVar10,&DAT_1801cc1e0,&local_100);
  puVar4 = local_100;
  if (local_100 == (ulonglong *)0x0) {
    return;
  }
  local_108 = 0;
  (**(code **)(*param_1 + 0x58))(param_1,local_c4,local_c8);
  local_b8 = &DAT_1801ee948;
  local_b0 = 1;
  AcquireSRWLockShared((PSRWLOCK)&DAT_1801ee948);
  local_a8[0] = *(float *)(puVar4 + 4);
  local_a0 = (int32_t *)0x0;
  local_98 = 0;
  local_a0 = (int32_t *)operator_new(0x90);
  *local_a0 = local_a0;
  local_a0[1] = local_a0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = puVar4[10];
  local_70 = puVar4[0xb];
  FUN_1800a9140(&local_90,(longlong)(puVar4[8] - puVar4[7]) >> 3,local_a0);
  puVar1 = (int32_t *)puVar4[5];
  for (puVar2 = (int32_t *)*puVar1; puVar2 != puVar1; puVar2 = (int32_t *)*puVar2) {
    FUN_1800cae20(local_a8,&local_f8,puVar2 + 2);
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1801ee948);
  puVar2 = local_a0;
  local_b0 = 0;
  for (puVar1 = (int32_t *)*local_a0; puVar11 = (ulonglong *)0x0, puVar1 != puVar2;
      puVar1 = (int32_t *)*puVar1) {
    if (((((*(int *)((longlong)puVar1 + 0x1c) != 0) && (3 < *(uint *)(puVar1 + 3))) &&
         (*puVar4 <= (ulonglong)puVar1[0x10])) && (puVar1[0x11] + 1 < *puVar4)) &&
       ((((**(code **)(*plVar10 + 0x50))(plVar10,&local_f8,puVar1[2]), uStack_e0 < 2 ||
         (cVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,0x19), cVar7 != '\0')) &&
        (uStack_e4 - 0x13 < 2)))) {
      local_118[0] = 0;
      local_110[0] = 0;
      FUN_18011cdd0(local_118,local_110);
      if (((local_f0 == local_118[0]) || ((int)local_ec == local_110[0])) &&
         (0xc < *(uint *)(puVar1 + 3))) {
        puVar11 = (ulonglong *)puVar1[2];
        *local_c0 = (longlong)puVar11;
        local_108 = uStack_e4;
        break;
      }
    }
  }
  lVar3 = local_c0[2];
  if (puVar11 == (ulonglong *)0x0) {
    plVar5 = (longlong *)*local_c0;
    if (plVar5 != (longlong *)0x0) {
      iVar8 = (**(code **)(*plVar10 + 0x18))(plVar10);
      if (iVar8 < 0xc001) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      *local_c0 = 0;
      local_c0[2] = 0;
    }
  }
  else {
    iVar8 = (**(code **)(*plVar10 + 0x18))(plVar10);
    puVar4 = (ulonglong *)*local_c0;
    if ((puVar11 != puVar4) || (lVar3 == 0)) {
      if (puVar4 != (ulonglong *)0x0) {
        iVar9 = (**(code **)(*plVar10 + 0x18))(plVar10);
        if (iVar9 < 0xc001) {
          (**(code **)(*puVar4 + 0x10))(puVar4);
        }
        *local_c0 = 0;
      }
      local_f8._4_4_ = local_108;
      if ((iVar8 - 0x10000U & 0xfffeffff) != 0) {
        local_f8._4_4_ = FUN_1800cb180(local_108);
      }
      local_f8._0_4_ = 4;
      local_f0 = 0;
      local_ec = 1;
      uStack_e4 = 1;
      cVar7 = (**(code **)(*plVar10 + 0x58))(plVar10,puVar11,0xc0,&local_f8,local_c0 + 2);
      if (cVar7 == '\0') goto LAB_1800c8f2a;
      *local_c0 = (longlong)puVar11;
    }
    plVar5 = local_res10;
    if (iVar8 < 0xb001) {
      (**(code **)(*local_res10 + 0x38))(local_res10,0,0,0);
    }
    local_118[0] = 0xf0;
    local_110[0] = 0xc0;
    local_100 = puVar11;
    (**(code **)(*plVar5 + 0x20))(plVar5,1,&local_100,local_118,local_110);
  }
LAB_1800c8f2a:
  plVar5 = local_res8;
  if (lVar3 != local_c0[2]) {
    (**(code **)(*local_res8 + 8))(local_res8,&DAT_1801cc1f0,&local_res8);
    plVar6 = local_res8;
    (**(code **)(*plVar5 + 0x170))(plVar5,"DEPTH",local_res8[2]);
    local_res8 = plVar6;
    (**(code **)(*plVar5 + 0x98))(plVar5,0,&LAB_1800c9dc0,&local_res8);
    (**(code **)(*plVar10 + 0x60))(plVar10,lVar3);
  }
  FUN_1800c8fd0((longlong)local_a8);
  return;
}
}

