#include "FUN_1800dcc80.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800dcc80(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4) {
char cVar1;
  float fVar2;
  
  FUN_1800de850(&DAT_1801d5220,param_2,param_3,param_4);
  cVar1 = (**(code **)(DAT_1801f3ae0 + 0x8b8))(0);
  if (cVar1 != '\0') {
    (**(code **)(DAT_1801f3ae0 + 0x6a0))();
    fVar2 = (float)(**(code **)(DAT_1801f3ae0 + 0x220))();
    (**(code **)(DAT_1801f3ae0 + 0x208))(fVar2 * _DAT_1801d8ec8);
    (**(code **)(DAT_1801f3ae0 + 0x348))(param_1,0);
    (**(code **)(DAT_1801f3ae0 + 0x210))();
                    
                    
    (**(code **)(DAT_1801f3ae0 + 0x6a8))();
    return;
  }
  return;
}
}

