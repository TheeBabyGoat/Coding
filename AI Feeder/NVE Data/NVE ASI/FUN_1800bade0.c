#include "FUN_1800bade0.h"
#include <stdint.h>
#include <stddef.h>

float FUN_1800bade0(float param_1) {
float fVar1;
  double dVar2;
  
  fVar1 = DAT_1801d8e18;
  if (param_1 < DAT_1801d8e18) {
    return (param_1 + param_1) * param_1;
  }
  dVar2 = (double)FUN_18014e460((double)(DAT_1801d8e60 - (param_1 + param_1)),DAT_1801d8e68);
  return DAT_1801d8e38 - (float)dVar2 * fVar1;
}
}

