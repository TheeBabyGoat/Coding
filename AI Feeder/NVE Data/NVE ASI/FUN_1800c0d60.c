#include "FUN_1800c0d60.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800c0d60(longlong param_1) {
longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  ulonglong uVar7;
  float fVar8;
  longlong local_res8;
  int local_res10;
  int32_t local_res14;
  float local_res18;
  float local_res1c;
  int32_t local_res20;
  int32_t local_res24;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  int32_t local_1ac;
  int32_t local_1a8;
  int32_t local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  int32_t local_178;
  int32_t local_170;
  int32_t local_168;
  int32_t local_160;
  int32_t local_158;
  int32_t local_150;
  int32_t local_148;
  int32_t local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  int32_t local_70;
  int32_t local_68;
  int32_t local_60;
  longlong local_58 [5];
  
  if ((DAT_1801f3ad8 != (longlong *)0x0) &&
     (local_res8 = param_1, cVar3 = (*DAT_1801ec0b0)(1), cVar3 == '\0')) {
    FUN_1800c73e0(&local_res8);
    FUN_18011cdd0((int *)&local_res8,&local_res10);
    puVar5 = DAT_1801fbf90;
    plVar1 = DAT_1801f3ad8;
    uVar7 = DAT_1801f3a28;
    if (DAT_1801f3a18 != '\0') {
      uVar7 = DAT_1801ec178;
    }
    local_res18 = (float)(int)local_res8;
    local_res1c = (float)local_res10;
    puVar4 = DAT_1801fbf88;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
        puVar6 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar6 = (int32_t *)*puVar4;
        }
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_a8,puVar6,DAT_1801fbf80);
        if (local_a8 != 0) {
          (**(code **)(*plVar1 + 0x108))(plVar1,local_a8,&local_res18,2,0);
        }
      }
    }
    puVar5 = DAT_1801fbfb8;
    plVar1 = DAT_1801f3ad8;
    if ((longlong)(uVar7 * 2) < 0) {
      fVar8 = (float)(uVar7 & 0x7fffffffffffffff) + (float)(uVar7 & 0x7fffffffffffffff);
    }
    else {
      fVar8 = (float)(longlong)(uVar7 * 2);
    }
    local_res8 = CONCAT44(local_res8._4_4_,fVar8);
    puVar4 = DAT_1801fbfb0;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
        puVar6 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar6 = (int32_t *)*puVar4;
        }
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_78,puVar6,DAT_1801fbfa8);
        if (local_78 != 0) {
          (**(code **)(*plVar1 + 0x108))(plVar1,local_78,&local_res8,1,0);
        }
      }
    }
    _DAT_1801fbfd0 = DAT_1801f3ae8;
    _DAT_1801fbfd8 = DAT_1801f553c;
    _DAT_1801fbfd4 = DAT_1801f5538;
    _DAT_1801fbfe0 = DAT_1801f5550;
    _DAT_1801fbfdc = DAT_1801f554c;
    _DAT_1801fbfe8 = DAT_1801f5574;
    _DAT_1801fbfe4 = DAT_1801f5554;
    _DAT_1801fbff0 = DAT_1801f557c;
    _DAT_1801fbfec = DAT_1801f5578;
    _DAT_1801fbff8 = DAT_1801f567c;
    _DAT_1801fbff4 = DAT_1801f5664;
    if (DAT_1801ec180 == 0) {
      _DAT_1801fc000 = DAT_1801f55cc;
      _DAT_1801fc008 = DAT_1801f55c4;
      _DAT_1801fc004 = DAT_1801f55c0;
    }
    else if (DAT_1801ec180 == 1) {
      _DAT_1801fc004 = DAT_1801f55c0;
      _DAT_1801fc000 = DAT_1801f55cc * _DAT_1801d8e54;
      _DAT_1801fc008 = DAT_1801f55c4;
    }
    else if (DAT_1801ec180 == 2) {
      _DAT_1801fc004 = DAT_1801f55c0;
      _DAT_1801fc000 = DAT_1801f55cc * DAT_1801d8e60;
      _DAT_1801fc008 = DAT_1801f55c4;
    }
    else if (DAT_1801ec180 == 3) {
      _DAT_1801fc004 = DAT_1801f55c0 + DAT_1801d8e60;
      _DAT_1801fc008 = DAT_1801f55c4 + DAT_1801d8eb4;
      _DAT_1801fc000 = DAT_1801f55cc * DAT_1801d8e70;
    }
    else if (DAT_1801ec180 == 4) {
      _DAT_1801fc004 = DAT_1801f55c0 + DAT_1801d8e88;
      _DAT_1801fc008 = DAT_1801f55c4 + DAT_1801d8ecc;
      _DAT_1801fc000 = DAT_1801f55cc * DAT_1801d8e74;
    }
    _DAT_1801fbffc = DAT_1801f55c8;
    _DAT_1801fc00c = DAT_1801f55d4;
    _DAT_1801fc010 = DAT_1801f55e0;
    _DAT_1801fc014 = DAT_1801f5540;
    _DAT_1801fc018 = DAT_1801f5544;
    _DAT_1801fc01c = DAT_1801f5548;
    _DAT_1801fc020 = _DAT_1801f55f0;
    uRam00000001801fc028 = _DAT_1801f55f8;
    _DAT_1801fc034 = DAT_1801f5604;
    _DAT_1801fc030 = DAT_1801f5600;
    _DAT_1801fc03c = DAT_1801ec304;
    _DAT_1801fc038 = DAT_1801f5608;
    _DAT_1801fc044 = DAT_1801ec314;
    _DAT_1801fc040 = DAT_1801ec310;
    _DAT_1801fc04c = DAT_1801ec320;
    _DAT_1801fc048 = DAT_1801ec318;
    _DAT_1801fc054 = DAT_1801ec328;
    _DAT_1801fc050 = DAT_1801ec324;
    _DAT_1801fc05c = DAT_1801f5598;
    _DAT_1801fc058 = DAT_1801f5594;
    _DAT_1801fc064 = DAT_1801ec300;
    _DAT_1801fc060 = DAT_1801ec2fc;
    _DAT_1801fc07c = DAT_1801f5584;
    _DAT_1801fc068 = _DAT_1801f559c;
    uRam00000001801fc070 = _DAT_1801f55a4;
    _DAT_1801fc084 = DAT_1801f5558;
    _DAT_1801fc078 = DAT_1801f5580;
    _DAT_1801fc08c = DAT_1801f5630;
    _DAT_1801fc080 = DAT_1801f5588;
    _DAT_1801fc094 = DAT_1801f5638;
    _DAT_1801fc088 = DAT_1801f562c;
    _DAT_1801fc0b0 = DAT_1801f54f8;
    _DAT_1801fc090 = DAT_1801f5634;
    _DAT_1801fc09c = _DAT_1801f5500;
    uRam00000001801fc0a4 = _DAT_1801f5508;
    _DAT_1801fc0ac = DAT_1801f54f4;
    _DAT_1801fc0c0 = (float)DAT_1801f5510;
    _DAT_1801fc0b4 = DAT_1801f54fc;
    _DAT_1801fc0c4 = DAT_1801f5660;
    _DAT_1801fc0cc = DAT_1801f5518;
    _DAT_1801fc0c8 = DAT_1801f5514;
    _DAT_1801fc0d8 = DAT_1801ec2f4;
    _DAT_1801fc0d4 = DAT_1801ec2f0;
    _DAT_1801fc0dc = _DAT_1801f551c;
    uRam00000001801fc0e4 = _DAT_1801f5524;
    if (DAT_1801f39f6 == '\0') {
      _DAT_1801fc0ec = DAT_1801f55d8;
    }
    else {
      _DAT_1801fc0ec = 0;
    }
    _DAT_1801fc0f0 = DAT_1801f55dc;
    _DAT_1801fc0f8 = DAT_1801ec30c;
    _DAT_1801fc100 = DAT_1801f55e8;
    _DAT_1801fc108 = (float)DAT_1801f5678;
    _DAT_1801fc0f4 = DAT_1801f55d0;
    _DAT_1801fc110 = DAT_1801f552c;
    _DAT_1801fc0fc = DAT_1801f55e4;
    _DAT_1801fc118 = DAT_1801f5648;
    _DAT_1801fc104 = DAT_1801f55ec;
    _DAT_1801fc120 = DAT_1801f5534;
    _DAT_1801fc10c = DAT_1801f5680;
    _DAT_1801fc128 = DAT_1801f5640;
    _DAT_1801fc114 = DAT_1801f5530;
    _DAT_1801fc130 = DAT_1801ec2e8;
    _DAT_1801fc11c = DAT_1801f564c;
    _DAT_1801fc138 = DAT_1801f555c;
    _DAT_1801fc124 = DAT_1801f563c;
    _DAT_1801fc150 = _DAT_1801f560c;
    uRam00000001801fc158 = _DAT_1801f5614;
    _DAT_1801fc12c = DAT_1801f5644;
    _DAT_1801fc160 = (float)DAT_1801ec308;
    _DAT_1801fc134 = DAT_1801ec2ec;
    _DAT_1801fc13c = _DAT_1801f5564;
    uRam00000001801fc144 = _DAT_1801f556c;
    _DAT_1801fc174 = DAT_1801f5668;
    _DAT_1801fc14c = DAT_1801f5560;
    _DAT_1801fc178 = DAT_1801ec2f8;
    _DAT_1801fc168 = DAT_1801ec31c;
    _DAT_1801fc184 = DAT_1801ec330;
    _DAT_1801fc170 = DAT_1801ec3b0;
    _DAT_1801fc190 = _DAT_1801ec360;
    uRam00000001801fc198 = _DAT_1801ec368;
    _DAT_1801fc180 = DAT_1801ec32c;
    _DAT_1801fc1a0 = _DAT_1801ec370;
    uRam00000001801fc1a8 = _DAT_1801ec378;
    _DAT_1801fc188 = DAT_1801ec3e8;
    _DAT_1801fc1b0 = DAT_1801ec380;
    _DAT_1801fc1b4 = DAT_1801ec384;
    _DAT_1801fc1b8 = DAT_1801ec354;
    _DAT_1801fc1bc = DAT_1801ec358;
    _DAT_1801fc1c0 = DAT_1801ec35c;
    _DAT_1801fc1c4 = DAT_1801ec388;
    _DAT_1801fc0b8 = DAT_1801ec38c;
    _DAT_1801fc0bc = DAT_1801ec390;
    _DAT_1801fc164 = DAT_1801f5688;
    _DAT_1801fc16c = DAT_1801f568c;
    _DAT_1801fc17c = DAT_1801f5690;
    _DAT_1801fc18c = DAT_1801f5694;
    _DAT_1801fc1d0 = DAT_1801f5698;
    _DAT_1801fc1d4 = DAT_1801f569c;
    _DAT_1801fc1d8 = DAT_1801f56a0;
    _DAT_1801fc1dc = DAT_1801f561c;
    _DAT_1801fc1e0 = DAT_1801f5620;
    _DAT_1801fc1e4 = DAT_1801f5624;
    _DAT_1801fc1e8 = DAT_1801f56a4;
    _DAT_1801fc1ec = DAT_1801f56a8;
    _DAT_1801fc208 = DAT_1801ec3a8;
    _DAT_1801fc098 = DAT_1801ec3c0;
    _DAT_1801fc1c8 = DAT_1801ec3b8;
    _DAT_1801fc1f4 = _DAT_1801ec394;
    uRam00000001801fc1fc = _DAT_1801ec39c;
    _DAT_1801fc204 = DAT_1801ec3a4;
    _DAT_1801fc20c = DAT_1801ec3ac;
    _DAT_1801fc0d0 = DAT_1801ec3b4;
    _DAT_1801fc210 = _DAT_1801ec3c4;
    uRam00000001801fc218 = _DAT_1801ec3cc;
    _DAT_1801fc1cc = DAT_1801ec3bc;
    _DAT_1801fc22c = DAT_1801ec3d4;
    _DAT_1801fc220 = DAT_1801ec3d8;
    _DAT_1801fc224 = DAT_1801ec3dc;
    _DAT_1801fc228 = DAT_1801ec3e0;
    _DAT_1801fc1f0 = DAT_1801f5650;
    _DAT_1801fc248 = DAT_1801ec3f0;
    _DAT_1801fc250 = _DAT_1801f56c0;
    uRam00000001801fc258 = _DAT_1801f56c8;
    _DAT_1801fc260 = DAT_1801f56d0;
    _DAT_1801fc268 = DAT_1801f56d8;
    _DAT_1801fc270 = DAT_1801ec3f8;
    _DAT_1801fc230 = _DAT_1801f55ac;
    uRam00000001801fc238 = _DAT_1801f55b4;
    _DAT_1801fc240 = DAT_1801ec3e4;
    _DAT_1801fc244 = DAT_1801ec3ec;
    _DAT_1801fc24c = DAT_1801ec3f4;
    _DAT_1801fc264 = DAT_1801f56d4;
    _DAT_1801fc26c = DAT_1801f5684;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      (**(code **)(*DAT_1801f3ad8 + 0xa0))
                (DAT_1801f3ad8,&local_70,"NVE_VolumetricClouds.fx",&DAT_1801cbd80);
      (**(code **)(*DAT_1801f3ad8 + 0x108))(DAT_1801f3ad8,local_70,&DAT_1801fbfd0,0x10,0);
      if (DAT_1801f3ad8 != (longlong *)0x0) {
        (**(code **)(*DAT_1801f3ad8 + 0xa0))
                  (DAT_1801f3ad8,&local_68,"NVE_VolumetricClouds.fx",&DAT_1801cbd84);
        (**(code **)(*DAT_1801f3ad8 + 0x108))(DAT_1801f3ad8,local_68,&DAT_1801fc010,0x10,0);
        if (DAT_1801f3ad8 != (longlong *)0x0) {
          (**(code **)(*DAT_1801f3ad8 + 0xa0))
                    (DAT_1801f3ad8,&local_60,"NVE_VolumetricClouds.fx",&DAT_1801cbd88);
          (**(code **)(*DAT_1801f3ad8 + 0x108))(DAT_1801f3ad8,local_60,&DAT_1801fc050,0x10,0);
          if (DAT_1801f3ad8 != (longlong *)0x0) {
            (**(code **)(*DAT_1801f3ad8 + 0xa0))
                      (DAT_1801f3ad8,&local_178,"NVE_VolumetricClouds.fx",&DAT_1801cbd8c);
            (**(code **)(*DAT_1801f3ad8 + 0x108))(DAT_1801f3ad8,local_178,&DAT_1801fc090,0x10,0);
            if (DAT_1801f3ad8 != (longlong *)0x0) {
              (**(code **)(*DAT_1801f3ad8 + 0xa0))
                        (DAT_1801f3ad8,&local_170,"NVE_VolumetricClouds.fx",&DAT_1801cbd90);
              (**(code **)(*DAT_1801f3ad8 + 0x108))(DAT_1801f3ad8,local_170,&DAT_1801fc0d0,0x10,0);
              if (DAT_1801f3ad8 != (longlong *)0x0) {
                (**(code **)(*DAT_1801f3ad8 + 0xa0))
                          (DAT_1801f3ad8,&local_168,"NVE_VolumetricClouds.fx",&DAT_1801cbd94);
                (**(code **)(*DAT_1801f3ad8 + 0x108))(DAT_1801f3ad8,local_168,&DAT_1801fc110,0x10,0)
                ;
                if (DAT_1801f3ad8 != (longlong *)0x0) {
                  (**(code **)(*DAT_1801f3ad8 + 0xa0))
                            (DAT_1801f3ad8,&local_160,"NVE_VolumetricClouds.fx",&DAT_1801cbd98);
                  (**(code **)(*DAT_1801f3ad8 + 0x108))
                            (DAT_1801f3ad8,local_160,&DAT_1801fc150,0x10,0);
                  if (DAT_1801f3ad8 != (longlong *)0x0) {
                    (**(code **)(*DAT_1801f3ad8 + 0xa0))
                              (DAT_1801f3ad8,&local_158,"NVE_VolumetricClouds.fx",&DAT_1801cbd9c);
                    (**(code **)(*DAT_1801f3ad8 + 0x108))
                              (DAT_1801f3ad8,local_158,&DAT_1801fc190,0x10,0);
                    if (DAT_1801f3ad8 != (longlong *)0x0) {
                      (**(code **)(*DAT_1801f3ad8 + 0xa0))
                                (DAT_1801f3ad8,&local_150,"NVE_VolumetricClouds.fx",&DAT_1801cbda0);
                      (**(code **)(*DAT_1801f3ad8 + 0x108))
                                (DAT_1801f3ad8,local_150,&DAT_1801fc1d0,0x10,0);
                      if (DAT_1801f3ad8 != (longlong *)0x0) {
                        (**(code **)(*DAT_1801f3ad8 + 0xa0))
                                  (DAT_1801f3ad8,&local_148,"NVE_VolumetricClouds.fx",&DAT_1801cbda4
                                  );
                        (**(code **)(*DAT_1801f3ad8 + 0x108))
                                  (DAT_1801f3ad8,local_148,&DAT_1801fc210,0x10,0);
                        if (DAT_1801f3ad8 != (longlong *)0x0) {
                          (**(code **)(*DAT_1801f3ad8 + 0xa0))
                                    (DAT_1801f3ad8,&local_140,"NVE_VolumetricClouds.fx",
                                     &DAT_1801cbdac);
                          (**(code **)(*DAT_1801f3ad8 + 0x108))
                                    (DAT_1801f3ad8,local_140,&DAT_1801fc250,0x10,0);
                          puVar4 = DAT_1801fc2a8;
                          plVar1 = DAT_1801f3ad8;
                          puVar5 = DAT_1801fc2a0;
                          if (DAT_1801f3ad8 != (longlong *)0x0) {
                            for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
                              puVar6 = puVar5;
                              if (0xf < (ulonglong)puVar5[3]) {
                                puVar6 = (int32_t *)*puVar5;
                              }
                              (**(code **)(*plVar1 + 0xa0))(plVar1,&local_138,puVar6,DAT_1801fc298);
                              if (local_138 != 0) {
                                (**(code **)(*plVar1 + 0x108))(plVar1,local_138,&DAT_1801ec440,3,0);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = DAT_1801fc2d0;
    plVar2 = DAT_1801f3ad8;
    local_1ac = DAT_1801ec450;
    local_1a4 = DAT_1801f3a30;
    local_1a8 = DAT_1801ec454;
    plVar1 = DAT_1801f3ad8;
    puVar5 = DAT_1801fc2c8;
    puVar4 = DAT_1801fc2f8;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; DAT_1801f3ad8 = plVar1, DAT_1801fc2f8 = puVar4, puVar5 != puVar6; puVar5 = puVar5 + 4)
      {
        puVar4 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar4 = (int32_t *)*puVar5;
        }
        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_130,puVar4,DAT_1801fc2c0);
        if (local_130 != 0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,local_130,&local_1ac,3,0);
        }
        plVar1 = DAT_1801f3ad8;
        puVar4 = DAT_1801fc2f8;
      }
      plVar2 = plVar1;
      puVar5 = DAT_1801fc320;
      puVar6 = DAT_1801fc2f0;
      if (plVar1 != (longlong *)0x0) {
        for (; DAT_1801f3ad8 = plVar2, DAT_1801fc320 = puVar5, puVar6 != puVar4; puVar6 = puVar6 + 4
            ) {
          puVar5 = puVar6;
          if (0xf < (ulonglong)puVar6[3]) {
            puVar5 = (int32_t *)*puVar6;
          }
          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_128,puVar5,DAT_1801fc2e8);
          if (local_128 != 0) {
            (**(code **)(*plVar1 + 0x108))(plVar1,local_128,&DAT_1801ec590,3,0);
          }
          plVar2 = DAT_1801f3ad8;
          puVar5 = DAT_1801fc320;
        }
        plVar1 = plVar2;
        puVar4 = DAT_1801fc348;
        puVar6 = DAT_1801fc318;
        if (plVar2 != (longlong *)0x0) {
          for (; DAT_1801f3ad8 = plVar1, DAT_1801fc348 = puVar4, puVar6 != puVar5;
              puVar6 = puVar6 + 4) {
            puVar4 = puVar6;
            if (0xf < (ulonglong)puVar6[3]) {
              puVar4 = (int32_t *)*puVar6;
            }
            (**(code **)(*plVar2 + 0xa0))(plVar2,&local_120,puVar4,DAT_1801fc310);
            if (local_120 != 0) {
              (**(code **)(*plVar2 + 0x108))(plVar2,local_120,&DAT_1801ec5a0,3,0);
            }
            plVar1 = DAT_1801f3ad8;
            puVar4 = DAT_1801fc348;
          }
          plVar2 = plVar1;
          puVar5 = DAT_1801fc370;
          puVar6 = DAT_1801fc340;
          if (plVar1 != (longlong *)0x0) {
            for (; DAT_1801f3ad8 = plVar2, DAT_1801fc370 = puVar5, puVar6 != puVar4;
                puVar6 = puVar6 + 4) {
              puVar5 = puVar6;
              if (0xf < (ulonglong)puVar6[3]) {
                puVar5 = (int32_t *)*puVar6;
              }
              (**(code **)(*plVar1 + 0xa0))(plVar1,&local_118,puVar5,DAT_1801fc338);
              if (local_118 != 0) {
                (**(code **)(*plVar1 + 0x108))(plVar1,local_118,&DAT_1801ec5b0,3,0);
              }
              plVar2 = DAT_1801f3ad8;
              puVar5 = DAT_1801fc370;
            }
            plVar1 = plVar2;
            puVar4 = DAT_1801fc398;
            puVar6 = DAT_1801fc368;
            if (plVar2 != (longlong *)0x0) {
              for (; DAT_1801f3ad8 = plVar1, DAT_1801fc398 = puVar4, puVar6 != puVar5;
                  puVar6 = puVar6 + 4) {
                puVar4 = puVar6;
                if (0xf < (ulonglong)puVar6[3]) {
                  puVar4 = (int32_t *)*puVar6;
                }
                (**(code **)(*plVar2 + 0xa0))(plVar2,&local_110,puVar4,DAT_1801fc360);
                if (local_110 != 0) {
                  (**(code **)(*plVar2 + 0x108))(plVar2,local_110,&DAT_1801f566c,3,0);
                }
                plVar1 = DAT_1801f3ad8;
                puVar4 = DAT_1801fc398;
              }
              plVar2 = plVar1;
              puVar5 = DAT_1801fc3c0;
              puVar6 = DAT_1801fc390;
              if (plVar1 != (longlong *)0x0) {
                for (; DAT_1801f3ad8 = plVar2, DAT_1801fc3c0 = puVar5, puVar6 != puVar4;
                    puVar6 = puVar6 + 4) {
                  puVar5 = puVar6;
                  if (0xf < (ulonglong)puVar6[3]) {
                    puVar5 = (int32_t *)*puVar6;
                  }
                  (**(code **)(*plVar1 + 0xa0))(plVar1,&local_108,puVar5,DAT_1801fc388);
                  if (local_108 != 0) {
                    (**(code **)(*plVar1 + 0x108))(plVar1,local_108,&DAT_1801f54b8,3,0);
                  }
                  plVar2 = DAT_1801f3ad8;
                  puVar5 = DAT_1801fc3c0;
                }
                plVar1 = plVar2;
                puVar4 = DAT_1801fc3e8;
                puVar6 = DAT_1801fc3b8;
                if (plVar2 != (longlong *)0x0) {
                  for (; DAT_1801f3ad8 = plVar1, DAT_1801fc3e8 = puVar4, puVar6 != puVar5;
                      puVar6 = puVar6 + 4) {
                    puVar4 = puVar6;
                    if (0xf < (ulonglong)puVar6[3]) {
                      puVar4 = (int32_t *)*puVar6;
                    }
                    (**(code **)(*plVar2 + 0xa0))(plVar2,&local_100,puVar4,DAT_1801fc3b0);
                    if (local_100 != 0) {
                      (**(code **)(*plVar2 + 0x108))(plVar2,local_100,&DAT_1801f54c4,3,0);
                    }
                    plVar1 = DAT_1801f3ad8;
                    puVar4 = DAT_1801fc3e8;
                  }
                  plVar2 = plVar1;
                  puVar5 = DAT_1801fc410;
                  puVar6 = DAT_1801fc3e0;
                  if (plVar1 != (longlong *)0x0) {
                    for (; DAT_1801f3ad8 = plVar2, DAT_1801fc410 = puVar5, puVar6 != puVar4;
                        puVar6 = puVar6 + 4) {
                      puVar5 = puVar6;
                      if (0xf < (ulonglong)puVar6[3]) {
                        puVar5 = (int32_t *)*puVar6;
                      }
                      (**(code **)(*plVar1 + 0xa0))(plVar1,&local_f8,puVar5,DAT_1801fc3d8);
                      if (local_f8 != 0) {
                        (**(code **)(*plVar1 + 0x108))(plVar1,local_f8,&DAT_1801f54d0,3,0);
                      }
                      plVar2 = DAT_1801f3ad8;
                      puVar5 = DAT_1801fc410;
                    }
                    plVar1 = plVar2;
                    puVar4 = DAT_1801fc438;
                    puVar6 = DAT_1801fc408;
                    if (plVar2 != (longlong *)0x0) {
                      for (; DAT_1801f3ad8 = plVar1, DAT_1801fc438 = puVar4, puVar6 != puVar5;
                          puVar6 = puVar6 + 4) {
                        puVar4 = puVar6;
                        if (0xf < (ulonglong)puVar6[3]) {
                          puVar4 = (int32_t *)*puVar6;
                        }
                        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_f0,puVar4,DAT_1801fc400);
                        if (local_f0 != 0) {
                          (**(code **)(*plVar2 + 0x108))(plVar2,local_f0,&DAT_1801f54dc,3,0);
                        }
                        plVar1 = DAT_1801f3ad8;
                        puVar4 = DAT_1801fc438;
                      }
                      plVar2 = plVar1;
                      puVar5 = DAT_1801fc460;
                      puVar6 = DAT_1801fc430;
                      if (plVar1 != (longlong *)0x0) {
                        for (; DAT_1801f3ad8 = plVar2, DAT_1801fc460 = puVar5, puVar6 != puVar4;
                            puVar6 = puVar6 + 4) {
                          puVar5 = puVar6;
                          if (0xf < (ulonglong)puVar6[3]) {
                            puVar5 = (int32_t *)*puVar6;
                          }
                          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_e8,puVar5,DAT_1801fc428);
                          if (local_e8 != 0) {
                            (**(code **)(*plVar1 + 0x108))(plVar1,local_e8,&DAT_1801f54e8,3,0);
                          }
                          plVar2 = DAT_1801f3ad8;
                          puVar5 = DAT_1801fc460;
                        }
                        plVar1 = plVar2;
                        puVar4 = DAT_1801fc488;
                        puVar6 = DAT_1801fc458;
                        if (plVar2 != (longlong *)0x0) {
                          for (; DAT_1801f3ad8 = plVar1, DAT_1801fc488 = puVar4, puVar6 != puVar5;
                              puVar6 = puVar6 + 4) {
                            puVar4 = puVar6;
                            if (0xf < (ulonglong)puVar6[3]) {
                              puVar4 = (int32_t *)*puVar6;
                            }
                            (**(code **)(*plVar2 + 0xa0))(plVar2,&local_e0,puVar4,DAT_1801fc450);
                            if (local_e0 != 0) {
                              (**(code **)(*plVar2 + 0x108))(plVar2,local_e0,&DAT_1801f5654,3,0);
                            }
                            plVar1 = DAT_1801f3ad8;
                            puVar4 = DAT_1801fc488;
                          }
                          plVar2 = plVar1;
                          puVar5 = DAT_1801fc4b0;
                          puVar6 = DAT_1801fc480;
                          if (plVar1 != (longlong *)0x0) {
                            for (; DAT_1801f3ad8 = plVar2, DAT_1801fc4b0 = puVar5, puVar6 != puVar4;
                                puVar6 = puVar6 + 4) {
                              puVar5 = puVar6;
                              if (0xf < (ulonglong)puVar6[3]) {
                                puVar5 = (int32_t *)*puVar6;
                              }
                              (**(code **)(*plVar1 + 0xa0))(plVar1,&local_d8,puVar5,DAT_1801fc478);
                              if (local_d8 != 0) {
                                (**(code **)(*plVar1 + 0x108))(plVar1,local_d8,&DAT_1801ec2d0,3,0);
                              }
                              plVar2 = DAT_1801f3ad8;
                              puVar5 = DAT_1801fc4b0;
                            }
                            puVar4 = DAT_1801fc4a8;
                            if (plVar2 != (longlong *)0x0) {
                              for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
                                puVar6 = puVar4;
                                if (0xf < (ulonglong)puVar4[3]) {
                                  puVar6 = (int32_t *)*puVar4;
                                }
                                (**(code **)(*plVar2 + 0xa0))(plVar2,&local_d0,puVar6,DAT_1801fc4a0)
                                ;
                                if (local_d0 != 0) {
                                  (**(code **)(*plVar2 + 0x108))(plVar2,local_d0,&DAT_1801ec2dc,3,0)
                                  ;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar4 = DAT_1801fc4d8;
    plVar1 = DAT_1801f3ad8;
    fVar8 = DAT_1801d8f30;
    local_1a0 = DAT_1801fb450 * DAT_1801d8f30;
    local_198 = DAT_1801fb458 * DAT_1801d8f30;
    local_19c = DAT_1801fb454 * DAT_1801d8f30;
    puVar5 = DAT_1801fc4d0;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
        puVar6 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar6 = (int32_t *)*puVar5;
        }
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_c8,puVar6,DAT_1801fc4c8);
        if (local_c8 != 0) {
          (**(code **)(*plVar1 + 0x108))(plVar1,local_c8,&local_1a0,3,0);
        }
      }
    }
    puVar4 = DAT_1801fc500;
    plVar1 = DAT_1801f3ad8;
    local_194 = DAT_1801fb450;
    local_190 = DAT_1801fb454;
    local_18c = DAT_1801fb458;
    puVar5 = DAT_1801fc4f8;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
        puVar6 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar6 = (int32_t *)*puVar5;
        }
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_c0,puVar6,DAT_1801fc4f0);
        if (local_c0 != 0) {
          (**(code **)(*plVar1 + 0x108))(plVar1,local_c0,&local_194,3,0);
        }
      }
    }
    puVar4 = DAT_1801fc528;
    plVar1 = DAT_1801f3ad8;
    local_188 = DAT_1801fb440 * fVar8;
    local_184 = DAT_1801fb444 * fVar8;
    local_180 = DAT_1801fb448 * fVar8;
    puVar5 = DAT_1801fc520;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
        puVar6 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar6 = (int32_t *)*puVar5;
        }
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_b8,puVar6,DAT_1801fc518);
        if (local_b8 != 0) {
          (**(code **)(*plVar1 + 0x108))(plVar1,local_b8,&local_188,3,0);
        }
      }
    }
    puVar6 = DAT_1801fc550;
    plVar2 = DAT_1801f3ad8;
    local_1b8 = DAT_1801fb440;
    local_1b4 = DAT_1801fb444;
    local_1b0 = DAT_1801fb448;
    plVar1 = DAT_1801f3ad8;
    puVar5 = DAT_1801fc548;
    puVar4 = DAT_1801fc578;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; DAT_1801f3ad8 = plVar1, DAT_1801fc578 = puVar4, puVar5 != puVar6; puVar5 = puVar5 + 4)
      {
        puVar4 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar4 = (int32_t *)*puVar5;
        }
        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_b0,puVar4,DAT_1801fc540);
        if (local_b0 != 0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,local_b0,&local_1b8,3,0);
        }
        plVar1 = DAT_1801f3ad8;
        puVar4 = DAT_1801fc578;
      }
      plVar2 = plVar1;
      puVar5 = DAT_1801fc5a0;
      puVar6 = DAT_1801fc570;
      if (plVar1 != (longlong *)0x0) {
        for (; DAT_1801f3ad8 = plVar2, DAT_1801fc5a0 = puVar5, puVar6 != puVar4; puVar6 = puVar6 + 4
            ) {
          puVar5 = puVar6;
          if (0xf < (ulonglong)puVar6[3]) {
            puVar5 = (int32_t *)*puVar6;
          }
          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_80,puVar5,DAT_1801fc568);
          if (local_80 != 0) {
            (**(code **)(*plVar1 + 0x108))(plVar1,local_80,&DAT_1801ec334,3,0);
          }
          plVar2 = DAT_1801f3ad8;
          puVar5 = DAT_1801fc5a0;
        }
        puVar4 = DAT_1801fc598;
        if (plVar2 != (longlong *)0x0) {
          for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
            puVar6 = puVar4;
            if (0xf < (ulonglong)puVar4[3]) {
              puVar6 = (int32_t *)*puVar4;
            }
            (**(code **)(*plVar2 + 0xa0))(plVar2,&local_a0,puVar6,DAT_1801fc590);
            if (local_a0 != 0) {
              (**(code **)(*plVar2 + 0x108))(plVar2,local_a0,&DAT_1801ec340,3,0);
            }
          }
        }
      }
    }
    puVar4 = DAT_1801fc5c8;
    plVar1 = DAT_1801f3ad8;
    local_res10 = DAT_1801ec34c;
    local_res14 = DAT_1801ec350;
    puVar5 = DAT_1801fc5c0;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; puVar5 != puVar4; puVar5 = puVar5 + 4) {
        puVar6 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar6 = (int32_t *)*puVar5;
        }
        (**(code **)(*plVar1 + 0xa0))(plVar1,&local_98,puVar6,DAT_1801fc5b8);
        if (local_98 != 0) {
          (**(code **)(*plVar1 + 0x108))(plVar1,local_98,&local_res10,2,0);
        }
      }
    }
    puVar6 = DAT_1801fc5f0;
    plVar2 = DAT_1801f3ad8;
    local_res20 = DAT_1801f56b8;
    local_res24 = DAT_1801f56bc;
    plVar1 = DAT_1801f3ad8;
    puVar5 = DAT_1801fc5e8;
    puVar4 = DAT_1801fc618;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; DAT_1801f3ad8 = plVar1, DAT_1801fc618 = puVar4, puVar5 != puVar6; puVar5 = puVar5 + 4)
      {
        puVar4 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar4 = (int32_t *)*puVar5;
        }
        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_90,puVar4,DAT_1801fc5e0);
        if (local_90 != 0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,local_90,&local_res20,2,0);
        }
        plVar1 = DAT_1801f3ad8;
        puVar4 = DAT_1801fc618;
      }
      plVar2 = plVar1;
      puVar5 = DAT_1801fc640;
      puVar6 = DAT_1801fc610;
      if (plVar1 != (longlong *)0x0) {
        for (; DAT_1801f3ad8 = plVar2, DAT_1801fc640 = puVar5, puVar6 != puVar4; puVar6 = puVar6 + 4
            ) {
          puVar5 = puVar6;
          if (0xf < (ulonglong)puVar6[3]) {
            puVar5 = (int32_t *)*puVar6;
          }
          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_88,puVar5,DAT_1801fc608);
          if (local_88 != 0) {
            (**(code **)(*plVar1 + 0x108))(plVar1,local_88,&DAT_1801f56ac,3,0);
          }
          plVar2 = DAT_1801f3ad8;
          puVar5 = DAT_1801fc640;
        }
        puVar4 = DAT_1801fc638;
        if (plVar2 != (longlong *)0x0) {
          for (; puVar4 != puVar5; puVar4 = puVar4 + 4) {
            puVar6 = puVar4;
            if (0xf < (ulonglong)puVar4[3]) {
              puVar6 = (int32_t *)*puVar4;
            }
            (**(code **)(*plVar2 + 0xa0))(plVar2,local_58,puVar6,DAT_1801fc630);
            if (local_58[0] != 0) {
              (**(code **)(*plVar2 + 0x108))(plVar2,local_58[0],&DAT_1801f55bc,1,0);
            }
          }
        }
      }
    }
    FUN_1800c73e0(&local_res8);
  }
  return;
}
}

