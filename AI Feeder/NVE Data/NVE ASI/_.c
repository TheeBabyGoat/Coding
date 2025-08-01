#include "_.h"
#include <stdint.h>
#include <stddef.h>

 __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
thunk_FUN_18012d5e8(param_1);
  }
}

 __std_exception_copy((longlong *)&local_a8,(longlong *)(param_1 + 1));
  *param_1 = (int32_t **)std::runtime_error::vftable;
  if ((int32_t ***)0xf < ppuStack_60) {
pppppuVar6 = (int32_t *****)local_78;
    if ((0xfff < (longlong)ppuStack_60 + 1U) &&
       (pppppuVar6 = (int32_t *****)local_78[-1],
       0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pppppuVar6)))) {
      FUN_18012b7b4();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    thunk_FUN_18012d5e8(pppppuVar6);
  }
}

 __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
thunk_FUN_18012d5e8(param_1);
  }
}

 __std_exception_destroy(param_1 + 5);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
thunk_FUN_18012d5e8(param_1);
  }
}

 __std_exception_copy((longlong *)&local_d0,(longlong *)(param_1 + 5));
    param_1[4] = (int32_t **)std::runtime_error::vftable;
    *param_1 = (int32_t **)&PTR_FUN_1801d7d70;
    param_1[7] = ppuVar1;
    if (local_78 < 0x10) {
LAB_1800f7de8:
      FUN_1801252c0(local_30 ^ (ulonglong)auStackY_118);
      return;
    }
}

 __std_exception_destroy(param_1 + 5);
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
thunk_FUN_18012d5e8(param_1);
  }
}

 __except_validate_context_record(param_3);
  lVar2 = param_4[1];
  puVar3 = (uint *)param_4[7];
  uVar11 = *param_4 - lVar2;
  uVar9 = *(uint *)(param_4 + 9);
  local_38 = param_1;
  local_30 = param_3;
  if ((param_1->ExceptionFlags & 0x66) == 0) {
for (; uVar9 < *puVar3; uVar9 = uVar9 + 1) {
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
}

 __vcrt_FlsSetValue(DAT_1801eb0f0,(LPVOID)0x0);
    if ((puVar1 != (int32_t *)0x0) && (puVar1 != &DAT_1801edc80)) {
FUN_18012d5e8(puVar1);
    }
}

 __DestructExceptionObject((int *)param_1);
            FUN_180129ef4(&local_140);
            FUN_1801279a8(&local_140,&DAT_1801e8d58);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FUN_180136dec();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    FUN_180129dd4(local_d8,(longlong)param_5,*(longlong *)(param_4 + 8));
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x18) == 4)) &&
       (*(int *)(param_1 + 0x20) + 0xe66cfae0U < 3)) {
if (local_d8[0] != 0) {
        FUN_180126c90((int32_t *)&local_120,(int *)local_d8,iVar8);
        local_160 = (uint)uStack_118;
        local_140 = local_120;
        uStack_138 = uStack_118;
        if (local_160 < local_108) {
          do {
            local_140 = *(longlong *)(local_120 + 0x18);
            uStack_138 = *(int32_t *)(local_120 + 0x20);
            if ((*(int *)(local_120 + 0x18) <= iVar8) && (iVar8 <= *(int *)(local_120 + 0x1c))) {
              FUN_180129d50(local_a8,(longlong)&local_140,*(longlong *)(param_4 + 8),
                            **(uint **)(param_4 + 0x10));
              uVar12 = local_a8[0];
              local_164 = 0;
              if (local_a8[0] != 0) {
                do {
                  local_100 = local_90;
                  uStack_f8 = uStack_88;
                  local_e0 = local_70;
                  local_f0 = local_80;
                  uStack_e8 = uStack_78;
                  lVar9 = _GetThrowImageBase();
                  piVar10 = (int *)(lVar9 + 4 +
                                   (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
                  lVar9 = _GetThrowImageBase();
                  for (iVar15 = *(int *)(lVar9 + *(int *)(*(longlong *)(param_1 + 0x30) + 0xc));
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
                  FUN_18012a350((longlong)local_a8);
                  local_164 = local_164 + 1;
                } while (local_164 != uVar12);
              }
            }
LAB_180128ecd:
            uVar12 = **(byte **)(local_120 + 8) & 0xf;
            bVar7 = (&DAT_1801784b0)[uVar12];
            pbVar13 = *(byte **)(local_120 + 8) + -(longlong)(char)(&DAT_1801784a0)[uVar12];
            uVar12 = *(uint *)(pbVar13 + -4);
            *(byte **)(local_120 + 8) = pbVar13;
            *(uint *)(local_120 + 0x18) = uVar12 >> (bVar7 & 0x1f);
            bVar7 = (&DAT_1801784b0)[*pbVar13 & 0xf];
            pbVar13 = pbVar13 + -(longlong)(char)(&DAT_1801784a0)[*pbVar13 & 0xf];
            uVar12 = *(uint *)(pbVar13 + -4);
            *(byte **)(local_120 + 8) = pbVar13;
            *(uint *)(local_120 + 0x1c) = uVar12 >> (bVar7 & 0x1f);
            pbVar14 = pbVar13 + -(longlong)(char)(&DAT_1801784a0)[*pbVar13 & 0xf];
            *(uint *)(local_120 + 0x20) =
                 *(uint *)(pbVar14 + -4) >> ((&DAT_1801784b0)[*pbVar13 & 0xf] & 0x1f);
            local_160 = local_160 + 1;
            *(byte **)(local_120 + 8) = pbVar14;
            uVar2 = *(int32_t *)pbVar14;
            *(byte **)(local_120 + 8) = pbVar14 + 4;
            *(int32_t *)(local_120 + 0x24) = uVar2;
          } while (local_160 < local_108);
        }
      }
      if ((((byte)*param_5 & 0x40) != 0) &&
         (bVar7 = FUN_1801269c8(param_4,(byte *)param_5), bVar7 == 0)) {
        lVar9 = __vcrt_getptd();
        *(EHExceptionRecord **)(lVar9 + 0x20) = param_1;
        lVar9 = __vcrt_getptd();
        *(_CONTEXT **)(lVar9 + 0x28) = param_3;
        FUN_180136dec();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
}

 __except_validate_context_record((longlong)param_3);
  lVar2 = __vcrt_getptd();
  if ((*(int *)(lVar2 + 0x40) == 0) && (*(int *)param_1 != -0x1f928c9d)) {
if (*(int *)param_1 == -0x7fffffd7) {
      if (*(int *)(param_1 + 0x18) == 0xf) {
        if (*(longlong *)(param_1 + 0x60) == 0x19930520) goto LAB_1801298b2;
        goto LAB_180129896;
      }
    }
    else {
LAB_180129896:
      if (*(int *)param_1 == -0x7fffffda) goto LAB_1801298b2;
    }
    if ((0x19930521 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       ((param_5->EHFlags & 1) != 0)) {
      return 1;
    }
  }
}

 __except_validate_context_record((longlong)param_3);
  lVar2 = __vcrt_getptd();
  uVar5 = 0;
  if ((*(int *)(lVar2 + 0x40) == 0) && (*(int *)param_1 != -0x1f928c9d)) {
if (*(int *)param_1 == -0x7fffffd7) {
      if (*(int *)(param_1 + 0x18) == 0xf) {
        if (*(longlong *)(param_1 + 0x60) == 0x19930520) goto LAB_180129ae2;
        goto LAB_180129ad4;
      }
    }
    else {
LAB_180129ad4:
      if (*(int *)param_1 == -0x7fffffda) goto LAB_180129ae2;
    }
    if (((byte)*param_5 & 0x20) != 0) {
      return 1;
    }
  }
}

 __tzset();
      local_res18[0] = 0;
      local_res20[0] = 0;
      local_res8[0] = 0;
      eVar3 = FID_conflict__get_daylight(local_res18);
      if ((eVar3 == 0) &&
         ((eVar3 = _get_dstbias(local_res20), eVar3 == 0 &&
          (eVar3 = FID_conflict__get_daylight(local_res8), eVar3 == 0)))) {
if (*param_2 - 0x3f481U < 0x7935041fe) {
          local_28[0] = *param_2 - (longlong)local_res8[0];
          iVar4 = common_gmtime_s<__int64>(param_1,local_28);
          if (iVar4 != 0) {
            return iVar4;
          }
          if ((local_res18[0] != 0) && (iVar4 = _isindst(param_1), iVar4 != 0)) {
            local_28[0] = local_28[0] - local_res20[0];
            iVar4 = common_gmtime_s<__int64>(param_1,local_28);
            if (iVar4 != 0) {
              return iVar4;
            }
            param_1->tm_isdst = 1;
          }
        }
        else {
          iVar4 = common_gmtime_s<__int64>(param_1,param_2);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = param_1->tm_sec;
          if ((local_res18[0] != 0) && (iVar5 = _isindst(param_1), iVar5 != 0)) {
            local_res8[0] = local_res8[0] + local_res20[0];
            param_1->tm_isdst = 1;
          }
          lVar8 = (longlong)iVar4 - (longlong)local_res8[0];
          lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar8),8) + lVar8;
          iVar4 = (int)lVar8 + ((int)(lVar7 >> 5) - (int)(lVar7 >> 0x3f)) * -0x3c;
          param_1->tm_sec = iVar4;
          if (iVar4 < 0) {
            lVar8 = lVar8 + -0x3c;
            param_1->tm_sec = iVar4 + 0x3c;
          }
          lVar8 = lVar8 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar8),8);
          lVar8 = ((lVar8 >> 5) - (lVar8 >> 0x3f)) + (longlong)param_1->tm_min;
          lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar8),8) + lVar8;
          iVar4 = (int)lVar8 + ((int)(lVar7 >> 5) - (int)(lVar7 >> 0x3f)) * -0x3c;
          param_1->tm_min = iVar4;
          if (iVar4 < 0) {
            lVar8 = lVar8 + -0x3c;
            param_1->tm_min = iVar4 + 0x3c;
          }
          lVar8 = lVar8 + SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar8),8);
          lVar8 = ((lVar8 >> 5) - (lVar8 >> 0x3f)) + (longlong)param_1->tm_hour;
          iVar4 = (int)lVar8 + (int)(lVar8 / 0x18) * -0x18;
          param_1->tm_hour = iVar4;
          if (iVar4 < 0) {
            lVar8 = lVar8 + -0x18;
            param_1->tm_hour = iVar4 + 0x18;
          }
          lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
          lVar8 = (lVar8 >> 2) - (lVar8 >> 0x3f);
          iVar4 = (int)lVar8;
          if (lVar8 < 1) {
            if (lVar8 < 0) {
              iVar5 = param_1->tm_mday + iVar4;
              param_1->tm_mday = iVar5;
              param_1->tm_wday = (param_1->tm_wday + 7 + iVar4) % 7;
              iVar4 = param_1->tm_yday + iVar4;
              if (iVar5 < 1) {
                param_1->tm_year = param_1->tm_year + -1;
                param_1->tm_mday = iVar5 + 0x1f;
                param_1->tm_yday = iVar4 + 0x16d;
                param_1->tm_mon = 0xb;
              }
              else {
                param_1->tm_yday = iVar4;
              }
            }
          }
          else {
            param_1->tm_mday = param_1->tm_mday + iVar4;
            param_1->tm_yday = param_1->tm_yday + iVar4;
            param_1->tm_wday = (param_1->tm_wday + iVar4) % 7;
          }
        }
        return 0;
      }
}

 __tzset();
      param_6 = (int32_t **)FUN_18013afe8();
      uVar1 = *param_5;
      for (psVar9 = *(short **)((ulonglong)(-(uint)(param_3[8] != 0) & 8) + (longlong)param_6);
          (uVar1 != 0 && (*psVar9 != 0)); psVar9 = psVar9 + 1) {
param_6 = (int32_t **)*param_4;
        *(short *)param_6 = *psVar9;
        *param_4 = *param_4 + 2;
        *param_5 = *param_5 - 1;
        uVar1 = *param_5;
      }
}

 __acrt_lock(*param_2);
  plVar1 = DAT_1801edd90 + DAT_1801edd88;
  for (plVar3 = DAT_1801edd90; local_40 = plVar3, plVar3 != plVar1; plVar3 = plVar3 + 1) {
local_58 = *plVar3;
    if ((local_58 != 0) && (uVar2 = *(uint *)(local_58 + 0x14), (uVar2 >> 0xd & 1) != 0)) {
      if (((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
        local_20 = param_3[2];
        local_28 = param_3[1];
        local_30 = *param_3;
        local_38 = &local_58;
        local_50 = local_58;
        local_48 = local_58;
        FUN_18012d6b8(local_res10,&local_48,&local_38,&local_50);
      }
      else {
        *(int *)*param_3 = *(int *)*param_3 + 1;
      }
    }
  }
}

 __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      if (*param_2 == param_2[1]) {
if ((int)param_2[2] != 0) {
          return 0xffffffff;
        }
        *param_2 = *param_2 + 1;
      }
}

 __acrt_stdio_free_buffer_nolock((int32_t *)param_1);
      uVar1 = FUN_18013c524((longlong)param_1);
      uVar3 = FUN_18013ee04(uVar1,param_2);
      if ((int)uVar3 < 0) {
uVar2 = 0xffffffff;
      }
}

 __acrt_initialize_multibyte();
    pCVar2 = FUN_180143ea4();
    if (pCVar2 == (LPSTR)0x0) {
FUN_18013bf3c((LPVOID)0x0);
      uVar3 = 0xffffffff;
    }
}

 __acrt_lowio_lock_fh(*param_2);
  uVar1 = *(uint *)*param_3;
  if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) != 0) {
hFile = (HANDLE)FUN_180147f04(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    uVar5 = 0;
    if (BVar2 != 0) goto LAB_18013c47b;
    DVar3 = GetLastError();
    puVar4 = __doserrno();
    *puVar4 = DVar3;
  }
}

 __acrt_lowio_lock_fh(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
*(int32_t *)(param_4 + 6) = 1;
          *(int32_t *)((longlong)param_4 + 0x2c) = 9;
          *(int32_t *)(param_4 + 7) = 1;
          *(int32_t *)((longlong)param_4 + 0x34) = 0;
        }
}

 __acrt_lowio_lock_fh(param_1);
        lVar2 = -1;
        if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
