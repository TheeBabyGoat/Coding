#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800eec10 ----
int32_t FUN_1800eec10(int32_t *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int32_t *puVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  int32_t *puVar8;
  ulong *puVar9;
  int32_t uVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  int32_t uVar15;
  byte local_res8 [8];
  longlong local_res10;
  
  puVar8 = param_1 + 9;
  param_1[0xb] = 0;
  puVar4 = puVar8;
  if (0xf < (ulonglong)param_1[0xc]) {
    puVar4 = (int32_t *)*puVar8;
  }
  *(int32_t *)puVar4 = 0;
  pbVar1 = (byte *)param_1[6];
  pbVar12 = (byte *)param_1[7];
  if (pbVar1 != (byte *)param_1[7]) {
    param_1[7] = pbVar1;
    pbVar12 = pbVar1;
  }
  local_res8[0] = *(byte *)((longlong)param_1 + 0xc);
  if (pbVar12 == (byte *)param_1[8]) {
    FUN_1800f75a0(param_1 + 6,(int32_t *)pbVar12,local_res8);
  }
  else {
    *pbVar12 = local_res8[0];
    param_1[7] = param_1[7] + 1;
  }
  iVar14 = 5;
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar11 = uVar3;
  switch(uVar3) {
  case 0x2d:
    uVar5 = param_1[0xb];
    if (uVar5 < (ulonglong)param_1[0xc]) {
      param_1[0xb] = uVar5 + 1;
      if (0xf < (ulonglong)param_1[0xc]) {
        puVar8 = (int32_t *)*puVar8;
      }
      *(char *)((longlong)puVar8 + uVar5) = (char)uVar3;
      *(int32_t *)((longlong)puVar8 + uVar5 + 1) = 0;
    }
    else {
      FUN_1800b99a0(puVar8,1,(ulonglong)local_res8[0],(char)uVar3);
    }
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    break;
  case 0x30:
    goto switchD_1800eecad_caseD_30;
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    goto switchD_1800eecad_caseD_31;
  }
  iVar14 = 6;
  param_1[3] = param_1[3] + 1;
  param_1[4] = param_1[4] + 1;
  if (*(char *)(param_1 + 2) == '\0') {
    uVar5 = FUN_18012e8b0((int32_t *)*param_1);
    uVar3 = (uint)uVar5;
    *(uint *)((longlong)param_1 + 0xc) = uVar3;
  }
  else {
    *(int32_t *)(param_1 + 2) = 0;
  }
  if (uVar3 != 0xffffffff) {
    local_res8[0] = (byte)uVar3;
    pbVar1 = (byte *)param_1[7];
    if (pbVar1 == (byte *)param_1[8]) {
      FUN_1800f75a0(param_1 + 6,(int32_t *)pbVar1,local_res8);
    }
    else {
      *pbVar1 = local_res8[0];
      param_1[7] = param_1[7] + 1;
    }
  }
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar3 == 10) {
    param_1[5] = param_1[5] + 1;
    param_1[4] = 0;
  }
  else {
    uVar11 = uVar3;
    switch(uVar3) {
    case 0x30:
switchD_1800eecad_caseD_30:
      puVar8 = param_1 + 9;
      uVar5 = param_1[0xb];
      if (uVar5 < (ulonglong)param_1[0xc]) {
        param_1[0xb] = uVar5 + 1;
        if (0xf < (ulonglong)param_1[0xc]) {
          puVar8 = (int32_t *)*puVar8;
        }
        *(int32_t *)((longlong)puVar8 + uVar5 + 1) = 0;
        *(char *)((longlong)puVar8 + uVar5) = (char)uVar3;
      }
      else {
        FUN_1800b99a0(puVar8,1,(ulonglong)local_res8[0],(char)uVar3);
      }
      param_1[3] = param_1[3] + 1;
      param_1[4] = param_1[4] + 1;
      if (*(char *)(param_1 + 2) == '\0') {
        uVar5 = FUN_18012e8b0((int32_t *)*param_1);
        *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
      }
      else {
        *(int32_t *)(param_1 + 2) = 0;
      }
      if (*(int *)((longlong)param_1 + 0xc) != -1) {
        local_res8[0] = (byte)*(int *)((longlong)param_1 + 0xc);
        pbVar1 = (byte *)param_1[7];
        if (pbVar1 == (byte *)param_1[8]) {
          FUN_1800f75a0(param_1 + 6,(int32_t *)pbVar1,local_res8);
        }
        else {
          *pbVar1 = local_res8[0];
          param_1[7] = param_1[7] + 1;
        }
      }
      uVar11 = *(uint *)((longlong)param_1 + 0xc);
      iVar13 = iVar14;
      if (uVar11 == 10) {
LAB_1800ef3c3:
        iVar14 = iVar13;
        param_1[4] = 0;
        param_1[5] = param_1[5] + 1;
        goto switchD_1800eef2e_caseD_2f;
      }
      if (uVar11 == 0x2e) {
switchD_1800eef2e_caseD_2e:
        puVar8 = param_1 + 9;
        uVar5 = param_1[0xb];
        uVar10 = *(int32_t *)(param_1 + 0x11);
        if (uVar5 < (ulonglong)param_1[0xc]) {
          param_1[0xb] = uVar5 + 1;
          if (0xf < (ulonglong)param_1[0xc]) {
            puVar8 = (int32_t *)*puVar8;
          }
          *(int32_t *)((longlong)puVar8 + uVar5 + 1) = 0;
          *(int32_t *)((longlong)puVar8 + uVar5) = uVar10;
        }
        else {
          FUN_1800b99a0(puVar8,1,(ulonglong)local_res8[0],uVar10);
        }
        iVar14 = 7;
        param_1[3] = param_1[3] + 1;
        param_1[4] = param_1[4] + 1;
        if (*(char *)(param_1 + 2) == '\0') {
          uVar5 = FUN_18012e8b0((int32_t *)*param_1);
          *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
        }
        else {
          *(int32_t *)(param_1 + 2) = 0;
        }
        if (*(int *)((longlong)param_1 + 0xc) != -1) {
          local_res8[0] = (byte)*(int *)((longlong)param_1 + 0xc);
          pbVar1 = (byte *)param_1[7];
          if (pbVar1 == (byte *)param_1[8]) {
            FUN_1800f75a0(param_1 + 6,(int32_t *)pbVar1,local_res8);
          }
          else {
            *pbVar1 = local_res8[0];
            param_1[7] = param_1[7] + 1;
          }
        }
        uVar3 = *(uint *)((longlong)param_1 + 0xc);
        uVar5 = (ulonglong)uVar3;
        if (uVar3 == 10) {
          param_1[5] = param_1[5] + 1;
          param_1[4] = 0;
        }
        else {
          switch(uVar3) {
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
            puVar8 = param_1 + 9;
            uVar7 = param_1[0xb];
            if (uVar7 < (ulonglong)param_1[0xc]) {
              param_1[0xb] = uVar7 + 1;
              if (0xf < (ulonglong)param_1[0xc]) {
                puVar8 = (int32_t *)*puVar8;
              }
              *(char *)((longlong)puVar8 + uVar7) = (char)uVar3;
              *(int32_t *)((longlong)puVar8 + uVar7 + 1) = 0;
              bVar2 = local_res8[0];
            }
            else {
              FUN_1800b99a0(puVar8,1,(ulonglong)local_res8[0],(char)uVar3);
              bVar2 = local_res8[0];
            }
LAB_1800ef080:
            param_1[3] = param_1[3] + 1;
            param_1[4] = param_1[4] + 1;
            if (*(char *)(param_1 + 2) == '\0') {
              uVar7 = FUN_18012e8b0((int32_t *)*param_1);
              *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
            }
            else {
              *(int32_t *)(param_1 + 2) = 0;
            }
            if (*(int *)((longlong)param_1 + 0xc) != -1) {
              local_res8[0] = (byte)*(int *)((longlong)param_1 + 0xc);
              pbVar1 = (byte *)param_1[7];
              if (pbVar1 == (byte *)param_1[8]) {
                FUN_1800f75a0(param_1 + 6,(int32_t *)pbVar1,local_res8);
              }
              else {
                *pbVar1 = local_res8[0];
                param_1[7] = param_1[7] + 1;
              }
            }
            uVar3 = (uint)uVar5;
            uVar11 = *(uint *)((longlong)param_1 + 0xc);
            iVar13 = 7;
            if (uVar11 == 10) goto LAB_1800ef3c3;
            switch(uVar11) {
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
              uVar7 = param_1[0xb];
              if (uVar7 < (ulonglong)param_1[0xc]) {
                param_1[0xb] = uVar7 + 1;
                puVar8 = param_1 + 9;
                if (0xf < (ulonglong)param_1[0xc]) {
                  puVar8 = (int32_t *)param_1[9];
                }
                *(char *)((longlong)puVar8 + uVar7) = (char)uVar11;
                *(int32_t *)((longlong)puVar8 + uVar7 + 1) = 0;
              }
              else {
                uVar5 = (ulonglong)(uVar11 & 0xff);
                FUN_1800b99a0(param_1 + 9,1,(ulonglong)bVar2,(char)uVar11);
              }
              goto LAB_1800ef080;
            case 0x45:
            case 0x65:
              goto switchD_1800ef0f7_caseD_45;
            }
            goto switchD_1800eef2e_caseD_2f;
          }
        }
        pcVar6 = "invalid number; expected digit after \'.\'";
        goto LAB_1800eed58;
      }
      if ((uVar11 != 0x45) && (uVar11 != 0x65)) goto switchD_1800eef2e_caseD_2f;
switchD_1800ef0f7_caseD_45:
      puVar8 = param_1 + 9;
      uVar5 = param_1[0xb];
      uVar10 = (int32_t)uVar11;
      if (uVar5 < (ulonglong)param_1[0xc]) {
        param_1[0xb] = uVar5 + 1;
        if (0xf < (ulonglong)param_1[0xc]) {
          puVar8 = (int32_t *)*puVar8;
        }
        *(int32_t *)((longlong)puVar8 + uVar5) = uVar10;
        *(int32_t *)((longlong)puVar8 + uVar5 + 1) = 0;
      }
      else {
LAB_1800ef175:
        FUN_1800b99a0(param_1 + 9,1,(ulonglong)local_res8[0],uVar10);
      }
LAB_1800ef184:
      iVar14 = 7;
      param_1[3] = param_1[3] + 1;
      param_1[4] = param_1[4] + 1;
      if (*(char *)(param_1 + 2) == '\0') {
        uVar5 = FUN_18012e8b0((int32_t *)*param_1);
        *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
      }
      else {
        *(int32_t *)(param_1 + 2) = 0;
      }
      if (*(int *)((longlong)param_1 + 0xc) != -1) {
        local_res8[0] = (byte)*(int *)((longlong)param_1 + 0xc);
        pbVar1 = (byte *)param_1[7];
        if (pbVar1 == (byte *)param_1[8]) {
          FUN_1800f75a0(param_1 + 6,(int32_t *)pbVar1,local_res8);
        }
        else {
          *pbVar1 = local_res8[0];
          param_1[7] = param_1[7] + 1;
        }
      }
      iVar13 = *(int *)((longlong)param_1 + 0xc);
      if (iVar13 == 10) {
        param_1[5] = param_1[5] + 1;
        param_1[4] = 0;
      }
      else {
        switch(iVar13) {
        case 0x2b:
        case 0x2d:
          puVar8 = param_1 + 9;
          uVar5 = param_1[0xb];
          if (uVar5 < (ulonglong)param_1[0xc]) {
            param_1[0xb] = uVar5 + 1;
            if (0xf < (ulonglong)param_1[0xc]) {
              puVar8 = (int32_t *)*puVar8;
            }
            *(char *)((longlong)puVar8 + uVar5) = (char)iVar13;
            *(int32_t *)((longlong)puVar8 + uVar5 + 1) = 0;
          }
          else {
            FUN_1800b99a0(puVar8,1,(ulonglong)local_res8[0],(char)iVar13);
          }
          param_1[3] = param_1[3] + 1;
          param_1[4] = param_1[4] + 1;
          if (*(char *)(param_1 + 2) == '\0') {
            uVar5 = FUN_18012e8b0((int32_t *)*param_1);
            *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
          }
          else {
            *(int32_t *)(param_1 + 2) = 0;
          }
          if (*(int *)((longlong)param_1 + 0xc) != -1) {
            local_res8[0] = (byte)*(int *)((longlong)param_1 + 0xc);
            pbVar1 = (byte *)param_1[7];
            if (pbVar1 == (byte *)param_1[8]) {
              FUN_1800f75a0(param_1 + 6,(int32_t *)pbVar1,local_res8);
            }
            else {
              *pbVar1 = local_res8[0];
              param_1[7] = param_1[7] + 1;
            }
          }
          iVar13 = *(int *)((longlong)param_1 + 0xc);
          if (iVar13 == 10) {
            param_1[5] = param_1[5] + 1;
            param_1[4] = 0;
          }
          else {
            switch(iVar13) {
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
              goto switchD_1800ef207_caseD_30;
            }
          }
          pcVar6 = "invalid number; expected digit after exponent sign";
          goto LAB_1800eed58;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
switchD_1800ef207_caseD_30:
          puVar8 = param_1 + 9;
          uVar5 = param_1[0xb];
          if (uVar5 < (ulonglong)param_1[0xc]) {
            param_1[0xb] = uVar5 + 1;
            if (0xf < (ulonglong)param_1[0xc]) {
              puVar8 = (int32_t *)*puVar8;
            }
            *(int32_t *)((longlong)puVar8 + uVar5 + 1) = 0;
            *(char *)((longlong)puVar8 + uVar5) = (char)iVar13;
            bVar2 = local_res8[0];
          }
          else {
            FUN_1800b99a0(puVar8,1,(ulonglong)local_res8[0],(char)iVar13);
            bVar2 = local_res8[0];
          }
LAB_1800ef310:
          param_1[3] = param_1[3] + 1;
          param_1[4] = param_1[4] + 1;
          if (*(char *)(param_1 + 2) == '\0') {
            uVar5 = FUN_18012e8b0((int32_t *)*param_1);
            *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
          }
          else {
            *(int32_t *)(param_1 + 2) = 0;
          }
          if (*(int *)((longlong)param_1 + 0xc) != -1) {
            local_res8[0] = (byte)*(int *)((longlong)param_1 + 0xc);
            pbVar1 = (byte *)param_1[7];
            if (pbVar1 == (byte *)param_1[8]) {
              FUN_1800f75a0(param_1 + 6,(int32_t *)pbVar1,local_res8);
            }
            else {
              *pbVar1 = local_res8[0];
              param_1[7] = param_1[7] + 1;
            }
          }
          uVar11 = *(uint *)((longlong)param_1 + 0xc);
          iVar13 = 7;
          uVar3 = uVar11;
          if (uVar11 == 10) goto LAB_1800ef3c3;
          switch(uVar11) {
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
            uVar5 = param_1[0xb];
            if (uVar5 < (ulonglong)param_1[0xc]) {
              param_1[0xb] = uVar5 + 1;
              puVar8 = param_1 + 9;
              if (0xf < (ulonglong)param_1[0xc]) {
                puVar8 = (int32_t *)param_1[9];
              }
              *(char *)((longlong)puVar8 + uVar5) = (char)uVar11;
              *(int32_t *)((longlong)puVar8 + uVar5 + 1) = 0;
            }
            else {
              FUN_1800b99a0(param_1 + 9,1,(ulonglong)bVar2,(char)uVar11);
            }
            goto LAB_1800ef310;
          }
switchD_1800eef2e_caseD_2f:
          *(int32_t *)(param_1 + 2) = 1;
          param_1[3] = param_1[3] + -1;
          if (param_1[4] == 0) {
            if (param_1[5] != 0) {
              param_1[5] = param_1[5] + -1;
            }
          }
          else {
            param_1[4] = param_1[4] + -1;
          }
          if (uVar11 != 0xffffffff) {
            param_1[7] = param_1[7] + -1;
          }
          local_res10 = 0;
          puVar9 = __doserrno();
          *puVar9 = 0;
          if (iVar14 == 5) {
            puVar8 = param_1 + 9;
            if (0xf < (ulonglong)param_1[0xc]) {
              puVar8 = (int32_t *)*puVar8;
            }
            uVar5 = FUN_180131f30((longlong)puVar8,&local_res10,10);
            puVar9 = __doserrno();
            if (*puVar9 == 0) {
              param_1[0xf] = uVar5;
              return 5;
            }
          }
          else if (iVar14 == 6) {
            puVar8 = param_1 + 9;
            if (0xf < (ulonglong)param_1[0xc]) {
              puVar8 = (int32_t *)*puVar8;
            }
            uVar5 = FUN_180131e7c((longlong)puVar8,&local_res10,10,uVar3);
            puVar9 = __doserrno();
            if (*puVar9 == 0) {
              param_1[0xe] = uVar5;
              return 6;
            }
          }
          puVar8 = param_1 + 9;
          if (0xf < (ulonglong)param_1[0xc]) {
            puVar8 = (int32_t *)*puVar8;
          }
          uVar15 = FUN_180135604((longlong)puVar8,&local_res10);
          param_1[0x10] = uVar15;
          return 7;
        }
      }
      pcVar6 = "invalid number; expected \'+\', \'-\', or digit after exponent";
      goto LAB_1800eed58;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
switchD_1800eecad_caseD_31:
      puVar8 = param_1 + 9;
      uVar5 = param_1[0xb];
      if ((ulonglong)param_1[0xc] <= uVar5) goto LAB_1800eee9d;
      param_1[0xb] = uVar5 + 1;
      if (0xf < (ulonglong)param_1[0xc]) {
        puVar8 = (int32_t *)*puVar8;
      }
      *(int32_t *)((longlong)puVar8 + uVar5 + 1) = 0;
      *(char *)((longlong)puVar8 + uVar5) = (char)uVar11;
LAB_1800eeeb0:
      param_1[3] = param_1[3] + 1;
      param_1[4] = param_1[4] + 1;
      if (*(char *)(param_1 + 2) == '\0') {
        uVar5 = FUN_18012e8b0((int32_t *)*param_1);
        *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
      }
      else {
        *(int32_t *)(param_1 + 2) = 0;
      }
      if (*(int *)((longlong)param_1 + 0xc) != -1) {
        local_res8[0] = (byte)*(int *)((longlong)param_1 + 0xc);
        pbVar1 = (byte *)param_1[7];
        if (pbVar1 == (byte *)param_1[8]) {
          FUN_1800f75a0(param_1 + 6,(int32_t *)pbVar1,local_res8);
        }
        else {
          *pbVar1 = local_res8[0];
          param_1[7] = param_1[7] + 1;
        }
      }
      uVar11 = *(uint *)((longlong)param_1 + 0xc);
      iVar13 = iVar14;
      uVar3 = uVar11;
      if (uVar11 == 10) goto LAB_1800ef3c3;
      uVar10 = (int32_t)uVar11;
      switch(uVar11) {
      case 0x2e:
        goto switchD_1800eef2e_caseD_2e;
      default:
        goto switchD_1800eef2e_caseD_2f;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        uVar5 = param_1[0xb];
        if (uVar5 < (ulonglong)param_1[0xc]) {
          param_1[0xb] = uVar5 + 1;
          puVar8 = param_1 + 9;
          if (0xf < (ulonglong)param_1[0xc]) {
            puVar8 = (int32_t *)param_1[9];
          }
          *(int32_t *)((longlong)puVar8 + uVar5) = uVar10;
          *(int32_t *)((longlong)puVar8 + uVar5 + 1) = 0;
        }
        else {
LAB_1800eee9d:
          FUN_1800b99a0(param_1 + 9,1,(ulonglong)local_res8[0],(char)uVar11);
        }
        goto LAB_1800eeeb0;
      case 0x45:
      case 0x65:
        puVar8 = param_1 + 9;
        uVar5 = param_1[0xb];
        if ((ulonglong)param_1[0xc] <= uVar5) goto LAB_1800ef175;
        param_1[0xb] = uVar5 + 1;
        if (0xf < (ulonglong)param_1[0xc]) {
          puVar8 = (int32_t *)*puVar8;
        }
        *(int32_t *)((longlong)puVar8 + uVar5) = uVar10;
        *(int32_t *)((longlong)puVar8 + uVar5 + 1) = 0;
        goto LAB_1800ef184;
      }
    }
  }
  pcVar6 = "invalid number; expected digit after \'-\'";
