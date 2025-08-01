#include "FUN_1800cf270.h"
#include <stdint.h>
#include <stddef.h>

int32_t FUN_1800cf270(longlong *param_1,longlong param_2) {
longlong lVar1;
  code *pcVar2;
  int32_t *puVar3;
  UINT *pUVar4;
  int32_t uVar5;
  char *pcVar6;
  _Lockit local_a8 [8];
  LPVOID local_a0;
  int32_t local_98;
  LPVOID local_90;
  int32_t local_88;
  LPVOID local_80;
  int32_t local_78;
  LPVOID local_70;
  int32_t local_68;
  LPVOID local_60;
  int32_t local_58;
  LPVOID local_50;
  int32_t local_48;
  UINT local_40 [10];
  
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar3 = (int32_t *)operator_new(0x30);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      pcVar6 = "";
    }
    else {
      pcVar6 = *(char **)(lVar1 + 0x28);
      if (pcVar6 == (char *)0x0) {
        pcVar6 = (char *)(lVar1 + 0x30);
      }
    }
    std::_Lockit::_Lockit(local_a8,0);
    local_a0 = (LPVOID)0x0;
    local_98 = 0;
    local_90 = (LPVOID)0x0;
    local_88 = 0;
    local_80 = (LPVOID)0x0;
    local_78 = 0;
    local_70 = (LPVOID)0x0;
    local_68 = 0;
    local_60 = (LPVOID)0x0;
    local_58 = 0;
    local_50 = (LPVOID)0x0;
    local_48 = 0;
    if (pcVar6 == (char *)0x0) {
      FUN_180123380(0x1801874f0);
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    std::_Locinfo::_Locinfo_ctor((_Locinfo *)local_a8,pcVar6);
    *(int32_t *)(puVar3 + 1) = 0;
    *puVar3 = std::ctype<char>::vftable;
    pUVar4 = FUN_180124bbc(local_40);
    uVar5 = *(int32_t *)(pUVar4 + 2);
    puVar3[2] = *(int32_t *)pUVar4;
    puVar3[3] = uVar5;
    uVar5 = *(int32_t *)(pUVar4 + 6);
    puVar3[4] = *(int32_t *)(pUVar4 + 4);
    puVar3[5] = uVar5;
    *param_1 = (longlong)puVar3;
    std::_Locinfo::_Locinfo_dtor((_Locinfo *)local_a8);
    if (local_50 != (LPVOID)0x0) {
      FUN_18012d5e8(local_50);
    }
    local_50 = (LPVOID)0x0;
    if (local_60 != (LPVOID)0x0) {
      FUN_18012d5e8(local_60);
    }
    local_60 = (LPVOID)0x0;
    if (local_70 != (LPVOID)0x0) {
      FUN_18012d5e8(local_70);
    }
    local_70 = (LPVOID)0x0;
    if (local_80 != (LPVOID)0x0) {
      FUN_18012d5e8(local_80);
    }
    local_80 = (LPVOID)0x0;
    if (local_90 != (LPVOID)0x0) {
      FUN_18012d5e8(local_90);
    }
    local_90 = (LPVOID)0x0;
    if (local_a0 != (LPVOID)0x0) {
      FUN_18012d5e8(local_a0);
    }
    local_a0 = (LPVOID)0x0;
    std::_Lockit::~_Lockit(local_a8);
  }
  return 2;
}
}

