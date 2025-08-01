#include "FUN_1800e0ba0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800e0ba0();
    local_30 = FUN_1800c6f60();
    uStack_90 = 0;
    local_88 = _DAT_1801d8f70;
    uStack_80 = _UNK_1801d8f78;
    local_98 = 0;
    uStack_70 = 0;
    local_68 = _DAT_1801d8f70;
    uStack_60 = _UNK_1801d8f78;
    local_78 = 0;
    local_50 = (longlong *)0x0;
    local_48 = 0;
    lStack_40 = 0;
    local_38 = 0;
    local_28 = 0;
    local_e8 = "C7 05 ? ? ? ? ? ? ? ? 3A C1";
    local_e0 = 0x1b;
    FUN_180117400(&local_98,&local_e8);
    FUN_1801175d0(&local_98,0xffffffff);
    if (7 < (ulonglong)(local_48 - (longlong)local_50)) {
FUN_1801175d0(&local_98,1);
      lVar1 = *local_50;
      VirtualProtect((LPVOID)(lVar1 + -0x28),6,0x40,local_d8);
      *(int32_t *)(lVar1 + -0x28) = 0x90909090;
      *(int32_t *)(lVar1 + -0x24) = 0x9090;
      VirtualProtect((LPVOID)(lVar1 + -0x28),6,local_d8[0],local_d8);
    }
}

void FUN_1800e0ba0(void) {
ulonglong *puVar1;
  char *pcVar2;
  int32_t uVar3;
  
  DAT_1801ec1b8 = DAT_1801ebe34;
  pcVar2 = (char *)((longlong)DAT_1801ebe34 * 0x20 + DAT_1801fca38);
  if (pcVar2 != s_Low__Vanilla__1801ec7f0) {
    puVar1 = (ulonglong *)(pcVar2 + 0x10);
    if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
      pcVar2 = *(char **)pcVar2;
    }
    FUN_1800de6e0((longlong *)s_Low__Vanilla__1801ec7f0,(int32_t *)pcVar2,*puVar1);
  }
  pcVar2 = (char *)((longlong)DAT_1801ebe18 * 0x20 + DAT_1801fca68);
  DAT_1801ec1b4 = DAT_1801ebe18;
  if (pcVar2 != s_Medium__1024__1801ec7b0) {
    puVar1 = (ulonglong *)(pcVar2 + 0x10);
    if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
      pcVar2 = *(char **)pcVar2;
    }
    FUN_1800de6e0((longlong *)s_Medium__1024__1801ec7b0,(int32_t *)pcVar2,*puVar1);
  }
  uVar3 = 0x100;
  if (DAT_1801ec1b4 != 0) {
    if (DAT_1801ec1b4 == 1) {
      DAT_1801ec198 = 0x200;
      goto LAB_1800e0c6d;
    }
    if (DAT_1801ec1b4 == 2) {
      DAT_1801ec198 = 0x400;
      goto LAB_1800e0c6d;
    }
    if (DAT_1801ec1b4 == 3) {
      DAT_1801ec198 = 0x800;
      goto LAB_1800e0c6d;
    }
    if (DAT_1801ec1b4 == 4) {
      DAT_1801ec198 = 0x1000;
      goto LAB_1800e0c6d;
    }
  }
  DAT_1801ec198 = 0x100;
LAB_1800e0c6d:
  pcVar2 = (char *)((longlong)DAT_1801ebe20 * 0x20 + DAT_1801fca68);
  DAT_1801ec1b0 = DAT_1801ebe20;
  if (pcVar2 != s_Medium__1024__1801ec790) {
    puVar1 = (ulonglong *)(pcVar2 + 0x10);
    if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
      pcVar2 = *(char **)pcVar2;
    }
    FUN_1800de6e0((longlong *)s_Medium__1024__1801ec790,(int32_t *)pcVar2,*puVar1);
  }
  if (DAT_1801ec1b0 != 0) {
    if (DAT_1801ec1b0 == 1) {
      uVar3 = 0x200;
    }
    else if (DAT_1801ec1b0 == 2) {
      uVar3 = 0x400;
    }
    else if (DAT_1801ec1b0 == 3) {
      uVar3 = 0x800;
    }
    else if (DAT_1801ec1b0 == 4) {
      uVar3 = 0x1000;
    }
  }
  pcVar2 = (char *)((longlong)DAT_1801ebe1c * 0x20 + DAT_1801fca80);
  DAT_1801ec1ac = DAT_1801ebe1c;
  DAT_1801ec178 = uVar3;
  if (pcVar2 != s_Medium_1801ec770) {
    puVar1 = (ulonglong *)(pcVar2 + 0x10);
    if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
      pcVar2 = *(char **)pcVar2;
    }
    FUN_1800de6e0((longlong *)s_Medium_1801ec770,(int32_t *)pcVar2,*puVar1);
  }
  FUN_1800e0ac0();
  return;
}
}