LAB_1800eed58:
  param_1[0xd] = pcVar6;
  return 0xe;
}

// ---- Function: FUN_1800ef650 ----
int32_t FUN_1800ef650(int32_t *param_1)

{
  int32_t *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int32_t local_res8 [8];
  
  param_1[3] = param_1[3] + 1;
  param_1[4] = param_1[4] + 1;
  if (*(char *)(param_1 + 2) == '\0') {
    uVar4 = FUN_18012e8b0((int32_t *)*param_1);
    *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  }
  else {
    *(int32_t *)(param_1 + 2) = 0;
  }
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    puVar1 = (int32_t *)param_1[7];
    local_res8[0] = (int32_t)*(int *)((longlong)param_1 + 0xc);
    if (puVar1 == (int32_t *)param_1[8]) {
      FUN_1800f75a0(param_1 + 6,puVar1,local_res8);
    }
    else {
      *(int32_t *)puVar1 = local_res8[0];
      param_1[7] = param_1[7] + 1;
    }
  }
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  if (iVar3 == 10) {
    param_1[5] = param_1[5] + 1;
    param_1[0xd] = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
    param_1[4] = 0;
    return 0;
  }
  if (iVar3 != 0x2a) {
    if (iVar3 != 0x2f) {
      param_1[0xd] = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
      return 0;
    }
    while( true ) {
      param_1[3] = param_1[3] + 1;
      param_1[4] = param_1[4] + 1;
      if (*(char *)(param_1 + 2) == '\0') {
        uVar4 = FUN_18012e8b0((int32_t *)*param_1);
        iVar3 = (int)uVar4;
        *(int *)((longlong)param_1 + 0xc) = iVar3;
      }
      else {
        *(int32_t *)(param_1 + 2) = 0;
      }
      if (iVar3 != -1) {
        puVar1 = (int32_t *)param_1[7];
        local_res8[0] = (int32_t)iVar3;
        if (puVar1 == (int32_t *)param_1[8]) {
          FUN_1800f75a0(param_1 + 6,puVar1,local_res8);
        }
        else {
          *(int32_t *)puVar1 = local_res8[0];
          param_1[7] = param_1[7] + 1;
        }
      }
      iVar3 = *(int *)((longlong)param_1 + 0xc);
      if (iVar3 == 10) break;
      if ((iVar3 + 1U < 2) || (iVar3 == 0xd)) {
        return 1;
      }
    }
    param_1[5] = param_1[5] + 1;
    param_1[4] = 0;
    return 1;
  }
  do {
    do {
      while( true ) {
        param_1[3] = param_1[3] + 1;
        param_1[4] = param_1[4] + 1;
        if (*(char *)(param_1 + 2) == '\0') {
          uVar4 = FUN_18012e8b0((int32_t *)*param_1);
          *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
        }
        else {
          *(int32_t *)(param_1 + 2) = 0;
        }
        if (*(int *)((longlong)param_1 + 0xc) != -1) {
          puVar1 = (int32_t *)param_1[7];
          local_res8[0] = (int32_t)*(int *)((longlong)param_1 + 0xc);
          if (puVar1 == (int32_t *)param_1[8]) {
            FUN_1800f75a0(param_1 + 6,puVar1,local_res8);
          }
          else {
            *(int32_t *)puVar1 = local_res8[0];
            param_1[7] = param_1[7] + 1;
          }
        }
        iVar3 = *(int *)((longlong)param_1 + 0xc);
        if (iVar3 != 10) break;
        param_1[5] = param_1[5] + 1;
        param_1[4] = 0;
      }
      if (iVar3 + 1U < 2) {
        param_1[0xd] = "invalid comment; missing closing \'*/\'";
        return 0;
      }
    } while (iVar3 != 0x2a);
    param_1[3] = param_1[3] + 1;
    param_1[4] = param_1[4] + 1;
    if (*(char *)(param_1 + 2) == '\0') {
      uVar4 = FUN_18012e8b0((int32_t *)*param_1);
      *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
      if ((int)uVar4 != -1) goto LAB_1800ef824;
    }
    else {
      *(int32_t *)(param_1 + 2) = 0;
      uVar4 = 0x2a;
LAB_1800ef824:
      puVar1 = (int32_t *)param_1[7];
      local_res8[0] = (int32_t)uVar4;
      if (puVar1 == (int32_t *)param_1[8]) {
        FUN_1800f75a0(param_1 + 6,puVar1,local_res8);
      }
      else {
        *(int32_t *)puVar1 = local_res8[0];
        param_1[7] = param_1[7] + 1;
      }
    }
    iVar3 = *(int *)((longlong)param_1 + 0xc);
    if (iVar3 == 10) {
      param_1[5] = param_1[5] + 1;
      param_1[4] = 0;
    }
    else if (iVar3 == 0x2f) {
      return 1;
    }
    param_1[3] = param_1[3] + -1;
    *(int32_t *)(param_1 + 2) = 1;
    if (param_1[4] == 0) {
      lVar2 = param_1[5];
      if (lVar2 != 0) {
        param_1[5] = lVar2 + -1;
      }
    }
    else {
      param_1[4] = param_1[4] + -1;
    }
    if (iVar3 != -1) {
      param_1[7] = param_1[7] + -1;
    }
  } while( true );
}