*(int32_t *)(param_4 + 6) = 1;
          *(int32_t *)((longlong)param_4 + 0x2c) = 9;
          *(int32_t *)(param_4 + 7) = 1;
          *(int32_t *)((longlong)param_4 + 0x34) = 0;
        }
}

 __acrt_stdio_allocate_buffer_nolock(param_2);
      }
      bVar1 = FUN_18013dd78(param_1,param_2,param_3);
      if (bVar1) {
return (ulonglong)param_1;
      }
}

 __acrt_lowio_lock_fh(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
puVar3 = __doserrno();
          *puVar3 = 9;
          puVar3 = __doserrno();
          *puVar3 = 0;
        }
}

 __acrt_stdio_allocate_buffer_nolock(param_1);
      }
      pWVar2 = (LPWSTR)param_1[1];
      uVar5 = *(uint *)(param_1 + 4);
      *param_1 = pWVar2;
      uVar3 = FUN_18013c524((longlong)param_1);
      iVar4 = FUN_18013e594(uVar3,pWVar2,uVar5);
      *(int *)(param_1 + 2) = iVar4;
      if (1 < iVar4 + 1U) {
if ((*(uint *)((longlong)param_1 + 0x14) & 6) == 0) {
          iVar4 = FUN_18013c524((longlong)param_1);
          if ((iVar4 == -1) || (iVar4 = FUN_18013c524((longlong)param_1), iVar4 == -2)) {
            puVar7 = &DAT_1801eb620;
          }
          else {
            iVar4 = FUN_18013c524((longlong)param_1);
            uVar5 = FUN_18013c524((longlong)param_1);
            puVar7 = (int32_t *)
                     ((ulonglong)(uVar5 & 0x3f) * 0x48 + (&DAT_1801ee410)[(longlong)iVar4 >> 6]);
          }
          if ((puVar7[0x38] & 0x82) == 0x82) {
            LOCK();
            *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x20;
            UNLOCK();
          }
        }
        if (((*(int *)(param_1 + 4) == 0x200) &&
            ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) &&
           ((*(uint *)((longlong)param_1 + 0x14) >> 8 & 1) == 0)) {
          *(int32_t *)(param_1 + 4) = 0x1000;
        }
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
        bVar1 = *(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
        return (ulonglong)bVar1;
      }
}

 __acrt_lock(8);
  for (iVar3 = 3; iVar3 != DAT_1801edd88; iVar3 = iVar3 + 1) {
lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_1801edd90 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (uVar2 = FUN_18012f050(*(int **)(DAT_1801edd90 + lVar4 * 8)), (int)uVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_1801edd90 + lVar4 * 8) + 0x30));
      FUN_18013bf3c(*(LPVOID *)(DAT_1801edd90 + lVar4 * 8));
      *(int32_t *)(DAT_1801edd90 + lVar4 * 8) = 0;
    }
  }
}

 __acrt_lowio_lock_fh(*param_2);
  uVar1 = *(uint *)*param_3;
  lVar2 = param_3[1];
  if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) == 0) {
*(int32_t *)(lVar2 + 0x30) = 1;
    *(int32_t *)(lVar2 + 0x2c) = 9;
    uVar3 = 0xffffffff;
  }
}

 __acrt_lock(8);
  plVar2 = FUN_18013f0a4(local_res8);
  puVar1 = (int32_t *)*plVar2;
  *param_1 = puVar1;
  if (puVar1 != (int32_t *)0x0) {
*(int32_t *)(puVar1 + 2) = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(int32_t *)(puVar1 + 3) = 0xffffffff;
  }
}

 __acrt_lock(3);
  }
  uVar10 = *puVar11;
  if (bVar2) {
bVar8 = (byte)DAT_1801eb080 & 0x3f;
    uVar10 = (uVar10 ^ DAT_1801eb080) >> bVar8 | (uVar10 ^ DAT_1801eb080) << 0x40 - bVar8;
  }
}

 __acrt_unlock(3);
    }
    FUN_18013725c(3);
    pcVar1 = (code *)swi(3);
    uVar7 = (*pcVar1)();
    return uVar7;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
