#include "_invoke.h"
#include <stdint.h>
#include <stddef.h>

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    DAT_1801eb618 = DAT_1801eb618 + local_res8[0] * 1000;
    iVar6 = DAT_1801eb604;
    iVar3 = DAT_1801eb600;
    iVar5 = DAT_1801eb608;
    DAT_1801eb610 = param_3;
    if (DAT_1801eb618 < 0) {
DAT_1801eb618 = DAT_1801eb618 + 86400000;
      DAT_1801eb614 = DAT_1801eb614 + -1;
    }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        *(int32_t **)(lVar9 + 0x28 + param_1) = puVar10 + 1;
        if ((local_308 != L'C') || (psVar15 = psVar14, local_306 != 0)) {
psVar15 = __acrt_copy_locale_name((int32_t (*) [32])local_1f8);
        }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_res10[0] == 0) {
LAB_18013b63d:
    bVar1 = false;
  }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if (param_4 != '\0') {
*_Dst = 'E';
    }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = (uint)(param_8 >> 4);
      _Var6 = -(uint)((param_8 & 0x20) != 0) & param_9;
      if (param_6 != 0x41) {
if (param_6 == 0x45) {
LAB_1801405f1:
          uVar3 = FUN_18013fc28(param_1,*param_2,param_3,param_4,param_5,param_7,bVar7,uVar5 & 1 | 2
                                ,_Var6,param_10);
          return uVar3;
        }
        if (param_6 == 0x46) {
LAB_1801405c0:
          uVar3 = FUN_18013ff08(param_1,(int32_t *)param_2,param_3,param_4,param_5,param_7,_Var6,
                                param_10);
          return uVar3;
        }
        if (param_6 != 0x47) {
          if (param_6 == 0x61) goto LAB_18014062b;
          if (param_6 == 0x65) goto LAB_1801405f1;
          if (param_6 == 0x66) goto LAB_1801405c0;
        }
        uVar3 = FUN_180140138(param_1,(int32_t *)param_2,param_3,param_4,param_5,param_7,bVar7,
                              uVar5 & 1 | 2,_Var6,param_10);
        return uVar3;
      }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(local_res10 + (longlong)plVar12) = pcVar10;
          pcVar10 = pcVar10 + lVar13;
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar8);
      }
      *param_2 = pvVar6;
      FUN_18013bf3c((LPVOID)0x0);
      for (plVar12 = plVar9; plVar12 != plVar8; plVar12 = plVar12 + 1) {
FUN_18013bf3c((LPVOID)*plVar12);
      }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (param_4[1] == param_4[2]) {
if (*param_4 == 0) {
      pvVar3 = _calloc_base(4,8);
      *param_4 = (longlong)pvVar3;
      FUN_18013bf3c((LPVOID)0x0);
      lVar4 = *param_4;
      if (lVar4 != 0) {
        param_4[1] = lVar4;
        param_4[2] = lVar4 + 0x20;
        goto LAB_180142e16;
      }
    }
    else {
      uVar6 = param_4[2] - *param_4 >> 3;
      if (uVar6 < 0x8000000000000000) {
        pvVar3 = _recalloc_base((LPVOID)*param_4,uVar6 * 2,8);
        if (pvVar3 != (LPVOID)0x0) {
          *param_4 = (longlong)pvVar3;
          param_4[1] = (longlong)((longlong)pvVar3 + uVar6 * 8);
          param_4[2] = (longlong)((longlong)pvVar3 + uVar6 * 0x10);
          FUN_18013bf3c((LPVOID)0x0);
          goto LAB_180142e16;
        }
        FUN_18013bf3c((LPVOID)0x0);
      }
    }
    uVar7 = 0xc;
    FUN_18013bf3c(pcVar2);
  }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        pcVar6[(longlong)_Dst - (longlong)param_1] = '\0';
        pWVar10 = FUN_18014b74c(_Dst,(LPCSTR)(-(ulonglong)(cVar2 != '\0') &
                                             (ulonglong)
                                             (pcVar6 + ((longlong)_Dst - (longlong)param_1) + 1)));
        if ((int)pWVar10 != 0) {
FUN_18013bf3c(_Dst);
          goto LAB_180144358;
        }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        _Dst[uVar13] = L'\0';
        BVar5 = SetEnvironmentVariableW
                          (_Dst,(LPCWSTR)(-(ulonglong)(uVar2 != 0) & (ulonglong)(_Dst + uVar13 + 1))
                          );
        if (BVar5 != 0) {
FUN_18013bf3c(_Dst);
          goto LAB_1801446b7;
        }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar7 = FUN_18013a930((ushort *)p_Var1,0x1001,(LPWSTR)param_3,0x40);
    if (iVar7 != 0) {
p_Var2 = param_3 + 0x80;
      iVar7 = FUN_18013a930((ushort *)p_Var1,0x1002,(LPWSTR)p_Var2,0x40);
      if ((iVar7 != 0) &&
         (((puVar9 = FUN_18014d4e8((ushort *)p_Var2,0x5f), puVar9 == (ushort *)0x0 &&
           (puVar9 = FUN_18014d4e8((ushort *)p_Var2,0x2e), puVar9 == (ushort *)0x0)) ||
          (iVar7 = FUN_18013a930((ushort *)p_Var1,7,(LPWSTR)p_Var2,0x40), iVar7 != 0)))) {
        if (_Val != 0xfde9) {
          _itow_s(_Val,(wchar_t *)(param_3 + 0x100),0x10,10);
          return 1;
        }
        uVar6 = FUN_180145f04((short *)(param_3 + 0x100),0x10,0x18017cea8,5);
        if (uVar6 == 0) {
          return 1;
        }
        goto LAB_180146a71;
      }
    }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        return (int)uVar4 + 1;
      }
      iVar1 = iVar2 + -1;
      if (-1 < iVar5) {
iVar1 = iVar7;
      }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    if ((local_res8[0] & 0x74000) == 0) {
param_3 = param_3 | 0x4000;
    }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (local_res10[0] == 0x8000) goto LAB_180148ab7;
    }
    *param_1 = *param_1 | 0x80;
  }
