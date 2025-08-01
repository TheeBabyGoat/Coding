#include "FUN_1800bbf30.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800bbf30(void) {
longlong lVar1;
  int32_t *puVar2;
  int32_t *local_res8;
  
  puVar2 = (int32_t *)(ulonglong)_tls_index;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)puVar2 * 8);
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba08) {
    puVar2 = &DAT_1801fba08;
    FUN_180125398(&DAT_1801fba08);
    if (DAT_1801fba08 == -1) {
      FUN_1800c5c50(0x1801fb5e0,(int32_t *)"NVE_Rain.fx","CameraDelta");
      atexit((_func_5014 *)&LAB_180155ec0);
      puVar2 = &DAT_1801fba08;
      _Init_thread_footer(&DAT_1801fba08);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba0c) {
    puVar2 = &DAT_1801fba0c;
    FUN_180125398(&DAT_1801fba0c);
    if (DAT_1801fba0c == -1) {
      FUN_1800c5c50(0x1801fb630,(int32_t *)"NVE_Rain.fx","CameraDirection");
      atexit((_func_5014 *)&LAB_180155eb0);
      puVar2 = &DAT_1801fba0c;
      _Init_thread_footer(&DAT_1801fba0c);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba10) {
    puVar2 = &DAT_1801fba10;
    FUN_180125398(&DAT_1801fba10);
    if (DAT_1801fba10 == -1) {
      FUN_1800c5c50(0x1801fb608,(int32_t *)"NVE_Rain.fx","WindDirection");
      atexit((_func_5014 *)&LAB_180155ea0);
      puVar2 = &DAT_1801fba10;
      _Init_thread_footer(&DAT_1801fba10);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba14) {
    puVar2 = &DAT_1801fba14;
    FUN_180125398(&DAT_1801fba14);
    if (DAT_1801fba14 == -1) {
      FUN_1800c5c50(0x1801fb680,(int32_t *)"NVE_Rain.fx","ViewSpaceVelocity");
      atexit((_func_5014 *)&LAB_180155e90);
      puVar2 = &DAT_1801fba14;
      _Init_thread_footer(&DAT_1801fba14);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba18) {
    puVar2 = &DAT_1801fba18;
    FUN_180125398(&DAT_1801fba18);
    if (DAT_1801fba18 == -1) {
      FUN_1800c5c50(0x1801fb658,(int32_t *)"NVE_Rain.fx","ViewSpaceWind");
      atexit((_func_5014 *)&LAB_180155e80);
      puVar2 = &DAT_1801fba18;
      _Init_thread_footer(&DAT_1801fba18);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba1c) {
    puVar2 = &DAT_1801fba1c;
    FUN_180125398(&DAT_1801fba1c);
    if (DAT_1801fba1c == -1) {
      FUN_1800c5c50(0x1801fb6a8,(int32_t *)"NVE_Rain.fx","BlurStrength");
      atexit((_func_5014 *)&LAB_180155e70);
      puVar2 = &DAT_1801fba1c;
      _Init_thread_footer(&DAT_1801fba1c);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba20) {
    puVar2 = &DAT_1801fba20;
    FUN_180125398(&DAT_1801fba20);
    if (DAT_1801fba20 == -1) {
      FUN_1800c5c50(0x1801fb760,(int32_t *)"NVE_Rain.fx","DropletBlurStrength");
      atexit((_func_5014 *)&LAB_180155e60);
      puVar2 = &DAT_1801fba20;
      _Init_thread_footer(&DAT_1801fba20);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba24) {
    puVar2 = &DAT_1801fba24;
    FUN_180125398(&DAT_1801fba24);
    if (DAT_1801fba24 == -1) {
      FUN_1800c5c50(0x1801fb788,(int32_t *)"NVE_Rain.fx","EXTRA_DROP_CHANCE");
      atexit((_func_5014 *)&LAB_180155e50);
      puVar2 = &DAT_1801fba24;
      _Init_thread_footer(&DAT_1801fba24);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba28) {
    puVar2 = &DAT_1801fba28;
    FUN_180125398(&DAT_1801fba28);
    if (DAT_1801fba28 == -1) {
      FUN_1800c5c50(0x1801fb7b0,(int32_t *)"NVE_Rain.fx","EXTRA_DROP_SIZE_MUL");
      atexit((_func_5014 *)&LAB_180155e40);
      puVar2 = &DAT_1801fba28;
      _Init_thread_footer(&DAT_1801fba28);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba2c) {
    puVar2 = &DAT_1801fba2c;
    FUN_180125398(&DAT_1801fba2c);
    if (DAT_1801fba2c == -1) {
      FUN_1800c5c50(0x1801fb7d8,(int32_t *)"NVE_Rain.fx","EXTRA_DROP_SPEED_MUL");
      atexit((_func_5014 *)&LAB_180155e30);
      puVar2 = &DAT_1801fba2c;
      _Init_thread_footer(&DAT_1801fba2c);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba30) {
    puVar2 = &DAT_1801fba30;
    FUN_180125398(&DAT_1801fba30);
    if (DAT_1801fba30 == -1) {
      FUN_1800c5c50(0x1801fb800,(int32_t *)"NVE_Rain.fx","EXTRA_DROP_GRAVITY_MUL");
      atexit((_func_5014 *)&LAB_180155e20);
      puVar2 = &DAT_1801fba30;
      _Init_thread_footer(&DAT_1801fba30);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba34) {
    puVar2 = &DAT_1801fba34;
    FUN_180125398(&DAT_1801fba34);
    if (DAT_1801fba34 == -1) {
      FUN_1800c5c50(0x1801fb828,(int32_t *)"NVE_Rain.fx","LATERAL_DRAG");
      atexit((_func_5014 *)&LAB_180155e10);
      puVar2 = &DAT_1801fba34;
      _Init_thread_footer(&DAT_1801fba34);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba38) {
    puVar2 = &DAT_1801fba38;
    FUN_180125398(&DAT_1801fba38);
    if (DAT_1801fba38 == -1) {
      FUN_1800c5c50(0x1801fb850,(int32_t *)"NVE_Rain.fx","LATERAL_WIND");
      atexit((_func_5014 *)&LAB_180155e00);
      puVar2 = &DAT_1801fba38;
      _Init_thread_footer(&DAT_1801fba38);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba3c) {
    puVar2 = &DAT_1801fba3c;
    FUN_180125398(&DAT_1801fba3c);
    if (DAT_1801fba3c == -1) {
      FUN_1800c5c50(0x1801fb878,(int32_t *)"NVE_Rain.fx","RADIAL_DRAG");
      atexit((_func_5014 *)&LAB_180155df0);
      puVar2 = &DAT_1801fba3c;
      _Init_thread_footer(&DAT_1801fba3c);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba40) {
    puVar2 = &DAT_1801fba40;
    FUN_180125398(&DAT_1801fba40);
    if (DAT_1801fba40 == -1) {
      FUN_1800c5c50(0x1801fb8a0,(int32_t *)"NVE_Rain.fx","RADIAL_WIND");
      atexit((_func_5014 *)&LAB_180155de0);
      puVar2 = &DAT_1801fba40;
      _Init_thread_footer(&DAT_1801fba40);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba44) {
    puVar2 = &DAT_1801fba44;
    FUN_180125398(&DAT_1801fba44);
    if (DAT_1801fba44 == -1) {
      FUN_1800c5c50(0x1801fb8c8,(int32_t *)"NVE_Rain.fx","PERSISTANCE");
      atexit((_func_5014 *)&LAB_180155dd0);
      puVar2 = &DAT_1801fba44;
      _Init_thread_footer(&DAT_1801fba44);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba48) {
    puVar2 = &DAT_1801fba48;
    FUN_180125398(&DAT_1801fba48);
    if (DAT_1801fba48 == -1) {
      FUN_1800c5c50(0x1801fb8f0,(int32_t *)"NVE_Rain.fx","REFRACTION_MUL");
      atexit((_func_5014 *)&LAB_180155dc0);
      puVar2 = &DAT_1801fba48;
      _Init_thread_footer(&DAT_1801fba48);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba4c) {
    puVar2 = &DAT_1801fba4c;
    FUN_180125398(&DAT_1801fba4c);
    if (DAT_1801fba4c == -1) {
      FUN_1800c5c50(0x1801fb918,(int32_t *)"NVE_Rain.fx","INITIAL_SIZE_MUL");
      atexit((_func_5014 *)&LAB_180155db0);
      puVar2 = &DAT_1801fba4c;
      _Init_thread_footer(&DAT_1801fba4c);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba50) {
    puVar2 = &DAT_1801fba50;
    FUN_180125398(&DAT_1801fba50);
    if (DAT_1801fba50 == -1) {
      FUN_1800c5c50(0x1801fb940,(int32_t *)"NVE_Rain.fx","SIZE_MIN");
      atexit((_func_5014 *)&LAB_180155da0);
      puVar2 = &DAT_1801fba50;
      _Init_thread_footer(&DAT_1801fba50);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba54) {
    puVar2 = &DAT_1801fba54;
    FUN_180125398(&DAT_1801fba54);
    if (DAT_1801fba54 == -1) {
      FUN_1800c5c50(0x1801fb968,(int32_t *)"NVE_Rain.fx","SIZE_MAX");
      atexit((_func_5014 *)&LAB_180155d90);
      puVar2 = &DAT_1801fba54;
      _Init_thread_footer(&DAT_1801fba54);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba58) {
    puVar2 = &DAT_1801fba58;
    FUN_180125398(&DAT_1801fba58);
    if (DAT_1801fba58 == -1) {
      FUN_1800c5c50(0x1801fb990,(int32_t *)"NVE_Rain.fx","DISPLACEMENT_MAX");
      atexit((_func_5014 *)&LAB_180155d80);
      puVar2 = &DAT_1801fba58;
      _Init_thread_footer(&DAT_1801fba58);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba5c) {
    puVar2 = &DAT_1801fba5c;
    FUN_180125398(&DAT_1801fba5c);
    if (DAT_1801fba5c == -1) {
      FUN_1800c5c50(0x1801fb9b8,(int32_t *)"NVE_Rain.fx","Gravity");
      atexit((_func_5014 *)&LAB_180155d70);
      puVar2 = &DAT_1801fba5c;
      _Init_thread_footer(&DAT_1801fba5c);
    }
  }
  if (*(int *)(lVar1 + 0x10) < DAT_1801fba60) {
    puVar2 = &DAT_1801fba60;
    FUN_180125398(&DAT_1801fba60);
    if (DAT_1801fba60 == -1) {
      FUN_1800c5a10();
      atexit((_func_5014 *)&LAB_180155d60);
      puVar2 = &DAT_1801fba60;
      _Init_thread_footer(&DAT_1801fba60);
    }
  }
  _DAT_1801fb6d0 = _DAT_1801d9b80;
  uRam00000001801fb6d8 = _UNK_1801d9b88;
  _DAT_1801fb6e0 = _DAT_1801d9b60;
  uRam00000001801fb6e8 = _UNK_1801d9b68;
  _DAT_1801fb6f0 = _DAT_1801d9be0;
  uRam00000001801fb6f8 = _UNK_1801d9be8;
  _DAT_1801fb700 = _DAT_1801d9c40;
  uRam00000001801fb708 = _UNK_1801d9c48;
  _DAT_1801fb710 = 0x3dd4fdf4;
  _DAT_1801fb714 = 0xaa;
  _DAT_1801fb718 = 0x3f800000;
  _DAT_1801fb71c = 0x40100000;
  _DAT_1801fb720 = _DAT_1801d9bc0;
  uRam00000001801fb728 = _UNK_1801d9bc8;
  _DAT_1801fb730 = _DAT_1801d9b50;
  uRam00000001801fb738 = _UNK_1801d9b58;
  _DAT_1801fb740 = _DAT_1801d9b70;
  uRam00000001801fb748 = _UNK_1801d9b78;
  _DAT_1801fb750 = 0x3f800000;
  _DAT_1801fb754 = 0x42f00000;
  _DAT_1801fb758 = 0x3f000000;
  _DAT_1801fb75c = 0x50;
  local_res8 = &LAB_1800bd630;
  if (DAT_1801ec6e0 != DAT_1801ec6e8) {
    *DAT_1801ec6e0 = &LAB_1800bd630;
    DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
    return;
  }
  FUN_1800c69d0(puVar2,DAT_1801ec6e0,&local_res8);
  return;
}
}

