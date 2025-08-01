#include "FUN_1800cf060.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800cf060((ulonglong *)&local_1f8,uVar4);
      pauVar14 = local_1f8;
      ppauVar11 = (int32_t (**) [32])0x0;
      FUN_180151670(local_1f8,0,uVar4);
      ppuStack_1f0 = (int32_t **)(*pauVar14 + uVar4);
    }
    pauVar17 = local_1e8;
    ppuVar2 = ppuStack_1f0;
    plVar5 = FUN_1800cd880(local_1d8,ppauVar11,0);
    uVar4 = (longlong)ppuVar2 - (longlong)pauVar14;
    FUN_1800cda80(plVar5,pauVar14,uVar4);
    pauVar7 = pauVar14;
    pauVar12 = pauVar15;
    if (uVar4 != 0) {
do {
        (*pauVar7)[0] = (*pauVar7)[0] ^ (&DAT_1801cc4c0)[(ulonglong)(~(uint)pauVar12 & 1) * 4];
        uVar13 = (uint)pauVar12 + 1;
        pauVar7 = (int32_t (*) [32])(*pauVar7 + 1);
        pauVar12 = (int32_t (*) [32])(ulonglong)uVar13;
      } while ((ulonglong)(longlong)(int)uVar13 < uVar4);
    }
}

void FUN_1800cf060(ulonglong *param_1,ulonglong param_2) {
code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (0x7fffffffffffffff < param_2) {
    FUN_1800aa480();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_2 == 0) {
    pvVar3 = (void *)0x0;
  }
  else if (param_2 < 0x1000) {
    pvVar3 = operator_new(param_2);
  }
  else {
    if (param_2 + 0x27 <= param_2) {
      FUN_1800ba8a0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar2 = operator_new(param_2 + 0x27);
    if (pvVar2 == (void *)0x0) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pvVar3 = (void *)((longlong)pvVar2 + 0x27U & 0xffffffffffffffe0);
    *(void **)((longlong)pvVar3 - 8) = pvVar2;
  }
  *param_1 = (ulonglong)pvVar3;
  param_1[1] = (ulonglong)pvVar3;
  param_1[2] = (longlong)pvVar3 + param_2;
  return;
}
}

