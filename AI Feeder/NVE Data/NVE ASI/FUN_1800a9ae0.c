#include "FUN_1800a9ae0.h"
#include <stdint.h>
#include <stddef.h>

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
}

void FUN_1800a9ae0(ulonglong *param_1,ulonglong *param_2) {
LPVOID pvVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  LPVOID pvVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  int32_t auStack_98 [32];
  ulonglong *local_78;
  ulonglong local_70;
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  uVar4 = _UNK_1801d8f68;
  uVar3 = _DAT_1801d8f60;
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    for (puVar9 = param_1 + 4; puVar9 != param_2; puVar9 = puVar9 + 4) {
      local_58 = *puVar9;
      uStack_50 = puVar9[1];
      local_48 = puVar9[2];
      uStack_40 = puVar9[3];
      *(int32_t *)puVar9 = 0;
      puVar9[2] = 0;
      puVar9[3] = 7;
      local_78 = param_1;
      if (7 < param_1[3]) {
        local_78 = (ulonglong *)*param_1;
      }
      local_70 = param_1[2];
      iVar5 = FUN_1800aa740((uint *)&local_58,&local_78);
      puVar7 = puVar9;
      if ((iVar5 == 0) || (-1 < iVar5)) {
        while( true ) {
          puVar8 = puVar7 + -4;
          local_68 = puVar8;
          if (7 < puVar7[-1]) {
            local_68 = (ulonglong *)puVar7[-4];
          }
          local_60 = puVar7[-2];
          iVar5 = FUN_1800aa740((uint *)&local_58,&local_68);
          if ((iVar5 == 0) || (-1 < iVar5)) break;
          FUN_1800b7d30((longlong *)puVar7,(longlong *)puVar8);
          puVar7 = puVar8;
        }
        if (puVar7 != &local_58) {
          if (7 < puVar7[3]) {
            pvVar1 = (LPVOID)*puVar7;
            pvVar6 = pvVar1;
            if ((0xfff < puVar7[3] * 2 + 2) &&
               (pvVar6 = *(LPVOID *)((longlong)pvVar1 - 8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) goto LAB_1800a9d23;
            thunk_FUN_18012d5e8(pvVar6);
          }
          *puVar7 = local_58;
          puVar7[1] = uStack_50;
          puVar7[2] = local_48;
          puVar7[3] = uStack_40;
          goto LAB_1800a9cce;
        }
      }
      else {
        while (puVar7 != param_1) {
          FUN_1800b7d30((longlong *)puVar7,(longlong *)(puVar7 + -4));
          puVar7 = puVar7 + -4;
        }
        if (param_1 != &local_58) {
          if (7 < param_1[3]) {
            pvVar1 = (LPVOID)*param_1;
            pvVar6 = pvVar1;
            if ((0xfff < param_1[3] * 2 + 2) &&
               (pvVar6 = *(LPVOID *)((longlong)pvVar1 - 8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) {
LAB_1800a9d23:
              FUN_18012b7b4();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            thunk_FUN_18012d5e8(pvVar6);
          }
          *param_1 = local_58;
          param_1[1] = uStack_50;
          param_1[2] = local_48;
          param_1[3] = uStack_40;
LAB_1800a9cce:
          local_58 = local_58 & 0xffffffffffff0000;
          local_48 = uVar3;
          uStack_40 = uVar4;
        }
      }
      FUN_1800ba040((longlong *)&local_58);
    }
  }
  FUN_1801252c0(local_38 ^ (ulonglong)auStack_98);
  return;
}
}

