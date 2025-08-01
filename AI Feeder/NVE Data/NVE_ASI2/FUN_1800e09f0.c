#include "FUN_1800e09f0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800e09f0(int32_t param_1) {
longlong lVar1;
  code *pcVar2;
  int32_t uVar3;
  int32_t uVar4;
  float fVar5;
  float fVar6;
  float local_res10 [2];
  float local_res18 [4];
  
  lVar1 = (**(code **)(DAT_1801f3ae0 + 8))();
  uVar4 = 0;
  uVar3 = 0;
  (**(code **)(DAT_1801f3ae0 + 0x9a0))(local_res10,param_1,0,0,DAT_1801d8f38);
  fVar6 = *(float *)(lVar1 + 0x3c);
  pcVar2 = *(code **)(DAT_1801f3ae0 + 0x118);
  (*pcVar2)(local_res18);
  fVar6 = (local_res18[0] - (fVar6 + fVar6 + local_res10[0])) * DAT_1801d8e18;
  if (0.0 < fVar6) {
    fVar5 = (float)(**(code **)(DAT_1801f3ae0 + 0x268))();
    (**(code **)(DAT_1801f3ae0 + 0x280))(fVar5 + fVar6);
  }
  FUN_1800c70b0(param_1,pcVar2,uVar3,uVar4);
  return;
}
}

 FUN_1800e09f0("Editing these settings can result in game bugs");
    FUN_1800e09f0("such as shadow flickering and causing the game world to go black.");
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    FUN_1800e09f0("By clicking \"I accept\" you agree to acknowledging this message.");
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    lVar6 = (**(code **)(DAT_1801f3ae0 + 8))();
    (**(code **)(DAT_1801f3ae0 + 0x9a0))(&local_res8,"I Accept",0,0,DAT_1801d8f38);
    fVar11 = *(float *)(lVar6 + 0x3c);
    (**(code **)(DAT_1801f3ae0 + 0x118))(local_res10);
    fVar11 = (local_res10[0] - (fVar11 + fVar11 + (float)local_res8)) * DAT_1801d8e18;
    if (0.0 < fVar11) {
fVar10 = (float)(**(code **)(DAT_1801f3ae0 + 0x268))();
      (**(code **)(DAT_1801f3ae0 + 0x280))(fVar10 + fVar11);
    }
}