// ---- Function: FUN_1800ef8c0 ----
void FUN_1800ef8c0(int32_t *param_1)

{
  uint uVar1;
  int32_t *puVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  int32_t auStack_138 [32];
  int32_t local_118 [152];
  ulonglong local_80;
  
  local_80 = DAT_1801eb080 ^ (ulonglong)auStack_138;
  param_1[0xb] = 0;
  puVar2 = param_1 + 9;
  if (0xf < (ulonglong)param_1[0xc]) {
    puVar2 = (int32_t *)param_1[9];
  }
  *(int32_t *)puVar2 = 0;
  puVar2 = (int32_t *)param_1[6];
  puVar4 = (int32_t *)param_1[7];
  if (puVar2 != (int32_t *)param_1[7]) {
    param_1[7] = puVar2;
    puVar4 = puVar2;
  }
  local_118[0] = *(int32_t *)((longlong)param_1 + 0xc);
  if (puVar4 == (int32_t *)param_1[8]) {
    FUN_1800f75a0(param_1 + 6,puVar4,local_118);
  }
  else {
    *(int32_t *)puVar4 = local_118[0];
    param_1[7] = param_1[7] + 1;
  }
  param_1[3] = param_1[3] + 1;
  param_1[4] = param_1[4] + 1;
  if (*(char *)(param_1 + 2) == '\0') {
    uVar3 = FUN_18012e8b0((int32_t *)*param_1);
    *(int *)((longlong)param_1 + 0xc) = (int)uVar3;
  }
  else {
    *(int32_t *)(param_1 + 2) = 0;
  }
  if (*(int *)((longlong)param_1 + 0xc) != -1) {
    local_118[0] = (int32_t)*(int *)((longlong)param_1 + 0xc);
    puVar2 = (int32_t *)param_1[7];
    if (puVar2 == (int32_t *)param_1[8]) {
      FUN_1800f75a0(param_1 + 6,puVar2,local_118);
    }
    else {
      *(int32_t *)puVar2 = local_118[0];
      param_1[7] = param_1[7] + 1;
    }
  }
  uVar1 = *(int *)((longlong)param_1 + 0xc) + 1;
  if (*(int *)((longlong)param_1 + 0xc) == 10) {
    param_1[5] = param_1[5] + 1;
    param_1[4] = 0;
  }
  else if (0xf5 < uVar1) {
    param_1[0xd] = "invalid string: ill-formed UTF-8 byte";
    FUN_1801252c0(local_80 ^ (ulonglong)auStack_138);
    return;
  }
                    
                    
  (*(code *)((ulonglong)
             *(uint *)(&DAT_1800f0304 + (ulonglong)(byte)(&DAT_1800f03b4)[(int)uVar1] * 4) +
            0x180000000))
            ((code *)((ulonglong)
                      *(uint *)(&DAT_1800f0304 + (ulonglong)(byte)(&DAT_1800f03b4)[(int)uVar1] * 4)
                     + 0x180000000));
  return;
}

// ---- Function: FUN_1800f0530 ----
int32_t FUN_1800f0530(int32_t *param_1,int32_t *param_2)

{
  int iVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  ulonglong uVar5;
  int32_t *puVar6;
  int *piVar7;
  byte local_res8 [8];
  
  uVar5 = param_1[0xb];
  if (uVar5 < (ulonglong)param_1[0xc]) {
    param_1[0xb] = uVar5 + 1;
    puVar6 = param_1 + 9;
    if (0xf < (ulonglong)param_1[0xc]) {
      puVar6 = (int32_t *)param_1[9];
    }
    *(int32_t *)((longlong)puVar6 + uVar5) = *(int32_t *)((longlong)param_1 + 0xc);
    *(int32_t *)((longlong)puVar6 + uVar5 + 1) = 0;
  }
  else {
    puVar6 = FUN_1800b99a0(param_1 + 9,1,(ulonglong)local_res8[0],
                           *(int32_t *)((longlong)param_1 + 0xc));
  }
  bVar4 = local_res8[0];
  piVar7 = (int *)*param_2;
  piVar2 = (int *)param_2[1];
  while( true ) {
    if (piVar7 == piVar2) {
      return CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
    }
    param_1[3] = param_1[3] + 1;
    param_1[4] = param_1[4] + 1;
    if (*(char *)(param_1 + 2) == '\0') {
      uVar5 = FUN_18012e8b0((int32_t *)*param_1);
      *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
    }
    else {
      *(int32_t *)(param_1 + 2) = 0;
    }
    if (*(int *)((longlong)param_1 + 0xc) != -1) {
      pbVar3 = (byte *)param_1[7];
      local_res8[0] = (byte)*(int *)((longlong)param_1 + 0xc);
      if (pbVar3 == (byte *)param_1[8]) {
        FUN_1800f75a0(param_1 + 6,(int32_t *)pbVar3,local_res8);
      }
      else {
        *pbVar3 = local_res8[0];
        param_1[7] = param_1[7] + 1;
      }
    }
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 == 10) {
      param_1[5] = param_1[5] + 1;
      param_1[4] = 0;
    }
    if ((iVar1 < *piVar7) || (piVar7[1] < iVar1)) break;
    uVar5 = param_1[0xb];
    if (uVar5 < (ulonglong)param_1[0xc]) {
      param_1[0xb] = uVar5 + 1;
      puVar6 = param_1 + 9;
      if (0xf < (ulonglong)param_1[0xc]) {
        puVar6 = (int32_t *)param_1[9];
      }
      *(char *)((longlong)puVar6 + uVar5) = (char)iVar1;
      *(int32_t *)((longlong)puVar6 + uVar5 + 1) = 0;
    }
    else {
      puVar6 = FUN_1800b99a0(param_1 + 9,1,(ulonglong)bVar4,(char)iVar1);
    }
    piVar7 = piVar7 + 2;
  }
  param_1[0xd] = "invalid string: ill-formed UTF-8 byte";
  return &DAT_1801d6e00;
}

// ---- Function: FUN_1800f07b0 ----
longlong FUN_1800f07b0(longlong param_1,int32_t *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int32_t uVar3;
  int32_t *puVar4;
  longlong local_58 [7];
  longlong *local_20;
  
  local_20 = (longlong *)0x0;
  plVar1 = (longlong *)param_3[7];
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 == param_3) {
      local_20 = (longlong *)(**(code **)(*plVar1 + 8))(plVar1,local_58);
      plVar1 = (longlong *)param_3[7];
      if (plVar1 == (longlong *)0x0) goto LAB_1800f0824;
      (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
      plVar1 = local_20;
    }
    local_20 = plVar1;
    param_3[7] = 0;
  }
LAB_1800f0824:
  *(int32_t *)(param_1 + 0x38) = 0;
  if (local_20 != (longlong *)0x0) {
    uVar3 = (**(code **)*local_20)(local_20,param_1);
    *(int32_t *)(param_1 + 0x38) = uVar3;
  }
  *(int32_t *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 0x48) = *param_2;
  *(int32_t *)(param_1 + 0x50) = 1;
  *(int32_t *)(param_1 + 0x54) = 0xffffffff;
  *(int32_t *)(param_1 + 0x58) = 0;
  *(int32_t *)(param_1 + 0x60) = 0;
  *(int32_t *)(param_1 + 0x68) = 0;
  *(int32_t *)(param_1 + 0x70) = 0;
  *(int32_t *)(param_1 + 0x78) = 0;
  *(int32_t *)(param_1 + 0x80) = 0;
  *(int32_t *)(param_1 + 0x88) = 0;
  *(int32_t *)(param_1 + 0x90) = 0;
  *(int32_t *)(param_1 + 0x98) = 0;
  *(int32_t *)(param_1 + 0xa0) = 0;
  *(int32_t *)(param_1 + 0xa8) = 0xf;
  *(int32_t *)(param_1 + 0x90) = 0;
  *(int32_t **)(param_1 + 0xb0) = &DAT_180187500;
  *(int32_t *)(param_1 + 0xb8) = 0;
  *(int32_t *)(param_1 + 0xc0) = 0;
  *(int32_t *)(param_1 + 200) = 0;
  puVar4 = (int32_t *)FUN_18012d604();
  if ((char *)*puVar4 == (char *)0x0) {
    cVar2 = '.';
  }
  else {
    cVar2 = *(char *)*puVar4;
  }
  *(int *)(param_1 + 0xd0) = (int)cVar2;
  *(int32_t *)(param_1 + 0xd8) = 0;
  FUN_1800ee520(param_1);
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,local_20 != local_58);
    local_20 = (longlong *)0x0;
  }
  plVar1 = (longlong *)param_3[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
    param_3[7] = 0;
  }
  return param_1;
}

