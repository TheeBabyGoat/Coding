#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_1800c78f0 ----
void FUN_1800c78f0(longlong *param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  LPVOID local_res8;
  
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1e0,&local_res8);
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1e0,&local_res8);
  if (local_res8 != (LPVOID)0x0) {
    FUN_1800c8fd0((longlong)local_res8 + 0x20);
    pvVar1 = *(LPVOID *)((longlong)local_res8 + 8);
    if (pvVar1 != (LPVOID)0x0) {
      pvVar3 = pvVar1;
      if ((0xfff < (*(longlong *)((longlong)local_res8 + 0x18) - (longlong)pvVar1 &
                   0xfffffffffffffff8U)) &&
         (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
        FUN_18012b7b4();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      thunk_FUN_18012d5e8(pvVar3);
      *(int32_t *)((longlong)local_res8 + 8) = 0;
      *(int32_t *)((longlong)local_res8 + 0x10) = 0;
      *(int32_t *)((longlong)local_res8 + 0x18) = 0;
    }
    thunk_FUN_18012d5e8(local_res8);
  }
  (**(code **)(*param_1 + 0x10))(param_1,&DAT_1801cc1e0,0);
  return;
}

// ---- Function: FUN_1800c79c0 ----
void FUN_1800c79c0(longlong *param_1)

{
  int32_t (*pauVar1) [32];
  longlong *plVar2;
  int32_t (*pauVar3) [32];
  ulonglong uVar4;
  longlong local_res8;
  
  FUN_1800ca000(param_1);
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*plVar2 + 8))(plVar2,&DAT_1801cc1e0,&local_res8);
  pauVar1 = *(int32_t (**) [32])(local_res8 + 0x10);
  pauVar3 = thunk_FUN_180123f80(*(int32_t (**) [32])(local_res8 + 8),pauVar1,(ulonglong)param_1);
  if ((pauVar3 != pauVar1) &&
     (pauVar3 = FUN_180124290(pauVar3,pauVar1,(ulonglong)param_1), pauVar3 != pauVar1)) {
    uVar4 = *(longlong *)(local_res8 + 0x10) - (longlong)pauVar1;
    FUN_180150fd0((int32_t *)pauVar3,(int32_t *)pauVar1,uVar4);
    *(ulonglong *)(local_res8 + 0x10) = uVar4 + (longlong)pauVar3;
  }
  return;
}

