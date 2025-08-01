#include "FUN_1800abb50.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800abb50(longlong *param_1,char param_2) {
code *pcVar1;
  int iVar2;
  
  if (param_2 < '\0') {
    FUN_1800b7ac0(0x180187610);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = 0;
  switch(param_2) {
  case '\0':
    break;
  default:
    FUN_1800b7ac0(0x180187630);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  case '?':
    iVar2 = 6;
    break;
  case 'A':
  case 'E':
  case 'F':
  case 'G':
  case 'a':
  case 'e':
  case 'f':
  case 'g':
    iVar2 = 2;
    break;
  case 'B':
  case 'X':
  case 'b':
  case 'd':
  case 'o':
  case 'x':
    iVar2 = 1;
    break;
  case 'P':
  case 'p':
    iVar2 = 4;
    break;
  case 'c':
    iVar2 = 5;
    break;
  case 's':
    iVar2 = 3;
  }
  switch((char)param_1[3]) {
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else if ((iVar2 - 1U & 0xfffffffb) != 0) {
      FUN_1800b7ac0(0x1801876a8);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    break;
  case '\x05':
    if (iVar2 != 0) {
      if ((iVar2 - 1U & 0xfffffffd) != 0) {
        FUN_1800b7ac0(0x180187658);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      break;
    }
    goto LAB_1800abc88;
  case '\x06':
    if (iVar2 == 0) {
      iVar2 = 5;
    }
    else if (((iVar2 - 1U & 0xfffffffa) != 0) || (iVar2 == 2)) {
      FUN_1800b7ac0(0x180187680);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    break;
  case '\a':
  case '\b':
  case '\t':
    if (iVar2 == 0) {
      iVar2 = 2;
    }
    else if (iVar2 != 2) {
      FUN_1800b7ac0(0x1801876d0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    break;
  case '\n':
    if (iVar2 == 0) {
      iVar2 = 4;
    }
    else if (iVar2 != 4) {
      FUN_1800b7ac0(0x180187728);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    break;
  case '\v':
  case '\f':
    if (iVar2 != 0) {
      if ((iVar2 != 3) && (iVar2 != 6)) {
        FUN_1800b7ac0(0x180187700);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      break;
    }
LAB_1800abc88:
    iVar2 = 3;
  }
  if ((*(char *)((longlong)param_1 + 0x19) != '\0') && (1 < iVar2 - 1U)) {
    FUN_1800b7ac0(0x180187750);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(char *)((longlong)param_1 + 0x1a) != '\0') &&
     (((iVar2 - 1U & 0xfffffffc) != 0 || (iVar2 == 3)))) {
    FUN_1800b7ac0(0x180187790);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(char *)(*param_1 + 8) = param_2;
  return;
}
}