// ---- Function: FUN_1800f0950 ----
void FUN_1800f0950(longlong param_1,int32_t *param_2,byte *param_3,int32_t *param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int32_t uVar8;
  longlong lVar9;
  longlong *plVar10;
  int32_t *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong unaff_RBX;
  int32_t auStack_238 [48];
  byte local_208 [8];
  longlong local_200;
  longlong local_1f8 [4];
  int32_t **local_1d8 [8];
  int32_t **local_198 [8];
  int32_t local_158 [8];
  int32_t local_150;
  int32_t local_148 [8];
  int32_t local_140;
  longlong local_138;
  ulonglong local_130;
  longlong local_128;
  ulonglong local_120;
  int32_t local_118 [16];
  int32_t local_108 [16];
  int32_t local_f8 [16];
  int32_t local_e8 [16];
  int32_t local_d8 [16];
  int32_t local_c8;
  ulonglong uStack_c0;
  int32_t local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  int32_t uStack_a0;
  int32_t local_98;
  longlong local_88 [4];
  longlong local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_1801eb080 ^ (ulonglong)auStack_238;
  local_1f8[0] = 0;
  local_1f8[1] = 0;
  local_1f8[2] = 0;
  local_1f8[3] = 0;
LAB_1800f09b0:
  cVar5 = (char)param_4;
  switch(*(int32_t *)(param_1 + 0x40)) {
  default:
    uStack_c0 = 0;
    local_b8 = _DAT_1801d8fa0;
    uStack_b0 = _UNK_1801d8fa8;
    local_c8._0_5_ = CONCAT14(s_value_1801d7d24[4],s_value_1801d7d24._0_4_);
    local_c8 = (LPVOID)(ulonglong)(uint5)local_c8;
    plVar13 = local_68;
    puVar11 = (int32_t *)FUN_1800ee000(param_1,plVar13,0x10,&local_c8);
    lVar9 = param_1 + 0x48;
    local_a8 = *(longlong *)(param_1 + 0x60);
    uStack_a0 = *(int32_t *)(param_1 + 0x68);
    local_98 = *(int32_t *)(param_1 + 0x70);
    param_1 = FUN_1800f7c00(local_1d8,plVar13,&local_a8,puVar11);
    FUN_1800ee7b0(lVar9,local_88);
    *(int32_t *)(param_2 + 0xd) = 1;
    if (*(char *)(param_2 + 0x16) != '\0') {
      FUN_1800f7e80(local_198,param_1);
      FUN_1801279a8((longlong *)local_198,&DAT_1801e9198);
LAB_1800f15ef:
      FUN_1800f7e80(local_1d8,lVar9);
      FUN_1801279a8((longlong *)local_1d8,&DAT_1801e9198);
LAB_1800f160e:
      FUN_1800f7e80(local_198,param_1);
      FUN_1801279a8((longlong *)local_198,&DAT_1801e9198);
LAB_1800f162b:
      FUN_180123318();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_1800a6800(local_88);
    FUN_1800f7000(local_1d8);
    FUN_1800a6800(local_68);
LAB_1800f157d:
    if (0xf < uStack_b0) {
      FUN_1800ba930(&local_c8,local_c8,uStack_b0);
    }
LAB_1800f1599:
    FUN_1800ba2f0(local_1f8);
    FUN_1801252c0(local_30 ^ (ulonglong)auStack_238);
    return;
  case 1:
    local_208[0] = 1;
    FUN_1800f47c0(param_2,local_e8,local_208,cVar5);
    break;
  case 2:
    local_208[0] = 0;
    FUN_1800f47c0(param_2,local_108,local_208,cVar5);
    break;
  case 3:
    FUN_1800f4480(param_2,local_f8,param_3,cVar5);
    break;
  case 4:
    FUN_1800f3e40(param_2,(int32_t *)local_68,(int32_t *)(param_1 + 0x90),cVar5);
    break;
  case 5:
    local_200 = *(longlong *)(param_1 + 0xc0);
    FUN_1800f3b30(param_2,(int32_t *)local_88,&local_200,cVar5);
    break;
  case 6:
    local_200 = *(longlong *)(param_1 + 0xb8);
    FUN_1800f4170(param_2,local_d8,&local_200,cVar5);
    break;
  case 7:
    lVar9 = *(longlong *)(param_1 + 200);
    sVar6 = _dclass(lVar9);
    if (sVar6 < 1) {
      local_200 = lVar9;
      FUN_1800f4ad0(param_2,local_118,&local_200,(char)param_4);
      break;
    }
    local_208[0] = 0x27;
    unaff_RBX = param_1 + 0x48;
    plVar13 = local_88;
    puVar11 = (int32_t *)FUN_1800ee7b0(unaff_RBX,plVar13);
    plVar10 = FUN_1800f4de0(&local_c8,(ulonglong)plVar13,puVar11,local_208);
    param_1 = FUN_1800f4ed0(local_1d8,plVar13,plVar10);
    FUN_1800ee7b0(unaff_RBX,&local_a8);
    *(int32_t *)(param_2 + 0xd) = 1;
    if (*(char *)(param_2 + 0x16) != '\0') {
LAB_1800f1637:
      FUN_1800f70a0(local_68,param_1);
      FUN_1801279a8(local_68,&DAT_1801e9130);
LAB_1800f165a:
      FUN_1800f7e80(local_198,param_1);
      FUN_1801279a8((longlong *)local_198,&DAT_1801e9198);
LAB_1800f1677:
      FUN_1800f7e80(local_198,param_1);
      FUN_1801279a8((longlong *)local_198,&DAT_1801e9198);
      goto LAB_1800f1694;
    }
    FUN_1800a6800(&local_a8);
    FUN_1800f7000(local_1d8);
    FUN_1800a6800(&local_c8);
    FUN_1800a6800(local_88);
    goto LAB_1800f1599;
  case 8:
    local_208[0] = 2;
    local_200 = CONCAT44(local_200._4_4_,(int)((longlong)(param_2[2] - param_2[1]) >> 3));
    plVar13 = (longlong *)param_2[0x15];
    if (plVar13 == (longlong *)0x0) {
      FUN_180123318();
      goto LAB_1800f1637;
    }
    param_4 = param_2 + 0x17;
    local_208[0] = (**(code **)(*plVar13 + 0x10))(plVar13,&local_200,local_208);
    FUN_1800f8400(param_2 + 4,(char *)local_208);
    local_208[0] = 2;
    param_3 = local_208;
    FUN_1800f6cf0(param_2,local_148,(char *)param_3);
    puVar11 = (int32_t *)param_2[2];
    if (puVar11 == (int32_t *)param_2[3]) {
      param_3 = (byte *)&local_140;
      FUN_1800cac80(param_2 + 1,puVar11,(int32_t *)param_3);
    }
    else {
      *puVar11 = local_140;
      param_2[2] = param_2[2] + 8;
    }
    iVar7 = FUN_1800ee520(param_1);
    if (iVar7 != 10) {
      local_208[0] = 1;
      FUN_1800f8400(local_1f8,(char *)local_208);
      goto LAB_1800f09b0;
    }
    uVar8 = FUN_1800f5090((longlong)param_2);
    if ((char)uVar8 == '\0') goto LAB_1800f1599;
    break;
  case 9:
    local_208[0] = 0;
    local_200 = CONCAT44(local_200._4_4_,(int)((longlong)(param_2[2] - param_2[1]) >> 3));
    plVar13 = (longlong *)param_2[0x15];
    if (plVar13 == (longlong *)0x0) goto LAB_1800f162b;
    param_4 = param_2 + 0x17;
    local_208[0] = (**(code **)(*plVar13 + 0x10))(plVar13,&local_200,local_208);
    FUN_1800f8400(param_2 + 4,(char *)local_208);
    local_208[0] = 1;
    param_3 = local_208;
    FUN_1800f6cf0(param_2,local_158,(char *)param_3);
    puVar11 = (int32_t *)param_2[2];
    if (puVar11 == (int32_t *)param_2[3]) {
      param_3 = (byte *)&local_150;
      FUN_1800cac80(param_2 + 1,puVar11,(int32_t *)param_3);
    }
    else {
      *puVar11 = local_150;
      param_2[2] = param_2[2] + 8;
    }
    iVar7 = FUN_1800ee520(param_1);
    if (iVar7 == 0xb) {
      cVar5 = FUN_1800f6360((longlong)param_2);
      if (cVar5 != '\0') break;
      goto LAB_1800f1599;
    }
    if (*(int *)(param_1 + 0x40) == 4) {
      uVar8 = FUN_1800f5340((longlong)param_2,(int32_t *)(param_1 + 0x90));
      if ((char)uVar8 == '\0') goto LAB_1800f1599;
      iVar7 = FUN_1800ee520(param_1);
      if (iVar7 == 0xc) goto code_r0x0001800f0aa7;
      local_c8 = (LPVOID)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_1800ba360(&local_c8,(int32_t *)"object separator",0x10);
      plVar13 = local_68;
      puVar11 = (int32_t *)FUN_1800ee000(param_1,plVar13,0xc,&local_c8);
      local_a8 = *(longlong *)(param_1 + 0x60);
      uStack_a0 = *(int32_t *)(param_1 + 0x68);
      local_98 = *(int32_t *)(param_1 + 0x70);
      lVar9 = FUN_1800f7c00(local_198,plVar13,&local_a8,puVar11);
      FUN_1800ee7b0(param_1 + 0x48,local_88);
      *(int32_t *)(param_2 + 0xd) = 1;
      if (*(char *)(param_2 + 0x16) != '\0') goto LAB_1800f15ef;
      FUN_1800a6800(local_88);
      FUN_1800f7000(local_198);
      FUN_1800a6800(local_68);
    }
    else {
      local_b8 = _DAT_1801d8ff0;
      uStack_b0 = _UNK_1801d8ff8;
      local_c8 = (LPVOID)s_object_key_1801d6960._0_8_;
      uStack_c0 = (ulonglong)(ushort)s_object_key_1801d6960._8_2_;
      plVar13 = local_68;
      puVar11 = (int32_t *)FUN_1800ee000(param_1,plVar13,4,&local_c8);
      lVar9 = param_1 + 0x48;
      local_a8 = *(longlong *)(param_1 + 0x60);
      uStack_a0 = *(int32_t *)(param_1 + 0x68);
      local_98 = *(int32_t *)(param_1 + 0x70);
      param_1 = FUN_1800f7c00(local_1d8,plVar13,&local_a8,puVar11);
      FUN_1800ee7b0(lVar9,local_88);
      *(int32_t *)(param_2 + 0xd) = 1;
      if (*(char *)(param_2 + 0x16) != '\0') goto LAB_1800f160e;
      FUN_1800a6800(local_88);
      FUN_1800f7000(local_1d8);
      FUN_1800a6800(local_68);
    }
    goto LAB_1800f157d;
  case 0xe:
    uStack_c0 = 0;
    local_b8 = _DAT_1801d8fa0;
    uStack_b0 = _UNK_1801d8fa8;
    local_c8._0_5_ = CONCAT14(s_value_1801d7d24[4],s_value_1801d7d24._0_4_);
    local_c8 = (LPVOID)(ulonglong)(uint5)local_c8;
    plVar13 = local_68;
    puVar11 = (int32_t *)FUN_1800ee000(param_1,plVar13,0,&local_c8);
    lVar9 = param_1 + 0x48;
    local_a8 = *(longlong *)(param_1 + 0x60);
    uStack_a0 = *(int32_t *)(param_1 + 0x68);
    local_98 = *(int32_t *)(param_1 + 0x70);
    param_1 = FUN_1800f7c00(local_1d8,plVar13,&local_a8,puVar11);
    FUN_1800ee7b0(lVar9,local_88);
    *(int32_t *)(param_2 + 0xd) = 1;
    if (*(char *)(param_2 + 0x16) != '\0') goto LAB_1800f16ce;
    FUN_1800a6800(local_88);
    FUN_1800f7000(local_1d8);
    FUN_1800a6800(local_68);
    goto LAB_1800f157d;
  }
  while( true ) {
    while( true ) {
      if (local_1f8[3] == 0) goto LAB_1800f1599;
      if ((local_1f8[3] < 0) && (local_1f8[3] != 0)) {
        lVar9 = -(((ulonglong)~local_1f8[3] >> 5) * 4 + 4);
      }
      else {
        lVar9 = ((ulonglong)local_1f8[3] >> 5) * 4;
      }
      param_3 = (byte *)(ulonglong)((uint)local_1f8[3] & 0x1f);
      pbVar1 = param_3 + -1;
      if (param_3 == (byte *)0x0) {
        lVar3 = -((~(ulonglong)pbVar1 >> 5) * 4 + 4);
      }
      else {
        lVar3 = ((ulonglong)pbVar1 >> 5) * 4;
      }
      if ((*(uint *)(local_1f8[0] + lVar9 + lVar3) >> ((byte)pbVar1 & 0x1f) & 1) == 0) break;
      iVar7 = FUN_1800ee520(param_1);
      if (iVar7 == 0xd) goto LAB_1800f0e97;
      if (*(int *)(param_1 + 0x40) != 10) {
        uStack_c0 = 0;
        local_b8 = _DAT_1801d8fa0;
        uStack_b0 = _UNK_1801d8fa8;
        local_c8._0_5_ = CONCAT14(s_array_1801d7cf0[4],s_array_1801d7cf0._0_4_);
        local_c8 = (LPVOID)(ulonglong)(uint5)local_c8;
        plVar13 = local_68;
        puVar11 = (int32_t *)FUN_1800ee000(param_1,plVar13,10,&local_c8);
        unaff_RBX = param_1 + 0x48;
        local_a8 = *(longlong *)(param_1 + 0x60);
        uStack_a0 = *(int32_t *)(param_1 + 0x68);
        local_98 = *(int32_t *)(param_1 + 0x70);
        param_1 = FUN_1800f7c00(local_1d8,plVar13,&local_a8,puVar11);
        FUN_1800ee7b0(unaff_RBX,local_88);
        *(int32_t *)(param_2 + 0xd) = 1;
        if (*(char *)(param_2 + 0x16) != '\0') goto LAB_1800f165a;
        FUN_1800a6800(local_88);
        FUN_1800f7000(local_1d8);
        FUN_1800a6800(local_68);
        goto LAB_1800f1246;
      }
      uVar8 = FUN_1800f5090((longlong)param_2);
      if ((char)uVar8 == '\0') goto LAB_1800f1599;
      if ((local_1f8[3] < 0) && (local_1f8[3] != 0)) {
        lVar9 = -(((ulonglong)~local_1f8[3] >> 5) * 4 + 4);
      }
      else {
        lVar9 = ((ulonglong)local_1f8[3] >> 5) * 4;
      }
      uVar12 = (ulonglong)((uint)local_1f8[3] & 0x1f);
      uVar2 = uVar12 - 1;
      local_130 = (ulonglong)((uint)uVar2 & 0x1f);
      if (uVar12 == 0) {
        local_138 = -((~uVar2 >> 5) * 4 + 4);
      }
      else {
        local_138 = (uVar2 >> 5) * 4;
      }
      local_138 = local_1f8[0] + lVar9 + local_138;
      FUN_1800f6a40(local_1f8,&local_c8,&local_138);
    }
    iVar7 = FUN_1800ee520(param_1);
    if (iVar7 == 0xd) break;
    if (*(int *)(param_1 + 0x40) != 0xb) {
      uStack_c0 = 0;
      local_b8 = _DAT_1801d8fb0;
      uStack_b0 = _UNK_1801d8fb8;
      local_c8 = (LPVOID)(ulonglong)CONCAT24(s_object_1801d7ce8._4_2_,s_object_1801d7ce8._0_4_);
      plVar13 = local_68;
      puVar11 = (int32_t *)FUN_1800ee000(param_1,plVar13,0xb,&local_c8);
      unaff_RBX = param_1 + 0x48;
      local_a8 = *(longlong *)(param_1 + 0x60);
      uStack_a0 = *(int32_t *)(param_1 + 0x68);
      local_98 = *(int32_t *)(param_1 + 0x70);
      param_1 = FUN_1800f7c00(local_1d8,plVar13,&local_a8,puVar11);
      FUN_1800ee7b0(unaff_RBX,local_88);
      *(int32_t *)(param_2 + 0xd) = 1;
      if (*(char *)(param_2 + 0x16) != '\0') goto LAB_1800f1677;
      FUN_1800a6800(local_88);
      FUN_1800f7000(local_1d8);
      FUN_1800a6800(local_68);
      goto LAB_1800f1246;
    }
    cVar5 = FUN_1800f6360((longlong)param_2);
    if (cVar5 == '\0') goto LAB_1800f1599;
    if ((local_1f8[3] < 0) && (local_1f8[3] != 0)) {
      lVar9 = -(((ulonglong)~local_1f8[3] >> 5) * 4 + 4);
    }
    else {
      lVar9 = ((ulonglong)local_1f8[3] >> 5) * 4;
    }
    uVar12 = (ulonglong)((uint)local_1f8[3] & 0x1f);
    uVar2 = uVar12 - 1;
    local_120 = (ulonglong)((uint)uVar2 & 0x1f);
    if (uVar12 == 0) {
      local_128 = -((~uVar2 >> 5) * 4 + 4);
    }
    else {
      local_128 = (uVar2 >> 5) * 4;
    }
    local_128 = local_1f8[0] + lVar9 + local_128;
    FUN_1800f6a40(local_1f8,&local_a8,&local_128);
  }
  iVar7 = FUN_1800ee520(param_1);
  if (iVar7 == 4) {
    uVar8 = FUN_1800f5340((longlong)param_2,(int32_t *)(param_1 + 0x90));
    if ((char)uVar8 == '\0') goto LAB_1800f1599;
    iVar7 = FUN_1800ee520(param_1);
    if (iVar7 == 0xc) {
LAB_1800f0e97:
      FUN_1800ee520(param_1);
      goto LAB_1800f09b0;
    }
    local_c8 = (LPVOID)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_1800ba360(&local_c8,(int32_t *)"object separator",0x10);
    plVar13 = local_68;
    puVar11 = (int32_t *)FUN_1800ee000(param_1,plVar13,0xc,&local_c8);
    local_a8 = *(longlong *)(param_1 + 0x60);
    uStack_a0 = *(int32_t *)(param_1 + 0x68);
    local_98 = *(int32_t *)(param_1 + 0x70);
    unaff_RBX = FUN_1800f7c00(local_1d8,plVar13,&local_a8,puVar11);
    FUN_1800ee7b0(param_1 + 0x48,local_88);
    *(int32_t *)(param_2 + 0xd) = 1;
    if (*(char *)(param_2 + 0x16) != '\0') {
LAB_1800f1694:
      FUN_1800f7e80(local_198,unaff_RBX);
      FUN_1801279a8((longlong *)local_198,&DAT_1801e9198);
      goto LAB_1800f16b1;
    }
    FUN_1800a6800(local_88);
    FUN_1800f7000(local_1d8);
    FUN_1800a6800(local_68);
  }
  else {
    local_b8 = _DAT_1801d8ff0;
    uStack_b0 = _UNK_1801d8ff8;
    local_c8 = (LPVOID)s_object_key_1801d6960._0_8_;
    uStack_c0 = (ulonglong)(ushort)s_object_key_1801d6960._8_2_;
    plVar13 = local_68;
    puVar11 = (int32_t *)FUN_1800ee000(param_1,plVar13,4,&local_c8);
    lVar9 = param_1 + 0x48;
    local_a8 = *(longlong *)(param_1 + 0x60);
    uStack_a0 = *(int32_t *)(param_1 + 0x68);
    local_98 = *(int32_t *)(param_1 + 0x70);
    param_1 = FUN_1800f7c00(local_1d8,plVar13,&local_a8,puVar11);
    FUN_1800ee7b0(lVar9,local_88);
    *(int32_t *)(param_2 + 0xd) = 1;
    if (*(char *)(param_2 + 0x16) != '\0') {
LAB_1800f16b1:
      FUN_1800f7e80(local_198,param_1);
      FUN_1801279a8((longlong *)local_198,&DAT_1801e9198);
LAB_1800f16ce:
      FUN_1800f7e80(local_198,param_1);
      FUN_1801279a8((longlong *)local_198,&DAT_1801e9198);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_1800a6800(local_88);
    FUN_1800f7000(local_1d8);
    FUN_1800a6800(local_68);
  }
LAB_1800f1246:
  if (0xf < uStack_b0) {
    FUN_1800ba930(&local_c8,local_c8,uStack_b0);
  }
  goto LAB_1800f1599;
code_r0x0001800f0aa7:
  local_208[0] = 0;
  FUN_1800f8400(local_1f8,(char *)local_208);
  FUN_1800ee520(param_1);
  goto LAB_1800f09b0;
}

// ---- Function: FUN_1800f1730 ----
void FUN_1800f1730(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  int32_t *puVar5;
  code *pcVar6;
  short sVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int32_t *puVar12;
  ulonglong uVar13;
  int32_t auStack_1d8 [48];
  char local_1a8 [8];
  longlong local_1a0;
  longlong local_198 [4];
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  int32_t **local_158 [8];
  int32_t **local_118 [8];
  int32_t local_d8;
  ulonglong uStack_d0;
  int32_t local_c8;
  ulonglong uStack_c0;
  longlong local_b8;
  int32_t uStack_b0;
  int32_t local_a8;
  longlong local_98;
  ulonglong local_90;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_38;
  
  local_38 = DAT_1801eb080 ^ (ulonglong)auStack_1d8;
  local_198[0] = 0;
  local_198[1] = 0;
  local_198[2] = 0;
  local_198[3] = 0;
LAB_1800f1790:
  switch(*(int32_t *)(param_1 + 0x40)) {
  default:
    uStack_d0 = 0;
    local_c8 = _DAT_1801d8fa0;
    uStack_c0 = _UNK_1801d8fa8;
    local_d8._0_5_ = CONCAT14(s_value_1801d7d24[4],s_value_1801d7d24._0_4_);
    local_d8 = (LPVOID)(ulonglong)(uint5)local_d8;
    plVar9 = &local_78;
    puVar12 = (int32_t *)FUN_1800ee000(param_1,plVar9,0x10,&local_d8);
    lVar11 = param_1 + 0x48;
    local_b8 = *(longlong *)(param_1 + 0x60);
    uStack_b0 = *(int32_t *)(param_1 + 0x68);
    local_a8 = *(int32_t *)(param_1 + 0x70);
    param_1 = FUN_1800f7c00(local_158,plVar9,&local_b8,puVar12);
    FUN_1800ee7b0(lVar11,&local_98);
    *(int32_t *)(param_2 + 5) = 1;
    if (*(char *)((longlong)param_2 + 0x29) != '\0') {
      FUN_1800f7e80(local_118,param_1);
      FUN_1801279a8((longlong *)local_118,&DAT_1801e9198);
LAB_1800f22ae:
      FUN_1800f7e80(local_158,lVar11);
      FUN_1801279a8((longlong *)local_158,&DAT_1801e9198);
LAB_1800f22cb:
      FUN_1800f7e80(local_118,param_1);
      FUN_1801279a8((longlong *)local_118,&DAT_1801e9198);
LAB_1800f22e8:
      FUN_1800f70a0(&local_78,param_1);
      FUN_1801279a8(&local_78,&DAT_1801e9130);
LAB_1800f2305:
      FUN_1800f7e80(local_118,param_1);
      FUN_1801279a8((longlong *)local_118,&DAT_1801e9198);
LAB_1800f2322:
      FUN_1800f7e80(local_118,param_1);
      FUN_1801279a8((longlong *)local_118,&DAT_1801e9198);
LAB_1800f233f:
      FUN_1800f7e80(local_118,lVar11);
      FUN_1801279a8((longlong *)local_118,&DAT_1801e9198);
LAB_1800f235c:
      FUN_1800f7e80(local_118,param_1);
      FUN_1801279a8((longlong *)local_118,&DAT_1801e9198);
LAB_1800f2379:
      FUN_1800f7e80(local_118,param_1);
      FUN_1801279a8((longlong *)local_118,&DAT_1801e9198);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FUN_1800a6800(&local_98);
    FUN_1800f7000(local_158);
    FUN_1800a6800(&local_78);
LAB_1800f223f:
    if (0xf < uStack_c0) {
      FUN_1800ba930(&local_d8,local_d8,uStack_c0);
    }
LAB_1800f2258:
    FUN_1800ba2f0(local_198);
    FUN_1801252c0(local_38 ^ (ulonglong)auStack_1d8);
    return;
  case 1:
    local_1a8[0] = '\x01';
    FUN_1800f3380(param_2,local_1a8);
    break;
  case 2:
    local_1a8[0] = '\0';
    FUN_1800f3380(param_2,local_1a8);
    break;
  case 3:
    if (param_2[1] == param_2[2]) {
      local_178 = '\0';
      FUN_1800f8a10(&local_170,'\0');
      pcVar4 = (char *)*param_2;
      cVar3 = *pcVar4;
      *pcVar4 = local_178;
      lVar11 = *(longlong *)(pcVar4 + 8);
      *(longlong *)(pcVar4 + 8) = local_170;
      local_178 = cVar3;
      local_170 = lVar11;
      FUN_1800f9a90(&local_170,cVar3);
    }
    else {
      pcVar4 = *(char **)(param_2[2] + -8);
      if (*pcVar4 == '\x02') {
        plVar9 = *(longlong **)(pcVar4 + 8);
        puVar5 = (int32_t *)plVar9[1];
        if (puVar5 == (int32_t *)plVar9[2]) {
          FUN_1800f2fb0(plVar9,puVar5);
        }
        else {
          *puVar5 = 0;
          FUN_1800f8a10((int32_t *)(puVar5 + 8),'\0');
          plVar9[1] = plVar9[1] + 0x10;
        }
      }
      else {
        local_168 = '\0';
        FUN_1800f8a10(&local_160,'\0');
        pcVar4 = (char *)param_2[4];
        cVar3 = *pcVar4;
        *pcVar4 = local_168;
        lVar11 = *(longlong *)(pcVar4 + 8);
        *(longlong *)(pcVar4 + 8) = local_160;
        local_168 = cVar3;
        local_160 = lVar11;
        FUN_1800f9a90(&local_160,cVar3);
      }
    }
    break;
  case 4:
    FUN_1800f2af0(param_2,(int32_t *)(param_1 + 0x90));
    break;
  case 5:
    local_1a0 = *(longlong *)(param_1 + 0xc0);
    FUN_1800f2780(param_2,&local_1a0);
    break;
  case 6:
    local_1a0 = *(longlong *)(param_1 + 0xb8);
    FUN_1800f2e80(param_2,&local_1a0);
    break;
  case 7:
    lVar11 = *(longlong *)(param_1 + 200);
    sVar7 = _dclass(lVar11);
    if (0 < sVar7) {
      local_1a8[0] = '\'';
      lVar11 = param_1 + 0x48;
      plVar9 = &local_98;
      puVar12 = (int32_t *)FUN_1800ee7b0(lVar11,plVar9);
      plVar10 = FUN_1800f4de0(&local_d8,(ulonglong)plVar9,puVar12,local_1a8);
      param_1 = FUN_1800f4ed0(local_158,plVar9,plVar10);
      FUN_1800ee7b0(lVar11,&local_b8);
      *(int32_t *)(param_2 + 5) = 1;
      if (*(char *)((longlong)param_2 + 0x29) != '\0') goto LAB_1800f22e8;
      FUN_1800a6800(&local_b8);
      FUN_1800f7000(local_158);
      FUN_1800a6800(&local_d8);
      FUN_1800a6800(&local_98);
      goto LAB_1800f2258;
    }
    local_1a0 = lVar11;
    FUN_1800f36e0(param_2,&local_1a0);
    break;
  case 8:
    local_1a8[0] = '\x02';
    local_1a0 = FUN_1800f3a20(param_2,local_1a8);
    plVar9 = (longlong *)param_2[2];
    if (plVar9 == (longlong *)param_2[3]) {
      FUN_1800cac80(param_2 + 1,plVar9,&local_1a0);
    }
    else {
      *plVar9 = local_1a0;
      param_2[2] = param_2[2] + 8;
    }
    iVar8 = FUN_1800ee520(param_1);
    if (iVar8 != 10) {
      local_1a8[0] = '\x01';
      FUN_1800f8400(local_198,local_1a8);
      goto LAB_1800f1790;
    }
    param_2[2] = param_2[2] + -8;
    break;
  case 9:
    local_1a8[0] = '\x01';
    local_1a0 = FUN_1800f3a20(param_2,local_1a8);
    plVar9 = (longlong *)param_2[2];
    if (plVar9 == (longlong *)param_2[3]) {
      FUN_1800cac80(param_2 + 1,plVar9,&local_1a0);
    }
    else {
      *plVar9 = local_1a0;
      param_2[2] = param_2[2] + 8;
    }
    iVar8 = FUN_1800ee520(param_1);
    if (iVar8 == 0xb) {
      param_2[2] = param_2[2] + -8;
      break;
    }
    if (*(int *)(param_1 + 0x40) == 4) {
      plVar9 = FUN_1800f5210(*(longlong **)(*(longlong *)(param_2[2] + -8) + 8),
                             (int32_t *)(param_1 + 0x90));
      param_2[4] = (longlong)plVar9;
      iVar8 = FUN_1800ee520(param_1);
      if (iVar8 == 0xc) goto code_r0x0001800f1831;
      local_d8 = (LPVOID)0x0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      FUN_1800ba360(&local_d8,(int32_t *)"object separator",0x10);
      plVar9 = &local_78;
      puVar12 = (int32_t *)FUN_1800ee000(param_1,plVar9,0xc,&local_d8);
      local_b8 = *(longlong *)(param_1 + 0x60);
      uStack_b0 = *(int32_t *)(param_1 + 0x68);
      local_a8 = *(int32_t *)(param_1 + 0x70);
      lVar11 = FUN_1800f7c00(local_118,plVar9,&local_b8,puVar12);
      FUN_1800ee7b0(param_1 + 0x48,&local_98);
      *(int32_t *)(param_2 + 5) = 1;
      if (*(char *)((longlong)param_2 + 0x29) != '\0') goto LAB_1800f22ae;
      FUN_1800a6800(&local_98);
      FUN_1800f7000(local_118);
      FUN_1800a6800(&local_78);
    }
    else {
      local_c8 = _DAT_1801d8ff0;
      uStack_c0 = _UNK_1801d8ff8;
      local_d8 = (LPVOID)s_object_key_1801d6960._0_8_;
      uStack_d0 = (ulonglong)(ushort)s_object_key_1801d6960._8_2_;
      plVar9 = &local_78;
      puVar12 = (int32_t *)FUN_1800ee000(param_1,plVar9,4,&local_d8);
      lVar11 = param_1 + 0x48;
      local_b8 = *(longlong *)(param_1 + 0x60);
      uStack_b0 = *(int32_t *)(param_1 + 0x68);
      local_a8 = *(int32_t *)(param_1 + 0x70);
      param_1 = FUN_1800f7c00(local_158,plVar9,&local_b8,puVar12);
      FUN_1800ee7b0(lVar11,&local_98);
      *(int32_t *)(param_2 + 5) = 1;
      if (*(char *)((longlong)param_2 + 0x29) != '\0') goto LAB_1800f22cb;
      FUN_1800a6800(&local_98);
      FUN_1800f7000(local_158);
      FUN_1800a6800(&local_78);
    }
    goto LAB_1800f223f;
  case 0xe:
    uStack_d0 = 0;
    local_c8 = _DAT_1801d8fa0;
    uStack_c0 = _UNK_1801d8fa8;
    local_d8._0_5_ = CONCAT14(s_value_1801d7d24[4],s_value_1801d7d24._0_4_);
    local_d8 = (LPVOID)(ulonglong)(uint5)local_d8;
    plVar9 = &local_78;
    puVar12 = (int32_t *)FUN_1800ee000(param_1,plVar9,0,&local_d8);
    lVar11 = param_1 + 0x48;
    local_b8 = *(longlong *)(param_1 + 0x60);
    uStack_b0 = *(int32_t *)(param_1 + 0x68);
    local_a8 = *(int32_t *)(param_1 + 0x70);
    param_1 = FUN_1800f7c00(local_158,plVar9,&local_b8,puVar12);
    FUN_1800ee7b0(lVar11,&local_98);
    *(int32_t *)(param_2 + 5) = 1;
    if (*(char *)((longlong)param_2 + 0x29) != '\0') goto LAB_1800f2379;
    FUN_1800a6800(&local_98);
    FUN_1800f7000(local_158);
    FUN_1800a6800(&local_78);
    goto LAB_1800f223f;
  }
  while( true ) {
    while( true ) {
      if (local_198[3] == 0) goto LAB_1800f2258;
      if ((local_198[3] < 0) && (local_198[3] != 0)) {
        lVar11 = -(((ulonglong)~local_198[3] >> 5) * 4 + 4);
      }
      else {
        lVar11 = ((ulonglong)local_198[3] >> 5) * 4;
      }
      uVar13 = (ulonglong)((uint)local_198[3] & 0x1f);
      uVar1 = uVar13 - 1;
      if (uVar13 == 0) {
        lVar2 = -((~uVar1 >> 5) * 4 + 4);
      }
      else {
        lVar2 = (uVar1 >> 5) * 4;
      }
      if ((*(uint *)(local_198[0] + lVar11 + lVar2) >> ((byte)uVar1 & 0x1f) & 1) == 0) break;
      iVar8 = FUN_1800ee520(param_1);
      if (iVar8 == 0xd) goto LAB_1800f1c53;
      if (*(int *)(param_1 + 0x40) != 10) {
        uStack_d0 = 0;
        local_c8 = _DAT_1801d8fa0;
        uStack_c0 = _UNK_1801d8fa8;
        local_d8._0_5_ = CONCAT14(s_array_1801d7cf0[4],s_array_1801d7cf0._0_4_);
        local_d8 = (LPVOID)(ulonglong)(uint5)local_d8;
        plVar9 = &local_78;
        puVar12 = (int32_t *)FUN_1800ee000(param_1,plVar9,10,&local_d8);
        lVar11 = param_1 + 0x48;
        local_b8 = *(longlong *)(param_1 + 0x60);
        uStack_b0 = *(int32_t *)(param_1 + 0x68);
        local_a8 = *(int32_t *)(param_1 + 0x70);
        param_1 = FUN_1800f7c00(local_158,plVar9,&local_b8,puVar12);
        FUN_1800ee7b0(lVar11,&local_98);
        *(int32_t *)(param_2 + 5) = 1;
        if (*(char *)((longlong)param_2 + 0x29) != '\0') goto LAB_1800f2305;
        FUN_1800a6800(&local_98);
        FUN_1800f7000(local_158);
        FUN_1800a6800(&local_78);
        goto LAB_1800f1f7f;
      }
      param_2[2] = param_2[2] + -8;
      if ((local_198[3] < 0) && (local_198[3] != 0)) {
        lVar11 = -(((ulonglong)~local_198[3] >> 5) * 4 + 4);
      }
      else {
        lVar11 = ((ulonglong)local_198[3] >> 5) * 4;
      }
      uVar13 = (ulonglong)((uint)local_198[3] & 0x1f);
      uVar1 = uVar13 - 1;
      local_70 = (ulonglong)((uint)uVar1 & 0x1f);
      if (uVar13 == 0) {
        local_78 = -((~uVar1 >> 5) * 4 + 4);
      }
      else {
        local_78 = (uVar1 >> 5) * 4;
      }
      local_78 = local_198[0] + lVar11 + local_78;
      FUN_1800f6a40(local_198,&local_d8,&local_78);
    }
    iVar8 = FUN_1800ee520(param_1);
    if (iVar8 == 0xd) break;
    if (*(int *)(param_1 + 0x40) != 0xb) {
      uStack_d0 = 0;
      local_c8 = _DAT_1801d8fb0;
      uStack_c0 = _UNK_1801d8fb8;
      local_d8 = (LPVOID)(ulonglong)CONCAT24(s_object_1801d7ce8._4_2_,s_object_1801d7ce8._0_4_);
      plVar9 = &local_78;
      puVar12 = (int32_t *)FUN_1800ee000(param_1,plVar9,0xb,&local_d8);
      lVar11 = param_1 + 0x48;
      local_b8 = *(longlong *)(param_1 + 0x60);
      uStack_b0 = *(int32_t *)(param_1 + 0x68);
      local_a8 = *(int32_t *)(param_1 + 0x70);
      param_1 = FUN_1800f7c00(local_158,plVar9,&local_b8,puVar12);
      FUN_1800ee7b0(lVar11,&local_98);
      *(int32_t *)(param_2 + 5) = 1;
      if (*(char *)((longlong)param_2 + 0x29) != '\0') goto LAB_1800f2322;
      FUN_1800a6800(&local_98);
      FUN_1800f7000(local_158);
      FUN_1800a6800(&local_78);
      goto LAB_1800f1f7f;
    }
    param_2[2] = param_2[2] + -8;
    if ((local_198[3] < 0) && (local_198[3] != 0)) {
      lVar11 = -(((ulonglong)~local_198[3] >> 5) * 4 + 4);
    }
    else {
      lVar11 = ((ulonglong)local_198[3] >> 5) * 4;
    }
    uVar13 = (ulonglong)((uint)local_198[3] & 0x1f);
    uVar1 = uVar13 - 1;
    local_90 = (ulonglong)((uint)uVar1 & 0x1f);
    if (uVar13 == 0) {
      local_98 = -((~uVar1 >> 5) * 4 + 4);
    }
    else {
      local_98 = (uVar1 >> 5) * 4;
    }
    local_98 = local_198[0] + lVar11 + local_98;
    FUN_1800f6a40(local_198,&local_b8,&local_98);
  }
  iVar8 = FUN_1800ee520(param_1);
  if (iVar8 == 4) {
    plVar9 = FUN_1800f5210(*(longlong **)(*(longlong *)(param_2[2] + -8) + 8),
                           (int32_t *)(param_1 + 0x90));
    param_2[4] = (longlong)plVar9;
    iVar8 = FUN_1800ee520(param_1);
    if (iVar8 == 0xc) {
LAB_1800f1c53:
      FUN_1800ee520(param_1);
      goto LAB_1800f1790;
    }
    local_d8 = (LPVOID)0x0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    FUN_1800ba360(&local_d8,(int32_t *)"object separator",0x10);
    plVar9 = &local_78;
    puVar12 = (int32_t *)FUN_1800ee000(param_1,plVar9,0xc,&local_d8);
    local_b8 = *(longlong *)(param_1 + 0x60);
    uStack_b0 = *(int32_t *)(param_1 + 0x68);
    local_a8 = *(int32_t *)(param_1 + 0x70);
    lVar11 = FUN_1800f7c00(local_158,plVar9,&local_b8,puVar12);
    FUN_1800ee7b0(param_1 + 0x48,&local_98);
    *(int32_t *)(param_2 + 5) = 1;
    if (*(char *)((longlong)param_2 + 0x29) != '\0') goto LAB_1800f233f;
    FUN_1800a6800(&local_98);
    FUN_1800f7000(local_158);
    FUN_1800a6800(&local_78);
  }
  else {
    local_c8 = _DAT_1801d8ff0;
    uStack_c0 = _UNK_1801d8ff8;
    local_d8 = (LPVOID)s_object_key_1801d6960._0_8_;
    uStack_d0 = (ulonglong)(ushort)s_object_key_1801d6960._8_2_;
    plVar9 = &local_78;
    puVar12 = (int32_t *)FUN_1800ee000(param_1,plVar9,4,&local_d8);
    lVar11 = param_1 + 0x48;
    local_b8 = *(longlong *)(param_1 + 0x60);
    uStack_b0 = *(int32_t *)(param_1 + 0x68);
    local_a8 = *(int32_t *)(param_1 + 0x70);
    param_1 = FUN_1800f7c00(local_158,plVar9,&local_b8,puVar12);
    FUN_1800ee7b0(lVar11,&local_98);
    *(int32_t *)(param_2 + 5) = 1;
    if (*(char *)((longlong)param_2 + 0x29) != '\0') goto LAB_1800f235c;
    FUN_1800a6800(&local_98);
    FUN_1800f7000(local_158);
    FUN_1800a6800(&local_78);
  }
LAB_1800f1f7f:
  if (0xf < uStack_c0) {
    FUN_1800ba930(&local_d8,local_d8,uStack_c0);
  }
  goto LAB_1800f2258;
code_r0x0001800f1831:
  local_1a8[0] = '\0';
  FUN_1800f8400(local_198,local_1a8);
  FUN_1800ee520(param_1);
  goto LAB_1800f1790;
}

// ---- Function: FUN_1800f23e0 ----
longlong * FUN_1800f23e0(longlong *param_1,int32_t param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  uVar4 = 0xffffffffffffffff;
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (*(char *)(*param_3 + lVar1) != '\0');
  uVar2 = lVar3 + 0x33;
  if (0xf < uVar2) {
    FUN_1800b9630(param_1,uVar2);
    param_1[2] = 0;
  }
  FUN_1800b9910(param_1,(int32_t *)"cannot use operator[] with a string argument with ",0x32);
  do {
    uVar4 = uVar4 + 1;
  } while (*(char *)(*param_3 + uVar4) != '\0');
  FUN_1800b9910(param_1,(int32_t *)*param_3,uVar4);
  return param_1;
}

// ---- Function: FUN_1800f24a0 ----
longlong * FUN_1800f24a0(longlong *param_1,int32_t *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(int32_t *)param_1 = 0;
  uVar3 = 0xffffffffffffffff;
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)((longlong)param_2 + lVar2) != '\0');
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(*param_3 + lVar1) != '\0');
  if (0xf < (ulonglong)(lVar1 + lVar2)) {
    FUN_1800b9630(param_1,lVar1 + lVar2);
    param_1[2] = 0;
  }
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (*(char *)((longlong)param_2 + uVar4) != '\0');
  FUN_1800b9910(param_1,param_2,uVar4);
  do {
    uVar3 = uVar3 + 1;
  } while (*(char *)(*param_3 + uVar3) != '\0');
  FUN_1800b9910(param_1,(int32_t *)*param_3,uVar3);
  return param_1;
}

