#include "FUN_1800b71b0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800b71b0(longlong *param_1,longlong *param_2) {
int32_t (*pauVar1) [32];
  int32_t uVar2;
  int32_t *puVar3;
  code *pcVar4;
  int32_t (*pauVar5) [32];
  int32_t (*pauVar6) [32];
  int32_t (*pauVar7) [32];
  int32_t (*pauVar8) [32];
  
  pauVar7 = (int32_t (*) [32])*param_1;
  pauVar8 = (int32_t (*) [32])(*pauVar7 + param_1[1]);
  do {
    if (pauVar7 == pauVar8) {
      return;
    }
    pauVar5 = pauVar7;
    if ((*pauVar7)[0] != '{') {
      pauVar5 = thunk_FUN_180123d80(pauVar7,pauVar8,0x7b);
      while( true ) {
        pauVar6 = thunk_FUN_180123d80(pauVar7,pauVar5,0x7d);
        if (pauVar6 == pauVar5) break;
        pauVar1 = (int32_t (*) [32])(*pauVar6 + 1);
        if ((pauVar1 == pauVar5) || ((*pauVar1)[0] != '}')) {
          FUN_1800b7ac0(0x1801878b8);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar3 = (int32_t *)param_2[4];
        for (; pauVar7 != pauVar1; pauVar7 = (int32_t (*) [32])(*pauVar7 + 1)) {
          uVar2 = (*pauVar7)[0];
          if ((ulonglong)puVar3[3] < puVar3[2] + 1) {
            (**(code **)*puVar3)(puVar3);
          }
          *(int32_t *)(puVar3[1] + puVar3[2]) = uVar2;
          puVar3[2] = puVar3[2] + 1;
        }
        param_2[4] = (longlong)puVar3;
        pauVar7 = (int32_t (*) [32])(*pauVar6 + 2);
      }
      puVar3 = (int32_t *)param_2[4];
      for (; pauVar7 != pauVar5; pauVar7 = (int32_t (*) [32])(*pauVar7 + 1)) {
        uVar2 = (*pauVar7)[0];
        if ((ulonglong)puVar3[3] < puVar3[2] + 1) {
          (**(code **)*puVar3)(puVar3);
        }
        *(int32_t *)(puVar3[2] + puVar3[1]) = uVar2;
        puVar3[2] = puVar3[2] + 1;
      }
      param_2[4] = (longlong)puVar3;
      if (pauVar5 == pauVar8) {
        return;
      }
    }
    pauVar7 = (int32_t (*) [32])FUN_1800b6df0((longlong)pauVar5,(byte *)pauVar8,param_2);
  } while( true );
}
}

