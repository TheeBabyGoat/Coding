#include "FUN_1800ab4c0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800ab4c0(int32_t *param_1) {
code *pcVar1;
  ulonglong uVar2;
  
  uVar2 = param_1[1];
  switch((uint)*param_1 & 0xff) {
  case 0:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 1:
    if ((int)uVar2 < 0) {
LAB_1800ab530:
      FUN_1800b7ac0(0x180182e28);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar2 = (ulonglong)(int)uVar2;
    break;
  case 2:
    uVar2 = uVar2 & 0xffffffff;
    break;
  case 3:
    if ((longlong)uVar2 < 0) goto LAB_1800ab530;
    break;
  case 4:
    break;
  case 5:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 6:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 7:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 8:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 9:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 10:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xb:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xc:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case 0xd:
    FUN_1800ab4a0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  default:
    FUN_18012b7b4();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0x7fffffff < uVar2) {
    FUN_1800b7ac0(0x180182e70);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}
}

