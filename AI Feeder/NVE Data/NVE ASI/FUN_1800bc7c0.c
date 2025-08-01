#include "FUN_1800bc7c0.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800bc7c0(longlong param_1) {
float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int32_t *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int32_t *puVar11;
  int32_t *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
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
  int32_t local_d8 [160];
  
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    local_res8 = param_1;
    lVar8 = FUN_1800a6750();
    fVar1 = *(float *)(lVar8 + 0x30);
    fVar2 = *(float *)(lVar8 + 0x34);
    fVar3 = *(float *)(lVar8 + 0x38);
    lVar8 = FUN_1800a6750();
    fVar14 = *(float *)(lVar8 + 0x20);
    fVar15 = *(float *)(lVar8 + 0x24);
    fVar16 = *(float *)(lVar8 + 0x28);
    lVar8 = FUN_1800a6750();
    puVar12 = DAT_1801fb5f8;
    plVar9 = DAT_1801f3ad8;
    fVar4 = *(float *)(lVar8 + 0x10);
    fVar5 = *(float *)(lVar8 + 0x14);
    fVar6 = *(float *)(lVar8 + 0x18);
    plVar10 = DAT_1801f3ad8;
    puVar7 = DAT_1801fb5f0;
    puVar11 = DAT_1801fb620;
    if (DAT_1801f3ad8 != (longlong *)0x0) {
      for (; DAT_1801f3ad8 = plVar10, DAT_1801fb620 = puVar11, puVar7 != puVar12;
          puVar7 = puVar7 + 4) {
        puVar11 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar11 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_res8,puVar11,DAT_1801fb5e8);
        if (local_res8 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_res8,&DAT_1801ec470,3,0);
        }
        plVar10 = DAT_1801f3ad8;
        puVar11 = DAT_1801fb620;
      }
      puVar7 = DAT_1801fb618;
      if (plVar10 != (longlong *)0x0) {
        for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
          puVar12 = puVar7;
          if (0xf < (ulonglong)puVar7[3]) {
            puVar12 = (int32_t *)*puVar7;
          }
          (**(code **)(*plVar10 + 0xa0))(plVar10,&local_res10,puVar12,DAT_1801fb610);
          if (local_res10 != 0) {
            (**(code **)(*plVar10 + 0x108))(plVar10,local_res10,&DAT_1801ec450,3,0);
          }
        }
      }
    }
    plVar10 = DAT_1801f3ad8;
    fVar13 = fVar15 * fVar15 + fVar14 * fVar14 + fVar16 * fVar16;
    if (fVar13 < 0.0) {
      fVar13 = FUN_1801501f8(fVar13);
    }
    else {
      fVar13 = SQRT(fVar13);
    }
    puVar7 = DAT_1801fb648;
    if (0.0 < fVar13) {
      fVar14 = fVar14 / fVar13;
      fVar15 = fVar15 / fVar13;
      fVar16 = fVar16 / fVar13;
    }
    plVar9 = plVar10;
    local_198 = fVar14;
    local_194 = fVar15;
    local_190 = fVar16;
    puVar11 = DAT_1801fb640;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar11 != puVar7; puVar11 = puVar11 + 4) {
        puVar12 = puVar11;
        if (0xf < (ulonglong)puVar11[3]) {
          puVar12 = (int32_t *)*puVar11;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_res18,puVar12,DAT_1801fb638);
        if (local_res18 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_res18,&local_198,3,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb670;
    local_188 = fVar5 * DAT_1801ec454 + fVar4 * DAT_1801ec450 + fVar6 * DAT_1801ec458;
    local_184 = fVar2 * DAT_1801ec454 + fVar1 * DAT_1801ec450 + fVar3 * DAT_1801ec458;
    local_180 = fVar14 * DAT_1801ec450 + fVar15 * DAT_1801ec454 + fVar16 * DAT_1801ec458;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb668;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_res20,puVar12,DAT_1801fb660);
        if (local_res20 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_res20,&local_188,3,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb698;
    local_178 = fVar5 * DAT_1801ec474 + fVar4 * DAT_1801ec470 + fVar6 * DAT_1801ec478;
    local_174 = fVar2 * DAT_1801ec474 + fVar1 * DAT_1801ec470 + fVar3 * DAT_1801ec478;
    local_170 = fVar14 * DAT_1801ec470 + fVar15 * DAT_1801ec474 + fVar16 * DAT_1801ec478;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb690;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_168,puVar12,DAT_1801fb688);
        if (local_168 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_168,&local_178,3,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb6c0;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb6b8;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_160,puVar12,DAT_1801fb6b0);
        if (local_160 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_160,&DAT_1801fb6d0 + lVar8 * 0x48,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb778;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb770;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_158,puVar12,DAT_1801fb768);
        if (local_158 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_158,lVar8 * 0x48 + 0x1801fb6d4,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb7a0;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb798;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_150,puVar12,DAT_1801fb790);
        if (local_150 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_150,&DAT_1801fb6d0 + (lVar8 * 9 + 1) * 8,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb7c8;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb7c0;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_148,puVar12,DAT_1801fb7b8);
        if (local_148 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_148,lVar8 * 0x48 + 0x1801fb6dc,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb7f0;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb7e8;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_140,puVar12,DAT_1801fb7e0);
        if (local_140 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_140,&DAT_1801fb6d0 + (lVar8 * 9 + 2) * 8,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb818;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb810;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_138,puVar12,DAT_1801fb808);
        if (local_138 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_138,lVar8 * 0x48 + 0x1801fb6e4,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb840;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb838;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_130,puVar12,DAT_1801fb830);
        if (local_130 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_130,&DAT_1801fb6d0 + (lVar8 * 9 + 3) * 8,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb868;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb860;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_128,puVar12,DAT_1801fb858);
        if (local_128 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_128,lVar8 * 0x48 + 0x1801fb6ec,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb890;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb888;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_120,puVar12,DAT_1801fb880);
        if (local_120 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_120,&DAT_1801fb6d0 + (lVar8 * 9 + 4) * 8,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb8b8;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb8b0;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_118,puVar12,DAT_1801fb8a8);
        if (local_118 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_118,lVar8 * 0x48 + 0x1801fb6f4,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb8e0;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb8d8;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_110,puVar12,DAT_1801fb8d0);
        if (local_110 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_110,&DAT_1801fb6d0 + (lVar8 * 9 + 5) * 8,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb908;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb900;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_108,puVar12,DAT_1801fb8f8);
        if (local_108 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_108,lVar8 * 0x48 + 0x1801fb6fc,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb930;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb928;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_100,puVar12,DAT_1801fb920);
        if (local_100 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_100,&DAT_1801fb6d0 + (lVar8 * 9 + 6) * 8,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb958;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb950;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_f8,puVar12,DAT_1801fb948);
        if (local_f8 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_f8,lVar8 * 0x48 + 0x1801fb704,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb980;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb978;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_f0,puVar12,DAT_1801fb970);
        if (local_f0 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_f0,&DAT_1801fb6d0 + (lVar8 * 9 + 7) * 8,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb9a8;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar9 = plVar10;
    puVar7 = DAT_1801fb9a0;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,&local_e8,puVar12,DAT_1801fb998);
        if (local_e8 != 0) {
          (**(code **)(*plVar10 + 0x108))(plVar10,local_e8,lVar8 * 0x48 + 0x1801fb70c,1,0);
        }
        plVar9 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb9d0;
    lVar8 = (longlong)DAT_1801f3a20;
    plVar10 = plVar9;
    puVar7 = DAT_1801fb9c8;
    if (plVar9 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar9 + 0xa0))(plVar9,&local_e0,puVar12,DAT_1801fb9c0);
        if (local_e0 != 0) {
          (**(code **)(*plVar9 + 0x108))(plVar9,local_e0,&DAT_1801fb710 + lVar8 * 0x48,1,0);
        }
        plVar10 = DAT_1801f3ad8;
      }
    }
    puVar11 = DAT_1801fb9f8;
    puVar7 = DAT_1801fb9f0;
    if (plVar10 != (longlong *)0x0) {
      for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
        puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,local_d8,puVar12,DAT_1801fb9e8);
      }
    }
  }
  return;
}
}

