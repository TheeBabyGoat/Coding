#include "FUN_1800a64b0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a64b0(void) {
int32_t *puVar1;
  int32_t local_48 [2];
  char *local_40;
  int32_t local_38;
  int32_t local_30;
  int32_t local_28;
  char *local_20;
  int32_t local_18;
  int32_t local_10;
  
  local_48[0] = 0x49d9;
  local_40 = "ped_water_drips_rain";
  local_20 = "ped_water_drips_rain";
  local_38 = 0xffffffffffffffff;
  local_30 = 0;
  local_28 = 0xdead;
  local_18 = 0xffffffffffffffff;
  local_10 = 0;
  DAT_1801fcf10 = (int32_t *)operator_new(0x40);
  puVar1 = DAT_1801fcf10 + 8;
  DAT_1801fcf18 = DAT_1801fcf10;
  DAT_1801fcf20 = puVar1;
  FUN_180150fd0(DAT_1801fcf10,(int32_t *)local_48,0x40);
  DAT_1801fcf18 = puVar1;
  atexit(FUN_180156590);
  return;
}
}