lVar3 = *(longlong *)(p_Var12 + 8);
    *(longlong *)(p_Var12 + 8) = 0;
    if (param_1 == 8) {
      p_Var5 = FUN_1801387d8();
      local_res10 = *(int32_t *)(p_Var5 + 0x10);
      p_Var5 = FUN_1801387d8();
      *(int32_t *)(p_Var5 + 0x10) = 0x8c;
      goto LAB_180141e4a;
    }
  }
}

 __acrt_unlock(3);
  }
  if (uVar10 != 1) {
if (param_1 == 8) {
      p_Var5 = FUN_1801387d8();
      (*(code *)PTR__guard_dispatch_icall_180157478)(8,*(int32_t *)(p_Var5 + 0x10));
    }
    else {
      (*(code *)PTR__guard_dispatch_icall_180157478)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (*(longlong *)(p_Var12 + 8) = lVar3, param_1 == 8)) {
      p_Var12 = FUN_1801387d8();
      *(int32_t *)(p_Var12 + 0x10) = local_res10;
    }
  }
}

 __acrt_lock(4);
    ppuVar2 = _updatetlocinfoEx_nolock((longlong *)(p_Var1 + 0x90),DAT_1801ee160);
    __acrt_unlock(4);
    if (ppuVar2 == (int32_t **)0x0) {
abort();
    }
}

 __report_rangecheckfailure();
      pcVar1 = (code *)swi(3);
      pbVar21 = (byte *)(*pcVar1)();
      return pbVar21;
    }
    abStack_38[uVar20] = 0;
    uVar20 = uVar20 + 1;
  } while ((longlong)uVar20 < 0x20);
  bVar19 = *param_2;
  while (bVar19 != 0) {
param_2 = param_2 + 1;
    abStack_38[bVar19 >> 3] = abStack_38[bVar19 >> 3] | (byte)(1 << (bVar19 & 7));
    bVar19 = *param_2;
  }
}

 __acrt_lowio_ensure_fh_exists(uVar7);
    if ((int)DAT_1801ee810 < (int)uVar7) {
uVar7 = DAT_1801ee810;
    }
}

 __acrt_release_locale_ref(*(longlong *)(param_1 + 0x90));
    ppuVar1 = *(int32_t ***)(param_1 + 0x90);
    if (((ppuVar1 != DAT_1801ee160) && (ppuVar1 != &PTR_DAT_1801eb2f0)) &&
       (*(int *)(ppuVar1 + 2) == 0)) {
__acrt_free_locale((longlong)ppuVar1);
    }
}

 __acrt_free_locale((longlong)ppuVar1);
    }
  }
  *(__crt_locale_data **)(param_1 + 0x90) = param_2;
  if (param_2 != (__crt_locale_data *)0x0) {
__acrt_add_locale_ref((longlong)param_2);
  }
}

 __except_validate_context_record((longlong)param_3);
  lVar2 = __vcrt_getptd();
  if ((*(int *)(lVar2 + 0x40) == 0) && (*(int *)param_1 != -0x1f928c9d)) {
if (*(int *)param_1 == -0x7fffffd7) {
      if (*(int *)(param_1 + 0x18) == 0xf) {
        if (*(longlong *)(param_1 + 0x60) == 0x19930520) goto LAB_1801298b2;
        goto LAB_180129896;
      }
    }
    else {
LAB_180129896:
      if (*(int *)param_1 == -0x7fffffda) goto LAB_1801298b2;
    }
    if ((0x19930521 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) &&
       ((param_5->EHFlags & 1) != 0)) {
      return 1;
    }
  }
}

 __acrt_initialize_multibyte();
    pCVar2 = FUN_180143ea4();
    if (pCVar2 == (LPSTR)0x0) {
FUN_18013bf3c((LPVOID)0x0);
      uVar3 = 0xffffffff;
    }
}

 __acrt_lowio_lock_fh(param_1);
        lVar2 = -1;
        if ((*(byte *)((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
*(int32_t *)(param_4 + 6) = 1;
          *(int32_t *)((longlong)param_4 + 0x2c) = 9;
          *(int32_t *)(param_4 + 7) = 1;
          *(int32_t *)((longlong)param_4 + 0x34) = 0;
        }
}

 __acrt_lock(5);
    p_Var2 = *(__crt_multibyte_data **)(param_1 + 0x88);
    if (p_Var2 != *param_2) {
if (p_Var2 != (__crt_multibyte_data *)0x0) {
        LOCK();
        iVar1 = *(int *)p_Var2;
        *(int *)p_Var2 = *(int *)p_Var2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (p_Var2 != (__crt_multibyte_data *)&DAT_1801eb780)) {
          FUN_18013bf3c(p_Var2);
        }
      }
      p_Var2 = *param_2;
      *(__crt_multibyte_data **)(param_1 + 0x88) = p_Var2;
      LOCK();
      *(int *)p_Var2 = *(int *)p_Var2 + 1;
      UNLOCK();
    }
}

 __acrt_lock(7);
  uVar3 = 0xffffffff;
  iVar4 = 0;
  do {
    if (0x7f < iVar4) {
LAB_180147e1f:
      __acrt_unlock(7);
      return uVar3;
    }
}

 __acrt_unlock(7);
      return uVar3;
    }
    p_Var1 = (LPCRITICAL_SECTION)(&DAT_1801ee410)[iVar4];
    if (p_Var1 == (LPCRITICAL_SECTION)0x0) {
puVar2 = __acrt_lowio_create_handle_array();
      (&DAT_1801ee410)[iVar4] = puVar2;
      if (puVar2 != (int32_t *)0x0) {
        DAT_1801ee810 = DAT_1801ee810 + 0x40;
        uVar3 = iVar4 << 6;
        __acrt_lowio_lock_fh(uVar3);
        *(int32_t *)((&DAT_1801ee410)[(longlong)(int)uVar3 >> 6] + 0x38) = 1;
      }
      goto LAB_180147e1f;
    }
}

 __acrt_lowio_lock_fh(uVar3);
        *(int32_t *)((&DAT_1801ee410)[(longlong)(int)uVar3 >> 6] + 0x38) = 1;
      }
      goto LAB_180147e1f;
    }
    for (lpCriticalSection = p_Var1;
        lpCriticalSection != (LPCRITICAL_SECTION)&p_Var1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
        EnterCriticalSection(lpCriticalSection);
        if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0) {
          uVar3 = (int)(((longlong)lpCriticalSection - (longlong)p_Var1) / 0x48) + iVar4 * 0x40;
          *(int32_t *)
           ((&DAT_1801ee410)[(longlong)(int)uVar3 >> 6] + 0x38 + (ulonglong)(uVar3 & 0x3f) * 0x48) =
               1;
          *(int32_t *)
           ((&DAT_1801ee410)[(longlong)(int)uVar3 >> 6] + 0x28 + (ulonglong)(uVar3 & 0x3f) * 0x48) =
               0xffffffffffffffff;
          goto LAB_180147e1f;
        }
        LeaveCriticalSection(lpCriticalSection);
      }
    }
}

 __acrt_initialize_multibyte();
      FUN_18014319c((HMODULE)0x0,&DAT_1801ee000,0x104);
      _DAT_1801ee878 = &DAT_1801ee000;
      if ((DAT_1801ee898 == (char *)0x0) || (pcVar8 = DAT_1801ee898, *DAT_1801ee898 == '\0')) {
pcVar8 = &DAT_1801ee000;
      }
}

 __acrt_add_locale_ref((longlong)param_2);
      if (((ppuVar1 != (int32_t **)0x0) &&
          (__acrt_release_locale_ref((longlong)ppuVar1), *(int *)(ppuVar1 + 2) == 0)) &&
         (ppuVar1 != &PTR_DAT_1801eb2f0)) {
__acrt_free_locale((longlong)ppuVar1);
      }
}

 __report_rangecheckfailure();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_208[sVar11] = L'\0';
          lVar8 = FUN_180139bac(param_1,iVar13,local_208);
          if (lVar8 != 0) {
iVar12 = iVar12 + 1;
          }
}

void __acrt_add_locale_ref(longlong param_1) {
int *piVar1;
  int32_t *puVar2;
  longlong lVar3;
  
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x100);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (int32_t *)(param_1 + 0x38);
  lVar3 = 6;
  do {
    if (((int32_t *)puVar2[-2] != &DAT_1801eb458) &&
       (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  __acrt_locale_add_lc_time_reference(*(int32_t ***)(param_1 + 0x120));
  return;
}
}

LPVOID __acrt_allocate_buffer_for_argv(ulonglong param_1,ulonglong param_2,ulonglong param_3) {
int32_t auVar1 [16];
  LPVOID pvVar2;
  
  if ((param_1 < 0x1fffffffffffffff) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     param_2 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      pvVar2 = _calloc_base(param_1 * 8 + param_2 * param_3,1);
      FUN_18013bf3c((LPVOID)0x0);
      return pvVar2;
    }
  }
  return (LPVOID)0x0;
}
}

void __acrt_call_reportfault(int param_1,DWORD param_2,DWORD param_3) {
BOOL BVar1;
  LONG LVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  int32_t auStackX_8 [8];
  int32_t auStackY_608 [32];
  DWORD64 local_5c8;
  _EXCEPTION_POINTERS local_5c0;
  ulonglong local_5b0;
  PVOID local_5a8 [2];
  EXCEPTION_RECORD local_598;
  _CONTEXT local_4f8;
  ulonglong local_28;
  
  local_28 = DAT_1801eb080 ^ (ulonglong)auStackY_608;
  if (param_1 != -1) {
    FUN_18012649c();
  }
  FUN_180151670((int32_t (*) [32])&local_598,0,0x98);
  FUN_180151670((int32_t (*) [32])&local_4f8,0,0x4d0);
  local_5c0.ExceptionRecord = &local_598;
  local_5c0.ContextRecord = &local_4f8;
  RtlCaptureContext(&local_4f8);
  FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,&local_5c8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_5c8,local_4f8.Rip,FunctionEntry,&local_4f8,local_5a8,&local_5b0,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  local_4f8.Rsp = (DWORD64)auStackX_8;
  local_598.ExceptionCode = param_2;
  local_598.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_5c0);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_18012649c();
  }
  FUN_1801252c0(local_28 ^ (ulonglong)auStackY_608);
  return;
}
}

bool __acrt_can_use_vista_locale_apis(void) {
FARPROC pFVar1;
  
  pFVar1 = FUN_18013a46c(1,"CompareStringEx",(uint *)&DAT_18017bbd0,(uint *)"CompareStringEx");
  return pFVar1 != (FARPROC)0x0;
}
}

void __acrt_CompareStringA(__crt_locale_pointers *param_1,ushort *param_2,DWORD param_3,byte *param_4,
               int param_5,byte *param_6,int param_7,UINT param_8) {
longlong local_28;
  longlong local_20 [2];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_18014a758(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}
}

ulonglong __acrt_CompareStringW(ushort *param_1,DWORD param_2,int32_t (*param_3) [32],int param_4,
                    int32_t (*param_5) [32],int param_6) {
ulonglong uVar1;
  
  if (0 < param_4) {
    uVar1 = FUN_180136b94(param_3,(longlong)param_4);
    param_4 = (int)uVar1;
  }
  if (0 < param_6) {
    uVar1 = FUN_180136b94(param_5,(longlong)param_6);
    param_6 = (int)uVar1;
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    uVar1 = (ulonglong)((param_4 - param_6 >> 0x1f & 0xfffffffeU) + 3);
    if (param_4 - param_6 == 0) {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = FUN_18013a6c4(param_1,param_2,(PCNZWCH)param_3,param_4,(PCNZWCH)param_5,param_6,0,0,0);
  }
  return uVar1;
}
}

short * __acrt_copy_locale_name(int32_t (*param_1) [32]) {
ulong uVar1;
  ulonglong uVar2;
  short *psVar3;
  
  if (((param_1 == (int32_t (*) [32])0x0) || (uVar2 = FUN_180136b94(param_1,0x55), 0x54 < uVar2))
     || (psVar3 = (short *)_malloc_base(uVar2 * 2 + 2), psVar3 == (short *)0x0)) {
    psVar3 = (short *)0x0;
  }
  else {
    uVar1 = FUN_180145f04(psVar3,uVar2 + 1,(longlong)param_1,uVar2 + 1);
    if (uVar1 != 0) {
                    
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return psVar3;
}
}

void __acrt_eagerly_load_locale_apis(void) {
FUN_18013a46c(0,"AreFileApisANSI",(uint *)&DAT_18017bbb8,(uint *)&DAT_18017bbbc);
  FUN_18013a46c(1,"CompareStringEx",(uint *)&DAT_18017bbd0,(uint *)"CompareStringEx");
  FUN_18013a46c(2,"EnumSystemLocalesEx",(uint *)&DAT_18017bbe8,(uint *)"EnumSystemLocalesEx");
  FUN_18013a46c(4,"GetDateFormatEx",(uint *)&DAT_18017bc08,(uint *)"GetDateFormatEx");
  FUN_18013a46c(8,"GetLocaleInfoEx",(uint *)&DAT_18017bc20,(uint *)"GetLocaleInfoEx");
  FUN_18013a46c(0xb,"GetTimeFormatEx",(uint *)&DAT_18017bc38,(uint *)"GetTimeFormatEx");
  FUN_18013a46c(0xc,"GetUserDefaultLocaleName",(uint *)&DAT_18017bc50,
                (uint *)"GetUserDefaultLocaleName");
  FUN_18013a46c(0x10,"IsValidLocaleName",(uint *)&DAT_18017bc80,(uint *)"IsValidLocaleName");
  FUN_18013a46c(0x11,"LCMapStringEx",(uint *)&DAT_18017bca0,(uint *)"LCMapStringEx");
  FUN_18013a46c(0x12,"LCIDToLocaleName",(uint *)&DAT_18017bcb8,(uint *)"LCIDToLocaleName");
  FUN_18013a46c(0x13,"LocaleNameToLCID",(uint *)&DAT_18017bcd8,(uint *)"LocaleNameToLCID");
  return;
}
}

