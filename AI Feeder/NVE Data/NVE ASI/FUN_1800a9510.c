#include "FUN_1800a9510.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a9510(int32_t *param_1,longlong *param_2,longlong *param_3,longlong *param_4) {
int32_t *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int32_t *puVar5;
  longlong *plVar6;
  code *pcVar7;
  longlong lVar8;
  DWORD DVar9;
  HANDLE pvVar10;
  int32_t auStack_2c8 [32];
  longlong *local_2a8;
  longlong *local_2a0;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_2c8;
  local_2a8 = param_2;
  local_2a0 = param_3;
LAB_1800a9552:
  do {
    if (*param_2 == *param_3) {
      *param_1 = param_4;
      plVar6 = (longlong *)param_2[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
      plVar6 = (longlong *)param_3[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
        }
      }
      FUN_1801252c0(local_48 ^ (ulonglong)auStack_2c8);
      return;
    }
    puVar1 = (int32_t *)(*param_2 + 0x20);
    puVar5 = (int32_t *)param_4[1];
    if (puVar5 == (int32_t *)param_4[2]) {
      FUN_1800aa140(param_4,puVar5,puVar1);
    }
    else {
      FUN_1800b9f10(puVar5,puVar1);
      param_4[1] = param_4[1] + 0x20;
    }
    puVar1 = (int32_t *)*param_2;
    do {
      pvVar10 = (HANDLE)puVar1[8];
      DVar9 = FUN_1801235d8(pvVar10,&local_298);
      if (DVar9 == 0x12) {
        *param_2 = 0;
        plVar6 = (longlong *)param_2[1];
        param_2[1] = 0;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            iVar4 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        goto LAB_1800a9552;
      }
      if (DVar9 != 0) {
        FUN_1800aad20(pvVar10,DVar9);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    } while ((local_298.cFileName[0] == L'.') &&
            ((local_298.cFileName[1] == L'\0' ||
             ((local_298.cFileName[1] == L'.' && (local_298.cFileName[2] == L'\0'))))));
    FUN_1800b8810(puVar1,&local_298.dwFileAttributes);
  } while( true );
}
}

