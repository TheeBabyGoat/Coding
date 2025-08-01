#include "abort.h"
#include <stdint.h>
#include <stddef.h>

void __cdecl abort(void) {
code *pcVar1;
  BOOL BVar2;
  longlong lVar3;
  int32_t *puVar4;
  int32_t auStack_28 [8];
  int32_t auStack_20 [32];
  
  puVar4 = auStack_28;
  lVar3 = __acrt_get_sigabrt_handler();
  if (lVar3 != 0) {
    FUN_180141cb0(0x16);
  }
  if ((DAT_1801eb2c0 & 2) != 0) {
    BVar2 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar2 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(int32_t *)(puVar4 + -8) = 0x1801363ff;
    __acrt_call_reportfault(3,0x40000015,1);
  }
  *(int32_t *)(puVar4 + -8) = 0x180136409;
  FUN_18013725c(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}
}

 abort();
          }
          goto LAB_180123976;
        }
        uVar6 = uVar5 & 0xffffffdd;
        *param_2 = CONCAT44(local_28c,local_290);
        *(uint *)(param_2 + 2) = local_280;
        if ((uVar6 >> 2 & 1) != 0) {
if ((local_280 >> 10 & 1) == 0) {
            *(int32_t *)((longlong)param_2 + 0x14) = 0;
          }
          else {
            BVar1 = GetFileInformationByHandleEx(pvVar4,FileAttributeTagInfo,&local_2a8,8);
            if (BVar1 == 0) {
              GetLastError();
              if ((pvVar4 != (HANDLE)0xffffffffffffffff) &&
                 (BVar1 = CloseHandle(pvVar4), BVar1 == 0)) {
                    
                abort();
              }
              goto LAB_180123976;
            }
            *(int32_t *)((longlong)param_2 + 0x14) = uStack_2a4;
          }
          uVar6 = uVar5 & 0xffffffd9;
        }
}

 abort();
              }
              goto LAB_180123976;
            }
            *(int32_t *)((longlong)param_2 + 0x14) = uStack_2a4;
          }
          uVar6 = uVar5 & 0xffffffd9;
        }
      }
      if ((uVar6 & 0x18) != 0) {
BVar1 = GetFileInformationByHandleEx(pvVar4,FileStandardInfo,local_2a0,0x18);
        if (BVar1 == 0) {
          GetLastError();
          if ((pvVar4 != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(pvVar4), BVar1 == 0)) {
                    
            abort();
          }
          goto LAB_180123976;
        }
        uVar6 = uVar6 & 0xffffffe7;
        param_2[1] = local_298;
        *(int32_t *)(param_2 + 3) = local_290;
      }
}

 abort();
          }
          goto LAB_180123976;
        }
        uVar6 = uVar6 & 0xffffffe7;
        param_2[1] = local_298;
        *(int32_t *)(param_2 + 3) = local_290;
      }
      if (uVar6 != 0) {
if ((pvVar4 == (HANDLE)0xffffffffffffffff) || (BVar1 = CloseHandle(pvVar4), BVar1 != 0))
        goto LAB_180123976;
        goto LAB_1801239b7;
      }
}

 abort();
        }
        goto LAB_180123af2;
      }
LAB_180123b2f:
      local_58 = 0;
    }
    else {
LAB_180123a9c:
      local_58 = 1;
      DStack_54 = 0;
    }
  }
  else {
    if (DStack_54 == 5) {
DStack_54 = __std_fs_open_handle(&local_50,param_1,0x10000,0x2200000);
      if (DStack_54 == 0) goto LAB_180123a76;
    }
}

 abort();
  }
  uVar4 = param_4[1];
  lVar9 = (longlong)*(int *)(param_5 + 0x10);
  iVar10 = -1;
  uVar13 = 0xffffffff;
  uVar7 = uVar3;
  do {
    uVar1 = uVar7 - 1;
    lVar2 = uVar4 + (ulonglong)uVar1 * 0x14;
    if ((*(int *)(lVar2 + 4 + lVar9) < iVar5) && (iVar5 <= *(int *)(lVar2 + 8 + lVar9))) break;
    uVar7 = uVar1;
  } while (uVar1 != 0);
  uVar11 = uVar8;
  if (uVar7 != 0) {
uVar11 = uVar4 + (ulonglong)(uVar7 - 1) * 0x14 + lVar9;
  }
}

 abort();
        }
        if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