// ---- Function: FUN_1800c7b50 ----
ulonglong FUN_1800c7b50(longlong *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *param_2;
  uVar4 = (ulonglong)uVar3;
  if ((((uVar3 != 5) && (uVar3 != 3)) ||
      ((1 < *(ushort *)(param_2 + 6) &&
       (uVar4 = (**(code **)(*param_1 + 0x20))(param_1,0x19), (char)uVar4 == '\0')))) ||
     (((*(byte *)(param_2 + 9) & 0x30) == 0 || (param_2[5] == 0x30303853)))) {
LAB_1800c7ec9:
    return uVar4 & 0xffffffffffffff00;
  }
  uVar4 = (**(code **)(*param_1 + 0x18))(param_1);
  iVar1 = (int)uVar4;
  if (iVar1 < 0xc001) {
    if (iVar1 != 0xc000) {
      if (iVar1 != 0x9000) {
        uVar4 = (ulonglong)(iVar1 - 0xa000U);
        if ((iVar1 - 0xa000U & 0xffffefff) != 0) goto LAB_1800c7ec5;
        uVar3 = param_2[5];
        if (uVar3 < 0x3030384d) {
          if (uVar3 != 0x3030384c) {
            uVar4 = 0;
            switch(uVar3 - 1) {
            case 0:
            case 1:
            case 2:
            case 3:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 1;
              return 1;
            case 4:
            case 5:
            case 6:
            case 7:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 5;
              return 1;
            case 8:
            case 9:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 9;
              return 1;
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0xf;
              return 1;
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x13;
              return 1;
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x58:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x17;
              return 1;
            default:
              goto switchD_1800c7c25_caseD_19;
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1d:
            case 0x1e:
            case 0x1f:
switchD_1800c7c25_caseD_1a:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x1b;
              return CONCAT71((int7)(uVar4 >> 8),1);
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x25:
switchD_1800c7c25_caseD_20:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x21;
              return CONCAT71((int7)(uVar4 >> 8),1);
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x29:
            case 0x2a:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x27;
              return 1;
            case 0x2b:
            case 0x2c:
            case 0x2d:
            case 0x2e:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x2c;
              return 1;
            case 0x2f:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
switchD_1800c7c25_caseD_2f:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x30;
              return CONCAT71((int7)(uVar4 >> 8),1);
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
            case 0x3a:
switchD_1800c7c25_caseD_34:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x35;
              return CONCAT71((int7)(uVar4 >> 8),1);
            case 0x3b:
            case 0x3c:
            case 0x3d:
            case 0x3e:
            case 0x3f:
              break;
            case 0x45:
            case 0x46:
            case 0x47:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x46;
              return 1;
            case 0x48:
            case 0x49:
            case 0x4a:
            case 0x4b:
            case 0x4c:
            case 0x4d:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x49;
              return 1;
            case 0x4e:
            case 0x4f:
            case 0x50:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x4f;
              return 1;
            case 0x51:
            case 0x52:
            case 0x53:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x52;
              return 1;
            case 0x56:
            case 0x59:
            case 0x5a:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x5a;
              return 1;
            case 0x57:
            case 0x5b:
            case 0x5c:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x5c;
              return 1;
            case 0x5d:
            case 0x5e:
            case 0x5f:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x5e;
              return 1;
            case 0x60:
            case 0x61:
            case 0x62:
              param_2[9] = param_2[9] | 0xc0;
              param_2[5] = 0x61;
              return 1;
            }
          }
          param_2[9] = param_2[9] | 0xc0;
          param_2[5] = 0x3c;
          return CONCAT71((int7)(uVar4 >> 8),1);
        }
        if (uVar3 < 0x42475332) {
          if (uVar3 != 0x42475331) {
            if (uVar3 == 0x3036314c) goto switchD_1800c7c25_caseD_34;
            if (uVar3 == 0x3038414c) goto switchD_1800c7c25_caseD_2f;
            if (uVar3 == 0x3631414c) goto switchD_1800c7c25_caseD_20;
            if (uVar3 != 0x42475330) goto switchD_1800c7c25_caseD_19;
          }
        }
        else {
          uVar4 = (ulonglong)(uVar3 + 0xbdb8acce);
          if (uVar3 + 0xbdb8acce != 0) {
            uVar2 = uVar3 + 0xbdb8a847;
            uVar4 = (ulonglong)uVar2;
            if ((uVar2 == 0) || (uVar2 == 1)) goto switchD_1800c7c25_caseD_1a;
            goto switchD_1800c7c25_caseD_19;
          }
        }
        uVar3 = 0x42475330;
switchD_1800c7c25_caseD_19:
        param_2[9] = param_2[9] | 0xc0;
        param_2[5] = uVar3;
        return CONCAT71((int7)(uVar4 >> 8),1);
      }
      if ((DAT_1801ee908 == '\0') && (*(ushort *)(param_2 + 6) < 2)) {
        if (*param_2 == 3) {
          uVar3 = param_2[5];
          uVar4 = (ulonglong)uVar3;
          if (((uVar3 == 0x37) || (uVar3 == 0x38343244)) || (uVar3 == 0x2d)) goto LAB_1800c7ec9;
        }
        if (0x200 < (uint)param_2[2]) {
          iVar1 = param_2[5];
          if ((iVar1 == 0x28) || (iVar1 == 0x14)) {
            param_2[5] = 0x5a544e49;
          }
          param_2[9] = param_2[9] | 0xc0;
          return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
        }
      }
      goto LAB_1800c7ec9;
    }
  }
  else {
    if (iVar1 == 0x10000) goto LAB_1800c7ec9;
    if (iVar1 != 0x20000) goto LAB_1800c7ec5;
  }
  if (1 < *(ushort *)(param_2 + 6)) {
    uVar3 = param_2[9] | 0x2000;
    param_2[9] = uVar3;
    return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
  }
  uVar3 = param_2[9] | 0x800;
  uVar4 = (ulonglong)uVar3;
  param_2[9] = uVar3;
LAB_1800c7ec5:
  return CONCAT71((int7)(uVar4 >> 8),1);
}

// ---- Function: FUN_1800c8120 ----
void FUN_1800c8120(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong local_res8;
  
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1e0,&local_res8);
  if (local_res8 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
    lVar1 = *(longlong *)(local_res8 + 0x38);
    plVar2 = *(longlong **)(local_res8 + 0x28);
    uVar4 = param_2 >> 4 & *(ulonglong *)(local_res8 + 0x50);
    plVar6 = *(longlong **)(lVar1 + 8 + uVar4 * 0x10);
    if (plVar6 == plVar2) {
LAB_1800c81a1:
      plVar6 = (longlong *)0x0;
    }
    else {
      uVar3 = plVar6[2];
      while (param_2 != uVar3) {
        if (plVar6 == *(longlong **)(lVar1 + uVar4 * 0x10)) goto LAB_1800c81a1;
        plVar6 = (longlong *)plVar6[1];
        uVar3 = plVar6[2];
      }
    }
    if (plVar6 == (longlong *)0x0) {
      plVar6 = plVar2;
    }
    if (plVar6 != plVar2) {
      plVar5 = (longlong *)
               ((*(ulonglong *)(local_res8 + 0x50) & (ulonglong)plVar6[2] >> 4) * 0x10 + lVar1);
      if ((longlong *)plVar5[1] == plVar6) {
        if ((longlong *)*plVar5 == plVar6) {
          *plVar5 = (longlong)plVar2;
          plVar5[1] = (longlong)plVar2;
        }
        else {
          plVar5[1] = plVar6[1];
        }
      }
      else if ((longlong *)*plVar5 == plVar6) {
        *plVar5 = *plVar6;
      }
      lVar1 = *plVar6;
      *(longlong *)(local_res8 + 0x30) = *(longlong *)(local_res8 + 0x30) + -1;
      *(longlong *)plVar6[1] = lVar1;
      *(longlong *)(lVar1 + 8) = plVar6[1];
      FUN_1800cb100(plVar6 + 0xc);
      thunk_FUN_18012d5e8(plVar6);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
  }
  return;
}

