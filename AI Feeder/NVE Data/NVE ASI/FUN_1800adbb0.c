#include "FUN_1800adbb0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800adbb0(longlong *param_1,int32_t *param_2,ulonglong param_3,longlong *param_4,
                  longlong param_5) {
_Locimp *p_Var1;
  longlong *plVar2;
  int32_t *puVar3;
  uint uVar4;
  int32_t auStackY_d8 [32];
  int32_t **local_a8;
  _Locimp *p_Stack_a0;
  int32_t local_98;
  uint local_88;
  int32_t **local_80 [2];
  longlong local_70;
  ulonglong local_68;
  int32_t **local_60 [2];
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1801eb080 ^ (ulonglong)auStackY_d8;
  local_88 = 0;
  if (((char)param_4[1] == '\0') || ((char)param_4[1] == 's')) {
    if (*(char *)((longlong)param_4 + 0xc) == '\0') {
      local_a8 = (int32_t **)0x1801874e0;
      if ((char)param_3 != '\0') {
        local_a8 = (int32_t **)&DAT_1801874e8;
      }
      p_Stack_a0 = (_Locimp *)0xffffffffffffffff;
      do {
        p_Stack_a0 = (_Locimp *)((longlong)p_Stack_a0 + 1);
      } while (*(char *)((longlong)local_a8 + (longlong)p_Stack_a0) != '\0');
      FUN_1800b5450(param_1,param_2,(longlong *)&local_a8,param_4);
    }
    else {
      *(int32_t *)((longlong)param_4 + 0xc) = 0;
      if (param_5 == 0) {
        p_Var1 = FUN_180124548('\x01');
        p_Stack_a0 = p_Var1;
      }
      else {
        p_Var1 = *(_Locimp **)(param_5 + 8);
        p_Stack_a0 = p_Var1;
        (**(code **)(*(longlong *)p_Var1 + 8))(p_Var1);
      }
      plVar2 = FUN_1800b5fd0((longlong)&local_a8);
      if ((p_Var1 != (_Locimp *)0x0) &&
         (puVar3 = (int32_t *)(**(code **)(*(longlong *)p_Var1 + 0x10))(p_Var1),
         puVar3 != (int32_t *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
      if ((char)param_3 == '\0') {
        (**(code **)(*plVar2 + 0x30))(plVar2,local_80);
        uVar4 = 10;
        local_a8 = local_80;
        if (0xf < local_68) {
          local_a8 = local_80[0];
        }
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,local_60);
        uVar4 = 5;
        local_a8 = local_60;
        local_70 = local_50;
        if (0xf < local_48) {
          local_a8 = local_60[0];
        }
      }
      p_Stack_a0 = (_Locimp *)local_70;
      local_88 = uVar4;
      FUN_1800b5450(param_1,param_2,(longlong *)&local_a8,param_4);
      if ((uVar4 & 2) != 0) {
        uVar4 = uVar4 & 0xfffffffd;
        FUN_1800a6800((longlong *)local_80);
      }
      if ((uVar4 & 1) != 0) {
        FUN_1800a6800((longlong *)local_60);
      }
    }
  }
  else {
    local_a8 = (int32_t **)*param_4;
    p_Stack_a0 = (_Locimp *)param_4[1];
    local_98 = (int32_t)param_4[2];
    FUN_1800b3b10(param_1,param_2,param_3,(int *)&local_a8,param_5);
  }
  FUN_1801252c0(local_40 ^ (ulonglong)auStackY_d8);
  return;
}
}