int32_t __acrt_errno_from_os_error(int param_1) {
uint uVar1;
  int32_t uVar2;
  ulonglong uVar3;
  int *piVar4;
  
  uVar3 = 0;
  piVar4 = &DAT_180179690;
  do {
    if (param_1 == *piVar4) {
      return *(int32_t *)(&UNK_180179694 + uVar3 * 8);
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
    piVar4 = piVar4 + 2;
  } while (uVar1 < 0x2d);
  if (param_1 - 0x13U < 0x12) {
    return 0xd;
  }
  uVar2 = 0x16;
  if (param_1 - 0xbcU < 0xf) {
    uVar2 = 8;
  }
  return uVar2;
}
}

void __acrt_freeptd(void) {
__acrt_ptd *p_Var1;
  
  if (DAT_1801eb2e0 != 0xffffffff) {
    p_Var1 = (__acrt_ptd *)FlsGetValue(DAT_1801eb2e0);
    if (p_Var1 != (__acrt_ptd *)0x0) {
      FlsSetValue(DAT_1801eb2e0,(PVOID)0x0);
      destroy_ptd_array(p_Var1);
      FUN_18013bf3c(p_Var1);
    }
  }
  return;
}
}

void __acrt_free_locale(longlong param_1) {
int *piVar1;
  longlong lVar2;
  int32_t *puVar3;
  int32_t *puVar4;
  
  if ((((*(int32_t ***)(param_1 + 0xf8) != (int32_t **)0x0) &&
       (*(int32_t ***)(param_1 + 0xf8) != &PTR_DAT_1801eb100)) &&
      (*(int **)(param_1 + 0xe0) != (int *)0x0)) && (**(int **)(param_1 + 0xe0) == 0)) {
    piVar1 = *(int **)(param_1 + 0xf0);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_18013bf3c(piVar1);
      __acrt_locale_free_monetary(*(longlong *)(param_1 + 0xf8));
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_18013bf3c(piVar1);
      __acrt_locale_free_numeric(*(longlong **)(param_1 + 0xf8));
    }
    FUN_18013bf3c(*(LPVOID *)(param_1 + 0xe0));
    FUN_18013bf3c(*(LPVOID *)(param_1 + 0xf8));
  }
  if ((*(int **)(param_1 + 0x100) != (int *)0x0) && (**(int **)(param_1 + 0x100) == 0)) {
    FUN_18013bf3c((LPVOID)(*(longlong *)(param_1 + 0x108) + -0xfe));
    FUN_18013bf3c((LPVOID)(*(longlong *)(param_1 + 0x110) + -0x80));
    FUN_18013bf3c((LPVOID)(*(longlong *)(param_1 + 0x118) + -0x80));
    FUN_18013bf3c(*(LPVOID *)(param_1 + 0x100));
  }
  __acrt_locale_free_lc_time_if_unreferenced(*(int32_t ***)(param_1 + 0x120));
  puVar3 = (int32_t *)(param_1 + 0x128);
  lVar2 = 6;
  puVar4 = (int32_t *)(param_1 + 0x38);
  do {
    if ((((int32_t *)puVar4[-2] != &DAT_1801eb458) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FUN_18013bf3c(piVar1);
      FUN_18013bf3c((LPVOID)*puVar3);
    }
    if (((puVar4[-3] != 0) && (piVar1 = (int *)puVar4[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FUN_18013bf3c(piVar1);
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_18013bf3c((LPVOID)param_1);
  return;
}
}

void __acrt_GetLocaleInfoA(__crt_locale_pointers *param_1,int param_2,ushort *param_3,LCTYPE param_4,
               longlong *param_5) {
int iVar1;
  ulong uVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  LPWSTR pWVar5;
  int32_t auStackY_108 [32];
  int32_t local_d8 [4];
  int32_t local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_108;
  *param_5 = 0;
  if (param_2 == 1) {
    iVar1 = FUN_180141744(param_1,param_3,param_4,(ulonglong)local_c8,0x80);
    if (iVar1 != 0) {
      pvVar4 = _calloc_base((longlong)iVar1,1);
      *param_5 = (longlong)pvVar4;
      FUN_18013bf3c((LPVOID)0x0);
      if ((*param_5 != 0) &&
         (uVar2 = FUN_18014abd0((char *)*param_5,(longlong)iVar1,(longlong)local_c8,
                                (longlong)(iVar1 + -1)), uVar2 != 0)) {
                    
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
  else {
    if (param_2 != 2) {
      if (param_2 == 0) {
        local_d8[0] = 0;
        iVar1 = FUN_18013a930(param_3,param_4 | 0x20000000,(LPWSTR)local_d8,2);
        if (iVar1 != 0) {
          *(int32_t *)param_5 = (int32_t)local_d8[0];
        }
      }
      goto LAB_180141a51;
    }
    iVar1 = FUN_18013a930(param_3,param_4,(LPWSTR)0x0,0);
    if (iVar1 == 0) goto LAB_180141a51;
    pWVar5 = (LPWSTR)_calloc_base((longlong)iVar1,2);
    if (pWVar5 != (LPWSTR)0x0) {
      iVar1 = FUN_18013a930(param_3,param_4,pWVar5,iVar1);
LAB_1801419bf:
      if (iVar1 != 0) {
        *param_5 = (longlong)pWVar5;
        pWVar5 = (LPWSTR)0x0;
      }
    }
  }
  FUN_18013bf3c(pWVar5);
LAB_180141a51:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_108);
  return;
}
}

void __acrt_get_qualified_locale_downlevel(longlong param_1,UINT *param_2,__acrt_ptd *param_3,int32_t param_4) {
short *psVar1;
  UINT _Val;
  BOOL BVar2;
  int iVar3;
  __acrt_ptd *p_Var4;
  __acrt_ptd *p_Var5;
  ulonglong uVar6;
  __acrt_ptd *p_Var7;
  longlong lVar8;
  __acrt_ptd *p_Var9;
  int32_t auStack_78 [32];
  int32_t local_58;
  LCID local_50;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStack_78;
  p_Var9 = param_3;
  p_Var4 = FUN_1801387d8();
  local_58 = 0;
  local_50 = 0;
  p_Var5 = FUN_1801387d8();
  p_Var7 = p_Var4 + 0xa0;
  *(int32_t **)(p_Var5 + 0x3a0) = &local_58;
  psVar1 = (short *)(param_1 + 0x80);
  *(longlong *)(p_Var4 + 0x98) = param_1;
  *(short **)p_Var7 = psVar1;
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    p_Var9 = p_Var7;
    TranslateName(0x18017c320,DAT_18017c490 + -1,(longlong *)p_Var7);
  }
  uVar6 = local_58;
  local_58 = local_58 & 0xffffffff00000000;
  if ((*(short **)(p_Var4 + 0x98) == (short *)0x0) || (**(short **)(p_Var4 + 0x98) == 0)) {
    if ((*(short **)p_Var7 == (short *)0x0) || (**(short **)p_Var7 == 0)) {
      local_58._4_4_ = SUB84(uVar6,4);
      local_58 = CONCAT44(local_58._4_4_,0x104);
      local_50 = GetUserDefaultLCID();
      local_58 = CONCAT44(local_50,(uint)local_58);
    }
    else {
      p_Var7 = FUN_1801387d8();
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (*(short *)(*(longlong *)(p_Var7 + 0xa0) + lVar8 * 2) != 0);
      *(uint *)(p_Var7 + 0xb4) = (uint)(lVar8 == 3);
      EnumSystemLocalesW(FUN_180146a88,1);
      if ((local_58 & 4) == 0) {
        local_58 = local_58 & 0xffffffff00000000;
      }
    }
LAB_1801473d8:
    if ((uint)local_58 == 0) goto LAB_1801474bf;
  }
  else {
    if ((*(short **)p_Var7 == (short *)0x0) || (**(short **)p_Var7 == 0)) {
      GetLcidFromLanguage((byte *)&local_58);
    }
    else {
      GetLcidFromLangCountry((uint *)&local_58);
    }
    if ((uint)local_58 == 0) {
      p_Var9 = p_Var4 + 0x98;
      uVar6 = TranslateName(0x18017bf00,DAT_18017c310 + -1,(longlong *)p_Var9);
      if ((char)uVar6 != '\0') {
        if ((*(short **)p_Var7 == (short *)0x0) || (**(short **)p_Var7 == 0)) {
          GetLcidFromLanguage((byte *)&local_58);
        }
        else {
          GetLcidFromLangCountry((uint *)&local_58);
        }
      }
      goto LAB_1801473d8;
    }
  }
  _Val = ProcessCodePage((wchar_t *)(-(ulonglong)(param_1 != 0) & param_1 + 0x100U),
                         (longlong)&local_58,p_Var9,param_4);
  if ((_Val != 0) && (BVar2 = IsValidCodePage(_Val & 0xffff), BVar2 != 0)) {
    BVar2 = IsValidLocale(local_58._4_4_,1);
    if (BVar2 != 0) {
      if (param_2 != (UINT *)0x0) {
        *param_2 = _Val;
      }
      FUN_18013abb4(local_58._4_4_,(wchar_t *)(p_Var4 + 0x2f0),0x55,0);
      if (param_3 != (__acrt_ptd *)0x0) {
        FUN_18013abb4(local_58._4_4_,(wchar_t *)(param_3 + 0x120),0x55,0);
        iVar3 = GetLocaleInfoW(local_58._4_4_,0x1001,(LPWSTR)param_3,0x40);
        if ((iVar3 != 0) &&
           (iVar3 = GetLocaleInfoW(local_50,0x1002,(LPWSTR)(param_3 + 0x80),0x40), iVar3 != 0)) {
          _itow_s(_Val,(wchar_t *)(param_3 + 0x100),0x10,10);
        }
      }
    }
  }
LAB_1801474bf:
  FUN_1801252c0(local_48 ^ (ulonglong)auStack_78);
  return;
}
}

void __acrt_get_sigabrt_handler(void) {
int32_t local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = 3;
  local_res18[0] = 3;
  FUN_180141c18(local_res8,local_res18,local_res8,local_res10);
  return;
}
}

int32_t __acrt_initialize_fma3(void) {
longlong lVar1;
  byte in_XCR0;
  
  DAT_1801ee8e4 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    DAT_1801ee8e4 = (uint)((in_XCR0 & 6) == 6);
  }
  DAT_1801ee8e8 = DAT_1801ee8e4;
  return 0;
}
}

