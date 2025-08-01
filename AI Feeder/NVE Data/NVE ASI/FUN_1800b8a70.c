#include "FUN_1800b8a70.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b8a70(int32_t *param_1,int32_t *param_2) {
longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  int32_t *puVar7;
  int32_t auStack_2e8 [32];
  int32_t local_2c8;
  int32_t *local_2c0;
  WCHAR local_2b8 [16];
  HANDLE local_298;
  _WIN32_FIND_DATAW local_290;
  char local_40;
  int32_t local_3f;
  int32_t local_3d;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_2e8;
  *param_1 = 0;
  param_1[1] = 0;
  local_2c0 = param_1;
  FUN_1800b9f10((int32_t *)local_2b8,param_2);
  local_298 = (HANDLE)0xffffffffffffffff;
  iVar6 = FUN_1800b7af0(local_2b8,0,(longlong *)&local_298,&local_290);
  local_3c = 0;
  if (iVar6 == 0) {
    local_40 = '\x01';
  }
  else {
    local_40 = '\0';
    if (iVar6 != 0x12) {
      local_3c = iVar6;
    }
  }
  local_3f = local_2c8._1_2_;
  local_3d = local_2c8._3_1_;
  if (local_40 != '\0') {
    puVar7 = (int32_t *)operator_new(0x58);
    *puVar7 = 0;
    puVar7[1] = 0;
    *(int32_t *)(puVar7 + 1) = 1;
    *(int32_t *)((longlong)puVar7 + 0xc) = 1;
    *puVar7 = &PTR_FUN_1801878f8;
    local_2c8 = puVar7;
    FUN_1800b8980(puVar7 + 2,(longlong *)local_2b8);
    *param_1 = puVar7 + 2;
    plVar3 = (longlong *)param_1[1];
    param_1[1] = puVar7;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
  }
  iVar6 = local_3c;
  FUN_1801235f8(local_298);
  FUN_1800ba040((longlong *)local_2b8);
  if (iVar6 == 0) {
    FUN_1801252c0(local_38 ^ (ulonglong)auStack_2e8);
    return;
  }
  FUN_1800b8c40((int32_t *)"directory_iterator::directory_iterator",iVar6,param_2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}
}

