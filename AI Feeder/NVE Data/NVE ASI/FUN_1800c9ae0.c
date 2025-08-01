#include "FUN_1800c9ae0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800c9ae0((float *)(param_1 + 0x28),*(ulonglong *)(param_2 + 0x38));
    puVar1 = *(int32_t **)(param_2 + 0x30);
    for (puVar2 = (int32_t *)*puVar1; puVar2 != puVar1; puVar2 = (int32_t *)*puVar2) {
plVar5 = FUN_1800ca300((float *)(param_1 + 0x28),local_28,puVar2 + 2);
      lVar3 = *plVar5;
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + *(int *)(puVar2 + 3);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + *(int *)((longlong)puVar2 + 0x1c);
      *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + *(int *)(puVar2 + 4);
      *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + *(int *)((longlong)puVar2 + 0x3c);
      *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + *(int *)(puVar2 + 8);
      *(int *)(lVar3 + 0x44) = *(int *)(lVar3 + 0x44) + *(int *)((longlong)puVar2 + 0x44);
      FUN_1800ca960((longlong *)(lVar3 + 0x60),*(int32_t **)(lVar3 + 0x68),
                    (int32_t *)puVar2[0xc],(puVar2[0xd] - (longlong)puVar2[0xc]) / 0x28);
      *(byte *)(lVar3 + 0x78) = *(byte *)(lVar3 + 0x78) | *(byte *)(puVar2 + 0xf);
      *(int32_t *)(lVar3 + 0x79) = *(int32_t *)((longlong)puVar2 + 0x79);
    }
}

void FUN_1800c9ae0(float *param_1,ulonglong param_2) {
float fVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = ceilf((float)param_2 / *param_1);
  fVar1 = DAT_1801d8f34;
  lVar2 = 0;
  if ((DAT_1801d8f34 <= fVar5) && (fVar5 = fVar5 - DAT_1801d8f34, fVar5 < DAT_1801d8f34)) {
    lVar2 = -0x8000000000000000;
  }
  fVar6 = ceilf((float)*(ulonglong *)(param_1 + 4) / *param_1);
  lVar3 = 0;
  if ((fVar1 <= fVar6) && (fVar6 = fVar6 - fVar1, fVar6 < fVar1)) {
    lVar3 = -0x8000000000000000;
  }
  uVar4 = (longlong)fVar6 + lVar3;
  if ((ulonglong)((longlong)fVar6 + lVar3) < (ulonglong)((longlong)fVar5 + lVar2)) {
    uVar4 = (longlong)fVar5 + lVar2;
  }
  if (*(ulonglong *)(param_1 + 0xe) < uVar4) {
    FUN_1800c9c40((longlong)param_1,uVar4);
  }
  return;
}
}