int32_t __acrt_initialize_multibyte(void) {
int iVar1;
  int32_t in_RAX;
  __acrt_ptd *p_Var2;
  int32_t extraout_var;
  
  if (DAT_1801ee874 == '\0') {
    DAT_1801ee860 = &DAT_1801ebac0;
    DAT_1801ee868 = &DAT_1801eb780;
    DAT_1801ee858 = &DAT_1801eb9b0;
    p_Var2 = FUN_1801388ac();
    iVar1 = FUN_180143790(-3,'\x01',p_Var2,(__crt_multibyte_data **)&DAT_1801ee868);
    in_RAX = CONCAT44(extraout_var,iVar1);
    DAT_1801ee874 = '\x01';
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}
}

void __acrt_LCMapStringA(__crt_locale_pointers *param_1,ushort *param_2,uint param_3,char *param_4,
                        int param_5,int32_t param_6,int param_7,UINT param_8,int param_9) {
longlong local_28;
  longlong local_20 [2];
  char local_10;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_1);
  FUN_180140b54(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}
}

void __acrt_LCMapStringW(ushort *param_1,DWORD param_2,int32_t (*param_3) [32],int param_4,
                        LPWSTR param_5,int param_6) {
int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = param_4;
  if (0 < param_4) {
    uVar2 = FUN_180136b94(param_3,(longlong)param_4);
    iVar1 = (int)uVar2;
    iVar3 = iVar1 + 1;
    if (param_4 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  FUN_18013ac38(param_1,param_2,(LPCWSTR)param_3,iVar3,param_5,param_6,0,0,0);
  return;
}
}

int __acrt_locale_add_lc_time_reference(int32_t **param_1) {
int *piVar1;
  int iVar2;
  
  if ((param_1 != (int32_t **)0x0) && (param_1 != &PTR_DAT_18017afe0)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    return iVar2 + 1;
  }
  return 0x7fffffff;
}
}

void __acrt_locale_free_lc_time_if_unreferenced(int32_t **param_1) {
if (((param_1 != (int32_t **)0x0) && (param_1 != &PTR_DAT_18017afe0)) &&
     (*(int *)((longlong)param_1 + 0x15c) == 0)) {
    __acrt_locale_free_time(param_1);
    FUN_18013bf3c(param_1);
  }
  return;
}
}

void __acrt_locale_free_monetary(longlong param_1) {
if (param_1 != 0) {
    if (*(int32_t **)(param_1 + 0x18) != PTR_DAT_1801eb118) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x18));
    }
    if (*(int32_t **)(param_1 + 0x20) != PTR_DAT_1801eb120) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x20));
    }
    if (*(int32_t **)(param_1 + 0x28) != PTR_DAT_1801eb128) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x28));
    }
    if (*(int32_t **)(param_1 + 0x30) != PTR_DAT_1801eb130) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x30));
    }
    if (*(int32_t **)(param_1 + 0x38) != PTR_DAT_1801eb138) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x38));
    }
    if (*(int32_t **)(param_1 + 0x40) != PTR_DAT_1801eb140) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x40));
    }
    if (*(int32_t **)(param_1 + 0x48) != PTR_DAT_1801eb148) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x48));
    }
    if (*(int32_t **)(param_1 + 0x68) != PTR_DAT_1801eb168) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x68));
    }
    if (*(int32_t **)(param_1 + 0x70) != PTR_DAT_1801eb170) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x70));
    }
    if (*(int32_t **)(param_1 + 0x78) != PTR_DAT_1801eb178) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x78));
    }
    if (*(int32_t **)(param_1 + 0x80) != PTR_DAT_1801eb180) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x80));
    }
    if (*(int32_t **)(param_1 + 0x88) != PTR_DAT_1801eb188) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x88));
    }
    if (*(int32_t **)(param_1 + 0x90) != PTR_DAT_1801eb190) {
      FUN_18013bf3c(*(int32_t **)(param_1 + 0x90));
    }
  }
  return;
}
}

void __acrt_locale_free_numeric(longlong *param_1) {
if (param_1 != (longlong *)0x0) {
    if ((int32_t *)*param_1 != PTR_DAT_1801eb100) {
      FUN_18013bf3c((int32_t *)*param_1);
    }
    if ((int32_t *)param_1[1] != PTR_DAT_1801eb108) {
      FUN_18013bf3c((int32_t *)param_1[1]);
    }
    if ((int32_t *)param_1[2] != PTR_DAT_1801eb110) {
      FUN_18013bf3c((int32_t *)param_1[2]);
    }
    if ((int32_t *)param_1[0xb] != PTR_DAT_1801eb158) {
      FUN_18013bf3c((int32_t *)param_1[0xb]);
    }
    if ((int32_t *)param_1[0xc] != PTR_DAT_1801eb160) {
      FUN_18013bf3c((int32_t *)param_1[0xc]);
    }
  }
  return;
}
}

void __acrt_locale_free_time(int32_t *param_1) {
if (param_1 != (int32_t *)0x0) {
    FUN_18014587c(param_1,7);
    FUN_18014587c(param_1 + 7,7);
    FUN_18014587c(param_1 + 0xe,0xc);
    FUN_18014587c(param_1 + 0x1a,0xc);
    FUN_18014587c(param_1 + 0x26,2);
    FUN_18013bf3c((LPVOID)param_1[0x28]);
    FUN_18013bf3c((LPVOID)param_1[0x29]);
    FUN_18013bf3c((LPVOID)param_1[0x2a]);
    FUN_18014587c(param_1 + 0x2c,7);
    FUN_18014587c(param_1 + 0x33,7);
    FUN_18014587c(param_1 + 0x3a,0xc);
    FUN_18014587c(param_1 + 0x46,0xc);
    FUN_18014587c(param_1 + 0x52,2);
    FUN_18013bf3c((LPVOID)param_1[0x54]);
    FUN_18013bf3c((LPVOID)param_1[0x55]);
    FUN_18013bf3c((LPVOID)param_1[0x56]);
    FUN_18013bf3c((LPVOID)param_1[0x57]);
  }
  return;
}
}

int __acrt_locale_release_lc_time_reference(int32_t **param_1) {
int *piVar1;
  int iVar2;
  
  if ((param_1 != (int32_t **)0x0) && (param_1 != &PTR_DAT_18017afe0)) {
    LOCK();
    piVar1 = (int *)((longlong)param_1 + 0x15c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    return iVar2 + -1;
  }
  return 0x7fffffff;
}
}

void __acrt_lock(int param_1) {
EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_1801edda0 + (longlong)param_1 * 0x28));
  return;
}
}

int32_t * __acrt_lowio_create_handle_array(void) {
uint uVar1;
  int32_t *puVar2;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int32_t *puVar3;
  
  puVar2 = (int32_t *)_calloc_base(0x40,0x48);
  puVar5 = (int32_t *)0x0;
  if ((puVar2 != (int32_t *)0x0) && (puVar5 = puVar2, puVar2 != puVar2 + 0x240)) {
    puVar6 = puVar2 + 6;
    do {
      FUN_18013aae0((LPCRITICAL_SECTION)(puVar6 + -6),4000,0);
      puVar6[-1] = 0xffffffffffffffff;
      puVar4 = (int32_t *)((longlong)puVar6 + 0xe);
      *(byte *)((longlong)puVar6 + 0xd) = *(byte *)((longlong)puVar6 + 0xd) & 0xf8;
      *puVar6 = 0;
      *(int32_t *)(puVar6 + 1) = 0xa0a0000;
      *(int32_t *)((longlong)puVar6 + 0xc) = 10;
      puVar3 = (int32_t *)0x0;
      do {
        *puVar4 = 0;
        uVar1 = (int)puVar3 + 1;
        puVar3 = (int32_t *)(ulonglong)uVar1;
        puVar4 = puVar4 + 1;
      } while (uVar1 < 5);
      puVar3 = puVar6 + 3;
      puVar6 = puVar6 + 9;
    } while (puVar3 != puVar2 + 0x240);
  }
  FUN_18013bf3c((LPVOID)0x0);
  return puVar5;
}
}

void __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION param_1) {
LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    lpCriticalSection = param_1;
    if (param_1 != (LPCRITICAL_SECTION)&param_1[0x73].LockCount) {
      do {
        DeleteCriticalSection(lpCriticalSection);
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount;
      } while (lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x73].LockCount);
    }
    FUN_18013bf3c(param_1);
  }
  return;
}
}

longlong __acrt_lowio_ensure_fh_exists(uint param_1) {
int iVar1;
  ulong *puVar2;
  longlong lVar3;
  int32_t *puVar4;
  longlong lVar5;
  
  if (param_1 < 0x2000) {
    lVar3 = 0;
    __acrt_lock(7);
    lVar5 = lVar3;
    iVar1 = DAT_1801ee810;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_1801ee410)[lVar5] == 0) {
        puVar4 = __acrt_lowio_create_handle_array();
        (&DAT_1801ee410)[lVar5] = puVar4;
        if (puVar4 == (int32_t *)0x0) {
          lVar3 = 0xc;
          break;
        }
        iVar1 = DAT_1801ee810 + 0x40;
        DAT_1801ee810 = iVar1;
      }
      lVar5 = lVar5 + 1;
    }
    __acrt_unlock(7);
  }
  else {
    puVar2 = __doserrno();
    *puVar2 = 9;
    FUN_18012b794();
    lVar3 = 9;
  }
  return lVar3;
}
}

 __acrt_lock(7);
    lVar5 = lVar3;
    iVar1 = DAT_1801ee810;
    while (iVar1 <= (int)param_1) {
if ((&DAT_1801ee410)[lVar5] == 0) {
        puVar4 = __acrt_lowio_create_handle_array();
        (&DAT_1801ee410)[lVar5] = puVar4;
        if (puVar4 == (int32_t *)0x0) {
          lVar3 = 0xc;
          break;
        }
        iVar1 = DAT_1801ee810 + 0x40;
        DAT_1801ee810 = iVar1;
      }
      lVar5 = lVar5 + 1;
    }
}

void __acrt_lowio_lock_fh(uint param_1) {
EnterCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}
}

void __acrt_lowio_unlock_fh(uint param_1) {
LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1801ee410)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48));
  return;
}
}

void __acrt_release_locale_ref(longlong param_1) {
int *piVar1;
  int32_t *puVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0xe0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xf0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x100);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (int32_t *)(param_1 + 0x38);
    lVar3 = 6;
    do {
      if (((int32_t *)puVar2[-2] != &DAT_1801eb458) &&
         (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    __acrt_locale_release_lc_time_reference(*(int32_t ***)(param_1 + 0x120));
  }
  return;
}
}

