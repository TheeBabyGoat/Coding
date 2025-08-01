#include <stdint.h>
#include <stddef.h>

// ---- Function: parse_floating_point_write_result_double_ ----
/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::parse_floating_point_write_result<double>(enum
   __crt_strtox::floating_point_parse_result,struct __crt_strtox::floating_point_string const &
   __ptr64,double * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

SLD_STATUS __cdecl
__crt_strtox::parse_floating_point_write_result<double>
          (floating_point_parse_result param_1,floating_point_string *param_2,double *param_3)

{
  SLD_STATUS SVar1;
  double dVar2;
  double *local_18;
  int32_t local_10;
  
  if ((int)param_1 < 6) {
    if (param_1 == 5) {
      dVar2 = (double)((-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) &
                       0x8000000000000000) + 0x7ff0000000000000 |
                       (ulonglong)*param_3 & 0x7ff0000000000000 | 1);
    }
    else {
      local_18 = param_3;
      if (param_1 == 0) {
        local_10 = 1;
        SVar1 = FUN_1801331ac((uint *)param_2,&local_18);
        return SVar1;
      }
      if (param_1 == 1) {
        local_10 = 1;
        SVar1 = convert_hexadecimal_string_to_floating_type_common
                          (param_2,(floating_point_value *)&local_18);
        return SVar1;
      }
      if (param_1 == 2) {
        dVar2 = (double)(-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) &
                        0x8000000000000000);
      }
      else if (param_1 == 3) {
        dVar2 = (double)((-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) &
                         0x8000000000000000) + 0x7ff0000000000000 |
                        (ulonglong)*param_3 & 0x7ff0000000000000);
      }
      else {
        if (param_1 != 4) {
          return 1;
        }
        dVar2 = (double)((-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) &
                         0x8000000000000000) + 0x7fffffffffffffff);
      }
    }
    *param_3 = dVar2;
  }
  else {
    if (param_1 != 6) {
      if (param_1 == 7) {
        *param_3 = 0.0;
      }
      else {
        if (param_1 == 8) {
          *param_3 = (double)(-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) &
                             0x8000000000000000);
          return 2;
        }
        if (param_1 == 9) {
          *param_3 = (double)((-(ulonglong)(param_2[0x308] != (floating_point_string)0x0) &
                              0x8000000000000000) + 0x7ff0000000000000 |
                             (ulonglong)*param_3 & 0x7ff0000000000000);
          return 3;
        }
      }
      return 1;
    }
    *param_3 = -NAN;
  }
  return 0;
}

// ---- Function: FUN_180132c28 ----
int32_t FUN_180132c28(int32_t *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    return *param_1;
  }
                    
  _invoke_watson(L"_is_double",L"__crt_strtox::floating_point_value::as_double",
                 L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1db,0);
}

// ---- Function: FUN_180132c64 ----
int32_t FUN_180132c64(int32_t *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    return *param_1;
  }
                    
  _invoke_watson(L"!_is_double",L"__crt_strtox::floating_point_value::as_float",
                 L"minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h",0x1e1,0);
}

