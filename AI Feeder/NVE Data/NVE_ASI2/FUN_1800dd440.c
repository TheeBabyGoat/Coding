#include "FUN_1800dd440.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800dd440(int32_t param_1,int32_t *param_2,int32_t *param_3,int32_t param_4) {
char *pcVar1;
  int32_t *puVar2;
  int32_t *puVar3;
  char *pcVar4;
  int32_t *puVar5;
  int32_t uVar6;
  code *pcVar7;
  ulonglong uVar8;
  int32_t uVar9;
  int32_t local_res8;
  int32_t local_resc;
  int32_t local_res10 [6];
  int32_t local_28;
  int32_t uStack_20;
  
  if (DAT_1801f3b19 != '\0') {
    (**(code **)(DAT_1801f3ae0 + 0x880))(1);
    local_28 = _DAT_1801d9c80;
    uStack_20 = _UNK_1801d9c88;
    (**(code **)(DAT_1801f3ae0 + 0x1a0))(0x15,&local_28);
    local_28 = _DAT_1801d9c90;
    uStack_20 = _UNK_1801d9c98;
    (**(code **)(DAT_1801f3ae0 + 0x1a0))(0,&local_28);
    (**(code **)(DAT_1801f3ae0 + 0x118))(local_res10);
    local_res8 = local_res10[0];
    local_resc = 0;
    param_3 = *(int32_t **)(DAT_1801f3ae0 + 0x388);
    (*(code *)param_3)("You must restart your game to apply the changes below.",&local_res8);
    param_2 = *(int32_t **)(DAT_1801f3ae0 + 0x1a8);
    (*(code *)param_2)(2);
    (**(code **)(DAT_1801f3ae0 + 0x888))();
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
  FUN_1800dcd20(pcVar1,pcVar4);
  if ((ulonglong)(longlong)DAT_1801f39ec < (ulonglong)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5)) {
    puVar5 = (int32_t *)(DAT_1801fb3d0 + (longlong)DAT_1801f39ec * 0x20);
    if (0xf < (ulonglong)puVar5[3]) {
      puVar5 = (int32_t *)*puVar5;
    }
    uVar8 = 0xffffffffffffffff;
    do {
      uVar8 = uVar8 + 1;
    } while (*(char *)((longlong)puVar5 + uVar8) != '\0');
    FUN_1800de6e0((longlong *)s_Color_Preset_1_1801ec6a0,puVar5,uVar8);
    if (DAT_1801ec1a0 != DAT_1801f39ec) {
      DAT_1801ec1a0 = FUN_1800ddb30(DAT_1801f39ec);
    }
                    
                    
    (**(code **)(DAT_1801f3ae0 + 0x2c8))(*(code **)(DAT_1801f3ae0 + 0x2c8));
    return;
  }
  FUN_1800ddc20();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}
}

 FUN_1800dd440(pcVar3,IMAGE_DOS_HEADER_180000000.e_magic,puVar11,uVar12);
        break;
      default:
        if (DAT_1801f3b22 == '\t') {
FUN_1800e1b90();
        }
}