abort();
        }
}

 abort();
        }
        iVar7 = *(int *)(param_4 + 0x14);
        puVar2 = (int32_t *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
        FUN_180150fd0(param_2,puVar2,(longlong)iVar7);
        goto LAB_1801280fa;
      }
      if ((*(int32_t **)(param_1 + 0x28) == (int32_t *)0x0) || (param_2 == (longlong *)0x0)) {
abort();
      }
}

 abort();
      }
      FUN_180150fd0(param_2,*(int32_t **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
      uVar6 = uVar4;
      if ((*(int *)(param_4 + 0x14) != 8) || (*param_2 == 0)) goto LAB_1801280fa;
      lVar1 = *param_2;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((lVar1 == 0) || (param_2 == (longlong *)0x0)) {
abort();
      }
}

 abort();
      }
      *param_2 = lVar1;
    }
  }
  else {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_180157468)();
    if ((lVar1 == 0) || (param_2 == (longlong *)0x0)) {
abort();
    }
}

 abort();
        }
        if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
abort();
        }
}

 abort();
        }
        iVar7 = *(int *)(param_4 + 0x14);
        puVar2 = (int32_t *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
        FUN_180150fd0(param_2,puVar2,(longlong)iVar7);
        goto LAB_1801282fd;
      }
      if ((*(int32_t **)(param_1 + 0x28) == (int32_t *)0x0) || (param_2 == (longlong *)0x0)) {
abort();
      }
}

 abort();
      }
      FUN_180150fd0(param_2,*(int32_t **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
      uVar6 = uVar4;
      if ((*(int *)(param_4 + 0x14) != 8) || (*param_2 == 0)) goto LAB_1801282fd;
      lVar1 = *param_2;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((lVar1 == 0) || (param_2 == (longlong *)0x0)) {
abort();
      }
}

 abort();
      }
      *param_2 = lVar1;
    }
  }
  else {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_180157468)();
    if ((lVar1 == 0) || (param_2 == (longlong *)0x0)) {
abort();
    }
}

 abort();
    }
    FUN_180126b5c(&local_60,&local_98,param_6,(ulonglong *)param_4,(longlong)param_5);
    uVar2 = (uint)uStack_58;
    local_88 = local_60;
    uStack_80 = uStack_58;
    if (uVar2 < local_48) {
do {
        lVar3 = (longlong)*(int *)(*local_88 + 0x10) + (ulonglong)uVar2 * 0x14;
        local_78 = *(_s_TryBlockMapEntry (*) [16])(lVar3 + local_60[1]);
        local_68 = *(int *)(lVar3 + 0x10 + local_60[1]);
        if ((local_78._0_4_ <= param_6) && (param_6 <= local_78._4_4_)) {
          p_Var5 = (_s_HandlerType *)
                   (*(longlong *)(param_4 + 8) + -0x14 +
                   (longlong)local_68 + (local_78._8_8_ >> 0x20) * 0x14);
          if (*(int *)(p_Var5 + 4) != 0) {
            iVar1 = *(int *)(p_Var5 + 4);
            lVar3 = _GetImageBase();
            if (lVar3 + iVar1 != 0) {
              if (iVar1 == 0) {
                lVar3 = 0;
              }
              else {
                lVar3 = _GetImageBase();
                lVar3 = lVar3 + *(int *)(p_Var5 + 4);
              }
              if (*(char *)(lVar3 + 0x10) != '\0') goto LAB_18012926b;
            }
          }
          if (((byte)*p_Var5 & 0x40) == 0) {
            CatchIt<class___FrameHandler3>
                      (param_1,param_2,param_3,param_4,param_5,p_Var5,(_s_CatchableType *)0x0,
                       local_78,param_7,param_8,'\x01','\0');
          }
        }
LAB_18012926b:
        uVar2 = uVar2 + 1;
      } while (uVar2 < local_48);
    }
}

 abort();
    }
    FUN_180126c90((int32_t *)&local_e8,(int *)local_78,param_6);
    local_118 = (uint)uStack_e0;
    local_f8 = local_e8;
    uStack_f0 = uStack_e0;
    if (local_118 < local_d0) {
do {
        local_f8 = *(longlong *)(local_e8 + 0x18);
        uStack_f0 = *(int32_t *)(local_e8 + 0x20);
        if ((*(int *)(local_e8 + 0x18) <= param_6) && (param_6 <= *(int *)(local_e8 + 0x1c))) {
          FUN_180129d50(local_c8,(longlong)&local_f8,*(longlong *)(param_4 + 8),
                        **(uint **)(param_4 + 0x10));
          local_c0 = local_b8;
          FUN_18012a350((longlong)local_c8);
          uVar5 = local_c8[0];
          local_c0 = local_b8;
          FUN_18012a350((longlong)local_c8);
          uVar8 = (ulonglong)(uVar5 - 1);
          if (uVar5 - 1 != 0) {
            do {
              FUN_18012a350((longlong)local_c8);
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          if ((local_a8 != 0) && (lVar3 = _GetImageBase(), lVar3 + local_a8 != 0)) {
            if (local_a8 == 0) {
              lVar3 = 0;
            }
            else {
              lVar3 = _GetImageBase();
              lVar3 = lVar3 + local_a8;
            }
            if (*(char *)(lVar3 + 0x10) != '\0') goto LAB_1801294e4;
          }
          if ((local_ac & 0x40) == 0) {
            CatchIt<class___FrameHandler4>
                      (param_1,param_2,param_3,param_4,param_5,local_b0,(_s_CatchableType *)0x0,
                       (TryBlockMapEntry4 *)&local_f8,param_7,param_8,'\x01','\0');
          }
        }
LAB_1801294e4:
        uVar5 = **(byte **)(local_e8 + 8) & 0xf;
        bVar1 = (&DAT_1801784b0)[uVar5];
        pbVar6 = *(byte **)(local_e8 + 8) + -(longlong)(char)(&DAT_1801784a0)[uVar5];
        uVar5 = *(uint *)(pbVar6 + -4);
        *(byte **)(local_e8 + 8) = pbVar6;
        *(uint *)(local_e8 + 0x18) = uVar5 >> (bVar1 & 0x1f);
        bVar1 = (&DAT_1801784b0)[*pbVar6 & 0xf];
        pbVar6 = pbVar6 + -(longlong)(char)(&DAT_1801784a0)[*pbVar6 & 0xf];
        uVar5 = *(uint *)(pbVar6 + -4);
        *(byte **)(local_e8 + 8) = pbVar6;
        *(uint *)(local_e8 + 0x1c) = uVar5 >> (bVar1 & 0x1f);
        pbVar7 = pbVar6 + -(longlong)(char)(&DAT_1801784a0)[*pbVar6 & 0xf];
        *(uint *)(local_e8 + 0x20) =
             *(uint *)(pbVar7 + -4) >> ((&DAT_1801784b0)[*pbVar6 & 0xf] & 0x1f);
        *(byte **)(local_e8 + 8) = pbVar7;
        *(int32_t *)(local_e8 + 0x24) = *(int32_t *)pbVar7;
        local_118 = local_118 + 1;
        *(byte **)(local_e8 + 8) = pbVar7 + 4;
      } while (local_118 < local_d0);
    }
}

 abort();
      }
      if (*(int *)(param_5 + 8) != 0) {
uVar5 = *(byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) & 0xf;
        uVar5 = *(uint *)((byte *)((longlong)*(int *)(param_5 + 8) + *(longlong *)(param_4 + 8)) +
                         (-4 - (longlong)(char)(&DAT_1801784a0)[uVar5])) >>
                ((&DAT_1801784b0)[uVar5] & 0x1f);
      }
}

 abort();
    }
    lVar5 = (longlong)iVar2;
    lVar4 = _GetImageBase();
    iVar2 = *(int *)((longlong)(int)param_3->dispUnwindMap + lVar4 + lVar5 * 8);
    lVar4 = _GetImageBase();
    if (*(int *)((longlong)(int)param_3->dispUnwindMap + 4 + lVar4 + lVar5 * 8) == 0) {
lVar4 = 0;
    }
}

 abort();
    }
    iVar6 = (int)*puVar1 + -2;
  }
  lVar7 = __vcrt_getptd();
  *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
  puVar10 = param_2 + 1;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  if (*(int *)(param_3 + 8) == 0) {
local_78[0] = 0;
  }
}

 abort();
  }
  uVar8 = 0;
  iVar5 = 0;
  if (0 < *param_2) {
do {
      lVar3 = _GetThrowImageBase();
      piVar6 = (int *)((longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xc) + 4 + lVar3);
      lVar3 = _GetThrowImageBase();
      iVar7 = *(int *)(lVar3 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
      if (0 < iVar7) {
        do {
          lVar3 = _GetThrowImageBase();
          p_Var1 = *(_s_ThrowInfo **)(param_1 + 0x30);
          iVar2 = *piVar6;
          lVar4 = _GetImageBase();
          iVar2 = TypeMatchHelper<class___FrameHandler3>
                            ((_s_HandlerType *)
                             ((longlong)param_2[1] + lVar4 + (longlong)iVar5 * 0x14),
                             (_s_CatchableType *)(lVar3 + iVar2),p_Var1);
          if (iVar2 != 0) {
            uVar8 = 1;
            break;
          }
          iVar7 = iVar7 + -1;
          piVar6 = piVar6 + 1;
        } while (0 < iVar7);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *param_2);
  }
}

 abort();
    }
  }
  pvVar3 = FindFirstFileExW(param_1,FindExInfoBasic,param_3,FindExSearchNameMatch,(LPVOID)0x0,0);
  *param_2 = (longlong)pvVar3;
  if (pvVar3 == (HANDLE)0xffffffffffffffff) {
DVar2 = GetLastError();
  }
}