// ---- Function: FUN_180132ca0 ----
int32_t
FUN_180132ca0(ulonglong param_1,int param_2,ulonglong param_3,char param_4,int32_t *param_5)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  char cVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  
  uVar8 = param_3 & 0xff;
  if (param_1 < 0x100000000) {
    iVar6 = 0x1f;
    uVar3 = (uint)param_1;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 + 1;
    }
  }
  else {
    iVar6 = 0x1f;
    uVar3 = (uint)(param_1 >> 0x20);
    if (uVar3 != 0) {
      for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar6 + 1;
    }
    iVar6 = iVar6 + 0x20;
  }
  cVar7 = *(char *)(param_5 + 1);
  iVar6 = ((-(uint)(cVar7 != '\0') & 0x1d) + 0x18) - iVar6;
  iVar9 = param_2 - iVar6;
  iVar10 = (-(uint)(cVar7 != '\0') & 0x380) + 0x7f;
  iVar4 = (int)uVar8;
  if (iVar10 < iVar9) goto LAB_180132f9a;
  bVar2 = (byte)param_3;
  if (iVar9 < (int)((-(uint)(cVar7 != '\0') & 0xfffffc80) - 0x7e)) {
    iVar12 = param_2 + -1 + iVar10;
    iVar9 = -iVar10;
    if (iVar12 < 0) {
      if ((uint)-iVar12 < 0x40) {
        bVar5 = (byte)-iVar12;
        uVar11 = 1L << (bVar5 - 1 & 0x3f);
        uVar13 = uVar11 & param_1;
        if ((param_4 == '\0') || ((param_1 & uVar11 - 1) != 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((uVar13 != 0) || (bVar1)) {
          iVar10 = fegetround();
          if (iVar10 == 0) {
            if ((uVar13 == 0) || ((bVar2 = 1, !bVar1 && ((1L << (bVar5 & 0x3f) & param_1) == 0))))
            goto LAB_180132e26;
          }
          else if (iVar10 != 0x100) {
            if (iVar10 != 0x200) goto LAB_180132e26;
            bVar2 = bVar2 ^ 1;
          }
        }
        else {
LAB_180132e26:
          bVar2 = 0;
        }
        param_1 = (param_1 >> (bVar5 & 0x3f)) + (ulonglong)bVar2;
      }
      else {
        param_1 = 0;
      }
      cVar7 = *(char *)(param_5 + 1);
      if (param_1 == 0) {
        if (cVar7 == '\0') {
          *(int *)*param_5 = iVar4 << 0x1f;
        }
        else {
          *(ulonglong *)*param_5 = uVar8 << 0x3f;
        }
        return 2;
      }
      if ((-(ulonglong)(cVar7 != '\0') & 0xfffffff800000) + 0x7fffff < param_1) {
        iVar9 = ((param_2 - iVar12) - iVar6) + -1;
      }
      goto LAB_180132fd5;
    }
  }
  else {
    if (iVar6 < 0) {
      if ((uint)-iVar6 < 0x40) {
        bVar5 = (byte)-iVar6;
        uVar11 = 1L << (bVar5 - 1 & 0x3f);
        uVar13 = uVar11 & param_1;
        if ((param_4 == '\0') || ((param_1 & uVar11 - 1) != 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if ((uVar13 != 0) || (bVar1)) {
          iVar6 = fegetround();
          if (iVar6 == 0) {
            if ((uVar13 == 0) || ((!bVar1 && ((1L << (bVar5 & 0x3f) & param_1) == 0))))
            goto LAB_180132f47;
            bVar2 = 1;
          }
          else if (iVar6 != 0x100) {
            if (iVar6 != 0x200) goto LAB_180132f47;
            bVar2 = bVar2 ^ 1;
          }
        }
        else {
LAB_180132f47:
          bVar2 = 0;
        }
        param_1 = (param_1 >> (bVar5 & 0x3f)) + (ulonglong)bVar2;
      }
      else {
        param_1 = 0;
      }
      cVar7 = *(char *)(param_5 + 1);
      if ((-(ulonglong)(cVar7 != '\0') & 0x1fffffff000000) + 0xffffff < param_1) {
        param_1 = param_1 >> 1;
        iVar9 = iVar9 + 1;
        if ((int)((-(uint)(cVar7 != '\0') & 0x380) + 0x7f) < iVar9) {
LAB_180132f9a:
          if (cVar7 == '\0') {
            *(uint *)*param_5 = iVar4 << 0x1f | 0x7f800000;
          }
          else {
            *(ulonglong *)*param_5 = uVar8 << 0x3f | 0x7ff0000000000000;
          }
          return 3;
        }
      }
      goto LAB_180132fd5;
    }
    iVar12 = iVar6;
    if (iVar6 < 1) goto LAB_180132fd5;
  }
  param_1 = param_1 << ((byte)iVar12 & 0x3f);
LAB_180132fd5:
  uVar11 = (-(ulonglong)(cVar7 != '\0') & 0xfffffff800000) + 0x7fffff & param_1;
  if (cVar7 == '\0') {
    *(uint *)*param_5 =
         (iVar9 + 0x7f) * 0x800000 & 0x7f800000U | iVar4 << 0x1f | (uint)uVar11 & 0x7fffff;
  }
  else {
    *(ulonglong *)*param_5 = ((ulonglong)(iVar9 + 0x3ffU & 0x7ff) | uVar8 << 0xb) << 0x34 | uVar11;
  }
  return 0;
}

// ---- Function: FUN_18013304c ----
void FUN_18013304c(uint *param_1,uint param_2,ulonglong param_3,byte param_4,int32_t *param_5)

{
  sbyte sVar1;
  ulonglong uVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  
  uVar8 = 0;
  iVar5 = (-(uint)(*(char *)(param_5 + 1) != '\0') & 0x1d) + 0x17;
  if (param_2 < 0x41) {
    if (*param_1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulonglong)param_1[1];
      uVar8 = 0;
      if (1 < *param_1) {
        uVar8 = param_1[2];
      }
    }
    bVar11 = param_4 ^ 1;
    uVar4 = ((ulonglong)uVar8 << 0x20) + uVar4;
  }
  else {
    uVar7 = param_2 >> 5;
    uVar6 = uVar7 - 2;
    uVar8 = param_1[(ulonglong)uVar6 + 1];
    uVar9 = param_2 & 0x1f;
    uVar10 = 0;
    if (uVar9 == 0) {
      iVar5 = iVar5 + uVar6 * 0x20;
      uVar4 = CONCAT44(param_1[(ulonglong)(uVar7 - 1) + 1],uVar8);
      bVar11 = param_4 ^ 1;
      uVar8 = 0;
      if (uVar6 != 0) {
        do {
          uVar10 = 0;
          if (param_1[(ulonglong)uVar8 + 1] == 0) {
            uVar10 = (ulonglong)bVar11;
          }
          uVar8 = uVar8 + 1;
          bVar11 = (byte)uVar10;
        } while (uVar8 != uVar6);
      }
    }
    else {
      sVar1 = (sbyte)uVar9;
      iVar5 = uVar6 * 0x20 + uVar9 + iVar5;
      uVar9 = (1 << sVar1) - 1;
      uVar4 = ((ulonglong)param_1[(ulonglong)(uVar7 - 1) + 1] << (-sVar1 + 0x20U & 0x3f)) +
              ((ulonglong)(param_1[(ulonglong)uVar7 + 1] & uVar9) << (-sVar1 + 0x40U & 0x3f)) +
              (ulonglong)((~uVar9 & uVar8) >> sVar1);
      if ((param_4 != 0) || (bVar11 = 1, (uVar9 & uVar8) != 0)) {
        bVar11 = 0;
      }
      uVar2 = 0;
      if (uVar6 != 0) {
        do {
          uVar10 = uVar2;
          bVar3 = 0;
          if (param_1[uVar10 + 1] == 0) {
            bVar3 = bVar11;
          }
          bVar11 = bVar3;
          uVar8 = (int)uVar10 + 1;
          uVar2 = (ulonglong)uVar8;
        } while (uVar8 != uVar6);
      }
    }
    param_3 = CONCAT71((int7)(uVar10 >> 8),(char)param_3);
  }
  FUN_180132ca0(uVar4,iVar5,param_3,bVar11,param_5);
  return;
}

// ---- Function: FUN_1801331ac ----
void FUN_1801331ac(uint *param_1,int32_t *param_2)

{
  byte bVar1;
  sbyte sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  ulong *puVar12;
  ulonglong *puVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  uint *puVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  rsize_t _MaxCount;
  uint uVar28;
  uint *puVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  bool bVar34;
  int32_t auStackY_bb8 [32];
  uint local_b88;
  int32_t local_b24 [460];
  uint local_958;
  uint local_954 [115];
  uint local_788;
  uint local_784 [115];
  uint local_5b8;
  int32_t local_5b4;
  uint local_3e8;
  uint local_3e4 [115];
  uint local_218;
  uint local_214 [115];
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_bb8;
  uVar4 = param_1[1];
  uVar3 = (-(uint)(*(char *)(param_2 + 1) != '\0') & 0x1d) + 0x19;
  uVar25 = 0;
  uVar15 = 0;
  local_788 = 0;
  uVar28 = *param_1;
  if ((int)*param_1 < 0) {
    uVar28 = uVar15;
  }
  uVar26 = uVar28;
  if (uVar4 <= uVar28) {
    uVar26 = uVar4;
  }
  uVar28 = uVar28 - uVar26;
  puVar24 = (uint *)((longlong)param_1 + (ulonglong)uVar26 + 8);
  puVar11 = (uint *)((longlong)param_1 + (ulonglong)uVar4 + 8);
  puVar29 = param_1 + 2;
  uVar4 = (int)puVar11 - (int)puVar24;
  uVar30 = uVar25;
  uVar19 = uVar25;
  uVar33 = uVar25;
  if (puVar29 != puVar24) {
    do {
      uVar27 = (uint)uVar33;
      iVar31 = (int)uVar30;
      uVar26 = uVar27;
      if (iVar31 == 9) {
        iVar31 = 0;
        uVar30 = uVar25;
        uVar32 = uVar25;
        if ((uint)uVar19 != 0) {
          do {
            uVar26 = (int)uVar32 + 1;
            uVar18 = (ulonglong)local_784[uVar32] * 1000000000 + uVar30;
            local_784[uVar32] = (uint)uVar18;
            uVar30 = uVar18 >> 0x20;
            uVar32 = (ulonglong)uVar26;
          } while (uVar26 != (uint)uVar19);
          uVar26 = (uint)(uVar18 >> 0x20);
          if (uVar26 == 0) {
            uVar19 = (ulonglong)local_788;
          }
          else if (local_788 < 0x73) {
            local_784[local_788] = uVar26;
            local_788 = local_788 + 1;
            uVar19 = (ulonglong)local_788;
          }
          else {
            local_788 = 0;
            uVar19 = uVar25;
          }
        }
        uVar26 = uVar15;
        if (uVar27 != 0) {
          uVar30 = uVar25;
          uVar21 = (uint)uVar19;
          if ((uint)uVar19 != 0) {
            do {
              uVar21 = (int)uVar30 + 1;
              uVar32 = uVar33 + local_784[uVar30];
              local_784[uVar30] = (uint)uVar32;
              uVar19 = (ulonglong)local_788;
              uVar33 = uVar32 >> 0x20;
              uVar27 = (uint)(uVar32 >> 0x20);
              uVar30 = (ulonglong)uVar21;
            } while (uVar21 != local_788);
            uVar21 = local_788;
            if (uVar27 == 0) goto LAB_180133361;
          }
          if (uVar21 < 0x73) {
            local_784[uVar21] = uVar27;
            uVar19 = (ulonglong)(local_788 + 1);
            local_788 = local_788 + 1;
          }
          else {
            uVar19 = 0;
            local_788 = 0;
          }
        }
      }
LAB_180133361:
      uVar27 = *puVar29;
      uVar21 = iVar31 + 1;
      uVar30 = (ulonglong)uVar21;
      puVar29 = (uint *)((longlong)puVar29 + 1);
      uVar26 = (uint)(byte)uVar27 + uVar26 * 10;
      uVar33 = (ulonglong)uVar26;
    } while (puVar29 != puVar24);
    if (uVar21 != 0) {
      uVar30 = uVar30 / 10;
      uVar27 = (uint)uVar30;
      uVar15 = uVar27;
      while (uVar7 = (uint)uVar19, uVar15 != 0) {
        uVar10 = (uint)uVar30;
        if (0x26 < (uint)uVar30) {
          uVar10 = 0x26;
        }
        uVar5 = uVar10 - 1;
        bVar14 = (&DAT_18017a112)[(ulonglong)uVar5 * 4];
        bVar1 = (&DAT_18017a113)[(ulonglong)uVar5 * 4];
        local_3e8 = (uint)bVar1 + (uint)bVar14;
        FUN_180151670((int32_t (*) [32])local_3e4,0,(ulonglong)bVar14 * 4);
        FUN_180150fd0((int32_t *)(local_3e4 + bVar14),
                      (int32_t *)
                      (&DAT_180179800 +
                      (ulonglong)*(ushort *)(&DAT_18017a110 + (ulonglong)uVar5 * 4) * 4),
                      (ulonglong)bVar1 << 2);
        uVar5 = local_784[0];
        uVar25 = (ulonglong)local_3e8;
        if (local_3e8 < 2) {
          uVar30 = (ulonglong)local_3e4[0];
          uVar32 = 0;
          if (local_3e4[0] == 0) {
LAB_18013342b:
            local_788 = 0;
            uVar25 = 0;
LAB_18013357c:
            bVar34 = true;
          }
          else {
            uVar25 = uVar19;
            if ((local_3e4[0] == 1) || (uVar19 = uVar32, uVar7 == 0)) goto LAB_18013357c;
            do {
              uVar8 = (int)uVar19 + 1;
              uVar25 = local_784[uVar19] * uVar30 + uVar32;
              local_784[uVar19] = (uint)uVar25;
              uVar32 = uVar25 >> 0x20;
              uVar5 = (uint)(uVar25 >> 0x20);
              uVar19 = (ulonglong)uVar8;
            } while (uVar8 != uVar7);
LAB_180133537:
            if (uVar5 == 0) {
              uVar25 = (ulonglong)local_788;
              goto LAB_18013357c;
            }
            if (local_788 < 0x73) {
              local_784[local_788] = uVar5;
              uVar25 = (ulonglong)(local_788 + 1);
              local_788 = local_788 + 1;
              goto LAB_18013357c;
            }
            bVar34 = false;
            local_788 = 0;
            uVar25 = 0;
          }
          if (!bVar34) goto LAB_180133819;
        }
        else {
          if (uVar7 < 2) {
            uVar30 = (ulonglong)local_784[0];
            local_788 = local_3e8;
            if (uVar25 != 0) {
              if (uVar25 << 2 < 0x1cd) {
                FUN_180150fd0((int32_t *)local_784,(int32_t *)local_3e4,uVar25 << 2);
              }
              else {
                FUN_180151670((int32_t (*) [32])local_784,0,0x1cc);
                puVar12 = __doserrno();
                *puVar12 = 0x22;
                FUN_18012b794();
              }
              uVar25 = (ulonglong)local_788;
            }
            uVar19 = 0;
            if (uVar5 != 0) {
              if ((uVar5 != 1) && (uVar32 = uVar19, (uint)uVar25 != 0)) {
                do {
                  uVar7 = (int)uVar32 + 1;
                  uVar18 = local_784[uVar32] * uVar30 + uVar19;
                  local_784[uVar32] = (uint)uVar18;
                  uVar19 = uVar18 >> 0x20;
                  uVar5 = (uint)(uVar18 >> 0x20);
                  uVar32 = (ulonglong)uVar7;
                } while (uVar7 != (uint)uVar25);
                goto LAB_180133537;
              }
              goto LAB_18013357c;
            }
            goto LAB_18013342b;
          }
          bVar34 = local_3e8 < uVar7;
          puVar29 = local_3e4;
          if (!bVar34) {
            puVar29 = local_784;
          }
          uVar5 = uVar7;
          if (bVar34) {
            uVar5 = local_3e8;
          }
          puVar22 = local_784;
          if (!bVar34) {
            puVar22 = local_3e4;
          }
          uVar30 = 0;
          local_5b8 = 0;
          uVar8 = local_3e8;
          if (bVar34) {
            uVar8 = uVar7;
          }
          uVar25 = uVar30;
          if (uVar5 != 0) {
            do {
              uVar19 = 0;
              uVar17 = (uint)uVar30;
              uVar7 = puVar29[uVar30];
              if (uVar7 == 0) {
                if (uVar17 == (uint)uVar25) {
                  uVar25 = (ulonglong)(uVar17 + 1);
                  *(int32_t *)((longlong)&local_5b4 + uVar30 * 4) = 0;
                  local_5b8 = uVar17 + 1;
                }
              }
              else {
                uVar6 = uVar17;
                if (uVar8 != 0) {
                  do {
                    iVar31 = (int)uVar30;
                    uVar32 = uVar30;
                    if (iVar31 == 0x73) break;
                    if (iVar31 == (int)uVar25) {
                      *(int32_t *)((longlong)&local_5b4 + uVar30 * 4) = 0;
                      local_5b8 = iVar31 + 1;
                    }
                    uVar32 = (ulonglong)(iVar31 + 1U);
                    uVar19 = (ulonglong)puVar22[iVar31 + -uVar17] * (ulonglong)uVar7 + uVar19 +
                             (ulonglong)*(uint *)((longlong)&local_5b4 + uVar30 * 4);
                    *(int *)((longlong)&local_5b4 + uVar30 * 4) = (int)uVar19;
                    uVar25 = (ulonglong)local_5b8;
                    uVar19 = uVar19 >> 0x20;
                    uVar30 = uVar32;
                  } while (-uVar17 + iVar31 + 1U != uVar8);
                  uVar6 = (uint)uVar32;
                  uVar7 = (uint)uVar19;
                  while (uVar7 != 0) {
                    iVar31 = (int)uVar32;
                    if (iVar31 == 0x73) goto LAB_180133819;
                    uVar6 = iVar31 + 1;
                    if (iVar31 == (int)uVar25) {
                      *(int32_t *)((longlong)&local_5b4 + uVar32 * 4) = 0;
                      local_5b8 = uVar6;
                    }
                    lVar20 = *(uint *)((longlong)&local_5b4 + uVar32 * 4) + uVar19;
                    *(int *)((longlong)&local_5b4 + uVar32 * 4) = (int)lVar20;
                    uVar25 = (ulonglong)local_5b8;
                    uVar7 = (uint)((ulonglong)lVar20 >> 0x20);
                    uVar19 = (ulonglong)uVar7;
                    uVar32 = (ulonglong)uVar6;
                  }
                }
                if (uVar6 == 0x73) goto LAB_180133819;
              }
              uVar30 = (ulonglong)(uVar17 + 1);
            } while (uVar17 + 1 != uVar5);
          }
          local_788 = (uint)uVar25;
          if (uVar25 != 0) {
            if (uVar25 << 2 < 0x1cd) {
              FUN_180150fd0((int32_t *)local_784,&local_5b4,uVar25 << 2);
            }
            else {
              FUN_180151670((int32_t (*) [32])local_784,0,0x1cc);
              puVar12 = __doserrno();
              *puVar12 = 0x22;
              FUN_18012b794();
            }
            uVar25 = (ulonglong)local_788;
          }
        }
        uVar15 = uVar15 - uVar10;
        uVar30 = (ulonglong)uVar15;
        uVar19 = uVar25;
      }
      uVar25 = 0;
      iVar31 = uVar21 + uVar27 * -10;
      if (iVar31 != 0) {
        uVar15 = *(uint *)(&DAT_18017a1a8 + (ulonglong)(iVar31 - 1) * 4);
        if (uVar15 == 0) {
LAB_180133819:
          uVar19 = 0;
          local_788 = 0;
        }
        else if ((uVar15 != 1) && (uVar7 != 0)) {
          uVar30 = uVar25;
          do {
            uVar27 = (int)uVar30 + 1;
            uVar19 = (ulonglong)local_784[uVar30] * (ulonglong)uVar15 + uVar25;
            local_784[uVar30] = (uint)uVar19;
            uVar25 = uVar19 >> 0x20;
            uVar30 = (ulonglong)uVar27;
          } while (uVar27 != uVar7);
          uVar15 = (uint)(uVar19 >> 0x20);
          if (uVar15 == 0) {
            uVar19 = (ulonglong)local_788;
          }
          else {
            if (0x72 < local_788) goto LAB_180133819;
            local_784[local_788] = uVar15;
            uVar19 = (ulonglong)(local_788 + 1);
            local_788 = local_788 + 1;
          }
        }
      }
      if (uVar26 != 0) {
        uVar25 = 0;
        uVar15 = (uint)uVar19;
        if ((uint)uVar19 != 0) {
          do {
            uVar27 = (int)uVar25 + 1;
            uVar15 = local_784[uVar25];
            local_784[uVar25] = (uint)(uVar15 + uVar33);
            uVar19 = (ulonglong)local_788;
            uVar26 = (uint)(uVar15 + uVar33 >> 0x20);
            uVar33 = (ulonglong)uVar26;
            uVar25 = (ulonglong)uVar27;
          } while (uVar27 != local_788);
          uVar15 = local_788;
          if (uVar26 == 0) goto LAB_18013389d;
        }
        if (uVar15 < 0x73) {
          local_784[uVar15] = uVar26;
          uVar19 = (ulonglong)(local_788 + 1);
          local_788 = local_788 + 1;
        }
        else {
          uVar19 = 0;
          local_788 = 0;
        }
      }
    }
  }
LAB_18013389d:
  uVar15 = (uint)uVar19;
  uVar25 = (ulonglong)uVar28;
  if (uVar28 == 0) {
LAB_180133db7:
    if (uVar15 == 0) goto LAB_180133dbc;
    iVar9 = 0;
    iVar31 = 0x1f;
    bVar34 = local_784[uVar15 - 1] != 0;
    if (bVar34) {
      for (; local_784[uVar15 - 1] >> iVar31 == 0; iVar31 = iVar31 + -1) {
      }
    }
    if (bVar34) {
      iVar9 = iVar31 + 1;
    }
    uVar28 = (uVar15 - 1) * 0x20 + iVar9;
  }
  else {
    uVar25 = (ulonglong)uVar28 / 10;
    uVar27 = (uint)uVar25;
    uVar26 = uVar27;
    while (uVar26 != 0) {
      uVar15 = (uint)uVar19;
      uVar21 = (uint)uVar25;
      if (0x26 < (uint)uVar25) {
        uVar21 = 0x26;
      }
      uVar7 = uVar21 - 1;
      bVar14 = (&DAT_18017a112)[(ulonglong)uVar7 * 4];
      bVar1 = (&DAT_18017a113)[(ulonglong)uVar7 * 4];
      local_3e8 = (uint)bVar1 + (uint)bVar14;
      FUN_180151670((int32_t (*) [32])local_3e4,0,(ulonglong)bVar14 * 4);
      FUN_180150fd0((int32_t *)(local_3e4 + bVar14),
                    (int32_t *)
                    (&DAT_180179800 +
                    (ulonglong)*(ushort *)(&DAT_18017a110 + (ulonglong)uVar7 * 4) * 4),
                    (ulonglong)bVar1 << 2);
      uVar7 = local_784[0];
      uVar30 = (ulonglong)local_3e8;
      if (local_3e8 < 2) {
        uVar25 = (ulonglong)local_3e4[0];
        uVar33 = 0;
        if (local_3e4[0] == 0) {
LAB_180133951:
          local_788 = 0;
          uVar30 = 0;
LAB_180133aa2:
          bVar34 = true;
        }
        else {
          uVar30 = uVar19;
          if ((local_3e4[0] == 1) || (uVar19 = uVar33, uVar15 == 0)) goto LAB_180133aa2;
          do {
            uVar10 = (int)uVar19 + 1;
            uVar30 = local_784[uVar19] * uVar25 + uVar33;
            local_784[uVar19] = (uint)uVar30;
            uVar33 = uVar30 >> 0x20;
            uVar7 = (uint)(uVar30 >> 0x20);
            uVar19 = (ulonglong)uVar10;
          } while (uVar10 != uVar15);
LAB_180133a5d:
          if (uVar7 == 0) {
            uVar30 = (ulonglong)local_788;
            goto LAB_180133aa2;
          }
          if (local_788 < 0x73) {
            local_784[local_788] = uVar7;
            uVar30 = (ulonglong)(local_788 + 1);
            local_788 = local_788 + 1;
            goto LAB_180133aa2;
          }
          bVar34 = false;
          local_788 = 0;
          uVar30 = 0;
        }
        if (!bVar34) goto LAB_180133aac;
      }
      else {
        if (uVar15 < 2) {
          uVar25 = (ulonglong)local_784[0];
          local_788 = local_3e8;
          if (uVar30 != 0) {
            if (uVar30 << 2 < 0x1cd) {
              FUN_180150fd0((int32_t *)local_784,(int32_t *)local_3e4,uVar30 << 2);
            }
            else {
              FUN_180151670((int32_t (*) [32])local_784,0,0x1cc);
              puVar12 = __doserrno();
              *puVar12 = 0x22;
              FUN_18012b794();
            }
            uVar30 = (ulonglong)local_788;
          }
          uVar19 = 0;
          if (uVar7 != 0) {
            if ((uVar7 != 1) && (uVar33 = uVar19, (uint)uVar30 != 0)) {
              do {
                uVar15 = (int)uVar33 + 1;
                uVar32 = local_784[uVar33] * uVar25 + uVar19;
                local_784[uVar33] = (uint)uVar32;
                uVar19 = uVar32 >> 0x20;
                uVar7 = (uint)(uVar32 >> 0x20);
                uVar33 = (ulonglong)uVar15;
              } while (uVar15 != (uint)uVar30);
              goto LAB_180133a5d;
            }
            goto LAB_180133aa2;
          }
          goto LAB_180133951;
        }
        bVar34 = local_3e8 < uVar15;
        puVar29 = local_3e4;
        if (!bVar34) {
          puVar29 = local_784;
        }
        uVar7 = uVar15;
        if (bVar34) {
          uVar7 = local_3e8;
        }
        puVar22 = local_784;
        if (!bVar34) {
          puVar22 = local_3e4;
        }
        uVar25 = 0;
        local_5b8 = 0;
        uVar10 = local_3e8;
        if (bVar34) {
          uVar10 = uVar15;
        }
        uVar30 = uVar25;
        if (uVar7 != 0) {
          do {
            uVar19 = 0;
            uVar5 = (uint)uVar25;
            uVar15 = puVar29[uVar25];
            if (uVar15 == 0) {
              if (uVar5 == (uint)uVar30) {
                uVar30 = (ulonglong)(uVar5 + 1);
                *(int32_t *)((longlong)&local_5b4 + uVar25 * 4) = 0;
                local_5b8 = uVar5 + 1;
              }
            }
            else {
              uVar8 = uVar5;
              if (uVar10 != 0) {
                do {
                  iVar31 = (int)uVar25;
                  uVar33 = uVar25;
                  if (iVar31 == 0x73) break;
                  if (iVar31 == (int)uVar30) {
                    *(int32_t *)((longlong)&local_5b4 + uVar25 * 4) = 0;
                    local_5b8 = iVar31 + 1;
                  }
                  uVar33 = (ulonglong)(iVar31 + 1U);
                  uVar19 = (ulonglong)puVar22[iVar31 + -uVar5] * (ulonglong)uVar15 + uVar19 +
                           (ulonglong)*(uint *)((longlong)&local_5b4 + uVar25 * 4);
                  *(int *)((longlong)&local_5b4 + uVar25 * 4) = (int)uVar19;
                  uVar30 = (ulonglong)local_5b8;
                  uVar19 = uVar19 >> 0x20;
                  uVar25 = uVar33;
                } while (-uVar5 + iVar31 + 1U != uVar10);
                uVar8 = (uint)uVar33;
                uVar15 = (uint)uVar19;
                while (uVar15 != 0) {
                  iVar31 = (int)uVar33;
                  if (iVar31 == 0x73) goto LAB_180133aac;
                  uVar8 = iVar31 + 1;
                  if (iVar31 == (int)uVar30) {
                    *(int32_t *)((longlong)&local_5b4 + uVar33 * 4) = 0;
                    local_5b8 = uVar8;
                  }
                  lVar20 = uVar19 + *(uint *)((longlong)&local_5b4 + uVar33 * 4);
                  *(int *)((longlong)&local_5b4 + uVar33 * 4) = (int)lVar20;
                  uVar30 = (ulonglong)local_5b8;
                  uVar15 = (uint)((ulonglong)lVar20 >> 0x20);
                  uVar19 = (ulonglong)uVar15;
                  uVar33 = (ulonglong)uVar8;
                }
              }
              if (uVar8 == 0x73) goto LAB_180133aac;
            }
            uVar25 = (ulonglong)(uVar5 + 1);
          } while (uVar5 + 1 != uVar7);
        }
        local_788 = (uint)uVar30;
        if (uVar30 != 0) {
          if (uVar30 << 2 < 0x1cd) {
            FUN_180150fd0((int32_t *)local_784,&local_5b4,uVar30 << 2);
          }
          else {
            FUN_180151670((int32_t (*) [32])local_784,0,0x1cc);
            puVar12 = __doserrno();
            *puVar12 = 0x22;
            FUN_18012b794();
          }
          uVar30 = (ulonglong)local_788;
        }
      }
      uVar15 = (uint)uVar30;
      uVar26 = uVar26 - uVar21;
      uVar25 = (ulonglong)uVar26;
      uVar19 = uVar30;
    }
    uVar30 = 0;
    uVar28 = uVar28 + uVar27 * -10;
    uVar25 = (ulonglong)uVar28;
    if (uVar28 == 0) goto LAB_180133db7;
    uVar28 = *(uint *)(&DAT_18017a1a8 + (ulonglong)(uVar28 - 1) * 4);
    if (uVar28 == 0) {
      local_788 = 0;
      uVar15 = 0;
      goto LAB_180133db7;
    }
    if (uVar28 == 1) goto LAB_180133db7;
    uVar19 = uVar30;
    if (uVar15 != 0) {
      do {
        uVar26 = (int)uVar19 + 1;
        uVar25 = (ulonglong)local_784[uVar19] * (ulonglong)uVar28 + uVar30;
        local_784[uVar19] = (uint)uVar25;
        uVar30 = uVar25 >> 0x20;
        uVar19 = (ulonglong)uVar26;
      } while (uVar26 != uVar15);
      uVar28 = (uint)(uVar25 >> 0x20);
      uVar25 = uVar30;
      uVar15 = local_788;
      if (uVar28 != 0) {
        if (0x72 < local_788) {
LAB_180133aac:
          puVar13 = (ulonglong *)*param_2;
          if (*(char *)(param_2 + 1) == '\0') {
            *(uint *)puVar13 =
                 (-(uint)((char)param_1[0xc2] != '\0') & 0x80000000) + 0x7f800000 |
                 (uint)*puVar13 & 0x7f800000;
          }
          else {
            *puVar13 = (-(ulonglong)((char)param_1[0xc2] != '\0') & 0x8000000000000000) +
                       0x7ff0000000000000 | *puVar13 & 0x7ff0000000000000;
          }
          goto LAB_180135000;
        }
        local_784[local_788] = uVar28;
        local_788 = local_788 + 1;
        uVar15 = local_788;
      }
      goto LAB_180133db7;
    }
LAB_180133dbc:
    uVar28 = 0;
  }
  uVar30 = 0;
  if ((uVar28 < uVar3) && (uVar4 != 0)) {
    local_958 = 0;
    uVar25 = uVar30;
    uVar19 = uVar30;
    if (puVar24 != puVar11) {
      do {
        uVar33 = 0;
        uVar26 = (uint)uVar30;
        uVar27 = (uint)uVar25;
        if (uVar27 == 9) {
          uVar25 = uVar33;
          if ((uint)uVar19 != 0) {
            do {
              uVar27 = (int)uVar25 + 1;
              uVar32 = (ulonglong)local_954[uVar25] * 1000000000 + uVar33;
              local_954[uVar25] = (uint)uVar32;
              uVar33 = uVar32 >> 0x20;
              uVar25 = (ulonglong)uVar27;
            } while (uVar27 != (uint)uVar19);
            uVar27 = (uint)(uVar32 >> 0x20);
            if (uVar27 != 0) {
              if (local_958 < 0x73) {
                local_954[local_958] = uVar27;
                local_958 = local_958 + 1;
                uVar19 = (ulonglong)local_958;
                goto LAB_180133ec5;
              }
              local_218 = 0;
              local_958 = 0;
              memcpy_s(local_954,0x1cc,local_214,0);
            }
            uVar19 = (ulonglong)local_958;
          }
LAB_180133ec5:
          if (uVar26 != 0) {
            uVar25 = 0;
            uVar27 = (uint)uVar19;
            if ((uint)uVar19 != 0) {
              do {
                uVar27 = (int)uVar25 + 1;
                uVar33 = local_954[uVar25] + uVar30;
                local_954[uVar25] = (uint)uVar33;
                uVar19 = (ulonglong)local_958;
                uVar30 = uVar33 >> 0x20;
                uVar26 = (uint)(uVar33 >> 0x20);
                uVar25 = (ulonglong)uVar27;
              } while (uVar27 != local_958);
              uVar27 = local_958;
              if (uVar26 == 0) goto LAB_180133f61;
            }
            if (uVar27 < 0x73) {
              local_954[uVar27] = uVar26;
              local_958 = local_958 + 1;
              uVar19 = (ulonglong)local_958;
            }
            else {
              local_218 = 0;
              local_958 = 0;
              memcpy_s(local_954,0x1cc,local_214,0);
              uVar19 = (ulonglong)local_958;
            }
          }
LAB_180133f61:
          uVar27 = 0;
          uVar26 = uVar27;
        }
        uVar21 = *puVar24;
        uVar27 = uVar27 + 1;
        uVar25 = (ulonglong)uVar27;
        puVar24 = (uint *)((longlong)puVar24 + 1);
        uVar26 = (uint)(byte)uVar21 + uVar26 * 10;
        uVar30 = (ulonglong)uVar26;
      } while (puVar24 != puVar11);
      if (uVar27 != 0) {
        uVar25 = uVar25 / 10;
        uVar7 = (uint)uVar25;
        uVar21 = uVar7;
        while (uVar10 = (uint)uVar19, uVar21 != 0) {
          uVar5 = (uint)uVar25;
          if (0x26 < uVar5) {
            uVar5 = 0x26;
          }
          uVar25 = (ulonglong)(uVar5 - 1);
          bVar14 = (&DAT_18017a112)[uVar25 * 4];
          bVar1 = (&DAT_18017a113)[uVar25 * 4];
          local_3e8 = (uint)bVar1 + (uint)bVar14;
          FUN_180151670((int32_t (*) [32])local_3e4,0,(ulonglong)bVar14 * 4);
          FUN_180150fd0((int32_t *)(local_3e4 + bVar14),
                        (int32_t *)
                        (&DAT_180179800 + (ulonglong)*(ushort *)(&DAT_18017a110 + uVar25 * 4) * 4),
                        (ulonglong)bVar1 << 2);
          uVar8 = local_954[0];
          if (local_3e8 < 2) {
            uVar25 = (ulonglong)local_3e4[0];
            if (local_3e4[0] == 0) {
LAB_18013404e:
              local_218 = 0;
              local_958 = 0;
              _MaxCount = 0;
              puVar29 = local_214;
              goto LAB_18013434e;
            }
            if ((local_3e4[0] == 1) || (uVar10 == 0)) goto LAB_180134366;
            uVar33 = 0;
            uVar19 = 0;
            do {
              uVar17 = (int)uVar19 + 1;
              uVar32 = local_954[uVar19] * uVar25 + uVar33;
              local_954[uVar19] = (uint)uVar32;
              uVar33 = uVar32 >> 0x20;
              uVar8 = (uint)(uVar32 >> 0x20);
              uVar19 = (ulonglong)uVar17;
            } while (uVar17 != uVar10);
            if (uVar8 == 0) goto LAB_18013435f;
            if (local_958 < 0x73) {
LAB_1801340b4:
              local_954[local_958] = uVar8;
              local_958 = local_958 + 1;
              uVar19 = (ulonglong)local_958;
              goto LAB_180134366;
            }
            local_218 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_214,0);
LAB_180134101:
            bVar34 = false;
            uVar19 = (ulonglong)local_958;
          }
          else {
            puVar29 = local_3e4;
            puVar11 = local_954;
            if (uVar10 < 2) {
              uVar25 = (ulonglong)local_954[0];
              local_958 = local_3e8;
              memcpy_s(puVar11,0x1cc,puVar29,(ulonglong)local_3e8 << 2);
              if (uVar8 != 0) {
                uVar19 = (ulonglong)local_958;
                if ((uVar8 != 1) && (local_958 != 0)) {
                  uVar33 = 0;
                  uVar19 = 0;
                  do {
                    uVar10 = (int)uVar19 + 1;
                    uVar32 = local_954[uVar19] * uVar25 + uVar33;
                    local_954[uVar19] = (uint)uVar32;
                    uVar33 = uVar32 >> 0x20;
                    uVar8 = (uint)(uVar32 >> 0x20);
                    uVar19 = (ulonglong)uVar10;
                  } while (uVar10 != local_958);
                  if (uVar8 != 0) {
                    if (local_958 < 0x73) goto LAB_1801340b4;
                    local_218 = 0;
                    local_958 = 0;
                    memcpy_s(local_954,0x1cc,local_214,0);
                    goto LAB_180134101;
                  }
                  goto LAB_18013435f;
                }
                goto LAB_180134366;
              }
              goto LAB_18013404e;
            }
            uVar8 = uVar10;
            if (local_3e8 < uVar10) {
              puVar11 = local_3e4;
              uVar8 = local_3e8;
            }
            uVar17 = local_3e8;
            if (local_3e8 < uVar10) {
              puVar29 = local_954;
              uVar17 = uVar10;
            }
            local_958 = 0;
            uVar25 = 0;
            local_5b8 = 0;
            if (uVar8 != 0) {
              do {
                uVar10 = puVar11[uVar25];
                uVar6 = (uint)uVar25;
                if (uVar10 == 0) {
                  if (uVar6 == local_958) {
                    *(int32_t *)((longlong)&local_5b4 + uVar25 * 4) = 0;
                    local_958 = uVar6 + 1;
                    local_5b8 = local_958;
                  }
                }
                else {
                  uVar19 = 0;
                  uVar23 = uVar6;
                  if (uVar17 != 0) {
                    do {
                      uVar23 = (uint)uVar25;
                      uVar33 = uVar25;
                      if (uVar23 == 0x73) break;
                      if (uVar23 == local_958) {
                        *(int32_t *)((longlong)&local_5b4 + uVar25 * 4) = 0;
                        local_5b8 = uVar23 + 1;
                      }
                      uVar33 = (ulonglong)(uVar23 + 1);
                      uVar19 = (ulonglong)puVar29[uVar23 + -uVar6] * (ulonglong)uVar10 +
                               (ulonglong)*(uint *)((longlong)&local_5b4 + uVar25 * 4) + uVar19;
                      *(int *)((longlong)&local_5b4 + uVar25 * 4) = (int)uVar19;
                      uVar19 = uVar19 >> 0x20;
                      uVar25 = uVar33;
                      local_958 = local_5b8;
                    } while (-uVar6 + uVar23 + 1 != uVar17);
                    uVar10 = (uint)uVar19;
                    uVar23 = (uint)uVar33;
                    while ((uVar10 != 0 && (uVar23 = (uint)uVar33, uVar23 != 0x73))) {
                      uVar16 = uVar23 + 1;
                      if (uVar23 == local_958) {
                        *(int32_t *)((longlong)&local_5b4 + uVar33 * 4) = 0;
                        local_5b8 = uVar16;
                      }
                      lVar20 = *(uint *)((longlong)&local_5b4 + uVar33 * 4) + uVar19;
                      *(int *)((longlong)&local_5b4 + uVar33 * 4) = (int)lVar20;
                      uVar10 = (uint)((ulonglong)lVar20 >> 0x20);
                      uVar19 = (ulonglong)uVar10;
                      uVar33 = (ulonglong)uVar16;
                      local_958 = local_5b8;
                      uVar23 = uVar16;
                    }
                  }
                  if (uVar23 == 0x73) {
                    local_218 = 0;
                    local_958 = 0;
                    memcpy_s(local_954,0x1cc,local_214,0);
                    uVar19 = (ulonglong)local_958;
                    bVar34 = false;
                    goto LAB_18013436b;
                  }
                }
                uVar25 = (ulonglong)(uVar6 + 1);
              } while (uVar6 + 1 != uVar8);
            }
            puVar29 = (uint *)&local_5b4;
            _MaxCount = (ulonglong)local_958 << 2;
LAB_18013434e:
            memcpy_s(local_954,0x1cc,puVar29,_MaxCount);
LAB_18013435f:
            uVar19 = (ulonglong)local_958;
LAB_180134366:
            bVar34 = true;
          }
LAB_18013436b:
          if (!bVar34) {
            local_218 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_214,0);
            uVar19 = (ulonglong)local_958;
            goto LAB_18013445b;
          }
          uVar21 = uVar21 - uVar5;
          uVar25 = (ulonglong)uVar21;
        }
        uVar25 = 0;
        iVar31 = uVar27 + uVar7 * -10;
        if (iVar31 != 0) {
          uVar27 = *(uint *)(&DAT_18017a1a8 + (ulonglong)(iVar31 - 1) * 4);
          if (uVar27 == 0) {
LAB_1801343b1:
            local_218 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_214,0);
            uVar19 = (ulonglong)local_958;
          }
          else if ((uVar27 != 1) && (uVar33 = uVar25, uVar10 != 0)) {
            do {
              uVar21 = (int)uVar33 + 1;
              uVar19 = (ulonglong)local_954[uVar33] * (ulonglong)uVar27 + uVar25;
              local_954[uVar33] = (uint)uVar19;
              uVar25 = uVar19 >> 0x20;
              uVar33 = (ulonglong)uVar21;
            } while (uVar21 != uVar10);
            uVar27 = (uint)(uVar19 >> 0x20);
            if (uVar27 == 0) {
              uVar19 = (ulonglong)local_958;
            }
            else {
              if (0x72 < local_958) goto LAB_1801343b1;
              local_954[local_958] = uVar27;
              local_958 = local_958 + 1;
              uVar19 = (ulonglong)local_958;
            }
          }
        }
LAB_18013445b:
        if (uVar26 != 0) {
          uVar25 = 0;
          uVar27 = (uint)uVar19;
          if ((uint)uVar19 != 0) {
            do {
              uVar27 = (int)uVar25 + 1;
              uVar26 = local_954[uVar25];
              local_954[uVar25] = (uint)(uVar26 + uVar30);
              uVar26 = (uint)(uVar26 + uVar30 >> 0x20);
              uVar30 = (ulonglong)uVar26;
              uVar25 = (ulonglong)uVar27;
            } while (uVar27 != local_958);
            uVar19 = (ulonglong)local_958;
            uVar27 = local_958;
            if (uVar26 == 0) goto LAB_180134589;
          }
          if (uVar27 < 0x73) {
            local_954[uVar27] = uVar26;
            local_958 = local_958 + 1;
            uVar19 = (ulonglong)local_958;
          }
          else {
            local_218 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_214,0);
            uVar19 = (ulonglong)local_958;
          }
        }
      }
    }
