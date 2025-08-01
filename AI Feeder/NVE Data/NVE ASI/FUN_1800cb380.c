#include "FUN_1800cb380.h"
#include <stdint.h>
#include <stddef.h>

uint FUN_1800cb380(uint param_1) {
if (param_1 < 0x3030384d) {
    if (param_1 == 0x3030384c) {
switchD_1800cb3bb_caseD_3c:
      return 0x3c;
    }
    switch(param_1) {
    case 1:
    case 2:
    case 3:
    case 4:
      return 1;
    case 5:
    case 6:
    case 7:
    case 8:
      return 5;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
      return 9;
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
      return 0xf;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
      return 0x13;
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x59:
      return 0x17;
    default:
      return param_1;
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
      return 0x1b;
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
      return 0x21;
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
      return 0x27;
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
      return 0x2c;
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
      return 0x30;
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
      return 0x35;
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
      goto switchD_1800cb3bb_caseD_3c;
    case 0x46:
    case 0x47:
    case 0x48:
      return 0x46;
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
      return 0x49;
    case 0x4f:
    case 0x50:
    case 0x51:
      return 0x4f;
    case 0x52:
    case 0x53:
    case 0x54:
      return 0x52;
    case 0x57:
    case 0x5a:
    case 0x5b:
      return 0x5a;
    case 0x58:
    case 0x5c:
    case 0x5d:
      return 0x5c;
    case 0x5e:
    case 0x5f:
    case 0x60:
      return 0x5e;
    case 0x61:
    case 0x62:
    case 99:
      return 0x61;
    }
  }
  if (param_1 < 0x42475332) {
    if (param_1 != 0x42475331) {
      if (param_1 == 0x3036314c) {
        return 0x35;
      }
      if (param_1 == 0x3038414c) {
        return 0x30;
      }
      if (param_1 == 0x3631414c) {
        return 0x21;
      }
      if (param_1 != 0x42475330) {
        return param_1;
      }
    }
  }
  else if (param_1 != 0x42475332) {
    if (param_1 == 0x424757b9) {
      return 0x1b;
    }
    if (param_1 != 0x424757ba) {
      return param_1;
    }
    return 0x1b;
  }
  return 0x42475330;
}
}

