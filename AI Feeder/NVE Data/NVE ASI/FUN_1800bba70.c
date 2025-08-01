#include "FUN_1800bba70.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800bba70(longlong param_1) {
char cVar1;
  longlong *plVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int32_t *puVar9;
  float fVar10;
  float fVar11;
  longlong local_res8;
  longlong local_res10;
  int32_t local_48;
  int32_t local_44;
  int32_t local_40;
  
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    local_res8 = param_1;
    (**(code **)(*DAT_1801f3ad8 + 0xa0))(DAT_1801f3ad8,&local_res8,0,"LightIntensityMinDistance");
    (**(code **)(*DAT_1801f3ad8 + 0xe8))(DAT_1801f3ad8,local_res8,&DAT_1801f3a04,1,0);
    (**(code **)(*DAT_1801f3ad8 + 0xa0))(DAT_1801f3ad8,&local_res10,0,"LightIntensityMaxDistance");
    (**(code **)(*DAT_1801f3ad8 + 0xe8))(DAT_1801f3ad8,local_res10,&DAT_1801f3a00,1,0);
    (**(code **)(*DAT_1801f3ad8 + 0xa0))(DAT_1801f3ad8,&local_res8,0,"LightFadeSpeed");
    (**(code **)(*DAT_1801f3ad8 + 0xe8))(DAT_1801f3ad8,local_res8,&DAT_1801f39fc,1,0);
    (**(code **)(*DAT_1801f3ad8 + 0xa0))(DAT_1801f3ad8,&local_res10,0,"RainFadeInSpeed");
    (**(code **)(*DAT_1801f3ad8 + 0xe8))(DAT_1801f3ad8,local_res10,&DAT_1801ebe10,1,0);
    (**(code **)(*DAT_1801f3ad8 + 0xa0))(DAT_1801f3ad8,&local_res8,0,"RainFadeOutSpeed");
    (**(code **)(*DAT_1801f3ad8 + 0xe8))(DAT_1801f3ad8,local_res8,&DAT_1801ebe0c,1,0);
    fVar11 = 0.0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x10) < DAT_1801fb550) && (FUN_180125398(&DAT_1801fb550), DAT_1801fb550 == -1)) {
      DAT_1801fb554 = 0.0;
      _Init_thread_footer(&DAT_1801fb550);
    }
    puVar3 = DAT_1801fb570;
    plVar5 = DAT_1801f3ad8;
    if (DAT_1801fb120 != 0) {
      plVar7 = (longlong *)*DAT_1801fb118;
      plVar8 = plVar7;
      if (plVar7 != DAT_1801fb118) {
        while( true ) {
          plVar2 = (longlong *)plVar7[2];
          if (*(char *)((longlong)plVar2 + 0x19) == '\0') {
            cVar1 = *(char *)(*plVar2 + 0x19);
            plVar7 = plVar2;
            plVar2 = (longlong *)*plVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*plVar2 + 0x19);
              plVar7 = plVar2;
              plVar2 = (longlong *)*plVar2;
            }
          }
          else {
            cVar1 = *(char *)(plVar7[1] + 0x19);
            plVar6 = (longlong *)plVar7[1];
            plVar2 = plVar7;
            while ((plVar7 = plVar6, cVar1 == '\0' && (plVar2 == (longlong *)plVar7[2]))) {
              cVar1 = *(char *)(plVar7[1] + 0x19);
              plVar6 = (longlong *)plVar7[1];
              plVar2 = plVar7;
            }
          }
          if (plVar7 == DAT_1801fb118) break;
          if (*(float *)((longlong)plVar7 + 0x1c) <= *(float *)((longlong)plVar8 + 0x1c) &&
              *(float *)((longlong)plVar8 + 0x1c) != *(float *)((longlong)plVar7 + 0x1c)) {
            plVar8 = plVar7;
          }
        }
      }
      fVar11 = *(float *)((longlong)plVar8 + 0x1c) - _DAT_1801f3a04;
      local_44 = *(int32_t *)((longlong)plVar8 + 0x24);
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      fVar11 = DAT_1801d8e38 - fVar11 / DAT_1801f3a00;
      local_48 = (int32_t)plVar8[4];
      local_40 = (int32_t)plVar8[5];
      puVar4 = DAT_1801fb568;
      if (DAT_1801f3ad8 != (longlong *)0x0) {
        for (; puVar4 != puVar3; puVar4 = puVar4 + 4) {
          puVar9 = puVar4;
          if (0xf < (ulonglong)puVar4[3]) {
            puVar9 = (int32_t *)*puVar4;
          }
          (**(code **)(*plVar5 + 0xa0))(plVar5,&local_res10,puVar9,DAT_1801fb560);
          if (local_res10 != 0) {
            (**(code **)(*plVar5 + 0x108))(plVar5,local_res10,&local_48,3,0);
          }
        }
      }
    }
    fVar10 = 0.0;
    if (0.0 <= fVar11) {
      fVar10 = fVar11;
    }
    if ((fVar10 == 0.0) && (0.0 < DAT_1801fb554)) {
      fVar10 = DAT_1801fb554 - DAT_1801d8de4;
    }
    DAT_1801fb554 = FUN_1800bae50(fVar10,DAT_1801fb554,DAT_1801f39fc);
    puVar4 = DAT_1801fb598;
    plVar5 = DAT_1801f3ad8;
    puVar3 = DAT_1801fb590;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar3 != puVar4; puVar3 = puVar3 + 4) {
        puVar9 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar9 = (int32_t *)*puVar3;
        }
        (**(code **)(*plVar5 + 0xa0))(plVar5,&local_res8,puVar9,DAT_1801fb588);
        if (local_res8 != 0) {
          (**(code **)(*plVar5 + 0x108))(plVar5,local_res8,&DAT_1801fb554,1,0);
        }
      }
    }
    puVar4 = DAT_1801fb5c0;
    plVar5 = DAT_1801f3ad8;
    puVar3 = DAT_1801fb5b8;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar3 != puVar4; puVar3 = puVar3 + 4) {
        puVar9 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar9 = (int32_t *)*puVar3;
        }
        (**(code **)(*plVar5 + 0xa0))(plVar5,&local_res10,puVar9,DAT_1801fb5b0);
        if (local_res10 != 0) {
          (**(code **)(*plVar5 + 0x108))(plVar5,local_res10,&DAT_1801f39f8,1,0);
        }
      }
    }
    FUN_1800a90d0();
  }
  return;
}
}

