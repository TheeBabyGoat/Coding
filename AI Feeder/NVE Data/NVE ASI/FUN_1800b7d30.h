#ifndef FUN_1800B7D30_H
#define FUN_1800B7D30_H

 FUN_1800b7d30((longlong *)puVar3,(longlong *)param_1);
          local_78 = param_4;
          FUN_1800aa4a0((longlong)param_1,0,(longlong)puVar3 - (longlong)param_1 >> 5,
                        (uint *)&local_68);
          FUN_1800ba040((longlong *)&local_68);
          puVar3 = puVar3 + -4;
        } while (0x3f < (longlong)
                        ((0x20 - (longlong)param_1) + (longlong)puVar3 & 0xffffffffffffffe0U));
      }
      goto LAB_1800a9aad;
    }
    FUN_1800a9d30(&local_68,(uint *)param_1,(uint *)param_2);
    puVar1 = puStack_60;
    puVar3 = local_68;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_68 - (longlong)param_1 & 0xffffffffffffffe0U) <
        (longlong)((longlong)param_2 - (longlong)puStack_60 & 0xffffffffffffffe0U));
 FUN_1800b7d30((longlong *)puVar7,(longlong *)(puVar7 + -4));
          puVar7 = puVar7 + -4;
        }
        if (param_1 != &local_58);
 FUN_1800b7d30((longlong *)(lVar4 * 0x20 + param_1),(longlong *)(lVar3 * 0x20 + param_1));
      lVar4 = lVar3;
    } while (lVar3 < lVar5);
  }
  if ((lVar3 == lVar5) && ((param_3 & 1) == 0));
 FUN_1800b7d30((longlong *)(lVar3 * 0x20 + param_1),
                  (longlong *)(param_1 + -0x20 + param_3 * 0x20));
    lVar3 = param_3 - 1;
  }
  while (param_2 < lVar3);
longlong * FUN_1800b7d30(longlong *param_1,longlong *param_2);

#endif
