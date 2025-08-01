#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1801312f0 ----
void FUN_1801312f0(int param_1,longlong param_2)

{
  int32_t uVar1;
  
  *(int32_t *)(param_2 + 0x38) = 1;
  *(int *)(param_2 + 0x34) = param_1;
  uVar1 = __acrt_errno_from_os_error(param_1);
  *(int32_t *)(param_2 + 0x2c) = uVar1;
  *(int32_t *)(param_2 + 0x30) = 1;
  return;
}

// ---- Function: __doserrno ----
/* Library Function - Single Match
    __doserrno
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulong * __cdecl __doserrno(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_180138950();
  if (p_Var1 == (__acrt_ptd *)0x0) {
    p_Var1 = (__acrt_ptd *)&DAT_1801eb2bc;
  }
  else {
    p_Var1 = p_Var1 + 0x24;
  }
  return (ulong *)p_Var1;
}

// ---- Function: __doserrno ----
/* Library Function - Single Match
    __doserrno
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulong * __cdecl __doserrno(void)

{
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

// ---- Function: FUN_180131354 ----
ulonglong FUN_180131354(byte param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  if ((param_1 & 4) == 0) {
    if ((param_1 & 1) != 0) {
      if ((param_1 & 2) == 0) {
        return CONCAT71(0x7fffffffffffff,0x7fffffffffffffff < param_2);
      }
      in_RAX = 0x8000000000000000;
      if (0x8000000000000000 < param_2) goto LAB_180131386;
    }
    return in_RAX & 0xffffffffffffff00;
  }
LAB_180131386:
  return CONCAT71((int7)(in_RAX >> 8),1);
}

// ---- Function: FUN_18013138c ----
uint FUN_18013138c(longlong *param_1,longlong *param_2,uint param_3,uint param_4)

{
  short sVar1;
  wint_t *pwVar2;
  short *psVar3;
  ushort *puVar4;
  longlong *plVar5;
  int iVar6;
  ulong *puVar7;
  uint uVar8;
  uint uVar9;
  wint_t _C;
  uint uVar10;
  uint uVar11;
  int local_a8;
  
  pwVar2 = (wint_t *)*param_2;
  if (pwVar2 == (wint_t *)0x0) {
    puVar7 = __doserrno();
    *puVar7 = 0x16;
    FUN_18012b794();
LAB_180131408:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(int32_t *)(param_1 + 6) = 1;
    *(int32_t *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_180131408;
  }
  _C = *pwVar2;
  *param_2 = (longlong)(pwVar2 + 1);
  if ((char)param_1[5] == '\0') {
    FUN_180130ef0(param_1);
  }
  while (iVar6 = iswctype(_C,8), iVar6 != 0) {
    _C = *(wint_t *)*param_2;
    *param_2 = (longlong)((wint_t *)*param_2 + 1);
  }
  uVar10 = param_4 & 0xff | 2;
  if (_C != 0x2d) {
    uVar10 = param_4 & 0xff;
  }
  if ((_C - 0x2b & 0xfffd) == 0) {
    _C = *(ushort *)*param_2;
    *param_2 = (longlong)((ushort *)*param_2 + 1);
  }
  local_a8 = 0xae6;
  uVar8 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_1801317c4;
  if (_C < 0x30) goto LAB_180131749;
  iVar6 = 0x30;
  if (_C < 0x3a) {
LAB_18013158e:
    iVar6 = (uint)_C - iVar6;
LAB_180131744:
    if (iVar6 == -1) goto LAB_180131749;
LAB_18013176f:
    if (iVar6 != 0) goto LAB_18013181e;
    psVar3 = (short *)*param_2;
    sVar1 = *psVar3;
    *param_2 = (longlong)(psVar3 + 1);
    if ((sVar1 - 0x58U & 0xffdf) != 0) {
      *param_2 = (longlong)psVar3;
      uVar8 = 8;
      if (param_3 != 0) {
        uVar8 = param_3;
      }
      if ((sVar1 != 0) && (*psVar3 != sVar1)) {
        puVar7 = __doserrno();
        *puVar7 = 0x16;
        FUN_18012b794();
      }
      goto LAB_1801317c4;
    }
    _C = psVar3[1];
    *param_2 = (longlong)(psVar3 + 2);
    uVar8 = 0x10;
  }
  else {
    if (_C < 0xff10) {
      if (0x65f < _C) {
        if (_C < 0x66a) {
          iVar6 = _C - 0x660;
          goto LAB_180131744;
        }
        if (0x6ef < _C) {
          if (_C < 0x6fa) {
            iVar6 = _C - 0x6f0;
            goto LAB_180131744;
          }
          if (0x965 < _C) {
            if (_C < 0x970) {
              iVar6 = _C - 0x966;
              goto LAB_180131744;
            }
            if (0x9e5 < _C) {
              if (_C < 0x9f0) {
                iVar6 = _C - 0x9e6;
                goto LAB_180131744;
              }
              if (0xa65 < _C) {
                if (_C < 0xa70) {
                  iVar6 = _C - 0xa66;
                  goto LAB_180131744;
                }
                if ((0xae5 < _C) &&
                   ((iVar6 = local_a8, _C < 0xaf0 ||
                    ((iVar6 = 0xb66, 0xb65 < _C &&
                     ((_C < 0xb70 ||
                      ((iVar6 = 0xc66, 0xc65 < _C &&
                       ((_C < 0xc70 ||
                        ((iVar6 = 0xce6, 0xce5 < _C &&
                         ((_C < 0xcf0 ||
                          ((iVar6 = 0xd66, 0xd65 < _C &&
                           ((_C < 0xd70 ||
                            ((iVar6 = 0xe50, 0xe4f < _C &&
                             ((_C < 0xe5a ||
                              ((iVar6 = 0xed0, 0xecf < _C &&
                               ((_C < 0xeda ||
                                ((iVar6 = 0xf20, 0xf1f < _C &&
                                 ((_C < 0xf2a ||
                                  ((iVar6 = 0x1040, 0x103f < _C &&
                                   ((_C < 0x104a ||
                                    ((iVar6 = 0x17e0, 0x17df < _C &&
                                     ((_C < 0x17ea || (iVar6 = 0x1810, (ushort)(_C + 0xe7f0) < 10)))
                                     ))))))))))))))))))))))))))))))))))))) goto LAB_18013158e;
              }
            }
          }
        }
      }
    }
    else if (_C < 0xff1a) {
      iVar6 = _C - 0xff10;
      goto LAB_180131744;
    }
LAB_180131749:
    uVar8 = (uint)_C;
    if ((_C - 0x41 < 0x1a) || (_C - 0x61 < 0x1a)) {
      if (_C - 0x61 < 0x1a) {
        uVar8 = _C - 0x20;
      }
      iVar6 = uVar8 - 0x37;
      goto LAB_18013176f;
    }
LAB_18013181e:
    uVar8 = 10;
  }
  if (param_3 != 0) {
    uVar8 = param_3;
  }
LAB_1801317c4:
  uVar11 = 0;
  do {
    if (_C < 0x30) goto LAB_1801319b3;
    if (_C < 0x3a) {
      uVar9 = _C - 0x30;
LAB_1801319ae:
      if (uVar9 == 0xffffffff) goto LAB_1801319b3;
    }
    else {
      if (_C < 0xff10) {
        if (0x65f < _C) {
          if (_C < 0x66a) {
            uVar9 = _C - 0x660;
            goto LAB_1801319ae;
          }
          if (0x6ef < _C) {
            iVar6 = 0x6f0;
            if (_C < 0x6fa) {
LAB_180131862:
              uVar9 = (uint)_C - iVar6;
              goto LAB_1801319ae;
            }
            if (0x965 < _C) {
              iVar6 = 0x966;
              if (_C < 0x970) goto LAB_180131862;
              if (0x9e5 < _C) {
                iVar6 = 0x9e6;
                if (_C < 0x9f0) goto LAB_180131862;
                if (0xa65 < _C) {
                  iVar6 = 0xa66;
                  if (_C < 0xa70) goto LAB_180131862;
                  if (0xae5 < _C) {
                    iVar6 = local_a8;
                    if (_C < 0xaf0) goto LAB_180131862;
                    iVar6 = 0xb66;
                    if (0xb65 < _C) {
                      if (_C < 0xb70) goto LAB_180131862;
                      iVar6 = 0xc66;
                      if (0xc65 < _C) {
                        if (_C < 0xc70) goto LAB_180131862;
                        iVar6 = 0xce6;
                        if (0xce5 < _C) {
                          if (_C < 0xcf0) goto LAB_180131862;
                          iVar6 = 0xd66;
                          if (0xd65 < _C) {
                            if (_C < 0xd70) goto LAB_180131862;
                            iVar6 = 0xe50;
                            if (0xe4f < _C) {
                              if (_C < 0xe5a) goto LAB_180131862;
                              iVar6 = 0xed0;
                              if (0xecf < _C) {
                                if (_C < 0xeda) goto LAB_180131862;
                                iVar6 = 0xf20;
                                if (0xf1f < _C) {
                                  if (_C < 0xf2a) goto LAB_180131862;
                                  iVar6 = 0x1040;
                                  if (0x103f < _C) {
                                    if (_C < 0x104a) goto LAB_180131862;
                                    iVar6 = 0x17e0;
                                    if (0x17df < _C) {
                                      if (_C < 0x17ea) goto LAB_180131862;
                                      if ((ushort)(_C + 0xe7f0) < 10) {
                                        uVar9 = _C - 0x1810;
                                        goto LAB_1801319ae;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if (_C < 0xff1a) {
        uVar9 = _C - 0xff10;
        goto LAB_1801319ae;
      }
LAB_1801319b3:
      uVar9 = (uint)_C;
      if (((_C < 0x41) || (0x5a < _C)) && ((uVar9 < 0x61 || (0x7a < _C)))) {
        uVar9 = 0xffffffff;
      }
      else {
        if ((ushort)(_C - 0x61) < 0x1a) {
          uVar9 = uVar9 - 0x20;
        }
        uVar9 = uVar9 - 0x37;
      }
    }
    puVar4 = (ushort *)*param_2;
    if (uVar8 <= uVar9) break;
    _C = *puVar4;
    uVar9 = uVar11 * uVar8 + uVar9;
    *param_2 = (longlong)(puVar4 + 1);
    uVar10 = uVar10 | (uint)(uVar9 < uVar11 * uVar8 ||
                            (uint)(0xffffffff / (ulonglong)uVar8) < uVar11) << 2 | 8;
    uVar11 = uVar9;
  } while( true );
  *param_2 = (longlong)(puVar4 + -1);
  if ((_C != 0) && (puVar4[-1] != _C)) {
    puVar7 = __doserrno();
    *puVar7 = 0x16;
    FUN_18012b794();
  }
  if ((uVar10 & 8) == 0) {
    *param_2 = (longlong)pwVar2;
    if ((int32_t *)param_2[1] == (int32_t *)0x0) {
      return 0;
    }
    *(int32_t *)param_2[1] = pwVar2;
    return 0;
  }
  if ((uVar10 & 4) == 0) {
    if ((uVar10 & 1) == 0) {
      if ((uVar10 & 2) == 0) goto LAB_180131af9;
LAB_180131af6:
      uVar11 = -uVar11;
      goto LAB_180131af9;
    }
    if ((uVar10 & 2) == 0) {
      if (uVar11 < 0x80000000) goto LAB_180131af9;
    }
    else if (uVar11 < 0x80000001) goto LAB_180131af6;
    uVar11 = 1;
    uVar8 = uVar10;
  }
  else {
    uVar8 = 1;
    uVar11 = uVar10;
  }
  *(int32_t *)(param_1 + 6) = 1;
  *(int32_t *)((longlong)param_1 + 0x2c) = 0x22;
  if ((uVar8 & uVar11) != 0) {
    plVar5 = (longlong *)param_2[1];
    if ((uVar10 & 2) != 0) {
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = *param_2;
      return 0x7fffffff;
    }
    return 0x7fffffff;
  }
  uVar11 = 0xffffffff;
LAB_180131af9:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar11;
  }
  return uVar11;
}

// ---- Function: FUN_180131b28 ----
ulonglong FUN_180131b28(longlong *param_1,longlong *param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  longlong *plVar5;
  int32_t auVar6 [16];
  byte bVar7;
  uint uVar8;
  int iVar9;
  ulong *puVar10;
  ulonglong uVar11;
  int32_t uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  
  pbVar2 = (byte *)*param_2;
  if (pbVar2 == (byte *)0x0) {
    puVar10 = __doserrno();
    *puVar10 = 0x16;
    FUN_18012b794();
LAB_180131b9d:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(int32_t *)(param_1 + 6) = 1;
    *(int32_t *)((longlong)param_1 + 0x2c) = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
    goto LAB_180131b9d;
  }
  uVar17 = (uint)*pbVar2;
  *param_2 = (longlong)(pbVar2 + 1);
  if ((char)param_1[5] == '\0') {
    FUN_180130ef0(param_1);
  }
  while (uVar8 = FUN_180131e04(uVar17,8,(_locale_t)(param_1 + 3)), uVar8 != 0) {
    uVar17 = (uint)*(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
  }
  uVar8 = param_4 & 0xff | 2;
  if ((char)uVar17 != '-') {
    uVar8 = param_4 & 0xff;
  }
  if ((uVar17 - 0x2b & 0xfd) == 0) {
    uVar17 = (uint)*(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
  }
  uVar16 = param_3;
  if ((param_3 & 0xffffffef) != 0) goto LAB_180131caf;
  cVar1 = (char)uVar17;
  if ((byte)(cVar1 - 0x30U) < 10) {
    iVar9 = cVar1 + -0x30;
LAB_180131c52:
    if (iVar9 != 0) goto LAB_180131ca3;
    pcVar3 = (char *)*param_2;
    cVar1 = *pcVar3;
    *param_2 = (longlong)(pcVar3 + 1);
    if ((cVar1 + 0xa8U & 0xdf) != 0) {
      *param_2 = (longlong)pcVar3;
      uVar16 = 8;
      if (param_3 != 0) {
        uVar16 = param_3;
      }
      if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
        puVar10 = __doserrno();
        *puVar10 = 0x16;
        FUN_18012b794();
      }
      goto LAB_180131caf;
    }
    uVar17 = (uint)(byte)pcVar3[1];
    *param_2 = (longlong)(pcVar3 + 2);
    uVar16 = 0x10;
  }
  else {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      iVar9 = cVar1 + -0x57;
      goto LAB_180131c52;
    }
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      iVar9 = cVar1 + -0x37;
      goto LAB_180131c52;
    }
LAB_180131ca3:
    uVar16 = 10;
  }
  if (param_3 != 0) {
    uVar16 = param_3;
  }
LAB_180131caf:
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (longlong)(int)uVar16;
  uVar15 = 0;
  while( true ) {
    bVar7 = (byte)uVar17;
    if ((byte)(bVar7 - 0x30) < 10) {
      uVar13 = (int)(char)bVar7 - 0x30;
    }
    else if ((byte)(bVar7 + 0x9f) < 0x1a) {
      uVar13 = (int)(char)bVar7 - 0x57;
    }
    else if ((byte)(bVar7 + 0xbf) < 0x1a) {
      uVar13 = (int)(char)bVar7 - 0x37;
    }
    else {
      uVar13 = 0xffffffff;
    }
    pbVar4 = (byte *)*param_2;
    if (uVar16 <= uVar13) break;
    uVar17 = (uint)*pbVar4;
    uVar11 = (longlong)(int)uVar16 * uVar15;
    uVar14 = uVar13 + uVar11;
    *param_2 = (longlong)(pbVar4 + 1);
    uVar8 = uVar8 | (uint)(uVar14 < uVar11 ||
                          SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar6,0) <
                          uVar15) << 2 | 8;
    uVar15 = uVar14;
  }
  *param_2 = (longlong)(pbVar4 + -1);
  if ((bVar7 != 0) && (pbVar4[-1] != bVar7)) {
    puVar10 = __doserrno();
    *puVar10 = 0x16;
    FUN_18012b794();
  }
  if ((uVar8 & 8) == 0) {
    *param_2 = (longlong)pbVar2;
    if ((int32_t *)param_2[1] == (int32_t *)0x0) {
      return 0;
    }
    *(int32_t *)param_2[1] = pbVar2;
    return 0;
  }
  uVar12 = FUN_180131354((byte)uVar8,uVar15);
  if ((char)uVar12 == '\0') {
    if ((uVar8 & 2) != 0) {
      uVar15 = -uVar15;
    }
  }
  else {
    *(int32_t *)(param_1 + 6) = 1;
    *(int32_t *)((longlong)param_1 + 0x2c) = 0x22;
    if ((uVar8 & 1) != 0) {
      plVar5 = (longlong *)param_2[1];
      if ((uVar8 & 2) == 0) {
        if (plVar5 != (longlong *)0x0) {
          *plVar5 = *param_2;
        }
        return 0x7fffffffffffffff;
      }
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = *param_2;
      }
      return 0x8000000000000000;
    }
    uVar15 = 0xffffffffffffffff;
  }
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar15;
  }
  return uVar15;
}

// ---- Function: FUN_180131e04 ----
uint FUN_180131e04(int param_1,uint param_2,_locale_t param_3)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 == (_locale_t)0x0) {
    lVar1 = FUN_180136820();
    if (param_1 + 1U < 0x101) {
      uVar2 = *(ushort *)(lVar1 + (longlong)param_1 * 2) & param_2;
    }
  }
  else if (param_1 + 1U < 0x101) {
    uVar2 = *(ushort *)(*(longlong *)param_3->locinfo + (longlong)param_1 * 2) & param_2;
  }
  else if ((int)param_3->locinfo->lc_collate_cp < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = _isctype_l(param_1,param_2,param_3);
  }
  return uVar2;
}

// ---- Function: FUN_180131e7c ----
ulonglong FUN_180131e7c(longlong param_1,longlong *param_2,uint param_3,int32_t param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_58;
  longlong *local_50;
  longlong local_48 [2];
  int32_t local_38;
  int32_t *local_30;
  int32_t *puStack_28;
  char local_20;
  int32_t local_1c;
  char local_18;
  int32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1801ee158 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1801eb448;
    puStack_28 = PTR_DAT_1801eb450;
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_180131b28(local_48,&local_58,param_3,CONCAT31((int3)((uint)param_4 >> 8),1));
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}

// ---- Function: FUN_180131f30 ----
ulonglong FUN_180131f30(longlong param_1,longlong *param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_58;
  longlong *local_50;
  longlong local_48 [2];
  int32_t local_38;
  int32_t *local_30;
  int32_t *puStack_28;
  char local_20;
  int32_t local_1c;
  char local_18;
  int32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1801ee158 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1801eb448;
    puStack_28 = PTR_DAT_1801eb450;
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_180131b28(local_48,&local_58,param_3,0);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}

// ---- Function: FUN_180131fe4 ----
uint FUN_180131fe4(longlong param_1,longlong *param_2,uint param_3,int32_t param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong local_58;
  longlong *local_50;
  longlong local_48 [2];
  int32_t local_38;
  int32_t *local_30;
  int32_t *puStack_28;
  char local_20;
  int32_t local_1c;
  char local_18;
  int32_t local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1801ee158 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1801eb448;
    puStack_28 = PTR_DAT_1801eb450;
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_1;
  }
  local_58 = param_1;
  local_50 = param_2;
  uVar1 = FUN_18013138c(local_48,&local_58,param_3,CONCAT31((int3)((uint)param_4 >> 8),1));
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_18012b3a8(local_48);
    *(int32_t *)(lVar2 + 0x24) = local_14;
  }
  return uVar1;
}

// ---- Function: common_strtod_l__ ----
/* Library Function - Multiple Matches With Same Base Name
    double __cdecl common_strtod_l<double,char>(char const * __ptr64 const,char * __ptr64 * __ptr64
   const,struct __crt_locale_pointers * __ptr64 const)
    double __cdecl common_strtod_l<double,wchar_t>(wchar_t const * __ptr64 const,wchar_t * __ptr64 *
   __ptr64 const,struct __crt_locale_pointers * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

double common_strtod_l<>(longlong param_1,longlong *param_2,__crt_locale_pointers *param_3)

{
  int iVar1;
  ulong *puVar2;
  double local_res8;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  localeinfo_struct local_20;
  char local_10;
  
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_1;
  }
  if (param_1 == 0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_18012b794();
    local_res8 = 0.0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_3);
    local_res8 = 0.0;
    if (param_2 != (longlong *)0x0) {
      *param_2 = param_1;
    }
    local_38 = param_1;
    local_30 = param_2;
    iVar1 = parse_floating_point<>(&local_20,&local_38,&local_res8);
    if (iVar1 - 2U < 2) {
      puVar2 = __doserrno();
      *puVar2 = 0x22;
    }
    if (local_10 != '\0') {
      *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
    }
  }
  return local_res8;
}

// ---- Function: parse_floating_point__ ----
/* Library Function - Multiple Matches With Same Base Name
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<char>,double>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<char>,double * __ptr64 const)
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point<class
   __crt_strtox::c_string_character_source<wchar_t>,double>(struct __crt_locale_pointers * __ptr64
   const,class __crt_strtox::c_string_character_source<wchar_t>,double * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void parse_floating_point<>(_locale_t param_1,longlong *param_2,double *param_3)

{
  ulong *puVar1;
  ulonglong uVar2;
  int32_t auStack_348 [32];
  floating_point_string local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_1801eb080 ^ (ulonglong)auStack_348;
  if ((param_3 == (double *)0x0) || (param_1 == (_locale_t)0x0)) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_18012b794();
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
  }
  else {
    uVar2 = FUN_1801321e0(param_1,param_2,(int *)local_328);
    __crt_strtox::parse_floating_point_write_result<double>
              ((floating_point_parse_result)uVar2,local_328,param_3);
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
  }
  FUN_1801252c0(local_18 ^ (ulonglong)auStack_348);
  return;
}

// ---- Function: FUN_1801321e0 ----
ulonglong FUN_1801321e0(_locale_t param_1,longlong *param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulong *puVar8;
  ulonglong uVar9;
  byte *pbVar10;
  char cVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  char *pcVar16;
  byte bVar17;
  byte *pbVar18;
  int local_res10 [2];
  int *local_res18;
  int *local_res20;
  
  pbVar18 = (byte *)*param_2;
  local_res18 = param_3;
  if (pbVar18 == (byte *)0x0) {
    puVar8 = __doserrno();
    *puVar8 = 0x16;
    FUN_18012b794();
    return 7;
  }
  bVar5 = *pbVar18;
  *param_2 = (longlong)(pbVar18 + 1);
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,bVar5);
  uVar6 = FUN_180131e04((uint)bVar5,8,param_1);
  iVar12 = local_res10[0];
  while (local_res10[0]._1_3_ = (int32_t)((uint)iVar12 >> 8), uVar6 != 0) {
    bVar5 = *(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,bVar5);
    uVar6 = FUN_180131e04((uint)bVar5,8,param_1);
    iVar12 = local_res10[0];
  }
  piVar13 = param_3 + 0xc2;
  *(bool *)piVar13 = bVar5 == 0x2d;
  if ((bVar5 == 0x2d) || (bVar5 == 0x2b)) {
    bVar5 = *(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,bVar5);
    iVar12 = local_res10[0];
  }
  local_res10[0] = iVar12;
  if ((bVar5 == 0x49) || (bVar5 == 0x69)) {
    uVar9 = FUN_180132688((char *)local_res10,param_2,(char *)pbVar18);
    return uVar9;
  }
  if ((bVar5 + 0xb2 & 0xdf) == 0) {
    uVar9 = FUN_1801327cc((char *)local_res10,param_2,(char *)pbVar18);
    return uVar9;
  }
  bVar17 = 0;
  if (bVar5 == 0x30) {
    pbVar10 = (byte *)*param_2;
    bVar1 = *pbVar10;
    *param_2 = (longlong)(pbVar10 + 1);
    if ((bVar1 + 0xa8 & 0xdf) == 0) {
      bVar5 = pbVar10[1];
      *param_2 = (longlong)(pbVar10 + 2);
      bVar17 = 1;
      pbVar18 = pbVar10;
    }
    else {
      *param_2 = (longlong)pbVar10;
      if ((bVar1 != 0) && (*pbVar10 != bVar1)) {
        puVar8 = __doserrno();
        *puVar8 = 0x16;
        FUN_18012b794();
      }
    }
  }
  local_res10[0] = 0;
  piVar14 = local_res18 + 2;
  bVar4 = false;
  if (bVar5 == 0x30) {
    bVar4 = true;
    do {
      bVar5 = *(byte *)*param_2;
      *param_2 = (longlong)((byte *)*param_2 + 1);
    } while (bVar5 == 0x30);
  }
  uVar6 = (-(uint)(bVar17 != 0) & 6) + 9;
  piVar15 = piVar14;
  while( true ) {
    if ((byte)(bVar5 - 0x30) < 10) {
      uVar7 = (int)(char)bVar5 - 0x30;
    }
    else if ((byte)(bVar5 + 0x9f) < 0x1a) {
      uVar7 = (int)(char)bVar5 - 0x57;
    }
    else if ((byte)(bVar5 + 0xbf) < 0x1a) {
      uVar7 = (int)(char)bVar5 - 0x37;
    }
    else {
      uVar7 = 0xffffffff;
    }
    if (uVar6 < uVar7) break;
    bVar4 = true;
    if (piVar15 != piVar13) {
      *(char *)piVar15 = (char)uVar7;
      piVar15 = (int *)((longlong)piVar15 + 1);
    }
    local_res10[0] = local_res10[0] + 1;
    bVar5 = *(byte *)*param_2;
    *param_2 = (longlong)((byte *)*param_2 + 1);
  }
  if (bVar5 == **(byte **)param_1->locinfo->ctype1_refcount) {
    bVar5 = *(byte *)*param_2;
    pbVar10 = (byte *)*param_2 + 1;
    *param_2 = (longlong)pbVar10;
    if ((piVar15 == piVar14) && (bVar5 == 0x30)) {
      bVar4 = true;
      do {
        bVar5 = *pbVar10;
        local_res10[0] = local_res10[0] + -1;
        pbVar10 = pbVar10 + 1;
        *param_2 = (longlong)pbVar10;
      } while (bVar5 == 0x30);
    }
    while( true ) {
      if (((char)bVar5 < '0') || ('9' < (char)bVar5)) {
        if ((byte)(bVar5 + 0x9f) < 0x1a) {
          uVar7 = (int)(char)bVar5 - 0x57;
        }
        else if ((byte)(bVar5 + 0xbf) < 0x1a) {
          uVar7 = (int)(char)bVar5 - 0x37;
        }
        else {
          uVar7 = 0xffffffff;
        }
      }
      else {
        uVar7 = (int)(char)bVar5 - 0x30;
      }
      if (uVar6 < uVar7) break;
      bVar4 = true;
      if (piVar15 != piVar13) {
        *(char *)piVar15 = (char)uVar7;
        piVar15 = (int *)((longlong)piVar15 + 1);
      }
      bVar5 = *(byte *)*param_2;
      *param_2 = (longlong)((byte *)*param_2 + 1);
    }
  }
  pbVar10 = (byte *)(*param_2 + -1);
  *param_2 = (longlong)pbVar10;
  local_res20 = piVar14;
  if (!bVar4) {
    if ((bVar5 != 0) && (*pbVar10 != bVar5)) {
      puVar8 = __doserrno();
      *puVar8 = 0x16;
      FUN_18012b794();
    }
    *param_2 = (longlong)pbVar18;
    if (bVar17 != 0) {
      return 2;
    }
    return 7;
  }
  if ((bVar5 != 0) && (*pbVar10 != bVar5)) {
    puVar8 = __doserrno();
    *puVar8 = 0x16;
    FUN_18012b794();
  }
  pcVar3 = (char *)*param_2;
  cVar11 = *pcVar3;
  pcVar16 = pcVar3 + 1;
  *param_2 = (longlong)pcVar16;
  if (cVar11 == 'E') {
LAB_1801324b0:
    bVar5 = bVar17 ^ 1;
  }
  else if (cVar11 == 'P') {
LAB_1801324ab:
    bVar5 = bVar17;
  }
  else {
    if (cVar11 == 'e') goto LAB_1801324b0;
    bVar5 = 0;
    if (cVar11 == 'p') goto LAB_1801324ab;
  }
  iVar12 = 0;
  if (bVar5 != 0) {
    cVar2 = *pcVar16;
    pcVar16 = pcVar3 + 2;
    *param_2 = (longlong)pcVar16;
    if ((cVar2 == '+') || (cVar11 = cVar2, cVar2 == '-')) {
      cVar11 = *pcVar16;
      pcVar16 = pcVar3 + 3;
      *param_2 = (longlong)pcVar16;
    }
    bVar4 = false;
    if (cVar11 != '0') goto LAB_180132509;
    do {
      cVar11 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      *param_2 = (longlong)pcVar16;
    } while (cVar11 == '0');
    while( true ) {
      bVar4 = true;
LAB_180132509:
      if ((cVar11 < '0') || ('9' < cVar11)) {
        if ((byte)(cVar11 + 0x9fU) < 0x1a) {
          uVar6 = (int)cVar11 - 0x57;
        }
        else {
          if (0x19 < (byte)(cVar11 + 0xbfU)) goto LAB_18013255a;
          uVar6 = (int)cVar11 - 0x37;
        }
      }
      else {
        uVar6 = (int)cVar11 - 0x30;
      }
      if (9 < uVar6) goto LAB_18013255a;
      bVar4 = true;
      iVar12 = uVar6 + iVar12 * 10;
      if (0x1450 < iVar12) break;
      cVar11 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      *param_2 = (longlong)pcVar16;
    }
    iVar12 = 0x1451;
LAB_18013255a:
    do {
      if ((byte)(cVar11 - 0x30U) < 10) {
        uVar6 = (int)cVar11 - 0x30;
      }
      else if ((byte)(cVar11 + 0x9fU) < 0x1a) {
        uVar6 = (int)cVar11 - 0x57;
      }
      else {
        if (0x19 < (byte)(cVar11 + 0xbfU)) goto LAB_180132597;
        uVar6 = (int)cVar11 - 0x37;
      }
      if (9 < uVar6) goto LAB_180132597;
      cVar11 = *pcVar16;
      pcVar16 = pcVar16 + 1;
      *param_2 = (longlong)pcVar16;
    } while( true );
  }
LAB_1801325cd:
  *param_2 = (longlong)(pcVar16 + -1);
  if ((cVar11 != '\0') && (pcVar16[-1] != cVar11)) {
    puVar8 = __doserrno();
    *puVar8 = 0x16;
    FUN_18012b794();
  }
  if (piVar15 != piVar14) {
    do {
      piVar13 = (int *)((longlong)piVar15 + -1);
      if (*(char *)piVar13 != '\0') break;
      piVar15 = piVar13;
    } while (piVar13 != piVar14);
    if (piVar15 != piVar14) {
      if (0x1450 < iVar12) {
        return 9;
      }
      if (-0x1451 < iVar12) {
        iVar12 = iVar12 + ((-(uint)(bVar17 != 0) & 3) + 1) * local_res10[0];
        if (0x1450 < iVar12) {
          return 9;
        }
        if (-0x1451 < iVar12) {
          *local_res18 = iVar12;
          local_res18[1] = (int)piVar15 - (int)piVar14;
          return (ulonglong)bVar17;
        }
      }
      return 8;
    }
  }
  return 2;
LAB_180132597:
  if (cVar2 == '-') {
    iVar12 = -iVar12;
  }
  if (!bVar4) {
    *param_2 = (longlong)(pcVar16 + -1);
    if ((cVar11 != '\0') && (pcVar16[-1] != cVar11)) {
      puVar8 = __doserrno();
      *puVar8 = 0x16;
      FUN_18012b794();
    }
    *param_2 = (longlong)pcVar3;
    pcVar16 = pcVar3 + 1;
    cVar11 = *pcVar3;
  }
  goto LAB_1801325cd;
}

// ---- Function: FUN_180132688 ----
int32_t FUN_180132688(char *param_1,longlong *param_2,char *param_3)

{
  ulong *puVar1;
  char cVar2;
  longlong lVar3;
  int32_t uVar4;
  
  lVar3 = 0;
  uVar4 = 3;
  while ((cVar2 = *param_1, cVar2 == (&DAT_18017a338)[lVar3] || (cVar2 == (&DAT_18017a33c)[lVar3])))
  {
    lVar3 = lVar3 + 1;
    cVar2 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    *param_1 = cVar2;
    if (lVar3 == 3) {
      lVar3 = *param_2;
      *param_2 = lVar3 + -1;
      if ((cVar2 != '\0') && (*(char *)(lVar3 + -1) != cVar2)) {
        puVar1 = __doserrno();
        *puVar1 = 0x16;
        FUN_18012b794();
      }
      param_3 = (char *)*param_2;
      lVar3 = 0;
      cVar2 = *param_3;
      *param_2 = (longlong)(param_3 + 1);
      *param_1 = cVar2;
      while ((cVar2 == "INITY"[lVar3] || (cVar2 == "inity"[lVar3]))) {
        lVar3 = lVar3 + 1;
        cVar2 = *(char *)*param_2;
        *param_2 = (longlong)((char *)*param_2 + 1);
        *param_1 = cVar2;
        if (lVar3 == 5) {
          lVar3 = *param_2;
          *param_2 = lVar3 + -1;
          if ((cVar2 != '\0') && (*(char *)(lVar3 + -1) != cVar2)) {
            puVar1 = __doserrno();
            *puVar1 = 0x16;
            FUN_18012b794();
          }
          return 3;
        }
      }
      *param_2 = *param_2 + -1;
      if ((cVar2 != '\0') && (*(char *)*param_2 != cVar2)) {
        puVar1 = __doserrno();
        *puVar1 = 0x16;
        FUN_18012b794();
      }
LAB_1801327c2:
      *param_1 = '\0';
      *param_2 = (longlong)param_3;
      return uVar4;
    }
  }
  *param_2 = *param_2 + -1;
  if ((cVar2 != '\0') && (*(char *)*param_2 != cVar2)) {
    puVar1 = __doserrno();
    *puVar1 = 0x16;
    FUN_18012b794();
  }
  uVar4 = 7;
  goto LAB_1801327c2;
}

// ---- Function: FUN_1801327cc ----
int32_t FUN_1801327cc(char *param_1,longlong *param_2,char *param_3)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  ulong *puVar4;
  int32_t uVar5;
  longlong lVar6;
  ulong uVar7;
  
  lVar2 = 0;
  do {
    lVar6 = lVar2;
    cVar1 = *param_1;
    if ((cVar1 != (&DAT_18017a350)[lVar6]) && (cVar1 != (&DAT_18017a354)[lVar6])) {
      *param_2 = *param_2 + -1;
      if ((cVar1 != '\0') && (*(char *)*param_2 != cVar1)) {
        puVar4 = __doserrno();
        *puVar4 = 0x16;
        FUN_18012b794();
      }
      uVar5 = 7;
      goto LAB_1801329ad;
    }
    cVar1 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    *param_1 = cVar1;
    lVar2 = lVar6 + 1;
  } while (lVar6 + 1 != 3);
  lVar2 = *param_2;
  uVar7 = (int)lVar6 + 0x14;
  *param_2 = lVar2 + -1;
  if ((cVar1 != '\0') && (*(char *)(lVar2 + -1) != cVar1)) {
    puVar4 = __doserrno();
    *puVar4 = uVar7;
    FUN_18012b794();
  }
  param_3 = (char *)*param_2;
  cVar1 = *param_3;
  *param_2 = (longlong)(param_3 + 1);
  *param_1 = cVar1;
  pcVar3 = (char *)*param_2;
  if (cVar1 == '(') {
    cVar1 = *pcVar3;
    *param_2 = (longlong)(pcVar3 + 1);
    *param_1 = cVar1;
    uVar5 = FUN_180132a00(param_1,param_2);
    if ((char)uVar5 != '\0') {
      lVar2 = *param_2;
      cVar1 = *param_1;
      *param_2 = lVar2 + -1;
      if ((cVar1 != '\0') && (*(char *)(lVar2 + -1) != cVar1)) {
        puVar4 = __doserrno();
        *puVar4 = uVar7;
        FUN_18012b794();
      }
      return 5;
    }
    uVar5 = FUN_1801329b8(param_1,param_2);
    cVar1 = *param_1;
    if ((char)uVar5 != '\0') {
      lVar2 = *param_2;
      *param_2 = lVar2 + -1;
      if ((cVar1 != '\0') && (*(char *)(lVar2 + -1) != cVar1)) {
        puVar4 = __doserrno();
        *puVar4 = uVar7;
        FUN_18012b794();
      }
      return 6;
    }
    while (cVar1 != ')') {
      if (cVar1 == '\0') {
        *param_2 = *param_2 + -1;
LAB_1801329a8:
        uVar5 = 4;
LAB_1801329ad:
        *param_1 = '\0';
        *param_2 = (longlong)param_3;
        return uVar5;
      }
      if ((((9 < (byte)(cVar1 - 0x30U)) && (0x19 < (byte)(cVar1 + 0x9fU))) &&
          (0x19 < (byte)(cVar1 + 0xbfU))) && (cVar1 != '_')) {
        *param_2 = *param_2 + -1;
        if (*(char *)*param_2 != cVar1) {
          puVar4 = __doserrno();
          *puVar4 = uVar7;
          FUN_18012b794();
        }
        goto LAB_1801329a8;
      }
      cVar1 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
      *param_1 = cVar1;
    }
  }
  else {
    *param_2 = (longlong)(pcVar3 + -1);
    if ((cVar1 != '\0') && (pcVar3[-1] != cVar1)) {
      puVar4 = __doserrno();
      *puVar4 = uVar7;
      FUN_18012b794();
    }
    *param_1 = '\0';
    *param_2 = (longlong)param_3;
  }
  return 4;
}

// ---- Function: FUN_1801329b8 ----
int32_t FUN_1801329b8(char *param_1,int32_t *param_2)

{
  char cVar1;
  char *in_RAX;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  lVar3 = lVar2;
  do {
    cVar1 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    if ((cVar1 != (&DAT_18017a368)[lVar3]) && (cVar1 != (&DAT_18017a36c)[lVar3]))
    goto LAB_1801329f9;
    lVar3 = lVar3 + 1;
    cVar1 = *(char *)*param_2;
    in_RAX = (char *)*param_2 + 1;
    *param_2 = in_RAX;
    *param_1 = cVar1;
  } while (lVar3 != 4);
  lVar2 = 1;
LAB_1801329f9:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)lVar2);
}

// ---- Function: FUN_180132a00 ----
int32_t FUN_180132a00(char *param_1,int32_t *param_2)

{
  char cVar1;
  char *in_RAX;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  lVar3 = lVar2;
  do {
    cVar1 = *param_1;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    if ((cVar1 != (&DAT_18017a358)[lVar3]) && (cVar1 != (&DAT_18017a360)[lVar3]))
    goto LAB_180132a41;
    lVar3 = lVar3 + 1;
    cVar1 = *(char *)*param_2;
    in_RAX = (char *)*param_2 + 1;
    *param_2 = in_RAX;
    *param_1 = cVar1;
  } while (lVar3 != 5);
  lVar2 = 1;
LAB_180132a41:
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)lVar2);
}