// ---- Function: FUN_1800c8240 ----
ulonglong FUN_1800c8240(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  int32_t uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *extraout_RAX;
  char *local_res8;
  int32_t local_28 [2];
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,&local_res8);
  if (*(longlong *)(local_res8 + 0x20) != 0) {
    if ((param_2 == 6) && (param_3 == 1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    cVar1 = *local_res8;
    if (cVar1 != '\0') {
      AcquireSRWLockShared((PSRWLOCK)&DAT_1801ee948);
    }
    local_res8[0x68] = '\0';
    plVar5 = FUN_1800ca300((float *)(local_res8 + 0x28),local_28,(ulonglong *)(local_res8 + 0x20));
    lVar2 = *plVar5;
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + param_2 * param_3;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    *(int *)(lVar2 + 0x3c) = *(int *)(lVar2 + 0x3c) + param_2 * param_3;
    *(int *)(lVar2 + 0x40) = *(int *)(lVar2 + 0x40) + 1;
    if (!bVar4) {
      uVar3 = *(int32_t *)(local_res8 + 0xc);
      *(int32_t *)(lVar2 + 0x48) = *(int32_t *)(local_res8 + 4);
      *(int32_t *)(lVar2 + 0x50) = uVar3;
      *(int32_t *)(lVar2 + 0x58) = *(int32_t *)(local_res8 + 0x14);
    }
    if (cVar1 != '\0') {
      ReleaseSRWLockShared((PSRWLOCK)&DAT_1801ee948);
      plVar5 = extraout_RAX;
    }
  }
  return (ulonglong)plVar5 & 0xffffffffffffff00;
}

// ---- Function: FUN_1800c8340 ----
ulonglong FUN_1800c8340(longlong *param_1,int param_2,int32_t param_3,int32_t param_4,
                       uint param_5)

{
  longlong lVar1;
  int32_t uVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  ulonglong extraout_RAX;
  bool bVar4;
  char *local_38;
  int32_t *local_30;
  int32_t local_28;
  int32_t local_20 [3];
  
  if (param_2 != 3) {
    in_RAX = (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,&local_38);
    if (*(longlong *)(local_38 + 0x20) != 0) {
      local_30 = &DAT_1801ee948;
      local_28 = 0;
      bVar4 = *local_38 != '\0';
      if (bVar4) {
        AcquireSRWLockShared((PSRWLOCK)&DAT_1801ee948);
      }
      local_28 = bVar4;
      plVar3 = FUN_1800ca300((float *)(local_38 + 0x28),local_20,(ulonglong *)(local_38 + 0x20));
      lVar1 = *plVar3;
      in_RAX = (ulonglong)param_5;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + param_5;
      *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + param_5;
      *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + param_5;
      *(int *)(lVar1 + 0x44) = *(int *)(lVar1 + 0x44) + param_5;
      uVar2 = *(int32_t *)(local_38 + 0xc);
      *(int32_t *)(lVar1 + 0x48) = *(int32_t *)(local_38 + 4);
      *(int32_t *)(lVar1 + 0x50) = uVar2;
      *(int32_t *)(lVar1 + 0x58) = *(int32_t *)(local_38 + 0x14);
      if (bVar4) {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_1801ee948);
        in_RAX = extraout_RAX;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

// ---- Function: FUN_1800c84c0 ----
ulonglong FUN_1800c84c0(longlong *param_1,int32_t param_2,float *param_3)

{
  longlong *in_RAX;
  longlong *plVar1;
  longlong *extraout_RAX;
  bool bVar2;
  char *local_res18 [2];
  ulonglong local_38;
  int32_t *local_30;
  int32_t local_28;
  int32_t local_20 [3];
  
  if (param_3 != (float *)0x0) {
    (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,local_res18);
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
    in_RAX = (longlong *)(**(code **)(*plVar1 + 0x68))(plVar1,&local_38,param_2);
    if (*param_3 != DAT_1801d8e38) {
      local_30 = &DAT_1801ee948;
      local_28 = 0;
      bVar2 = *local_res18[0] != '\0';
      if (bVar2) {
        AcquireSRWLockShared((PSRWLOCK)&DAT_1801ee948);
      }
      local_28 = bVar2;
      in_RAX = FUN_1800ca300((float *)(local_res18[0] + 0x28),local_20,&local_38);
      *(int32_t *)(*in_RAX + 0x79) = 1;
      if (bVar2) {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_1801ee948);
        in_RAX = extraout_RAX;
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}

// ---- Function: FUN_1800c8680 ----
void FUN_1800c8680(longlong *param_1)

{
  longlong local_res8;
  
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,&local_res8);
  *(int32_t *)(local_res8 + 0x6c) = 0;
  *(int32_t *)(local_res8 + 0x74) = 0;
  *(int32_t *)(local_res8 + 0x7c) = 0;
  *(int32_t *)(local_res8 + 0x84) = 0;
  *(int32_t *)(local_res8 + 0x8c) = 0x3f800000;
  FUN_1800c9a40(local_res8 + 0x28);
  *(int32_t *)(local_res8 + 0x20) = 0;
  return;
}

// ---- Function: FUN_1800c86e0 ----
void FUN_1800c86e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong local_res8;
  longlong local_res10;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x38))();
  if (param_2 != plVar1) {
    (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,&local_res10);
    (**(code **)(*param_2 + 8))(param_2,&DAT_1801cc1d0,&local_res8);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
    FUN_1800c75a0(local_res10,local_res8);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
  }
  return;
}

// ---- Function: FUN_1800c8770 ----
void FUN_1800c8770(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  longlong *plVar6;
  bool bVar7;
  char *local_res8;
  char *local_res10;
  int32_t local_28 [2];
  
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,&local_res10);
  (**(code **)(*param_2 + 8))(param_2,&DAT_1801cc1d0,&local_res8);
  if (((*(longlong *)(local_res10 + 0x20) == 0) || (*(longlong *)(local_res8 + 0x20) != 0)) ||
     (*(longlong *)(local_res8 + 0x38) != 0)) {
    bVar7 = *local_res10 == '\0';
    if (!bVar7) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_1801ee948);
    }
    FUN_1800c75a0((longlong)local_res10,(longlong)local_res8);
  }
  else {
    uVar2 = *(int32_t *)(local_res8 + 8);
    uVar3 = *(int32_t *)(local_res8 + 0xc);
    uVar4 = *(int32_t *)(local_res8 + 0x10);
    *(int32_t *)(local_res10 + 4) = *(int32_t *)(local_res8 + 4);
    *(int32_t *)(local_res10 + 8) = uVar2;
    *(int32_t *)(local_res10 + 0xc) = uVar3;
    *(int32_t *)(local_res10 + 0x10) = uVar4;
    *(int32_t *)(local_res10 + 0x14) = *(int32_t *)(local_res8 + 0x14);
    (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1d0,&local_res8);
    if (*(longlong *)(local_res8 + 0x20) == 0) {
      return;
    }
    bVar7 = *local_res8 == '\0';
    if (!bVar7) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_1801ee948);
    }
    plVar6 = FUN_1800ca300((float *)(local_res8 + 0x28),local_28,(ulonglong *)(local_res8 + 0x20));
    lVar1 = *plVar6;
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
    *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + 1;
    *(int *)(lVar1 + 0x44) = *(int *)(lVar1 + 0x44) + 1;
    uVar5 = *(int32_t *)(local_res8 + 0xc);
    *(int32_t *)(lVar1 + 0x48) = *(int32_t *)(local_res8 + 4);
    *(int32_t *)(lVar1 + 0x50) = uVar5;
    *(int32_t *)(lVar1 + 0x58) = *(int32_t *)(local_res8 + 0x14);
  }
  if (!bVar7) {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_1801ee948);
  }
  return;
}

