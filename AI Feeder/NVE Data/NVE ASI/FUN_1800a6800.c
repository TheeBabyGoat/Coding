#include "FUN_1800a6800.h"
#include <stdint.h>
#include <stddef.h>

void FUN_1800a6800(longlong *param_1) {
LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (LPVOID)*param_1;
    pvVar3 = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  return;
}
}

 FUN_1800a6800((longlong *)local_80);
      }
      if ((uVar4 & 1) != 0) {
FUN_1800a6800((longlong *)local_60);
      }
}

 FUN_1800a6800(param_1 + 0xd);
  FUN_1800ba040(param_1 + 9);
  FUN_1800ba040(param_1 + 5);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
thunk_FUN_18012d5e8(param_1);
  }
}

 FUN_1800a6800(plVar5);
    }
    pvVar2 = (LPVOID)*param_1;
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xffffffffffffffe0U)) &&
       (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
}

 FUN_1800a6800(plVar7);
        plVar6 = DAT_1801fbcc8;
        plVar4 = plStack_100;
      }
      for (; DAT_1801fbcd0 = plVar6, plStack_100 = plVar3, plVar2 != plVar4; plVar2 = plVar2 + 4) {
if (DAT_1801fbcd0 == DAT_1801fbcd8) {
          FUN_1800c6d30((longlong *)&DAT_1801fbcc8,DAT_1801fbcd0,plVar2);
        }
        else {
          FUN_1800ba630(DAT_1801fbcd0,plVar2);
          DAT_1801fbcd0 = DAT_1801fbcd0 + 4;
        }
        plVar6 = DAT_1801fbcd0;
        plVar3 = plStack_100;
      }
}

 FUN_1800a6800(plVar7);
        }
        plVar7 = local_108;
        if ((0xfff < ((longlong)local_f8 - (longlong)local_108 & 0xffffffffffffffe0U)) &&
           (plVar7 = (longlong *)local_108[-1],
           0x1f < (ulonglong)((longlong)local_108 + (-8 - (longlong)plVar7)))) {
FUN_18012b7b4();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
}

 FUN_1800a6800(plVar9);
        plVar5 = DAT_1801fbdc8;
        puVar1 = DAT_1801fbf30;
      }
      for (; DAT_1801fbdd0 = plVar5, puVar2 != puVar1; puVar2 = puVar2 + 4) {
if (DAT_1801fbdd0 == DAT_1801fbdd8) {
          FUN_1800c6d30((longlong *)&DAT_1801fbdc8,DAT_1801fbdd0,puVar2);
        }
        else {
          FUN_1800ba630(DAT_1801fbdd0,puVar2);
          DAT_1801fbdd0 = DAT_1801fbdd0 + 4;
        }
        plVar5 = DAT_1801fbdd0;
      }
}

 FUN_1800a6800(plVar5);
    }
    plVar5 = local_218;
    if ((((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U) < 0x1000) ||
       (plVar5 = (longlong *)local_218[-1],
       (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar5)) < 0x20)) {
thunk_FUN_18012d5e8(plVar5);
      local_218 = (longlong *)0x0;
      plStack_210 = (longlong *)0x0;
      local_208 = (longlong *)0x0;
      goto LAB_1800bfc60;
    }
}

 FUN_1800a6800(plVar5);
      }
      plVar5 = local_218;
      if ((((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U) < 0x1000) ||
         (plVar5 = (longlong *)local_218[-1],
         (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar5)) < 0x20)) {
thunk_FUN_18012d5e8(plVar5);
        local_218 = (longlong *)0x0;
        plStack_210 = (longlong *)0x0;
        local_208 = (longlong *)0x0;
        goto LAB_1800c0080;
      }
}

 FUN_1800a6800(plVar5);
      }
      plVar5 = local_218;
      if ((((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U) < 0x1000) ||
         (plVar5 = (longlong *)local_218[-1],
         (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar5)) < 0x20)) {
thunk_FUN_18012d5e8(plVar5);
        local_218 = (longlong *)0x0;
        plStack_210 = (longlong *)0x0;
        local_208 = (longlong *)0x0;
        goto LAB_1800c0280;
      }
}

 FUN_1800a6800(plVar5);
      }
      plVar5 = local_218;
      if ((((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U) < 0x1000) ||
         (plVar5 = (longlong *)local_218[-1],
         (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar5)) < 0x20)) {
thunk_FUN_18012d5e8(plVar5);
        local_218 = (longlong *)0x0;
        plStack_210 = (longlong *)0x0;
        local_208 = (longlong *)0x0;
        goto LAB_1800c0480;
      }
}

 FUN_1800a6800(plVar5);
            }
            plVar5 = local_218;
            if ((0xfff < ((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U)) &&
               (plVar5 = (longlong *)local_218[-1],
               0x1f < (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar5))))
            goto LAB_1800c0d54;
            thunk_FUN_18012d5e8(plVar5);
            local_218 = (longlong *)0x0;
            plStack_210 = (longlong *)0x0;
            local_208 = (longlong *)0x0;
          }
          _eh_vector_destructor_iterator_(&local_b8,0x20,2,thunk_FUN_1800a6800);
          atexit((_func_5014 *)&LAB_1801560a0);
          puVar7 = &DAT_1801fc6d0;
          _Init_thread_footer(&DAT_1801fc6d0);
        }
      }
      if (DAT_1801fc6d4 <= *piVar10) goto LAB_1800c0ccc;
      puVar7 = &DAT_1801fc6d4;
      FUN_180125398(&DAT_1801fc6d4);
      if (DAT_1801fc6d4 != -1) goto LAB_1800c0ccc;
      local_78 = (char *)0x0;
      uStack_70 = 0;
      local_68 = (longlong *)0x0;
      uStack_60 = 0;
      local_78 = (char *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricClouds_fx_1801cbb30._8_8_;
      local_68 = plVar6;
      uStack_60 = uVar3;
      *(int32_t *)local_78 = s_NVE_VolumetricClouds_fx_1801cbb30._0_8_;
      *(int32_t *)(local_78 + 8) = uVar2;
      *(int32_t *)(local_78 + 0x10) = s_NVE_VolumetricClouds_fx_1801cbb30._16_4_;
      *(int32_t *)(local_78 + 0x14) = s_NVE_VolumetricClouds_fx_1801cbb30._20_2_;
      local_78[0x16] = s_NVE_VolumetricClouds_fx_1801cbb30[0x16];
      local_78[0x17] = '\0';
      local_58 = (char *)0x0;
      uStack_50 = 0;
      local_48 = (longlong *)0x0;
      uStack_40 = 0;
      local_58 = (char *)operator_new(0x20);
      uVar2 = s_NVE_VolumetricAurora_fx_1801cb848._8_8_;
      local_48 = plVar6;
      uStack_40 = uVar3;
      *(int32_t *)local_58 = s_NVE_VolumetricAurora_fx_1801cb848._0_8_;
      *(int32_t *)(local_58 + 8) = uVar2;
      *(int32_t *)(local_58 + 0x10) = s_NVE_VolumetricAurora_fx_1801cb848._16_4_;
      *(int32_t *)(local_58 + 0x14) = s_NVE_VolumetricAurora_fx_1801cb848._20_2_;
      uVar8 = (ulonglong)(byte)s_NVE_VolumetricAurora_fx_1801cb848[0x16];
      local_58[0x16] = s_NVE_VolumetricAurora_fx_1801cb848[0x16];
      local_58[0x17] = '\0';
      local_218 = (longlong *)0x0;
      plStack_210 = (longlong *)0x0;
      local_208 = (longlong *)0x0;
      plVar6 = (longlong *)FUN_1800ba8c0(uVar8,2);
      local_208 = plVar6 + 8;
      local_220 = &local_218;
      ppcVar9 = &local_78;
      local_228 = &local_218;
      local_238 = plVar6;
      local_218 = plVar6;
      plStack_210 = plVar6;
      do {
        local_230 = plVar6;
        FUN_1800ba630(plVar6,ppcVar9);
        plVar6 = plVar6 + 4;
        ppcVar9 = ppcVar9 + 4;
      } while (ppcVar9 != local_38);
      local_230 = plVar6;
      plStack_210 = plVar6;
      FUN_1800c5680(0x1801fbfa0,&local_218,"ReflectionRes");
      plVar5 = plStack_210;
      plVar6 = local_218;
      if (local_218 != (longlong *)0x0) {
for (; plVar6 != plVar5; plVar6 = plVar6 + 4) {
          FUN_1800a6800(plVar6);
        }
        plVar6 = local_218;
        if ((0xfff < ((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U)) &&
           (plVar6 = (longlong *)local_218[-1],
           0x1f < (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar6)))) {
          FUN_18012b7b4();
          goto LAB_1800c0d36;
        }
        thunk_FUN_18012d5e8(plVar6);
        local_218 = (longlong *)0x0;
        plStack_210 = (longlong *)0x0;
        local_208 = (longlong *)0x0;
      }
}

 FUN_1800a6800(plVar6);
        }
        plVar6 = local_218;
        if ((0xfff < ((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U)) &&
           (plVar6 = (longlong *)local_218[-1],
           0x1f < (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar6)))) {
FUN_18012b7b4();
          goto LAB_1800c0d36;
        }
}

 FUN_1800a6800(plVar5);
    }
    plVar5 = local_218;
    if ((((longlong)local_208 - (longlong)local_218 & 0xffffffffffffffe0U) < 0x1000) ||
       (plVar5 = (longlong *)local_218[-1],
       (ulonglong)((longlong)local_218 + (-8 - (longlong)plVar5)) < 0x20)) {
thunk_FUN_18012d5e8(plVar5);
      local_218 = (longlong *)0x0;
      plStack_210 = (longlong *)0x0;
      local_208 = (longlong *)0x0;
      goto LAB_1800c068d;
    }
}

 FUN_1800a6800(plVar4);
      plVar4 = plVar4 + 4;
    } while (plVar4 != plVar1);
    *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_1 + 0x10);
  }
  puVar2 = (int32_t *)param_2[1];
  for (puVar5 = (int32_t *)*param_2; puVar5 != puVar2; puVar5 = puVar5 + 4) {
puVar3 = *(int32_t **)(param_1 + 0x18);
    if (puVar3 == *(int32_t **)(param_1 + 0x20)) {
      FUN_1800c6d30((longlong *)(param_1 + 0x10),puVar3,puVar5);
    }
    else {
      FUN_1800ba630(puVar3,puVar5);
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x20;
    }
  }
}

 FUN_1800a6800(plVar6);
      plVar6 = plVar6 + 4;
    } while (plVar6 != plVar1);
    *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_1 + 0x10);
    puVar3 = DAT_1801fbbd8;
    puVar4 = DAT_1801fbbe0;
  }
  for (; puVar5 = DAT_1801fbbe0, puVar3 != DAT_1801fbbe0; puVar3 = puVar3 + 4) {
puVar2 = *(int32_t **)(param_1 + 0x18);
    if (puVar2 == *(int32_t **)(param_1 + 0x20)) {
      DAT_1801fbbe0 = puVar4;
      FUN_1800c6d30((longlong *)(param_1 + 0x10),puVar2,puVar3);
    }
    else {
      DAT_1801fbbe0 = puVar4;
      FUN_1800ba630(puVar2,puVar3);
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 0x20;
    }
    puVar4 = DAT_1801fbbe0;
    DAT_1801fbbe0 = puVar5;
  }
}

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
}

 FUN_1800a6800(plVar5);
      plVar5 = plVar5 + 4;
    } while (plVar5 != plVar1);
    *(int32_t *)(param_1 + 0x18) = *(int32_t *)(param_1 + 0x10);
  }
  local_b8 = (char *)0x0;
  puStack_b0 = (ulonglong *)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  uVar6 = 0xffffffffffffffff;
  do {
    uVar6 = uVar6 + 1;
  } while (*(char *)((longlong)param_2 + uVar6) != '\0');
  FUN_1800ba360(&local_b8,param_2,uVar6);
  puVar2 = *(int32_t **)(param_1 + 0x18);
  if (puVar2 == *(int32_t **)(param_1 + 0x20)) {
FUN_1800c63b0((longlong *)(param_1 + 0x10),puVar2,&local_b8);
    uVar6 = uStack_a0;
  }
}

 FUN_1800a6800(plVar5);
  }
  pvVar2 = *(LPVOID *)(param_1 + 8);
  pvVar4 = pvVar2;
  if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) << 5)) &&
     (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
     0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
FUN_18012b7b4();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
}

 FUN_1800a6800(plVar5);
    }
    pvVar2 = (LPVOID)*param_1;
    pvVar4 = pvVar2;
    if ((0xfff < (param_1[2] - (longlong)pvVar2 & 0xffffffffffffffe0U)) &&
       (pvVar4 = *(LPVOID *)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
FUN_18012b7b4();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
}

 FUN_1800a6800((longlong *)local_78);
  if (cVar4 != '\0') {
iVar17 = 0;
    if (DAT_1801fb3d8 - DAT_1801fb3d0 >> 5 != 0) {
      local_a8 = (char *)0x0;
      lVar14 = 0;
      do {
        lVar3 = DAT_1801fb3d8;
        lVar12 = DAT_1801fb3d0;
        plVar18 = (longlong *)(DAT_1801fb3d0 + lVar14);
        sVar8 = 0xffffffffffffffff;
        do {
          sVar8 = sVar8 + 1;
        } while (*(char *)((longlong)param_2 + sVar8) != '\0');
        _Size = *(size_t *)(DAT_1801fb3d0 + 0x10 + lVar14);
        uVar11 = *(ulonglong *)(DAT_1801fb3d0 + 0x18 + lVar14);
        _Buf1 = plVar18;
        if (0xf < uVar11) {
          _Buf1 = (longlong *)*plVar18;
        }
        if (_Size == sVar8) {
          if (_Size == 0) {
            bVar19 = true;
          }
          else {
            iVar16 = memcmp(_Buf1,param_2,_Size);
            bVar19 = iVar16 == 0;
            uVar11 = *(ulonglong *)(lVar12 + 0x18 + lVar14);
          }
        }
        else {
          bVar19 = false;
        }
        local_98 = 0;
        if ((char *)(lVar3 - lVar12 >> 5) <= local_a8) {
          FUN_1800ddc20();
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        if (0xf < uVar11) {
          plVar18 = (longlong *)*plVar18;
        }
        pcVar15 = (code *)&local_98;
        cVar4 = (**(code **)(DAT_1801f3ae0 + 0x5f0))(plVar18,bVar19,0);
        if (cVar4 != '\0') {
          DAT_1801f39ec = iVar17;
          if ((ulonglong)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5) <= (ulonglong)(longlong)iVar17) {
LAB_1800dd214:
            FUN_1800ddc20();
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          param_2 = (void *)((longlong)iVar17 * 0x20 + DAT_1801fb3d0);
          if (0xf < *(ulonglong *)(DAT_1801fb3d0 + 0x18 + lVar14)) {
            param_2 = *(void **)(DAT_1801fb3d0 + lVar14);
          }
        }
        if (bVar19 != false) {
          (**(code **)(DAT_1801f3ae0 + 0x8a0))();
        }
        iVar17 = iVar17 + 1;
        local_a8 = local_a8 + 1;
        lVar14 = lVar14 + 0x20;
        pcVar5 = local_b8;
      } while ((ulonglong)(longlong)iVar17 < (ulonglong)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5));
    }
    (**(code **)(DAT_1801f3ae0 + 0x3f8))();
  }
}

 FUN_1800a6800((longlong *)local_78);
  if ((cVar4 != '\0') && (DAT_1801f39ec = DAT_1801f39ec + -1, DAT_1801f39ec < 0)) {
DAT_1801f39ec = (int)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5) + -1;
  }
}

 FUN_1800a6800((longlong *)local_78);
  if ((cVar4 != '\0') &&
     (DAT_1801f39ec = DAT_1801f39ec + 1,
     (ulonglong)(DAT_1801fb3d8 - DAT_1801fb3d0 >> 5) <= (ulonglong)(longlong)DAT_1801f39ec)) {
DAT_1801f39ec = 0;
  }
}

 FUN_1800a6800((longlong *)local_68);
  puVar9 = DAT_1801f7308;
  if (cVar10 != '\0') {
uVar8 = local_c0[0];
    for (puVar4 = (int32_t *)*DAT_1801f7308; local_c0[0] = uVar8, puVar4 != puVar9;
        puVar4 = (int32_t *)*puVar4) {
      uVar2 = *(uint *)(puVar4 + 2);
      lVar5 = puVar4[3];
      local_c8[0] = uVar2;
      if (uVar2 == 0x13371337) {
LAB_1800dd9b9:
        plVar11 = FUN_1800ce7e0((float *)&DAT_1801fb390,&local_a8,(byte *)local_c0);
        lVar6 = *(longlong *)(*plVar11 + 0x18);
        local_78 = 0;
        cVar10 = (**(code **)(DAT_1801f3ae0 + 0x5f0))(lVar5,lVar5 == lVar6,0,&local_78);
        if (cVar10 != '\0') {
          *param_3 = uVar2;
          local_c8[0] = local_c0[0];
          local_b8[0] = uVar2;
          plVar11 = FUN_1800ce7e0((float *)&DAT_1801f7300,local_88,(byte *)local_b8);
          uVar3 = *(int32_t *)(*plVar11 + 0x18);
          plVar11 = FUN_1800ce7e0((float *)&DAT_1801fb390,local_68,(byte *)local_c8);
          *(int32_t *)(*plVar11 + 0x18) = uVar3;
          if (local_c8[0] < 0x97aa0a7a) {
            if (local_c8[0] == 0x97aa0a79) {
              DAT_1801f39d8 = local_b8[0];
            }
            else if (local_c8[0] == 0x30fdaf5c) {
              DAT_1801f39dc = local_b8[0];
            }
            else if (local_c8[0] == 0x54a69840) {
              DAT_1801f39cc = local_b8[0];
            }
            else if (local_c8[0] == 0x6db1a50d) {
              DAT_1801f39e0 = local_b8[0];
            }
          }
          else if (local_c8[0] == 0xae737644) {
            DAT_1801f39d4 = local_b8[0];
          }
          else if (local_c8[0] == 0xb677829f) {
            DAT_1801f39c8 = local_b8[0];
          }
          else if (local_c8[0] == 0xbb898d2d) {
            DAT_1801f39d0 = local_b8[0];
          }
          if (DAT_1801f3a34 == local_c8[0]) {
            FUN_180112a40(local_b8[0]);
          }
        }
        if (lVar5 == lVar6) {
          (**(code **)(DAT_1801f3ae0 + 0x8a0))();
        }
      }
      else {
        uVar14 = ((((ulonglong)(uVar2 >> 8 & 0xff) ^
                   ((ulonglong)(uVar2 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3
                  ^ (ulonglong)(uVar2 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar2 >> 0x18))
                 * 0x100000001b3 & DAT_1801ec430;
        lVar6 = *(longlong *)(DAT_1801ec418 + 8 + uVar14 * 0x10);
        if (lVar6 != DAT_1801ec408) {
          lVar7 = *(longlong *)(DAT_1801ec418 + uVar14 * 0x10);
          uVar1 = *(uint *)(lVar6 + 0x10);
          while (uVar2 != uVar1) {
            if (lVar6 == lVar7) goto LAB_1800ddae1;
            lVar6 = *(longlong *)(lVar6 + 8);
            uVar1 = *(uint *)(lVar6 + 0x10);
          }
          plVar11 = FUN_1800ddc40(lVar7,&local_98,(byte *)local_c8);
          lVar6 = *plVar11;
          pauVar12 = thunk_FUN_180123e90(*(int32_t (**) [32])(lVar6 + 0x98),
                                         *(int32_t (**) [32])(lVar6 + 0xa0),uVar8);
          if (pauVar12 != *(int32_t (**) [32])(lVar6 + 0xa0)) goto LAB_1800dd9b9;
        }
      }
LAB_1800ddae1:
      uVar8 = local_c0[0];
    }
    (**(code **)(DAT_1801f3ae0 + 0x3f8))();
  }
}

 FUN_1800a6800((longlong *)local_78);
  if (cVar4 != '\0') {
iVar17 = 0;
    if (DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5 != 0) {
      local_a8 = (char *)0x0;
      lVar11 = 0;
      do {
        lVar3 = DAT_1801fca28;
        puVar13 = DAT_1801fca20;
        plVar18 = (longlong *)((longlong)DAT_1801fca20 + lVar11);
        sVar8 = 0xffffffffffffffff;
        do {
          sVar8 = sVar8 + 1;
        } while (*(char *)((longlong)_Buf2 + sVar8) != '\0');
        _Size = plVar18[2];
        uVar16 = plVar18[3];
        _Buf1 = plVar18;
        if (0xf < uVar16) {
          _Buf1 = (longlong *)*plVar18;
        }
        if (_Size == sVar8) {
          if (_Size == 0) {
            bVar19 = true;
          }
          else {
            iVar15 = memcmp(_Buf1,_Buf2,_Size);
            bVar19 = iVar15 == 0;
            uVar16 = plVar18[3];
          }
        }
        else {
          bVar19 = false;
        }
        local_98 = 0;
        if ((char *)(lVar3 - (longlong)puVar13 >> 5) <= local_a8) {
          FUN_1800ddc20();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if (0xf < uVar16) {
          plVar18 = (longlong *)*plVar18;
        }
        pcVar14 = (code *)&local_98;
        cVar4 = (**(code **)(DAT_1801f3ae0 + 0x5f0))(plVar18,bVar19,0);
        if (cVar4 != '\0') {
          DAT_1801f3b1c = iVar17;
          if ((ulonglong)(DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5) <=
              (ulonglong)(longlong)iVar17) goto LAB_1800df990;
          _Buf2 = DAT_1801fca20 + (longlong)iVar17 * 4;
          if (0xf < *(ulonglong *)((longlong)DAT_1801fca20 + lVar11 + 0x18)) {
            _Buf2 = *(int32_t **)((longlong)DAT_1801fca20 + lVar11);
          }
        }
        if (bVar19 != false) {
          (**(code **)(DAT_1801f3ae0 + 0x8a0))();
        }
        iVar17 = iVar17 + 1;
        local_a8 = local_a8 + 1;
        lVar11 = lVar11 + 0x20;
      } while ((ulonglong)(longlong)iVar17 <
               (ulonglong)(DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5));
    }
    (**(code **)(DAT_1801f3ae0 + 0x3f8))();
    pcVar5 = local_b8;
  }
}

 FUN_1800a6800((longlong *)local_78);
  if ((cVar4 != '\0') && (DAT_1801f3b1c = DAT_1801f3b1c + -1, DAT_1801f3b1c < 0)) {
DAT_1801f3b1c = (int)(DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5) + -1;
  }
}

 FUN_1800a6800((longlong *)local_78);
  if ((cVar4 != '\0') &&
     (DAT_1801f3b1c = DAT_1801f3b1c + 1,
     (ulonglong)(DAT_1801fca28 - (longlong)DAT_1801fca20 >> 5) <= (ulonglong)(longlong)DAT_1801f3b1c
     )) {
DAT_1801f3b1c = 0;
  }
}

 FUN_1800a6800((longlong *)local_98);
  if (cVar4 != '\0') {
iVar17 = 0;
    lVar13 = param_4[1];
    lVar19 = *param_4;
    if (lVar13 - lVar19 >> 5 != 0) {
      local_78 = 0;
      lVar20 = 0;
      do {
        plVar12 = (longlong *)(lVar20 + lVar19);
        sVar9 = 0xffffffffffffffff;
        do {
          sVar9 = sVar9 + 1;
        } while (*(char *)((longlong)param_2 + sVar9) != '\0');
        _Size = plVar12[2];
        uVar18 = plVar12[3];
        _Buf1 = plVar12;
        if (0xf < uVar18) {
          _Buf1 = (longlong *)*plVar12;
        }
        if (_Size == sVar9) {
          if (_Size == 0) {
            bVar21 = true;
          }
          else {
            iVar5 = memcmp(_Buf1,param_2,_Size);
            bVar21 = iVar5 == 0;
            uVar18 = plVar12[3];
          }
        }
        else {
          bVar21 = false;
        }
        uVar8 = local_78;
        local_e8 = (char *)0x0;
        if ((ulonglong)(lVar13 - lVar19 >> 5) <= local_78) {
          FUN_1800ddc20();
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if (0xf < uVar18) {
          plVar12 = (longlong *)*plVar12;
        }
        ppcVar16 = &local_e8;
        cVar4 = (**(code **)(DAT_1801f3ae0 + 0x5f0))(plVar12,bVar21,0);
        plVar12 = local_d8;
        if (cVar4 != '\0') {
          *local_b8 = iVar17;
          lVar13 = *local_d8;
          if ((ulonglong)(local_d8[1] - lVar13 >> 5) <= (ulonglong)(longlong)iVar17)
          goto LAB_1800e0902;
          param_2 = (void *)((longlong)iVar17 * 0x20 + lVar13);
          if (0xf < *(ulonglong *)(lVar13 + 0x18 + lVar20)) {
            param_2 = *(void **)(lVar13 + lVar20);
          }
        }
        if (bVar21 != false) {
          (**(code **)(DAT_1801f3ae0 + 0x8a0))();
        }
        iVar17 = iVar17 + 1;
        local_78 = uVar8 + 1;
        lVar20 = lVar20 + 0x20;
        lVar13 = plVar12[1];
        lVar19 = *plVar12;
        param_4 = local_d8;
        param_1 = local_c8;
      } while ((ulonglong)(longlong)iVar17 < (ulonglong)(lVar13 - lVar19 >> 5));
    }
    (**(code **)(DAT_1801f3ae0 + 0x3f8))();
    param_3 = local_b8;
    pcVar6 = local_f8;
  }
}

 FUN_1800a6800((longlong *)local_98);
  if ((cVar4 != '\0') && (*param_3 = *param_3 + -1, *param_3 < 0)) {
*param_3 = (int)(param_4[1] - *param_4 >> 5) + -1;
  }
}

 FUN_1800a6800((longlong *)local_98);
  if ((cVar4 != '\0') &&
     (*param_3 = *param_3 + 1,
     (ulonglong)(param_4[1] - *param_4 >> 5) <= (ulonglong)(longlong)*param_3)) {
*param_3 = 0;
  }
}

 FUN_1800a6800((longlong *)ppppuVar10);
    if (cVar3 != '\0') {
ppuVar16 = local_b8;
      ppuVar12 = &local_a8;
      plVar7 = FUN_1800e1d20(ppppuVar10,ppuVar12,(byte *)ppuVar16);
      *(int32_t *)(*plVar7 + 0x18) = 1;
    }
}

 FUN_1800a6800((longlong *)local_68);
      if (cVar3 != '\0') {
uVar9 = 0;
        cVar3 = (**(code **)(DAT_1801f3ae0 + 0x8b8))();
        if (cVar3 == '\0') {
          ppuVar16 = local_b8;
          ppuVar12 = &local_a8;
          plVar7 = FUN_1800e1d20(uVar9,ppuVar12,(byte *)ppuVar16);
          *(int32_t *)(*plVar7 + 0x18) = 0;
          goto LAB_1800e1b37;
        }
      }
}

 FUN_1800a6800((longlong *)local_48);
    if (cVar3 != '\0') {
DAT_1801ec1c8 = '\0';
      if (!bVar8) {
        DAT_1801ec1c8 = param_2;
      }
      if (bVar6 == 0) {
        if (param_4 == 0) {
          DAT_1801f3b22 = 0;
        }
      }
      else if (param_4 != 0) {
        if (DAT_1801f3b22 == 0) {
          DAT_1801f3b22 = bVar6 + 1;
        }
        if ((DAT_1801f3b22 < bVar6) || (param_4 < DAT_1801f3b22)) {
          DAT_1801f3b22 = bVar6 + 1;
        }
      }
    }
}

 FUN_1800a6800((longlong *)local_198);
    if (cVar2 != '\0') {
DAT_1801ec1c8 = !bVar13;
      DAT_1801f3b22 = '\0';
    }
}

 FUN_1800a6800((longlong *)local_198);
    if (cVar2 != '\0') {
if (!bVar13) {
        bVar10 = 9;
      }
      DAT_1801f3b22 = '\0';
      DAT_1801ec1c8 = bVar10;
    }
}

 FUN_1800a6800((longlong *)local_198);
    if (cVar2 != '\0') {
DAT_1801ec1c8 = !bVar13 << 2;
      DAT_1801f3b22 = '\0';
    }
}

 FUN_1800a6800(&local_1b8);
    }
    uStack_1b0 = 0;
    local_1a8 = _DAT_1801d8fc0;
    uStack_1a0 = _UNK_1801d8fc8;
    local_1b8 = (float *)(ulonglong)
                         CONCAT16(s_Freecam_1801d5e60[6],
                                  CONCAT24(s_Freecam_1801d5e60._4_2_,s_Freecam_1801d5e60._0_4_));
    pcVar8 = *(code **)(DAT_1801f3ae0 + 0x118);
    (*pcVar8)(local_1d8 + 2);
    local_1d8[1] = 32.0;
    local_1d8[0] = local_1d8[2];
    bVar13 = DAT_1801ec1c8 == 6;
    FUN_1800cfa40(local_198,pcVar8,pfVar7,(int32_t *)&DAT_180187500,0,&local_1b8,7);
    pppppuVar5 = local_198;
    if (0xf < local_180) {
pppppuVar5 = (int32_t *****)local_198[0];
    }
}

 FUN_1800a6800((longlong *)local_198);
    if (cVar2 != '\0') {
DAT_1801ec1c8 = 0;
      if (!bVar13) {
        DAT_1801ec1c8 = 6;
      }
      DAT_1801f3b22 = '\0';
    }
}

 FUN_1800a6800((longlong *)local_40);
        if (cVar2 != '\0') {
if (0xf < *(ulonglong *)(lVar1 + 0x38)) {
            plVar7 = (longlong *)*plVar7;
          }
          DAT_1801f3b23 = 1;
          PTR_DAT_1801ec1f0 = (int32_t *)plVar7;
        }
}

 FUN_1800a6800((longlong *)(param_1 + 0x260));
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
}

 FUN_1800a6800((longlong *)(param_1 + 0x48));
  pvVar1 = *(LPVOID *)(param_1 + 0x30);
  if (pvVar1 != (LPVOID)0x0) {
pvVar3 = pvVar1;
    if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x40) - (longlong)pvVar1)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *(int32_t *)(param_1 + 0x30) = 0;
    *(int32_t *)(param_1 + 0x38) = 0;
    *(int32_t *)(param_1 + 0x40) = 0;
  }
}

 FUN_1800a6800(*(longlong **)(param_1 + 8));
        thunk_FUN_18012d5e8(*(LPVOID *)(param_1 + 8));
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = 0;
      }
      else {
        if (bVar2 == 8) {
plVar13 = *(longlong **)(param_1 + 8);
          pvVar5 = (LPVOID)*plVar13;
          if (pvVar5 != (LPVOID)0x0) {
            pvVar14 = pvVar5;
            if ((0xfff < (ulonglong)(plVar13[2] - (longlong)pvVar5)) &&
               (pvVar14 = *(LPVOID *)((longlong)pvVar5 + -8),
               0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar14)))) {
              FUN_18012b7b4();
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            thunk_FUN_18012d5e8(pvVar14);
            *plVar13 = 0;
            plVar13[1] = 0;
            plVar13[2] = 0;
          }
          thunk_FUN_18012d5e8(*(LPVOID *)(param_1 + 8));
          param_1[8] = 0;
          param_1[9] = 0;
          param_1[10] = 0;
          param_1[0xb] = 0;
          param_1[0xc] = 0;
          param_1[0xd] = 0;
          param_1[0xe] = 0;
          param_1[0xf] = 0;
        }
}

 FUN_1800a6800(local_50);
    if (0xf < uStack_98) {
pvVar5 = local_b0;
      if ((0xfff < uStack_98 + 1) &&
         (pvVar5 = *(LPVOID *)((longlong)local_b0 + -8),
         0x1f < (ulonglong)((longlong)local_b0 + (-8 - (longlong)pvVar5)))) goto LAB_1800f7e11;
      thunk_FUN_18012d5e8(pvVar5);
    }
}

 FUN_1800a6800((longlong *)*param_1);
  }
  else {
    if (param_2 != '\b') {
return;
    }
}

 FUN_1800a6800(local_30);
    if (0xf < uStack_60) {
pvVar4 = local_78;
      if ((0xfff < uStack_60 + 1) &&
         (pvVar4 = *(LPVOID *)((longlong)local_78 + -8),
         0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar4)))) goto LAB_180118041;
      thunk_FUN_18012d5e8(pvVar4);
    }
}

