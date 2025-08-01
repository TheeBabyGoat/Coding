#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_18012febc ----
void FUN_18012febc(longlong param_1,ulonglong param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 == 0) {
    uVar1 = 0x200;
    lVar2 = param_1 + 0x50;
  }
  else {
    uVar1 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pcVar3 = (char *)(lVar2 + -1 + uVar1);
  *(char **)(param_1 + 0x40) = pcVar3;
  pcVar4 = pcVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    cVar5 = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
    if ('9' < cVar5) {
      cVar5 = (param_3 ^ 1) * ' ' + '\a' + cVar5;
    }
    *pcVar4 = cVar5;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pcVar4 = *(char **)(param_1 + 0x40);
    param_2 = param_2 / 10;
  }
  *(int *)(param_1 + 0x48) = (int)pcVar3 - *(int *)(param_1 + 0x40);
  *(char **)(param_1 + 0x40) = pcVar4 + 1;
  return;
}

// ---- Function: FUN_18012ff6c ----
void FUN_18012ff6c(longlong param_1,ulonglong param_2,byte param_3)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x458);
  if (lVar5 == 0) {
    uVar2 = 0x200;
    lVar5 = param_1 + 0x50;
  }
  else {
    uVar2 = *(ulonglong *)(param_1 + 0x450) >> 1;
  }
  pbVar3 = (byte *)(lVar5 + -1 + uVar2);
  *(byte **)(param_1 + 0x40) = pbVar3;
  pbVar4 = pbVar3;
  while ((0 < *(int *)(param_1 + 0x30) || (param_2 != 0))) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    bVar1 = (byte)param_2;
    param_2 = param_2 >> 4;
    bVar1 = (bVar1 & 0xf) + 0x30;
    if (0x39 < bVar1) {
      bVar1 = (param_3 ^ 1) * ' ' + '\a' + bVar1;
    }
    *pbVar4 = bVar1;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + -1;
    pbVar4 = *(byte **)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x48) = (int)pbVar3 - *(int *)(param_1 + 0x40);
  *(byte **)(param_1 + 0x40) = pbVar4 + 1;
  return;
}

// ---- Function: FUN_18012fff0 ----
void FUN_18012fff0(char *param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != *(char *)**(int32_t **)(*param_2 + 0xf8)))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (cVar1 != '\0') {
    do {
      param_1 = param_1 + 1;
      pcVar2 = param_1;
      if (*param_1 == '\0') break;
    } while ((*param_1 + 0xbbU & 0xdf) != 0);
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + -1;
    } while (*pcVar2 == '0');
    pcVar3 = pcVar3 + -2;
    if (*pcVar2 != *(char *)**(int32_t **)(*param_2 + 0xf8)) {
      pcVar3 = pcVar2;
    }
    lVar4 = (longlong)param_1 - (longlong)pcVar3;
    do {
      cVar1 = pcVar3[lVar4];
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}

// ---- Function: FUN_18013005c ----
int32_t FUN_18013005c(longlong param_1,uint *param_2,int32_t param_3,int32_t param_4)

{
  longlong *plVar1;
  int32_t uVar2;
  uint uVar3;
  int32_t uVar4;
  ulonglong local_res8;
  ulonglong local_18;
  ulonglong *local_10;
  
  plVar1 = *(longlong **)(param_1 + 8);
  local_10 = &local_res8;
  local_res8 = *(longlong *)(param_1 + 0x10) - 1;
  uVar2 = *(int32_t *)((longlong)plVar1 + 0x2c);
  local_18 = local_res8;
  uVar3 = FUN_18012f3ec(plVar1,(longlong *)&local_18,10,CONCAT31((int3)((uint)param_4 >> 8),1));
  *param_2 = uVar3;
  if (((*(char *)(*(longlong *)(param_1 + 8) + 0x30) == '\0') ||
      (uVar4 = 0, *(int *)(*(longlong *)(param_1 + 8) + 0x2c) != 0x22)) &&
     (uVar4 = 0, *(ulonglong *)(param_1 + 0x10) <= local_res8)) {
    *(ulonglong *)(param_1 + 0x10) = local_res8;
    uVar4 = 1;
  }
  *(int32_t *)((longlong)plVar1 + 0x2c) = uVar2;
  return uVar4;
}

// ---- Function: FUN_1801300ec ----
int32_t FUN_1801300ec(ulonglong *param_1,int32_t param_2,longlong param_3,int32_t param_4)