LAB_180148ab7:
  if (((param_2 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_1801ee8d0 & param_4))) {
param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_18014a59f:
  if (local_7b0 != '\0') {
FUN_18014c230((uint *)local_7b8);
  }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(char **)(lStackX_10 + (longlong)plVar12) = pcVar10;
          pcVar10 = pcVar10 + lVar13;
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar8);
      }
      *param_2 = pvVar6;
      FUN_18013bf3c((LPVOID)0x0);
      for (plVar12 = plVar9; plVar12 != plVar8; plVar12 = plVar12 + 1) {
FUN_18013bf3c((LPVOID)*plVar12);
      }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        pcVar6[(longlong)_Dst - (longlong)param_1] = '\0';
        pWVar10 = FUN_18014b74c(_Dst,(LPCSTR)(-(ulonglong)(cVar2 != '\0') &
                                             (ulonglong)
                                             (pcVar6 + ((longlong)_Dst - (longlong)param_1) + 1)));
        if ((int)pWVar10 != 0) {
FUN_18013bf3c(_Dst);
          goto LAB_180144358;
        }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        _Dst[uVar13] = L'\0';
        BVar5 = SetEnvironmentVariableW
                          (_Dst,(LPCWSTR)(-(ulonglong)(uVar2 != 0) & (ulonglong)(_Dst + uVar13 + 1))
                          );
        if (BVar5 != 0) {
FUN_18013bf3c(_Dst);
          goto LAB_1801446b7;
        }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      goto LAB_1801395cb;
    }
LAB_1801393ba:
    iVar9 = FUN_18013ab50((ushort *)param_1);
    if (iVar9 != 0) {
local_278 = local_278 & 0xffffffff00000000;
      iVar9 = FUN_18013a930((ushort *)param_1,0x20001004,(LPWSTR)&local_278,2);
      if ((iVar9 == 0) || (uVar13 = (uint)local_278, (uint)local_278 == 0)) {
        uVar13 = 0xfde9;
      }
      *(uint *)p_Var11 = uVar13 & 0xffff;
      _Var17 = uVar21 + 2;
      uVar8 = FUN_180145f04((short *)_Src,0x83,(longlong)param_1,_Var17);
      pwVar14 = param_1;
      if (uVar8 != 0) goto LAB_18013960c;
LAB_180139584:
      _expandlocale_locale_name_cache::commit_locale_name
                ((_expandlocale_locale_name_cache *)&local_260,pwVar14,_Var17);
      cVar6 = local_248;
      goto LAB_180139593;
    }
}

void __cdecl _invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5) {
code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  int32_t *puVar3;
  int32_t auStack_28 [8];
  int32_t auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  *(int32_t *)(puVar3 + -8) = 0x18012b812;
  __acrt_call_reportfault(2,0xc0000417,1);
  *(int32_t *)(puVar3 + -8) = 0x18012b818;
  hProcess = GetCurrentProcess();
                    
                    
  TerminateProcess(hProcess,0xc0000417);
  return;
}
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      psVar10 = (short *)*puVar13;
      lVar11 = puVar13[4] - (longlong)psVar10;
      do {
        sVar2 = *psVar10;
        sVar3 = *(short *)((longlong)psVar10 + lVar11);
        if (sVar2 != sVar3) break;
        psVar10 = psVar10 + 1;
      } while (sVar3 != 0);
      bVar5 = false;
      if (sVar2 == sVar3) {
bVar5 = bVar6;
      }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (0x105 < sVar11 * 2) {
__report_rangecheckfailure();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
}

 _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_180141a51;
    }
    DVar3 = GetLastError();
    if (DVar3 != 0x7a) goto LAB_180141a51;
    iVar1 = FUN_180141744(param_1,param_3,param_4,0,0);
    if (iVar1 == 0) goto LAB_180141a51;
    pWVar5 = (LPWSTR)_calloc_base((longlong)iVar1,1);
    if (pWVar5 != (LPWSTR)0x0) {
iVar1 = FUN_180141744(param_1,param_3,param_4,(ulonglong)pWVar5,iVar1);
      goto LAB_1801419bf;
    }
}

