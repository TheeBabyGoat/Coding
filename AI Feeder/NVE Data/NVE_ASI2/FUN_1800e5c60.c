#include "FUN_1800e5c60.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800e5c60(int32_t param_1,int32_t param_2,int32_t param_3,int32_t param_4) {
longlong lVar1;
  char cVar2;
  int32_t ***pppuVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  longlong *plVar7;
  code *pcVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t auVar11 [16];
  int32_t auVar12 [16];
  int32_t auVar13 [16];
  int32_t auVar14 [16];
  int32_t auStack_c8 [32];
  int32_t *local_a8;
  int32_t local_a0;
  int32_t *local_98;
  int32_t uStack_90;
  longlong local_88 [2];
  ulonglong local_78;
  int32_t *puStack_70;
  int32_t *local_68;
  int32_t uStack_60;
  int32_t local_58;
  longlong local_50;
  int32_t local_48;
  int32_t **local_40 [3];
  ulonglong local_28;
  ulonglong local_20;
  int32_t extraout_XMM0_Qb;
  int32_t extraout_XMM0_Qb_00;
  
  local_20 = DAT_1801eb080 ^ (ulonglong)auStack_c8;
  if (DAT_1801f3b20 == '\0') {
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
  FUN_1801252c0(local_20 ^ (ulonglong)auStack_c8);
  return;
}
}