{
  char cVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  byte bVar7;
  int32_t *puVar8;
  ulonglong *puVar9;
  int32_t uVar10;
  
  plVar6 = (longlong *)param_1[1];
  uVar10 = 0xffffffff;
  if (param_1[0x8c] == 0) {
    *(int32_t *)(plVar6 + 6) = 1;
    *(int32_t *)((longlong)plVar6 + 0x2c) = 0x16;
LAB_18013044f:
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,plVar6);
  }
  else {
    puVar8 = (int32_t *)param_1[2];
    if (puVar8 == (int32_t *)0x0) {
      *(int32_t *)(plVar6 + 6) = 1;
      *(int32_t *)((longlong)plVar6 + 0x2c) = 0x16;
      FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,(longlong *)param_1[1]);
      uVar10 = 0xffffffff;
    }
    else {
      iVar4 = (int)param_1[0x8d] + 1;
      *(int *)(param_1 + 0x8d) = iVar4;
      while (iVar4 != 2) {
        *(int32_t *)(param_1 + 9) = 0;
        *(int32_t *)((longlong)param_1 + 0x24) = 0;
        param_3 = CONCAT71((int7)((ulonglong)param_3 >> 8),*puVar8);
        while( true ) {
          puVar8 = puVar8 + 1;
          param_1[2] = (ulonglong)puVar8;
          cVar3 = (char)param_3;
          *(char *)((longlong)param_1 + 0x39) = cVar3;
          if ((cVar3 == '\0') || ((int)param_1[4] < 0)) break;
          bVar7 = 0;
          if ((byte)(cVar3 - 0x20U) < 0x5b) {
            bVar7 = (&DAT_180179571)[(ulonglong)((int)cVar3 - 0x20U & 0x7f) * 2];
          }
          bVar7 = (&DAT_180179570)
                  [(ulonglong)((uint)*(byte *)((longlong)param_1 + 0x24) + (uint)bVar7 * 8 & 0x7f) *
                   2];
          *(byte *)((longlong)param_1 + 0x24) = bVar7;
          if (7 < bVar7) {
LAB_18013043c:
            uVar5 = param_1[1];
            *(int32_t *)(uVar5 + 0x30) = 1;
            *(int32_t *)(uVar5 + 0x2c) = 0x16;
            plVar6 = (longlong *)param_1[1];
            goto LAB_18013044f;
          }
          if (bVar7 == 0) {
            plVar6 = (longlong *)param_1[1];
            *(int32_t *)((longlong)param_1 + 0x4c) = 0;
            if ((char)plVar6[5] == '\0') {
              FUN_180130ef0(plVar6);
            }
            cVar3 = *(char *)((longlong)param_1 + 0x39);
            param_3 = (longlong)cVar3;
            if ((-2 < cVar3) && ((*(ushort *)(*(longlong *)plVar6[3] + param_3 * 2) & 0x8000) != 0))
            {
              uVar5 = param_1[0x8c];
              if (*(longlong *)(uVar5 + 0x10) == *(longlong *)(uVar5 + 8)) {
                if (*(char *)(uVar5 + 0x18) == '\0') {
                  *(int32_t *)(param_1 + 4) = 0xffffffff;
                }
                else {
                  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
                }
              }
              else {
                *(int *)(param_1 + 4) = (int)param_1[4] + 1;
                *(longlong *)(uVar5 + 0x10) = *(longlong *)(uVar5 + 0x10) + 1;
                **(char **)param_1[0x8c] = cVar3;
                *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 1;
              }
              cVar1 = *(char *)param_1[2];
              param_3 = CONCAT71(cVar3 >> 7,cVar1);
              param_1[2] = (ulonglong)((char *)param_1[2] + 1);
              *(char *)((longlong)param_1 + 0x39) = cVar1;
              if (cVar1 == '\0') {
                uVar5 = param_1[1];
                *(int32_t *)(uVar5 + 0x30) = 1;
                *(int32_t *)(uVar5 + 0x2c) = 0x16;
                FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                              (longlong *)param_1[1]);
                goto LAB_18013043c;
              }
            }
            uVar5 = param_1[0x8c];
            if (*(longlong *)(uVar5 + 0x10) == *(longlong *)(uVar5 + 8)) {
              if (*(char *)(uVar5 + 0x18) == '\0') {
                *(int32_t *)(param_1 + 4) = 0xffffffff;
              }
              else {
                *(int *)(param_1 + 4) = (int)param_1[4] + 1;
              }
            }
            else {
              *(int *)(param_1 + 4) = (int)param_1[4] + 1;
              *(longlong *)(uVar5 + 0x10) = *(longlong *)(uVar5 + 0x10) + 1;
              **(int32_t **)param_1[0x8c] = (char)param_3;
              *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 1;
            }
          }
          else if (bVar7 == 1) {
            param_1[5] = 0;
            *(int32_t *)(param_1 + 7) = 0;
            *(int32_t *)(param_1 + 6) = 0xffffffff;
            *(int32_t *)((longlong)param_1 + 0x34) = 0;
            *(int32_t *)((longlong)param_1 + 0x4c) = 0;
          }
          else if (bVar7 == 2) {
            if (cVar3 == ' ') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 2;
            }
            else if (cVar3 == '#') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x20;
            }
            else if (cVar3 == '+') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 1;
            }
            else if (cVar3 == '-') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
            }
            else if (cVar3 == '0') {
              *(uint *)(param_1 + 5) = (uint)param_1[5] | 8;
            }
          }
          else {
            if (bVar7 == 3) {
              if (cVar3 == '*') {
                piVar2 = (int *)param_1[3];
                param_1[3] = (ulonglong)(piVar2 + 2);
                iVar4 = *piVar2;
                *(int *)((longlong)param_1 + 0x2c) = iVar4;
                if (iVar4 < 0) {
                  *(uint *)(param_1 + 5) = (uint)param_1[5] | 4;
                  *(int *)((longlong)param_1 + 0x2c) = -iVar4;
                }
LAB_180130282:
                cVar3 = '\x01';
              }
              else {
                puVar9 = (ulonglong *)((longlong)param_1 + 0x2c);
LAB_18013022c:
                cVar3 = FUN_18013005c((longlong)param_1,(uint *)puVar9,param_3,(int)param_4);
              }
            }
            else {
              if (bVar7 == 4) {
                *(int32_t *)(param_1 + 6) = 0;
                goto LAB_1801303c3;
              }
              if (bVar7 == 5) {
                if (cVar3 == '*') {
                  piVar2 = (int *)param_1[3];
                  param_1[3] = (ulonglong)(piVar2 + 2);
                  iVar4 = *piVar2;
                  if (iVar4 < 0) {
                    iVar4 = -1;
                  }
                  *(int *)(param_1 + 6) = iVar4;
                  goto LAB_180130282;
                }
                puVar9 = param_1 + 6;
                goto LAB_18013022c;
              }
              if (bVar7 == 6) {
                uVar5 = FUN_18013046c(param_1);
                cVar3 = (char)uVar5;
              }
              else {
                if (bVar7 != 7) {
                  return 0xffffffff;
                }
                cVar3 = FUN_1801305f4(param_1);
              }
            }
            if (cVar3 == '\0') {
              return 0xffffffff;
            }
          }