// ---- Function: FUN_1800c88c0 ----
void FUN_1800c88c0(int32_t param_1,longlong *param_2)

{
  int32_t *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  int32_t *puVar12;
  ulonglong uVar13;
  ulonglong *local_res10;
  longlong local_d8 [2];
  int32_t *local_c8;
  int32_t local_c0;
  int32_t local_b8 [40];
  int32_t local_90 [8];
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_60;
  
  plVar6 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*plVar6 + 8))(plVar6,&DAT_1801cc1e0,&local_res10);
  local_c8 = &DAT_1801ee948;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
  local_c0 = 1;
  FUN_1800c74c0(local_b8,1);
  puVar1 = (int32_t *)local_res10[2];
  plVar6 = local_88;
  for (puVar12 = (int32_t *)local_res10[1]; local_88 = plVar6, puVar12 != puVar1;
      puVar12 = puVar12 + 1) {
    (**(code **)(*(longlong *)*puVar12 + 8))((longlong *)*puVar12,&DAT_1801cc1d0,local_d8);
    lVar3 = local_d8[0];
    FUN_1800c75a0((longlong)local_b8,local_d8[0]);
    *(int32_t *)(lVar3 + 0x6c) = 0;
    *(int32_t *)(lVar3 + 0x74) = 0;
    *(int32_t *)(lVar3 + 0x7c) = 0;
    *(int32_t *)(lVar3 + 0x84) = 0;
    *(int32_t *)(lVar3 + 0x8c) = 0x3f800000;
    FUN_1800c9a40(lVar3 + 0x28);
    plVar6 = local_88;
  }
  if ((local_80 != 0) && ((local_80 != 1 || (8 < *(uint *)(*plVar6 + 0x1c))))) {
    *local_res10 = *local_res10 + 1;
    puVar10 = *(ulonglong **)local_res10[5];
    if (puVar10 != (ulonglong *)local_res10[5]) {
      do {
        uVar13 = puVar10[2] >> 4;
        uVar9 = local_60 & uVar13;
        plVar8 = *(longlong **)(local_78 + 8 + uVar9 * 0x10);
        if (plVar8 == plVar6) {
LAB_1800c8a26:
          plVar8 = (longlong *)0x0;
        }
        else {
          uVar2 = plVar8[2];
          while (puVar10[2] != uVar2) {
            if (plVar8 == *(longlong **)(local_78 + uVar9 * 0x10)) goto LAB_1800c8a26;
            plVar8 = (longlong *)plVar8[1];
            uVar2 = plVar8[2];
          }
        }
        plVar7 = plVar6;
        if (plVar8 != (longlong *)0x0) {
          plVar7 = plVar8;
        }
        if ((plVar7 == plVar6) && (puVar10[0x10] + 0x1e < *local_res10)) {
          uVar13 = local_res10[10] & uVar13;
          uVar9 = local_res10[7];
          puVar11 = *(ulonglong **)(uVar9 + uVar13 * 0x10);
          if (*(ulonglong **)(uVar9 + 8 + uVar13 * 0x10) == puVar10) {
            if (puVar11 == puVar10) {
              uVar2 = local_res10[5];
              *(ulonglong *)(uVar9 + uVar13 * 0x10) = uVar2;
              *(ulonglong *)(uVar9 + 8 + uVar13 * 0x10) = uVar2;
            }
            else {
              *(ulonglong *)(uVar9 + 8 + uVar13 * 0x10) = puVar10[1];
            }
          }
          else if (puVar11 == puVar10) {
            *(ulonglong *)(uVar9 + uVar13 * 0x10) = *puVar10;
          }
          puVar11 = (ulonglong *)*puVar10;
          local_res10[6] = local_res10[6] - 1;
          *(ulonglong **)puVar10[1] = puVar11;
          puVar11[1] = puVar10[1];
          FUN_1800cb100((longlong *)(puVar10 + 0xc));
          thunk_FUN_18012d5e8(puVar10);
          plVar6 = local_88;
        }
        else {
          puVar11 = (ulonglong *)*puVar10;
        }
        puVar10 = puVar11;
      } while (puVar11 != (ulonglong *)local_res10[5]);
    }
    for (plVar8 = (longlong *)*plVar6; plVar8 != plVar6; plVar8 = (longlong *)*plVar8) {
      plVar7 = FUN_1800ca060((float *)(local_res10 + 4),local_d8,(ulonglong *)(plVar8 + 2));
      lVar3 = *plVar7;
      lVar4 = plVar8[4];
      *(longlong *)(lVar3 + 0x18) = plVar8[3];
      *(longlong *)(lVar3 + 0x20) = lVar4;
      lVar4 = plVar8[6];
      *(longlong *)(lVar3 + 0x28) = plVar8[5];
      *(longlong *)(lVar3 + 0x30) = lVar4;
      *(int *)(lVar3 + 0x38) = (int)plVar8[7];
      uVar5 = *(int32_t *)((longlong)plVar8 + 0x44);
      *(int32_t *)(lVar3 + 0x3c) = *(int32_t *)((longlong)plVar8 + 0x3c);
      *(int32_t *)(lVar3 + 0x44) = uVar5;
      uVar5 = *(int32_t *)((longlong)plVar8 + 0x54);
      *(int32_t *)(lVar3 + 0x4c) = *(int32_t *)((longlong)plVar8 + 0x4c);
      *(int32_t *)(lVar3 + 0x54) = uVar5;
      *(int32_t *)(lVar3 + 0x5c) = *(int32_t *)((longlong)plVar8 + 0x5c);
      puVar10 = (ulonglong *)(plVar8 + 0xc);
      if ((ulonglong *)(lVar3 + 0x60) != puVar10) {
        FUN_1800ca5d0((ulonglong *)(lVar3 + 0x60),(int32_t *)*puVar10,
                      (longlong)(plVar8[0xd] - *puVar10) / 0x28);
      }
      *(char *)(lVar3 + 0x78) = (char)plVar8[0xf];
      *(int32_t *)(lVar3 + 0x79) = *(int32_t *)((longlong)plVar8 + 0x79);
      *(ulonglong *)(lVar3 + 0x80) = *local_res10;
      if (*(longlong *)(lVar3 + 0x88) == -1) {
        *(ulonglong *)(lVar3 + 0x88) = *local_res10;
      }
    }
  }
  FUN_1800c76d0((longlong)local_90);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1801ee948);
  return;
}

