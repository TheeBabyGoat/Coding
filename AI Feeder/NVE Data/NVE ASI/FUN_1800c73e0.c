#include "FUN_1800c73e0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800c73e0(&local_res8);
    lVar4 = *DAT_1801fba68;
    if (lVar4 != 0) {
auVar1 = *(int32_t (*) [16])(lVar4 + 0xa0);
      uVar12 = auVar1._0_4_;
      uVar13 = auVar1._4_4_;
      uVar14 = auVar1._8_4_;
      uVar15 = auVar1._12_4_;
      auVar2 = *(int32_t (*) [16])(lVar4 + 0xb0);
      uVar16 = auVar2._0_4_;
      uVar17 = auVar2._4_4_;
      uVar18 = auVar2._8_4_;
      uVar19 = auVar2._12_4_;
      auVar3 = *(int32_t (*) [16])(lVar4 + 0xc0);
      uVar20 = auVar3._0_4_;
      uVar21 = auVar3._4_4_;
      uVar22 = auVar3._8_4_;
      uVar23 = auVar3._12_4_;
      uVar5 = FUN_1800c70f0((float *)0x0,auVar1._0_8_,auVar2._0_8_,auVar3._0_8_);
      puVar9 = DAT_1801fba88;
      plVar7 = DAT_1801f3ad8;
      uVar11 = (int32_t)((ulonglong)uVar5 >> 0x20);
      plVar6 = DAT_1801f3ad8;
      puVar8 = DAT_1801fba80;
      puVar10 = DAT_1801fbab0;
      if (DAT_1801f3ad8 != (longlong *)0x0) {
        for (; DAT_1801f3ad8 = plVar6, DAT_1801fbab0 = puVar10, puVar8 != puVar9;
            puVar8 = puVar8 + 4) {
          puVar10 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar10 = (int32_t *)*puVar8;
          }
          (**(code **)(*plVar7 + 0xa0))(plVar7,&local_res10,puVar10,DAT_1801fba78);
          if (local_res10 != 0) {
            (**(code **)(*plVar7 + 0x108))(plVar7,local_res10,lVar4 + 0xd0,0x10,0);
          }
          plVar6 = DAT_1801f3ad8;
          puVar10 = DAT_1801fbab0;
        }
        puVar8 = DAT_1801fbaa8;
        if (plVar6 != (longlong *)0x0) {
          for (; puVar8 != puVar10; puVar8 = puVar8 + 4) {
            puVar9 = puVar8;
            if (0xf < (ulonglong)puVar8[3]) {
              puVar9 = (int32_t *)*puVar8;
            }
            (**(code **)(*plVar6 + 0xa0))(plVar6,&local_res18,puVar9,DAT_1801fbaa0);
            if (local_res18 != 0) {
              (**(code **)(*plVar6 + 0x108))(plVar6,local_res18,lVar4 + 0x50,0x10,0);
            }
          }
        }
      }
      puVar9 = DAT_1801fbad8;
      plVar7 = DAT_1801f3ad8;
      local_b8 = (int)uVar5;
      local_b4 = uVar11;
      local_a8 = uVar12;
      local_a4 = uVar13;
      local_a0 = uVar14;
      local_9c = uVar15;
      local_98 = uVar16;
      local_94 = uVar17;
      local_90 = uVar18;
      local_8c = uVar19;
      local_88 = uVar20;
      local_84 = uVar21;
      local_80 = uVar22;
      local_7c = uVar23;
      plVar6 = DAT_1801f3ad8;
      puVar8 = DAT_1801fbad0;
      puVar10 = DAT_1801fbb00;
      if (DAT_1801f3ad8 != (longlong *)0x0) {
        for (; DAT_1801f3ad8 = plVar6, DAT_1801fbb00 = puVar10, puVar8 != puVar9;
            puVar8 = puVar8 + 4) {
          puVar10 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar10 = (int32_t *)*puVar8;
          }
          (**(code **)(*plVar7 + 0xa0))(plVar7,&local_res20,puVar10,DAT_1801fbac8);
          if (local_res20 != 0) {
            (**(code **)(*plVar7 + 0x108))(plVar7,local_res20,&local_b8,0x10,0);
          }
          plVar6 = DAT_1801f3ad8;
          puVar10 = DAT_1801fbb00;
        }
        plVar7 = plVar6;
        puVar8 = DAT_1801fbb28;
        puVar9 = DAT_1801fbaf8;
        if (plVar6 != (longlong *)0x0) {
          for (; DAT_1801f3ad8 = plVar7, DAT_1801fbb28 = puVar8, puVar9 != puVar10;
              puVar9 = puVar9 + 4) {
            puVar8 = puVar9;
            if (0xf < (ulonglong)puVar9[3]) {
              puVar8 = (int32_t *)*puVar9;
            }
            (**(code **)(*plVar6 + 0xa0))(plVar6,&local_d8,puVar8,DAT_1801fbaf0);
            if (local_d8 != 0) {
              (**(code **)(*plVar6 + 0x108))(plVar6,local_d8,(int32_t *)(lVar4 + 0x90),0x10,0);
            }
            plVar7 = DAT_1801f3ad8;
            puVar8 = DAT_1801fbb28;
          }
          puVar10 = DAT_1801fbb20;
          if (plVar7 != (longlong *)0x0) {
            for (; puVar10 != puVar8; puVar10 = puVar10 + 4) {
              puVar9 = puVar10;
              if (0xf < (ulonglong)puVar10[3]) {
                puVar9 = (int32_t *)*puVar10;
              }
              (**(code **)(*plVar7 + 0xa0))(plVar7,&local_d0,puVar9,DAT_1801fbb18);
              if (local_d0 != 0) {
                (**(code **)(*plVar7 + 0x108))(plVar7,local_d0,lVar4 + 0x150,0x10,0);
              }
            }
          }
        }
      }
      puVar9 = DAT_1801fbb50;
      plVar7 = DAT_1801f3ad8;
      local_res8 = *(longlong *)(lVar4 + 0x458);
      plVar6 = DAT_1801f3ad8;
      puVar8 = DAT_1801fbb48;
      puVar10 = DAT_1801fbb78;
      if (DAT_1801f3ad8 != (longlong *)0x0) {
        for (; DAT_1801f3ad8 = plVar6, DAT_1801fbb78 = puVar10, puVar8 != puVar9;
            puVar8 = puVar8 + 4) {
          puVar10 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar10 = (int32_t *)*puVar8;
          }
          (**(code **)(*plVar7 + 0xa0))(plVar7,&local_c8,puVar10,DAT_1801fbb40);
          if (local_c8 != 0) {
            (**(code **)(*plVar7 + 0x108))(plVar7,local_c8,&local_res8,2,0);
          }
          plVar6 = DAT_1801f3ad8;
          puVar10 = DAT_1801fbb78;
        }
        puVar8 = DAT_1801fbb70;
        if (plVar6 != (longlong *)0x0) {
          for (; puVar8 != puVar10; puVar8 = puVar8 + 4) {
            puVar9 = puVar8;
            if (0xf < (ulonglong)puVar8[3]) {
              puVar9 = (int32_t *)*puVar8;
            }
            (**(code **)(*plVar6 + 0xa0))(plVar6,&local_c0,puVar9,DAT_1801fbb68);
            if (local_c0 != 0) {
              (**(code **)(*plVar6 + 0x108))(plVar6,local_c0,&DAT_1801fbb90,0x10,0);
            }
          }
        }
      }
      _DAT_1801fbb90 = *(int32_t *)(lVar4 + 0x90);
      uRam00000001801fbb98 = *(int32_t *)(lVar4 + 0x98);
      _DAT_1801fbba0 = *(int32_t *)(lVar4 + 0xa0);
      uRam00000001801fbba8 = *(int32_t *)(lVar4 + 0xa8);
      _DAT_1801fbbb0 = *(int32_t *)(lVar4 + 0xb0);
      uRam00000001801fbbb8 = *(int32_t *)(lVar4 + 0xb8);
      _DAT_1801fbbc0 = *(int32_t *)(lVar4 + 0xc0);
      uRam00000001801fbbc8 = *(int32_t *)(lVar4 + 200);
    }
}

 FUN_1800c73e0(&local_res8);
    FUN_18011cdd0((int *)&local_res8,&local_res10);
    puVar5 = DAT_1801fbf90;
    plVar1 = DAT_1801f3ad8;
    uVar7 = DAT_1801f3a28;
    if (DAT_1801f3a18 != '\0') {
uVar7 = DAT_1801ec178;
    }
}

