#include "FUN_1800de6e0.h"
#include <stdint.h>
#include <stddef.h>

 FUN_1800de6e0((longlong *)s_Color_Preset_1_1801ec6a0,puVar5,uVar8);
    if (DAT_1801ec1a0 != DAT_1801f39ec) {
DAT_1801ec1a0 = FUN_1800ddb30(DAT_1801f39ec);
    }
}

longlong * FUN_1800de6e0(longlong *param_1,int32_t *param_2,ulonglong param_3) {
ulonglong uVar1;
  ulonglong uVar2;
  LPVOID pvVar3;
  code *pcVar4;
  void *pvVar5;
  longlong *plVar6;
  ulonglong uVar7;
  LPVOID pvVar8;
  ulonglong uVar9;
  int32_t *puVar10;
  
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    plVar6 = param_1;
    if (0xf < uVar2) {
      plVar6 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    FUN_180150fd0(plVar6,param_2,param_3);
    *(int32_t *)((longlong)plVar6 + param_3) = 0;
    return param_1;
  }
  uVar9 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_3) {
    FUN_1800ba540();
    pcVar4 = (code *)swi(3);
    plVar6 = (longlong *)(*pcVar4)();
    return plVar6;
  }
  uVar7 = param_3 | 0xf;
  if ((uVar7 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = uVar2 + (uVar2 >> 1);
    uVar9 = uVar7;
    if (uVar7 < uVar1) {
      uVar9 = uVar1;
    }
    uVar1 = uVar9 + 1;
    if (uVar1 == 0) {
      puVar10 = (int32_t *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar7 = uVar9 + 0x28;
        if (uVar7 <= uVar1) {
          FUN_1800ba8a0();
          pcVar4 = (code *)swi(3);
          plVar6 = (longlong *)(*pcVar4)();
          return plVar6;
        }
        goto LAB_1800de79c;
      }
      puVar10 = (int32_t *)operator_new(uVar1);
    }
  }
  else {
    uVar7 = 0x8000000000000027;
LAB_1800de79c:
    pvVar5 = operator_new(uVar7);
    if (pvVar5 == (void *)0x0) goto LAB_1800de83b;
    puVar10 = (int32_t *)((longlong)pvVar5 + 0x27U & 0xffffffffffffffe0);
    puVar10[-1] = pvVar5;
  }
  param_1[2] = param_3;
  param_1[3] = uVar9;
  FUN_180150fd0(puVar10,param_2,param_3);
  *(int32_t *)((longlong)puVar10 + param_3) = 0;
  if (0xf < uVar2) {
    pvVar3 = (LPVOID)*param_1;
    pvVar8 = pvVar3;
    if ((0xfff < uVar2 + 1) &&
       (pvVar8 = *(LPVOID *)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar8)))) {
LAB_1800de83b:
      FUN_18012b7b4();
      pcVar4 = (code *)swi(3);
      plVar6 = (longlong *)(*pcVar4)();
      return plVar6;
    }
    thunk_FUN_18012d5e8(pvVar8);
  }
  *param_1 = (longlong)puVar10;
  return param_1;
}
}

 FUN_1800de6e0((longlong *)s_Low__Vanilla__1801ec7f0,(int32_t *)pcVar2,*puVar1);
  }
  pcVar2 = (char *)((longlong)DAT_1801ebe18 * 0x20 + DAT_1801fca68);
  DAT_1801ec1b4 = DAT_1801ebe18;
  if (pcVar2 != s_Medium__1024__1801ec7b0) {
puVar1 = (ulonglong *)(pcVar2 + 0x10);
    if (0xf < *(ulonglong *)(pcVar2 + 0x18)) {
      pcVar2 = *(char **)pcVar2;
    }
    FUN_1800de6e0((longlong *)s_Medium__1024__1801ec7b0,(int32_t *)pcVar2,*puVar1);
  }
}

 FUN_1800de6e0((longlong *)s_Medium__1024__1801ec7b0,(int32_t *)pcVar2,*puVar1);
  }
  uVar3 = 0x100;
  if (DAT_1801ec1b4 != 0) {
if (DAT_1801ec1b4 == 1) {
      DAT_1801ec198 = 0x200;
      goto LAB_1800e0c6d;
    }
    if (DAT_1801ec1b4 == 2) {
      DAT_1801ec198 = 0x400;
      goto LAB_1800e0c6d;
    }
    if (DAT_1801ec1b4 == 3) {
      DAT_1801ec198 = 0x800;
      goto LAB_1800e0c6d;
    }
    if (DAT_1801ec1b4 == 4) {
      DAT_1801ec198 = 0x1000;
      goto LAB_1800e0c6d;
    }
  }
}

 FUN_1800de6e0((longlong *)s_Medium__1024__1801ec790,(int32_t *)pcVar2,*puVar1);
  }
  if (DAT_1801ec1b0 != 0) {
if (DAT_1801ec1b0 == 1) {
      uVar3 = 0x200;
    }
    else if (DAT_1801ec1b0 == 2) {
      uVar3 = 0x400;
    }
    else if (DAT_1801ec1b0 == 3) {
      uVar3 = 0x800;
    }
    else if (DAT_1801ec1b0 == 4) {
      uVar3 = 0x1000;
    }
  }
}

 FUN_1800de6e0((longlong *)s_Medium__1024__1801ec7b0,puVar4,uVar7);
  puVar5 = &DAT_1801f3a13;
  pcVar8 = *(code **)(DAT_1801f3ae0 + 0x3a8);
  cVar1 = (*pcVar8)("Unclamp shadow size");
  if (cVar1 != '\0') {
DAT_1801f3b21 = '\x01';
  }
}

 FUN_1800de6e0((longlong *)s_Medium__1024__1801ec790,puVar4,uVar6);
  pcVar3 = s_Medium_1801ec770;
  if (0xf < DAT_1801ec788) {
pcVar3 = _s_Medium_1801ec770;
  }
}

 FUN_1800de6e0((longlong *)s_Medium_1801ec770,puVar4,uVar5);
  cVar2 = (**(code **)(DAT_1801f3ae0 + 0x3a8))("Enable peds in reflections",&DAT_1801f3a1c);
  if (cVar2 != '\0') {
DAT_1801f3b21 = 1;
  }
}

 FUN_1800de6e0((longlong *)s_Preset_1_1801ec7d0,puVar8,uVar10);
    (**(code **)(DAT_1801f3ae0 + 0x2a8))();
    pcVar7 = s_Low__Vanilla__1801ec7f0;
    if (0xf < DAT_1801ec808) {
pcVar7 = (char *)s_Low__Vanilla__1801ec7f0._0_8_;
    }
}

 FUN_1800de6e0((longlong *)s_Low__Vanilla__1801ec7f0,puVar8,uVar9);
      bVar3 = 0;
      if (DAT_1801ebe34 == 4) {
bVar3 = (**(code **)(DAT_1801f3ae0 + 0x478))
                          ("Motion Blur Sample Size",&DAT_1801ebe30,DAT_1801d8e38,DAT_1801d8f04,
                           &DAT_1801cb828,0);
        bVar4 = (**(code **)(DAT_1801f3ae0 + 0x478))
                          ("Motion Blur Length Multiplier",&DAT_1801ebe2c,DAT_1801d8e38,
                           DAT_1801d8ea8,&DAT_1801cb828,0);
        bVar5 = (**(code **)(DAT_1801f3ae0 + 0x478))
                          ("Motion Blur Ghosting",&DAT_1801ebe28,0,DAT_1801d8f04,&DAT_1801cb828,0);
        bVar3 = bVar5 | bVar4 | bVar3;
        (**(code **)(DAT_1801f3ae0 + 0x298))();
      }
}

 FUN_1800de6e0((longlong *)&local_490,pppppppuVar10,(ulonglong)*pppppppuVar1);
    }
    uVar14 = 1;
    pppppppuVar10 = &local_490;
    if (0xf < uStack_478) {
pppppppuVar10 = (int32_t *******)local_490;
    }
}

 FUN_1800de6e0((longlong *)&DAT_1801eca40,ppppuVar7,local_98);
    ppppuVar7 = &local_88;
    if (0xf < uStack_70) {
ppppuVar7 = (int32_t ****)local_88;
    }
}

 FUN_1800de6e0((longlong *)&DAT_1801eca60,ppppuVar7,local_78);
    _DAT_1801eca80 = local_68;
    FUN_1800fccc0(&DAT_1801eca88,local_60,local_58 - (longlong)local_60 >> 3);
    DAT_1801ecaa0 = local_48;
    _DAT_1801ecaa8 = local_40;
    _DAT_1801ecab0 = local_38;
    FUN_1801175d0(&local_a8,0xffffffff);
    puVar1 = (int32_t *)*local_60;
    _DAT_1801fcf48 = *puVar1;
    uRam00000001801fcf50 = puVar1[1];
    _DAT_1801fcf58 = puVar1[2];
    uRam00000001801fcf60 = puVar1[3];
    DAT_1801fcf68 = *(int32_t *)(puVar1 + 4);
    DAT_1801fcf6c = *(int32_t *)((longlong)puVar1 + 0x24);
    DAT_1801fcf6e = *(int32_t *)((longlong)puVar1 + 0x26);
  }
  if (local_60 != (longlong *)0x0) {
plVar6 = local_60;
    if ((0xfff < (lStack_50 - (longlong)local_60 & 0xfffffffffffffff8U)) &&
       (plVar6 = (longlong *)local_60[-1],
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)plVar6)))) {
      FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    thunk_FUN_18012d5e8(plVar6);
    local_60 = (longlong *)0x0;
    local_58 = 0;
    lStack_50 = 0;
  }
}

 FUN_1800de6e0((longlong *)&DAT_1801ec298,(int32_t *)pcVar3,uVar7);
    FUN_1800b9910((longlong *)&DAT_1801ec298,(int32_t *)"\\NVE\\",5);
    local_50 = DAT_1801ec2a8;
    puVar6 = &DAT_1801ec298;
    if (0xf < DAT_1801ec2b0) {
puVar6 = DAT_1801ec298;
    }
}