// ---- Function: FUN_1800c8be0 ----
void FUN_1800c8be0(longlong *param_1,longlong *param_2)

{
  int32_t *puVar1;
  int32_t *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  longlong *local_res8;
  longlong *local_res10;
  int local_118 [2];
  int local_110 [2];
  uint local_108;
  ulonglong *local_100;
  int32_t local_f8;
  int local_f0;
  int32_t local_ec;
  uint uStack_e4;
  ushort uStack_e0;
  int32_t local_c8 [4];
  int32_t local_c4 [4];
  longlong *local_c0;
  int32_t *local_b8;
  int32_t local_b0;
  float local_a8 [2];
  int32_t *local_a0;
  int32_t local_98;
  ulonglong local_90;
  int32_t local_88;
  int32_t uStack_80;
  ulonglong local_78;
  ulonglong local_70;
  
  local_res8 = param_1;
  local_res10 = param_2;
  plVar10 = (longlong *)(**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1f0,&local_c0);
  (**(code **)(*plVar10 + 8))(plVar10,&DAT_1801cc1e0,&local_100);
  puVar4 = local_100;
  if (local_100 == (ulonglong *)0x0) {
    return;
  }
  local_108 = 0;
  (**(code **)(*param_1 + 0x58))(param_1,local_c4,local_c8);
  local_b8 = &DAT_1801ee948;
  local_b0 = 1;
  AcquireSRWLockShared((PSRWLOCK)&DAT_1801ee948);
  local_a8[0] = *(float *)(puVar4 + 4);
  local_a0 = (int32_t *)0x0;
  local_98 = 0;
  local_a0 = (int32_t *)operator_new(0x90);
  *local_a0 = local_a0;
  local_a0[1] = local_a0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = puVar4[10];
  local_70 = puVar4[0xb];
  FUN_1800a9140(&local_90,(longlong)(puVar4[8] - puVar4[7]) >> 3,local_a0);
  puVar1 = (int32_t *)puVar4[5];
  for (puVar2 = (int32_t *)*puVar1; puVar2 != puVar1; puVar2 = (int32_t *)*puVar2) {
    FUN_1800cae20(local_a8,&local_f8,puVar2 + 2);
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1801ee948);
  puVar2 = local_a0;
  local_b0 = 0;
  for (puVar1 = (int32_t *)*local_a0; puVar11 = (ulonglong *)0x0, puVar1 != puVar2;
      puVar1 = (int32_t *)*puVar1) {
    if (((((*(int *)((longlong)puVar1 + 0x1c) != 0) && (3 < *(uint *)(puVar1 + 3))) &&
         (*puVar4 <= (ulonglong)puVar1[0x10])) && (puVar1[0x11] + 1 < *puVar4)) &&
       ((((**(code **)(*plVar10 + 0x50))(plVar10,&local_f8,puVar1[2]), uStack_e0 < 2 ||
         (cVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,0x19), cVar7 != '\0')) &&
        (uStack_e4 - 0x13 < 2)))) {
      local_118[0] = 0;
      local_110[0] = 0;
      FUN_18011cdd0(local_118,local_110);
      if (((local_f0 == local_118[0]) || ((int)local_ec == local_110[0])) &&
         (0xc < *(uint *)(puVar1 + 3))) {
        puVar11 = (ulonglong *)puVar1[2];
        *local_c0 = (longlong)puVar11;
        local_108 = uStack_e4;
        break;
      }
    }
  }
  lVar3 = local_c0[2];
  if (puVar11 == (ulonglong *)0x0) {
    plVar5 = (longlong *)*local_c0;
    if (plVar5 != (longlong *)0x0) {
      iVar8 = (**(code **)(*plVar10 + 0x18))(plVar10);
      if (iVar8 < 0xc001) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      *local_c0 = 0;
      local_c0[2] = 0;
    }
  }
  else {
    iVar8 = (**(code **)(*plVar10 + 0x18))(plVar10);
    puVar4 = (ulonglong *)*local_c0;
    if ((puVar11 != puVar4) || (lVar3 == 0)) {
      if (puVar4 != (ulonglong *)0x0) {
        iVar9 = (**(code **)(*plVar10 + 0x18))(plVar10);
        if (iVar9 < 0xc001) {
          (**(code **)(*puVar4 + 0x10))(puVar4);
        }
        *local_c0 = 0;
      }
      local_f8._4_4_ = local_108;
      if ((iVar8 - 0x10000U & 0xfffeffff) != 0) {
        local_f8._4_4_ = FUN_1800cb180(local_108);
      }
      local_f8._0_4_ = 4;
      local_f0 = 0;
      local_ec = 1;
      uStack_e4 = 1;
      cVar7 = (**(code **)(*plVar10 + 0x58))(plVar10,puVar11,0xc0,&local_f8,local_c0 + 2);
      if (cVar7 == '\0') goto LAB_1800c8f2a;
      *local_c0 = (longlong)puVar11;
    }
    plVar5 = local_res10;
    if (iVar8 < 0xb001) {
      (**(code **)(*local_res10 + 0x38))(local_res10,0,0,0);
    }
    local_118[0] = 0xf0;
    local_110[0] = 0xc0;
    local_100 = puVar11;
    (**(code **)(*plVar5 + 0x20))(plVar5,1,&local_100,local_118,local_110);
  }