void __acrt_stdio_allocate_buffer_nolock(int32_t *param_1) {
LPVOID pvVar1;
  int32_t uVar2;
  
  _DAT_1801edd98 = _DAT_1801edd98 + 1;
  uVar2 = 0x1000;
  pvVar1 = _calloc_base(0x1000,1);
  param_1[1] = pvVar1;
  FUN_18013bf3c((LPVOID)0x0);
  if (param_1[1] == 0) {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x400;
    UNLOCK();
    uVar2 = 2;
    param_1[1] = (longlong)param_1 + 0x1c;
  }
  else {
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 0x40;
    UNLOCK();
  }
  *(int32_t *)(param_1 + 4) = uVar2;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = param_1[1];
  return;
}
}

void __acrt_stdio_free_buffer_nolock(int32_t *param_1) {
if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) {
    FUN_18013bf3c((LPVOID)param_1[1]);
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(int32_t *)(param_1 + 2) = 0;
  }
  return;
}
}

void __cdecl __acrt_stdio_free_stream(class __crt_stdio_stream)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl __acrt_stdio_free_stream(int32_t *param_1) {
*(int32_t *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *(int32_t *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  LOCK();
  *(int32_t *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  return;
}
}

int32_t __acrt_thread_detach(void) {
__acrt_freeptd();
  return 1;
}
}

int32_t __acrt_uninitialize(bool param_1) {
int iVar1;
  int32_t in_RAX;
  int32_t extraout_var;
  int32_t uVar2;
  
  if (param_1) {
    if (DAT_1801edd90 != 0) {
      iVar1 = common_flush_all(param_1);
      in_RAX = CONCAT44(extraout_var,iVar1);
    }
    return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  uVar2 = FUN_180144a48(0x18017ad20,0x18017ae20);
  return uVar2;
}
}

void __acrt_uninitialize_stdio(bool param_1) {
longlong lVar1;
  
  common_flush_all(param_1);
  FUN_18013ecd8();
  lVar1 = 0;
  do {
    __acrt_stdio_free_buffer_nolock(*(int32_t **)(lVar1 + (longlong)DAT_1801edd90));
    DeleteCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + (longlong)DAT_1801edd90) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_18013bf3c(DAT_1801edd90);
  DAT_1801edd90 = (LPVOID)0x0;
  return;
}
}

int32_t __acrt_uninitialize_winapi_thunks(char param_1) {
HMODULE hLibModule;
  int32_t *in_RAX;
  int32_t *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = &DAT_1801ee170;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
      in_RAX = &DAT_1801ee218;
    } while (puVar1 != (int32_t *)&DAT_1801ee218);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}
}

void __acrt_unlock(int param_1) {
LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1801edda0 + (longlong)param_1 * 0x28));
  return;
}
}

longlong __AdjustPointer(longlong param_1,int *param_2) {
longlong lVar1;
  
  lVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    lVar1 = lVar1 + (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(param_2[1] + param_1)) +
                    (longlong)param_2[1];
  }
  return lVar1;
}
}

void __cdecl __ArrayUnwind(void * __ptr64,unsigned __int64,unsigned __int64,void (__cdecl*)(void
   * __ptr64))
   
   Library: Visual Studio 2019 Release */

void __cdecl
__ArrayUnwind(void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4) {
__uint64 _Var1;
  
  for (_Var1 = 0; _Var1 != param_3; _Var1 = _Var1 + 1) {
    param_1 = (void *)((longlong)param_1 - param_2);
    (*(code *)PTR__guard_dispatch_icall_180157468)(param_1);
  }
  return;
}
}

void __ascii_wcsicmp(ushort *param_1,ushort *param_2) {
ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar3 = uVar1 + 0x20;
    if (0x19 < uVar1 - 0x41) {
      uVar3 = (uint)uVar1;
    }
    uVar4 = uVar2 + 0x20;
    if (0x19 < uVar2 - 0x41) {
      uVar4 = (uint)uVar2;
    }
  } while ((uVar3 == uVar4) && (uVar3 != 0));
  return;
}
}

int __ascii_wcsnicmp(ushort *param_1,ushort *param_2,longlong param_3) {
ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    uVar3 = uVar1 + 0x20;
    if (0x19 < uVar1 - 0x41) {
      uVar3 = (uint)uVar1;
    }
    uVar4 = uVar2 + 0x20;
    if (0x19 < uVar2 - 0x41) {
      uVar4 = (uint)uVar2;
    }
  } while (((uVar3 - uVar4 == 0) && (uVar3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
  return uVar3 - uVar4;
}
}

void __chkstk(void) {
int32_t *in_RAX;
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (int32_t *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = (int32_t *)StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((int32_t *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}
}

longlong __dcrt_get_or_create_narrow_environment_nolock(void) {
int32_t uVar1;
  longlong lVar2;
  
  lVar2 = DAT_1801ee108;
  if ((DAT_1801ee108 == 0) &&
     ((DAT_1801ee110 == 0 ||
      ((uVar1 = FUN_180137620(), lVar2 = DAT_1801ee108, (int)uVar1 != 0 &&
       (uVar1 = FUN_180137974(), lVar2 = DAT_1801ee108, (int)uVar1 != 0)))))) {
    lVar2 = 0;
  }
  return lVar2;
}
}

longlong __dcrt_get_or_create_wide_environment_nolock(void) {
int32_t uVar1;
  longlong lVar2;
  
  lVar2 = DAT_1801ee110;
  if ((DAT_1801ee110 == 0) &&
     ((DAT_1801ee108 == 0 ||
      ((uVar1 = FUN_180137694(), lVar2 = DAT_1801ee110, (int)uVar1 != 0 &&
       (uVar1 = FUN_180137a54(), lVar2 = DAT_1801ee110, (int)uVar1 != 0)))))) {
    lVar2 = 0;
  }
  return lVar2;
}
}

bool __dcrt_lowio_ensure_console_output_initialized(void) {
if (DAT_1801ebcc0 == (HANDLE)0xfffffffffffffffe) {
    DAT_1801ebcc0 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_1801ebcc0 != (HANDLE)0xffffffffffffffff;
}
}

BOOL __dcrt_write_console(void *param_1,DWORD param_2,LPDWORD param_3) {
BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_1801ebcc0,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_1801ebcc0 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_1801ebcc0);
      }
      DAT_1801ebcc0 =
           CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_1801ebcc0,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}
}

void __DestructExceptionObject(int *param_1) {
byte *pbVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
     ((param_1[8] + 0xe66cfae0U < 3 && (pbVar1 = *(byte **)(param_1 + 0xc), pbVar1 != (byte *)0x0)))
     ) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && (**(longlong **)(param_1 + 10) != 0)) {
        (*(code *)PTR__guard_dispatch_icall_180157468)();
      }
    }
    else {
      FUN_180127484(*(int32_t *)(param_1 + 10),
                    (int32_t *)((longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe)));
    }
  }
  return;
}
}

ulong * __cdecl __doserrno(void) {
__acrt_ptd *p_Var1;
  
  p_Var1 = FUN_180138950();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var1 = (__acrt_ptd *)&DAT_1801eb2b8;
  }
  else {
    p_Var1 = p_Var1 + 0x20;
  }
  return (ulong *)p_Var1;
}
}

void __except_validate_context_record(longlong param_1) {
code *pcVar1;
  
  if ((code *)PTR__guard_check_icall_180157460 != _guard_check_icall) {
    if ((*(ulonglong *)(param_1 + 0x98) < *(ulonglong *)((longlong)Self + 0x10)) ||
       (*(ulonglong *)((longlong)Self + 8) < *(ulonglong *)(param_1 + 0x98))) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(0xd);
    }
  }
  return;
}
}

int32_t __FrameUnwindFilter(int32_t *param_1) {
int *piVar1;
  code *pcVar2;
  longlong lVar3;
  int32_t uVar4;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1fbcbcae) || (*piVar1 == -0x1fbcb0b3)) {
    lVar3 = __vcrt_getptd();
    if (0 < *(int *)(lVar3 + 0x30)) {
      lVar3 = __vcrt_getptd();
      *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + -1;
    }
  }
  else if (*piVar1 == -0x1f928c9d) {
    lVar3 = __vcrt_getptd();
    *(int **)(lVar3 + 0x20) = piVar1;
    uVar4 = param_1[1];
    lVar3 = __vcrt_getptd();
    *(int32_t *)(lVar3 + 0x28) = uVar4;
    FUN_180136dec();
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return 0;
}
}

tm * __cdecl __getgmtimebuf(void) {
__acrt_ptd *p_Var1;
  LPVOID pvVar2;
  ulong *puVar3;
  
  p_Var1 = FUN_180138950();
  if (p_Var1 != (__acrt_ptd *)0x0) {
    if (*(tm **)(p_Var1 + 0x68) != (tm *)0x0) {
      return *(tm **)(p_Var1 + 0x68);
    }
    pvVar2 = _malloc_base(0x24);
    *(LPVOID *)(p_Var1 + 0x68) = pvVar2;
    FUN_18013bf3c((LPVOID)0x0);
    if (*(tm **)(p_Var1 + 0x68) != (tm *)0x0) {
      return *(tm **)(p_Var1 + 0x68);
    }
  }
  puVar3 = __doserrno();
  *puVar3 = 0xc;
  return (tm *)0x0;
}
}

int32_t __GSHandlerCheck(int32_t param_1,ulonglong param_2,int32_t param_3,longlong param_4) {
__GSHandlerCheckCommon(param_2,param_4,*(uint **)(param_4 + 0x38));
  return 1;
}
}

void __GSHandlerCheckCommon(ulonglong param_1,longlong param_2,uint *param_3) {
ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = param_1;
  if ((*param_3 & 4) != 0) {
    uVar2 = (longlong)(int)param_3[1] + param_1 & (longlong)(int)-param_3[2];
  }
  uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
    param_1 = param_1 + (*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0);
  }
  FUN_1801252c0(param_1 ^ *(ulonglong *)((longlong)(int)(*param_3 & 0xfffffff8) + uVar2));
  return;
}
}

void __lc_lctowcs(wchar_t *param_1,rsize_t param_2,wchar_t *param_3) {
errno_t eVar1;
  
  eVar1 = wcscpy_s(param_1,param_2,param_3);
  if (eVar1 == 0) {
    if (param_3[0x40] != L'\0') {
      _wcscats(param_1,param_2,2,&DAT_18017afd8);
    }
    if (param_3[0x80] != L'\0') {
      _wcscats(param_1,param_2,2,&DAT_18017afdc);
    }
    return;
  }
                    
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}
}

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1) {
HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    
                    
  TerminateProcess(hProcess,0xc0000409);
  return;
}
}

