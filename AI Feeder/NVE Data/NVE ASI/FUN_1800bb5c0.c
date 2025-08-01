#include "FUN_1800bb5c0.h"
#include <stdint.h>
#include <stddef.h>

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
}

void FUN_1800bb5c0(void) {
int32_t *puVar1;
  int32_t uVar2;
  int *piVar3;
  int32_t auStack_a8 [32];
  char *local_88;
  ulonglong *local_80;
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
  
  local_18[0] = DAT_1801eb080 ^ (ulonglong)auStack_a8;
  puVar1 = (int32_t *)(ulonglong)_tls_index;
  uVar2 = 0x10;
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)puVar1 * 8) + 0x10)
  ;
  if (*piVar3 < DAT_1801fb5d0) {
    puVar1 = &DAT_1801fb5d0;
    FUN_180125398(&DAT_1801fb5d0);
    if (DAT_1801fb5d0 == -1) {
      local_68 = _DAT_1801d9040;
      uStack_60 = _UNK_1801d9048;
      local_78[0] = s_NVE_Vignette_fx_1801cbb10[0];
      local_78[1] = s_NVE_Vignette_fx_1801cbb10[1];
      local_78[2] = s_NVE_Vignette_fx_1801cbb10[2];
      local_78[3] = s_NVE_Vignette_fx_1801cbb10[3];
      local_78[4] = s_NVE_Vignette_fx_1801cbb10[4];
      local_78[5] = s_NVE_Vignette_fx_1801cbb10[5];
      local_78[6] = s_NVE_Vignette_fx_1801cbb10[6];
      local_78[7] = s_NVE_Vignette_fx_1801cbb10[7];
      uStack_70 = (ulonglong)
                  CONCAT16(s_NVE_Vignette_fx_1801cbb10[0xe],
                           CONCAT24(s_NVE_Vignette_fx_1801cbb10._12_2_,
                                    s_NVE_Vignette_fx_1801cbb10._8_4_));
      local_48 = _DAT_1801d9000;
      uStack_40 = _UNK_1801d9008;
      local_58[0] = s_NVE_Rain_fx_1801cb960[0];
      local_58[1] = s_NVE_Rain_fx_1801cb960[1];
      local_58[2] = s_NVE_Rain_fx_1801cb960[2];
      local_58[3] = s_NVE_Rain_fx_1801cb960[3];
      local_58[4] = s_NVE_Rain_fx_1801cb960[4];
      local_58[5] = s_NVE_Rain_fx_1801cb960[5];
      local_58[6] = s_NVE_Rain_fx_1801cb960[6];
      local_58[7] = s_NVE_Rain_fx_1801cb960[7];
      uStack_50 = (ulonglong)CONCAT12(s_NVE_Rain_fx_1801cb960[10],s_NVE_Rain_fx_1801cb960._8_2_);
      local_28 = _DAT_1801d9010;
      uStack_20 = _UNK_1801d9018;
      local_38[0] = s_NVE_Bloom_fx_1801cbb20[0];
      local_38[1] = s_NVE_Bloom_fx_1801cbb20[1];
      local_38[2] = s_NVE_Bloom_fx_1801cbb20[2];
      local_38[3] = s_NVE_Bloom_fx_1801cbb20[3];
      local_38[4] = s_NVE_Bloom_fx_1801cbb20[4];
      local_38[5] = s_NVE_Bloom_fx_1801cbb20[5];
      local_38[6] = s_NVE_Bloom_fx_1801cbb20[6];
      local_38[7] = s_NVE_Bloom_fx_1801cbb20[7];
      uStack_30 = (ulonglong)(uint)s_NVE_Bloom_fx_1801cbb20._8_4_;
      local_88 = local_78;
      local_80 = local_18;
      FUN_1800a6a40(&DAT_1801fb568,(longlong *)&local_88);
      uVar2 = 0x20;
      _eh_vector_destructor_iterator_(local_78,0x20,3,thunk_FUN_1800a6800);
      DAT_1801fb560 = "LightColour";
      atexit((_func_5014 *)&LAB_180155d50);
      puVar1 = &DAT_1801fb5d0;
      _Init_thread_footer(&DAT_1801fb5d0);
    }
  }
  if (*piVar3 < DAT_1801fb5d4) {
    puVar1 = &DAT_1801fb5d4;
    FUN_180125398(&DAT_1801fb5d4);
    if (DAT_1801fb5d4 == -1) {
      FUN_1800c5540(0x1801fb580,uVar2,"LightIntensity");
      atexit((_func_5014 *)&LAB_180155d40);
      puVar1 = &DAT_1801fb5d4;
      _Init_thread_footer(&DAT_1801fb5d4);
    }
  }
  if (*piVar3 < DAT_1801fb5d8) {
    puVar1 = &DAT_1801fb5d8;
    FUN_180125398(&DAT_1801fb5d8);
    if (DAT_1801fb5d8 == -1) {
      FUN_1800c5540(0x1801fb5a8,uVar2,"RainValue");
      atexit((_func_5014 *)&LAB_180155d30);
      puVar1 = &DAT_1801fb5d8;
      _Init_thread_footer(&DAT_1801fb5d8);
    }
  }
  local_88 = &LAB_1800bb850;
  if (DAT_1801ec6f8 == DAT_1801ec700) {
    FUN_1800c6820(puVar1,DAT_1801ec6f8,&local_88);
  }
  else {
    *DAT_1801ec6f8 = &LAB_1800bb850;
    DAT_1801ec6f8 = DAT_1801ec6f8 + 1;
  }
  local_88 = &LAB_1800bbf20;
  if (DAT_1801ec6e0 == DAT_1801ec6e8) {
    FUN_1800c69d0(puVar1,DAT_1801ec6e0,&local_88);
  }
  else {
    *DAT_1801ec6e0 = &LAB_1800bbf20;
    DAT_1801ec6e0 = DAT_1801ec6e0 + 1;
  }
  FUN_1801252c0(local_18[0] ^ (ulonglong)auStack_a8);
  return;
}
}

