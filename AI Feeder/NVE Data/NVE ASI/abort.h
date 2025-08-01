#ifndef ABORT_H
#define ABORT_H

void __cdecl abort(void);
 abort();
          }
          goto LAB_180123976;
        }
        uVar6 = uVar5 & 0xffffffdd;
        *param_2 = CONCAT44(local_28c,local_290);
        *(uint *)(param_2 + 2) = local_280;
        if ((uVar6 >> 2 & 1) != 0);
 abort();
              }
              goto LAB_180123976;
            }
            *(int32_t *)((longlong)param_2 + 0x14) = uStack_2a4;
          }
          uVar6 = uVar5 & 0xffffffd9;
        }
      }
      if ((uVar6 & 0x18) != 0);
 abort();
          }
          goto LAB_180123976;
        }
        uVar6 = uVar6 & 0xffffffe7;
        param_2[1] = local_298;
        *(int32_t *)(param_2 + 3) = local_290;
      }
      if (uVar6 != 0);
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
    if (DStack_54 == 5);
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
  if (uVar7 != 0);
 abort();
        }
        if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0));
 abort();
        }
        iVar7 = *(int *)(param_4 + 0x14);
        puVar2 = (int32_t *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
        FUN_180150fd0(param_2,puVar2,(longlong)iVar7);
        goto LAB_1801280fa;
      }
      if ((*(int32_t **)(param_1 + 0x28) == (int32_t *)0x0) || (param_2 == (longlong *)0x0));
 abort();
      }
      FUN_180150fd0(param_2,*(int32_t **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
      uVar6 = uVar4;
      if ((*(int *)(param_4 + 0x14) != 8) || (*param_2 == 0)) goto LAB_1801280fa;
      lVar1 = *param_2;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((lVar1 == 0) || (param_2 == (longlong *)0x0));
 abort();
      }
      *param_2 = lVar1;
    }
  }
  else {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_180157468)();
    if ((lVar1 == 0) || (param_2 == (longlong *)0x0));
 abort();
        }
        if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0));
 abort();
        }
        iVar7 = *(int *)(param_4 + 0x14);
        puVar2 = (int32_t *)__AdjustPointer(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
        FUN_180150fd0(param_2,puVar2,(longlong)iVar7);
        goto LAB_1801282fd;
      }
      if ((*(int32_t **)(param_1 + 0x28) == (int32_t *)0x0) || (param_2 == (longlong *)0x0));
 abort();
      }
      FUN_180150fd0(param_2,*(int32_t **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
      uVar6 = uVar4;
      if ((*(int *)(param_4 + 0x14) != 8) || (*param_2 == 0)) goto LAB_1801282fd;
      lVar1 = *param_2;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((lVar1 == 0) || (param_2 == (longlong *)0x0));
 abort();
      }
      *param_2 = lVar1;
    }
  }
  else {
    lVar1 = (*(code *)PTR__guard_dispatch_icall_180157468)();
    if ((lVar1 == 0) || (param_2 == (longlong *)0x0));
 abort();
    }
    FUN_180126b5c(&local_60,&local_98,param_6,(ulonglong *)param_4,(longlong)param_5);
    uVar2 = (uint)uStack_58;
    local_88 = local_60;
    uStack_80 = uStack_58;
    if (uVar2 < local_48);
 abort();
    }
    FUN_180126c90((int32_t *)&local_e8,(int *)local_78,param_6);
    local_118 = (uint)uStack_e0;
    local_f8 = local_e8;
    uStack_f0 = uStack_e0;
    if (local_118 < local_d0);
 abort();
      }
      if (*(int *)(param_5 + 8) != 0);
 abort();
    }
    lVar5 = (longlong)iVar2;
    lVar4 = _GetImageBase();
    iVar2 = *(int *)((longlong)(int)param_3->dispUnwindMap + lVar4 + lVar5 * 8);
    lVar4 = _GetImageBase();
    if (*(int *)((longlong)(int)param_3->dispUnwindMap + 4 + lVar4 + lVar5 * 8) == 0);
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
  if (*(int *)(param_3 + 8) == 0);
 abort();
  }
  uVar8 = 0;
  iVar5 = 0;
  if (0 < *param_2);
 abort();
    }
  }
  pvVar3 = FindFirstFileExW(param_1,FindExInfoBasic,param_3,FindExSearchNameMatch,(LPVOID)0x0,0);
  *param_2 = (longlong)pvVar3;
  if (pvVar3 == (HANDLE)0xffffffffffffffff);

#endif
