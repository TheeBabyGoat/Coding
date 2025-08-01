#include "FUN_1800c70b0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c70b0(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4) {
int32_t local_res10;
  int32_t local_res18;
  int32_t local_res20;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  (**(code **)(DAT_1801f3ae0 + 0x350))(param_1,&local_res10);
  return;
}
}

 FUN_1800c70b0("Note: CTRL+Click to input value manually",param_2,param_3,param_4);
  FUN_1800c70b0("Clouds Config",param_2,param_3,param_4);
  (**(code **)(DAT_1801f3ae0 + 0x2c0))();
  FUN_1800dd7f0("Extrasunny",0x97aa0a79,&DAT_1801f39d8);
  FUN_1800dd7f0("Clouds",0x30fdaf5c,&DAT_1801f39dc);
  FUN_1800dd7f0("Overcast",0xbb898d2d,&DAT_1801f39d0);
  FUN_1800dd7f0("Thunder",0xb677829f,&DAT_1801f39c8);
  FUN_1800dd7f0(&DAT_1801d51e0,0x54a69840,&DAT_1801f39cc);
  FUN_1800dd7f0("Foggy",0xae737644,&DAT_1801f39d4);
  (**(code **)(DAT_1801f3ae0 + 0x298))();
  (**(code **)(DAT_1801f3ae0 + 0x478))
            ("Clouds Speed",&DAT_1801ec1a8,0,DAT_1801d8edc,&DAT_1801cb828,0x10);
  (**(code **)(DAT_1801f3ae0 + 0x298))();
  puVar2 = &DAT_1801ec180;
  uVar9 = 4;
  uVar6 = 0;
  (**(code **)(DAT_1801f3ae0 + 0x4a0))
            ("Performance Mode##clouds_config",&DAT_1801ec180,0,4,&DAT_1801d5314,0);
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(*(code **)(DAT_1801f3ae0 + 0x2a0),DAT_1801d8f38);
  FUN_1800dcc80("Lower number means higher quality",puVar2,uVar6,uVar9);
  puVar3 = &DAT_1801f39f6;
  pcVar7 = *(code **)(DAT_1801f3ae0 + 0x3a8);
  (*pcVar7)("Optimized Marching");
  (**(code **)(DAT_1801f3ae0 + 0x2a0))(*(code **)(DAT_1801f3ae0 + 0x2a0),DAT_1801d8f38);
  FUN_1800dcc80("Adds some banding and flickering, but improves FPS.",puVar3,pcVar7,uVar9);
  (**(code **)(DAT_1801f3ae0 + 0x2c8))();
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  FUN_1800c70b0("Aurora Config",puVar3,pcVar7,uVar9);
  (**(code **)(DAT_1801f3ae0 + 0x2c0))();
  pcVar1 = "Aurora Enabled";
  (**(code **)(DAT_1801f3ae0 + 0x3a8))("Aurora Enabled",&DAT_1801f39f4);
  pcVar4 = s_Color_Preset_1_1801ec6a0;
  if (0xf < DAT_1801ec6b8) {
pcVar4 = (char *)s_Color_Preset_1_1801ec6a0._0_8_;
  }
}

 FUN_1800c70b0("ScriptHook missing or not yet initialized.",param_2,param_3,param_4);
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x10) < DAT_1801fca18) {
puVar4 = &DAT_1801fca18;
      FUN_180125398(&DAT_1801fca18);
      if (DAT_1801fca18 == -1) {
        local_358[1] = 0;
        local_358[2] = _DAT_1801d8f90;
        uStack_340 = _UNK_1801d8f98;
        local_358[0] = (ulonglong)_DAT_180182c84;
        local_328 = _DAT_1801d9000;
        uStack_320 = _UNK_1801d9008;
        local_338[0] = s_NG_filmic01_1801d55b0[0];
        local_338[1] = s_NG_filmic01_1801d55b0[1];
        local_338[2] = s_NG_filmic01_1801d55b0[2];
        local_338[3] = s_NG_filmic01_1801d55b0[3];
        local_338[4] = s_NG_filmic01_1801d55b0[4];
        local_338[5] = s_NG_filmic01_1801d55b0[5];
        local_338[6] = s_NG_filmic01_1801d55b0[6];
        local_338[7] = s_NG_filmic01_1801d55b0[7];
        uStack_330 = (ulonglong)CONCAT12(s_NG_filmic01_1801d55b0[10],s_NG_filmic01_1801d55b0._8_2_);
        local_308 = _DAT_1801d9000;
        uStack_300 = _UNK_1801d9008;
        local_318[0] = s_NG_filmic02_1801d55c0[0];
        local_318[1] = s_NG_filmic02_1801d55c0[1];
        local_318[2] = s_NG_filmic02_1801d55c0[2];
        local_318[3] = s_NG_filmic02_1801d55c0[3];
        local_318[4] = s_NG_filmic02_1801d55c0[4];
        local_318[5] = s_NG_filmic02_1801d55c0[5];
        local_318[6] = s_NG_filmic02_1801d55c0[6];
        local_318[7] = s_NG_filmic02_1801d55c0[7];
        uStack_310 = (ulonglong)CONCAT12(s_NG_filmic02_1801d55c0[10],s_NG_filmic02_1801d55c0._8_2_);
        local_2e8 = _DAT_1801d9000;
        uStack_2e0 = _UNK_1801d9008;
        local_2f8[0] = s_NG_filmic03_1801d55d0[0];
        local_2f8[1] = s_NG_filmic03_1801d55d0[1];
        local_2f8[2] = s_NG_filmic03_1801d55d0[2];
        local_2f8[3] = s_NG_filmic03_1801d55d0[3];
        local_2f8[4] = s_NG_filmic03_1801d55d0[4];
        local_2f8[5] = s_NG_filmic03_1801d55d0[5];
        local_2f8[6] = s_NG_filmic03_1801d55d0[6];
        local_2f8[7] = s_NG_filmic03_1801d55d0[7];
        uStack_2f0 = (ulonglong)CONCAT12(s_NG_filmic03_1801d55d0[10],s_NG_filmic03_1801d55d0._8_2_);
        local_2c8 = _DAT_1801d9000;
        uStack_2c0 = _UNK_1801d9008;
        local_2d8[0] = s_NG_filmic04_1801d55e0[0];
        local_2d8[1] = s_NG_filmic04_1801d55e0[1];
        local_2d8[2] = s_NG_filmic04_1801d55e0[2];
        local_2d8[3] = s_NG_filmic04_1801d55e0[3];
        local_2d8[4] = s_NG_filmic04_1801d55e0[4];
        local_2d8[5] = s_NG_filmic04_1801d55e0[5];
        local_2d8[6] = s_NG_filmic04_1801d55e0[6];
        local_2d8[7] = s_NG_filmic04_1801d55e0[7];
        uStack_2d0 = (ulonglong)CONCAT12(s_NG_filmic04_1801d55e0[10],s_NG_filmic04_1801d55e0._8_2_);
        local_2a8 = _DAT_1801d9000;
        uStack_2a0 = _UNK_1801d9008;
        local_2b8[0] = s_NG_filmic05_1801d55f0[0];
        local_2b8[1] = s_NG_filmic05_1801d55f0[1];
        local_2b8[2] = s_NG_filmic05_1801d55f0[2];
        local_2b8[3] = s_NG_filmic05_1801d55f0[3];
        local_2b8[4] = s_NG_filmic05_1801d55f0[4];
        local_2b8[5] = s_NG_filmic05_1801d55f0[5];
        local_2b8[6] = s_NG_filmic05_1801d55f0[6];
        local_2b8[7] = s_NG_filmic05_1801d55f0[7];
        uStack_2b0 = (ulonglong)CONCAT12(s_NG_filmic05_1801d55f0[10],s_NG_filmic05_1801d55f0._8_2_);
        local_288 = _DAT_1801d9000;
        uStack_280 = _UNK_1801d9008;
        local_298[0] = s_NG_filmic06_1801d5600[0];
        local_298[1] = s_NG_filmic06_1801d5600[1];
        local_298[2] = s_NG_filmic06_1801d5600[2];
        local_298[3] = s_NG_filmic06_1801d5600[3];
        local_298[4] = s_NG_filmic06_1801d5600[4];
        local_298[5] = s_NG_filmic06_1801d5600[5];
        local_298[6] = s_NG_filmic06_1801d5600[6];
        local_298[7] = s_NG_filmic06_1801d5600[7];
        uStack_290 = (ulonglong)CONCAT12(s_NG_filmic06_1801d5600[10],s_NG_filmic06_1801d5600._8_2_);
        local_268 = _DAT_1801d9000;
        uStack_260 = _UNK_1801d9008;
        local_278[0] = s_NG_filmic07_1801d5610[0];
        local_278[1] = s_NG_filmic07_1801d5610[1];
        local_278[2] = s_NG_filmic07_1801d5610[2];
        local_278[3] = s_NG_filmic07_1801d5610[3];
        local_278[4] = s_NG_filmic07_1801d5610[4];
        local_278[5] = s_NG_filmic07_1801d5610[5];
        local_278[6] = s_NG_filmic07_1801d5610[6];
        local_278[7] = s_NG_filmic07_1801d5610[7];
        uStack_270 = (ulonglong)CONCAT12(s_NG_filmic07_1801d5610[10],s_NG_filmic07_1801d5610._8_2_);
        local_248 = _DAT_1801d9000;
        uStack_240 = _UNK_1801d9008;
        local_258[0] = s_NG_filmic08_1801d5620[0];
        local_258[1] = s_NG_filmic08_1801d5620[1];
        local_258[2] = s_NG_filmic08_1801d5620[2];
        local_258[3] = s_NG_filmic08_1801d5620[3];
        local_258[4] = s_NG_filmic08_1801d5620[4];
        local_258[5] = s_NG_filmic08_1801d5620[5];
        local_258[6] = s_NG_filmic08_1801d5620[6];
        local_258[7] = s_NG_filmic08_1801d5620[7];
        uStack_250 = (ulonglong)CONCAT12(s_NG_filmic08_1801d5620[10],s_NG_filmic08_1801d5620._8_2_);
        local_228 = _DAT_1801d9000;
        uStack_220 = _UNK_1801d9008;
        local_238[0] = s_NG_filmic09_1801d5630[0];
        local_238[1] = s_NG_filmic09_1801d5630[1];
        local_238[2] = s_NG_filmic09_1801d5630[2];
        local_238[3] = s_NG_filmic09_1801d5630[3];
        local_238[4] = s_NG_filmic09_1801d5630[4];
        local_238[5] = s_NG_filmic09_1801d5630[5];
        local_238[6] = s_NG_filmic09_1801d5630[6];
        local_238[7] = s_NG_filmic09_1801d5630[7];
        uStack_230 = (ulonglong)CONCAT12(s_NG_filmic09_1801d5630[10],s_NG_filmic09_1801d5630._8_2_);
        local_208 = _DAT_1801d9000;
        uStack_200 = _UNK_1801d9008;
        local_218[0] = s_NG_filmic10_1801d5640[0];
        local_218[1] = s_NG_filmic10_1801d5640[1];
        local_218[2] = s_NG_filmic10_1801d5640[2];
        local_218[3] = s_NG_filmic10_1801d5640[3];
        local_218[4] = s_NG_filmic10_1801d5640[4];
        local_218[5] = s_NG_filmic10_1801d5640[5];
        local_218[6] = s_NG_filmic10_1801d5640[6];
        local_218[7] = s_NG_filmic10_1801d5640[7];
        uStack_210 = (ulonglong)CONCAT12(s_NG_filmic10_1801d5640[10],s_NG_filmic10_1801d5640._8_2_);
        local_1e8 = _DAT_1801d9000;
        uStack_1e0 = _UNK_1801d9008;
        local_1f8[0] = s_NG_filmic11_1801d5650[0];
        local_1f8[1] = s_NG_filmic11_1801d5650[1];
        local_1f8[2] = s_NG_filmic11_1801d5650[2];
        local_1f8[3] = s_NG_filmic11_1801d5650[3];
        local_1f8[4] = s_NG_filmic11_1801d5650[4];
        local_1f8[5] = s_NG_filmic11_1801d5650[5];
        local_1f8[6] = s_NG_filmic11_1801d5650[6];
        local_1f8[7] = s_NG_filmic11_1801d5650[7];
        uStack_1f0 = (ulonglong)CONCAT12(s_NG_filmic11_1801d5650[10],s_NG_filmic11_1801d5650._8_2_);
        local_1c8 = _DAT_1801d9000;
        uStack_1c0 = _UNK_1801d9008;
        local_1d8[0] = s_NG_filmic12_1801d5660[0];
        local_1d8[1] = s_NG_filmic12_1801d5660[1];
        local_1d8[2] = s_NG_filmic12_1801d5660[2];
        local_1d8[3] = s_NG_filmic12_1801d5660[3];
        local_1d8[4] = s_NG_filmic12_1801d5660[4];
        local_1d8[5] = s_NG_filmic12_1801d5660[5];
        local_1d8[6] = s_NG_filmic12_1801d5660[6];
        local_1d8[7] = s_NG_filmic12_1801d5660[7];
        uStack_1d0 = (ulonglong)CONCAT12(s_NG_filmic12_1801d5660[10],s_NG_filmic12_1801d5660._8_2_);
        local_1a8 = _DAT_1801d9000;
        uStack_1a0 = _UNK_1801d9008;
        local_1b8[0] = s_NG_filmic13_1801d5670[0];
        local_1b8[1] = s_NG_filmic13_1801d5670[1];
        local_1b8[2] = s_NG_filmic13_1801d5670[2];
        local_1b8[3] = s_NG_filmic13_1801d5670[3];
        local_1b8[4] = s_NG_filmic13_1801d5670[4];
        local_1b8[5] = s_NG_filmic13_1801d5670[5];
        local_1b8[6] = s_NG_filmic13_1801d5670[6];
        local_1b8[7] = s_NG_filmic13_1801d5670[7];
        uStack_1b0 = (ulonglong)CONCAT12(s_NG_filmic13_1801d5670[10],s_NG_filmic13_1801d5670._8_2_);
        local_188 = _DAT_1801d9000;
        uStack_180 = _UNK_1801d9008;
        local_198[0] = s_NG_filmic14_1801d5680[0];
        local_198[1] = s_NG_filmic14_1801d5680[1];
        local_198[2] = s_NG_filmic14_1801d5680[2];
        local_198[3] = s_NG_filmic14_1801d5680[3];
        local_198[4] = s_NG_filmic14_1801d5680[4];
        local_198[5] = s_NG_filmic14_1801d5680[5];
        local_198[6] = s_NG_filmic14_1801d5680[6];
        local_198[7] = s_NG_filmic14_1801d5680[7];
        uStack_190 = (ulonglong)CONCAT12(s_NG_filmic14_1801d5680[10],s_NG_filmic14_1801d5680._8_2_);
        local_168 = _DAT_1801d9000;
        uStack_160 = _UNK_1801d9008;
        local_178[0] = s_NG_filmic15_1801d5690[0];
        local_178[1] = s_NG_filmic15_1801d5690[1];
        local_178[2] = s_NG_filmic15_1801d5690[2];
        local_178[3] = s_NG_filmic15_1801d5690[3];
        local_178[4] = s_NG_filmic15_1801d5690[4];
        local_178[5] = s_NG_filmic15_1801d5690[5];
        local_178[6] = s_NG_filmic15_1801d5690[6];
        local_178[7] = s_NG_filmic15_1801d5690[7];
        uStack_170 = (ulonglong)CONCAT12(s_NG_filmic15_1801d5690[10],s_NG_filmic15_1801d5690._8_2_);
        local_148 = _DAT_1801d9000;
        uStack_140 = _UNK_1801d9008;
        local_158[0] = s_NG_filmic16_1801d56a0[0];
        local_158[1] = s_NG_filmic16_1801d56a0[1];
        local_158[2] = s_NG_filmic16_1801d56a0[2];
        local_158[3] = s_NG_filmic16_1801d56a0[3];
        local_158[4] = s_NG_filmic16_1801d56a0[4];
        local_158[5] = s_NG_filmic16_1801d56a0[5];
        local_158[6] = s_NG_filmic16_1801d56a0[6];
        local_158[7] = s_NG_filmic16_1801d56a0[7];
        uStack_150 = (ulonglong)CONCAT12(s_NG_filmic16_1801d56a0[10],s_NG_filmic16_1801d56a0._8_2_);
        local_128 = _DAT_1801d9000;
        uStack_120 = _UNK_1801d9008;
        local_138[0] = s_NG_filmic17_1801d56b0[0];
        local_138[1] = s_NG_filmic17_1801d56b0[1];
        local_138[2] = s_NG_filmic17_1801d56b0[2];
        local_138[3] = s_NG_filmic17_1801d56b0[3];
        local_138[4] = s_NG_filmic17_1801d56b0[4];
        local_138[5] = s_NG_filmic17_1801d56b0[5];
        local_138[6] = s_NG_filmic17_1801d56b0[6];
        local_138[7] = s_NG_filmic17_1801d56b0[7];
        uStack_130 = (ulonglong)CONCAT12(s_NG_filmic17_1801d56b0[10],s_NG_filmic17_1801d56b0._8_2_);
        local_108 = _DAT_1801d9000;
        uStack_100 = _UNK_1801d9008;
        local_118[0] = s_NG_filmic18_1801d56c0[0];
        local_118[1] = s_NG_filmic18_1801d56c0[1];
        local_118[2] = s_NG_filmic18_1801d56c0[2];
        local_118[3] = s_NG_filmic18_1801d56c0[3];
        local_118[4] = s_NG_filmic18_1801d56c0[4];
        local_118[5] = s_NG_filmic18_1801d56c0[5];
        local_118[6] = s_NG_filmic18_1801d56c0[6];
        local_118[7] = s_NG_filmic18_1801d56c0[7];
        uStack_110 = (ulonglong)CONCAT12(s_NG_filmic18_1801d56c0[10],s_NG_filmic18_1801d56c0._8_2_);
        local_e8 = _DAT_1801d9000;
        uStack_e0 = _UNK_1801d9008;
        local_f8[0] = s_NG_filmic19_1801d56d0[0];
        local_f8[1] = s_NG_filmic19_1801d56d0[1];
        local_f8[2] = s_NG_filmic19_1801d56d0[2];
        local_f8[3] = s_NG_filmic19_1801d56d0[3];
        local_f8[4] = s_NG_filmic19_1801d56d0[4];
        local_f8[5] = s_NG_filmic19_1801d56d0[5];
        local_f8[6] = s_NG_filmic19_1801d56d0[6];
        local_f8[7] = s_NG_filmic19_1801d56d0[7];
        uStack_f0 = (ulonglong)CONCAT12(s_NG_filmic19_1801d56d0[10],s_NG_filmic19_1801d56d0._8_2_);
        local_c8 = _DAT_1801d9000;
        uStack_c0 = _UNK_1801d9008;
        local_d8[0] = s_NG_filmic20_1801d56e0[0];
        local_d8[1] = s_NG_filmic20_1801d56e0[1];
        local_d8[2] = s_NG_filmic20_1801d56e0[2];
        local_d8[3] = s_NG_filmic20_1801d56e0[3];
        local_d8[4] = s_NG_filmic20_1801d56e0[4];
        local_d8[5] = s_NG_filmic20_1801d56e0[5];
        local_d8[6] = s_NG_filmic20_1801d56e0[6];
        local_d8[7] = s_NG_filmic20_1801d56e0[7];
        uStack_d0 = (ulonglong)CONCAT12(s_NG_filmic20_1801d56e0[10],s_NG_filmic20_1801d56e0._8_2_);
        local_a8 = _DAT_1801d9000;
        uStack_a0 = _UNK_1801d9008;
        local_b8[0] = s_NG_filmic21_1801d56f0[0];
        local_b8[1] = s_NG_filmic21_1801d56f0[1];
        local_b8[2] = s_NG_filmic21_1801d56f0[2];
        local_b8[3] = s_NG_filmic21_1801d56f0[3];
        local_b8[4] = s_NG_filmic21_1801d56f0[4];
        local_b8[5] = s_NG_filmic21_1801d56f0[5];
        local_b8[6] = s_NG_filmic21_1801d56f0[6];
        local_b8[7] = s_NG_filmic21_1801d56f0[7];
        uStack_b0 = (ulonglong)CONCAT12(s_NG_filmic21_1801d56f0[10],s_NG_filmic21_1801d56f0._8_2_);
        local_88 = _DAT_1801d9000;
        uStack_80 = _UNK_1801d9008;
        local_98[0] = s_NG_filmic22_1801d5700[0];
        local_98[1] = s_NG_filmic22_1801d5700[1];
        local_98[2] = s_NG_filmic22_1801d5700[2];
        local_98[3] = s_NG_filmic22_1801d5700[3];
        local_98[4] = s_NG_filmic22_1801d5700[4];
        local_98[5] = s_NG_filmic22_1801d5700[5];
        local_98[6] = s_NG_filmic22_1801d5700[6];
        local_98[7] = s_NG_filmic22_1801d5700[7];
        uStack_90 = (ulonglong)CONCAT12(s_NG_filmic22_1801d5700[10],s_NG_filmic22_1801d5700._8_2_);
        local_68 = _DAT_1801d9000;
        uStack_60 = _UNK_1801d9008;
        local_78[0] = s_NG_filmic23_1801d5710[0];
        local_78[1] = s_NG_filmic23_1801d5710[1];
        local_78[2] = s_NG_filmic23_1801d5710[2];
        local_78[3] = s_NG_filmic23_1801d5710[3];
        local_78[4] = s_NG_filmic23_1801d5710[4];
        local_78[5] = s_NG_filmic23_1801d5710[5];
        local_78[6] = s_NG_filmic23_1801d5710[6];
        local_78[7] = s_NG_filmic23_1801d5710[7];
        uStack_70 = (ulonglong)CONCAT12(s_NG_filmic23_1801d5710[10],s_NG_filmic23_1801d5710._8_2_);
        local_48 = _DAT_1801d9000;
        uStack_40 = _UNK_1801d9008;
        local_58[0] = s_NG_filmic24_1801d5720[0];
        local_58[1] = s_NG_filmic24_1801d5720[1];
        local_58[2] = s_NG_filmic24_1801d5720[2];
        local_58[3] = s_NG_filmic24_1801d5720[3];
        local_58[4] = s_NG_filmic24_1801d5720[4];
        local_58[5] = s_NG_filmic24_1801d5720[5];
        local_58[6] = s_NG_filmic24_1801d5720[6];
        local_58[7] = s_NG_filmic24_1801d5720[7];
        uStack_50 = (ulonglong)CONCAT12(s_NG_filmic24_1801d5720[10],s_NG_filmic24_1801d5720._8_2_);
        local_28 = _DAT_1801d9000;
        uStack_20 = _UNK_1801d9008;
        local_38[0] = s_NG_filmic25_1801d5730[0];
        local_38[1] = s_NG_filmic25_1801d5730[1];
        local_38[2] = s_NG_filmic25_1801d5730[2];
        local_38[3] = s_NG_filmic25_1801d5730[3];
        local_38[4] = s_NG_filmic25_1801d5730[4];
        local_38[5] = s_NG_filmic25_1801d5730[5];
        local_38[6] = s_NG_filmic25_1801d5730[6];
        local_38[7] = s_NG_filmic25_1801d5730[7];
        uStack_30 = (ulonglong)CONCAT12(s_NG_filmic25_1801d5730[10],s_NG_filmic25_1801d5730._8_2_);
        DAT_1801fca20 = (int32_t *)0x0;
        DAT_1801fca28 = (int32_t *)0x0;
        _DAT_1801fca30 = (int32_t *)0x0;
        puVar3 = (int32_t *)FUN_1800ba8c0(puVar4,0x1a);
        _DAT_1801fca30 = puVar3 + 0x68;
        local_378 = &DAT_1801fca20;
        puVar5 = local_358;
        local_360 = &DAT_1801fca20;
        DAT_1801fca20 = puVar3;
        DAT_1801fca28 = puVar3;
        local_370 = puVar3;
        do {
          local_368 = puVar3;
          FUN_1800ba630(puVar3,puVar5);
          puVar3 = puVar3 + 4;
          puVar5 = puVar5 + 4;
        } while (puVar5 != local_18);
        DAT_1801fca28 = puVar3;
        local_368 = puVar3;
        _eh_vector_destructor_iterator_(local_358,0x20,0x1a,thunk_FUN_1800a6800);
        atexit((_func_5014 *)&LAB_180156440);
        _Init_thread_footer(&DAT_1801fca18);
      }
    }
}

 FUN_1800c70b0("Other Settings",param_2,param_3,param_4);
  (**(code **)(DAT_1801f3ae0 + 0x2c0))(DAT_1801d8ec0);
  cVar2 = (*DAT_1801ec088)();
  if (cVar2 != '\0') {
(**(code **)(DAT_1801f3ae0 + 0x3a8))("I acknowledge the MSAA information",&DAT_1801f3a39);
  }
}

 FUN_1800c70b0("ScriptHook missing or not yet initialized.",param_2,param_3,param_4);
  }
  else {
    pcVar8 = *(code **)(DAT_1801f3ae0 + 0x3a8);
    puVar4 = &DAT_1801f3b29;
    (*pcVar8)("##OverrideTime");
    (**(code **)(DAT_1801f3ae0 + 0x2a0))(*(code **)(DAT_1801f3ae0 + 0x2a0),DAT_1801d8f38);
    FUN_1800c70b0("Override Time",puVar4,pcVar8,param_4);
    local_78 = _DAT_1801d9b90;
    puStack_70 = _UNK_1801d9b98;
    (**(code **)(DAT_1801f3ae0 + 0x1a0))(0xf,&local_78);
    auVar11._0_8_ = (**(code **)(DAT_1801f3ae0 + 0x80))();
    auVar11._8_8_ = extraout_XMM0_Qb;
    auVar12._4_12_ = auVar11._4_12_;
    auVar12._0_4_ = (float)auVar11._0_8_ * _DAT_1801d8e08;
    (**(code **)(DAT_1801f3ae0 + 0x1e8))(auVar12._0_8_);
    local_a0 = 0;
    local_a8 = &DAT_1801d5314;
    (**(code **)(DAT_1801f3ae0 + 0x4a0))("##hours",&DAT_1801ec218,0,0x17);
    (**(code **)(DAT_1801f3ae0 + 0x1f0))();
    (**(code **)(DAT_1801f3ae0 + 0x2a0))(*(code **)(DAT_1801f3ae0 + 0x2a0),DAT_1801d8f38);
    auVar13._0_8_ = (**(code **)(DAT_1801f3ae0 + 0x80))();
    auVar13._8_8_ = extraout_XMM0_Qb_00;
    auVar14._4_12_ = auVar13._4_12_;
    auVar14._0_4_ = (float)auVar13._0_8_ * _DAT_1801d8e08;
    (**(code **)(DAT_1801f3ae0 + 0x1e8))(auVar14._0_8_);
    local_a0 = 0;
    local_a8 = &DAT_1801d5314;
    uVar10 = 0x3b;
    uVar9 = 0;
    puVar5 = &DAT_1801ec21c;
    (**(code **)(DAT_1801f3ae0 + 0x4a0))("##minutes");
    (**(code **)(DAT_1801f3ae0 + 0x1f0))();
    (**(code **)(DAT_1801f3ae0 + 0x2a0))(*(code **)(DAT_1801f3ae0 + 0x2a0),DAT_1801d8f38);
    FUN_1800c70b0("Hours & Minutes",puVar5,uVar9,uVar10);
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    (**(code **)(DAT_1801f3ae0 + 0x1b0))(0xd,DAT_1801d8e38);
    (**(code **)(DAT_1801f3ae0 + 0x3a8))
              ("Persist Weather (Applied on next weather change)",&DAT_1801f3b28);
    (**(code **)(DAT_1801f3ae0 + 0x1c0))(1);
    (**(code **)(DAT_1801f3ae0 + 0x298))();
    local_88[0] = *DAT_1801fc8f0;
    if (*(char *)(local_88[0] + 0x19) == '\0') {
local_98 = &DAT_1801d5f64;
      uStack_90 = 2;
      do {
        lVar1 = local_88[0];
        plVar7 = (longlong *)(local_88[0] + 0x20);
        if (*(int *)(local_88[0] + 0x40) == DAT_1801f3b24) {
          (**(code **)(DAT_1801f3ae0 + 0x1a0))(0x15,&DAT_1801ec208);
          puVar6 = &DAT_1801ec1f8;
        }
        else {
          (**(code **)(DAT_1801f3ae0 + 0x1a0))(0x15,&DAT_1801ec1f8);
          puVar6 = &DAT_1801ec208;
        }
        (**(code **)(DAT_1801f3ae0 + 0x1a0))(0x17,puVar6);
        (**(code **)(DAT_1801f3ae0 + 0x1a0))(0x16,&DAT_1801ec208);
        local_98 = (int32_t *)0x0;
        local_50 = (longlong)plVar7;
        if (0xf < *(ulonglong *)(lVar1 + 0x38)) {
          local_50 = *plVar7;
        }
        local_48 = *(int32_t *)(lVar1 + 0x30);
        local_58 = 0xc000000000000000;
        local_78 = 1;
        puStack_70 = &local_58;
        local_68 = &DAT_1801d5f64;
        uStack_60 = 2;
        FUN_1800b7670((longlong *)local_40,(longlong *)&local_68,&local_78);
        pppuVar3 = local_40;
        if (0xf < local_28) {
          pppuVar3 = (int32_t ***)local_40[0];
        }
        cVar2 = (**(code **)(DAT_1801f3ae0 + 0x388))(pppuVar3,&local_98);
        FUN_1800a6800((longlong *)local_40);
        if (cVar2 != '\0') {
          if (0xf < *(ulonglong *)(lVar1 + 0x38)) {
            plVar7 = (longlong *)*plVar7;
          }
          DAT_1801f3b23 = 1;
          PTR_DAT_1801ec1f0 = (int32_t *)plVar7;
        }
        (**(code **)(DAT_1801f3ae0 + 0x1a8))(3);
        FUN_1800e6060(local_88);
      } while (*(char *)(local_88[0] + 0x19) == '\0');
    }
}