LAB_1801303c3:
          puVar8 = (int32_t *)param_1[2];
          param_3 = CONCAT71((int7)((ulonglong)param_3 >> 8),*puVar8);
        }
        *(int *)(param_1 + 0x8d) = (int)param_1[0x8d] + 1;
        iVar4 = (int)param_1[0x8d];
      }
      uVar10 = (int32_t)param_1[4];
    }
  }
  return uVar10;
}

// ---- Function: FUN_18013046c ----
ulonglong FUN_18013046c(ulonglong *param_1)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  int32_t in_RAX;
  int32_t uVar6;
  ulonglong uVar4;
  char *pcVar5;
  
  cVar1 = *(char *)((longlong)param_1 + 0x39);
  uVar6 = (int32_t)((ulonglong)in_RAX >> 8);
  pcVar5 = (char *)CONCAT71(uVar6,cVar1);
  if (cVar1 == 'F') {
    if ((*param_1 & 8) == 0) {
      *(int32_t *)((longlong)param_1 + 0x24) = 7;
      uVar4 = FUN_1801305f4(param_1);
      return uVar4;
    }
  }
  else if (cVar1 == 'N') {
    if ((*param_1 & 8) == 0) {
      *(int32_t *)((longlong)param_1 + 0x24) = 8;
LAB_18013049e:
      uVar4 = param_1[1];
      *(int32_t *)(uVar4 + 0x30) = 1;
      *(int32_t *)(uVar4 + 0x2c) = 0x16;
      uVar4 = FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,(longlong *)param_1[1])
      ;
      return uVar4 & 0xffffffffffffff00;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x34) != 0) goto LAB_18013049e;
    if (cVar1 == 'I') {
      pcVar2 = (char *)param_1[2];
      cVar1 = *pcVar2;
      pcVar5 = (char *)CONCAT71(uVar6,cVar1);
      if ((cVar1 == '3') && (pcVar2[1] == '2')) {
        pcVar5 = pcVar2 + 2;
        *(int32_t *)((longlong)param_1 + 0x34) = 10;
        param_1[2] = (ulonglong)pcVar5;
      }
      else if (cVar1 == '6') {
        if (pcVar2[1] == '4') {
          pcVar5 = pcVar2 + 2;
          *(int32_t *)((longlong)param_1 + 0x34) = 0xb;
          param_1[2] = (ulonglong)pcVar5;
        }
      }
      else {
        bVar3 = cVar1 + 0xa8;
        pcVar5 = (char *)CONCAT71(uVar6,bVar3);
        if ((bVar3 < 0x21) && ((0x120821001U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) {
          *(int32_t *)((longlong)param_1 + 0x34) = 9;
        }
      }
    }
    else if (cVar1 == 'L') {
      *(int32_t *)((longlong)param_1 + 0x34) = 8;
    }
    else if (cVar1 == 'T') {
      *(int32_t *)((longlong)param_1 + 0x34) = 0xd;
    }
    else {
      if (cVar1 == 'h') {
        if (*(char *)param_1[2] == 'h') {
          param_1[2] = (ulonglong)((char *)param_1[2] + 1);
          pcVar5 = (char *)0x1;
        }
        else {
          pcVar5 = (char *)0x2;
        }
      }
      else {
        if (cVar1 == 'j') {
          *(int32_t *)((longlong)param_1 + 0x34) = 5;
          goto LAB_1801305ec;
        }
        if (cVar1 != 'l') {
          if (cVar1 == 't') {
            *(int32_t *)((longlong)param_1 + 0x34) = 7;
          }
          else if (cVar1 == 'w') {
            *(int32_t *)((longlong)param_1 + 0x34) = 0xc;
          }
          else if (cVar1 == 'z') {
            *(int32_t *)((longlong)param_1 + 0x34) = 6;
          }
          goto LAB_1801305ec;
        }
        if (*(char *)param_1[2] == 'l') {
          param_1[2] = (ulonglong)((char *)param_1[2] + 1);
          pcVar5 = (char *)0x4;
        }
        else {
          pcVar5 = (char *)0x3;
        }
      }
      *(int *)((longlong)param_1 + 0x34) = (int)pcVar5;
    }
  }
LAB_1801305ec:
  return CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
}

// ---- Function: FUN_1801305f4 ----
void FUN_1801305f4(ulonglong *param_1)