LAB_1800c8f2a:
  plVar5 = local_res8;
  if (lVar3 != local_c0[2]) {
    (**(code **)(*local_res8 + 8))(local_res8,&DAT_1801cc1f0,&local_res8);
    plVar6 = local_res8;
    (**(code **)(*plVar5 + 0x170))(plVar5,"DEPTH",local_res8[2]);
    local_res8 = plVar6;
    (**(code **)(*plVar5 + 0x98))(plVar5,0,&LAB_1800c9dc0,&local_res8);
    (**(code **)(*plVar10 + 0x60))(plVar10,lVar3);
  }
  FUN_1800c8fd0((longlong)local_a8);
  return;
}

// ---- Function: FUN_1800c8fd0 ----
void FUN_1800c8fd0(longlong param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  LPVOID pvVar3;
  
  pvVar1 = *(LPVOID *)(param_1 + 0x18);
  if (pvVar1 != (LPVOID)0x0) {
    pvVar3 = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar3 = *(LPVOID *)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
      FUN_18012b7b4();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    thunk_FUN_18012d5e8(pvVar3);
    *(int32_t *)(param_1 + 0x18) = 0;
    *(int32_t *)(param_1 + 0x20) = 0;
    *(int32_t *)(param_1 + 0x28) = 0;
  }
  FUN_1800c99d0((longlong *)(param_1 + 8));
  return;
}

// ---- Function: FUN_1800c9040 ----
void FUN_1800c9040(longlong *param_1,longlong *param_2)

