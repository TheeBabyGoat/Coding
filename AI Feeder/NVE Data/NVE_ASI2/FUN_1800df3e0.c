#include "FUN_1800df3e0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800df3e0("Reset##day_multipliers",cVar4,&LAB_1800df320,pcVar6);
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  pcVar6 = *(code **)(DAT_1801f3ae0 + 0x5e0);
  cVar2 = (*pcVar6)("Night Multipliers",0,0x20);
  if (cVar2 != '\0') {
(**(code **)(DAT_1801f3ae0 + 0x418))
              ("Headlights##night",&DAT_1801ebd50,uVar1,0,CONCAT44(uVar8,DAT_1801d8f2c),
               &DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Taillights##night",&DAT_1801ebd4c,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Indicators##night",&DAT_1801ebd48,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Reversing Lights##night",&DAT_1801ebd44,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Default Lights##night",&DAT_1801ebd40,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Brake Lights##night",&DAT_1801ebd3c,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Middle Brake Light##night",&DAT_1801ebd38,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Extra Lights##night",&DAT_1801ebd34,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Siren Lights##night",&DAT_1801ebd30,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
  }
}

void FUN_1800df3e0(int32_t param_1,char param_2,int32_t *param_3,int32_t *param_4) {
char cVar1;
  code *pcVar2;
  code *pcVar3;
  int32_t local_res20;
  
  if (param_2 != '\0') {
    param_4 = *(int32_t **)(DAT_1801f3ae0 + 0x880);
    (*(code *)param_4)(1);
  }
  local_res20 = 0;
  pcVar3 = *(code **)(DAT_1801f3ae0 + 0x388);
  cVar1 = (*pcVar3)(param_1,&local_res20);
  if (cVar1 != '\0') {
    (*(code *)param_3)();
  }
  if (param_2 != '\0') {
    pcVar2 = *(code **)(DAT_1801f3ae0 + 0x8b8);
    cVar1 = (*pcVar2)(0x400);
    if (cVar1 != '\0') {
      (**(code **)(DAT_1801f3ae0 + 0x6a0))();
      FUN_1800c70b0("Hold Control and Shift while clicking to reset.",pcVar2,pcVar3,param_4);
      (**(code **)(DAT_1801f3ae0 + 0x6a8))();
    }
    (**(code **)(DAT_1801f3ae0 + 0x888))();
  }
  return;
}
}