longlong * FUN_1800c73e0(longlong *param_1) {
longlong lVar1;
  LARGE_INTEGER LVar2;
  longlong lVar3;
  
  lVar1 = FUN_1801249b8();
  LVar2 = FUN_18012499c();
  if (lVar1 == 10000000) {
    *param_1 = LVar2.QuadPart * 100;
    return param_1;
  }
  if (lVar1 == 24000000) {
    lVar1 = LVar2.QuadPart + SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(LVar2.QuadPart),8);
    lVar3 = (lVar1 >> 0x18) - (lVar1 >> 0x3f);
    lVar1 = (LVar2.QuadPart + lVar3 * -24000000) * 1000000000;
    lVar1 = SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar1),8) + lVar1;
    *param_1 = ((lVar1 >> 0x18) - (lVar1 >> 0x3f)) + lVar3 * 1000000000;
    return param_1;
  }
  *param_1 = ((LVar2.QuadPart % lVar1) * 1000000000) / lVar1 + (LVar2.QuadPart / lVar1) * 1000000000
  ;
  return param_1;
}
}

 FUN_1800c73e0(&local_res8);
  iVar2 = *(int *)(param_1 + 0x2c8);
  if (iVar2 == -0x42c809c2) {
if (param_3 == DAT_1801fc9b8) {
      _DAT_1801ec490 = *(int32_t *)param_4;
      _DAT_1801ec498 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9bc) {
      _DAT_1801ec4a0 = *(int32_t *)param_4;
      _DAT_1801ec4a8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9c0) {
      _DAT_1801ec4b0 = *(int32_t *)param_4;
      _DAT_1801ec4b8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9c4) {
      _DAT_1801ec4c0 = *(int32_t *)param_4;
      _DAT_1801ec4c8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9c8) {
      _DAT_1801ec4d0 = *(int32_t *)param_4;
      _DAT_1801ec4d8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9cc) {
      _DAT_1801fb108 = *(int32_t *)param_4;
      uRam00000001801fb110 = *(int32_t *)(param_4 + 2);
    }
    else if (param_3 == DAT_1801fc9d0) {
      _DAT_1801ec4e0 = *(int32_t *)param_4;
      _DAT_1801ec4e8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9d4) {
      _DAT_1801ec4f0 = *(int32_t *)param_4;
      _DAT_1801ec4f8 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9d8) {
      _DAT_1801ec500 = *(int32_t *)param_4;
      _DAT_1801ec508 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9dc) {
      _DAT_1801ec510 = *(int32_t *)param_4;
      _DAT_1801ec518 = param_4[2];
    }
    else if (param_3 == DAT_1801fc9e0) {
      _DAT_1801ec520 = *(int32_t *)param_4;
      _DAT_1801ec528 = param_4[2];
    }
  }
}

