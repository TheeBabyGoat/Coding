#include "FUN_1800ddb30.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800ddb30(int param_1) {
if (param_1 == 0) {
    _DAT_1801ec568 = 0x3f236545;
    _DAT_1801ec570 = 0x3f43c3c6;
    _DAT_1801ec578 = 0x3f800000;
    _DAT_1801ec580 = 0x3f34b4c0;
  }
  else {
    if (param_1 == 1) {
      _DAT_1801ec564 = 0x3de06855;
      _DAT_1801ec568 = 0x3f800000;
      _DAT_1801ec570 = 0x3f61e1e3;
      _DAT_1801ec578 = 0x3f800000;
      _DAT_1801ec580 = 0x3f0dcdd5;
      _DAT_1801ec588 = 0;
      _DAT_1801ec560 = 0x3d5cdd51;
      return;
    }
    if (param_1 != 2) {
      return;
    }
    _DAT_1801ec568 = 0x3e2930be;
    _DAT_1801ec570 = 0x3f800000;
    _DAT_1801ec578 = 0x3d70f16f;
    _DAT_1801ec580 = 0x3e9696a200000000;
  }
  _DAT_1801ec570 = _DAT_1801ec570 << 0x20;
  _DAT_1801ec588 = 0x3f800000;
  _DAT_1801ec564 = 0x3f800000;
  _DAT_1801ec560 = 0x3d5cdd51;
  return;
}
}

