#include "FUN_1800ded60.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800ded60(void) {
int32_t uVar1;
  char cVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *plVar5;
  code *pcVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t in_stack_ffffffffffffffd0;
  uint uVar9;
  
  uVar9 = (uint)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  cVar4 = '\x01';
  if (DAT_1801f3ad8 != (longlong *)0x0) {
    plVar5 = DAT_1801f3ad8;
    uVar3 = FUN_1800de890(0x2000);
    cVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,uVar3 & 0xffffffff);
    if ((cVar2 != '\0') && (DAT_1801f3ad8 != (longlong *)0x0)) {
      plVar5 = DAT_1801f3ad8;
      uVar3 = FUN_1800de890(0x1000);
      cVar2 = (**(code **)(*plVar5 + 0x60))(plVar5,uVar3 & 0xffffffff);
      cVar4 = '\x01';
      if (cVar2 != '\0') {
        cVar4 = '\0';
      }
    }
  }
  uVar3 = (ulonglong)uVar9 << 0x20;
  (**(code **)(DAT_1801f3ae0 + 0x478))
            ("Headlight Intensity",&DAT_1801ebe38,0,DAT_1801d8eb4,&DAT_1801cb828,uVar3);
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  uVar8 = 1;
  (**(code **)(DAT_1801f3ae0 + 0x478))
            ("Global Car Light Multiplier",&DAT_1801ebd78,0,DAT_1801d8ef4,&DAT_1801cb828,
             uVar3 & 0xffffffff00000000);
  pcVar6 = *(code **)(DAT_1801f3ae0 + 0x5e0);
  cVar2 = (*pcVar6)("Day Multipliers",0,0x20);
  uVar1 = DAT_1801d8e18;
  if (cVar2 != '\0') {
    uVar7 = CONCAT44(uVar8,DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Headlights##day",&DAT_1801ebd74,DAT_1801d8e18,0,uVar7,&DAT_1801cb828,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Taillights##day",&DAT_1801ebd70,uVar1,0,uVar7,&DAT_1801cb828,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Indicators##day",&DAT_1801ebd6c,uVar1,0,uVar7,&DAT_1801cb828,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Reversing Lights##day",&DAT_1801ebd68,uVar1,0,uVar7,&DAT_1801cb828,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Default Lights##day",&DAT_1801ebd64,uVar1,0,uVar7,&DAT_1801cb828,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Brake Lights##day",&DAT_1801ebd60,uVar1,0,uVar7,&DAT_1801cb828,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Middle Brake Light##day",&DAT_1801ebd5c,uVar1,0,uVar7,&DAT_1801cb828,0);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Extra Lights##day",&DAT_1801ebd58,uVar1,0,uVar7,&DAT_1801cb828,0);
    pcVar6 = *(code **)(DAT_1801f3ae0 + 0x418);
    uVar7 = CONCAT44((int)((ulonglong)uVar7 >> 0x20),DAT_1801d8f2c);
    (*pcVar6)("Siren Lights##day",&DAT_1801ebd54,uVar1,0,uVar7,&DAT_1801cb828,0);
    uVar8 = (int32_t)((ulonglong)uVar7 >> 0x20);
  }
  FUN_1800df3e0("Reset##day_multipliers",cVar4,&LAB_1800df320,pcVar6);
  (**(code **)(DAT_1801f3ae0 + 0x2a8))();
  pcVar6 = *(code **)(DAT_1801f3ae0 + 0x5e0);
  cVar2 = (*pcVar6)("Night Multipliers",0,0x20);
  if (cVar2 != '\0') {
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Headlights##night",&DAT_1801ebd50,uVar1,0,CONCAT44(uVar8,DAT_1801d8f2c),
               &DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Taillights##night",&DAT_1801ebd4c,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Indicators##night",&DAT_1801ebd48,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Reversing Lights##night",&DAT_1801ebd44,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Default Lights##night",&DAT_1801ebd40,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Brake Lights##night",&DAT_1801ebd3c,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Middle Brake Light##night",&DAT_1801ebd38,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Extra Lights##night",&DAT_1801ebd34,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
    (**(code **)(DAT_1801f3ae0 + 0x418))
              ("Siren Lights##night",&DAT_1801ebd30,uVar1,0,DAT_1801d8f2c,&DAT_1801cb828,0);
  }
  FUN_1800df3e0("Reset##night_multipliers",cVar4,&LAB_1800df380,pcVar6);
  return;
}
}

 FUN_1800ded60();
        }
        break;
      case 3:
      case 8:
        break;
      case 4:
        FUN_1800e5c60(pcVar3,0x180000000,puVar11,uVar12);
        break;
      case 6:
        FUN_1800df9a0(pcVar3,0x180000000,puVar11,uVar12);
        break;
      case 9:
        FUN_1800e0d40(pcVar3,0x180000000,puVar11,uVar12);
      }
    }
    (**(code **)(DAT_1801f3ae0 + 0x38))();
  }
  else {
    lVar9 = 5;
    do {
      (**(code **)(DAT_1801f3ae0 + 0x2a8))();
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    local_178[0] = '\0';
    local_178[1] = '\0';
    local_178[2] = '\0';
    local_178[3] = '\0';
    local_178[4] = '\0';
    local_178[5] = '\0';
    local_178[6] = '\0';
    local_178[7] = '\0';
    local_178[8] = '\0';
    local_178[9] = '\0';
    local_178[10] = '\0';
    local_178[0xb] = '\0';
    local_178[0xc] = '\0';
    local_178[0xd] = '\0';
    local_178[0xe] = '\0';
    local_178[0xf] = '\0';
    local_178[0x10] = '\0';
    local_178[0x11] = '\0';
    local_178[0x12] = '\0';
    local_178[0x13] = '\0';
    local_178[0x14] = '\0';
    local_178[0x15] = '\0';
    local_178[0x16] = '\0';
    local_178[0x17] = '\0';
    local_178[0x18] = '\0';
    local_178[0x19] = '\0';
    local_178[0x1a] = '\0';
    local_178[0x1b] = '\0';
    local_178[0x1c] = '\0';
    local_178[0x1d] = '\0';
    local_178[0x1e] = '\0';
    local_178[0x1f] = '\0';
    local_158 = 0;
    uStack_150 = 0;
    uVar1 = (uint)local_148;
    local_148 = CONCAT44(0x39,uVar1 & 0xffff0000);
    uStack_140 = 0x2100000052;
    local_138 = _DAT_1801d94a0;
    uStack_130 = _UNK_1801d94a8;
    local_128 = _DAT_1801d92e0;
    uStack_120 = _UNK_1801d92e8;
    local_118 = _DAT_1801d9880;
    uStack_110 = _UNK_1801d9888;
    local_108 = _DAT_1801d9270;
    uStack_100 = _UNK_1801d9278;
    local_f8 = _DAT_1801d96d0;
    uStack_f0 = _UNK_1801d96d8;
    local_e8 = _DAT_1801d9710;
    uStack_e0 = _UNK_1801d9718;
    local_d8 = _DAT_1801d9870;
    uStack_d0 = _UNK_1801d9878;
    local_c8 = _DAT_1801d9250;
    uStack_c0 = _UNK_1801d9258;
    local_b8 = _DAT_1801d97d0;
    uStack_b0 = _UNK_1801d97d8;
    local_a8 = _DAT_1801d9240;
    uStack_a0 = _UNK_1801d9248;
    local_98 = _DAT_1801d91a0;
    uStack_90 = _UNK_1801d91a8;
    local_88 = 0x2c;
    local_84 = 0x7e;
    pcVar3 = FUN_1800e4f70(local_178);
    FUN_1800e09f0(pcVar3);
    puVar4 = FUN_1800e4c30((int32_t *)local_178);
    lVar9 = FUN_1800e4700((longlong)puVar4);
    FUN_1800e09f0(lVar9);
    local_178[0] = '\0';
    local_178[1] = '\0';
    local_178[2] = '\0';
    local_178[3] = '\0';
    local_178[4] = '\0';
    local_178[5] = '\0';
    local_178[6] = '\0';
    local_178[7] = '\0';
    local_178[8] = '\0';
    local_178[9] = '\0';
    local_178[10] = '\0';
    local_178[0xb] = '\0';
    local_178[0xc] = '\0';
    local_178[0xd] = '\0';
    local_178[0xe] = '\0';
    local_178[0xf] = '\0';
    local_178[0x10] = '\0';
    local_178[0x11] = '\0';
    local_178[0x12] = '\0';
    local_178[0x13] = '\0';
    local_178[0x14] = '\0';
    local_178[0x15] = '\0';
    local_178[0x16] = '\0';
    local_178[0x17] = '\0';
    local_178[0x18] = '\0';
    local_178[0x19] = '\0';
    local_178[0x1a] = '\0';
    local_178[0x1b] = '\0';
    local_178[0x1c] = '\0';
    local_178[0x1d] = '\0';
    local_178[0x1e] = '\0';
    local_178[0x1f] = '\0';
    local_158 = local_158 & 0xffffff0000000000;
    uStack_150 = 0x400000015;
    local_148 = _DAT_1801d90f0;
    uStack_140 = _UNK_1801d90f8;
    local_138 = _DAT_1801d9ae0;
    uStack_130 = _UNK_1801d9ae8;
    local_128 = _DAT_1801d9680;
    uStack_120 = _UNK_1801d9688;
    local_118 = _DAT_1801d95b0;
    uStack_110 = _UNK_1801d95b8;
    local_108 = _DAT_1801d91c0;
    uStack_100 = _UNK_1801d91c8;
    local_f8 = _DAT_1801d90e0;
    uStack_f0 = _UNK_1801d90e8;
    local_e8 = _DAT_1801d9490;
    uStack_e0 = _UNK_1801d9498;
    local_d8 = _DAT_1801d98c0;
    uStack_d0 = _UNK_1801d98c8;
    local_c8 = 0x6800000010;
    pcVar3 = FUN_1800e3d90(local_178);
    FUN_1800e09f0(pcVar3);
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    puVar4 = FUN_1800e39a0((int32_t *)local_178);
    lVar9 = FUN_1800e32f0((longlong)puVar4);
    FUN_1800e09f0(lVar9);
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    lVar9 = (**(code **)(DAT_1801f3ae0 + 8))();
    (**(code **)(DAT_1801f3ae0 + 0x9a0))(local_1d8,"I Accept",0,0);
    fVar16 = *(float *)(lVar9 + 0x3c);
    (**(code **)(DAT_1801f3ae0 + 0x118))(local_1d8 + 2);
    fVar16 = (local_1d8[2] - (fVar16 + fVar16 + local_1d8[0])) * DAT_1801d8e18;
    if (0.0 < fVar16) {
auVar14._0_8_ = (**(code **)(DAT_1801f3ae0 + 0x268))();
      auVar14._8_8_ = extraout_XMM0_Qb;
      auVar15._4_12_ = auVar14._4_12_;
      auVar15._0_4_ = (float)auVar14._0_8_ + fVar16;
      (**(code **)(DAT_1801f3ae0 + 0x280))(auVar15._0_8_);
    }
}

