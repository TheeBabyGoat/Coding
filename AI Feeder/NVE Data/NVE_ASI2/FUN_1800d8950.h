#ifndef FUN_1800D8950_H
#define FUN_1800D8950_H

 FUN_1800d8950();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_68 = (longlong *)&DAT_1801fb320;
    uStack_60 = 0;
    plVar15 = (longlong *)operator_new(0x50);
    *(int *)((longlong)plVar15 + 0x1c) = DAT_1801f3b14;
    plVar15[4] = 0;
    plVar15[5] = 0;
    plVar15[6] = 0;
    plVar15[7] = 0;
    plVar15[8] = 0;
    plVar15[9] = 0;
    *plVar15 = (longlong)plVar14;
    plVar15[1] = (longlong)plVar14;
    plVar15[2] = (longlong)plVar14;
    *(int32_t *)(plVar15 + 3) = 0;
    uStack_60 = CONCAT44(uStack_4c,uStack_50);
    local_68 = local_58;
    puVar18 = &DAT_1801fb320;
    plVar16 = FUN_1800d86d0((longlong *)&DAT_1801fb320,(longlong *)&local_68,plVar15);
  }
  puVar17 = DAT_1801ee8f8;
  lVar10 = plVar16[4];
  uVar1 = *(int32_t *)((longlong)plVar16 + 0x24);
  lVar11 = plVar16[5];
  uVar5 = *(int32_t *)((longlong)plVar16 + 0x2c);
  lVar12 = plVar16[6];
  uVar6 = *(int32_t *)((longlong)plVar16 + 0x34);
  lVar13 = plVar16[7];
  uVar7 = *(int32_t *)((longlong)plVar16 + 0x3c);
  uVar8 = *(int32_t *)((longlong)plVar16 + 0x4c);
  DAT_1801ee8f8[10] = (int)plVar16[9];
  puVar17[0xb] = uVar8;
  *puVar17 = (int)lVar10;
  puVar17[1] = uVar1;
  puVar17[2] = (int)lVar11;
  puVar17[3] = uVar5;
  if (DAT_1801f3a17 != '\0');
void FUN_1800d8950(void);
 FUN_1800d8950();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_78 = (longlong *)&DAT_1801fb118;
          uStack_70 = 0;
          plVar11 = (longlong *)operator_new(0x30);
          *(float *)((longlong)plVar11 + 0x1c) = fVar14;
          lVar13 = *(longlong *)(param_4 + 0xe);
          plVar11[4] = *(longlong *)(param_4 + 0xc);
          plVar11[5] = lVar13;
          *plVar11 = (longlong)plVar9;
          plVar11[1] = (longlong)plVar9;
          plVar11[2] = (longlong)plVar9;
          *(int32_t *)(plVar11 + 3) = 0;
          uStack_70 = CONCAT44(uStack_5c,uStack_60);
          local_78 = local_68;
          FUN_1800d86d0((longlong *)&DAT_1801fb118,(longlong *)&local_78,plVar11);
        }
      }
    }
  }
LAB_1800da8d0:
  if ((iVar2 == 0x6e413d11) || (iVar2 == 0x4cc2d981));
 FUN_1800d8950();
            cVar1 = *(char *)((longlong)*(longlong **)(*plVar14 + 8) + 0x19);
            plVar10 = *(longlong **)(*plVar14 + 8);
            while (cVar1 == '\0');
 FUN_1800d8950();
LAB_1800fbced:
        FUN_1800d8950();
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      local_3f8 = &DAT_1801fc8f0;
      ppuStack_3f0 = (int32_t **)0x0;
      ppuVar16 = (int32_t **)operator_new(0x48);
      ppuStack_3f0 = ppuVar16;
      FUN_1800ba630(ppuVar16 + 4,pplVar10);
      *(int32_t *)(ppuVar16 + 8) = 0;
      *ppuVar16 = pplVar3;
      ppuVar16[1] = pplVar3;
      ppuVar16[2] = pplVar3;
      *(int32_t *)(ppuVar16 + 3) = 0;
      ppuStack_3f0 = (int32_t **)0x0;
      plStack_400 = (longlong *)CONCAT44(uStack_3bc,uStack_3c0);
      local_408 = local_3c8;
      pplVar12 = (longlong **)
                 FUN_1800d86d0((longlong *)&DAT_1801fc8f0,(longlong *)&local_408,
                               (longlong *)ppuVar16);
    }
    *(int32_t *)(pplVar12 + 8) = uVar5;
    FUN_1800a6800((longlong *)pplVar10);
    FUN_1800a6800(local_68);
    plVar13 = (longlong *)plVar8[2];
    if (*(char *)((longlong)plVar13 + 0x19) == '\0');
 FUN_1800d8950();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_b0 = (ulonglong *)0x0;
          local_b8 = plVar4;
          param_3 = (longlong *)operator_new(0x50);
          param_3[4] = 0;
          param_3[5] = 0;
          param_3[6] = 0;
          param_3[7] = 0;
          lVar9 = plVar12[1];
          param_3[4] = *plVar12;
          param_3[5] = lVar9;
          lVar9 = plVar12[3];
          param_3[6] = plVar12[2];
          param_3[7] = lVar9;
          *(int32_t *)plVar12 = 0;
          plVar12[2] = 0;
          plVar12[3] = 0xf;
          *(int32_t *)(param_3 + 8) = *(int32_t *)(local_a8 + 0x10);
          param_3[9] = *(longlong *)(local_a8 + 0x18);
          *(int32_t *)(local_a8 + 0x10) = 0;
          *(int32_t *)(local_a8 + 0x18) = 0;
          *param_3 = (longlong)local_c8;
          param_3[1] = (longlong)local_c8;
          param_3[2] = (longlong)local_c8;
          *(int32_t *)(param_3 + 3) = 0;
          local_b0 = (ulonglong *)0x0;
          uStack_c0 = CONCAT44(uStack_5c,uStack_60);
          local_c8 = local_68;
          FUN_1800d86d0(plVar4,(longlong *)&local_c8,param_3);
        }
        FUN_1800f9a90((longlong *)&local_d8,cVar18);
        pcVar15 = pcVar15 + 0x18;
        param_1 = local_e8;
      } while( true );
    }
    pcVar17 = *(char **)(pcVar16 + 0x10);
    pcVar8 = pcVar16;
    if (pcVar17 != (char *)0x0);

#endif