void __remainder_piby2d2f_forC(ulonglong param_1,double *param_2,uint *param_3) {
bool bVar1;
  bool bVar2;
  int32_t auVar3 [16];
  int32_t auVar4 [16];
  int32_t auVar5 [16];
  int32_t auVar6 [16];
  int32_t auVar7 [16];
  int32_t auVar8 [16];
  int32_t auVar9 [16];
  ulonglong uVar10;
  ulonglong uVar11;
  sbyte sVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  uVar20 = (param_1 >> 0x34) - 0x3ff;
  lVar18 = -((uVar20 >> 3) - 0x86);
  uVar14 = param_1 & 0xfffffffffffff | 0x10000000000000;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulonglong *)(&DAT_1801dd5a0 + lVar18);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar14;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = SUB168(auVar3 * auVar6,8);
  uVar10 = SUB168(auVar3 * auVar6,0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(&UNK_1801dd5a8 + lVar18);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar14;
  uVar20 = uVar20 & 7;
  auVar9 = auVar4 * auVar7 + auVar9;
  uVar11 = auVar9._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(ulonglong *)(&UNK_1801dd5b0 + lVar18);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar14;
  uVar19 = auVar9._8_8_ + SUB168(auVar5 * auVar8,0);
  uVar17 = 0;
  bVar13 = (byte)(0x36 - uVar20) & 0x3f;
  uVar14 = uVar19 >> bVar13;
  bVar1 = (0x36 - uVar20 & 0x3f) != 0;
  bVar2 = (uVar19 >> bVar13 - 1 & 1) != 0;
  if (bVar1 && bVar2) {
    uVar19 = ~uVar19;
    uVar11 = ~uVar11;
    uVar10 = ~uVar10;
    uVar17 = 0x8000000000000000;
  }
  *param_3 = (int)uVar14 + (uint)(bVar1 && bVar2) & 3;
  sVar12 = (char)uVar20 + 10;
  uVar14 = (uVar19 << sVar12) >> sVar12;
  lVar15 = uVar20 - 0x36;
  lVar18 = 0x3f;
  if (uVar14 != 0) {
    for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  uVar19 = uVar11;
  if (uVar14 == 0) {
    lVar18 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    lVar15 = uVar20 - 0x76;
    uVar19 = uVar10;
    uVar14 = uVar11;
  }
  lVar16 = lVar18 + -0x34;
  if (lVar16 < 0) {
    bVar13 = -(byte)lVar16;
    uVar14 = uVar14 << (bVar13 & 0x3f) | uVar19 >> (-(bVar13 - 0x40) & 0x3f);
  }
  else if (lVar16 != 0) {
    uVar14 = uVar14 >> ((byte)lVar16 & 0x3f);
  }
  *param_2 = (double)(uVar14 & 0xffefffffffffffff | uVar17 | lVar15 + lVar18 + 0x3ff << 0x34) *
             _DAT_1801dd590;
  return;
}
}

void __report_rangecheckfailure(void) {
FUN_18012630c(8);
  return;
}
}

ulonglong __scrt_acquire_startup_lock(void) {
ulonglong uVar1;
  bool bVar2;
  int32_t extraout_var;
  ulonglong uVar3;
  
  bVar2 = __scrt_is_ucrt_dll_in_use();
  uVar3 = CONCAT71(extraout_var,bVar2);
  if ((int)uVar3 == 0) {
LAB_180125576:
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    do {
      uVar3 = 0;
      LOCK();
      bVar2 = DAT_1801ed690 == 0;
      uVar1 = *(ulonglong *)((longlong)Self + 8);
      if (!bVar2) {
        uVar3 = DAT_1801ed690;
        uVar1 = DAT_1801ed690;
      }
      DAT_1801ed690 = uVar1;
      UNLOCK();
      if (bVar2) goto LAB_180125576;
    } while (*(ulonglong *)((longlong)Self + 8) != uVar3);
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3;
}
}

int32_t __scrt_dllmain_after_initialize_c(void) {
bool bVar1;
  int32_t extraout_var;
  int32_t uVar2;
  ulonglong uVar3;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar2 = FUN_1800a7f80();
    uVar3 = _configure_narrow_argv((int)uVar2);
    if ((int)uVar3 != 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    uVar2 = thunk_FUN_180137620();
  }
  else {
    uVar2 = FUN_180125e38();
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}
}

bool __scrt_dllmain_before_initialize_c(void) {
int32_t uVar1;
  
  uVar1 = __scrt_initialize_onexit_tables(0);
  return (char)uVar1 != '\0';
}
}

int32_t __scrt_dllmain_crt_thread_attach(void) {
bool bVar1;
  
  bVar1 = __vcrt_thread_attach();
  if (bVar1) {
    bVar1 = FUN_180138158();
    if (bVar1) {
      return 1;
    }
    FUN_180127aa8();
  }
  return 0;
}
}

int32_t __scrt_dllmain_crt_thread_detach(void) {
__acrt_thread_detach();
  FUN_180127aa8();
  return 1;
}
}

void __scrt_dllmain_exception_filter(int32_t param_1,int param_2,int32_t param_3,int32_t *param_4,int param_5,
               int32_t param_6) {
bool bVar1;
  int32_t extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (((int)CONCAT71(extraout_var,bVar1) == 0) && (param_2 == 1)) {
    (*(code *)PTR__guard_dispatch_icall_180157468)(param_1,0,param_3);
  }
  FUN_180136e18(param_5,param_6);
  return;
}
}

void __scrt_dllmain_uninitialize_c(void) {
bool bVar1;
  int32_t extraout_var;
  int iVar2;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_180137f64(&DAT_1801ed6a0);
    return;
  }
  iVar2 = FUN_180137268();
  if (iVar2 == 0) {
    FUN_18013724c();
  }
  return;
}
}

void __scrt_initialize_default_local_stdio_options(void) {
ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_1800f87c0();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_1801266b4();
  *puVar1 = *puVar1 | 2;
  return;
}
}

int32_t __scrt_initialize_onexit_tables(uint param_1) {
code *pcVar1;
  bool bVar2;
  ulonglong in_RAX;
  int32_t extraout_var;
  int32_t uVar3;
  
  if (DAT_1801ed699 == '\0') {
    if (1 < param_1) {
      FUN_1801264a4(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = __scrt_is_ucrt_dll_in_use();
    if (((int)CONCAT71(extraout_var,bVar2) == 0) || (param_1 != 0)) {
      in_RAX = 0xffffffffffffffff;
      DAT_1801ed6a0 = _DAT_18015ad90;
      uRam00000001801ed6a8 = _UNK_18015ad98;
      _DAT_1801ed6b0 = 0xffffffffffffffff;
      _DAT_1801ed6b8 = _DAT_18015ad90;
      uRam00000001801ed6c0 = _UNK_18015ad98;
      _DAT_1801ed6c8 = 0xffffffffffffffff;
    }
    else {
      in_RAX = _initialize_onexit_table(&DAT_1801ed6a0);
      if (((int)in_RAX != 0) ||
         (in_RAX = _initialize_onexit_table((longlong *)&DAT_1801ed6b8), (int)in_RAX != 0)) {
        return in_RAX & 0xffffffffffffff00;
      }
    }
    DAT_1801ed699 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}
}

bool __scrt_is_ucrt_dll_in_use(void) {
return DAT_1801fe3b8 != 0;
}
}

void __scrt_release_startup_lock(char param_1) {
bool bVar1;
  int32_t extraout_var;
  
  bVar1 = __scrt_is_ucrt_dll_in_use();
  if ((CONCAT31(extraout_var,bVar1) != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1801ed690 = 0;
    UNLOCK();
  }
  return;
}
}

int32_t __scrt_uninitialize_crt(bool param_1,char param_2) {
int32_t in_RAX;
  
  if ((DAT_1801ed698 == '\0') || (param_2 == '\0')) {
    __acrt_uninitialize(param_1);
    in_RAX = __vcrt_uninitialize(param_1);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}
}

void __cdecl __security_init_cookie(void) {
DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10;
  _FILETIME local_18 [2];
  
  if (DAT_1801eb080 == 0x2b992ddfa232) {
    local_res8.dwLowDateTime = 0;
    local_res8.dwHighDateTime = 0;
    GetSystemTimeAsFileTime(&local_res8);
    local_18[0] = local_res8;
    DVar1 = GetCurrentThreadId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    DVar1 = GetCurrentProcessId();
    local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
    QueryPerformanceCounter(&local_res10);
    DAT_1801eb080 =
         ((ulonglong)local_res10.s.LowPart << 0x20 ^
          CONCAT44(local_res10.s.HighPart,local_res10.s.LowPart) ^ (ulonglong)local_18[0] ^
         (ulonglong)local_18) & 0xffffffffffff;
    if (DAT_1801eb080 == 0x2b992ddfa232) {
      DAT_1801eb080 = 0x2b992ddfa233;
    }
  }
  DAT_1801eb0c0 = ~DAT_1801eb080;
  return;
}
}

void __std_exception_copy(longlong *param_1,longlong *param_2) {
longlong lVar1;
  char *_Dst;
  longlong lVar2;
  
  if (((char)param_1[1] == '\0') || (*param_1 == 0)) {
    *param_2 = *param_1;
    *(int32_t *)(param_2 + 1) = 0;
  }
  else {
    lVar1 = -1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (*(char *)(*param_1 + lVar2 + 1) != '\0');
    _Dst = (char *)_malloc_base(lVar2 + 2);
    if (_Dst != (char *)0x0) {
      strcpy_s(_Dst,lVar2 + 2,(char *)*param_1);
      *(int32_t *)(param_2 + 1) = 1;
      *param_2 = (longlong)_Dst;
      _Dst = (char *)0x0;
    }
    FUN_18012d5e8(_Dst);
  }
  return;
}
}

void __std_exception_destroy(int32_t *param_1) {
if (*(char *)(param_1 + 1) != '\0') {
    FUN_18012d5e8((LPVOID)*param_1);
  }
  *param_1 = 0;
  *(int32_t *)(param_1 + 1) = 0;
  return;
}
}

ulonglong __std_fs_code_page(void) {
UINT UVar1;
  BOOL BVar2;
  ulonglong uVar3;
  
  UVar1 = ___lc_codepage_func();
  uVar3 = 0xfde9;
  if (UVar1 != 0xfde9) {
    BVar2 = AreFileApisANSI();
    uVar3 = (ulonglong)(BVar2 == 0);
  }
  return uVar3;
}
}

int32_t __std_fs_convert_narrow_to_wide(UINT param_1,LPCSTR param_2,int param_3,LPWSTR param_4,int param_5) {
int iVar1;
  int32_t uStack_14;
  
  iVar1 = MultiByteToWideChar(param_1,8,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    uStack_14 = GetLastError();
  }
  else {
    uStack_14 = 0;
  }
  return CONCAT44(uStack_14,iVar1);
}
}