LAB_180134589:
    uVar27 = 1;
    local_5b4 = 1;
    local_b88 = 1;
    local_5b8 = 1;
    uVar26 = uVar4 - *param_1;
    if (-1 < (int)*param_1) {
      uVar26 = uVar4;
    }
    uVar25 = (ulonglong)uVar26 / 10;
    uVar21 = (uint)uVar25;
    uVar4 = uVar21;
    while (uVar4 != 0) {
      uVar10 = (uint)uVar25;
      uVar7 = uVar10;
      if (0x26 < uVar10) {
        uVar7 = 0x26;
      }
      uVar25 = (ulonglong)(uVar7 - 1);
      bVar14 = (&DAT_18017a112)[uVar25 * 4];
      bVar1 = (&DAT_18017a113)[uVar25 * 4];
      local_218 = (uint)bVar1 + (uint)bVar14;
      FUN_180151670((int32_t (*) [32])local_214,0,(ulonglong)bVar14 * 4);
      FUN_180150fd0((int32_t *)(local_214 + bVar14),
                    (int32_t *)
                    (&DAT_180179800 + (ulonglong)*(ushort *)(&DAT_18017a110 + uVar25 * 4) * 4),
                    (ulonglong)bVar1 << 2);
      if (local_218 < 2) {
        uVar25 = (ulonglong)local_214[0];
        if (local_214[0] == 0) {
          local_3e8 = 0;
          local_5b8 = 0;
          memcpy_s(&local_5b4,0x1cc,local_3e4,0);
          uVar27 = local_5b8;
          local_b88 = local_5b8;
        }
        else if ((local_214[0] != 1) && (uVar27 != 0)) {
          uVar33 = 0;
          uVar30 = 0;
          do {
            uVar4 = (int)uVar30 + 1;
            uVar32 = *(uint *)((longlong)&local_5b4 + uVar30 * 4) * uVar25 + uVar33;
            *(int *)((longlong)&local_5b4 + uVar30 * 4) = (int)uVar32;
            uVar33 = uVar32 >> 0x20;
            uVar30 = (ulonglong)uVar4;
          } while (uVar4 != uVar27);
          iVar31 = (int)(uVar32 >> 0x20);
          uVar27 = local_5b8;
          local_b88 = local_5b8;
          if (iVar31 != 0) {
            if (0x72 < local_5b8) {
              local_218 = 0;
              local_5b8 = 0;
              memcpy_s(&local_5b4,0x1cc,local_214,0);
              local_b88 = local_5b8;
              bVar34 = false;
              uVar27 = local_5b8;
              goto LAB_180134a06;
            }
            *(int *)((longlong)&local_5b4 + (ulonglong)local_5b8 * 4) = iVar31;
            local_5b8 = local_5b8 + 1;
            uVar27 = local_5b8;
            local_b88 = local_5b8;
          }
        }
        bVar34 = true;
      }
      else {
        puVar29 = local_214;
        puVar11 = (uint *)&local_5b4;
        if (uVar27 < 2) {
          uVar4 = (uint)local_5b4;
          uVar25 = local_5b4 & 0xffffffff;
          local_5b8 = local_218;
          memcpy_s(puVar11,0x1cc,puVar29,(ulonglong)local_218 << 2);
          if (uVar4 == 0) {
            local_218 = 0;
            local_5b8 = 0;
            memcpy_s(&local_5b4,0x1cc,local_214,0);
          }
          else if ((uVar4 != 1) && (local_5b8 != 0)) {
            uVar33 = 0;
            uVar30 = 0;
            do {
              uVar4 = (int)uVar30 + 1;
              uVar32 = *(uint *)((longlong)&local_5b4 + uVar30 * 4) * uVar25 + uVar33;
              *(int *)((longlong)&local_5b4 + uVar30 * 4) = (int)uVar32;
              uVar33 = uVar32 >> 0x20;
              uVar30 = (ulonglong)uVar4;
            } while (uVar4 != local_5b8);
            iVar31 = (int)(uVar32 >> 0x20);
            if (iVar31 != 0) {
              if (0x72 < local_5b8) {
                local_218 = 0;
                local_5b8 = 0;
                memcpy_s(&local_5b4,0x1cc,local_214,0);
                bVar34 = false;
                local_b88 = local_5b8;
                uVar27 = local_5b8;
                goto LAB_180134a06;
              }
              *(int *)((longlong)&local_5b4 + (ulonglong)local_5b8 * 4) = iVar31;
              local_5b8 = local_5b8 + 1;
            }
          }
        }
        else {
          uVar5 = uVar27;
          if (local_218 < uVar27) {
            uVar5 = local_218;
            puVar11 = local_214;
          }
          uVar8 = local_218;
          if (local_218 < uVar27) {
            uVar8 = uVar27;
            puVar29 = (uint *)&local_5b4;
          }
          local_5b8 = 0;
          uVar25 = 0;
          local_3e8 = 0;
          uVar10 = uVar4;
          if (uVar5 != 0) {
            do {
              uVar4 = puVar11[uVar25];
              uVar27 = (uint)uVar25;
              if (uVar4 == 0) {
                if (uVar27 == local_5b8) {
                  local_3e4[uVar25] = 0;
                  local_5b8 = uVar27 + 1;
                  local_3e8 = local_5b8;
                }
              }
              else {
                uVar30 = 0;
                uVar17 = uVar27;
                if (uVar8 != 0) {
                  do {
                    uVar17 = (uint)uVar25;
                    uVar33 = uVar25;
                    if (uVar17 == 0x73) break;
                    if (uVar17 == local_5b8) {
                      local_3e4[uVar25] = 0;
                      local_3e8 = uVar17 + 1;
                    }
                    uVar33 = (ulonglong)(uVar17 + 1);
                    uVar30 = (ulonglong)puVar29[uVar17 + -uVar27] * (ulonglong)uVar4 + uVar30 +
                             (ulonglong)local_3e4[uVar25];
                    local_3e4[uVar25] = (uint)uVar30;
                    uVar30 = uVar30 >> 0x20;
                    uVar25 = uVar33;
                    local_5b8 = local_3e8;
                  } while (-uVar27 + uVar17 + 1 != uVar8);
                  uVar17 = (uint)uVar33;
                  uVar4 = (uint)uVar30;
                  while (uVar4 != 0) {
                    uVar4 = (uint)uVar33;
                    if (uVar4 == 0x73) goto LAB_180134a8b;
                    uVar17 = uVar4 + 1;
                    if (uVar4 == local_5b8) {
                      local_3e4[uVar33] = 0;
                      local_3e8 = uVar17;
                    }
                    uVar4 = local_3e4[uVar33];
                    local_3e4[uVar33] = (uint)(uVar4 + uVar30);
                    uVar4 = (uint)(uVar4 + uVar30 >> 0x20);
                    uVar30 = (ulonglong)uVar4;
                    uVar33 = (ulonglong)uVar17;
                    local_5b8 = local_3e8;
                  }
                }
                if (uVar17 == 0x73) {
LAB_180134a8b:
                  local_5b8 = 0;
                  memcpy_s(&local_5b4,0x1cc,local_b24,0);
                  local_b88 = local_5b8;
                  bVar34 = false;
                  uVar27 = local_5b8;
                  goto LAB_180134a06;
                }
              }
              uVar25 = (ulonglong)(uVar27 + 1);
            } while (uVar27 + 1 != uVar5);
          }
          memcpy_s(&local_5b4,0x1cc,local_3e4,(ulonglong)local_5b8 << 2);
        }
        bVar34 = true;
        uVar27 = local_5b8;
        local_b88 = local_5b8;
      }
LAB_180134a06:
      if (!bVar34) goto LAB_180134b49;
      uVar4 = uVar10 - uVar7;
      uVar25 = (ulonglong)uVar4;
    }
    uVar25 = 0;
    iVar31 = uVar26 + uVar21 * -10;
    if (iVar31 != 0) {
      uVar4 = *(uint *)(&DAT_18017a1a8 + (ulonglong)(iVar31 - 1) * 4);
      if (uVar4 == 0) {
        local_5b8 = 0;
        memcpy_s(&local_5b4,0x1cc,local_b24,0);
        uVar27 = local_5b8;
        local_b88 = local_5b8;
      }
      else if ((uVar4 != 1) && (uVar30 = uVar25, uVar27 != 0)) {
        do {
          uVar26 = (int)uVar30 + 1;
          uVar33 = (ulonglong)*(uint *)((longlong)&local_5b4 + uVar30 * 4) * (ulonglong)uVar4 +
                   uVar25;
          *(int *)((longlong)&local_5b4 + uVar30 * 4) = (int)uVar33;
          uVar25 = uVar33 >> 0x20;
          uVar30 = (ulonglong)uVar26;
        } while (uVar26 != uVar27);
        iVar31 = (int)(uVar33 >> 0x20);
        uVar27 = local_5b8;
        local_b88 = local_5b8;
        if (iVar31 != 0) {
          if (0x72 < local_5b8) {
LAB_180134b49:
            local_5b8 = 0;
            memcpy_s(&local_5b4,0x1cc,local_b24,0);
            uVar4 = param_1[0xc2];
            if (*(char *)(param_2 + 1) == '\0') {
              puVar29 = (uint *)FUN_180132c64(param_2);
              *puVar29 = -(uint)((char)uVar4 != '\0') & 0x80000000;
            }
            else {
              puVar13 = (ulonglong *)FUN_180132c28(param_2);
              *puVar13 = -(ulonglong)((char)uVar4 != '\0') & 0x8000000000000000;
            }
            goto LAB_180135000;
          }
          *(int *)((longlong)&local_5b4 + (ulonglong)local_5b8 * 4) = iVar31;
          local_5b8 = local_5b8 + 1;
          uVar27 = local_5b8;
          local_b88 = local_5b8;
        }
      }
    }
    uVar4 = 0;
    iVar31 = (int)uVar19;
    uVar21 = 0;
    uVar26 = uVar21;
    if (iVar31 != 0) {
      iVar9 = 0x1f;
      bVar34 = local_954[iVar31 - 1U] != 0;
      if (bVar34) {
        for (; local_954[iVar31 - 1U] >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (bVar34) {
        uVar26 = iVar9 + 1;
      }
      uVar26 = (iVar31 - 1U) * 0x20 + uVar26;
    }
    if (uVar27 != 0) {
      puVar29 = (uint *)((longlong)&local_5b4 + (ulonglong)(uVar27 - 1) * 4);
      iVar9 = 0x1f;
      bVar34 = *puVar29 != 0;
      if (bVar34) {
        for (; *puVar29 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      uVar4 = uVar21;
      if (bVar34) {
        uVar4 = iVar9 + 1;
      }
      uVar4 = (uVar27 - 1) * 0x20 + uVar4;
    }
    uVar4 = -(uint)(uVar26 < uVar4) & uVar4 - uVar26;
    if (uVar4 != 0) {
      sVar2 = (sbyte)(uVar4 & 0x1f);
      bVar14 = 0x20 - sVar2;
      uVar7 = uVar4 >> 5;
      uVar26 = (1 << (bVar14 & 0x3f)) - 1;
      iVar9 = 0x1f;
      bVar34 = local_954[iVar31 - 1] != 0;
      if (bVar34) {
        for (; local_954[iVar31 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (bVar34) {
        uVar21 = iVar9 + 1;
      }
      if ((uVar7 + iVar31 < 0x74) &&
         (uVar21 = (0x20 - uVar21 < (uVar4 & 0x1f)) + uVar7 + iVar31, uVar21 < 0x74)) {
        uVar10 = uVar21 - 1;
        if (uVar10 != uVar7 - 1) {
          while( true ) {
            uVar27 = uVar10 - uVar7;
            if (uVar27 < (uint)uVar19) {
              uVar5 = local_954[uVar27];
            }
            else {
              uVar5 = 0;
            }
            if (uVar27 - 1 < (uint)uVar19) {
              uVar27 = local_954[uVar27 - 1];
            }
            else {
              uVar27 = 0;
            }
            local_954[uVar10] = (uVar27 & ~uVar26) >> (bVar14 & 0x1f) | (uVar5 & uVar26) << sVar2;
            uVar10 = uVar10 - 1;
            uVar27 = local_b88;
            if (uVar10 == uVar7 - 1) break;
            uVar19 = (ulonglong)local_958;
          }
        }
        uVar25 = 0;
        local_958 = uVar21;
        if (uVar7 != 0) {
          do {
            uVar26 = (int)uVar25 + 1;
            local_954[uVar25] = 0;
            uVar25 = (ulonglong)uVar26;
          } while (uVar26 != uVar7);
        }
      }
      else {
        local_958 = 0;
        memcpy_s(local_954,0x1cc,local_b24,0);
      }
      uVar19 = (ulonglong)local_958;
    }
    uVar25 = 0xffffffff;
    uVar3 = uVar3 - uVar28;
    uVar26 = uVar3;
    if (uVar28 != 0) {
      if (uVar3 < uVar4) {
        bVar34 = true;
        goto LAB_180134fe8;
      }
      uVar26 = uVar3 - uVar4;
    }
    uVar21 = (uint)uVar19;
    if (uVar27 < uVar21) {
LAB_180134dce:
      bVar34 = false;
    }
    else {
      uVar7 = uVar21;
      if (uVar21 < uVar27) {
        bVar34 = true;
      }
      else {
        do {
          uVar7 = uVar7 - 1;
          if (uVar7 == 0xffffffff) goto LAB_180134dce;
          uVar27 = *(uint *)((longlong)&local_5b4 + (ulonglong)uVar7 * 4);
        } while (local_954[uVar7] == uVar27);
        bVar34 = local_954[uVar7] <= uVar27;
      }
    }
    iVar31 = 0;
    if (bVar34) {
      uVar4 = uVar4 + 1;
    }
    uVar7 = uVar26 >> 5;
    sVar2 = (sbyte)(uVar26 & 0x1f);
    bVar14 = 0x20 - sVar2;
    uVar27 = (int)(1L << (bVar14 & 0x3f)) - 1;
    iVar9 = 0x1f;
    bVar34 = local_954[uVar21 - 1] != 0;
    if (bVar34) {
      for (; local_954[uVar21 - 1] >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (bVar34) {
      iVar31 = iVar9 + 1;
    }
    if ((uVar7 + uVar21 < 0x74) &&
       (uVar21 = (0x20U - iVar31 < (uVar26 & 0x1f)) + uVar7 + uVar21, uVar21 < 0x74)) {
      uVar26 = uVar21 - 1;
      if (uVar26 != uVar7 - 1) {
        while( true ) {
          uVar10 = uVar26 - uVar7;
          if (uVar10 < (uint)uVar19) {
            uVar5 = local_954[uVar10];
          }
          else {
            uVar5 = 0;
          }
          if (uVar10 - 1 < (uint)uVar19) {
            uVar10 = local_954[uVar10 - 1];
          }
          else {
            uVar10 = 0;
          }
          local_954[uVar26] = (uVar10 & ~uVar27) >> (bVar14 & 0x1f) | (uVar5 & uVar27) << sVar2;
          uVar26 = uVar26 - 1;
          if (uVar26 == uVar7 - 1) break;
          uVar19 = (ulonglong)local_958;
        }
      }
      uVar25 = 0;
      local_958 = uVar21;
      if (uVar7 != 0) {
        do {
          local_954[uVar25] = 0;
          uVar26 = (int)uVar25 + 1;
          uVar25 = (ulonglong)uVar26;
        } while (uVar26 != uVar7);
      }
    }
    else {
      local_958 = 0;
      memcpy_s(local_954,0x1cc,local_b24,0);
    }
    uVar25 = FUN_1801350e0(&local_958,&local_5b8);
    bVar34 = local_958 == 0;
    if (uVar25 < 0x100000000) {
      iVar31 = 0x1f;
      uVar26 = (uint)uVar25;
      if (uVar26 != 0) {
        for (; uVar26 >> iVar31 == 0; iVar31 = iVar31 + -1) {
        }
      }
      if (uVar26 == 0) {
        uVar26 = 0;
      }
      else {
        uVar26 = iVar31 + 1;
      }
    }
    else {
      iVar31 = 0x1f;
      uVar26 = (uint)(uVar25 >> 0x20);
      if (uVar26 != 0) {
        for (; uVar26 >> iVar31 == 0; iVar31 = iVar31 + -1) {
        }
      }
      if (uVar26 == 0) {
        iVar31 = 0;
      }
      else {
        iVar31 = iVar31 + 1;
      }
      uVar26 = iVar31 + 0x20;
    }
    if (uVar3 < uVar26) {
      bVar14 = (char)uVar26 - (byte)uVar3;
      if ((bVar34) && ((uVar25 & (1L << (bVar14 & 0x3f)) - 1U) == 0)) {
        bVar34 = true;
      }
      else {
        bVar34 = false;
      }
      uVar25 = uVar25 >> (bVar14 & 0x3f);
    }
    uVar26 = 0;
    if (uVar15 != 0) {
      uVar26 = local_784[0];
    }
    uVar30 = 0;
    if (1 < uVar15) {
      uVar30 = (ulonglong)local_784[1];
    }
    uVar4 = ~uVar4;
    if (uVar28 != 0) {
      uVar4 = uVar28 - 2;
    }
    FUN_180132ca0(uVar25 + ((uVar30 << 0x20) + (ulonglong)uVar26 << ((byte)uVar3 & 0x3f)),uVar4,
                  CONCAT71((int7)(uVar30 >> 8),(char)param_1[0xc2]),bVar34,param_2);
  }
  else {
    bVar34 = uVar4 != 0;
LAB_180134fe8:
    FUN_18013304c(&local_788,uVar28,CONCAT71((int7)(uVar25 >> 8),(char)param_1[0xc2]),bVar34,param_2
                 );
  }
LAB_180135000:
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_bb8);
  return;
}

// ---- Function: convert_hexadecimal_string_to_floating_type_common ----
/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::convert_hexadecimal_string_to_floating_type_common(struct
   __crt_strtox::floating_point_string const & __ptr64,class __crt_strtox::floating_point_value
   const & __ptr64)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

SLD_STATUS __cdecl
__crt_strtox::convert_hexadecimal_string_to_floating_type_common
          (floating_point_string *param_1,floating_point_value *param_2)

{
  floating_point_string fVar1;
  int32_t uVar2;
  ulonglong uVar3;
  floating_point_string *pfVar4;
  bool bVar5;
  int iVar6;
  floating_point_string *pfVar7;
  
  uVar3 = 0;
  pfVar4 = param_1 + 8;
  pfVar7 = param_1 + (ulonglong)*(uint *)(param_1 + 4) + 8;
  iVar6 = (-(uint)(param_2[8] != (floating_point_value)0x0) & 0x1d) + 0x17 + *(int *)param_1;
  if (pfVar4 != pfVar7) {
    do {
      if ((-(ulonglong)(param_2[8] != (floating_point_value)0x0) & 0x1fffffff000000) + 0xffffff <
          uVar3) break;
      fVar1 = *pfVar4;
      iVar6 = iVar6 + -4;
      pfVar4 = pfVar4 + 1;
      uVar3 = uVar3 * 0x10 + (ulonglong)(byte)fVar1;
    } while (pfVar4 != pfVar7);
  }
  bVar5 = true;
  while ((pfVar4 != pfVar7 && (bVar5 != false))) {
    fVar1 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    bVar5 = fVar1 == (floating_point_string)0x0;
  }
  uVar2 = FUN_180132ca0(uVar3,iVar6,CONCAT71((int7)((ulonglong)pfVar4 >> 8),param_1[0x308]),bVar5,
                        (int32_t *)param_2);
  return (SLD_STATUS)uVar2;
}

// ---- Function: FUN_1801350e0 ----
ulonglong FUN_1801350e0(uint *param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  byte local_res8;
  uint local_res18;
  int32_t local_238;
  ulonglong local_228;
  int32_t local_214 [468];
  
  if ((*param_1 == 0) || (uVar4 = *param_2, uVar4 == 0)) {
    return 0;
  }
  uVar15 = *param_1 - 1;
  uVar16 = (ulonglong)uVar15;
  uVar14 = uVar4 - 1;
  if (uVar14 == 0) {
    uVar4 = param_2[1];
    uVar17 = (ulonglong)uVar4;
    uVar6 = 0;
    if (uVar4 == 1) {
      uVar4 = param_1[1];
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      return (ulonglong)uVar4;
    }
    uVar1 = uVar6;
    if (uVar15 != 0) {
      while (uVar15 != 0xffffffff) {
        lVar7 = uVar16 + 1;
        uVar15 = (int)uVar16 - 1;
        uVar16 = (ulonglong)uVar15;
        uVar12 = (ulonglong)param_1[lVar7] | uVar6 << 0x20;
        uVar6 = uVar12 % uVar17;
        uVar1 = (uVar1 << 0x20) + (uVar12 / uVar17 & 0xffffffff);
      }
      *param_1 = 0;
      memcpy_s(param_1 + 1,0x1cc,local_214,0);
      param_1[1] = (uint)uVar6;
      param_1[2] = 0;
      *param_1 = 1;
      return uVar1;
    }
    uVar14 = param_1[1];
    *param_1 = 0;
    memcpy_s(param_1 + 1,0x1cc,local_214,0);
    uVar4 = uVar14 % uVar4;
    param_1[1] = uVar4;
    *param_1 = (uint)(uVar4 != 0);
    return uVar14 / uVar17;
  }
  if (uVar15 < uVar14) {
    return 0;
  }
  lVar7 = (longlong)(int)uVar15;
  iVar10 = uVar15 - uVar14;
  lVar9 = (longlong)iVar10;
  if (lVar9 <= lVar7) {
    puVar3 = param_1 + lVar7 + 1;
    uVar13 = uVar15;
    do {
      if (*(uint *)((longlong)param_2 + (lVar9 * -4 - (longlong)param_1) + (longlong)puVar3) !=
          *puVar3) {
        if (param_1[(longlong)(int)uVar13 + 1] <= param_2[(longlong)(int)(uVar13 - iVar10) + 1])
        goto LAB_180135284;
        break;
      }
      uVar13 = uVar13 - 1;
      lVar7 = lVar7 + -1;
      puVar3 = puVar3 + -1;
    } while (lVar9 <= lVar7);
  }
  iVar10 = iVar10 + 1;
LAB_180135284:
  if (iVar10 == 0) {
    return 0;
  }
  uVar14 = param_2[(ulonglong)uVar14 + 1];
  local_res18 = param_2[(ulonglong)(uVar4 - 2) + 1];
  uVar13 = 0;
  uVar6 = 0;
  iVar8 = 0x1f;
  if (uVar14 != 0) {
    for (; uVar14 >> iVar8 == 0; iVar8 = iVar8 + -1) {
    }
  }
  if (uVar14 == 0) {
    iVar8 = 0x20;
    local_res8 = 0;
  }
  else {
    iVar8 = 0x1f - iVar8;
    local_res8 = 0x20 - (char)iVar8;
    if (iVar8 == 0) goto LAB_180135314;
  }
  uVar5 = local_res18 >> (local_res8 & 0x1f);
  local_res18 = local_res18 << ((byte)iVar8 & 0x1f);
  uVar14 = uVar5 | uVar14 << ((byte)iVar8 & 0x1f);
  if (2 < uVar4) {
    local_res18 = local_res18 | param_2[(ulonglong)(uVar4 - 3) + 1] >> (local_res8 & 0x1f);
  }
LAB_180135314:
  iVar10 = iVar10 + -1;
  local_228 = 0;
  uVar17 = uVar6;
  if (-1 < iVar10) {
    uVar1 = (ulonglong)uVar14;
    uVar14 = iVar10 + uVar4;
    do {
      uVar15 = uVar13;
      if (uVar14 <= (uint)uVar16) {
        uVar15 = param_1[(ulonglong)uVar14 + 1];
      }
      uVar5 = param_1[(ulonglong)(uVar14 - 2) + 1];
      uVar17 = (ulonglong)uVar5;
      local_238 = CONCAT44(uVar15,param_1[(ulonglong)(uVar14 - 1) + 1]);
      if (iVar8 != 0) {
        local_238 = (ulonglong)(uVar5 >> (local_res8 & 0x3f)) | local_238 << ((byte)iVar8 & 0x3f);
        uVar5 = uVar5 << ((byte)iVar8 & 0x1f);
        uVar17 = (ulonglong)uVar5;
        if (2 < uVar14) {
          uVar17 = (ulonglong)(uVar5 | param_1[(ulonglong)(uVar14 - 3) + 1] >> (local_res8 & 0x1f));
        }
      }
      uVar12 = local_238 / uVar1;
      local_238 = local_238 % uVar1;
      if (0xffffffff < uVar12) {
        lVar7 = uVar12 - 0xffffffff;
        uVar12 = 0xffffffff;
        local_238 = local_238 + lVar7 * uVar1;
      }
      if (local_238 < 0x100000000) {
        uVar2 = local_res18 * uVar12;
        do {
          if (uVar2 <= (local_238 << 0x20 | uVar17)) break;
          uVar12 = uVar12 - 1;
          uVar2 = uVar2 - local_res18;
          local_238 = local_238 + uVar1;
        } while (local_238 < 0x100000000);
      }
      if (uVar12 != 0) {
        uVar16 = uVar6;
        uVar5 = uVar13;
        puVar3 = param_2;
        if (uVar4 != 0) {
          do {
            uVar16 = uVar16 + puVar3[1] * uVar12;
            uVar17 = uVar16 >> 0x20;
            uVar11 = (uint)uVar16;
            uVar16 = uVar17 + 1;
            if (uVar11 <= param_1[(ulonglong)(uVar5 + iVar10) + 1]) {
              uVar16 = uVar17;
            }
            uVar18 = uVar5 + 1;
            param_1[(ulonglong)(uVar5 + iVar10) + 1] =
                 param_1[(ulonglong)(uVar5 + iVar10) + 1] - uVar11;
            uVar5 = uVar18;
            puVar3 = puVar3 + 1;
          } while (uVar18 < uVar4);
        }
        if (uVar15 < uVar16) {
          uVar16 = uVar6;
          uVar15 = uVar13;
          puVar3 = param_2;
          if (uVar4 != 0) {
            do {
              uVar5 = uVar15 + 1;
              uVar16 = uVar16 + puVar3[1] + (ulonglong)param_1[(ulonglong)(uVar15 + iVar10) + 1];
              param_1[(ulonglong)(uVar15 + iVar10) + 1] = (uint)uVar16;
              uVar16 = uVar16 >> 0x20;
              uVar15 = uVar5;
              puVar3 = puVar3 + 1;
            } while (uVar5 < uVar4);
          }
          uVar12 = uVar12 - 1;
        }
        uVar16 = (ulonglong)(uVar14 - 1);
      }
      uVar15 = (uint)uVar16;
      uVar14 = uVar14 - 1;
      uVar17 = (local_228 << 0x20) + (uVar12 & 0xffffffff);
      iVar10 = iVar10 + -1;
      local_228 = uVar17;
    } while (-1 < iVar10);
  }
  uVar15 = uVar15 + 1;
  uVar4 = uVar15;
  if (uVar15 < *param_1) {
    do {
      uVar16 = (ulonglong)uVar4;
      uVar4 = uVar4 + 1;
      param_1[uVar16 + 1] = 0;
    } while (uVar4 < *param_1);
  }
  *param_1 = uVar15;
  while( true ) {
    if (uVar15 == 0) {
      return uVar17;
    }
    uVar15 = uVar15 - 1;
    if (param_1[(ulonglong)uVar15 + 1] != 0) break;
    *param_1 = uVar15;
  }
  return uVar17;
}

// ---- Function: memcpy_s ----
/* Library Function - Single Match
    memcpy_s
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

errno_t __cdecl memcpy_s(void *_Dst,rsize_t _DstSize,void *_Src,rsize_t _MaxCount)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (_MaxCount == 0) {
LAB_180135599:
    uVar2 = 0;
  }
  else {
    if (_Dst == (void *)0x0) {
LAB_1801355a2:
      puVar1 = __doserrno();
      uVar2 = 0x16;
    }
    else {
      if ((_Src != (void *)0x0) && (_MaxCount <= _DstSize)) {
        FUN_180150fd0((int32_t *)_Dst,(int32_t *)_Src,_MaxCount);
        goto LAB_180135599;
      }
      FUN_180151670((int32_t (*) [32])_Dst,0,_DstSize);
      if (_Src == (void *)0x0) goto LAB_1801355a2;
      if (_MaxCount <= _DstSize) {
        return 0x16;
      }
      puVar1 = __doserrno();
      uVar2 = 0x22;
    }
    *puVar1 = uVar2;
    FUN_18012b794();
  }
  return uVar2;
}

// ---- Function: FUN_180135604 ----
void FUN_180135604(longlong param_1,longlong *param_2)

{
  common_strtod_l<>(param_1,param_2,(__crt_locale_pointers *)0x0);
  return;
}

// ---- Function: feof ----
/* Library Function - Single Match
    feof
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl feof(FILE *_File)

{
  uint uVar1;
  ulong *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = __doserrno();
    *puVar2 = 0x16;
    FUN_18012b794();
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)&_File->_base + 4) >> 3 & 1;
  }
  return uVar1;
}

// ---- Function: FUN_180135638 ----
uint FUN_180135638(uint param_1,__crt_locale_pointers *param_2)

{
  int iVar1;
  ulong *puVar2;
  uint uVar3;
  char local_res8;
  char local_res9;
  int32_t local_resa;
  int32_t local_res18;
  int32_t local_res1a;
  longlong local_28;
  longlong *local_20 [2];
  char local_10;
  
  uVar3 = 0xffffffff;
  if (param_1 != 0xffffffff) {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_28,param_2);
    if (param_1 < 0x100) {
      uVar3 = (uint)*(byte *)(local_20[0][0x22] + (ulonglong)(param_1 & 0xff));
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      local_resa = 0;
      if (((int)local_20[0][1] < 2) ||
         (-1 < *(short *)(*local_20[0] + (ulonglong)((int)param_1 >> 8 & 0xff) * 2))) {
        puVar2 = __doserrno();
        iVar1 = 1;
        *puVar2 = 0x2a;
        local_res9 = '\0';
        local_res8 = (char)param_1;
      }
      else {
        iVar1 = 2;
        local_res8 = (char)(param_1 >> 8);
        local_res9 = (char)param_1;
      }
      local_res18 = 0;
      local_res1a = 0;
      iVar1 = __acrt_LCMapStringA((__crt_locale_pointers *)local_20,(ushort *)local_20[0][0x27],
                                  0x100,&local_res8,iVar1,&local_res18,3,
                                  *(UINT *)((longlong)local_20[0] + 0xc),1);
      uVar3 = param_1;
      if (iVar1 != 0) {
        uVar3 = (uint)(byte)local_res18;
        if (iVar1 != 1) {
          uVar3 = (uint)CONCAT11((byte)local_res18,local_res18._1_1_);
        }
      }
      if (local_10 != '\0') {
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
      }
    }
  }
  return uVar3;
}

// ---- Function: tolower ----
/* Library Function - Single Match
    tolower
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl tolower(int _C)

{
  if (DAT_1801ee158 == 0) {
    if (_C - 0x41U < 0x1a) {
      _C = _C + 0x20;
    }
  }
  else {
    _C = FUN_180135638(_C,(__crt_locale_pointers *)0x0);
  }
  return _C;
}

// ---- Function: common_getenv_char_ ----
/* Library Function - Single Match
    char * __ptr64 __cdecl common_getenv<char>(char const * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

char * __cdecl common_getenv<char>(char *param_1)

{
  ulong *puVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  if ((param_1 != (char *)0x0) &&
     (uVar2 = FUN_180136a44((int32_t (*) [32])param_1,0x7fff), uVar2 < 0x7fff)) {
    __acrt_lock(0xb);
    pcVar3 = common_getenv_nolock<char>(param_1);
    __acrt_unlock(0xb);
    return pcVar3;
  }
  puVar1 = __doserrno();
  *puVar1 = 0x16;
  FUN_18012b794();
  return (char *)0x0;
}

// ---- Function: common_getenv_nolock_char_ ----
/* Library Function - Single Match
    char * __ptr64 __cdecl common_getenv_nolock<char>(char const * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

char * __cdecl common_getenv_nolock<char>(char *param_1)

{
  int iVar1;
  longlong *plVar2;
  char *_Str1;
  ulonglong uVar3;
  ulonglong _MaxCount;
  
  plVar2 = (longlong *)__dcrt_get_or_create_narrow_environment_nolock();
  if ((plVar2 != (longlong *)0x0) && (param_1 != (char *)0x0)) {
    _MaxCount = 0xffffffffffffffff;
    do {
      _MaxCount = _MaxCount + 1;
    } while (param_1[_MaxCount] != '\0');
    _Str1 = (char *)*plVar2;
    while (_Str1 != (char *)0x0) {
      uVar3 = 0xffffffffffffffff;
      do {
        uVar3 = uVar3 + 1;
      } while (_Str1[uVar3] != '\0');
      if (((_MaxCount < uVar3) && (_Str1[_MaxCount] == '=')) &&
         (iVar1 = _strnicoll(_Str1,param_1,_MaxCount), iVar1 == 0)) {
        return (char *)(*plVar2 + 1 + _MaxCount);
      }
      plVar2 = plVar2 + 1;
      _Str1 = (char *)*plVar2;
    }
  }
  return (char *)0x0;
}

// ---- Function: common_getenv_nolock_wchar_t_ ----
/* Library Function - Single Match
    wchar_t * __ptr64 __cdecl common_getenv_nolock<wchar_t>(wchar_t const * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t * __cdecl common_getenv_nolock<wchar_t>(wchar_t *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int32_t (*pauVar4) [32];
  ulonglong uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  ulonglong uVar8;
  
  plVar3 = (longlong *)__dcrt_get_or_create_wide_environment_nolock();
  if ((plVar3 != (longlong *)0x0) && (param_1 != (wchar_t *)0x0)) {
    uVar7 = 0xffffffffffffffff;
    do {
      uVar8 = uVar7;
      uVar7 = uVar8 + 1;
    } while (param_1[uVar7] != L'\0');
    pauVar4 = (int32_t (*) [32])*plVar3;
    while (pauVar4 != (int32_t (*) [32])0x0) {
      uVar6 = 0xffffffffffffffff;
      do {
        uVar5 = uVar6 + 1;
        lVar1 = uVar6 * 2;
        uVar6 = uVar5;
      } while (*(short *)(*pauVar4 + lVar1 + 2) != 0);
      if (((uVar7 < uVar5) && (*(short *)(*pauVar4 + uVar8 * 2 + 2) == 0x3d)) &&
         (iVar2 = FUN_180140f20(pauVar4,(int32_t (*) [32])param_1,uVar7), iVar2 == 0)) {
        return (wchar_t *)(*plVar3 + uVar7 * 2 + 2);
      }
      plVar3 = plVar3 + 1;
      pauVar4 = (int32_t (*) [32])*plVar3;
    }
  }
  return (wchar_t *)0x0;
}

// ---- Function: common_getenv_s_wchar_t_ ----
/* Library Function - Single Match
    int __cdecl common_getenv_s<wchar_t>(unsigned __int64 * __ptr64 const,wchar_t * __ptr64
   const,unsigned __int64,wchar_t const * __ptr64 const)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl
common_getenv_s<wchar_t>(__uint64 *param_1,wchar_t *param_2,__uint64 param_3,wchar_t *param_4)

{
  bool bVar1;
  errno_t eVar2;
  ulong *puVar3;
  wchar_t *_Src;
  longlong lVar4;
  ulonglong uVar6;
  int iVar7;
  longlong lVar5;
  
  __acrt_lock(0xb);
  iVar7 = 0;
  if (param_1 != (__uint64 *)0x0) {
    *param_1 = 0;
    if (param_2 == (wchar_t *)0x0) {
LAB_180135978:
      if (param_3 == 0) goto LAB_18013597d;
LAB_180135984:
      bVar1 = false;
    }
    else {
      if (param_3 == 0) {
        if (param_2 == (wchar_t *)0x0) goto LAB_180135978;
        goto LAB_180135984;
      }
LAB_18013597d:
      bVar1 = true;
    }
    if (bVar1) {
      if (param_2 != (wchar_t *)0x0) {
        *param_2 = L'\0';
      }
      _Src = common_getenv_nolock<wchar_t>(param_4);
      if (_Src != (wchar_t *)0x0) {
        lVar4 = -1;
        do {
          lVar5 = lVar4;
          lVar4 = lVar5 + 1;
        } while (_Src[lVar4] != L'\0');
        uVar6 = lVar5 + 2;
        *param_1 = uVar6;
        if (param_3 != 0) {
          if (param_3 < uVar6) {
            iVar7 = 0x22;
          }
          else {
            eVar2 = wcscpy_s(param_2,param_3,_Src);
            if (eVar2 != 0) {
                    
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
          }
        }
      }
      goto LAB_1801359d6;
    }
  }
  puVar3 = __doserrno();
  iVar7 = 0x16;
  *puVar3 = 0x16;
  FUN_18012b794();
LAB_1801359d6:
  __acrt_unlock(0xb);
  return iVar7;
}

