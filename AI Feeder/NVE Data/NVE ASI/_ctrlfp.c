#include "_ctrlfp.h"
#include <stdint.h>
#include <stddef.h>

 _ctrlfp(param_7,0xffc0);
  uVar1 = FUN_180144ab8(local_38);
  if ((int)uVar1 == 0) {
FUN_180141644(param_1);
  }
}

uint _ctrlfp(uint param_1,uint param_2) {
uint uVar1;
  uint uVar2;
  
  uVar1 = _get_fpsr();
  uVar2 = (~param_2 | 0xffff807f) & uVar1 | param_1 & param_2;
  if ((DAT_1801eb770 == '\0') || ((uVar2 & 0x40) == 0)) {
    FUN_18014ab90(uVar2 & 0xffffffbf);
  }
  else {
    FUN_18014ab90(uVar2);
  }
  return uVar1;
}
}