{
  ulonglong *puVar1;
  string_output_adapter<char> *this;
  WCHAR WVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  WCHAR *pWVar14;
  longlong lVar15;
  int32_t auStackY_78 [32];
  int32_t local_48;
  char local_44 [12];
  ulonglong local_38;
  int32_t uVar6;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStackY_78;
  cVar11 = 'x';
  cVar5 = *(char *)((longlong)param_1 + 0x39);
  lVar15 = 1;
  if (cVar5 < 'e') {
    if (cVar5 == 'd') {
LAB_1801306d3:
      *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
LAB_1801306d7:
      uVar7 = FUN_18012f8a4((longlong)param_1,0);
      cVar5 = (char)uVar7;
    }
    else if (cVar5 < 'T') {
      if (cVar5 == 'S') {
LAB_18013071a:
        uVar6 = FUN_180130e54((longlong)param_1);
        cVar5 = (char)uVar6;
      }
      else {
        if (cVar5 != 'A') {
          if (cVar5 == 'C') {
LAB_18013068d:
            uVar6 = FUN_180130cc8((longlong)param_1);
            cVar5 = (char)uVar6;
            goto LAB_18013073d;
          }
          if (((cVar5 != 'E') && (cVar5 != 'F')) && (cVar5 != 'G')) goto LAB_1801309cb;
        }
LAB_180130664:
        uVar6 = FUN_180130a74(param_1);
        cVar5 = (char)uVar6;
      }
    }
    else {
      if (cVar5 == 'X') goto LAB_180130732;
      if (cVar5 != 'Z') {
        if (cVar5 != 'a') {
          if (cVar5 != 'c') goto LAB_1801309cb;
          goto LAB_18013068d;
        }
        goto LAB_180130664;
      }
      uVar6 = FUN_1801309f8((longlong)param_1);
      cVar5 = (char)uVar6;
    }
  }
  else if (cVar5 < 'p') {
    if (cVar5 == 'o') {
      if (((uint)param_1[5] >> 5 & 1) != 0) {
        *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x80;
      }
      uVar7 = FUN_18012f6a0((longlong)param_1);
      cVar5 = (char)uVar7;
    }
    else {
      if (((cVar5 == 'e') || (cVar5 == 'f')) || (cVar5 == 'g')) goto LAB_180130664;
      if (cVar5 == 'i') goto LAB_1801306d3;
      if (cVar5 != 'n') goto LAB_1801309cb;
      uVar7 = FUN_180130d9c((longlong)param_1);
      cVar5 = (char)uVar7;
    }
  }
  else {
    if (cVar5 == 'p') {
      *(int32_t *)(param_1 + 6) = 0x10;
      *(int32_t *)((longlong)param_1 + 0x34) = 0xb;
LAB_180130732:
      bVar8 = 1;
    }
    else {
      if (cVar5 == 's') goto LAB_18013071a;
      if (cVar5 == 'u') goto LAB_1801306d7;
      if (cVar5 != 'x') goto LAB_1801309cb;
      bVar8 = 0;
    }
    uVar7 = FUN_18012faa8((longlong)param_1,bVar8);
    cVar5 = (char)uVar7;
  }
LAB_18013073d:
  if ((cVar5 != '\0') && ((char)param_1[7] == '\0')) {
    uVar3 = (uint)param_1[5];
    local_48 = local_48 & 0xff000000;
    lVar9 = 0;
    if ((uVar3 >> 4 & 1) != 0) {
      if ((uVar3 >> 6 & 1) == 0) {
        if ((uVar3 & 1) == 0) {
          if ((uVar3 >> 1 & 1) != 0) {
            local_48 = CONCAT31(local_48._1_3_,0x20);
            lVar9 = lVar15;
          }
        }
        else {
          local_48 = CONCAT31(local_48._1_3_,0x2b);
          lVar9 = lVar15;
        }
      }
      else {
        local_48 = CONCAT31(local_48._1_3_,0x2d);
        lVar9 = lVar15;
      }
    }
    cVar5 = *(char *)((longlong)param_1 + 0x39);
    if (((cVar5 + 0xa8U & 0xdf) == 0) && ((uVar3 >> 5 & 1) != 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) || ((cVar5 + 0xbfU & 0xdf) == 0)) {
      local_44[lVar9 + -4] = '0';
      if ((cVar5 == 'X') || (cVar5 == 'A')) {
        cVar11 = 'X';
      }
      local_44[lVar9 + -3] = cVar11;
      lVar9 = lVar9 + 2;
    }
    iVar10 = (*(int *)((longlong)param_1 + 0x2c) - (int)lVar9) - (int)param_1[9];
    if (((uVar3 & 0xc) == 0) && (iVar13 = 0, 0 < iVar10)) {
      iVar12 = (int)param_1[4];
      do {
        uVar7 = param_1[0x8c];
        if (*(longlong *)(uVar7 + 0x10) == *(longlong *)(uVar7 + 8)) {
          if (*(char *)(uVar7 + 0x18) == '\0') {
            iVar12 = -1;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          *(int *)(param_1 + 4) = iVar12;
        }
        else {
          *(int *)(param_1 + 4) = iVar12 + 1;
          *(longlong *)(uVar7 + 0x10) = *(longlong *)(uVar7 + 0x10) + 1;
          **(int32_t **)param_1[0x8c] = 0x20;
          *(longlong *)param_1[0x8c] = *(longlong *)param_1[0x8c] + 1;
        }
        iVar12 = (int)param_1[4];
      } while ((iVar12 != -1) && (iVar13 = iVar13 + 1, iVar13 < iVar10));
    }
    puVar1 = param_1 + 4;
    this = (string_output_adapter<char> *)(param_1 + 0x8c);
    __crt_stdio_output::string_output_adapter<char>::write_string
              (this,(char *)&local_48,(int)lVar9,(int *)puVar1,
               (__crt_deferred_errno_cache *)param_1[1]);
    if ((((uint)param_1[5] >> 3 & 1) != 0) &&
       ((((uint)param_1[5] >> 2 & 1) == 0 && (iVar13 = 0, 0 < iVar10)))) {
      iVar12 = (int)*puVar1;
      do {
        lVar15 = *(longlong *)this;
        if (*(longlong *)(lVar15 + 0x10) == *(longlong *)(lVar15 + 8)) {
          if (*(char *)(lVar15 + 0x18) == '\0') {
            iVar12 = -1;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          *(int *)puVar1 = iVar12;
        }
        else {
          *(int *)puVar1 = iVar12 + 1;
          *(longlong *)(lVar15 + 0x10) = *(longlong *)(lVar15 + 0x10) + 1;
          *(int32_t *)**(int32_t **)this = 0x30;
          **(longlong **)this = **(longlong **)this + 1;
        }
        iVar12 = (int)*puVar1;
      } while ((iVar12 != -1) && (iVar13 = iVar13 + 1, iVar13 < iVar10));
    }
    if ((*(char *)((longlong)param_1 + 0x4c) == '\0') || ((int)param_1[9] < 1)) {
      __crt_stdio_output::string_output_adapter<char>::write_string
                (this,(char *)param_1[8],(int)param_1[9],(int *)puVar1,
                 (__crt_deferred_errno_cache *)param_1[1]);
    }
    else {
      pWVar14 = (WCHAR *)param_1[8];
      iVar13 = 0;
      do {
        WVar2 = *pWVar14;
        local_48 = 0;
        pWVar14 = pWVar14 + 1;
        iVar12 = FUN_18014068c(&local_48,(int32_t (*) [32])local_44,6,WVar2,
                               (longlong *)param_1[1]);
        if ((iVar12 != 0) || (local_48 == 0)) {
          *(int *)puVar1 = -1;
          break;
        }
        __crt_stdio_output::string_output_adapter<char>::write_string
                  (this,local_44,local_48,(int *)puVar1,(__crt_deferred_errno_cache *)param_1[1]);
        iVar13 = iVar13 + 1;
      } while (iVar13 != (int)param_1[9]);
    }
    iVar13 = (int)*puVar1;
    if (((-1 < iVar13) && (((uint)param_1[5] >> 2 & 1) != 0)) && (iVar12 = 0, 0 < iVar10)) {
      do {
        lVar15 = *(longlong *)this;
        if (*(longlong *)(lVar15 + 0x10) == *(longlong *)(lVar15 + 8)) {
          if (*(char *)(lVar15 + 0x18) == '\0') {
            iVar13 = -1;
          }
          else {
            iVar13 = iVar13 + 1;
          }
          *(int *)puVar1 = iVar13;
        }
        else {
          *(int *)puVar1 = iVar13 + 1;
          *(longlong *)(lVar15 + 0x10) = *(longlong *)(lVar15 + 0x10) + 1;
          *(int32_t *)**(int32_t **)this = 0x20;
          **(longlong **)this = **(longlong **)this + 1;
        }
        iVar13 = (int)*puVar1;
      } while ((iVar13 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar10));
    }
  }
LAB_1801309cb:
  FUN_1801252c0(local_38 ^ (ulonglong)auStackY_78);
  return;
}

// ---- Function: FUN_1801309f8 ----
int32_t FUN_1801309f8(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  int32_t *puVar3;
  ushort *puVar4;
  ulonglong uVar5;
  bool bVar6;
  
  puVar3 = *(int32_t **)(param_1 + 0x18);
  *(int32_t **)(param_1 + 0x18) = puVar3 + 1;
  puVar4 = (ushort *)*puVar3;
  if ((puVar4 == (ushort *)0x0) || (*(longlong *)(puVar4 + 4) == 0)) {
    uVar5 = 6;
    *(char **)(param_1 + 0x40) = "(null)";
  }
  else {
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 2) {
LAB_180130a42:
      bVar6 = false;
    }
    else if ((iVar2 == 3) || (iVar2 == 0xc)) {
      bVar6 = true;
    }
    else {
      if (*(int *)(param_1 + 0x34) == 0xd) goto LAB_180130a42;
      bVar6 = (*(char *)(param_1 + 0x39) + 0x9dU & 0xef) != 0;
    }
    *(longlong *)(param_1 + 0x40) = *(longlong *)(puVar4 + 4);
    uVar1 = *puVar4;
    uVar5 = (ulonglong)uVar1;
    if (bVar6) {
      *(int32_t *)(param_1 + 0x4c) = 1;
      uVar5 = (ulonglong)(uVar1 >> 1);
      goto LAB_180130a6e;
    }
  }
  *(int32_t *)(param_1 + 0x4c) = 0;
LAB_180130a6e:
  *(int *)(param_1 + 0x48) = (int)uVar5;
  return CONCAT71((int7)(uVar5 >> 8),1);
}

// ---- Function: FUN_180130a74 ----
int32_t FUN_180130a74(ulonglong *param_1)

{
  int32_t (*pauVar1) [16];
  double *pdVar2;
  longlong *plVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int32_t (*pauVar8) [16];
  rsize_t rVar9;
  byte *pbVar10;
  char *pcVar11;
  uint uVar12;
  byte *pbVar13;
  longlong lVar14;
  byte bVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  double local_res8;
  
  *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x10;
  iVar7 = (int)param_1[6];
  if (iVar7 < 0) {
    iVar7 = (-(uint)((*(char *)((longlong)param_1 + 0x39) + 0xbfU & 0xdf) != 0) & 0xfffffff9) + 0xd;
    *(int *)(param_1 + 6) = iVar7;
  }
  else if ((iVar7 == 0) &&
          ((*(char *)((longlong)param_1 + 0x39) == 'g' ||
           (*(char *)((longlong)param_1 + 0x39) == 'G')))) {
    *(int32_t *)(param_1 + 6) = 1;
    iVar7 = 1;
  }
  pauVar1 = (int32_t (*) [16])(param_1 + 10);
  bVar4 = FUN_18012f344((longlong)pauVar1,(longlong)(iVar7 + 0x15d),param_1[1]);
  uVar16 = 0x200;
  if (bVar4) {
    uVar12 = (uint)param_1[6];
  }
  else {
    if (param_1[0x8b] == 0) {
      iVar7 = 0x200;
    }
    else {
      iVar7 = (int)(param_1[0x8a] >> 1);
    }
    uVar12 = iVar7 - 0x15d;
    *(uint *)(param_1 + 6) = uVar12;
  }
  pauVar8 = (int32_t (*) [16])param_1[0x8b];
  if ((int32_t (*) [16])param_1[0x8b] == (int32_t (*) [16])0x0) {
    pauVar8 = pauVar1;
  }
  param_1[8] = (ulonglong)pauVar8;
  pdVar2 = (double *)param_1[3];
  param_1[3] = (ulonglong)(pdVar2 + 1);
  pauVar8 = (int32_t (*) [16])param_1[0x8b];
  local_res8 = *pdVar2;
  if (pauVar8 == (int32_t (*) [16])0x0) {
    puVar18 = param_1 + 0x4a;
    rVar9 = 0x200;
    pauVar8 = pauVar1;
  }
  else {
    puVar18 = (ulonglong *)(*pauVar8 + (param_1[0x8a] >> 1));
    rVar9 = param_1[0x8a] >> 1;
    uVar16 = param_1[0x8a] >> 1;
  }
  FUN_1801403a4(&local_res8,pauVar8,uVar16,(char *)puVar18,rVar9,
                (int)*(char *)((longlong)param_1 + 0x39),uVar12,*param_1,1,(longlong *)param_1[1]);
  uVar12 = (uint)param_1[5] >> 5;
  uVar16 = (ulonglong)uVar12;
  if (((uVar12 & 1) != 0) && ((int)param_1[6] == 0)) {
    plVar3 = (longlong *)param_1[1];
    if ((char)plVar3[5] == '\0') {
      FUN_180130ef0(plVar3);
    }
    pbVar10 = (byte *)param_1[8];
    plVar3 = (longlong *)plVar3[3];
    uVar17 = (ulonglong)*pbVar10;
    if (*(char *)(uVar17 + plVar3[0x22]) != 'e') {
      do {
        pbVar10 = pbVar10 + 1;
        uVar17 = (ulonglong)*pbVar10;
      } while ((*(byte *)(*plVar3 + uVar17 * 2) & 4) != 0);
    }
    bVar4 = *(char *)(uVar17 + plVar3[0x22]) == 'x';
    if (bVar4) {
      uVar17 = (ulonglong)pbVar10[2];
    }
    pbVar13 = pbVar10 + 2;
    if (!bVar4) {
      pbVar13 = pbVar10;
    }
    bVar5 = **(byte **)plVar3[0x1f];
    uVar16 = CONCAT71((int7)((ulonglong)plVar3[0x1f] >> 8),bVar5);
    *pbVar13 = bVar5;
    do {
      pbVar13 = pbVar13 + 1;
      bVar5 = *pbVar13;
      uVar16 = CONCAT71((int7)(uVar16 >> 8),bVar5);
      bVar15 = (byte)uVar17;
      *pbVar13 = bVar15;
      uVar17 = (ulonglong)bVar5;
    } while (bVar15 != 0);
  }
  bVar5 = *(char *)((longlong)param_1 + 0x39) + 0xb9;
  uVar16 = CONCAT71((int7)(uVar16 >> 8),bVar5);
  if (((bVar5 & 0xdf) == 0) &&
     (uVar12 = (uint)param_1[5] >> 5, uVar16 = (ulonglong)uVar12, (uVar12 & 1) == 0)) {
    plVar3 = (longlong *)param_1[1];
    if ((char)plVar3[5] == '\0') {
      FUN_180130ef0(plVar3);
    }
    uVar16 = FUN_18012fff0((char *)param_1[8],plVar3 + 3);
  }
  pcVar11 = (char *)param_1[8];
  cVar6 = *pcVar11;
  if (cVar6 == '-') {
    *(uint *)(param_1 + 5) = (uint)param_1[5] | 0x40;
    pcVar11 = pcVar11 + 1;
    param_1[8] = (ulonglong)pcVar11;
    cVar6 = *pcVar11;
  }
  if (((byte)(cVar6 + 0xb7U) < 0x26) &&
     ((0x2100000021U >> ((ulonglong)(byte)(cVar6 + 0xb7U) & 0x3f) & 1) != 0)) {
    *(uint *)(param_1 + 5) = (uint)param_1[5] & 0xfffffff7;
    *(int32_t *)((longlong)param_1 + 0x39) = 0x73;
  }
  lVar14 = -1;
  do {
    lVar14 = lVar14 + 1;
  } while (pcVar11[lVar14] != '\0');
  *(int *)(param_1 + 9) = (int)lVar14;
  return CONCAT71((int7)(uVar16 >> 8),1);
}

// ---- Function: FUN_180130cc8 ----
int32_t FUN_180130cc8(longlong param_1)

{
  int32_t *puVar1;
  int32_t uVar2;
  WCHAR *pWVar3;
  int32_t *puVar4;
  int iVar5;
  int32_t extraout_var;
  int32_t uVar6;
  longlong lVar7;
  int32_t (*pauVar8) [32];
  int32_t *puVar9;
  ulonglong uVar10;
  
  iVar5 = *(int *)(param_1 + 0x34);
  if ((iVar5 == 2) ||
     (((iVar5 != 3 && (iVar5 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    puVar4 = *(int32_t **)(param_1 + 0x18);
    puVar1 = puVar4 + 8;
    puVar9 = *(int32_t **)(param_1 + 0x458);
    if (*(int32_t **)(param_1 + 0x458) == (int32_t *)0x0) {
      puVar9 = (int32_t *)(param_1 + 0x50);
    }
    *(int32_t **)(param_1 + 0x18) = puVar1;
    uVar2 = *puVar4;
    uVar6 = CONCAT71((int7)((ulonglong)puVar1 >> 8),uVar2);
    *puVar9 = uVar2;
    *(int32_t *)(param_1 + 0x48) = 1;
  }
  else {
    pWVar3 = *(WCHAR **)(param_1 + 0x18);
    *(WCHAR **)(param_1 + 0x18) = pWVar3 + 4;
    pauVar8 = *(int32_t (**) [32])(param_1 + 0x458);
    if (pauVar8 == (int32_t (*) [32])0x0) {
      pauVar8 = (int32_t (*) [32])(param_1 + 0x50);
      uVar10 = 0x200;
    }
    else {
      uVar10 = *(ulonglong *)(param_1 + 0x450) >> 1;
    }
    iVar5 = FUN_18014068c((int *)(param_1 + 0x48),pauVar8,uVar10,*pWVar3,*(longlong **)(param_1 + 8)
                         );
    uVar6 = CONCAT44(extraout_var,iVar5);
    if (iVar5 != 0) {
      *(int32_t *)(param_1 + 0x38) = 1;
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x458);
  if (*(longlong *)(param_1 + 0x458) == 0) {
    lVar7 = param_1 + 0x50;
  }
  *(longlong *)(param_1 + 0x40) = lVar7;
  return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
}

// ---- Function: FUN_180130d9c ----
ulonglong FUN_180130d9c(longlong param_1)

{
  int32_t *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  bool bVar4;
  int32_t extraout_var;
  ulonglong uVar5;
  int iVar6;
  
  puVar1 = *(int32_t **)(param_1 + 0x18);
  *(int32_t **)(param_1 + 0x18) = puVar1 + 1;
  puVar2 = (ulonglong *)*puVar1;
  bVar4 = FUN_1801409b4();
  if ((int)CONCAT71(extraout_var,bVar4) == 0) goto LAB_180130dc1;
  iVar6 = *(int *)(param_1 + 0x34);
  if (iVar6 < 6) {
    if (iVar6 != 5) {
      if (iVar6 != 0) {
        if (iVar6 == 1) {
          uVar5 = CONCAT71(extraout_var,*(int32_t *)(param_1 + 0x20));
          *(int32_t *)puVar2 = *(int32_t *)(param_1 + 0x20);
          goto LAB_180130e3a;
        }
        iVar6 = iVar6 + -2;
        if (iVar6 == 0) {
          uVar5 = (ulonglong)*(ushort *)(param_1 + 0x20);
          *(ushort *)puVar2 = *(ushort *)(param_1 + 0x20);
          goto LAB_180130e3a;
        }
        goto LAB_180130e29;
      }
LAB_180130e4b:
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x20);
      *(uint *)puVar2 = *(uint *)(param_1 + 0x20);
      goto LAB_180130e3a;
    }
  }
  else if (((iVar6 != 6) && (iVar6 != 7)) && (iVar6 = iVar6 + -9, iVar6 != 0)) {
LAB_180130e29:
    if (iVar6 == 1) goto LAB_180130e4b;
    if (iVar6 != 2) {
LAB_180130dc1:
      lVar3 = *(longlong *)(param_1 + 8);
      *(int32_t *)(lVar3 + 0x30) = 1;
      *(int32_t *)(lVar3 + 0x2c) = 0x16;
      uVar5 = FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,
                            *(longlong **)(param_1 + 8));
      return uVar5 & 0xffffffffffffff00;
    }
  }
  uVar5 = (ulonglong)*(int *)(param_1 + 0x20);
  *puVar2 = uVar5;
LAB_180130e3a:
  *(int32_t *)(param_1 + 0x38) = 1;
  return CONCAT71((int7)(uVar5 >> 8),1);
}

// ---- Function: FUN_180130e54 ----
int32_t FUN_180130e54(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  wchar_t *pwVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  *(longlong **)(param_1 + 0x18) = plVar2 + 1;
  pwVar5 = (wchar_t *)*plVar2;
  iVar1 = *(int *)(param_1 + 0x34);
  iVar3 = *(int *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x30) == -1) {
    iVar3 = 0x7fffffff;
  }
  *(wchar_t **)(param_1 + 0x40) = pwVar5;
  if ((iVar1 == 2) ||
     (((iVar1 != 3 && (iVar1 != 0xc)) &&
      ((*(int *)(param_1 + 0x34) == 0xd || ((*(char *)(param_1 + 0x39) + 0x9dU & 0xef) == 0)))))) {
    if ((int32_t (*) [32])pwVar5 == (int32_t (*) [32])0x0) {
      *(char **)(param_1 + 0x40) = "(null)";
      pwVar5 = (wchar_t *)"(null)";
    }
    uVar4 = FUN_180136a44((int32_t (*) [32])pwVar5,(longlong)iVar3);
  }
  else {
    if ((int32_t (*) [32])pwVar5 == (int32_t (*) [32])0x0) {
      pwVar5 = L"(null)";
      *(wchar_t **)(param_1 + 0x40) = L"(null)";
    }
    *(int32_t *)(param_1 + 0x4c) = 1;
    uVar4 = FUN_180136b94((int32_t (*) [32])pwVar5,(longlong)iVar3);
  }
  *(int *)(param_1 + 0x48) = (int)uVar4;
  return CONCAT71((int7)(uVar4 >> 8),1);
}

// ---- Function: FUN_180130ef0 ----
void FUN_180130ef0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_18012b3a8(param_1);
  param_1[3] = *(longlong *)(lVar1 + 0x90);
  param_1[4] = *(longlong *)(lVar1 + 0x88);
  FUN_18013c230(lVar1,param_1 + 3,param_1[1]);
  FUN_18013c29c(lVar1,param_1 + 4,param_1[1]);
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(int32_t *)(param_1 + 5) = 2;
  }
  return;
}

// ---- Function: write_string ----
/* Library Function - Single Match
    public: void __cdecl __crt_stdio_output::string_output_adapter<char>::write_string(char const *
   __ptr64 const,int,int * __ptr64 const,class __crt_deferred_errno_cache & __ptr64)const __ptr64
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
__crt_stdio_output::string_output_adapter<char>::write_string
          (string_output_adapter<char> *this,char *param_1,int param_2,int *param_3,
          __crt_deferred_errno_cache *param_4)

{
  int32_t *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    uVar4 = (ulonglong)param_2;
    puVar1 = *(int32_t **)this;
    if (puVar1[2] == puVar1[1]) {
      if (*(char *)(puVar1 + 3) == '\0') {
        *param_3 = -1;
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
    else {
      uVar2 = puVar1[1] - puVar1[2];
      uVar3 = uVar4;
      if (uVar2 < uVar4) {
        uVar3 = uVar2;
      }
      FUN_180150fd0((int32_t *)*puVar1,(int32_t *)param_1,uVar3);
      **(longlong **)this = **(longlong **)this + uVar3;
      *(longlong *)(*(longlong *)this + 0x10) = *(longlong *)(*(longlong *)this + 0x10) + uVar3;
      if (*(char *)(*(longlong *)this + 0x18) == '\0') {
        if (uVar3 == uVar4) {
          *param_3 = *param_3 + (int)uVar3;
        }
        else {
          *param_3 = -1;
        }
      }
      else {
        *param_3 = *param_3 + param_2;
      }
    }
  }
  return;
}

// ---- Function: FUN_18013100c ----
void FUN_18013100c(ulonglong param_1,int32_t *param_2,ulonglong param_3,longlong param_4,
                  int32_t *param_5,int32_t param_6)

{
  int iVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t auStackY_548 [32];
  int32_t *local_518;
  ulonglong local_510;
  ulonglong local_508;
  int32_t local_500;
  int32_t local_4ff;
  int32_t local_4fb;
  int32_t local_4f9;
  longlong local_4f8 [2];
  int32_t local_4e8;
  int32_t local_4e0;
  int32_t uStack_4dc;
  int32_t uStack_4d8;
  int32_t uStack_4d4;
  char local_4d0;
  int32_t local_4cc;
  char local_4c8;
  int32_t local_4c4;
  char local_4c0;
  ulonglong local_4b8;
  longlong *local_4b0;
  longlong local_4a8;
  int32_t local_4a0;
  int32_t local_498;
  int32_t local_494;
  int32_t local_490;
  int32_t local_488;
  int32_t local_480;
  int32_t local_470;
  int32_t local_46c;
  int32_t local_68;
  LPVOID pvStack_60;
  int32_t **local_58;
  int32_t local_50;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_548;
  local_4f8[0] = 0;
  local_4e8 = 0;
  local_4d0 = '\0';
  local_4c8 = '\0';
  local_4c0 = '\0';
  if (param_5 == (int32_t *)0x0) {
    uVar3 = PTR_PTR_1801eb448._0_4_;
    uVar4 = PTR_PTR_1801eb448._4_4_;
    uVar5 = PTR_DAT_1801eb450._0_4_;
    uVar6 = PTR_DAT_1801eb450._4_4_;
    if (DAT_1801ee158 == 0) goto LAB_18013107b;
  }
  else {
    uVar3 = *param_5;
    uVar4 = param_5[1];
    uVar5 = param_5[2];
    uVar6 = param_5[3];
LAB_18013107b:
    local_4d0 = '\x01';
    local_4e0 = uVar3;
    uStack_4dc = uVar4;
    uStack_4d8 = uVar5;
    uStack_4d4 = uVar6;
  }
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (int32_t *)0x0)))) {
    local_4c8 = '\x01';
    local_4cc = 0x16;
    FUN_18012b6c8((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,local_4f8);
    goto LAB_1801311fa;
  }
  local_4ff = 0;
  local_4fb = 0;
  local_4f9 = 0;
  local_508 = 0;
  if (((param_1 & 2) != 0) || (local_500 = 0, param_2 == (int32_t *)0x0)) {
    local_500 = 1;
  }
  local_4b0 = local_4f8;
  local_498 = 0;
  local_58 = &local_518;
  local_494 = 0;
  local_4a0 = param_6;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_470 = 0;
  local_46c = 0;
  local_68 = 0;
  pvStack_60 = (LPVOID)0x0;
  local_50 = 0;
  local_518 = param_2;
  local_510 = param_3;
  local_4b8 = param_1;
  local_4a8 = param_4;
  iVar1 = FUN_1801300ec(&local_4b8,param_2,param_3,param_4);
  if (param_2 == (int32_t *)0x0) {
LAB_1801311ee:
    FUN_18013bf3c(pvStack_60);
  }
  else {
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) != 0) {
        if (param_3 != 0) {
          if (iVar1 < 0) {
            *param_2 = 0;
          }
          else {
            if (local_508 != param_3) goto LAB_1801311ea;
            param_2[param_3 - 1] = 0;
          }
        }
        goto LAB_1801311ee;
      }
      if (param_3 != 0) {
        if (local_508 == param_3) {
          param_2[param_3 - 1] = 0;
          FUN_18013bf3c(pvStack_60);
          goto LAB_1801311fa;
        }
        goto LAB_1801311ea;
      }
    }
    else if ((param_3 != 0) || (iVar1 == 0)) {
      if (local_508 != param_3) {
LAB_1801311ea:
        param_2[local_508] = 0;
        goto LAB_1801311ee;
      }
      if ((iVar1 < 0) || ((ulonglong)(longlong)iVar1 <= param_3)) goto LAB_1801311ee;
    }
    FUN_18013bf3c(pvStack_60);
  }
LAB_1801311fa:
  uVar3 = local_4cc;
  if (local_4d0 == '\x02') {
    *(uint *)(local_4f8[0] + 0x3a8) = *(uint *)(local_4f8[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_4c8 != '\0') {
    lVar2 = FUN_18012b3a8(local_4f8);
    *(int32_t *)(lVar2 + 0x20) = uVar3;
  }
  if (local_4c0 != '\0') {
    lVar2 = FUN_18012b3a8(local_4f8);
    *(int32_t *)(lVar2 + 0x24) = local_4c4;
  }
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_548);
  return;
}

// ---- Function: __acrt_errno_from_os_error ----
/* Library Function - Single Match
    __acrt_errno_from_os_error
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t __acrt_errno_from_os_error(int param_1)

{
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

// ---- Function: FUN_1801312a8 ----
void FUN_1801312a8(int param_1)

{
  int32_t uVar1;
  __acrt_ptd *p_Var2;
  __acrt_ptd *p_Var3;
  
  p_Var2 = FUN_180138950();
  if (p_Var2 == (__acrt_ptd *)0x0) {
    p_Var2 = (__acrt_ptd *)&DAT_1801eb2bc;
  }
  else {
    p_Var2 = p_Var2 + 0x24;
  }
  *(int *)p_Var2 = param_1;
  uVar1 = __acrt_errno_from_os_error(param_1);
  p_Var3 = FUN_180138950();
  p_Var2 = (__acrt_ptd *)&DAT_1801eb2b8;
  if (p_Var3 != (__acrt_ptd *)0x0) {
    p_Var2 = p_Var3 + 0x20;
  }
  *(int32_t *)p_Var2 = uVar1;
  return;
}