{
  int32_t local_res8 [8];
  int32_t local_18 [2];
  int32_t *local_10;
  
  (**(code **)(*param_1 + 8))(param_1,&DAT_1801cc1f0,&local_10);
  if (local_10[2] != 0) {
    local_10 = (int32_t *)*local_10;
    local_res8[0] = 0xf0;
    local_18[0] = 0xc0;
    (**(code **)(*param_2 + 0x20))(param_2,1,&local_10,local_18,local_res8);
  }
  return;
}

// ---- Function: FUN_1800c90b0 ----
void FUN_1800c90b0(void)

{
  HMODULE pHVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x10);
  if (*piVar2 < DAT_1801fc780) {
    FUN_180125398(&DAT_1801fc780);
    if (DAT_1801fc780 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc788 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc780);
    }
  }
  if (DAT_1801fc788 != (FARPROC)0x0) {
    (*DAT_1801fc788)(0,&LAB_1800c77b0);
  }
  if (*piVar2 < DAT_1801fc790) {
    FUN_180125398(&DAT_1801fc790);
    if (DAT_1801fc790 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc798 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc790);
    }
  }
  if (DAT_1801fc798 != (FARPROC)0x0) {
    (*DAT_1801fc798)(2,FUN_1800c77c0);
  }
  if (*piVar2 < DAT_1801fc7a0) {
    FUN_180125398(&DAT_1801fc7a0);
    if (DAT_1801fc7a0 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc7a8 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc7a0);
    }
  }
  if (DAT_1801fc7a8 != (FARPROC)0x0) {
    (*DAT_1801fc7a8)(4,&LAB_1800c7800);
  }
  if (*piVar2 < DAT_1801fc7b0) {
    FUN_180125398(&DAT_1801fc7b0);
    if (DAT_1801fc7b0 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc7b8 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc7b0);
    }
  }
  if (DAT_1801fc7b8 != (FARPROC)0x0) {
    (*DAT_1801fc7b8)(9,FUN_1800c78a0);
  }
  if (*piVar2 < DAT_1801fc7c0) {
    FUN_180125398(&DAT_1801fc7c0);
    if (DAT_1801fc7c0 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc7c8 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc7c0);
    }
  }
  if (DAT_1801fc7c8 != (FARPROC)0x0) {
    (*DAT_1801fc7c8)(1,FUN_1800c78f0);
  }
  if (*piVar2 < DAT_1801fc7d0) {
    FUN_180125398(&DAT_1801fc7d0);
    if (DAT_1801fc7d0 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc7d8 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc7d0);
    }
  }
  if (DAT_1801fc7d8 != (FARPROC)0x0) {
    (*DAT_1801fc7d8)(3,&LAB_1800c79b0);
  }
  if (*piVar2 < DAT_1801fc7e0) {
    FUN_180125398(&DAT_1801fc7e0);
    if (DAT_1801fc7e0 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc7e8 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc7e0);
    }
  }
  if (DAT_1801fc7e8 != (FARPROC)0x0) {
    (*DAT_1801fc7e8)(5,FUN_1800c79c0);
  }
  if (*piVar2 < DAT_1801fc7f0) {
    FUN_180125398(&DAT_1801fc7f0);
    if (DAT_1801fc7f0 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc7f8 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc7f0);
    }
  }
  if (DAT_1801fc7f8 != (FARPROC)0x0) {
    (*DAT_1801fc7f8)(10,&DAT_1800c7a70);
  }
  if (*piVar2 < DAT_1801fc800) {
    FUN_180125398(&DAT_1801fc800);
    if (DAT_1801fc800 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc808 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc800);
    }
  }
  if (DAT_1801fc808 != (FARPROC)0x0) {
    (*DAT_1801fc808)(0xf,FUN_1800c7b50);
  }
  if (*piVar2 < DAT_1801fc810) {
    FUN_180125398(&DAT_1801fc810);
    if (DAT_1801fc810 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc818 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc810);
    }
  }
  if (DAT_1801fc818 != (FARPROC)0x0) {
    (*DAT_1801fc818)(0x12,&LAB_1800c7fa0);
  }
  if (*piVar2 < DAT_1801fc820) {
    FUN_180125398(&DAT_1801fc820);
    if (DAT_1801fc820 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc828 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc820);
    }
  }
  if (DAT_1801fc828 != (FARPROC)0x0) {
    (*DAT_1801fc828)(0x10,FUN_1800c8120);
  }
  if (*piVar2 < DAT_1801fc830) {
    FUN_180125398(&DAT_1801fc830);
    if (DAT_1801fc830 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc838 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc830);
    }
  }
  if (DAT_1801fc838 != (FARPROC)0x0) {
    (*DAT_1801fc838)(0x34,FUN_1800c8240);
  }
  if (*piVar2 < DAT_1801fc840) {
    FUN_180125398(&DAT_1801fc840);
    if (DAT_1801fc840 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc848 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc840);
    }
  }
  if (DAT_1801fc848 != (FARPROC)0x0) {
    (*DAT_1801fc848)(0x35,&LAB_1800c8320);
  }
  if (*piVar2 < DAT_1801fc850) {
    FUN_180125398(&DAT_1801fc850);
    if (DAT_1801fc850 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc858 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc850);
    }
  }
  if (DAT_1801fc858 != (FARPROC)0x0) {
    (*DAT_1801fc858)(0x37,FUN_1800c8340);
  }
  if (*piVar2 < DAT_1801fc860) {
    FUN_180125398(&DAT_1801fc860);
    if (DAT_1801fc860 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc868 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc860);
    }
  }
  if (DAT_1801fc868 != (FARPROC)0x0) {
    (*DAT_1801fc868)(0x2c,&LAB_1800c8400);
  }
  if (*piVar2 < DAT_1801fc870) {
    FUN_180125398(&DAT_1801fc870);
    if (DAT_1801fc870 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc878 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc870);
    }
  }
  if (DAT_1801fc878 != (FARPROC)0x0) {
    (*DAT_1801fc878)(0x27,&LAB_1800c8590);
  }
  if (*piVar2 < DAT_1801fc880) {
    FUN_180125398(&DAT_1801fc880);
    if (DAT_1801fc880 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc888 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc880);
    }
  }
  if (DAT_1801fc888 != (FARPROC)0x0) {
    (*DAT_1801fc888)(0x29,&LAB_1800c8440);
  }
  if (*piVar2 < DAT_1801fc890) {
    FUN_180125398(&DAT_1801fc890);
    if (DAT_1801fc890 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc898 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc890);
    }
  }
  if (DAT_1801fc898 != (FARPROC)0x0) {
    (*DAT_1801fc898)(0x3e,FUN_1800c84c0);
  }
  if (*piVar2 < DAT_1801fc8a0) {
    FUN_180125398(&DAT_1801fc8a0);
    if (DAT_1801fc8a0 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc8a8 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc8a0);
    }
  }
  if (DAT_1801fc8a8 != (FARPROC)0x0) {
    (*DAT_1801fc8a8)(0x46,FUN_1800c8680);
  }
  if (*piVar2 < DAT_1801fc8b0) {
    FUN_180125398(&DAT_1801fc8b0);
    if (DAT_1801fc8b0 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc8b8 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc8b0);
    }
  }
  if (DAT_1801fc8b8 != (FARPROC)0x0) {
    (*DAT_1801fc8b8)(0x48,FUN_1800c86e0);
  }
  if (*piVar2 < DAT_1801fc8c0) {
    FUN_180125398(&DAT_1801fc8c0);
    if (DAT_1801fc8c0 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc8c8 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc8c0);
    }
  }
  if (DAT_1801fc8c8 != (FARPROC)0x0) {
    (*DAT_1801fc8c8)(0x49,FUN_1800c8770);
  }
  if (*piVar2 < DAT_1801fc8d0) {
    FUN_180125398(&DAT_1801fc8d0);
    if (DAT_1801fc8d0 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc8d8 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc8d0);
    }
  }
  if (DAT_1801fc8d8 != (FARPROC)0x0) {
    (*DAT_1801fc8d8)(0x4a,FUN_1800c88c0);
  }
  FUN_1800c5f70(FUN_1800c8be0);
  if (*piVar2 < DAT_1801fc8e0) {
    FUN_180125398(&DAT_1801fc8e0);
    if (DAT_1801fc8e0 == -1) {
      pHVar1 = (HMODULE)FUN_1800c6f60();
      DAT_1801fc8e8 = GetProcAddress(pHVar1,"ReShadeRegisterEvent");
      _Init_thread_footer(&DAT_1801fc8e0);
    }
  }
  if (DAT_1801fc8e8 != (FARPROC)0x0) {
    (*DAT_1801fc8e8)(0x4d,FUN_1800c9040);
  }
  FUN_1800c6000(&LAB_1800c7740);
  return;
}

