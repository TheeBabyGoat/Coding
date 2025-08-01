#include "_controlfp.h"
#include <stdint.h>
#include <stddef.h>

 _controlfp_s(local_7a8,0,0);
  uVar8 = (ulonglong)puVar1 >> 0x34 & 0x7ff;
  if (uVar8 == 0) {
if ((((ulonglong)puVar1 & 0xfffffffffffff) != 0) && ((local_7a8[0] & 0x1000000) == 0)) {
LAB_1801494f2:
      local_7d8 = (uint *)((ulonglong)puVar1 & 0x7fffffffffffffff);
      local_7bc = 0x8001f;
      _controlfp_s(&local_7c0,0,0);
      _controlfp_s((uint *)&local_7e8,0x8001f,local_7bc);
      local_7c8 = param_2 + 1;
      local_7d0 = local_7d8;
      uVar8 = (ulonglong)local_7d8 >> 0x34 & 0x7ff;
      uVar15 = (-(ulonglong)(uVar8 != 0) & 0x10000000000000) +
               ((ulonglong)local_7d8 & 0xfffffffffffff);
      uVar22 = (2 - (uint)(uVar8 != 0)) + ((uint)((ulonglong)local_7d8 >> 0x34) & 0x7ff);
      dVar25 = FUN_18014c3a0();
      dVar25 = ceil(dVar25);
      uVar6 = -(uint)(((int)dVar25 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar25;
      uVar17 = (uint)(uVar15 >> 0x20);
      local_784 = uVar15;
      uVar23 = (uint)(uVar17 != 0);
      uVar14 = uVar23 + 1;
      if (uVar22 < 0x434) {
        if (uVar22 == 0x36) {
LAB_18014993f:
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          puVar1 = (uint *)((longlong)&local_784 + (ulonglong)(-(uint)(uVar17 != 0) & 4));
          iVar5 = 0x1f;
          bVar24 = *puVar1 == 0;
          if (!bVar24) {
            for (; *puVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (bVar24) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + 1;
          }
          uVar23 = (iVar5 == 0x20) + uVar14;
          if (uVar23 < 0x74) {
            uVar17 = uVar23 - 1;
            while (uVar17 != 0xffffffff) {
              uVar21 = uVar17 - 1;
              if (uVar17 < uVar14) {
                iVar5 = *(int *)((longlong)&local_784 + (ulonglong)uVar17 * 4);
              }
              else {
                iVar5 = 0;
              }
              if (uVar21 < uVar14) {
                uVar7 = *(uint *)((longlong)&local_784 + (ulonglong)uVar21 * 4);
              }
              else {
                uVar7 = 0;
              }
              *(uint *)((longlong)&local_784 + (ulonglong)uVar17 * 4) = uVar7 >> 0x1f | iVar5 * 2;
              uVar17 = uVar21;
            }
          }
          else {
            uVar23 = 0;
          }
          uVar14 = 0x435 - uVar22 >> 5;
          local_788 = uVar23;
          FUN_180151670((int32_t (*) [32])local_3e4,0,(ulonglong)uVar14 * 4);
          local_3e4[uVar14] = 1 << ((byte)(0x435 - uVar22) & 0x1f);
        }
        else {
          local_3e4[1] = 0x100000;
          local_3e4[0] = 0;
          local_3e8 = 2;
          if (uVar17 == 0) goto LAB_18014993f;
          uVar8 = 0;
          do {
            if (local_3e4[uVar8] != *(uint *)((longlong)&local_784 + uVar8 * 4)) goto LAB_18014993f;
            uVar23 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar23;
          } while (uVar23 != 2);
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          iVar5 = 0x1f;
          if (uVar17 != 0) {
            for (; uVar17 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (uVar17 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + 1;
          }
          uVar23 = (0x20U - iVar5 < 2) + uVar14;
          if (uVar23 < 0x74) {
            uVar17 = uVar23 - 1;
            while (uVar17 != 0xffffffff) {
              uVar21 = uVar17 - 1;
              if (uVar17 < uVar14) {
                iVar5 = *(int *)((longlong)&local_784 + (ulonglong)uVar17 * 4);
              }
              else {
                iVar5 = 0;
              }
              if (uVar21 < uVar14) {
                uVar7 = *(uint *)((longlong)&local_784 + (ulonglong)uVar21 * 4);
              }
              else {
                uVar7 = 0;
              }
              *(uint *)((longlong)&local_784 + (ulonglong)uVar17 * 4) = uVar7 >> 0x1e | iVar5 * 4;
              uVar17 = uVar21;
            }
          }
          else {
            uVar23 = 0;
          }
          uVar14 = 0x436 - uVar22 >> 5;
          local_788 = uVar23;
          FUN_180151670((int32_t (*) [32])local_3e4,0,(ulonglong)uVar14 * 4);
          local_3e4[uVar14] = 1 << ((byte)(0x436 - uVar22) & 0x1f);
        }
        local_3e8 = uVar14 + 1;
        uVar8 = (ulonglong)local_3e8;
        local_5b8 = local_3e8;
        if (uVar8 != 0) {
          if (uVar8 << 2 < 0x1cd) {
            FUN_180150fd0((int32_t *)local_5b4,(int32_t *)local_3e4,uVar8 << 2);
          }
          else {
            FUN_180151670((int32_t (*) [32])local_5b4,0,0x1cc);
            puVar9 = __doserrno();
            *puVar9 = 0x22;
            FUN_18012b794();
          }
          uVar8 = (ulonglong)local_5b8;
        }
      }
      else {
        local_3e4[1] = 0x100000;
        local_3e4[0] = 0;
        local_3e8 = 2;
        if (uVar17 == 0) {
LAB_180149703:
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          uVar21 = uVar22 - 0x433 & 0x1f;
          uVar17 = uVar22 - 0x433 >> 5;
          sVar3 = (sbyte)uVar21;
          bVar11 = 0x20 - sVar3;
          uVar22 = (int)(1L << (bVar11 & 0x3f)) - 1;
          puVar1 = (uint *)((longlong)&local_784 + (ulonglong)uVar23 * 4);
          iVar5 = 0x1f;
          bVar24 = *puVar1 == 0;
          if (!bVar24) {
            for (; *puVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (bVar24) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + 1;
          }
          if ((uVar14 + uVar17 < 0x74) &&
             (uVar23 = (0x20U - iVar5 < uVar21) + uVar14 + uVar17, uVar23 < 0x74)) {
            uVar21 = uVar23;
            while (uVar21 = uVar21 - 1, uVar21 != uVar17 - 1) {
              uVar7 = uVar21 - uVar17;
              if (uVar7 < uVar14) {
                uVar20 = *(uint *)((longlong)&local_784 + (ulonglong)uVar7 * 4);
              }
              else {
                uVar20 = 0;
              }
              if (uVar7 - 1 < uVar14) {
                uVar7 = *(uint *)((longlong)&local_784 + (ulonglong)(uVar7 - 1) * 4);
              }
              else {
                uVar7 = 0;
              }
              *(uint *)((longlong)&local_784 + (ulonglong)uVar21 * 4) =
                   (uVar7 & ~uVar22) >> (bVar11 & 0x1f) | (uVar20 & uVar22) << sVar3;
            }
            uVar8 = 0;
            if (uVar17 != 0) {
              do {
                *(int32_t *)((longlong)&local_784 + uVar8 * 4) = 0;
                uVar14 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar14;
              } while (uVar14 != uVar17);
            }
          }
          else {
            uVar23 = 0;
          }
          uVar8 = 1;
          local_5b8 = 1;
          local_5b4[0] = 2;
          local_788 = uVar23;
        }
        else {
          uVar8 = 0;
          do {
            if (local_3e4[uVar8] != *(uint *)((longlong)&local_784 + uVar8 * 4)) goto LAB_180149703;
            uVar17 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar17;
          } while (uVar17 != 2);
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          uVar21 = uVar22 - 0x432 & 0x1f;
          uVar17 = uVar22 - 0x432 >> 5;
          sVar3 = (sbyte)uVar21;
          bVar11 = 0x20 - sVar3;
          uVar22 = (int)(1L << (bVar11 & 0x3f)) - 1;
          puVar1 = (uint *)((longlong)&local_784 + (ulonglong)uVar23 * 4);
          iVar5 = 0x1f;
          bVar24 = *puVar1 == 0;
          if (!bVar24) {
            for (; *puVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (bVar24) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + 1;
          }
          if ((uVar14 + uVar17 < 0x74) &&
             (uVar23 = (0x20U - iVar5 < uVar21) + uVar14 + uVar17, uVar23 < 0x74)) {
            uVar21 = uVar23;
            while (uVar21 = uVar21 - 1, uVar21 != uVar17 - 1) {
              uVar7 = uVar21 - uVar17;
              if (uVar7 < uVar14) {
                uVar20 = *(uint *)((longlong)&local_784 + (ulonglong)uVar7 * 4);
              }
              else {
                uVar20 = 0;
              }
              if (uVar7 - 1 < uVar14) {
                uVar7 = *(uint *)((longlong)&local_784 + (ulonglong)(uVar7 - 1) * 4);
              }
              else {
                uVar7 = 0;
              }
              *(uint *)((longlong)&local_784 + (ulonglong)uVar21 * 4) =
                   (uVar7 & ~uVar22) >> (bVar11 & 0x1f) | (uVar20 & uVar22) << sVar3;
            }
            uVar8 = 0;
            if (uVar17 != 0) {
              do {
                *(int32_t *)((longlong)&local_784 + uVar8 * 4) = 0;
                uVar14 = (int)uVar8 + 1;
                uVar8 = (ulonglong)uVar14;
              } while (uVar14 != uVar17);
            }
          }
          else {
            uVar23 = 0;
          }
          uVar8 = 1;
          local_5b8 = 1;
          local_5b4[0] = 4;
          local_788 = uVar23;
        }
      }
      uVar14 = (uint)uVar8;
      if ((int)uVar6 < 0) {
        local_7e0 = -uVar6;
        uVar8 = (ulonglong)local_7e0 / 10;
        local_7f4 = (uint)uVar8;
        local_7e8 = (uint *)CONCAT44(local_7e8._4_4_,local_7f4);
        if (local_7f4 != 0) {
          do {
            uVar17 = (uint)uVar8;
            if (0x26 < uVar17) {
              uVar17 = 0x26;
            }
            local_7d8 = (uint *)CONCAT44(local_7d8._4_4_,uVar17);
            uVar17 = uVar17 - 1;
            bVar11 = (&DAT_18017a112)[(ulonglong)uVar17 * 4];
            bVar2 = (&DAT_18017a113)[(ulonglong)uVar17 * 4];
            local_3e8 = (uint)bVar2 + (uint)bVar11;
            FUN_180151670((int32_t (*) [32])local_3e4,0,(ulonglong)bVar11 * 4);
            FUN_180150fd0((int32_t *)(local_3e4 + bVar11),
                          (int32_t *)
                          (&DAT_180179800 +
                          (ulonglong)*(ushort *)(&DAT_18017a110 + (ulonglong)uVar17 * 4) * 4),
                          (ulonglong)bVar2 << 2);
            if (local_3e8 < 2) {
              uVar8 = (ulonglong)local_3e4[0];
              if (local_3e4[0] == 0) {
LAB_180149fcf:
                uVar23 = 0;
                local_788 = uVar23;
LAB_18014a0e0:
                bVar24 = true;
              }
              else {
                if ((local_3e4[0] == 1) || (uVar23 == 0)) goto LAB_18014a0e0;
                uVar15 = 0;
                uVar13 = 0;
                do {
                  uVar12 = *(uint *)((longlong)&local_784 + uVar13 * 4) * uVar8 + uVar15;
                  *(int *)((longlong)&local_784 + uVar13 * 4) = (int)uVar12;
                  uVar15 = uVar12 >> 0x20;
                  iVar5 = (int)(uVar12 >> 0x20);
                  uVar17 = (int)uVar13 + 1;
                  uVar13 = (ulonglong)uVar17;
                } while (uVar17 != uVar23);
LAB_18014a0b1:
                uVar23 = local_788;
                if (iVar5 == 0) goto LAB_18014a0e0;
                if (local_788 < 0x73) {
                  *(int *)((longlong)&local_784 + (ulonglong)local_788 * 4) = iVar5;
                  uVar23 = local_788 + 1;
                  local_788 = uVar23;
                  goto LAB_18014a0e0;
                }
                uVar23 = 0;
                bVar24 = false;
                local_788 = 0;
              }
              if (!bVar24) goto LAB_18014a0eb;
            }
            else {
              if (uVar23 < 2) {
                uVar17 = (uint)local_784;
                uVar8 = local_784 & 0xffffffff;
                uVar15 = (ulonglong)local_3e8 << 2;
                local_788 = local_3e8;
                if ((ulonglong)local_3e8 != 0) {
                  if (uVar15 < 0x1cd) {
                    FUN_180150fd0(&local_784,(int32_t *)local_3e4,uVar15);
                  }
                  else {
                    FUN_180151670((int32_t (*) [32])&local_784,0,0x1cc);
                    puVar9 = __doserrno();
                    *puVar9 = 0x22;
                    FUN_18012b794();
                  }
                }
                if (uVar17 != 0) {
                  uVar23 = local_788;
                  if ((uVar17 != 1) && (local_788 != 0)) {
                    uVar15 = 0;
                    uVar13 = 0;
                    do {
                      uVar12 = *(uint *)((longlong)&local_784 + uVar13 * 4) * uVar8 + uVar15;
                      *(int *)((longlong)&local_784 + uVar13 * 4) = (int)uVar12;
                      uVar15 = uVar12 >> 0x20;
                      iVar5 = (int)(uVar12 >> 0x20);
                      uVar23 = (int)uVar13 + 1;
                      uVar13 = (ulonglong)uVar23;
                    } while (uVar23 != local_788);
                    goto LAB_18014a0b1;
                  }
                  goto LAB_18014a0e0;
                }
                goto LAB_180149fcf;
              }
              bVar24 = local_3e8 < uVar23;
              local_798 = local_3e4;
              if (!bVar24) {
                local_798 = (uint *)&local_784;
              }
              local_7d0 = local_3e4;
              uVar17 = uVar23;
              if (bVar24) {
                uVar17 = local_3e8;
              }
              uVar22 = local_3e8;
              if (bVar24) {
                uVar22 = uVar23;
                local_7d0 = (uint *)&local_784;
              }
              local_788 = 0;
              uVar8 = 0;
              local_218 = 0;
              if (uVar17 != 0) {
                do {
                  uVar23 = local_798[uVar8];
                  uVar21 = (uint)uVar8;
                  if (uVar23 == 0) {
                    if (uVar21 == local_788) {
                      local_214[uVar8] = 0;
                      local_788 = uVar21 + 1;
                      local_218 = local_788;
                    }
                  }
                  else {
                    uVar15 = 0;
                    if (uVar22 != 0) {
                      do {
                        uVar7 = (uint)uVar8;
                        uVar13 = uVar8;
                        if (uVar7 == 0x73) break;
                        if (uVar7 == local_788) {
                          local_214[uVar8] = 0;
                          local_218 = uVar7 + 1;
                        }
                        uVar13 = (ulonglong)(uVar7 + 1);
                        uVar15 = (ulonglong)local_7d0[uVar7 + -uVar21] * (ulonglong)uVar23 +
                                 (ulonglong)local_214[uVar8] + uVar15;
                        local_214[uVar8] = (uint)uVar15;
                        uVar15 = uVar15 >> 0x20;
                        uVar8 = uVar13;
                        local_788 = local_218;
                      } while (-uVar21 + uVar7 + 1 != uVar22);
                      uVar23 = (uint)uVar15;
                      uVar8 = uVar13;
                      while (uVar23 != 0) {
                        uVar7 = (uint)uVar8;
                        if (uVar7 == 0x73) goto LAB_18014a0eb;
                        if (uVar7 == local_788) {
                          local_214[uVar8] = 0;
                          local_218 = uVar7 + 1;
                        }
                        uVar23 = local_214[uVar8];
                        local_214[uVar8] = (uint)(uVar23 + uVar15);
                        uVar23 = (uint)(uVar23 + uVar15 >> 0x20);
                        uVar15 = (ulonglong)uVar23;
                        uVar8 = (ulonglong)(uVar7 + 1);
                        local_788 = local_218;
                      }
                    }
                    if ((int)uVar8 == 0x73) goto LAB_18014a0eb;
                  }
                  uVar8 = (ulonglong)(uVar21 + 1);
                } while (uVar21 + 1 != uVar17);
              }
              uVar8 = (ulonglong)local_788 << 2;
              uVar23 = local_788;
              if ((ulonglong)local_788 != 0) {
                if (uVar8 < 0x1cd) {
                  FUN_180150fd0(&local_784,(int32_t *)local_214,uVar8);
                  uVar23 = local_788;
                }
                else {
                  FUN_180151670((int32_t (*) [32])&local_784,0,0x1cc);
                  puVar9 = __doserrno();
                  *puVar9 = 0x22;
                  FUN_18012b794();
                  uVar23 = local_788;
                }
              }
            }
            local_7f4 = local_7f4 - (uint)local_7d8;
            uVar8 = (ulonglong)local_7f4;
          } while (local_7f4 != 0);
          local_7f4 = (uint)local_7e8;
        }
        iVar5 = local_7e0 + local_7f4 * -10;
        if (iVar5 == 0) goto LAB_180149c35;
        uVar17 = *(uint *)(&DAT_18017a1a8 + (ulonglong)(iVar5 - 1) * 4);
        if (uVar17 != 0) {
          if ((uVar17 != 1) && (uVar23 != 0)) {
            uVar8 = 0;
            uVar15 = 0;
            do {
              uVar13 = (ulonglong)*(uint *)((longlong)&local_784 + uVar15 * 4) * (ulonglong)uVar17 +
                       uVar8;
              *(int *)((longlong)&local_784 + uVar15 * 4) = (int)uVar13;
              uVar8 = uVar13 >> 0x20;
              uVar22 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar22;
            } while (uVar22 != uVar23);
            iVar5 = (int)(uVar13 >> 0x20);
            uVar23 = local_788;
            if (iVar5 != 0) {
              if (0x72 < local_788) goto LAB_18014a0eb;
              *(int *)((longlong)&local_784 + (ulonglong)local_788 * 4) = iVar5;
              local_788 = local_788 + 1;
              uVar23 = local_788;
            }
          }
          goto LAB_180149c35;
        }
LAB_18014a0eb:
        local_788 = 0;
        pcVar19 = local_7a0;
      }
      else {
        uVar15 = (ulonglong)uVar6 / 10;
        local_7f0 = (uint)uVar15;
        local_7d8 = (uint *)CONCAT44(local_7d8._4_4_,local_7f0);
        if (local_7f0 != 0) {
          do {
            uVar14 = (uint)uVar8;
            local_7e0 = (uint)uVar15;
            if (0x26 < local_7e0) {
              local_7e0 = 0x26;
            }
            uVar17 = local_7e0 - 1;
            bVar11 = (&DAT_18017a112)[(ulonglong)uVar17 * 4];
            bVar2 = (&DAT_18017a113)[(ulonglong)uVar17 * 4];
            local_3e8 = (uint)bVar2 + (uint)bVar11;
            FUN_180151670((int32_t (*) [32])local_3e4,0,(ulonglong)bVar11 * 4);
            FUN_180150fd0((int32_t *)(local_3e4 + bVar11),
                          (int32_t *)
                          (&DAT_180179800 +
                          (ulonglong)*(ushort *)(&DAT_18017a110 + (ulonglong)uVar17 * 4) * 4),
                          (ulonglong)bVar2 << 2);
            uVar17 = local_5b4[0];
            if (local_3e8 < 2) {
              uVar15 = (ulonglong)local_3e4[0];
              if (local_3e4[0] == 0) {
LAB_180149ae2:
                uVar8 = 0;
LAB_180149c02:
                local_5b8 = (uint)uVar8;
LAB_180149c20:
                bVar24 = true;
              }
              else {
                if ((local_3e4[0] == 1) || (uVar14 == 0)) goto LAB_180149c20;
                uVar8 = 0;
                uVar13 = 0;
                do {
                  uVar12 = local_5b4[uVar13] * uVar15 + uVar8;
                  local_5b4[uVar13] = (uint)uVar12;
                  uVar8 = uVar12 >> 0x20;
                  uVar17 = (uint)(uVar12 >> 0x20);
                  uVar22 = (int)uVar13 + 1;
                  uVar13 = (ulonglong)uVar22;
                } while (uVar22 != uVar14);
LAB_180149bdc:
                if (uVar17 == 0) {
                  uVar8 = (ulonglong)local_5b8;
                  goto LAB_180149c20;
                }
                if (local_5b8 < 0x73) {
                  local_5b4[local_5b8] = uVar17;
                  uVar8 = (ulonglong)(local_5b8 + 1);
                  goto LAB_180149c02;
                }
                uVar8 = 0;
                bVar24 = false;
                local_5b8 = 0;
              }
              if (!bVar24) goto LAB_180149c2b;
            }
            else {
              if (uVar14 < 2) {
                uVar15 = (ulonglong)local_5b4[0];
                uVar8 = (ulonglong)local_3e8 << 2;
                local_5b8 = local_3e8;
                if ((ulonglong)local_3e8 != 0) {
                  if (uVar8 < 0x1cd) {
                    FUN_180150fd0((int32_t *)local_5b4,(int32_t *)local_3e4,uVar8);
                  }
                  else {
                    FUN_180151670((int32_t (*) [32])local_5b4,0,0x1cc);
                    puVar9 = __doserrno();
                    *puVar9 = 0x22;
                    FUN_18012b794();
                  }
                }
                uVar8 = (ulonglong)local_5b8;
                if (uVar17 != 0) {
                  if ((uVar17 != 1) && (local_5b8 != 0)) {
                    uVar8 = 0;
                    uVar13 = 0;
                    do {
                      uVar12 = local_5b4[uVar13] * uVar15 + uVar8;
                      local_5b4[uVar13] = (uint)uVar12;
                      uVar8 = uVar12 >> 0x20;
                      uVar17 = (uint)(uVar12 >> 0x20);
                      uVar14 = (int)uVar13 + 1;
                      uVar13 = (ulonglong)uVar14;
                    } while (uVar14 != local_5b8);
                    goto LAB_180149bdc;
                  }
                  goto LAB_180149c20;
                }
                goto LAB_180149ae2;
              }
              bVar24 = local_3e8 < uVar14;
              local_7d0 = local_3e4;
              if (!bVar24) {
                local_7d0 = local_5b4;
              }
              local_7e8 = local_3e4;
              uVar17 = uVar14;
              if (bVar24) {
                uVar17 = local_3e8;
              }
              uVar22 = local_3e8;
              if (bVar24) {
                uVar22 = uVar14;
                local_7e8 = local_5b4;
              }
              uVar8 = 0;
              uVar15 = 0;
              local_218 = 0;
              if (uVar17 != 0) {
                do {
                  uVar14 = local_7d0[uVar15];
                  iVar5 = (int)uVar15;
                  if (uVar14 == 0) {
                    if (iVar5 == (int)uVar8) {
                      local_214[uVar15] = 0;
                      uVar8 = (ulonglong)(iVar5 + 1U);
                      local_218 = iVar5 + 1U;
                    }
                  }
                  else {
                    uVar13 = 0;
                    if (uVar22 != 0) {
                      do {
                        iVar18 = (int)uVar15;
                        uVar12 = uVar15;
                        if (iVar18 == 0x73) break;
                        if (iVar18 == (int)uVar8) {
                          local_214[uVar15] = 0;
                          local_218 = iVar18 + 1;
                        }
                        uVar12 = (ulonglong)(iVar18 + 1U);
                        uVar13 = (ulonglong)local_7e8[(uint)(iVar18 + -iVar5)] * (ulonglong)uVar14 +
                                 uVar13 + (ulonglong)local_214[uVar15];
                        local_214[uVar15] = (uint)uVar13;
                        uVar8 = (ulonglong)local_218;
                        uVar13 = uVar13 >> 0x20;
                        uVar15 = uVar12;
                      } while (iVar18 + 1U + -iVar5 != uVar22);
                      uVar14 = (uint)uVar13;
                      uVar15 = uVar12;
                      while (uVar14 != 0) {
                        iVar18 = (int)uVar15;
                        if (iVar18 == 0x73) goto LAB_180149c2b;
                        if (iVar18 == (int)uVar8) {
                          local_214[uVar15] = 0;
                          local_218 = iVar18 + 1U;
                        }
                        uVar14 = local_214[uVar15];
                        local_214[uVar15] = (uint)(uVar13 + uVar14);
                        uVar8 = (ulonglong)local_218;
                        uVar14 = (uint)(uVar13 + uVar14 >> 0x20);
                        uVar13 = (ulonglong)uVar14;
                        uVar15 = (ulonglong)(iVar18 + 1U);
                      }
                    }
                    if ((int)uVar15 == 0x73) goto LAB_180149c2b;
                  }
                  uVar15 = (ulonglong)(iVar5 + 1U);
                } while (iVar5 + 1U != uVar17);
              }
              local_5b8 = (uint)uVar8;
              if (uVar8 != 0) {
                if (uVar8 << 2 < 0x1cd) {
                  FUN_180150fd0((int32_t *)local_5b4,(int32_t *)local_214,uVar8 << 2);
                }
                else {
                  FUN_180151670((int32_t (*) [32])local_5b4,0,0x1cc);
                  puVar9 = __doserrno();
                  *puVar9 = 0x22;
                  FUN_18012b794();
                }
                uVar8 = (ulonglong)local_5b8;
              }
            }
            uVar14 = (uint)uVar8;
            local_7f0 = local_7f0 - local_7e0;
            uVar15 = (ulonglong)local_7f0;
          } while (local_7f0 != 0);
          local_7f0 = (uint)local_7d8;
        }
        iVar5 = uVar6 + local_7f0 * -10;
        if (iVar5 != 0) {
          uVar17 = *(uint *)(&DAT_18017a1a8 + (ulonglong)(iVar5 - 1) * 4);
          if (uVar17 == 0) {
LAB_180149c2b:
            local_5b8 = 0;
LAB_180149c2e:
            uVar14 = local_5b8;
          }
          else if ((uVar17 != 1) && (uVar14 != 0)) {
            uVar8 = 0;
            uVar15 = 0;
            do {
              uVar13 = (ulonglong)local_5b4[uVar15] * (ulonglong)uVar17 + uVar8;
              local_5b4[uVar15] = (uint)uVar13;
              uVar8 = uVar13 >> 0x20;
              uVar22 = (int)uVar15 + 1;
              uVar15 = (ulonglong)uVar22;
            } while (uVar22 != uVar14);
            uVar17 = (uint)(uVar13 >> 0x20);
            uVar14 = local_5b8;
            if (uVar17 != 0) {
              if (0x72 < local_5b8) goto LAB_180149c2b;
              local_5b4[local_5b8] = uVar17;
              local_5b8 = local_5b8 + 1;
              goto LAB_180149c2e;
            }
          }
        }
LAB_180149c35:
        pcVar19 = local_7a0;
        if (uVar23 != 0) {
          uVar8 = 0;
          uVar15 = 0;
          do {
            uVar13 = uVar8 + (ulonglong)*(uint *)((longlong)&local_784 + uVar15 * 4) * 10;
            *(int *)((longlong)&local_784 + uVar15 * 4) = (int)uVar13;
            uVar17 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar17;
            uVar8 = uVar13 >> 0x20;
          } while (uVar17 != uVar23);
          iVar5 = (int)(uVar13 >> 0x20);
          if (iVar5 != 0) {
            if (local_788 < 0x73) {
              *(int *)((longlong)&local_784 + (ulonglong)local_788 * 4) = iVar5;
              local_788 = local_788 + 1;
            }
            else {
              local_3e8 = 0;
              local_788 = 0;
              memcpy_s(&local_784,0x1cc,local_3e4,0);
            }
          }
        }
      }
      uVar8 = FUN_1801350e0(&local_788,&local_5b8);
      if ((int)uVar8 == 10) {
        uVar6 = uVar6 + 1;
        *pcVar19 = '1';
        pcVar16 = pcVar19 + 1;
        if (uVar14 != 0) {
          uVar8 = 0;
          uVar15 = 0;
          do {
            uVar13 = uVar8 + (ulonglong)local_5b4[uVar15] * 10;
            local_5b4[uVar15] = (uint)uVar13;
            uVar23 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar23;
            uVar8 = uVar13 >> 0x20;
          } while (uVar23 != uVar14);
          uVar23 = (uint)(uVar13 >> 0x20);
          if (uVar23 != 0) {
            if (local_5b8 < 0x73) {
              local_5b4[local_5b8] = uVar23;
              local_5b8 = local_5b8 + 1;
            }
            else {
              local_3e8 = 0;
              local_5b8 = 0;
              memcpy_s(local_5b4,0x1cc,local_3e4,0);
            }
          }
        }
      }
      else if ((int)uVar8 == 0) {
        uVar6 = uVar6 - 1;
        pcVar16 = pcVar19;
      }
      else {
        pcVar16 = pcVar19 + 1;
        *pcVar19 = (char)uVar8 + '0';
      }
      local_790[1] = uVar6;
      uVar23 = local_7c8;
      if (((-1 < (int)uVar6) && (local_7c8 < 0x80000000)) && (local_7c4 == 0)) {
        uVar23 = local_7c8 + uVar6;
      }
      uVar8 = (ulonglong)uVar23;
      if (param_6 - 1 < (ulonglong)uVar23) {
        uVar8 = param_6 - 1;
      }
      pcVar19 = pcVar19 + uVar8;
      while ((pcVar16 != pcVar19 && (local_788 != 0))) {
        uVar8 = 0;
        uVar15 = 0;
        do {
          uVar13 = (ulonglong)*(uint *)((longlong)&local_784 + uVar15 * 4) * 1000000000 + uVar8;
          *(int *)((longlong)&local_784 + uVar15 * 4) = (int)uVar13;
          uVar8 = uVar13 >> 0x20;
          uVar23 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar23;
        } while (uVar23 != local_788);
        iVar5 = (int)(uVar13 >> 0x20);
        if (iVar5 != 0) {
          if (local_788 < 0x73) {
            *(int *)((longlong)&local_784 + (ulonglong)local_788 * 4) = iVar5;
            local_788 = local_788 + 1;
          }
          else {
            local_3e8 = 0;
            local_788 = 0;
            memcpy_s(&local_784,0x1cc,local_3e4,0);
          }
        }
        uVar8 = FUN_1801350e0(&local_788,&local_5b8);
        uVar23 = 8;
        do {
          uVar15 = (uVar8 & 0xffffffff) / 10;
          if (uVar23 < (uint)((int)pcVar19 - (int)pcVar16)) {
            pcVar16[uVar23] = (char)uVar8 + (char)uVar15 * -10 + '0';
          }
          uVar23 = uVar23 - 1;
          uVar8 = uVar15;
        } while (uVar23 != 0xffffffff);
        lVar10 = (longlong)pcVar19 - (longlong)pcVar16;
        if (9 < lVar10) {
          lVar10 = 9;
        }
        pcVar16 = pcVar16 + lVar10;
      }
      *pcVar16 = '\0';
      _controlfp_s(&local_7c4,local_7c0,local_7bc);
      goto LAB_18014a59f;
    }
    param_4[1] = 0;
    pcVar19 = "0";
LAB_18014949e:
    iVar5 = strcpy_s(param_5,param_6,pcVar19);
  }
}

 _controlfp_s(&local_7c0,0,0);
      _controlfp_s((uint *)&local_7e8,0x8001f,local_7bc);
      local_7c8 = param_2 + 1;
      local_7d0 = local_7d8;
      uVar8 = (ulonglong)local_7d8 >> 0x34 & 0x7ff;
      uVar15 = (-(ulonglong)(uVar8 != 0) & 0x10000000000000) +
               ((ulonglong)local_7d8 & 0xfffffffffffff);
      uVar22 = (2 - (uint)(uVar8 != 0)) + ((uint)((ulonglong)local_7d8 >> 0x34) & 0x7ff);
      dVar25 = FUN_18014c3a0();
      dVar25 = ceil(dVar25);
      uVar6 = -(uint)(((int)dVar25 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar25;
      uVar17 = (uint)(uVar15 >> 0x20);
      local_784 = uVar15;
      uVar23 = (uint)(uVar17 != 0);
      uVar14 = uVar23 + 1;
      if (uVar22 < 0x434) {
if (uVar22 == 0x36) {
LAB_18014993f:
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          puVar1 = (uint *)((longlong)&local_784 + (ulonglong)(-(uint)(uVar17 != 0) & 4));
          iVar5 = 0x1f;
          bVar24 = *puVar1 == 0;
          if (!bVar24) {
            for (; *puVar1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (bVar24) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + 1;
          }
          uVar23 = (iVar5 == 0x20) + uVar14;
          if (uVar23 < 0x74) {
            uVar17 = uVar23 - 1;
            while (uVar17 != 0xffffffff) {
              uVar21 = uVar17 - 1;
              if (uVar17 < uVar14) {
                iVar5 = *(int *)((longlong)&local_784 + (ulonglong)uVar17 * 4);
              }
              else {
                iVar5 = 0;
              }
              if (uVar21 < uVar14) {
                uVar7 = *(uint *)((longlong)&local_784 + (ulonglong)uVar21 * 4);
              }
              else {
                uVar7 = 0;
              }
              *(uint *)((longlong)&local_784 + (ulonglong)uVar17 * 4) = uVar7 >> 0x1f | iVar5 * 2;
              uVar17 = uVar21;
            }
          }
          else {
            uVar23 = 0;
          }
          uVar14 = 0x435 - uVar22 >> 5;
          local_788 = uVar23;
          FUN_180151670((int32_t (*) [32])local_3e4,0,(ulonglong)uVar14 * 4);
          local_3e4[uVar14] = 1 << ((byte)(0x435 - uVar22) & 0x1f);
        }
        else {
          local_3e4[1] = 0x100000;
          local_3e4[0] = 0;
          local_3e8 = 2;
          if (uVar17 == 0) goto LAB_18014993f;
          uVar8 = 0;
          do {
            if (local_3e4[uVar8] != *(uint *)((longlong)&local_784 + uVar8 * 4)) goto LAB_18014993f;
            uVar23 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar23;
          } while (uVar23 != 2);
          local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
          iVar5 = 0x1f;
          if (uVar17 != 0) {
            for (; uVar17 >> iVar5 == 0; iVar5 = iVar5 + -1) {
            }
          }
          if (uVar17 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + 1;
          }
          uVar23 = (0x20U - iVar5 < 2) + uVar14;
          if (uVar23 < 0x74) {
            uVar17 = uVar23 - 1;
            while (uVar17 != 0xffffffff) {
              uVar21 = uVar17 - 1;
              if (uVar17 < uVar14) {
                iVar5 = *(int *)((longlong)&local_784 + (ulonglong)uVar17 * 4);
              }
              else {
                iVar5 = 0;
              }
              if (uVar21 < uVar14) {
                uVar7 = *(uint *)((longlong)&local_784 + (ulonglong)uVar21 * 4);
              }
              else {
                uVar7 = 0;
              }
              *(uint *)((longlong)&local_784 + (ulonglong)uVar17 * 4) = uVar7 >> 0x1e | iVar5 * 4;
              uVar17 = uVar21;
            }
          }
          else {
            uVar23 = 0;
          }
          uVar14 = 0x436 - uVar22 >> 5;
          local_788 = uVar23;
          FUN_180151670((int32_t (*) [32])local_3e4,0,(ulonglong)uVar14 * 4);
          local_3e4[uVar14] = 1 << ((byte)(0x436 - uVar22) & 0x1f);
        }
        local_3e8 = uVar14 + 1;
        uVar8 = (ulonglong)local_3e8;
        local_5b8 = local_3e8;
        if (uVar8 != 0) {
          if (uVar8 << 2 < 0x1cd) {
            FUN_180150fd0((int32_t *)local_5b4,(int32_t *)local_3e4,uVar8 << 2);
          }
          else {
            FUN_180151670((int32_t (*) [32])local_5b4,0,0x1cc);
            puVar9 = __doserrno();
            *puVar9 = 0x22;
            FUN_18012b794();
          }
          uVar8 = (ulonglong)local_5b8;
        }
      }
}

 _controlfp_s(&local_7c4,local_7c0,local_7bc);
      goto LAB_18014a59f;
    }
    param_4[1] = 0;
    pcVar19 = "0";
LAB_18014949e:
    iVar5 = strcpy_s(param_5,param_6,pcVar19);
  }
  else {
    if (uVar8 != 0x7ff) goto LAB_1801494f2;
    if (((ulonglong)puVar1 & 0xfffffffffffff) == 0) {
uVar23 = 1;
    }
}

errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask) {
errno_t eVar1;
  ulong *puVar2;
  uint uVar3;
  
  uVar3 = _Mask & 0xfff7ffff;
  if ((_NewValue & uVar3 & 0xfcf0fce0) == 0) {
    if (_CurrentState == (uint *)0x0) {
      thunk_FUN_18014ca9c(_NewValue,uVar3);
    }
    else {
      uVar3 = thunk_FUN_18014ca9c(_NewValue,uVar3);
      *_CurrentState = uVar3;
    }
    eVar1 = 0;
  }
  else {
    if (_CurrentState != (uint *)0x0) {
      uVar3 = thunk_FUN_18014ca9c(0,0);
      *_CurrentState = uVar3;
    }
    puVar2 = __doserrno();
    eVar1 = 0x16;
    *puVar2 = 0x16;
    FUN_18012b794();
  }
  return eVar1;
}
}

