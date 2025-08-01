#include "FUN_1800a98d0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a98d0(ulonglong *param_1,ulonglong *param_2,longlong param_3,int32_t param_4) {
ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int32_t auStack_98 [32];
  int32_t local_78;
  ulonglong *local_68;
  ulonglong *puStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  uVar2 = (longlong)param_2 - (longlong)param_1;
  do {
    if ((longlong)(uVar2 & 0xffffffffffffffe0) < 0x401) {
      FUN_1800a9ae0(param_1,param_2);
LAB_1800a9aad:
      FUN_1801252c0(local_48 ^ (ulonglong)auStack_98);
      return;
    }
    if (param_3 < 1) {
      uVar2 = (longlong)param_2 - (longlong)param_1 >> 5;
      lVar4 = (longlong)param_2 - (longlong)param_1 >> 6;
      if (0 < lVar4) {
        puVar3 = param_1 + lVar4 * 4;
        do {
          local_68 = (ulonglong *)puVar3[-4];
          puStack_60 = (ulonglong *)puVar3[-3];
          lVar4 = lVar4 + -1;
          local_58 = puVar3[-2];
          uStack_50 = puVar3[-1];
          *(int32_t *)(puVar3 + -4) = 0;
          puVar3[-2] = 0;
          puVar3[-1] = 7;
          local_78 = param_4;
          FUN_1800aa4a0((longlong)param_1,lVar4,uVar2,(uint *)&local_68);
          FUN_1800ba040((longlong *)&local_68);
          puVar3 = puVar3 + -4;
        } while (0 < lVar4);
      }
      if (1 < (longlong)uVar2) {
        puVar3 = param_2 + -4;
        do {
          local_68 = (ulonglong *)*puVar3;
          puStack_60 = (ulonglong *)puVar3[1];
          local_58 = puVar3[2];
          uStack_50 = puVar3[3];
          *(int32_t *)puVar3 = 0;
          puVar3[2] = 0;
          puVar3[3] = 7;
          FUN_1800b7d30((longlong *)puVar3,(longlong *)param_1);
          local_78 = param_4;
          FUN_1800aa4a0((longlong)param_1,0,(longlong)puVar3 - (longlong)param_1 >> 5,
                        (uint *)&local_68);
          FUN_1800ba040((longlong *)&local_68);
          puVar3 = puVar3 + -4;
        } while (0x3f < (longlong)
                        ((0x20 - (longlong)param_1) + (longlong)puVar3 & 0xffffffffffffffe0U));
      }
      goto LAB_1800a9aad;
    }
    FUN_1800a9d30(&local_68,(uint *)param_1,(uint *)param_2);
    puVar1 = puStack_60;
    puVar3 = local_68;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_68 - (longlong)param_1 & 0xffffffffffffffe0U) <
        (longlong)((longlong)param_2 - (longlong)puStack_60 & 0xffffffffffffffe0U)) {
      FUN_1800a98d0(param_1,local_68,param_3,param_4);
      puVar3 = param_2;
      param_1 = puVar1;
    }
    else {
      FUN_1800a98d0(puStack_60,param_2,param_3,param_4);
    }
    uVar2 = (longlong)puVar3 - (longlong)param_1;
    param_2 = puVar3;
  } while( true );
}
}

