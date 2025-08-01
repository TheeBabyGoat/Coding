#include "for.h"
#include <stdint.h>
#include <stddef.h>

 for(; pppppppWVar15 != (LPCWSTR ******)ppppppWVar2; pppppppWVar15 = pppppppWVar15 + 4) {
pppppppWVar19 = pppppppWVar15;
          FUN_1800ba040((longlong *)pppppppWVar15);
        }
}

 for(; uVar7 != 0; uVar7 = uVar7 - 1) {
*puVar8 = param_3;
        puVar8 = puVar8 + 1;
      }
}

 for(uVar2 = uVar3 & 0x1ffffffffffffffe; uVar2 != 0; uVar2 = uVar2 - 1) {
*puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
}

 for(; param_1 != param_2; param_1 = param_1 + 1) {
*param_1 = *param_3;
  }
}

 for(puVar9 = param_1 + 4; puVar9 != param_2; puVar9 = puVar9 + 4) {
local_58 = *puVar9;
      uStack_50 = puVar9[1];
      local_48 = puVar9[2];
      uStack_40 = puVar9[3];
      *(int32_t *)puVar9 = 0;
      puVar9[2] = 0;
      puVar9[3] = 7;
      local_78 = param_1;
      if (7 < param_1[3]) {
        local_78 = (ulonglong *)*param_1;
      }
      local_70 = param_1[2];
      iVar5 = FUN_1800aa740((uint *)&local_58,&local_78);
      puVar7 = puVar9;
      if ((iVar5 == 0) || (-1 < iVar5)) {
        while( true ) {
          puVar8 = puVar7 + -4;
          local_68 = puVar8;
          if (7 < puVar7[-1]) {
            local_68 = (ulonglong *)puVar7[-4];
          }
          local_60 = puVar7[-2];
          iVar5 = FUN_1800aa740((uint *)&local_58,&local_68);
          if ((iVar5 == 0) || (-1 < iVar5)) break;
          FUN_1800b7d30((longlong *)puVar7,(longlong *)puVar8);
          puVar7 = puVar8;
        }
        if (puVar7 != &local_58) {
          if (7 < puVar7[3]) {
            pvVar1 = (LPVOID)*puVar7;
            pvVar6 = pvVar1;
            if ((0xfff < puVar7[3] * 2 + 2) &&
               (pvVar6 = *(LPVOID *)((longlong)pvVar1 - 8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) goto LAB_1800a9d23;
            thunk_FUN_18012d5e8(pvVar6);
          }
          *puVar7 = local_58;
          puVar7[1] = uStack_50;
          puVar7[2] = local_48;
          puVar7[3] = uStack_40;
          goto LAB_1800a9cce;
        }
      }
      else {
        while (puVar7 != param_1) {
          FUN_1800b7d30((longlong *)puVar7,(longlong *)(puVar7 + -4));
          puVar7 = puVar7 + -4;
        }
        if (param_1 != &local_58) {
          if (7 < param_1[3]) {
            pvVar1 = (LPVOID)*param_1;
            pvVar6 = pvVar1;
            if ((0xfff < param_1[3] * 2 + 2) &&
               (pvVar6 = *(LPVOID *)((longlong)pvVar1 - 8),
               0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar6)))) {
LAB_1800a9d23:
              FUN_18012b7b4();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            thunk_FUN_18012d5e8(pvVar6);
          }
          *param_1 = local_58;
          param_1[1] = uStack_50;
          param_1[2] = local_48;
          param_1[3] = uStack_40;
LAB_1800a9cce:
          local_58 = local_58 & 0xffffffffffff0000;
          local_48 = uVar3;
          uStack_40 = uVar4;
        }
      }
      FUN_1800ba040((longlong *)&local_58);
    }
}

 for(; param_2 < puVar8; puVar8 = puVar8 + -8) {
puVar11 = puVar15 + -8;
        local_58 = puVar9;
        if (7 < *(ulonglong *)(puVar9 + 6)) {
          local_58 = *(uint **)puVar9;
        }
        local_50 = *(int32_t *)(puVar9 + 4);
        iVar7 = FUN_1800aa740(puVar11,&local_58);
        if ((iVar7 == 0) || (puVar10 = puVar9, -1 < iVar7)) {
          local_48 = puVar11;
          if (7 < *(ulonglong *)(puVar15 + -2)) {
            local_48 = *(uint **)puVar11;
          }
          local_40 = *(int32_t *)(puVar15 + -4);
          iVar7 = FUN_1800aa740(puVar9,&local_48);
          if ((iVar7 != 0) && (param_3 = local_68, iVar7 < 0)) break;
          puVar10 = puVar9 + -8;
          if ((puVar9 + -8 != puVar11) && (puVar10 != puVar11)) {
            uVar2 = *(int32_t *)(puVar15 + -6);
            uVar3 = *(int32_t *)puVar10;
            uVar4 = *(int32_t *)(puVar9 + -6);
            uVar5 = *(int32_t *)(puVar9 + -4);
            uVar6 = *(int32_t *)(puVar9 + -2);
            *(int32_t *)puVar10 = *(int32_t *)puVar11;
            *(int32_t *)(puVar9 + -6) = uVar2;
            uVar2 = *(int32_t *)(puVar15 + -2);
            *(int32_t *)(puVar9 + -4) = *(int32_t *)(puVar15 + -4);
            *(int32_t *)(puVar9 + -2) = uVar2;
            *(int32_t *)puVar11 = uVar3;
            *(int32_t *)(puVar15 + -6) = uVar4;
            *(int32_t *)(puVar15 + -4) = uVar5;
            *(int32_t *)(puVar15 + -2) = uVar6;
          }
        }
        puVar9 = puVar10;
        param_3 = local_68;
        puVar15 = puVar11;
      }
}

 for(; puVar11 != puVar4; puVar11 = puVar11 + 4) {
*puVar17 = 0;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar17[3] = 0;
          uVar8 = puVar11[1];
          *puVar17 = *puVar11;
          puVar17[1] = uVar8;
          uVar8 = puVar11[3];
          puVar17[2] = puVar11[2];
          puVar17[3] = uVar8;
          *(int32_t *)puVar11 = 0;
          puVar11[2] = 0;
          puVar11[3] = 7;
          puVar17 = puVar17 + 4;
        }
}

 for(; puVar11 != param_2; puVar11 = puVar11 + 4) {
*puVar17 = 0;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar17[3] = 0;
          uVar8 = puVar11[1];
          *puVar17 = *puVar11;
          puVar17[1] = uVar8;
          uVar8 = puVar11[3];
          puVar17[2] = puVar11[2];
          puVar17[3] = uVar8;
          *(int32_t *)puVar11 = 0;
          puVar11[2] = 0;
          puVar11[3] = 7;
          puVar17 = puVar17 + 4;
        }
}

 for(; plVar15 != plVar5; plVar15 = plVar15 + 4) {
FUN_1800ba040(plVar15);
        }
}

 for(plVar5 = *(longlong **)(param_1 + 0x18); plVar5 != plVar1; plVar5 = plVar5 + 4) {
FUN_1800ba040(plVar5);
  }
}

 for(; (puVar11 = puVar7, puVar9 != puVar1 &&
             (((short)*puVar9 == 0x5c || ((short)*puVar9 == 0x2f))));
          puVar9 = (uint *)((longlong)puVar9 + 2)) {
}
}

 for(; (puVar11 != puVar2 && (((short)*puVar11 == 0x5c || ((short)*puVar11 == 0x2f))));
          puVar11 = (uint *)((longlong)puVar11 + 2)) {
}
}

 for(; lVar9 != 0; lVar9 = lVar9 + -1) {
*puVar13 = param_5;
        puVar13 = puVar13 + 1;
      }
}

 for(; lVar9 != 0; lVar9 = lVar9 + -1) {
*puVar13 = param_5;
        puVar13 = puVar13 + 1;
      }
}

 for(; uVar6 != 0; uVar6 = uVar6 - 1) {
*pWVar8 = L'\0';
            pWVar8 = pWVar8 + 1;
          }
}

 for(pcVar13 = local_60; pcVar13 != pcVar15; pcVar13 = pcVar13 + 1) {
cVar3 = *pcVar13;
      if ((ulonglong)puVar12[3] < lVar11 + 1U) {
        (**(code **)*puVar12)(puVar12);
      }
      *(char *)(puVar12[1] + puVar12[2]) = cVar3;
      puVar12[2] = puVar12[2] + 1;
      lVar11 = puVar12[2];
    }
}

 for(; puVar14 != puVar16; puVar14 = puVar14 + 1) {
uVar4 = *puVar14;
      if ((ulonglong)puVar12[3] < puVar12[2] + 1) {
        (**(code **)*puVar12)(puVar12);
      }
      *(int32_t *)(puVar12[1] + puVar12[2]) = uVar4;
      puVar12[2] = puVar12[2] + 1;
    }
}

 for(; puVar7 != puVar9; puVar7 = puVar7 + 1) {
uVar2 = *puVar7;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[2] + param_3[1]) = uVar2;
    param_3[2] = param_3[2] + 1;
  }
}

 for(pcVar14 = local_98; pcVar14 != local_198; pcVar14 = pcVar14 + 1) {
cVar12 = *pcVar14;
      if (('`' < cVar12) && (cVar12 < '{')) {
        *pcVar14 = cVar12 + -0x20;
      }
    }
  }
}

 for(; local_198 = pcVar15, pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
cVar12 = *pcVar5;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[2] + param_2[1]) = cVar12;
            param_2[2] = param_2[2] + 1;
            pcVar15 = local_198;
          }
}

 for(; pcVar14 != pcVar15 + (longlong)pcVar11; pcVar14 = pcVar14 + 1) {
cVar12 = *pcVar14;
          if ((ulonglong)puVar9[3] < puVar9[2] + 1) {
            (**(code **)*puVar9)(puVar9);
          }
          *(char *)(puVar9[2] + puVar9[1]) = cVar12;
          puVar9[2] = puVar9[2] + 1;
        }
}

 for(; puVar7 != puVar9; puVar7 = puVar7 + 1) {
uVar2 = *puVar7;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[2] + param_3[1]) = uVar2;
    param_3[2] = param_3[2] + 1;
  }
}

 for(; pcVar2 != local_198; pcVar2 = pcVar2 + 1) {
cVar13 = *pcVar2;
      if (('`' < cVar13) && (cVar13 < '{')) {
        *pcVar2 = cVar13 + -0x20;
      }
    }
  }
}

 for(; local_198 = pcVar14, pcVar6 != pcVar4; pcVar6 = pcVar6 + 1) {
cVar13 = *pcVar6;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[2] + param_2[1]) = cVar13;
            param_2[2] = param_2[2] + 1;
            pcVar14 = local_198;
          }
}

 for(; pcVar2 != pcVar14 + (longlong)pcVar12; pcVar2 = pcVar2 + 1) {
cVar13 = *pcVar2;
          if ((ulonglong)puVar10[3] < puVar10[2] + 1) {
            (**(code **)*puVar10)(puVar10);
          }
          *(char *)(puVar10[2] + puVar10[1]) = cVar13;
          puVar10[2] = puVar10[2] + 1;
        }
}

 for(pcVar13 = local_98; pcVar13 != local_198; pcVar13 = pcVar13 + 1) {
cVar12 = *pcVar13;
      if (('`' < cVar12) && (cVar12 < '{')) {
        *pcVar13 = cVar12 + -0x20;
      }
    }
  }
}

 for(; local_198 = pcVar14, pcVar5 != pcVar3; pcVar5 = pcVar5 + 1) {
cVar12 = *pcVar5;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[2] + param_2[1]) = cVar12;
            param_2[2] = param_2[2] + 1;
            pcVar14 = local_198;
          }
}

 for(; pcVar13 != pcVar14 + (longlong)pcVar11; pcVar13 = pcVar13 + 1) {
cVar12 = *pcVar13;
          if ((ulonglong)puVar9[3] < puVar9[2] + 1) {
            (**(code **)*puVar9)(puVar9);
          }
          *(char *)(puVar9[2] + puVar9[1]) = cVar12;
          puVar9[2] = puVar9[2] + 1;
        }
}

 for(; (uVar5 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
}
}

 for(pfVar5 = pfVar7; (pfVar5 != pfVar7 + (longlong)iVar3 + 5 && ((uint)*pfVar5 < (uint)param_4));
      pfVar5 = pfVar5 + 1) {
}
}

 for(puVar10 = *(int32_t **)param_1[6]; puVar10 != puVar3; puVar10 = puVar10 + 1) {
uVar4 = *puVar10;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = uVar4;
    param_3[2] = param_3[2] + 1;
  }
}

 for(puVar10 = *(int32_t **)param_1[0xd]; puVar10 != puVar3; puVar10 = puVar10 + 1) {
uVar4 = *puVar10;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[1] + param_3[2]) = uVar4;
    param_3[2] = param_3[2] + 1;
  }
}

 for(; puVar5 != puVar10; puVar5 = puVar5 + 1) {
uVar2 = *puVar5;
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
          param_2[2] = param_2[2] + 1;
        }
}

 for(; puVar1 = (int32_t *)((longlong)param_4 + 0xf), 0 < iVar11; iVar11 = iVar11 + -1) {
for (; puVar1 != puVar10; puVar1 = puVar1 + 1) {
      uVar2 = *puVar1;
      if ((ulonglong)puVar4[3] < puVar4[2] + 1) {
        (**(code **)*puVar4)(puVar4);
      }
      *(int32_t *)(puVar4[1] + puVar4[2]) = uVar2;
      puVar4[2] = puVar4[2] + 1;
    }
  }
}

 for(; puVar1 != puVar10; puVar1 = puVar1 + 1) {
uVar2 = *puVar1;
      if ((ulonglong)puVar4[3] < puVar4[2] + 1) {
        (**(code **)*puVar4)(puVar4);
      }
      *(int32_t *)(puVar4[1] + puVar4[2]) = uVar2;
      puVar4[2] = puVar4[2] + 1;
    }
}

 for(; pcVar4 != local_6c8; pcVar4 = pcVar4 + 1) {
cVar2 = *pcVar4;
      if (('`' < cVar2) && (cVar2 < '{')) {
        *pcVar4 = cVar2 + -0x20;
      }
    }
    cVar21 = cVar21 + -0x20;
  }
}

 for(; pcVar4 < local_6c8; pcVar4 = pcVar4 + 1) {
pcVar20 = pcVar4;
      pcVar6 = pcVar4;
      if ((*pcVar4 != '.') && (pcVar20 = pcVar5, pcVar6 = local_698, *pcVar4 == cVar21)) {
        pcVar13 = pcVar4;
        local_6d0 = pcVar4;
      }
      local_698 = pcVar6;
      pcVar5 = pcVar20;
    }
}

 for(; pcVar4 < local_6c8; pcVar4 = pcVar4 + 1) {
if (*pcVar4 == '0') {
              iVar16 = iVar16 + 1;
              local_6ec = iVar16;
            }
            else if (*pcVar4 != '.') break;
          }
}

 for(; pcVar19 != local_6b8; pcVar19 = pcVar19 + 1) {
cVar3 = *pcVar19;
      if (('`' < cVar3) && (cVar3 < '{')) {
        *pcVar19 = cVar3 + -0x20;
      }
    }
    cVar28 = cVar28 + -0x20;
  }
}

 for(; pcVar7 < local_6b8; pcVar7 = pcVar7 + 1) {
pcVar27 = pcVar7;
      pcVar8 = pcVar7;
      if ((*pcVar7 != '.') && (pcVar27 = pcVar6, pcVar8 = local_6a0, *pcVar7 == cVar28)) {
        pcVar19 = pcVar7;
        local_6d0 = pcVar7;
      }
      local_6a0 = pcVar8;
      pcVar6 = pcVar27;
    }
}

 for(; pcVar19 < local_6c8; pcVar19 = pcVar19 + 1) {
if (*pcVar19 == '0') {
              iVar23 = iVar23 + 1;
              local_6ec = iVar23;
            }
            else if (*pcVar19 != '.') break;
          }
}

 for(; (uVar8 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
}
}

 for(; (puVar7 != puVar11 + (longlong)iVar6 + 5 && (*puVar7 < param_4)); puVar7 = puVar7 + 1) {
}
}

 for(; puVar7 != puVar1 + uVar10; puVar7 = puVar7 + 1) {
uVar2 = *puVar7;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
        param_2[2] = param_2[2] + 1;
      }
}

 for(; puVar7 != puVar1; puVar7 = puVar7 + 1) {
uVar2 = *puVar7;
    if ((ulonglong)param_2[3] < param_2[2] + 1) {
      (**(code **)*param_2)(param_2);
    }
    *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
    param_2[2] = param_2[2] + 1;
  }
}

 for(; puVar1 != puVar11 + uVar10; puVar1 = puVar1 + 1) {
uVar2 = *puVar1;
        if ((ulonglong)puVar3[3] < puVar3[2] + 1) {
          (**(code **)*puVar3)(puVar3);
        }
        *(int32_t *)(puVar3[1] + puVar3[2]) = uVar2;
        puVar3[2] = puVar3[2] + 1;
      }
}

 for(pcVar5 = local_48; pcVar5 != local_58; pcVar5 = pcVar5 + 1) {
cVar1 = *pcVar5;
      if (('`' < cVar1) && (cVar1 < '{')) {
        *pcVar5 = cVar1 + -0x20;
      }
    }
  }
}

 for(; puVar5 != puVar10; puVar5 = puVar5 + 1) {
uVar2 = *puVar5;
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
          param_2[2] = param_2[2] + 1;
        }
}

 for(; puVar1 = (int32_t *)((longlong)param_4 + 0xf), 0 < iVar11; iVar11 = iVar11 + -1) {
for (; puVar1 != puVar10; puVar1 = puVar1 + 1) {
      uVar2 = *puVar1;
      if ((ulonglong)puVar4[3] < puVar4[2] + 1) {
        (**(code **)*puVar4)(puVar4);
      }
      *(int32_t *)(puVar4[1] + puVar4[2]) = uVar2;
      puVar4[2] = puVar4[2] + 1;
    }
  }
}

 for(; puVar1 != puVar10; puVar1 = puVar1 + 1) {
uVar2 = *puVar1;
      if ((ulonglong)puVar4[3] < puVar4[2] + 1) {
        (**(code **)*puVar4)(puVar4);
      }
      *(int32_t *)(puVar4[1] + puVar4[2]) = uVar2;
      puVar4[2] = puVar4[2] + 1;
    }
}

 for(pcVar11 = local_98; pcVar11 != local_158; pcVar11 = pcVar11 + 1) {
cVar3 = *pcVar11;
      if (('`' < cVar3) && (cVar3 < '{')) {
        *pcVar11 = cVar3 + -0x20;
      }
    }
  }
}

 for(; pbVar17 != pbVar1; pbVar17 = pbVar17 + 1) {
pcVar13 = "\\x{";
        do {
          cVar3 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(char *)(param_2[2] + param_2[1]) = cVar3;
          param_2[2] = param_2[2] + 1;
        } while (*pcVar13 != '\0');
        FUN_1800b4260((longlong *)local_58,&local_48,(longlong)&local_40,(ulonglong)*pbVar17,0x10);
        puVar8 = local_58[0];
        for (puVar14 = &local_48; puVar14 != puVar8; puVar14 = (int32_t *)((longlong)puVar14 + 1)
            ) {
          uVar4 = *(int32_t *)puVar14;
          if ((ulonglong)param_2[3] < param_2[2] + 1) {
            (**(code **)*param_2)(param_2);
          }
          *(int32_t *)(param_2[2] + param_2[1]) = uVar4;
          param_2[2] = param_2[2] + 1;
        }
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[2] + param_2[1]) = 0x7d;
        param_2[2] = param_2[2] + 1;
      }
      goto LAB_1800b49a1;
    }
}

 for(; puVar4 != puVar10 + uVar9; puVar4 = puVar4 + 1) {
uVar1 = *puVar4;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[2] + param_2[1]) = uVar1;
        param_2[2] = param_2[2] + 1;
      }
}

 for(; puVar7 != puVar3; puVar7 = (int32_t *)((longlong)puVar7 + 1)) {
uVar1 = *(int32_t *)puVar7;
    if ((ulonglong)param_2[3] < param_2[2] + 1) {
      (**(code **)*param_2)(param_2);
    }
    *(int32_t *)(param_2[2] + param_2[1]) = uVar1;
    param_2[2] = param_2[2] + 1;
  }
}

 for(; puVar4 != puVar10 + uVar9; puVar4 = puVar4 + 1) {
uVar1 = *puVar4;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[2] + param_2[1]) = uVar1;
        param_2[2] = param_2[2] + 1;
      }
}

 for(; puVar6 != puVar1 + uVar8; puVar6 = puVar6 + 1) {
uVar2 = *puVar6;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
        param_2[2] = param_2[2] + 1;
      }
}

 for(puVar6 = (int32_t *)*param_6; puVar6 != puVar1; puVar6 = puVar6 + 1) {
uVar2 = *puVar6;
    if ((ulonglong)param_2[3] < param_2[2] + 1) {
      (**(code **)*param_2)(param_2);
    }
    *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
    param_2[2] = param_2[2] + 1;
  }
}

 for(; puVar1 != puVar9 + uVar8; puVar1 = puVar1 + 1) {
uVar2 = *puVar1;
        if ((ulonglong)param_2[3] < param_2[2] + 1) {
          (**(code **)*param_2)(param_2);
        }
        *(int32_t *)(param_2[1] + param_2[2]) = uVar2;
        param_2[2] = param_2[2] + 1;
      }
}

 for(; puVar3 != puVar2; puVar3 = puVar3 + 1) {
uVar1 = *puVar3;
      if ((ulonglong)param_2[3] < param_2[2] + 1) {
        (**(code **)*param_2)(param_2);
      }
      *(int32_t *)(param_2[2] + param_2[1]) = uVar1;
      param_2[2] = param_2[2] + 1;
    }
}

 for(pcVar7 = pcVar10; pcVar7 != pcVar10 + cVar1; pcVar7 = pcVar7 + 1) {
cVar2 = *pcVar7;
        if ((ulonglong)param_7[3] < lVar5 + 1U) {
          (**(code **)*param_7)(param_7);
        }
        pcVar3 = (char *)param_7[2];
        pcVar3[param_7[1]] = cVar2;
        param_7[2] = param_7[2] + 1;
        lVar5 = param_7[2];
      }
}

 for(; puVar7 != puVar9; puVar7 = puVar7 + 1) {
uVar2 = *puVar7;
    if ((ulonglong)param_3[3] < param_3[2] + 1) {
      (**(code **)*param_3)(param_3);
    }
    *(int32_t *)(param_3[2] + param_3[1]) = uVar2;
    param_3[2] = param_3[2] + 1;
  }
}

 for(; pcVar2 != local_198; pcVar2 = pcVar2 + 1) {
cVar13 = *pcVar2;
      if (('`' < cVar13) && (cVar13 < '{')) {
        *pcVar2 = cVar13 + -0x20;
      }
    }
  }
}

 for(; local_198 = pcVar15, pcVar6 != pcVar4; pcVar6 = pcVar6 + 1) {
cVar13 = *pcVar6;
            if ((ulonglong)param_2[3] < param_2[2] + 1) {
              (**(code **)*param_2)(param_2);
            }
            *(char *)(param_2[2] + param_2[1]) = cVar13;
            param_2[2] = param_2[2] + 1;
            pcVar15 = local_198;
          }
}

 for(; pcVar2 != pcVar15 + (longlong)pcVar12; pcVar2 = pcVar2 + 1) {
cVar13 = *pcVar2;
          if ((ulonglong)puVar10[3] < puVar10[2] + 1) {
            (**(code **)*puVar10)(puVar10);
          }
          *(char *)(puVar10[2] + puVar10[1]) = cVar13;
          puVar10[2] = puVar10[2] + 1;
        }
}

 for(; pbVar8 != (byte *)(param_1 + 2); pbVar8 = pbVar8 + 1) {
bVar2 = *pbVar8;
        if ((ulonglong)puVar3[3] < puVar3[2] + 1) {
          (**(code **)*puVar3)(puVar3);
        }
        *(byte *)(puVar3[2] + puVar3[1]) = bVar2;
        puVar3[2] = puVar3[2] + 1;
      }
}

 for(; pauVar7 != pauVar5; pauVar7 = (int32_t (*) [32])(*pauVar7 + 1)) {
uVar2 = (*pauVar7)[0];
        if ((ulonglong)puVar3[3] < puVar3[2] + 1) {
          (**(code **)*puVar3)(puVar3);
        }
        *(int32_t *)(puVar3[2] + puVar3[1]) = uVar2;
        puVar3[2] = puVar3[2] + 1;
      }
}

 for(; plVar5 != plVar1; plVar5 = plVar5 + 4) {
FUN_1800a6800(plVar5);
    }
}

 for(plVar2 = (longlong *)*param_1; plVar2 != plVar1; plVar2 = plVar2 + 4) {
FUN_1800a6800(plVar2);
  }
}

 for(; puVar4 != puVar2; puVar4 = puVar4 + 4) {
puVar5 = puVar4;
          if (0xf < (ulonglong)puVar4[3]) {
            puVar5 = (int32_t *)*puVar4;
          }
          (**(code **)(*plVar1 + 0xa0))(plVar1,local_28,puVar5,DAT_1801fb530);
          if (local_28[0] != 0) {
            (**(code **)(*plVar1 + 0x108))(plVar1,local_28[0],&DAT_1801f3ac4,1,0);
          }
        }
}

 for(; puVar4 != puVar3; puVar4 = puVar4 + 4) {
puVar9 = puVar4;
          if (0xf < (ulonglong)puVar4[3]) {
            puVar9 = (int32_t *)*puVar4;
          }
          (**(code **)(*plVar5 + 0xa0))(plVar5,&local_res10,puVar9,DAT_1801fb560);
          if (local_res10 != 0) {
            (**(code **)(*plVar5 + 0x108))(plVar5,local_res10,&local_48,3,0);
          }
        }
}

 for(; puVar3 != puVar4; puVar3 = puVar3 + 4) {
puVar9 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar9 = (int32_t *)*puVar3;
        }
        (**(code **)(*plVar5 + 0xa0))(plVar5,&local_res8,puVar9,DAT_1801fb588);
        if (local_res8 != 0) {
          (**(code **)(*plVar5 + 0x108))(plVar5,local_res8,&DAT_1801fb554,1,0);
        }
      }
}

 for(; puVar3 != puVar4; puVar3 = puVar3 + 4) {
puVar9 = puVar3;
        if (0xf < (ulonglong)puVar3[3]) {
          puVar9 = (int32_t *)*puVar3;
        }
        (**(code **)(*plVar5 + 0xa0))(plVar5,&local_res10,puVar9,DAT_1801fb5b0);
        if (local_res10 != 0) {
          (**(code **)(*plVar5 + 0x108))(plVar5,local_res10,&DAT_1801f39f8,1,0);
        }
      }
}

 for(; DAT_1801f3ad8 = plVar10, DAT_1801fb620 = puVar11, puVar7 != puVar12;
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
}

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar11 != puVar7; puVar11 = puVar11 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
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

 for(; puVar7 != puVar11; puVar7 = puVar7 + 4) {
puVar12 = puVar7;
        if (0xf < (ulonglong)puVar7[3]) {
          puVar12 = (int32_t *)*puVar7;
        }
        (**(code **)(*plVar10 + 0xa0))(plVar10,local_d8,puVar12,DAT_1801fb9e8);
      }
}

 for(; DAT_1801f3ad8 = plVar6, DAT_1801fbab0 = puVar10, puVar8 != puVar9;
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
}

 for(; puVar8 != puVar10; puVar8 = puVar8 + 4) {
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

 for(; DAT_1801f3ad8 = plVar6, DAT_1801fbb00 = puVar10, puVar8 != puVar9;
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
}

 for(; DAT_1801f3ad8 = plVar7, DAT_1801fbb28 = puVar8, puVar9 != puVar10;
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
}

 for(; puVar10 != puVar8; puVar10 = puVar10 + 4) {
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

 for(; DAT_1801f3ad8 = plVar6, DAT_1801fbb78 = puVar10, puVar8 != puVar9;
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
}

 for(; puVar8 != puVar10; puVar8 = puVar8 + 4) {
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

 for(; plVar7 != plVar3; plVar7 = plVar7 + 4) {
FUN_1800a6800(plVar7);
        }
}

 for(; puVar1 != puVar3; puVar1 = puVar1 + 4) {
puVar4 = puVar1;
          if (0xf < (ulonglong)puVar1[3]) {
            puVar4 = (int32_t *)*puVar1;
          }
          (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res18,puVar4,DAT_1801fbc98);
          param_2 = local_res18;
          if (local_res18 != 0) {
            local_res8 = DAT_1801f3a0d;
            local_res9 = 1;
            local_resb = 0;
            (**(code **)(*plVar2 + 0x100))(plVar2,local_res18,&local_res8,4,0);
          }
        }
}

 for(; DAT_1801f3ad8 = plVar1, DAT_1801fbd58 = puVar3, puVar4 != puVar5; puVar4 = puVar4 + 4) {
puVar3 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar3 = (int32_t *)*puVar4;
        }
        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res10,puVar3,DAT_1801fbd20);
        if (local_res10 != 0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,local_res10,&DAT_1801ec4a0,3,0);
        }
        plVar1 = DAT_1801f3ad8;
        puVar3 = DAT_1801fbd58;
      }
}

 for(; DAT_1801f3ad8 = plVar2, DAT_1801fbd80 = puVar4, puVar5 != puVar3; puVar5 = puVar5 + 4) {
puVar4 = puVar5;
          if (0xf < (ulonglong)puVar5[3]) {
            puVar4 = (int32_t *)*puVar5;
          }
          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_res18,puVar4,DAT_1801fbd48);
          if (local_res18 != 0) {
            (**(code **)(*plVar1 + 0x108))(plVar1,local_res18,&DAT_1801ec4b0,3,0);
          }
          plVar2 = DAT_1801f3ad8;
          puVar4 = DAT_1801fbd80;
        }
}

 for(; DAT_1801f3ad8 = plVar1, DAT_1801fbda8 = puVar3, puVar5 != puVar4;
              puVar5 = puVar5 + 4) {
puVar3 = puVar5;
            if (0xf < (ulonglong)puVar5[3]) {
              puVar3 = (int32_t *)*puVar5;
            }
            (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res20,puVar3,DAT_1801fbd70);
            if (local_res20 != 0) {
              (**(code **)(*plVar2 + 0x108))(plVar2,local_res20,&DAT_1801ec4c0,3,0);
            }
            plVar1 = DAT_1801f3ad8;
            puVar3 = DAT_1801fbda8;
          }
}

 for(; DAT_1801f3ad8 = plVar2, DAT_1801fbdd0 = puVar4, puVar5 != puVar3;
                puVar5 = puVar5 + 4) {
puVar4 = puVar5;
              if (0xf < (ulonglong)puVar5[3]) {
                puVar4 = (int32_t *)*puVar5;
              }
              (**(code **)(*plVar1 + 0xa0))(plVar1,&local_78,puVar4,DAT_1801fbd98);
              if (local_78 != 0) {
                (**(code **)(*plVar1 + 0x108))(plVar1,local_78,&DAT_1801ec4d0,3,0);
              }
              plVar2 = DAT_1801f3ad8;
              puVar4 = DAT_1801fbdd0;
            }
}

 for(; DAT_1801f3ad8 = plVar1, DAT_1801fbdf8 = puVar3, puVar5 != puVar4;
                  puVar5 = puVar5 + 4) {
puVar3 = puVar5;
                if (0xf < (ulonglong)puVar5[3]) {
                  puVar3 = (int32_t *)*puVar5;
                }
                (**(code **)(*plVar2 + 0xa0))(plVar2,&local_70,puVar3,DAT_1801fbdc0);
                if (local_70 != 0) {
                  (**(code **)(*plVar2 + 0x108))(plVar2,local_70,&DAT_1801fb108,4,0);
                }
                plVar1 = DAT_1801f3ad8;
                puVar3 = DAT_1801fbdf8;
              }
}

 for(; DAT_1801f3ad8 = plVar2, DAT_1801fbe20 = puVar4, puVar5 != puVar3;
                    puVar5 = puVar5 + 4) {
puVar4 = puVar5;
                  if (0xf < (ulonglong)puVar5[3]) {
                    puVar4 = (int32_t *)*puVar5;
                  }
                  (**(code **)(*plVar1 + 0xa0))(plVar1,&local_68,puVar4,DAT_1801fbde8);
                  if (local_68 != 0) {
                    (**(code **)(*plVar1 + 0x108))(plVar1,local_68,&DAT_1801ec4e0,3,0);
                  }
                  plVar2 = DAT_1801f3ad8;
                  puVar4 = DAT_1801fbe20;
                }
}

 for(; DAT_1801f3ad8 = plVar1, DAT_1801fbe48 = puVar3, puVar5 != puVar4;
                      puVar5 = puVar5 + 4) {
puVar3 = puVar5;
                    if (0xf < (ulonglong)puVar5[3]) {
                      puVar3 = (int32_t *)*puVar5;
                    }
                    (**(code **)(*plVar2 + 0xa0))(plVar2,&local_60,puVar3,DAT_1801fbe10);
                    if (local_60 != 0) {
                      (**(code **)(*plVar2 + 0x108))(plVar2,local_60,&DAT_1801ec4f0,3,0);
                    }
                    plVar1 = DAT_1801f3ad8;
                    puVar3 = DAT_1801fbe48;
                  }
}

 for(; DAT_1801f3ad8 = plVar2, DAT_1801fbe70 = puVar4, puVar5 != puVar3;
                        puVar5 = puVar5 + 4) {
puVar4 = puVar5;
                      if (0xf < (ulonglong)puVar5[3]) {
                        puVar4 = (int32_t *)*puVar5;
                      }
                      (**(code **)(*plVar1 + 0xa0))(plVar1,&local_58,puVar4,DAT_1801fbe38);
                      if (local_58 != 0) {
                        (**(code **)(*plVar1 + 0x108))(plVar1,local_58,&DAT_1801ec500,3,0);
                      }
                      plVar2 = DAT_1801f3ad8;
                      puVar4 = DAT_1801fbe70;
                    }
}

 for(; DAT_1801f3ad8 = plVar1, DAT_1801fbe98 = puVar3, puVar5 != puVar4;
                          puVar5 = puVar5 + 4) {
puVar3 = puVar5;
                        if (0xf < (ulonglong)puVar5[3]) {
                          puVar3 = (int32_t *)*puVar5;
                        }
                        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_50,puVar3,DAT_1801fbe60);
                        if (local_50 != 0) {
                          (**(code **)(*plVar2 + 0x108))(plVar2,local_50,&DAT_1801ec510,3,0);
                        }
                        plVar1 = DAT_1801f3ad8;
                        puVar3 = DAT_1801fbe98;
                      }
}

 for(; DAT_1801f3ad8 = plVar2, DAT_1801fbec0 = puVar4, puVar5 != puVar3;
                            puVar5 = puVar5 + 4) {
puVar4 = puVar5;
                          if (0xf < (ulonglong)puVar5[3]) {
                            puVar4 = (int32_t *)*puVar5;
                          }
                          (**(code **)(*plVar1 + 0xa0))(plVar1,&local_48,puVar4,DAT_1801fbe88);
                          if (local_48 != 0) {
                            (**(code **)(*plVar1 + 0x108))(plVar1,local_48,&DAT_1801ec520,3,0);
                          }
                          plVar2 = DAT_1801f3ad8;
                          puVar4 = DAT_1801fbec0;
                        }
}

 for(; DAT_1801f3ad8 = plVar1, DAT_1801fbee8 = puVar3, puVar5 != puVar4;
                              puVar5 = puVar5 + 4) {
puVar3 = puVar5;
                            if (0xf < (ulonglong)puVar5[3]) {
                              puVar3 = (int32_t *)*puVar5;
                            }
                            (**(code **)(*plVar2 + 0xa0))(plVar2,&local_40,puVar3,DAT_1801fbeb0);
                            if (local_40 != 0) {
                              (**(code **)(*plVar2 + 0x108))(plVar2,local_40,&DAT_1801ec530,3,0);
                            }
                            plVar1 = DAT_1801f3ad8;
                            puVar3 = DAT_1801fbee8;
                          }
}

 for(; DAT_1801f3ad8 = plVar2, DAT_1801fbf10 = puVar4, puVar5 != puVar3;
                                puVar5 = puVar5 + 4) {
puVar4 = puVar5;
                              if (0xf < (ulonglong)puVar5[3]) {
                                puVar4 = (int32_t *)*puVar5;
                              }
                              (**(code **)(*plVar1 + 0xa0))(plVar1,&local_38,puVar4,DAT_1801fbed8);
                              if (local_38 != 0) {
                                (**(code **)(*plVar1 + 0x108))(plVar1,local_38,&DAT_1801ec540,3,0);
                              }
                              plVar2 = DAT_1801f3ad8;
                              puVar4 = DAT_1801fbf10;
                            }
}

 for(; puVar3 != puVar4; puVar3 = puVar3 + 4) {
puVar5 = puVar3;
                                if (0xf < (ulonglong)puVar3[3]) {
                                  puVar5 = (int32_t *)*puVar3;
                                }
                                (**(code **)(*plVar2 + 0xa0))(plVar2,&local_30,puVar5,DAT_1801fbf00)
                                ;
                                if (local_30 != 0) {
                                  (**(code **)(*plVar2 + 0x108))(plVar2,local_30,&DAT_1801ec550,3,0)
                                  ;
                                }
                              }
}

 for(; plVar5 != plVar4; plVar5 = plVar5 + 4) {
FUN_1800a6800(plVar5);
            }
}

 for(; plVar6 != plVar5; plVar6 = plVar6 + 4) {
FUN_1800a6800(plVar6);
        }
}

 for(; puVar4 != puVar5; puVar4 = puVar4 + 4) {
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

 for(; puVar4 != puVar5; puVar4 = puVar4 + 4) {
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

 for(; puVar5 != puVar4; puVar5 = puVar5 + 4) {
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

 for(; DAT_1801f3ad8 = plVar1, DAT_1801fc2f8 = puVar4, puVar5 != puVar6; puVar5 = puVar5 + 4) {
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
}

 for(; DAT_1801f3ad8 = plVar2, DAT_1801fc320 = puVar5, puVar6 != puVar4; puVar6 = puVar6 + 4) {
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
}

 for(; DAT_1801f3ad8 = plVar1, DAT_1801fc348 = puVar4, puVar6 != puVar5;
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
}

 for(; DAT_1801f3ad8 = plVar2, DAT_1801fc370 = puVar5, puVar6 != puVar4;
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
}

 for(; DAT_1801f3ad8 = plVar1, DAT_1801fc398 = puVar4, puVar6 != puVar5;
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
}

 for(; DAT_1801f3ad8 = plVar2, DAT_1801fc3c0 = puVar5, puVar6 != puVar4;
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
}

 for(; DAT_1801f3ad8 = plVar1, DAT_1801fc3e8 = puVar4, puVar6 != puVar5;
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
}

 for(; DAT_1801f3ad8 = plVar2, DAT_1801fc410 = puVar5, puVar6 != puVar4;
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
}

 for(; DAT_1801f3ad8 = plVar1, DAT_1801fc438 = puVar4, puVar6 != puVar5;
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
}

 for(; DAT_1801f3ad8 = plVar2, DAT_1801fc460 = puVar5, puVar6 != puVar4;
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
}

 for(; DAT_1801f3ad8 = plVar1, DAT_1801fc488 = puVar4, puVar6 != puVar5;
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
}

 for(; DAT_1801f3ad8 = plVar2, DAT_1801fc4b0 = puVar5, puVar6 != puVar4;
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
}

 for(; puVar4 != puVar5; puVar4 = puVar4 + 4) {
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

 for(; puVar5 != puVar4; puVar5 = puVar5 + 4) {
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

 for(; puVar5 != puVar4; puVar5 = puVar5 + 4) {
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

 for(; puVar5 != puVar4; puVar5 = puVar5 + 4) {
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

 for(; DAT_1801f3ad8 = plVar1, DAT_1801fc578 = puVar4, puVar5 != puVar6; puVar5 = puVar5 + 4) {
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
}

 for(; DAT_1801f3ad8 = plVar2, DAT_1801fc5a0 = puVar5, puVar6 != puVar4; puVar6 = puVar6 + 4) {
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
}

 for(; puVar4 != puVar5; puVar4 = puVar4 + 4) {
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

 for(; puVar5 != puVar4; puVar5 = puVar5 + 4) {
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

 for(; DAT_1801f3ad8 = plVar1, DAT_1801fc618 = puVar4, puVar5 != puVar6; puVar5 = puVar5 + 4) {
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
}

 for(; DAT_1801f3ad8 = plVar2, DAT_1801fc640 = puVar5, puVar6 != puVar4; puVar6 = puVar6 + 4) {
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
}

 for(; puVar4 != puVar5; puVar4 = puVar4 + 4) {
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

 for(; puVar1 != puVar3; puVar1 = puVar1 + 4) {
puVar4 = puVar1;
        if (0xf < (ulonglong)puVar1[3]) {
          puVar4 = (int32_t *)*puVar1;
        }
        (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res10,puVar4,DAT_1801fc708);
        if (local_res10 != 0) {
          (**(code **)(*plVar2 + 0x108))(plVar2,local_res10,&DAT_1801f3ab0,1,0);
        }
      }
}

 for(puVar4 = *(int32_t **)(param_1 + 0x10); puVar4 != puVar1; puVar4 = puVar4 + 4) {
puVar5 = puVar4;
      if (0xf < (ulonglong)puVar4[3]) {
        puVar5 = (int32_t *)*puVar4;
      }
      (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res20,puVar5,*(int32_t *)(param_1 + 8));
      uVar3 = local_res10;
      if (local_res20 != 0) {
        local_res10._4_4_ = SUB84(uVar3,4);
        local_res10._0_4_ = (uint)CONCAT21(1,*param_3);
        (**(code **)(*plVar2 + 0x100))(plVar2,local_res20,&local_res10,4,0);
      }
    }
}

 for(puVar3 = *(int32_t **)(param_1 + 0x10); puVar3 != puVar1; puVar3 = puVar3 + 4) {
puVar4 = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar4 = (int32_t *)*puVar3;
      }
      (**(code **)(*plVar2 + 0xa0))(plVar2,&local_res10,puVar4,*(int32_t *)(param_1 + 8));
      if (local_res10 != 0) {
        (**(code **)(*plVar2 + 0x108))(plVar2,local_res10,param_3,4,0);
      }
    }
}

 for(; puVar7 != puVar8; puVar7 = puVar7 + 4) {
*puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uVar4 = puVar7[1];
      *puVar10 = *puVar7;
      puVar10[1] = uVar4;
      uVar4 = puVar7[3];
      puVar10[2] = puVar7[2];
      puVar10[3] = uVar4;
      *(int32_t *)puVar7 = 0;
      puVar7[2] = 0;
      puVar7[3] = 0xf;
      puVar10 = puVar10 + 4;
    }
}

 for(; puVar7 != param_2; puVar7 = puVar7 + 4) {
*puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      uVar4 = puVar7[1];
      *puVar10 = *puVar7;
      puVar10[1] = uVar4;
      uVar4 = puVar7[3];
      puVar10[2] = puVar7[2];
      puVar10[3] = uVar4;
      *(int32_t *)puVar7 = 0;
      puVar7[2] = 0;
      puVar7[3] = 0xf;
      puVar10 = puVar10 + 4;
    }
}

 for(lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
}
}

 for(; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
}
}

 for(plVar5 = *(longlong **)(param_1 + 0x18); plVar5 != plVar1; plVar5 = plVar5 + 4) {
FUN_1800a6800(plVar5);
  }
}

 for(; plVar5 != plVar1; plVar5 = plVar5 + 4) {
FUN_1800a6800(plVar5);
    }
}

 for(; puVar8 != puVar3; puVar8 = puVar8 + 4) {
*puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        uVar5 = puVar8[1];
        *puVar12 = *puVar8;
        puVar12[1] = uVar5;
        uVar5 = puVar8[3];
        puVar12[2] = puVar8[2];
        puVar12[3] = uVar5;
        *(int32_t *)puVar8 = 0;
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        puVar12 = puVar12 + 4;
      }
}

 for(; puVar8 != param_2; puVar8 = puVar8 + 4) {
*puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        uVar5 = puVar8[1];
        *puVar12 = *puVar8;
        puVar12[1] = uVar5;
        uVar5 = puVar8[3];
        puVar12[2] = puVar8[2];
        puVar12[3] = uVar5;
        *(int32_t *)puVar8 = 0;
        puVar8[2] = 0;
        puVar8[3] = 0xf;
        puVar12 = puVar12 + 4;
      }
}

 for(lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
}
}

 for(; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
}
}

 for(; fVar16 = fVar20, fVar14 < 0.0; fVar14 = fVar14 + DAT_1801d8f10) {
}
}

 for(; DAT_1801d8f10 < fVar16; fVar16 = fVar16 + DAT_1801d8f48) {
}
}

 for(; fVar16 < 0.0; fVar16 = fVar16 + DAT_1801d8f10) {
}
}

 for(fVar14 = local_b8; DAT_1801d8f10 < fVar14; fVar14 = fVar14 + DAT_1801d8f48) {
}
}

 for(; fVar14 < 0.0; fVar14 = fVar14 + DAT_1801d8f10) {
}
}

 for(; fVar5 < local_b8; local_b8 = local_b8 + fVar15) {
}
}

 for(; local_b8 < 0.0; local_b8 = local_b8 + fVar5) {
}
}

 for(; fVar5 < fVar21; fVar21 = fVar21 + fVar15) {
}
}

 for(; fVar21 < 0.0; fVar21 = fVar21 + fVar5) {
}
}

 for(; fVar5 < fVar20; fVar20 = fVar20 + fVar15) {
}
}

 for(; fVar20 < 0.0; fVar20 = fVar20 + fVar5) {
}
}

 for(; plVar12 = plVar2, plVar16 != plVar6; plVar16 = plVar16 + 3) {
lVar4 = plVar16[2];
      lVar5 = plVar16[1];
      lVar13 = *plVar16;
      plVar16[2] = 0;
      plVar16[1] = 0;
      *plVar16 = 0;
      *plVar12 = lVar13;
      plVar12[1] = lVar5;
      plVar12[2] = lVar4;
      plVar2 = plVar12 + 3;
    }
}

 for(; plVar16 != param_2; plVar16 = plVar16 + 3) {
lVar4 = plVar16[2];
      lVar5 = plVar16[1];
      lVar13 = *plVar16;
      plVar16[2] = 0;
      plVar16[1] = 0;
      *plVar16 = 0;
      *plVar2 = lVar13;
      plVar2[1] = lVar5;
      plVar2[2] = lVar4;
      plVar2 = plVar2 + 3;
    }
}

 for(puVar4 = (int32_t *)*DAT_1801f7308; local_c0[0] = uVar8, puVar4 != puVar9;
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
}

 for(lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
}
}

 for(; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
}
}

 for(lVar10 = 0x3f; 0xfffffffffffffffU >> lVar10 == 0; lVar10 = lVar10 + -1) {
}
}

 for(; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
}
}

 for(; iVar4 = DAT_1801f3934, puVar2 != puVar3; puVar2 = puVar2 + 1) {
(*(code *)*puVar2)(iVar8,iVar7);
    }
}

 for(; p_Var7 = DAT_1801fcf08, p_Var4 != DAT_1801fcf08; p_Var4 = p_Var4 + 1) {
_Var3 = *p_Var4;
      DAT_1801fcf08 = p_Var5;
      nativeInit(0xfb71170b7e76acba);
      local_res10 = (ulonglong)param_1;
      nativePush64(local_res10);
      nativePush64(_Var3);
      p_Var8 = nativeCall();
      plVar10 = DAT_1801fce58;
      uVar2 = (uint)*p_Var8;
      if (-1 < (int)uVar2) {
        plVar14 = (longlong *)0x20;
        plVar9 = (longlong *)operator_new(0x20);
        *(uint *)((longlong)plVar9 + 0x1c) = uVar2;
        *plVar9 = (longlong)plVar10;
        plVar9[1] = (longlong)plVar10;
        plVar9[2] = (longlong)plVar10;
        *(int32_t *)(plVar9 + 3) = 0;
        plVar10 = (longlong *)DAT_1801fce58[1];
        uVar16 = 0;
        cVar1 = *(char *)((longlong)plVar10 + 0x19);
        local_48 = plVar10;
        plVar13 = DAT_1801fce58;
        while (plVar6 = plVar10, cVar1 == '\0') {
          uVar16 = *(uint *)((longlong)plVar6 + 0x1c);
          plVar14 = (longlong *)(ulonglong)uVar16;
          plVar10 = plVar6;
          plVar15 = plVar6;
          if (uVar16 < uVar2) {
            plVar10 = plVar6 + 2;
            plVar15 = plVar13;
          }
          uVar16 = (uint)(uVar2 <= uVar16);
          cVar1 = *(char *)(*plVar10 + 0x19);
          plVar10 = (longlong *)*plVar10;
          local_48 = plVar6;
          plVar13 = plVar15;
        }
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar16);
        if ((*(char *)((longlong)plVar13 + 0x19) == '\0') &&
           (*(uint *)((longlong)plVar13 + 0x1c) <= uVar2)) {
          p_Var8 = (__uint64 *)thunk_FUN_18012d5e8(plVar9);
        }
        else {
          if (DAT_1801fce60 == 0x7ffffffffffffff) {
            FUN_1800d8950();
            cVar1 = *(char *)((longlong)*(longlong **)(*plVar14 + 8) + 0x19);
            plVar10 = *(longlong **)(*plVar14 + 8);
            while (cVar1 == '\0') {
              FUN_1800ecbd0(plVar14,plVar14,(longlong *)plVar10[2]);
              plVar13 = (longlong *)*plVar10;
              thunk_FUN_18012d5e8(plVar10);
              plVar10 = plVar13;
              cVar1 = *(char *)((longlong)plVar13 + 0x19);
            }
            uVar12 = thunk_FUN_18012d5e8((LPVOID)*plVar14);
            return uVar12;
          }
          p_Var8 = (__uint64 *)
                   FUN_1800d86d0((longlong *)&DAT_1801fce58,(longlong *)&local_48,plVar9);
        }
      }
      p_Var5 = DAT_1801fcf08;
      DAT_1801fcf08 = p_Var7;
    }
}

 for(uVar3 = param_2; 9 < uVar3; uVar3 = uVar3 / 10000) {
if (uVar3 < 100) {
        uVar5 = uVar5 + 1;
        break;
      }
      if (uVar3 < 1000) {
        uVar5 = uVar5 + 2;
        break;
      }
      if (uVar3 < 10000) {
        uVar5 = uVar5 + 3;
        break;
      }
      uVar5 = uVar5 + 4;
    }
}

 for(pbVar5 = *(byte **)(param_1 + 0x30); pbVar5 != pbVar2; pbVar5 = pbVar5 + 1) {
bVar1 = *pbVar5;
    if (bVar1 < 0x20) {
      local_38 = 0;
      local_30 = 0;
      FUN_1800f87d0((int32_t *)&local_38,9,0x1801d7bc0,(ulonglong)bVar1);
      uVar7 = 0xffffffffffffffff;
      do {
        uVar6 = uVar7 + 1;
        lVar3 = uVar7 + 1;
        uVar7 = uVar6;
      } while (*(char *)((longlong)&local_38 + lVar3) != '\0');
      FUN_1800b9910(param_2,&local_38,uVar6);
    }
    else {
      uVar7 = param_2[2];
      if (uVar7 < (ulonglong)param_2[3]) {
        param_2[2] = uVar7 + 1;
        plVar4 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          plVar4 = (longlong *)*param_2;
        }
        *(byte *)((longlong)plVar4 + uVar7) = bVar1;
        *(int32_t *)((longlong)plVar4 + uVar7 + 1) = 0;
      }
      else {
        FUN_1800b99a0(param_2,1,(ulonglong)local_48,bVar1);
      }
    }
  }
}

 for(; pcVar10 != pcVar5; pcVar10 = pcVar10 + 0x10) {
*pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
}

 for(; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
*pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
}

 for(; pcVar10 != pcVar4; pcVar10 = pcVar10 + 0x10) {
*pcVar6 = *pcVar10;
          *(int32_t *)(pcVar6 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar6 = pcVar6 + 0x10;
        }
}

 for(; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
*pcVar6 = *pcVar10;
          *(int32_t *)(pcVar6 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar6 = pcVar6 + 0x10;
        }
}

 for(; pcVar10 != pcVar5; pcVar10 = pcVar10 + 0x10) {
*pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
}

 for(; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
*pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
}

 for(; puVar9 != puVar4; puVar9 = puVar9 + 0x10) {
*puVar6 = *puVar9;
          *(int32_t *)(puVar6 + 8) = *(int32_t *)(puVar9 + 8);
          *puVar9 = 0;
          *(int32_t *)(puVar9 + 8) = 0;
          puVar6 = puVar6 + 0x10;
        }
}

 for(; puVar9 != param_2; puVar9 = puVar9 + 0x10) {
*puVar6 = *puVar9;
          *(int32_t *)(puVar6 + 8) = *(int32_t *)(puVar9 + 8);
          *puVar9 = 0;
          *(int32_t *)(puVar9 + 8) = 0;
          puVar6 = puVar6 + 0x10;
        }
}

 for(; pcVar10 != pcVar5; pcVar10 = pcVar10 + 0x10) {
*pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
}

 for(; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
*pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
}

 for(; pcVar12 != pcVar5; pcVar12 = pcVar12 + 0x10) {
*pcVar7 = *pcVar12;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar12 + 8);
          *pcVar12 = '\0';
          pcVar12[8] = '\0';
          pcVar12[9] = '\0';
          pcVar12[10] = '\0';
          pcVar12[0xb] = '\0';
          pcVar12[0xc] = '\0';
          pcVar12[0xd] = '\0';
          pcVar12[0xe] = '\0';
          pcVar12[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
}

 for(; pcVar12 != param_2; pcVar12 = pcVar12 + 0x10) {
*pcVar7 = *pcVar12;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar12 + 8);
          *pcVar12 = '\0';
          pcVar12[8] = '\0';
          pcVar12[9] = '\0';
          pcVar12[10] = '\0';
          pcVar12[0xb] = '\0';
          pcVar12[0xc] = '\0';
          pcVar12[0xd] = '\0';
          pcVar12[0xe] = '\0';
          pcVar12[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
}

 for(; pcVar10 != pcVar5; pcVar10 = pcVar10 + 0x10) {
*pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
}

 for(; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
*pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
}

 for(; puVar21 != puVar2; puVar21 = puVar21 + 1) {
*puVar4 = uVar14 & uVar22 | *puVar21 << (0x20 - bVar5 & 0x1f);
        puVar4 = puVar4 + 1;
        uVar14 = *puVar4 & ~uVar22 | *puVar21 >> (bVar5 & 0x1f);
        *puVar4 = uVar14;
      }
}

 for(; puVar4 = puVar4 + 1, puVar21 != puVar2; puVar21 = puVar21 + 1) {
*puVar4 = *puVar21 << (bVar5 & 0x1f) | uVar22;
      uVar22 = *puVar21 >> (bVar7 & 0x1f);
    }
}

 for(puVar5 = *(int32_t **)(param_1 + 0x18); puVar5 != puVar1; puVar5 = puVar5 + 0x10) {
FUN_1800f9ec0(puVar5);
  }
}

 for(puVar2 = (int32_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 0x10) {
FUN_1800f9ec0(puVar2);
  }
}

 for(; puVar5 != puVar1; puVar5 = puVar5 + 0x10) {
FUN_1800f9ec0(puVar5);
    }
}

 for(; puVar8 != puVar3; puVar8 = puVar8 + 0x10) {
*puVar5 = *puVar8;
          *(int32_t *)(puVar5 + 8) = *(int32_t *)(puVar8 + 8);
          *puVar8 = 0;
          *(int32_t *)(puVar8 + 8) = 0;
          puVar5 = puVar5 + 0x10;
        }
}

 for(; puVar8 != param_2; puVar8 = puVar8 + 0x10) {
*puVar5 = *puVar8;
          *(int32_t *)(puVar5 + 8) = *(int32_t *)(puVar8 + 8);
          *puVar8 = 0;
          *(int32_t *)(puVar8 + 8) = 0;
          puVar5 = puVar5 + 0x10;
        }
}

 for(; puVar5 != puVar1; puVar5 = puVar5 + 0x10) {
FUN_1800f9ec0(puVar5);
    }
}

 for(puVar10 = (int32_t *)*local_40; local_40 = plVar11, puVar10 != puVar3;
              puVar10 = puVar10 + 0x10) {
if (puStack_30 == local_28) {
              FUN_1800f9810((longlong *)&local_38,puStack_30,puVar10);
            }
            else {
              *puStack_30 = *puVar10;
              *(int32_t *)(puStack_30 + 8) = *(int32_t *)(puVar10 + 8);
              *puVar10 = 0;
              *(int32_t *)(puVar10 + 8) = 0;
              puStack_30 = puStack_30 + 0x10;
            }
            plVar11 = local_40;
          }
}

 for(; puVar10 = DAT_1801fcf18, fVar8 = DAT_1801d8de4, puVar4 != DAT_1801fcf18;
      puVar4 = puVar4 + 8) {
if (DAT_1801d8de4 < (float)puVar4[6] || DAT_1801d8de4 == (float)puVar4[6]) {
      DAT_1801d8de4 = fVar3;
      DAT_1801fcf18 = puVar5;
      FUN_1800fa290(puVar4,param_1);
    }
    else {
      DAT_1801d8de4 = fVar3;
      DAT_1801fcf18 = puVar5;
      FUN_1800fa4b0((longlong)puVar4);
    }
    fVar3 = DAT_1801d8de4;
    puVar5 = DAT_1801fcf18;
    DAT_1801fcf18 = puVar10;
    DAT_1801d8de4 = fVar8;
  }
}

 for(; pcVar9 != pcVar10; pcVar9 = pcVar9 + 1) {
uVar8 = uVar8 * 0x100000001b3 ^ (longlong)*pcVar9;
  }
}

 for(pcVar13 = (char *)((longlong)plVar7 + (longlong)&pHVar12->unused); *pcVar13 == -1;
        pcVar13 = pcVar13 + -1) {
if ((longlong *)pcVar13 == plVar7) {
        pHVar12 = (HMODULE)0xffffffffffffffff;
        goto LAB_180117706;
      }
    }
}

 for(; uVar2 != 0; uVar2 = uVar2 - 1) {
lVar3 = *param_2;
    param_2 = (longlong *)((longlong)param_2 + 1);
    *(short *)puVar6 = (short)(char)lVar3;
    puVar6 = (ulonglong *)((longlong)puVar6 + 2);
  }
}

 for(; uVar4 != 0; uVar4 = uVar4 - 1) {
*(byte *)puVar12 = (byte)*puVar11;
          puVar11 = (ulonglong *)((longlong)puVar11 + 1);
          puVar12 = (ulonglong *)((longlong)puVar12 + 1);
        }
}

 for(puVar4 = DAT_1801fe3c0; puVar4 != (int32_t *)0x0; puVar4 = (int32_t *)*puVar4) {
if (((puVar9 <= puVar4) && (puVar4 < puVar10)) && (puVar4[1] != 0)) {
      return puVar4;
    }
  }
}

 for(; pbVar9 != pbVar15; pbVar9 = pbVar9 + 3) {
if (*pbVar9 == bVar6) {
              if (((pbVar9[1] & bVar13) != 0) && (-1 < (char)(pbVar9[2] << bVar18)))
              goto LAB_1801224f0;
              break;
            }
          }
}

 for(; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
}
}

 for(; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
uVar5 = uVar5 + 1;
        }
}

 for(; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
}
}

 for(; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
uVar5 = uVar5 + 1;
      }
}

 for(; (uVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
}
}

 for(; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
uVar4 = uVar4 + 1;
      }
}

 for(; param_1 != param_2; param_1 = (int32_t (*) [32])(*param_1 + 8)) {
if (*(ulonglong *)*param_1 != param_3) {
      *(ulonglong *)*pauVar5 = *(ulonglong *)*param_1;
      pauVar5 = (int32_t (*) [32])(*pauVar5 + 8);
    }
  }
}

 for(; lVar4 != lVar3; lVar4 = lVar4 + 0x28) {
if (((ulonglong)*(uint *)(lVar4 + 0xc) <= param_1 - 0x180000000U) &&
           (uVar1 = (ulonglong)(*(int *)(lVar4 + 8) + *(uint *)(lVar4 + 0xc)),
           param_1 - 0x180000000U < uVar1)) goto LAB_1801257f2;
      }
}

 for(plVar1 = &DAT_1801ded10; plVar1 < &DAT_1801ded10; plVar1 = plVar1 + 1) {
if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_180157468)();
    }
  }
}

 for(; uVar9 < *puVar3; uVar9 = uVar9 + 1) {
uVar8 = (ulonglong)uVar9;
      if (((puVar3[uVar8 * 4 + 1] <= uVar11) && (uVar11 < puVar3[uVar8 * 4 + 2])) &&
         (puVar3[uVar8 * 4 + 4] != 0)) {
        if (puVar3[uVar8 * 4 + 3] != 1) {
          iVar4 = (*(code *)((ulonglong)puVar3[uVar8 * 4 + 3] + lVar2))(&local_38,param_2);
          if (iVar4 < 0) {
            return 0;
          }
          if (iVar4 < 1) goto LAB_18012777f;
        }
        if (((param_1->ExceptionCode == 0xe06d7363) &&
            (PTR___DestructExceptionObject_1801785f8 != (int32_t *)0x0)) &&
           (BVar5 = _IsNonwritableInCurrentImage((PBYTE)&PTR___DestructExceptionObject_1801785f8),
           BVar5 != 0)) {
          (*(code *)PTR___DestructExceptionObject_1801785f8)(param_1,1);
        }
        FUN_18012aeb0();
        RtlUnwindEx(param_2,(PVOID)((ulonglong)puVar3[((ulonglong)uVar9 + 1) * 4] + lVar2),param_1,
                    (PVOID)(ulonglong)param_1->ExceptionCode,(PCONTEXT)param_4[5],
                    (PUNWIND_HISTORY_TABLE)param_4[8]);
        FUN_18012aee0();
      }
LAB_18012777f:
    }
}

 for(; (uVar2 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
}
}

 for(; uVar2 >> uVar8 == 0; uVar8 = uVar8 - 1) {
}
}

 for(; uVar2 >> uVar8 == 0; uVar8 = uVar8 - 1) {
}
}

 for(iVar16 = *(int *)(lVar10 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                      0 < iVar16; iVar16 = iVar16 + -1) {
lVar10 = _GetThrowImageBase();
                    local_e8 = (_s_CatchableType *)(lVar10 + *local_f8);
                    iVar9 = TypeMatchHelper<class___FrameHandler3>
                                      ((_s_HandlerType *)&local_68,local_e8,
                                       *(_s_ThrowInfo **)(param_1 + 0x30));
                    if (iVar9 != 0) {
                      in_stack_fffffffffffffed0 = (_s_TryBlockMapEntry *)&local_c0;
                      CatchIt<class___FrameHandler3>
                                (param_1,param_2,local_100,param_4,param_5,
                                 (_s_HandlerType *)&local_68,local_e8,in_stack_fffffffffffffed0,
                                 param_7,local_c8,local_108,param_6);
                      local_88 = local_e0;
                      goto LAB_1801289a8;
                    }
                    local_f8 = local_f8 + 1;
                  }
}

 for(iVar15 = *(int *)(lVar9 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                      0 < iVar15; iVar15 = iVar15 + -1) {
lVar9 = _GetThrowImageBase();
                    iVar1 = *piVar10;
                    uVar11 = FUN_1801296e4((longlong)&local_100,(byte *)(lVar9 + iVar1),
                                           *(byte **)(param_1 + 0x30));
                    if ((int)uVar11 != 0) {
                      CatchIt<class___FrameHandler4>
                                (param_1,param_2,param_3,param_4,param_5,(HandlerType4 *)&local_100,
                                 (_s_CatchableType *)(lVar9 + iVar1),(TryBlockMapEntry4 *)&local_140
                                 ,param_7,local_128,local_168,param_6);
                      goto LAB_180128ecd;
                    }
                    piVar10 = piVar10 + 1;
                  }
}

 for(psVar9 = &DAT_1801d8db0; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
*(short *)*param_4 = *psVar9;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 - 1;
            uVar1 = *param_5;
          }
}

 for(psVar9 = &DAT_1801d8db0; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
*(short *)*param_4 = *psVar9;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 - 1;
            uVar1 = *param_5;
          }
}

 for(; (uVar1 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
*(short *)*param_4 = *psVar12;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 - 1;
              uVar1 = *param_5;
            }
}

 for(psVar9 = &DAT_180179564; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
param_6 = (int32_t **)*param_4;
          *(short *)param_6 = *psVar9;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 - 1;
          uVar1 = *param_5;
        }
}

 for(psVar9 = (short *)param_6[(longlong)(int)param_3[6] + 0x33];
              (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
param_6 = (int32_t **)*param_4;
            *(short *)param_6 = *psVar9;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 - 1;
            uVar1 = *param_5;
          }
}

 for(psVar9 = (short *)param_6[(longlong)(int)param_3[4] + 0x46];
              (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
param_6 = (int32_t **)*param_4;
            *(short *)param_6 = *psVar9;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 - 1;
            uVar1 = *param_5;
          }
}

 for(psVar9 = &DAT_180179554; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
*(short *)*param_4 = *psVar9;
                *param_4 = *param_4 + 2;
                *param_5 = *param_5 - 1;
                uVar1 = *param_5;
              }
}

 for(; (uVar1 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
*(short *)*param_4 = *psVar12;
                  *param_4 = *param_4 + 2;
                  *param_5 = *param_5 - 1;
                  uVar1 = *param_5;
                }
}

 for(psVar9 = &DAT_180178284; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
*(short *)*param_4 = *psVar9;
                *param_4 = *param_4 + 2;
                *param_5 = *param_5 - 1;
                uVar1 = *param_5;
              }
}

 for(; (uVar1 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
*(short *)*param_4 = *psVar12;
                  *param_4 = *param_4 + 2;
                  *param_5 = *param_5 - 1;
                  uVar1 = *param_5;
                }
}

 for(psVar9 = &DAT_180179558; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
param_6 = (int32_t **)*param_4;
        *(short *)param_6 = *psVar9;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 - 1;
        uVar1 = *param_5;
      }
}

 for(psVar9 = (short *)param_6[(longlong)(int)param_3[6] + 0x2c];
            (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
param_6 = (int32_t **)*param_4;
          *(short *)param_6 = *psVar9;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 - 1;
          uVar1 = *param_5;
        }
}

 for(psVar9 = (short *)param_6[(longlong)(int)param_3[4] + 0x3a];
            (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
param_6 = (int32_t **)*param_4;
          *(short *)param_6 = *psVar9;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 - 1;
          uVar1 = *param_5;
        }
}

 for(psVar9 = &DAT_180179550; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
*(short *)*param_4 = *psVar9;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 - 1;
              uVar1 = *param_5;
            }
}

 for(psVar9 = &DAT_180179550; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
*(short *)*param_4 = *psVar9;
                *param_4 = *param_4 + 2;
                *param_5 = *param_5 - 1;
                uVar1 = *param_5;
              }
}

 for(psVar9 = &DAT_180179550; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
*(short *)*param_4 = *psVar9;
                  *param_4 = *param_4 + 2;
                  *param_5 = *param_5 - 1;
                  uVar1 = *param_5;
                }
}

 for(; (uVar1 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
*(short *)*param_4 = *psVar12;
                    *param_4 = *param_4 + 2;
                    *param_5 = *param_5 - 1;
                    uVar1 = *param_5;
                  }
}

 for(psVar9 = &DAT_180179550; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
*(short *)*param_4 = *psVar9;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 - 1;
              uVar1 = *param_5;
            }
}

 for(; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
param_6 = (int32_t **)*param_4;
        *(short *)param_6 = *psVar9;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 - 1;
        uVar1 = *param_5;
      }
}

 for(psVar9 = &DAT_1801d8db0; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
*(short *)*param_4 = *psVar9;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 - 1;
            uVar1 = *param_5;
          }
}

 for(; (uVar1 != 0 && (*psVar12 != 0)); psVar12 = psVar12 + 1) {
*(short *)*param_4 = *psVar12;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 - 1;
              uVar1 = *param_5;
            }
}

 for(psVar9 = &DAT_180179550; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
*(short *)*param_4 = *psVar9;
                *param_4 = *param_4 + 2;
                *param_5 = *param_5 - 1;
                uVar1 = *param_5;
              }
}

 for(psVar9 = &DAT_18017955c; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
param_6 = (int32_t **)*param_4;
        *(short *)param_6 = *psVar9;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 - 1;
        uVar1 = *param_5;
      }
}

 for(; (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
*(short *)*param_4 = *psVar9;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 - 1;
          uVar1 = *param_5;
        }
}

 for(; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
*(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *pcVar4 = ((byte)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
}

 for(; (0 < *(int *)(param_1 + 0x30) || (param_2 != 0)); param_2 = param_2 >> 3) {
*(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *pcVar4 = ((byte)param_2 & 7) + 0x30;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
  }
}

 for(; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
}
}

 for(; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
}
}

 for(; local_784[uVar15 - 1] >> iVar31 == 0; iVar31 = iVar31 + -1) {
}
}

 for(; local_954[iVar31 - 1U] >> iVar9 == 0; iVar9 = iVar9 + -1) {
}
}

 for(; *puVar29 >> iVar9 == 0; iVar9 = iVar9 + -1) {
}
}

 for(; local_954[iVar31 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
}
}

 for(; local_954[uVar21 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
}
}

 for(; uVar26 >> iVar31 == 0; iVar31 = iVar31 + -1) {
}
}

 for(; uVar26 >> iVar31 == 0; iVar31 = iVar31 + -1) {
}
}

 for(; uVar14 >> iVar8 == 0; iVar8 = iVar8 + -1) {
}
}

 for(; (pauVar4 != (int32_t (*) [32])(*param_1 + param_2) && ((*pauVar4)[0] != '\0'));
          pauVar4 = (int32_t (*) [32])(*pauVar4 + 1)) {
}
}

 for(; (pauVar4 != (int32_t (*) [32])(*param_1 + param_2) && ((*pauVar4)[0] != '\0'));
        pauVar4 = (int32_t (*) [32])(*pauVar4 + 1)) {
}
}

 for(pauVar3 = (int32_t (*) [32])(*param_1 + uVar2 * 2);
          pauVar3 !=
          (int32_t (*) [32])(*param_1 + ((param_2 - uVar4 & 0xfffffffffffffff0) + uVar2) * 2);
          pauVar3 = (int32_t (*) [32])(*pauVar3 + 0x10)) {
auVar5._0_2_ = -(ushort)(*(short *)*pauVar3 == 0);
        auVar5._2_2_ = -(ushort)(*(short *)(*pauVar3 + 2) == 0);
        auVar5._4_2_ = -(ushort)(*(short *)(*pauVar3 + 4) == 0);
        auVar5._6_2_ = -(ushort)(*(short *)(*pauVar3 + 6) == 0);
        auVar5._8_2_ = -(ushort)(*(short *)(*pauVar3 + 8) == 0);
        auVar5._10_2_ = -(ushort)(*(short *)(*pauVar3 + 10) == 0);
        auVar5._12_2_ = -(ushort)(*(short *)(*pauVar3 + 0xc) == 0);
        auVar5._14_2_ = -(ushort)(*(short *)(*pauVar3 + 0xe) == 0);
        if ((((((((((((((((auVar5 >> 7 & (int32_t  [16])0x1) != (int32_t  [16])0x0 ||
                         (auVar5 >> 0xf & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                        (auVar5 >> 0x17 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                       (auVar5 >> 0x1f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                      (auVar5 >> 0x27 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                     (auVar5 >> 0x2f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                    (auVar5 >> 0x37 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                   (auVar5 >> 0x3f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                  (auVar5 >> 0x47 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                 (auVar5 >> 0x4f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                (auVar5 >> 0x57 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
               (auVar5 >> 0x5f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
              (auVar5 >> 0x67 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
             (auVar5 >> 0x6f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
            (auVar5._14_2_ >> 7 & 1) != 0) || (auVar5._14_2_ & 0x8000) != 0) break;
      }
}

 for(; (pauVar3 != (int32_t (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0));
        pauVar3 = (int32_t (*) [32])(*pauVar3 + 2)) {
}
}

 for(piVar6 = piVar2; piVar6 != piVar2 + 0x30; piVar6 = piVar6 + 4) {
if (*piVar6 == -0x1f928c9d) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        lVar3 = *(longlong *)(piVar6 + 2);
        if (lVar3 == 0) {
          return 0;
        }
        if (lVar3 == 5) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 1;
        }
        if (lVar3 != 1) {
          uVar4 = *(int32_t *)(p_Var5 + 8);
          *(int32_t *)(p_Var5 + 8) = param_2;
          if (piVar6[1] == 8) {
            for (piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            uVar1 = *(int32_t *)(p_Var5 + 0x10);
            if (*piVar6 == -0x3fffff73) {
              uVar8 = 0x82;
LAB_180136f6a:
              *(int32_t *)(p_Var5 + 0x10) = uVar8;
            }
            else {
              if (*piVar6 == -0x3fffff72) {
                uVar8 = 0x83;
                goto LAB_180136f6a;
              }
              if (*piVar6 == -0x3fffff71) {
                uVar8 = 0x86;
                goto LAB_180136f6a;
              }
              if (*piVar6 == -0x3fffff70) {
                uVar8 = 0x81;
                goto LAB_180136f6a;
              }
              if (*piVar6 == -0x3fffff6f) {
                uVar8 = 0x84;
                goto LAB_180136f6a;
              }
              if (*piVar6 == -0x3fffff6e) {
                uVar8 = 0x8a;
                goto LAB_180136f6a;
              }
              if (*piVar6 == -0x3fffff6d) {
                uVar8 = 0x85;
                goto LAB_180136f6a;
              }
              if (*piVar6 == -0x3ffffd4c) {
                uVar8 = 0x8e;
                goto LAB_180136f6a;
              }
              uVar8 = uVar1;
              if (*piVar6 == -0x3ffffd4b) {
                uVar8 = 0x8d;
                goto LAB_180136f6a;
              }
            }
            (*(code *)PTR__guard_dispatch_icall_180157478)(8,uVar8);
            *(int32_t *)(p_Var5 + 0x10) = uVar1;
          }
          else {
            piVar6[2] = 0;
            piVar6[3] = 0;
            (*(code *)PTR__guard_dispatch_icall_180157478)(piVar6[1]);
          }
          *(int32_t *)(p_Var5 + 8) = uVar4;
        }
        return 0xffffffff;
      }
    }
}

 for(piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
piVar7[2] = 0;
              piVar7[3] = 0;
            }
}

 for(; (LPCWSTR)*puVar4 != (LPCWSTR)0x0; puVar4 = puVar4 + 1) {
iVar1 = FUN_180141208(0,0,(LPCWSTR)*puVar4,-1,(LPSTR)0x0,0,(LPBOOL)0x0,(LPBOOL)0x0);
      if (iVar1 == 0) goto LAB_18013799d;
      pcVar3 = (char *)_calloc_base((longlong)iVar1,1);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)0x0;
LAB_180137a48:
        FUN_18013bf3c(pcVar3);
        goto LAB_18013799d;
      }
      iVar1 = FUN_180141208(0,0,(LPCWSTR)*puVar4,-1,pcVar3,iVar1,(LPBOOL)0x0,(LPBOOL)0x0);
      if (iVar1 == 0) goto LAB_180137a48;
      thunk_FUN_180144050(pcVar3,0);
      FUN_18013bf3c((LPVOID)0x0);
    }
}

 for(; (LPCSTR)*puVar4 != (LPCSTR)0x0; puVar4 = puVar4 + 1) {
iVar1 = FUN_180141178(0,0,(LPCSTR)*puVar4,-1,(LPWSTR)0x0,0);
      if (iVar1 == 0) goto LAB_180137a77;
      pauVar3 = (int32_t (*) [32])_calloc_base((longlong)iVar1,2);
      if (pauVar3 == (int32_t (*) [32])0x0) {
        pauVar3 = (int32_t (*) [32])0x0;
LAB_180137b04:
        FUN_18013bf3c(pauVar3);
        goto LAB_180137a77;
      }
      iVar1 = FUN_180141178(0,0,(LPCSTR)*puVar4,-1,(LPWSTR)pauVar3,iVar1);
      if (iVar1 == 0) goto LAB_180137b04;
      thunk_FUN_1801443a8(pauVar3,0);
      FUN_18013bf3c((LPVOID)0x0);
    }
}

 for(; uVar5 != 0; uVar5 = uVar5 - 1) {
*puVar9 = uVar7;
          puVar9 = puVar9 + 1;
        }
}

 for(; (*pwVar8 == L'+' || ((ushort)(*pwVar8 + L'') < 10)); pwVar8 = pwVar8 + 1) {
}
}

 for(; (0x2f < (ushort)*pwVar8 && ((ushort)*pwVar8 < 0x3a)); pwVar8 = pwVar8 + 1) {
}
}

 for(pbVar8 = pbVar8 + -1;
          ((uVar9 = (uint)uVar10, (&DAT_1801eb670)[*pbVar8] == '\0' && (uVar9 < 5)) &&
          (param_2 <= pbVar8)); pbVar8 = pbVar8 + -1) {
uVar10 = (ulonglong)(uVar9 + 1);
      }
}

 for(pWVar11 = local_48; pWVar11 < local_48 + uVar15;
                            pWVar11 = (LPWSTR)((longlong)pWVar11 + lVar16)) {
WVar12 = *pWVar11;
                          if (WVar12 == L'\x1a') {
                            pbVar2 = (byte *)((&DAT_1801ee410)[local_58] + 0x38 + uVar9 * 0x48);
                            *pbVar2 = *pbVar2 | 2;
                            break;
                          }
                          if (((WVar12 == L'\r') && (pWVar11 + 1 < local_48 + uVar15)) &&
                             (pWVar11[1] == L'\n')) {
                            WVar12 = L'\n';
                            lVar16 = 4;
                          }
                          else {
                            lVar16 = 2;
                          }
                          *pWVar1 = WVar12;
                          pWVar1 = pWVar1 + 1;
                        }
}

 for(; lVar3 != lVar6; lVar3 = lVar3 + 0x10) {
if (*(uint *)(lVar3 + 4) == param_1) goto LAB_180141d84;
    }
}

 for(; lVar6 != lVar9; lVar6 = lVar6 + 0x10) {
*(int32_t *)(lVar6 + 8) = 0;
      }
}

 for(lVar10 = 6; lVar10 != 0; lVar10 = lVar10 + -1) {
*puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
}

 for(; ppcVar9[uVar12] != (char *)0x0; uVar12 = uVar12 + 1) {
ppcVar9[uVar12] = ppcVar9[uVar12 + 1];
        }
}

 for(; ppwVar9[uVar11] != (wchar_t *)0x0; uVar11 = uVar11 + 1) {
ppwVar9[uVar11] = ppwVar9[uVar11 + 1];
        }
}

 for(; *pcVar2 == '0'; pcVar2 = pcVar2 + 1) {
}
}

 for(; *param_2 == '0'; param_2 = param_2 + 1) {
}
}

 for(; *param_2 == '0'; param_2 = param_2 + 1) {
}
}

 for(; 0 < param_3; param_3 = param_3 + -1) {
cVar3 = *pcVar6;
        if (cVar3 == '\0') {
          cVar3 = '0';
        }
        else {
          pcVar6 = pcVar6 + 1;
        }
        *pcVar8 = cVar3;
        pcVar8 = pcVar8 + 1;
      }
}

 for(; *puVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
}
}

 for(; uVar17 >> iVar5 == 0; iVar5 = iVar5 + -1) {
}
}

 for(; *puVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
}
}

 for(; *puVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
}
}

 for(; (uVar3 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
}
}

 for(; (uVar3 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
}
}

 for(; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
}
}

 for(; (uVar7 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
}
}

 for(; uVar28 >> lVar33 == 0; lVar33 = lVar33 + -1) {
}
}

 for(; uVar24 >> lVar33 == 0; lVar33 = lVar33 + -1) {
}
}

 for(; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
}
}

 for(; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
}
}

 for(; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
}
}

 for(; uVar24 >> lVar23 == 0; lVar23 = lVar23 + -1) {
}
}

 for(; uVar14 >> lVar23 == 0; lVar23 = lVar23 + -1) {
}
}

 for(; uVar22 >> lVar23 == 0; lVar23 = lVar23 + -1) {
}
}

 for(; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
}
}

 for(; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
}
}

 for(; param_3 != 0; param_3 = param_3 - 1) {
*(int32_t *)param_1 = *(int32_t *)param_2;
      param_2 = (int32_t *)((longlong)param_2 + 1);
      param_1 = (int32_t *)((longlong)param_1 + 1);
    }
}

 for(; param_3 != 0; param_3 = param_3 - 1) {
(*pauVar2)[0] = param_2;
    pauVar2 = (int32_t (*) [32])(*pauVar2 + 1);
  }
}

 for(; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
}
}

 for(; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
uVar5 = uVar5 + 1;
        }
}

 for(; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
}
}

 for(; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
uVar5 = uVar5 + 1;
      }
}

 for(; (uVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
}
}

 for(; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
uVar4 = uVar4 + 1;
      }
}

 for(; ppcVar9[uVar12] != (char *)0x0; uVar12 = uVar12 + 1) {
ppcVar9[uVar12] = ppcVar9[uVar12 + 1];
        }
}

 for(; ppwVar9[uVar11] != (wchar_t *)0x0; uVar11 = uVar11 + 1) {
ppwVar9[uVar11] = ppwVar9[uVar11 + 1];
        }
}

 for(ppuVar2 = &PTR_FUN_1801576a8; ppuVar2 != (int32_t **)&DAT_1801576b0;
        ppuVar2 = ppuVar2 + 1) {
if (*ppuVar2 != (int32_t *)0x0) {
        (*(code *)PTR__guard_dispatch_icall_180157468)();
      }
    }
}

 for(; ((_MaxCount = _MaxCount - 1, _MaxCount != 0 && (*_Str1 != L'\0')) && (*_Str1 == *_Str2));
      _Str1 = _Str1 + 1) {
_Str2 = _Str2 + 1;
  }
}

 for(plVar1 = &DAT_1801ded00; plVar1 < &DAT_1801ded00; plVar1 = plVar1 + 1) {
if (*plVar1 != 0) {
      (*(code *)PTR__guard_dispatch_icall_180157468)();
    }
  }
}

 for(puVar2 = *(int32_t **)(this + 0x38); puVar2 != (int32_t *)0x0;
      puVar2 = (int32_t *)*puVar2) {
(*(code *)PTR__guard_dispatch_icall_180157468)(0,this,*(int32_t *)(puVar2 + 1));
  }
}

 for(_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
param_1 = (void *)((longlong)param_1 - param_2);
    (*(code *)PTR__guard_dispatch_icall_180157468)(param_1);
  }
}

 for(; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
}
}

 for(; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
}
}