int32_t __std_fs_create_directory(LPCWSTR param_1) {
BOOL BVar1;
  uint local_res10;
  DWORD DStackX_14;
  ulonglong local_28 [2];
  uint local_18;
  
  BVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DStackX_14 = GetLastError();
    if (DStackX_14 == 0xb7) {
      DStackX_14 = FUN_18012368c(param_1,local_28,3,0xffffffff);
      if ((DStackX_14 == 0) && ((local_18 >> 4 & 1) == 0)) {
        DStackX_14 = 0xb7;
      }
    }
    local_res10 = local_res10 & 0xffffff00;
  }
  else {
    DStackX_14 = 0;
    local_res10 = CONCAT31(local_res10._1_3_,1);
  }
  return CONCAT44(DStackX_14,local_res10);
}
}

DWORD __std_fs_directory_iterator_open(LPCWSTR param_1,longlong *param_2,LPVOID param_3) {
BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  
  if (*param_2 != -1) {
    BVar1 = FindClose((HANDLE)*param_2);
    if (BVar1 == 0) {
                    
      abort();
    }
  }
  pvVar3 = FindFirstFileExW(param_1,FindExInfoBasic,param_3,FindExSearchNameMatch,(LPVOID)0x0,0);
  *param_2 = (longlong)pvVar3;
  if (pvVar3 == (HANDLE)0xffffffffffffffff) {
    DVar2 = GetLastError();
  }
  else {
    DVar2 = 0;
  }
  return DVar2;
}
}

DWORD __std_fs_open_handle(int32_t *param_1,LPCWSTR param_2,DWORD param_3,DWORD param_4) {
DWORD DVar1;
  HANDLE pvVar2;
  
  DVar1 = 0;
  pvVar2 = CreateFileW(param_2,param_3,7,(LPSECURITY_ATTRIBUTES)0x0,3,param_4,(HANDLE)0x0);
  *param_1 = pvVar2;
  if (pvVar2 == (HANDLE)0xffffffffffffffff) {
    DVar1 = GetLastError();
  }
  return DVar1;
}
}

uint __std_type_info_compare(longlong param_1,longlong param_2) {
byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    pbVar2 = (byte *)(param_1 + 9);
    lVar3 = (param_2 + 9) - (longlong)pbVar2;
    do {
      bVar1 = *pbVar2;
      if (bVar1 != pbVar2[lVar3]) {
        return -(uint)(bVar1 < pbVar2[lVar3]) | 1;
      }
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  return 0;
}
}

size_t __cdecl __strncnt(char *_String,size_t _Cnt) {
char cVar1;
  size_t sVar2;
  
  sVar2 = 0;
  cVar1 = *_String;
  while ((cVar1 != '\0' && (sVar2 != _Cnt))) {
    sVar2 = sVar2 + 1;
    cVar1 = _String[sVar2];
  }
  return sVar2;
}
}

void __cdecl __tzset(void) {
if (DAT_1801ee354 == 0) {
    __acrt_lock(6);
    if (DAT_1801ee354 == 0) {
      FUN_18013bd38();
      LOCK();
      DAT_1801ee354 = DAT_1801ee354 + 1;
      UNLOCK();
    }
    __acrt_unlock(6);
    return;
  }
  return;
}
}

 __acrt_lock(6);
    if (DAT_1801ee354 == 0) {
FUN_18013bd38();
      LOCK();
      DAT_1801ee354 = DAT_1801ee354 + 1;
      UNLOCK();
    }
}

int32_t __uncaught_exceptions(void) {
int32_t uVar1;
  longlong lVar2;
  
  lVar2 = __vcrt_getptd_noinit();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(int32_t *)(lVar2 + 0x30);
  }
  return uVar1;
}
}

void __vcrt_FlsAlloc(int32_t param_1) {
FARPROC pFVar1;
  
  pFVar1 = FUN_18012af9c(0,"FlsAlloc",(uint *)&DAT_1801794b8,(uint *)"FlsAlloc");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR__guard_dispatch_icall_180157468)(param_1);
    return;
  }
                    
                    
  TlsAlloc();
  return;
}
}

void __vcrt_FlsFree(int32_t param_1) {
FARPROC pFVar1;
  
  pFVar1 = FUN_18012af9c(1,"FlsFree",(uint *)&DAT_1801794d0,(uint *)"FlsFree");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR__guard_dispatch_icall_180157468)();
    return;
  }
                    
                    
  TlsFree(param_1);
  return;
}
}

void __vcrt_FlsGetValue(int32_t param_1) {
FARPROC pFVar1;
  
  pFVar1 = FUN_18012af9c(2,"FlsGetValue",(uint *)&DAT_1801794e0,(uint *)"FlsGetValue");
  if (pFVar1 != (FARPROC)0x0) {
    (*(code *)PTR__guard_dispatch_icall_180157468)();
    return;
  }
                    
                    
  TlsGetValue(param_1);
  return;
}
}

void __vcrt_FlsSetValue(DWORD param_1,LPVOID param_2) {
FARPROC pFVar1;
  
  pFVar1 = FUN_18012af9c(3,"FlsSetValue",(uint *)&DAT_1801794f8,(uint *)"FlsSetValue");
  if (pFVar1 == (FARPROC)0x0) {
    TlsSetValue(param_1,param_2);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180157468)();
  }
  return;
}
}

void __vcrt_getptd(void) {
LPVOID pvVar1;
  
  pvVar1 = __vcrt_getptd_noexit();
  if (pvVar1 != (LPVOID)0x0) {
    return;
  }
                    
  abort();
}
}

LPVOID __vcrt_getptd_noexit(void) {
DWORD dwErrCode;
  int iVar1;
  LPVOID pvVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  
  if (DAT_1801eb0f0 == 0xffffffff) {
    pvVar3 = (LPVOID)0x0;
  }
  else {
    dwErrCode = GetLastError();
    pvVar2 = (LPVOID)__vcrt_FlsGetValue(DAT_1801eb0f0);
    pvVar4 = (LPVOID)0x0;
    pvVar3 = pvVar4;
    if (((pvVar2 != (LPVOID)0xffffffffffffffff) && (pvVar3 = pvVar2, pvVar2 == (LPVOID)0x0)) &&
       (iVar1 = __vcrt_FlsSetValue(DAT_1801eb0f0,(LPVOID)0xffffffffffffffff), pvVar3 = pvVar4,
       iVar1 != 0)) {
      pvVar3 = _calloc_base(1,0x80);
      if ((pvVar3 == (LPVOID)0x0) || (iVar1 = __vcrt_FlsSetValue(DAT_1801eb0f0,pvVar3), iVar1 == 0))
      {
        __vcrt_FlsSetValue(DAT_1801eb0f0,(LPVOID)0x0);
        pvVar2 = pvVar3;
      }
      else {
        *(int32_t *)((longlong)pvVar3 + 0x78) = 0xfffffffe;
        pvVar2 = pvVar4;
        pvVar4 = pvVar3;
      }
      FUN_18012d5e8(pvVar2);
      pvVar3 = pvVar4;
    }
    SetLastError(dwErrCode);
  }
  return pvVar3;
}
}

longlong __vcrt_getptd_noinit(void) {
DWORD dwErrCode;
  longlong lVar1;
  
  if (DAT_1801eb0f0 == -1) {
    lVar1 = 0;
  }
  else {
    dwErrCode = GetLastError();
    lVar1 = __vcrt_FlsGetValue(DAT_1801eb0f0);
    SetLastError(dwErrCode);
    if (lVar1 == -1) {
      lVar1 = 0;
    }
  }
  return lVar1;
}
}

ulonglong __vcrt_initialize(void) {
int32_t uVar1;
  ulonglong uVar2;
  int32_t extraout_var;
  
  uVar2 = __vcrt_initialize_locks();
  if ((char)uVar2 != '\0') {
    uVar1 = __vcrt_initialize_ptd();
    if ((char)uVar1 != '\0') {
      return CONCAT71((int7)(CONCAT44(extraout_var,uVar1) >> 8),1);
    }
    uVar2 = __vcrt_uninitialize_locks();
  }
  return uVar2 & 0xffffffffffffff00;
}
}

void __vcrt_InitializeCriticalSectionEx(LPCRITICAL_SECTION param_1,DWORD param_2,int32_t param_3) {
FARPROC pFVar1;
  
  pFVar1 = FUN_18012af9c(4,"InitializeCriticalSectionEx",(uint *)&DAT_180179510,
                         (uint *)"InitializeCriticalSectionEx");
  if (pFVar1 == (FARPROC)0x0) {
    InitializeCriticalSectionAndSpinCount(param_1,param_2);
  }
  else {
    (*(code *)PTR__guard_dispatch_icall_180157468)(param_1,param_2,param_3);
  }
  return;
}
}

int32_t __vcrt_initialize_locks(void) {
int32_t uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar1 = __vcrt_InitializeCriticalSectionEx
                      ((LPCRITICAL_SECTION)(&DAT_1801edd08 + uVar2 * 0x28),4000,0);
    if ((int)uVar1 == 0) {
      uVar2 = __vcrt_uninitialize_locks();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_1801edd30 = DAT_1801edd30 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 == 0);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}
}

uint __vcrt_initialize_ptd(void) {
uint uVar1;
  int iVar2;
  uint3 extraout_var;
  
  uVar1 = __vcrt_FlsAlloc(&LAB_180127b38);
  DAT_1801eb0f0 = uVar1;
  if (uVar1 != 0xffffffff) {
    iVar2 = __vcrt_FlsSetValue(uVar1,&DAT_1801edc80);
    if (iVar2 != 0) {
      _DAT_1801edcf8 = 0xfffffffe;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    __vcrt_uninitialize_ptd();
    uVar1 = (uint)extraout_var << 8;
  }
  return uVar1 & 0xffffff00;
}
}

bool __vcrt_thread_attach(void) {
LPVOID pvVar1;
  
  pvVar1 = __vcrt_getptd_noexit();
  return pvVar1 != (LPVOID)0x0;
}
}

int32_t __vcrt_uninitialize(char param_1) {
int32_t in_RAX;
  
  if (param_1 == '\0') {
    __vcrt_uninitialize_ptd();
    in_RAX = __vcrt_uninitialize_locks();
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}
}

int32_t __vcrt_uninitialize_locks(void) {
int32_t in_RAX;
  int32_t extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_1801edd30;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1801edd08 + uVar1 * 0x28));
    DAT_1801edd30 = DAT_1801edd30 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}
}

int32_t __vcrt_uninitialize_ptd(void) {
if (DAT_1801eb0f0 != -1) {
    __vcrt_FlsFree(DAT_1801eb0f0);
    DAT_1801eb0f0 = -1;
  }
  return 1;
}
}

UINT __cdecl ___lc_codepage_func(void) {
__acrt_ptd *p_Var1;
  longlong local_res8 [4];
  
  p_Var1 = FUN_1801387d8();
  local_res8[0] = *(longlong *)(p_Var1 + 0x90);
  FUN_18013c1fc((longlong)p_Var1,local_res8);
  return *(UINT *)(local_res8[0] + 0xc);
}
}