// ---- Function: FUN_1800f2590 ----
char * FUN_1800f2590(longlong *param_1,char *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  int32_t uVar4;
  char *pcVar5;
  code *pcVar6;
  char *pcVar7;
  longlong lVar8;
  void *pvVar9;
  char *pcVar10;
  ulonglong uVar11;
  __uint64 _Var12;
  char *pcVar13;
  ulonglong uVar14;
  
  lVar3 = *param_1;
  lVar8 = param_1[1] - lVar3 >> 4;
  if (lVar8 == 0xfffffffffffffff) {
    FUN_1800aa480();
    pcVar6 = (code *)swi(3);
    pcVar13 = (char *)(*pcVar6)();
    return pcVar13;
  }
  uVar1 = lVar8 + 1;
  uVar11 = param_1[2] - lVar3 >> 4;
  if (uVar11 <= 0xfffffffffffffff - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar14 = uVar1;
    if (uVar1 <= uVar11) {
      uVar14 = uVar11;
    }
    if (uVar14 < 0x1000000000000000) {
      _Var12 = uVar14 * 0x10;
      if (_Var12 == 0) {
        pcVar13 = (char *)0x0;
      }
      else if (_Var12 < 0x1000) {
        pcVar13 = (char *)operator_new(_Var12);
      }
      else {
        if (_Var12 + 0x27 <= _Var12) goto LAB_1800f2773;
        pvVar9 = operator_new(_Var12 + 0x27);
        if (pvVar9 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar6 = (code *)swi(3);
          pcVar13 = (char *)(*pcVar6)();
          return pcVar13;
        }
        pcVar13 = (char *)((longlong)pvVar9 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pcVar13 + -8) = pvVar9;
      }
      pcVar2 = pcVar13 + ((longlong)param_2 - lVar3 & 0xfffffffffffffff0);
      *pcVar2 = '\0';
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      uVar4 = *param_3;
      FUN_1800f9a90((longlong *)(pcVar2 + 8),*pcVar2);
      *pcVar2 = '\x06';
      *(int32_t *)(pcVar2 + 8) = uVar4;
      pcVar5 = (char *)param_1[1];
      pcVar10 = (char *)*param_1;
      pcVar7 = pcVar13;
      if (param_2 == pcVar5) {
        for (; pcVar10 != pcVar5; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
      }
      else {
        for (; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
        pcVar5 = (char *)param_1[1];
        pcVar10 = pcVar2;
        if (param_2 != pcVar5) {
          do {
            pcVar10[0x10] = *param_2;
            *(int32_t *)(pcVar10 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = '\0';
            param_2[8] = '\0';
            param_2[9] = '\0';
            param_2[10] = '\0';
            param_2[0xb] = '\0';
            param_2[0xc] = '\0';
            param_2[0xd] = '\0';
            param_2[0xe] = '\0';
            param_2[0xf] = '\0';
            param_2 = param_2 + 0x10;
            pcVar10 = pcVar10 + 0x10;
          } while (param_2 != pcVar5);
        }
      }
      FUN_1800f9750(param_1,(longlong)pcVar13,uVar1,uVar14);
      return pcVar2;
    }
  }
LAB_1800f2773:
  FUN_1800ba8a0();
  pcVar6 = (code *)swi(3);
  pcVar13 = (char *)(*pcVar6)();
  return pcVar13;
}

// ---- Function: FUN_1800f2780 ----
longlong FUN_1800f2780(longlong *param_1,int32_t *param_2)

{
  char cVar1;
  int32_t uVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_20;
  
  if (param_1[1] == param_1[2]) {
    local_20 = 0;
    uVar2 = *param_2;
    FUN_1800f9a90(&local_20,'\0');
    pcVar3 = (char *)*param_1;
    cVar1 = *pcVar3;
    *pcVar3 = '\x06';
    local_20 = *(longlong *)(pcVar3 + 8);
    *(int32_t *)(pcVar3 + 8) = uVar2;
    FUN_1800f9a90(&local_20,cVar1);
    lVar5 = *param_1;
  }
  else {
    pcVar3 = *(char **)(param_1[2] + -8);
    if (*pcVar3 == '\x02') {
      plVar4 = *(longlong **)(pcVar3 + 8);
      pcVar3 = (char *)plVar4[1];
      if (pcVar3 == (char *)plVar4[2]) {
        FUN_1800f2590(plVar4,pcVar3,param_2);
      }
      else {
        *pcVar3 = '\0';
        pcVar3[8] = '\0';
        pcVar3[9] = '\0';
        pcVar3[10] = '\0';
        pcVar3[0xb] = '\0';
        pcVar3[0xc] = '\0';
        pcVar3[0xd] = '\0';
        pcVar3[0xe] = '\0';
        pcVar3[0xf] = '\0';
        uVar2 = *param_2;
        FUN_1800f9a90((longlong *)(pcVar3 + 8),*pcVar3);
        *pcVar3 = '\x06';
        *(int32_t *)(pcVar3 + 8) = uVar2;
        plVar4[1] = plVar4[1] + 0x10;
      }
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_20 = 0;
      uVar2 = *param_2;
      FUN_1800f9a90(&local_20,'\0');
      pcVar3 = (char *)param_1[4];
      cVar1 = *pcVar3;
      *pcVar3 = '\x06';
      local_20 = *(longlong *)(pcVar3 + 8);
      *(int32_t *)(pcVar3 + 8) = uVar2;
      FUN_1800f9a90(&local_20,cVar1);
      lVar5 = param_1[4];
    }
  }
  return lVar5;
}

// ---- Function: FUN_1800f28b0 ----
char * FUN_1800f28b0(longlong *param_1,char *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  char *pcVar4;
  code *pcVar5;
  char *pcVar6;
  longlong lVar7;
  void *pvVar8;
  int32_t *puVar9;
  char *pcVar10;
  ulonglong uVar11;
  __uint64 _Var12;
  char *pcVar13;
  char *pcVar14;
  ulonglong uVar15;
  
  lVar3 = *param_1;
  lVar7 = param_1[1] - lVar3 >> 4;
  if (lVar7 == 0xfffffffffffffff) {
    FUN_1800aa480();
    pcVar5 = (code *)swi(3);
    pcVar14 = (char *)(*pcVar5)();
    return pcVar14;
  }
  uVar1 = lVar7 + 1;
  uVar11 = param_1[2] - lVar3 >> 4;
  if (uVar11 <= 0xfffffffffffffff - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar15 = uVar1;
    if (uVar1 <= uVar11) {
      uVar15 = uVar11;
    }
    if (uVar15 < 0x1000000000000000) {
      _Var12 = uVar15 * 0x10;
      if (_Var12 == 0) {
        pcVar14 = (char *)0x0;
      }
      else if (_Var12 < 0x1000) {
        pcVar14 = (char *)operator_new(_Var12);
      }
      else {
        if (_Var12 + 0x27 <= _Var12) goto LAB_1800f2ada;
        pvVar8 = operator_new(_Var12 + 0x27);
        if (pvVar8 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar5 = (code *)swi(3);
          pcVar14 = (char *)(*pcVar5)();
          return pcVar14;
        }
        pcVar14 = (char *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pcVar14 + -8) = pvVar8;
      }
      pcVar13 = pcVar14 + ((longlong)param_2 - lVar3 & 0xfffffffffffffff0);
      *pcVar13 = '\0';
      plVar2 = (longlong *)(pcVar13 + 8);
      *plVar2 = 0;
      FUN_1800f9a90(plVar2,*pcVar13);
      *pcVar13 = '\x03';
      puVar9 = (int32_t *)operator_new(0x20);
      FUN_1800ba630(puVar9,param_3);
      *plVar2 = (longlong)puVar9;
      pcVar4 = (char *)param_1[1];
      pcVar10 = (char *)*param_1;
      pcVar6 = pcVar14;
      if (param_2 == pcVar4) {
        for (; pcVar10 != pcVar4; pcVar10 = pcVar10 + 0x10) {
          *pcVar6 = *pcVar10;
          *(int32_t *)(pcVar6 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar6 = pcVar6 + 0x10;
        }
      }
      else {
        for (; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
          *pcVar6 = *pcVar10;
          *(int32_t *)(pcVar6 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar6 = pcVar6 + 0x10;
        }
        pcVar4 = (char *)param_1[1];
        pcVar10 = pcVar13;
        if (param_2 != pcVar4) {
          do {
            pcVar10[0x10] = *param_2;
            *(int32_t *)(pcVar10 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = '\0';
            param_2[8] = '\0';
            param_2[9] = '\0';
            param_2[10] = '\0';
            param_2[0xb] = '\0';
            param_2[0xc] = '\0';
            param_2[0xd] = '\0';
            param_2[0xe] = '\0';
            param_2[0xf] = '\0';
            param_2 = param_2 + 0x10;
            pcVar10 = pcVar10 + 0x10;
          } while (param_2 != pcVar4);
        }
      }
      FUN_1800f9750(param_1,(longlong)pcVar14,uVar1,uVar15);
      return pcVar13;
    }
  }
LAB_1800f2ada:
  FUN_1800ba8a0();
  pcVar5 = (code *)swi(3);
  pcVar14 = (char *)(*pcVar5)();
  return pcVar14;
}

// ---- Function: FUN_1800f2af0 ----
longlong FUN_1800f2af0(longlong *param_1,int32_t *param_2)

{
  longlong *plVar1;
  char cVar2;
  char *pcVar3;
  longlong *plVar4;
  int32_t *puVar5;
  longlong lVar6;
  int32_t local_res8 [8];
  longlong local_30;
  int32_t *local_28;
  int32_t *local_20;
  
  if (param_1[1] == param_1[2]) {
    local_30 = 0;
    FUN_1800f9a90(&local_30,'\0');
    puVar5 = (int32_t *)operator_new(0x20);
    local_28 = local_res8;
    local_20 = puVar5;
    FUN_1800ba630(puVar5,param_2);
    pcVar3 = (char *)*param_1;
    cVar2 = *pcVar3;
    *pcVar3 = '\x03';
    local_30 = *(longlong *)(pcVar3 + 8);
    *(int32_t **)(pcVar3 + 8) = puVar5;
    FUN_1800f9a90(&local_30,cVar2);
    lVar6 = *param_1;
  }
  else {
    pcVar3 = *(char **)(param_1[2] + -8);
    if (*pcVar3 == '\x02') {
      plVar4 = *(longlong **)(pcVar3 + 8);
      pcVar3 = (char *)plVar4[1];
      if (pcVar3 == (char *)plVar4[2]) {
        FUN_1800f28b0(plVar4,pcVar3,param_2);
      }
      else {
        *pcVar3 = '\0';
        plVar1 = (longlong *)(pcVar3 + 8);
        *plVar1 = 0;
        FUN_1800f9a90(plVar1,*pcVar3);
        *pcVar3 = '\x03';
        puVar5 = (int32_t *)operator_new(0x20);
        local_28 = local_res8;
        local_20 = puVar5;
        FUN_1800ba630(puVar5,param_2);
        *plVar1 = (longlong)puVar5;
        plVar4[1] = plVar4[1] + 0x10;
      }
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_30 = 0;
      FUN_1800f9a90(&local_30,'\0');
      puVar5 = (int32_t *)operator_new(0x20);
      local_28 = local_res8;
      local_20 = puVar5;
      FUN_1800ba630(puVar5,param_2);
      pcVar3 = (char *)param_1[4];
      cVar2 = *pcVar3;
      *pcVar3 = '\x03';
      local_30 = *(longlong *)(pcVar3 + 8);
      *(int32_t **)(pcVar3 + 8) = puVar5;
      FUN_1800f9a90(&local_30,cVar2);
      lVar6 = param_1[4];
    }
  }
  return lVar6;
}

// ---- Function: FUN_1800f2c90 ----
char * FUN_1800f2c90(longlong *param_1,char *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  int32_t uVar4;
  char *pcVar5;
  code *pcVar6;
  char *pcVar7;
  longlong lVar8;
  void *pvVar9;
  char *pcVar10;
  ulonglong uVar11;
  __uint64 _Var12;
  char *pcVar13;
  ulonglong uVar14;
  
  lVar3 = *param_1;
  lVar8 = param_1[1] - lVar3 >> 4;
  if (lVar8 == 0xfffffffffffffff) {
    FUN_1800aa480();
    pcVar6 = (code *)swi(3);
    pcVar13 = (char *)(*pcVar6)();
    return pcVar13;
  }
  uVar1 = lVar8 + 1;
  uVar11 = param_1[2] - lVar3 >> 4;
  if (uVar11 <= 0xfffffffffffffff - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar14 = uVar1;
    if (uVar1 <= uVar11) {
      uVar14 = uVar11;
    }
    if (uVar14 < 0x1000000000000000) {
      _Var12 = uVar14 * 0x10;
      if (_Var12 == 0) {
        pcVar13 = (char *)0x0;
      }
      else if (_Var12 < 0x1000) {
        pcVar13 = (char *)operator_new(_Var12);
      }
      else {
        if (_Var12 + 0x27 <= _Var12) goto LAB_1800f2e73;
        pvVar9 = operator_new(_Var12 + 0x27);
        if (pvVar9 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar6 = (code *)swi(3);
          pcVar13 = (char *)(*pcVar6)();
          return pcVar13;
        }
        pcVar13 = (char *)((longlong)pvVar9 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pcVar13 + -8) = pvVar9;
      }
      pcVar2 = pcVar13 + ((longlong)param_2 - lVar3 & 0xfffffffffffffff0);
      *pcVar2 = '\0';
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      uVar4 = *param_3;
      FUN_1800f9a90((longlong *)(pcVar2 + 8),*pcVar2);
      *pcVar2 = '\x05';
      *(int32_t *)(pcVar2 + 8) = uVar4;
      pcVar5 = (char *)param_1[1];
      pcVar10 = (char *)*param_1;
      pcVar7 = pcVar13;
      if (param_2 == pcVar5) {
        for (; pcVar10 != pcVar5; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
      }
      else {
        for (; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
        pcVar5 = (char *)param_1[1];
        pcVar10 = pcVar2;
        if (param_2 != pcVar5) {
          do {
            pcVar10[0x10] = *param_2;
            *(int32_t *)(pcVar10 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = '\0';
            param_2[8] = '\0';
            param_2[9] = '\0';
            param_2[10] = '\0';
            param_2[0xb] = '\0';
            param_2[0xc] = '\0';
            param_2[0xd] = '\0';
            param_2[0xe] = '\0';
            param_2[0xf] = '\0';
            param_2 = param_2 + 0x10;
            pcVar10 = pcVar10 + 0x10;
          } while (param_2 != pcVar5);
        }
      }
      FUN_1800f9750(param_1,(longlong)pcVar13,uVar1,uVar14);
      return pcVar2;
    }
  }
LAB_1800f2e73:
  FUN_1800ba8a0();
  pcVar6 = (code *)swi(3);
  pcVar13 = (char *)(*pcVar6)();
  return pcVar13;
}

// ---- Function: FUN_1800f2e80 ----
longlong FUN_1800f2e80(longlong *param_1,int32_t *param_2)

{
  char cVar1;
  int32_t uVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_20;
  
  if (param_1[1] == param_1[2]) {
    local_20 = 0;
    uVar2 = *param_2;
    FUN_1800f9a90(&local_20,'\0');
    pcVar3 = (char *)*param_1;
    cVar1 = *pcVar3;
    *pcVar3 = '\x05';
    local_20 = *(longlong *)(pcVar3 + 8);
    *(int32_t *)(pcVar3 + 8) = uVar2;
    FUN_1800f9a90(&local_20,cVar1);
    lVar5 = *param_1;
  }
  else {
    pcVar3 = *(char **)(param_1[2] + -8);
    if (*pcVar3 == '\x02') {
      plVar4 = *(longlong **)(pcVar3 + 8);
      pcVar3 = (char *)plVar4[1];
      if (pcVar3 == (char *)plVar4[2]) {
        FUN_1800f2c90(plVar4,pcVar3,param_2);
      }
      else {
        *pcVar3 = '\0';
        pcVar3[8] = '\0';
        pcVar3[9] = '\0';
        pcVar3[10] = '\0';
        pcVar3[0xb] = '\0';
        pcVar3[0xc] = '\0';
        pcVar3[0xd] = '\0';
        pcVar3[0xe] = '\0';
        pcVar3[0xf] = '\0';
        uVar2 = *param_2;
        FUN_1800f9a90((longlong *)(pcVar3 + 8),*pcVar3);
        *pcVar3 = '\x05';
        *(int32_t *)(pcVar3 + 8) = uVar2;
        plVar4[1] = plVar4[1] + 0x10;
      }
      lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      local_20 = 0;
      uVar2 = *param_2;
      FUN_1800f9a90(&local_20,'\0');
      pcVar3 = (char *)param_1[4];
      cVar1 = *pcVar3;
      *pcVar3 = '\x05';
      local_20 = *(longlong *)(pcVar3 + 8);
      *(int32_t *)(pcVar3 + 8) = uVar2;
      FUN_1800f9a90(&local_20,cVar1);
      lVar5 = param_1[4];
    }
  }
  return lVar5;
}

// ---- Function: FUN_1800f2fb0 ----
int32_t * FUN_1800f2fb0(longlong *param_1,int32_t *param_2)

{
  ulonglong uVar1;
  int32_t *puVar2;
  longlong lVar3;
  int32_t *puVar4;
  code *pcVar5;
  int32_t *puVar6;
  longlong lVar7;
  void *pvVar8;
  int32_t *puVar9;
  ulonglong uVar10;
  __uint64 _Var11;
  ulonglong uVar12;
  int32_t *puVar13;
  
  lVar3 = *param_1;
  lVar7 = param_1[1] - lVar3 >> 4;
  if (lVar7 == 0xfffffffffffffff) {
    FUN_1800aa480();
    pcVar5 = (code *)swi(3);
    puVar13 = (int32_t *)(*pcVar5)();
    return puVar13;
  }
  uVar1 = lVar7 + 1;
  uVar10 = param_1[2] - lVar3 >> 4;
  if (uVar10 <= 0xfffffffffffffff - (uVar10 >> 1)) {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar12 = uVar1;
    if (uVar1 <= uVar10) {
      uVar12 = uVar10;
    }
    if (uVar12 < 0x1000000000000000) {
      _Var11 = uVar12 * 0x10;
      puVar13 = (int32_t *)0x0;
      if (_Var11 != 0) {
        if (_Var11 < 0x1000) {
          puVar13 = (int32_t *)operator_new(_Var11);
        }
        else {
          if (_Var11 + 0x27 <= _Var11) goto LAB_1800f3178;
          pvVar8 = operator_new(_Var11 + 0x27);
          if (pvVar8 == (void *)0x0) {
            FUN_18012b7b4();
            pcVar5 = (code *)swi(3);
            puVar13 = (int32_t *)(*pcVar5)();
            return puVar13;
          }
          puVar13 = (int32_t *)((longlong)pvVar8 + 0x27U & 0xffffffffffffffe0);
          *(void **)(puVar13 + -8) = pvVar8;
        }
      }
      puVar2 = puVar13 + ((longlong)param_2 - lVar3 & 0xfffffffffffffff0);
      *puVar2 = 0;
      FUN_1800f8a10((int32_t *)(puVar2 + 8),'\0');
      puVar4 = (int32_t *)param_1[1];
      puVar9 = (int32_t *)*param_1;
      puVar6 = puVar13;
      if (param_2 == puVar4) {
        for (; puVar9 != puVar4; puVar9 = puVar9 + 0x10) {
          *puVar6 = *puVar9;
          *(int32_t *)(puVar6 + 8) = *(int32_t *)(puVar9 + 8);
          *puVar9 = 0;
          *(int32_t *)(puVar9 + 8) = 0;
          puVar6 = puVar6 + 0x10;
        }
      }
      else {
        for (; puVar9 != param_2; puVar9 = puVar9 + 0x10) {
          *puVar6 = *puVar9;
          *(int32_t *)(puVar6 + 8) = *(int32_t *)(puVar9 + 8);
          *puVar9 = 0;
          *(int32_t *)(puVar9 + 8) = 0;
          puVar6 = puVar6 + 0x10;
        }
        puVar4 = (int32_t *)param_1[1];
        puVar9 = puVar2;
        if (param_2 != puVar4) {
          do {
            puVar9[0x10] = *param_2;
            *(int32_t *)(puVar9 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = 0;
            *(int32_t *)(param_2 + 8) = 0;
            param_2 = param_2 + 0x10;
            puVar9 = puVar9 + 0x10;
          } while (param_2 != puVar4);
        }
      }
      FUN_1800f9750(param_1,(longlong)puVar13,uVar1,uVar12);
      return puVar2;
    }
  }
LAB_1800f3178:
  FUN_1800ba8a0();
  pcVar5 = (code *)swi(3);
  puVar13 = (int32_t *)(*pcVar5)();
  return puVar13;
}

// ---- Function: FUN_1800f3190 ----
char * FUN_1800f3190(longlong *param_1,char *param_2,int32_t *param_3)

{
  ulonglong uVar1;
  char *pcVar2;
  int32_t uVar3;
  longlong lVar4;
  char *pcVar5;
  code *pcVar6;
  char *pcVar7;
  longlong lVar8;
  void *pvVar9;
  char *pcVar10;
  ulonglong uVar11;
  __uint64 _Var12;
  char *pcVar13;
  ulonglong uVar14;
  int32_t uStackX_9;
  
  lVar4 = *param_1;
  lVar8 = param_1[1] - lVar4 >> 4;
  if (lVar8 == 0xfffffffffffffff) {
    FUN_1800aa480();
    pcVar6 = (code *)swi(3);
    pcVar13 = (char *)(*pcVar6)();
    return pcVar13;
  }
  uVar1 = lVar8 + 1;
  uVar11 = param_1[2] - lVar4 >> 4;
  if (uVar11 <= 0xfffffffffffffff - (uVar11 >> 1)) {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar14 = uVar1;
    if (uVar1 <= uVar11) {
      uVar14 = uVar11;
    }
    if (uVar14 < 0x1000000000000000) {
      _Var12 = uVar14 * 0x10;
      if (_Var12 == 0) {
        pcVar13 = (char *)0x0;
      }
      else if (_Var12 < 0x1000) {
        pcVar13 = (char *)operator_new(_Var12);
      }
      else {
        if (_Var12 + 0x27 <= _Var12) goto LAB_1800f3373;
        pvVar9 = operator_new(_Var12 + 0x27);
        if (pvVar9 == (void *)0x0) {
          FUN_18012b7b4();
          pcVar6 = (code *)swi(3);
          pcVar13 = (char *)(*pcVar6)();
          return pcVar13;
        }
        pcVar13 = (char *)((longlong)pvVar9 + 0x27U & 0xffffffffffffffe0);
        *(void **)(pcVar13 + -8) = pvVar9;
      }
      pcVar2 = pcVar13 + ((longlong)param_2 - lVar4 & 0xfffffffffffffff0);
      *pcVar2 = '\0';
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      uVar3 = *param_3;
      FUN_1800f9a90((longlong *)(pcVar2 + 8),*pcVar2);
      *pcVar2 = '\x04';
      *(ulonglong *)(pcVar2 + 8) = CONCAT71(uStackX_9,uVar3);
      pcVar5 = (char *)param_1[1];
      pcVar10 = (char *)*param_1;
      pcVar7 = pcVar13;
      if (param_2 == pcVar5) {
        for (; pcVar10 != pcVar5; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
      }
      else {
        for (; pcVar10 != param_2; pcVar10 = pcVar10 + 0x10) {
          *pcVar7 = *pcVar10;
          *(int32_t *)(pcVar7 + 8) = *(int32_t *)(pcVar10 + 8);
          *pcVar10 = '\0';
          pcVar10[8] = '\0';
          pcVar10[9] = '\0';
          pcVar10[10] = '\0';
          pcVar10[0xb] = '\0';
          pcVar10[0xc] = '\0';
          pcVar10[0xd] = '\0';
          pcVar10[0xe] = '\0';
          pcVar10[0xf] = '\0';
          pcVar7 = pcVar7 + 0x10;
        }
        pcVar5 = (char *)param_1[1];
        pcVar10 = pcVar2;
        if (param_2 != pcVar5) {
          do {
            pcVar10[0x10] = *param_2;
            *(int32_t *)(pcVar10 + 0x18) = *(int32_t *)(param_2 + 8);
            *param_2 = '\0';
            param_2[8] = '\0';
            param_2[9] = '\0';
            param_2[10] = '\0';
            param_2[0xb] = '\0';
            param_2[0xc] = '\0';
            param_2[0xd] = '\0';
            param_2[0xe] = '\0';
            param_2[0xf] = '\0';
            param_2 = param_2 + 0x10;
            pcVar10 = pcVar10 + 0x10;
          } while (param_2 != pcVar5);
        }
      }
      FUN_1800f9750(param_1,(longlong)pcVar13,uVar1,uVar14);
      return pcVar2;
    }
  }
LAB_1800f3373:
  FUN_1800ba8a0();
  pcVar6 = (code *)swi(3);
  pcVar13 = (char *)(*pcVar6)();
  return pcVar13;
}

