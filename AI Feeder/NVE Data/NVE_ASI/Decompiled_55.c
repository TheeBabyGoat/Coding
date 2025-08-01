#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180127484 ----
void FUN_180127484(int32_t param_1,int32_t *UNRECOVERED_JUMPTABLE)

{
                    
                    
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}

// ---- Function: _IsExceptionObjectToBeDestroyed ----
/* Library Function - Single Match
    _IsExceptionObjectToBeDestroyed
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t _IsExceptionObjectToBeDestroyed(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = __vcrt_getptd();
  plVar2 = *(longlong **)(lVar1 + 0x58);
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar2 == param_1) break;
    plVar2 = (longlong *)plVar2[1];
  }
  return 0;
}

// ---- Function: __AdjustPointer ----
/* Library Function - Single Match
    __AdjustPointer
   
   Library: Visual Studio 2019 Release */

longlong __AdjustPointer(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2 + param_1;
  if (-1 < param_2[1]) {
    lVar1 = lVar1 + (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(param_2[1] + param_1)) +
                    (longlong)param_2[1];
  }
  return lVar1;
}

// ---- Function: __FrameUnwindFilter ----
/* Library Function - Single Match
    __FrameUnwindFilter
   
   Library: Visual Studio 2019 Release */

int32_t __FrameUnwindFilter(int32_t *param_1)

