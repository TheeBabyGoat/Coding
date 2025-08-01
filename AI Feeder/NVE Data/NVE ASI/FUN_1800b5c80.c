#include "FUN_1800b5c80.h"
#include <stdint.h>
#include <stddef.h>

int32_t FUN_1800b5c80(longlong *param_1,longlong param_2) {
longlong lVar1;
  code *pcVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  char *pcVar5;
  int32_t *puVar6;
  int32_t uVar7;
  _Lockit local_c8 [8];
  LPVOID local_c0;
  int32_t local_b8;
  LPVOID local_b0;
  int32_t local_a8;
  LPVOID local_a0;
  int32_t local_98;
  LPVOID local_90;
  int32_t local_88;
  LPVOID local_80;
  int32_t local_78;
  LPVOID local_70;
  int32_t local_68;
  UINT local_60 [14];
  
  if ((param_1 == (longlong *)0x0) || (*param_1 != 0)) {
    return 4;
  }
  puVar3 = (int32_t *)operator_new(0x30);
  lVar1 = *(longlong *)(param_2 + 8);
  if (lVar1 == 0) {
    pcVar5 = "";
  }
  else {
    pcVar5 = *(char **)(lVar1 + 0x28);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)(lVar1 + 0x30);
    }
  }
  std::_Lockit::_Lockit(local_c8,0);
  local_c0 = (LPVOID)0x0;
  local_b8 = 0;
  local_b0 = (LPVOID)0x0;
  local_a8 = 0;
  local_a0 = (LPVOID)0x0;
  local_98 = 0;
  local_90 = (LPVOID)0x0;
  local_88 = 0;
  local_80 = (LPVOID)0x0;
  local_78 = 0;
  local_70 = (LPVOID)0x0;
  local_68 = 0;
  if (pcVar5 != (char *)0x0) {
    std::_Locinfo::_Locinfo_ctor((_Locinfo *)local_c8,pcVar5);
    *(int32_t *)(puVar3 + 1) = 0;
    *puVar3 = std::numpunct<char>::vftable;
    FUN_18012d604();
    FUN_180124904(local_60);
    puVar3[2] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar4 = (int32_t *)_calloc_base(1,1);
    if (puVar4 == (int32_t *)0x0) goto LAB_1800b5e96;
    *puVar4 = 0;
    puVar3[2] = puVar4;
    pcVar5 = (char *)_calloc_base(6,1);
    if (pcVar5 == (char *)0x0) {
      FUN_1801232f8();
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return uVar7;
    }
    *(int32_t *)pcVar5 = s_false_1801874e0._0_4_;
    *(int32_t *)(pcVar5 + 4) = s_false_1801874e0._4_2_;
    puVar3[4] = pcVar5;
    puVar6 = (int32_t *)_calloc_base(5,1);
    if (puVar6 != (int32_t *)0x0) {
      *puVar6 = _DAT_1801874e8;
      *(int32_t *)(puVar6 + 1) = DAT_1801874ec;
      puVar3[5] = puVar6;
      *(int32_t *)(puVar3 + 3) = 0x2c2e;
      *param_1 = (longlong)puVar3;
      std::_Locinfo::_Locinfo_dtor((_Locinfo *)local_c8);
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
      if (local_b0 != (LPVOID)0x0) {
        FUN_18012d5e8(local_b0);
      }
      local_b0 = (LPVOID)0x0;
      if (local_c0 != (LPVOID)0x0) {
        FUN_18012d5e8(local_c0);
      }
      local_c0 = (LPVOID)0x0;
      std::_Lockit::~_Lockit(local_c8);
      return 4;
    }
    FUN_1801232f8();
  }
  FUN_180123380(0x1801874f0);
LAB_1800b5e96:
  FUN_1801232f8();
  pcVar2 = (code *)swi(3);
  uVar7 = (*pcVar2)();
  return uVar7;
}
}

