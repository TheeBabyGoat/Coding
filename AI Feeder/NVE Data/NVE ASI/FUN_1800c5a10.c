#include "FUN_1800c5a10.h"
#include <stdint.h>
#include <stddef.h>

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
}

void FUN_1800c5a10(void) {
code *pcVar1;
  longlong *plVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong *plVar5;
  int32_t auStack_c8 [32];
  int32_t *local_a8;
  char *local_98;
  ulonglong *puStack_90;
  longlong local_88;
  ulonglong uStack_80;
  char local_78 [8];
  int32_t uStack_70;
  int32_t local_68;
  int32_t uStack_60;
  char local_58 [8];
  int32_t uStack_50;
  int32_t local_48;
  int32_t uStack_40;
  char local_38 [8];
  ulonglong uStack_30;
  int32_t local_28;
  int32_t uStack_20;
  ulonglong local_18 [2];
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_c8;
  local_a8 = &DAT_1801fb9e0;
  local_68 = _DAT_1801d9040;
  uStack_60 = _UNK_1801d9048;
  local_78 = (char  [8])s_NVE_Vignette_fx_1801cbb10._0_8_;
  uStack_70 = (ulonglong)
              CONCAT16(s_NVE_Vignette_fx_1801cbb10[0xe],
                       CONCAT24(s_NVE_Vignette_fx_1801cbb10._12_2_,s_NVE_Vignette_fx_1801cbb10._8_4_
                               ));
  local_48 = _DAT_1801d9000;
  uStack_40 = _UNK_1801d9008;
  local_58 = (char  [8])s_NVE_Rain_fx_1801cb960._0_8_;
  uStack_50 = (ulonglong)CONCAT12(s_NVE_Rain_fx_1801cb960[10],s_NVE_Rain_fx_1801cb960._8_2_);
  local_28 = _DAT_1801d9010;
  uStack_20 = _UNK_1801d9018;
  local_38 = (char  [8])s_NVE_Bloom_fx_1801cbb20._0_8_;
  uStack_30 = (ulonglong)(uint)s_NVE_Bloom_fx_1801cbb20._8_4_;
  local_98 = local_78;
  puStack_90 = local_18;
  FUN_1800a6a40(&DAT_1801fb9f0,(longlong *)&local_98);
  _eh_vector_destructor_iterator_(local_78,0x20,3,thunk_FUN_1800a6800);
  plVar2 = DAT_1801fb9f8;
  plVar5 = DAT_1801fb9f0;
  if (DAT_1801fb9f0 != DAT_1801fb9f8) {
    do {
      FUN_1800a6800(plVar5);
      plVar5 = plVar5 + 4;
    } while (plVar5 != plVar2);
    DAT_1801fb9f8 = DAT_1801fb9f0;
  }
  local_98 = (char *)0x0;
  puStack_90 = (ulonglong *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_1800ba360(&local_98,(int32_t *)"NVE_Rain.fx",0xb);
  plVar2 = DAT_1801fb9f8;
  if (DAT_1801fb9f8 == DAT_1801fba00) {
    FUN_1800c63b0((longlong *)&DAT_1801fb9f0,DAT_1801fb9f8,&local_98);
    uVar4 = uStack_80;
  }
  else {
    *DAT_1801fb9f8 = (longlong)local_98;
    plVar2[1] = (longlong)puStack_90;
    plVar2[2] = local_88;
    plVar2[3] = uStack_80;
    local_98 = (char *)((ulonglong)local_98 & 0xffffffffffffff00);
    DAT_1801fb9f8 = DAT_1801fb9f8 + 4;
    uVar4 = 0xf;
  }
  if (0xf < uVar4) {
    pcVar3 = local_98;
    if ((0xfff < uVar4 + 1) &&
       (pcVar3 = *(char **)(local_98 + -8), (char *)0x1f < local_98 + (-8 - (longlong)pcVar3))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pcVar3);
  }
  DAT_1801fb9e8 = "INITIAL_LIFETIME";
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_c8);
  return;
}
}