{
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

// ---- Function: FUN_180127544 ----
longlong FUN_180127544(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  return lVar1 + 0x20;
}

// ---- Function: FUN_180127558 ----
longlong FUN_180127558(void)

{
  longlong lVar1;
  
  lVar1 = __vcrt_getptd();
  return lVar1 + 0x28;
}

// ---- Function: Unwind_18012756c ----
void Unwind_18012756c(void)

{
  code *pcVar1;
  
  FUN_180136dec();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_180127578 ----
int32_t FUN_180127578(void)

{
  return DAT_1801edd00;
}

// ---- Function: _purecall ----
/* Library Function - Single Match
    _purecall
   
   Library: Visual Studio 2019 Release */

void _purecall(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180127578();
  if (lVar1 != 0) {
    (*(code *)PTR__guard_dispatch_icall_180157468)();
  }
                    
  abort();
}

// ---- Function: __std_exception_copy ----
/* Library Function - Single Match
    __std_exception_copy
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __std_exception_copy(longlong *param_1,longlong *param_2)

{
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

// ---- Function: __std_exception_destroy ----
/* Library Function - Single Match
    __std_exception_destroy
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __std_exception_destroy(int32_t *param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_18012d5e8((LPVOID)*param_1);
  }
  *param_1 = 0;
  *(int32_t *)(param_1 + 1) = 0;
  return;
}

// ---- Function: FUN_180127658 ----
int32_t FUN_180127658(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  PEXCEPTION_RECORD local_38;
  longlong local_30;
  
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
  else {
    uVar8 = param_4[4] - lVar2;
    for (; uVar1 = *puVar3, uVar9 < uVar1; uVar9 = uVar9 + 1) {
      uVar10 = (ulonglong)uVar9;
      if ((puVar3[uVar10 * 4 + 1] <= uVar11) && (uVar11 < puVar3[uVar10 * 4 + 2])) {
        if ((param_1->ExceptionFlags & 0x20) != 0) {
          uVar7 = 0;
          if (uVar1 != 0) {
            do {
              if ((((puVar3[uVar7 * 4 + 1] <= uVar8) && (uVar8 < puVar3[uVar7 * 4 + 2])) &&
                  (puVar3[uVar7 * 4 + 4] == puVar3[uVar10 * 4 + 4])) &&
                 (puVar3[uVar7 * 4 + 3] == puVar3[uVar10 * 4 + 3])) break;
              uVar6 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar6;
            } while (uVar6 < uVar1);
          }
          if ((uint)uVar7 != *puVar3) {
            return 1;
          }
        }
        if (puVar3[((ulonglong)uVar9 + 1) * 4] == 0) {
          *(uint *)(param_4 + 9) = uVar9 + 1;
          (*(code *)((ulonglong)puVar3[(ulonglong)uVar9 * 4 + 3] + lVar2))
                    (CONCAT71((int7)((ulonglong)uVar9 * 2 >> 8),1));
        }
        else if ((uVar8 == puVar3[((ulonglong)uVar9 + 1) * 4]) &&
                ((param_1->ExceptionFlags & 0x20) != 0)) {
          return 1;
        }
      }
    }
  }
  return 1;
}

// ---- Function: FUN_180127870 ----
int32_t (*) [16] FUN_180127870(int32_t (*param_1) [16],byte param_2)

{
  ushort uVar1;
  uint uVar2;
  int32_t (*pauVar3) [16];
  byte bVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  int32_t auVar12 [16];
  int32_t auVar13 [16];
  int32_t auVar14 [16];
  int32_t auVar15 [16];
  int32_t in_XMM1 [16];
  int32_t auVar19 [16];
  int32_t auVar20 [16];
  char cVar11;
  char cVar16;
  char cVar17;
  char cVar18;
  
  pauVar3 = (int32_t (*) [16])0x0;
  if (param_2 == 0) {
    pcVar6 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar12[0] = -(*pcVar6 == '\0');
    auVar12[1] = -(pcVar6[1] == '\0');
    auVar12[2] = -(pcVar6[2] == '\0');
    auVar12[3] = -(pcVar6[3] == '\0');
    auVar12[4] = -(pcVar6[4] == '\0');
    auVar12[5] = -(pcVar6[5] == '\0');
    auVar12[6] = -(pcVar6[6] == '\0');
    auVar12[7] = -(pcVar6[7] == '\0');
    auVar12[8] = -(pcVar6[8] == '\0');
    auVar12[9] = -(pcVar6[9] == '\0');
    auVar12[10] = -(pcVar6[10] == '\0');
    auVar12[0xb] = -(pcVar6[0xb] == '\0');
    auVar12[0xc] = -(pcVar6[0xc] == '\0');
    auVar12[0xd] = -(pcVar6[0xd] == '\0');
    auVar12[0xe] = -(pcVar6[0xe] == '\0');
    auVar12[0xf] = -(pcVar6[0xf] == '\0');
    uVar2 = (uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar12[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
    pcVar7 = pcVar6;
    if (uVar2 == 0) {
      do {
        pcVar6 = pcVar7 + 0x10;
        auVar13[0] = -(*pcVar6 == '\0');
        auVar13[1] = -(pcVar7[0x11] == '\0');
        auVar13[2] = -(pcVar7[0x12] == '\0');
        auVar13[3] = -(pcVar7[0x13] == '\0');
        auVar13[4] = -(pcVar7[0x14] == '\0');
        auVar13[5] = -(pcVar7[0x15] == '\0');
        auVar13[6] = -(pcVar7[0x16] == '\0');
        auVar13[7] = -(pcVar7[0x17] == '\0');
        auVar13[8] = -(pcVar7[0x18] == '\0');
        auVar13[9] = -(pcVar7[0x19] == '\0');
        auVar13[10] = -(pcVar7[0x1a] == '\0');
        auVar13[0xb] = -(pcVar7[0x1b] == '\0');
        auVar13[0xc] = -(pcVar7[0x1c] == '\0');
        auVar13[0xd] = -(pcVar7[0x1d] == '\0');
        auVar13[0xe] = -(pcVar7[0x1e] == '\0');
        auVar13[0xf] = -(pcVar7[0x1f] == '\0');
        uVar1 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf;
        uVar2 = (uint)uVar1;
        pcVar7 = pcVar6;
      } while (uVar1 == 0);
    }
    uVar8 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
    pauVar3 = (int32_t (*) [16])(pcVar6 + uVar8);
  }
  else if (DAT_1801eb0d0 < 2) {
    pcVar6 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    bVar4 = (byte)param_1 & 0xf;
    auVar19 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
    auVar14[0] = -(*pcVar6 == '\0');
    auVar14[1] = -(pcVar6[1] == '\0');
    auVar14[2] = -(pcVar6[2] == '\0');
    auVar14[3] = -(pcVar6[3] == '\0');
    auVar14[4] = -(pcVar6[4] == '\0');
    auVar14[5] = -(pcVar6[5] == '\0');
    auVar14[6] = -(pcVar6[6] == '\0');
    auVar14[7] = -(pcVar6[7] == '\0');
    auVar14[8] = -(pcVar6[8] == '\0');
    auVar14[9] = -(pcVar6[9] == '\0');
    auVar14[10] = -(pcVar6[10] == '\0');
    auVar14[0xb] = -(pcVar6[0xb] == '\0');
    auVar14[0xc] = -(pcVar6[0xc] == '\0');
    auVar14[0xd] = -(pcVar6[0xd] == '\0');
    auVar14[0xe] = -(pcVar6[0xe] == '\0');
    auVar14[0xf] = -(pcVar6[0xf] == '\0');
    cVar11 = auVar19[0];
    auVar15[0] = -(cVar11 == *pcVar6);
    cVar16 = auVar19[1];
    auVar15[1] = -(cVar16 == pcVar6[1]);
    cVar17 = auVar19[2];
    auVar15[2] = -(cVar17 == pcVar6[2]);
    cVar18 = auVar19[3];
    auVar15[3] = -(cVar18 == pcVar6[3]);
    auVar15[4] = -(cVar11 == pcVar6[4]);
    auVar15[5] = -(cVar16 == pcVar6[5]);
    auVar15[6] = -(cVar17 == pcVar6[6]);
    auVar15[7] = -(cVar18 == pcVar6[7]);
    auVar15[8] = -(cVar11 == pcVar6[8]);
    auVar15[9] = -(cVar16 == pcVar6[9]);
    auVar15[10] = -(cVar17 == pcVar6[10]);
    auVar15[0xb] = -(cVar18 == pcVar6[0xb]);
    auVar15[0xc] = -(cVar11 == pcVar6[0xc]);
    auVar15[0xd] = -(cVar16 == pcVar6[0xd]);
    auVar15[0xe] = -(cVar17 == pcVar6[0xe]);
    auVar15[0xf] = -(cVar18 == pcVar6[0xf]);
    uVar2 = (uint)(ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar15[0xf] >> 7) << 0xf) & -1 << bVar4;
    uVar8 = (uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar14[0xf] >> 7) << 0xf) & -1 << bVar4;
    pcVar7 = pcVar6;
    if (uVar8 == 0) {
      do {
        uVar8 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> uVar8 == 0; uVar8 = uVar8 - 1) {
          }
        }
        if (uVar2 != 0) {
          pauVar3 = (int32_t (*) [16])(pcVar7 + uVar8);
        }
        pcVar6 = pcVar7 + 0x10;
        auVar20[0] = -(*pcVar6 == '\0');
        auVar20[1] = -(pcVar7[0x11] == '\0');
        auVar20[2] = -(pcVar7[0x12] == '\0');
        auVar20[3] = -(pcVar7[0x13] == '\0');
        auVar20[4] = -(pcVar7[0x14] == '\0');
        auVar20[5] = -(pcVar7[0x15] == '\0');
        auVar20[6] = -(pcVar7[0x16] == '\0');
        auVar20[7] = -(pcVar7[0x17] == '\0');
        auVar20[8] = -(pcVar7[0x18] == '\0');
        auVar20[9] = -(pcVar7[0x19] == '\0');
        auVar20[10] = -(pcVar7[0x1a] == '\0');
        auVar20[0xb] = -(pcVar7[0x1b] == '\0');
        auVar20[0xc] = -(pcVar7[0x1c] == '\0');
        auVar20[0xd] = -(pcVar7[0x1d] == '\0');
        auVar20[0xe] = -(pcVar7[0x1e] == '\0');
        auVar20[0xf] = -(pcVar7[0x1f] == '\0');
        auVar19[0] = -(cVar11 == *pcVar6);
        auVar19[1] = -(cVar16 == pcVar7[0x11]);
        auVar19[2] = -(cVar17 == pcVar7[0x12]);
        auVar19[3] = -(cVar18 == pcVar7[0x13]);
        auVar19[4] = -(cVar11 == pcVar7[0x14]);
        auVar19[5] = -(cVar16 == pcVar7[0x15]);
        auVar19[6] = -(cVar17 == pcVar7[0x16]);
        auVar19[7] = -(cVar18 == pcVar7[0x17]);
        auVar19[8] = -(cVar11 == pcVar7[0x18]);
        auVar19[9] = -(cVar16 == pcVar7[0x19]);
        auVar19[10] = -(cVar17 == pcVar7[0x1a]);
        auVar19[0xb] = -(cVar18 == pcVar7[0x1b]);
        auVar19[0xc] = -(cVar11 == pcVar7[0x1c]);
        auVar19[0xd] = -(cVar16 == pcVar7[0x1d]);
        auVar19[0xe] = -(cVar17 == pcVar7[0x1e]);
        auVar19[0xf] = -(cVar18 == pcVar7[0x1f]);
        uVar1 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
        uVar8 = (uint)uVar1;
        uVar2 = (uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar19[0xf] >> 7) << 0xf);
        pcVar7 = pcVar6;
      } while (uVar1 == 0);
    }
    uVar2 = uVar2 & (-uVar8 & uVar8) - 1;
    uVar8 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> uVar8 == 0; uVar8 = uVar8 - 1) {
      }
    }
    if (uVar2 != 0) {
      pauVar3 = (int32_t (*) [16])(pcVar6 + uVar8);
    }
  }
  else {
    while( true ) {
      bVar9 = false;
      bVar10 = ((ulonglong)param_1 & 0xf) == 0;
      if (bVar10) break;
      if ((*param_1)[0] == param_2) {
        pauVar3 = param_1;
      }
      if ((*param_1)[0] == '\0') {
        return pauVar3;
      }
      param_1 = (int32_t (*) [16])(*param_1 + 1);
    }
    while( true ) {
      iVar5 = pcmpistri(ZEXT116(param_2),*param_1,0x40);
      if (bVar9) {
        pauVar3 = (int32_t (*) [16])(*param_1 + iVar5);
        bVar10 = pauVar3 == (int32_t (*) [16])0x0;
        pcmpistri(ZEXT116(param_2),*param_1,0x40);
      }
      if (bVar10) break;
      bVar9 = (int32_t (*) [16])0xffffffffffffffef < param_1;
      param_1 = param_1 + 1;
      bVar10 = param_1 == (int32_t (*) [16])0x0;
    }
  }
  return pauVar3;
}

// ---- Function: FUN_1801279a8 ----
void FUN_1801279a8(longlong *param_1,byte *param_2)

{
  ULONG_PTR UVar1;
  PVOID local_38;
  ULONG_PTR local_30;
  longlong *local_28;
  byte *local_20;
  PVOID local_18;
  
  UVar1 = 0x19930520;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(byte **)(*(longlong *)(*param_1 + -8) + 0x30);
    (*(code *)PTR__guard_dispatch_icall_180157468)();
  }
  local_38 = (PVOID)0x0;
  if (param_2 != (byte *)0x0) {
    local_38 = RtlPcToFileHeader(param_2,&local_38);
    if (((*param_2 & 8) != 0) || (local_38 == (PVOID)0x0)) {
      UVar1 = 0x1994000;
    }
  }
  local_30 = UVar1;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = local_38;
  RaiseException(0xe06d7363,1,4,&local_30);
  return;
}

// ---- Function: __uncaught_exceptions ----
/* Library Function - Single Match
    __uncaught_exceptions
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t __uncaught_exceptions(void)

{
  int32_t uVar1;
  longlong lVar2;
  
  lVar2 = __vcrt_getptd_noinit();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(int32_t *)(lVar2 + 0x30);
  }
  return uVar1;
}

// ---- Function: __vcrt_initialize ----
/* Library Function - Single Match
    __vcrt_initialize
   
   Library: Visual Studio 2019 Release */

ulonglong __vcrt_initialize(void)

{
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

// ---- Function: __vcrt_thread_attach ----
/* Library Function - Single Match
    __vcrt_thread_attach
   
   Library: Visual Studio 2019 Release */

bool __vcrt_thread_attach(void)

{
  LPVOID pvVar1;
  
  pvVar1 = __vcrt_getptd_noexit();
  return pvVar1 != (LPVOID)0x0;
}