// ---- Function: FUN_1800c99d0 ----
void FUN_1800c99d0(longlong *param_1)

{
  int32_t *puVar1;
  int32_t *puVar2;
  
  puVar1 = (int32_t *)*param_1;
  *(int32_t *)puVar1[1] = 0;
  puVar1 = (int32_t *)*puVar1;
  while (puVar1 != (int32_t *)0x0) {
    puVar2 = (int32_t *)*puVar1;
    FUN_1800cb100(puVar1 + 0xc);
    thunk_FUN_18012d5e8(puVar1);
    puVar1 = puVar2;
  }
  thunk_FUN_18012d5e8((LPVOID)*param_1);
  return;
}

// ---- Function: FUN_1800c9a40 ----
void FUN_1800c9a40(longlong param_1)

{
  int32_t *puVar1;
  int32_t *puVar2;
  int32_t local_res8;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    puVar1 = *(int32_t **)(param_1 + 8);
    *(int32_t *)puVar1[1] = 0;
    puVar1 = (int32_t *)*puVar1;
    while (puVar1 != (int32_t *)0x0) {
      puVar2 = (int32_t *)*puVar1;
      FUN_1800cb100(puVar1 + 0xc);
      thunk_FUN_18012d5e8(puVar1);
      puVar1 = puVar2;
    }
    *(int32_t *)*(int32_t *)(param_1 + 8) = *(int32_t *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(int32_t *)(param_1 + 0x10) = 0;
    local_res8 = *(int32_t *)(param_1 + 8);
    FUN_1800a9480(*(int32_t **)(param_1 + 0x18),*(int32_t **)(param_1 + 0x20),&local_res8);
  }
  return;
}

