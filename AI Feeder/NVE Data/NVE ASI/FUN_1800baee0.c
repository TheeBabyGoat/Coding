#include "FUN_1800baee0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800baee0(int32_t param_1,int32_t *param_2,int32_t param_3,int32_t param_4) {
int32_t *puVar1;
  int32_t uVar2;
  int *piVar3;
  code *local_res8 [4];
  
  DAT_1801f3ad0 = param_2;
  DAT_1801f3ad8 = param_1;
  DAT_1801fb430 = param_3;
  DAT_1801fb438 = param_4;
  if (DAT_1801f3ac8 == '\0') {
    FUN_1800bb5c0();
    FUN_1800bd640(param_1,param_2);
    FUN_1800be150();
    FUN_1800bf750();
    puVar1 = (int32_t *)(ulonglong)_tls_index;
    uVar2 = 0x10;
    piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)puVar1 * 8) +
                    0x10);
    if (*piVar3 < DAT_1801fbc60) {
      puVar1 = &DAT_1801fbc60;
      FUN_180125398(&DAT_1801fbc60);
      if (DAT_1801fbc60 == -1) {
        FUN_1800c5540(0x1801fbc10,uVar2,"ScanlineFilterParams");
        atexit((_func_5014 *)&LAB_180155f60);
        puVar1 = &DAT_1801fbc60;
        _Init_thread_footer(&DAT_1801fbc60);
      }
    }
    if (*piVar3 < DAT_1801fbc64) {
      puVar1 = &DAT_1801fbc64;
      FUN_180125398(&DAT_1801fbc64);
      if (DAT_1801fbc64 == -1) {
        FUN_1800c5540(0x1801fbc38,uVar2,"VignettingColour");
        atexit((_func_5014 *)&LAB_180155f50);
        puVar1 = &DAT_1801fbc64;
        _Init_thread_footer(&DAT_1801fbc64);
      }
    }
    local_res8[0] = FUN_1800be0f0;
    if (DAT_1801ec6e0 == DAT_1801ec6e8) {
      FUN_1800c69d0(puVar1,DAT_1801ec6e0,local_res8);
    }
    else {
      *DAT_1801ec6e0 = FUN_1800be0f0;
      DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
    }
    FUN_1800be880();
    if (*piVar3 < DAT_1801fc728) {
      puVar1 = &DAT_1801fc728;
      FUN_180125398(&DAT_1801fc728);
      if (DAT_1801fc728 == -1) {
        FUN_1800c5c50(0x1801fc6d8,(int32_t *)"NVE_VolumetricClouds2024.fx","tornado_pos");
        atexit((_func_5014 *)&LAB_180156250);
        puVar1 = &DAT_1801fc728;
        _Init_thread_footer(&DAT_1801fc728);
      }
    }
    if (*piVar3 < DAT_1801fc72c) {
      puVar1 = &DAT_1801fc72c;
      FUN_180125398(&DAT_1801fc72c);
      if (DAT_1801fc72c == -1) {
        FUN_1800c5c50(0x1801fc700,(int32_t *)"NVE_VolumetricClouds2024.fx","tornado_radius");
        atexit((_func_5014 *)&LAB_180156240);
        puVar1 = &DAT_1801fc72c;
        _Init_thread_footer(&DAT_1801fc72c);
      }
    }
    local_res8[0] = FUN_1800c29a0;
    if (DAT_1801ec6e0 == DAT_1801ec6e8) {
      FUN_1800c69d0(puVar1,DAT_1801ec6e0,local_res8);
    }
    else {
      *DAT_1801ec6e0 = FUN_1800c29a0;
      DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
    }
    if (*piVar3 < DAT_1801fb510) {
      puVar1 = &DAT_1801fb510;
      FUN_180125398(&DAT_1801fb510);
      if (DAT_1801fb510 == -1) {
        FUN_1800c5c50(0x1801fb470,(int32_t *)"NVE_VolumetricAurora.fx","AuroraVisibility");
        atexit((_func_5014 *)&LAB_180155d10);
        puVar1 = &DAT_1801fb510;
        _Init_thread_footer(&DAT_1801fb510);
      }
    }
    if (*piVar3 < DAT_1801fb514) {
      puVar1 = &DAT_1801fb514;
      FUN_180125398(&DAT_1801fb514);
      if (DAT_1801fb514 == -1) {
        FUN_1800c5c50(0x1801fb498,(int32_t *)"NVE_VolumetricAurora.fx","Aurora_Color1");
        atexit((_func_5014 *)&LAB_180155d00);
        puVar1 = &DAT_1801fb514;
        _Init_thread_footer(&DAT_1801fb514);
      }
    }
    if (*piVar3 < DAT_1801fb518) {
      puVar1 = &DAT_1801fb518;
      FUN_180125398(&DAT_1801fb518);
      if (DAT_1801fb518 == -1) {
        FUN_1800c5c50(0x1801fb4c0,(int32_t *)"NVE_VolumetricAurora.fx","Aurora_Color2");
        atexit((_func_5014 *)&LAB_180155cf0);
        puVar1 = &DAT_1801fb518;
        _Init_thread_footer(&DAT_1801fb518);
      }
    }
    if (*piVar3 < DAT_1801fb51c) {
      puVar1 = &DAT_1801fb51c;
      FUN_180125398(&DAT_1801fb51c);
      if (DAT_1801fb51c == -1) {
        FUN_1800c5c50(0x1801fb4e8,(int32_t *)"NVE_VolumetricAurora.fx","Aurora_Color_Top");
        atexit((_func_5014 *)&LAB_180155ce0);
        puVar1 = &DAT_1801fb51c;
        _Init_thread_footer(&DAT_1801fb51c);
      }
    }
    local_res8[0] = (code *)&DAT_1800bb5b0;
    if (DAT_1801ec6e0 == DAT_1801ec6e8) {
      FUN_1800c69d0(puVar1,DAT_1801ec6e0,local_res8);
    }
    else {
      *DAT_1801ec6e0 = &DAT_1800bb5b0;
      DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
    }
    FUN_1800bbf30();
    FUN_1800dd220();
    DAT_1801f3ac8 = '\x01';
  }
  return;
}
}

