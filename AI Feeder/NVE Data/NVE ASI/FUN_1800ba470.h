#ifndef FUN_1800BA470_H
#define FUN_1800BA470_H

int32_t * FUN_1800ba470(int32_t *param_1,int32_t *param_2);
 FUN_1800ba470(&local_4b0,(int32_t *)"cannot compare iterators of different containers");
      FUN_1800f8fa0(&local_4e8,0xd4,&local_4b0);
      FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e92f8);
switchD_1800e9cf0_caseD_0:
      FUN_1800ba470(&local_4b0,(int32_t *)"cannot get value");
      pppppppuVar11 = &local_4b0;
      FUN_1800f8fa0(&local_4e8,0xd6,pppppppuVar11);
      FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e92f8);
LAB_1800ea876:
      FUN_18012b7b4();
LAB_1800ea87c:
      local_570 = FUN_1800f7810((int32_t *)pppppppuVar11);
      plVar9 = FUN_1800f24a0((longlong *)&local_4b0,(int32_t *)"type must be string, but is ",
                             (longlong *)&local_570);
      FUN_1800ed150(&local_4e8,0x12e,plVar9);
      FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e9200);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    switch(*(int32_t *)local_558);
 FUN_1800ba470(&local_4b0,(int32_t *)"cannot get value");
        FUN_1800f8fa0(&local_4e8,0xd6,&local_4b0);
        FUN_1801279a8((longlong *)&local_4e8,&DAT_1801e92f8);
        goto LAB_1800ea80e;
      }
    }
    uStack_488 = 0;
    local_480 = uVar4;
    uStack_478 = uVar16;
    local_490 = (int32_t *******)0x0;
    local_590._4_4_ = (int32_t)((ulonglong)local_590 >> 0x20);
    local_590 = (uint ******)(CONCAT44(local_590._4_4_,uVar14) | 2);
    if (*(char *)pppppppuVar11 != '\x03') goto LAB_1800ea87c;
    pppppppuVar10 = (int32_t *******)pppppppuVar11[1];
    if (&local_490 != pppppppuVar10);
 FUN_1800ba470(&local_a0,(int32_t *)"iterator does not fit current value");
    FUN_1800f8fa0(local_80,0xca,&local_a0);
    FUN_1801279a8(local_80,&DAT_1801e92f8);
LAB_1800f62f6:
    FUN_1800ba470(&local_a0,(int32_t *)"iterator out of range");
    FUN_1800f8fa0(local_80,0xcd,&local_a0);
    FUN_1801279a8(local_80,&DAT_1801e92f8);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  FUN_1800f93b0(param_1,param_2);
  bVar2 = *param_1;
  uVar15 = (ulonglong)bVar2;
  switch(uVar15);
 FUN_1800ba470(local_38,(int32_t *)"cannot get value");
          FUN_1800f8fa0(&local_70,0xd6,local_38);
          FUN_1801279a8(&local_70,&DAT_1801e92f8);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      case '\x01':
        pcVar5 = (char *)(local_68 + 0x40);
        break;
      case '\x02':
        pcVar5 = pcStack_60;
      }
      if (*pcVar5 == '\t');

#endif
