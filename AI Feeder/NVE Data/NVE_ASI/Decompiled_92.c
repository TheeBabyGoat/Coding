#include <stdint.h>
#include <stddef.h>

// ---- Function: _exception_enabled ----
/* Library Function - Single Match
    _exception_enabled
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool _exception_enabled(uint param_1,ulonglong param_2)

{
  uint uVar1;
  
  uVar1 = param_1 & 0x1f;
  if (((param_1 & 8) == 0) || (-1 < (char)param_2)) {
    if (((param_1 & 4) == 0) || ((param_2 >> 9 & 1) == 0)) {
      if (((param_1 & 1) == 0) || ((param_2 >> 10 & 1) == 0)) {
        if (((param_1 & 2) != 0) && ((param_2 >> 0xb & 1) != 0)) {
          if ((param_1 & 0x10) != 0) {
            _set_statfp(0x10);
          }
          uVar1 = param_1 & 0x1d;
        }
      }
      else {
        _set_statfp(8);
        uVar1 = param_1 & 0x1e;
      }
    }
    else {
      _set_statfp(4);
      uVar1 = param_1 & 0x1b;
    }
  }
  else {
    _set_statfp(1);
    uVar1 = param_1 & 0x17;
  }
  if (((param_1 & 0x10) != 0) && ((param_2 >> 0xc & 1) != 0)) {
    _set_statfp(0x20);
    uVar1 = uVar1 & 0xffffffef;
  }
  return uVar1 == 0;
}

// ---- Function: FUN_18014ce5c ----
void FUN_18014ce5c(int32_t param_1,uint param_2,int32_t param_3,int param_4,uint param_5,
                  uint param_6,int32_t param_7,int32_t param_8,int param_9)

{
  int32_t uVar1;
  bool bVar2;
  uint uVar3;
  int32_t extraout_var_00;
  int32_t extraout_var;
  int32_t uVar4;
  int32_t auStackY_108 [32];
  int32_t local_c8;
  ulonglong local_c0;
  uint local_b8 [12];
  int32_t local_88;
  uint local_78;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_108;
  uVar3 = _ctrlfp(0x1f80,0xffc0);
  local_c0 = CONCAT44(extraout_var_00,uVar3);
  local_c8 = param_3;
  bVar2 = _exception_enabled(param_5,local_c0);
  uVar1 = param_8;
  if ((int)CONCAT71(extraout_var,bVar2) == 0) {
    if (param_9 == 2) {
      local_88 = param_8;
      local_78 = local_78 & 0xffffffe3 | 3;
    }
    FUN_1801412e8(local_b8,&local_c0,(ulonglong)param_5,param_2,(uint *)&param_7,(uint *)&local_c8);
  }
  uVar4 = FUN_180144a90();
  if (((char)uVar4 == '\0') || (param_4 == 0)) {
    FUN_180141644(param_4);
    _ctrlfp((uint)local_c0,0xffc0);
  }
  else {
    FUN_18014cd38(param_4,(ulonglong)param_6,param_1,param_7,uVar1,local_c8,(uint)local_c0);
  }
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_108);
  return;
}

// ---- Function: FUN_18014cf84 ----
void FUN_18014cf84(int32_t param_1,uint param_2,float param_3,int param_4,uint param_5,
                  uint param_6,float param_7,float param_8,int param_9)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  int32_t extraout_var_00;
  int32_t extraout_var;
  int32_t uVar4;
  int32_t auStackY_108 [32];
  float local_c8 [2];
  ulonglong local_c0;
  uint local_b8 [12];
  float local_88;
  uint local_78;
  ulonglong local_48;
  
  local_48 = DAT_1801eb080 ^ (ulonglong)auStackY_108;
  uVar3 = _ctrlfp(0x1f80,0xffc0);
  local_c0 = CONCAT44(extraout_var_00,uVar3);
  local_c8[0] = param_3;
  bVar2 = _exception_enabled(param_5,local_c0);
  fVar1 = param_8;
  if ((int)CONCAT71(extraout_var,bVar2) == 0) {
    if (param_9 == 2) {
      local_88 = param_8;
      local_78 = local_78 & 0xffffffe1 | 1;
    }
    FUN_180141618(local_b8,&local_c0,(ulonglong)param_5,param_2,(uint *)&param_7,(uint *)local_c8);
  }
  uVar4 = FUN_180144a90();
  if (((char)uVar4 == '\0') || (param_4 == 0)) {
    FUN_180141644(param_4);
    _ctrlfp((uint)local_c0,0xffc0);
  }
  else {
    FUN_18014cd38(param_4,(ulonglong)param_6,param_1,(double)param_7,(double)fVar1,
                  (double)local_c8[0],(uint)local_c0);
  }
  FUN_1801252c0(local_48 ^ (ulonglong)auStackY_108);
  return;
}

// ---- Function: _handle_nan ----
/* Library Function - Single Match
    _handle_nan
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong _handle_nan(ulonglong param_1)

{
  return param_1 | 0x8000000000000;
}

// ---- Function: _handle_nanf ----
/* Library Function - Single Match
    _handle_nanf
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint _handle_nanf(uint param_1)

{
  return param_1 | 0x400000;
}

// ---- Function: __acrt_initialize_fma3 ----
/* Library Function - Single Match
    __acrt_initialize_fma3
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int32_t __acrt_initialize_fma3(void)

{
  longlong lVar1;
  byte in_XCR0;
  
  DAT_1801ee8e4 = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    DAT_1801ee8e4 = (uint)((in_XCR0 & 6) == 6);
  }
  DAT_1801ee8e8 = DAT_1801ee8e4;
  return 0;
}

// ---- Function: FUN_18014d160 ----
void FUN_18014d160(int32_t param_1,int32_t param_2,int param_3)

{
  FUN_18014d180(param_1,param_2,param_3,0x1b,"log10");
  return;
}

// ---- Function: FUN_18014d180 ----
int32_t
FUN_18014d180(int32_t param_1,int32_t param_2,int param_3,uint param_4,int32_t param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 == 1) {
    iVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return (int)param_2;
    }
    uVar3 = 0x21;
    uVar2 = 8;
    iVar1 = 1;
  }
  FUN_18014ce5c(param_5,param_4,param_2,iVar1,uVar2,uVar3,param_1,0,1);
  return (int)param_2;
}

// ---- Function: _FindPESection ----
/* Library Function - Single Match
    _FindPESection
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

PIMAGE_SECTION_HEADER __cdecl _FindPESection(PBYTE pImageBase,DWORD_PTR rva)

{
  int iVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  uint uVar3;
  
  iVar1 = *(int *)(pImageBase + 0x3c);
  uVar3 = 0;
  p_Var2 = (PIMAGE_SECTION_HEADER)
           (pImageBase +
           (ulonglong)*(ushort *)(pImageBase + (longlong)iVar1 + 0x14) + 0x18 + (longlong)iVar1);
  if (*(ushort *)(pImageBase + (longlong)iVar1 + 6) != 0) {
    do {
      if ((p_Var2->VirtualAddress <= rva) &&
         (rva < (p_Var2->Misc).PhysicalAddress + p_Var2->VirtualAddress)) {
        return p_Var2;
      }
      uVar3 = uVar3 + 1;
      p_Var2 = p_Var2 + 1;
    } while (uVar3 < *(ushort *)(pImageBase + (longlong)iVar1 + 6));
  }
  return (PIMAGE_SECTION_HEADER)0x0;
}

// ---- Function: _IsNonwritableInCurrentImage ----
/* Library Function - Single Match
    _IsNonwritableInCurrentImage
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget)

{
  bool bVar1;
  int32_t extraout_var;
  PIMAGE_SECTION_HEADER p_Var2;
  
  bVar1 = FUN_18014d2c0((short *)&IMAGE_DOS_HEADER_180000000);
  p_Var2 = (PIMAGE_SECTION_HEADER)CONCAT71(extraout_var,bVar1);
  if ((int)p_Var2 != 0) {
    p_Var2 = _FindPESection((PBYTE)&IMAGE_DOS_HEADER_180000000,(DWORD_PTR)(pTarget + -0x180000000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      p_Var2 = (PIMAGE_SECTION_HEADER)(ulonglong)(~(p_Var2->Characteristics >> 0x1f) & 1);
    }
  }
  return (BOOL)p_Var2;
}

// ---- Function: FUN_18014d2c0 ----
bool FUN_18014d2c0(short *param_1)

{
  if ((*param_1 == 0x5a4d) &&
     (*(int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1) == 0x4550)) {
    return (short)((int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1))[6] == 0x20b;
  }
  return false;
}

// ---- Function: FID_conflict___GSHandlerCheck_EH ----
/* Library Function - Multiple Matches With Different Base Names
    __GSHandlerCheck_EH
    __GSHandlerCheck_EH4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void FID_conflict___GSHandlerCheck_EH
               (EHExceptionRecord *param_1,ulonglong param_2,_CONTEXT *param_3,
               _xDISPATCHER_CONTEXT *param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,(longlong)param_4,(uint *)(lVar1 + 4));
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
    FUN_1801272cc(param_1,param_2,param_3,param_4);
  }
  return;
}

// ---- Function: FUN_18014d440 ----
void FUN_18014d440(PVOID param_1,PVOID param_2)

{
  RtlUnwind(param_1,param_2,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

// ---- Function: FUN_18014d46c ----
char * FUN_18014d46c(ulonglong param_1,char param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  int32_t auVar6 [16];
  char cVar7;
  char cVar11;
  char cVar12;
  char cVar13;
  int32_t in_XMM1 [16];
  int32_t auVar8 [16];
  int32_t auVar9 [16];
  int32_t auVar10 [16];
  
  pcVar4 = (char *)(param_1 & 0xfffffffffffffff0);
  auVar8 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
  auVar6[0] = -(*pcVar4 == '\0');
  auVar6[1] = -(pcVar4[1] == '\0');
  auVar6[2] = -(pcVar4[2] == '\0');
  auVar6[3] = -(pcVar4[3] == '\0');
  auVar6[4] = -(pcVar4[4] == '\0');
  auVar6[5] = -(pcVar4[5] == '\0');
  auVar6[6] = -(pcVar4[6] == '\0');
  auVar6[7] = -(pcVar4[7] == '\0');
  auVar6[8] = -(pcVar4[8] == '\0');
  auVar6[9] = -(pcVar4[9] == '\0');
  auVar6[10] = -(pcVar4[10] == '\0');
  auVar6[0xb] = -(pcVar4[0xb] == '\0');
  auVar6[0xc] = -(pcVar4[0xc] == '\0');
  auVar6[0xd] = -(pcVar4[0xd] == '\0');
  auVar6[0xe] = -(pcVar4[0xe] == '\0');
  auVar6[0xf] = -(pcVar4[0xf] == '\0');
  cVar7 = auVar8[0];
  auVar9[0] = -(cVar7 == *pcVar4);
  cVar11 = auVar8[1];
  auVar9[1] = -(cVar11 == pcVar4[1]);
  cVar12 = auVar8[2];
  auVar9[2] = -(cVar12 == pcVar4[2]);
  cVar13 = auVar8[3];
  auVar9[3] = -(cVar13 == pcVar4[3]);
  auVar9[4] = -(cVar7 == pcVar4[4]);
  auVar9[5] = -(cVar11 == pcVar4[5]);
  auVar9[6] = -(cVar12 == pcVar4[6]);
  auVar9[7] = -(cVar13 == pcVar4[7]);
  auVar9[8] = -(cVar7 == pcVar4[8]);
  auVar9[9] = -(cVar11 == pcVar4[9]);
  auVar9[10] = -(cVar12 == pcVar4[10]);
  auVar9[0xb] = -(cVar13 == pcVar4[0xb]);
  auVar9[0xc] = -(cVar7 == pcVar4[0xc]);
  auVar9[0xd] = -(cVar11 == pcVar4[0xd]);
  auVar9[0xe] = -(cVar12 == pcVar4[0xe]);
  auVar9[0xf] = -(cVar13 == pcVar4[0xf]);
  auVar9 = auVar9 | auVar6;
  uVar3 = (uint)(ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
  pcVar5 = pcVar4;
  if (uVar3 == 0) {
    do {
      pcVar4 = pcVar5 + 0x10;
      auVar10[0] = -(cVar7 == *pcVar4);
      auVar10[1] = -(cVar11 == pcVar5[0x11]);
      auVar10[2] = -(cVar12 == pcVar5[0x12]);
      auVar10[3] = -(cVar13 == pcVar5[0x13]);
      auVar10[4] = -(cVar7 == pcVar5[0x14]);
      auVar10[5] = -(cVar11 == pcVar5[0x15]);
      auVar10[6] = -(cVar12 == pcVar5[0x16]);
      auVar10[7] = -(cVar13 == pcVar5[0x17]);
      auVar10[8] = -(cVar7 == pcVar5[0x18]);
      auVar10[9] = -(cVar11 == pcVar5[0x19]);
      auVar10[10] = -(cVar12 == pcVar5[0x1a]);
      auVar10[0xb] = -(cVar13 == pcVar5[0x1b]);
      auVar10[0xc] = -(cVar7 == pcVar5[0x1c]);
      auVar10[0xd] = -(cVar11 == pcVar5[0x1d]);
      auVar10[0xe] = -(cVar12 == pcVar5[0x1e]);
      auVar10[0xf] = -(cVar13 == pcVar5[0x1f]);
      auVar8[0] = -(*pcVar4 == '\0');
      auVar8[1] = -(pcVar5[0x11] == '\0');
      auVar8[2] = -(pcVar5[0x12] == '\0');
      auVar8[3] = -(pcVar5[0x13] == '\0');
      auVar8[4] = -(pcVar5[0x14] == '\0');
      auVar8[5] = -(pcVar5[0x15] == '\0');
      auVar8[6] = -(pcVar5[0x16] == '\0');
      auVar8[7] = -(pcVar5[0x17] == '\0');
      auVar8[8] = -(pcVar5[0x18] == '\0');
      auVar8[9] = -(pcVar5[0x19] == '\0');
      auVar8[10] = -(pcVar5[0x1a] == '\0');
      auVar8[0xb] = -(pcVar5[0x1b] == '\0');
      auVar8[0xc] = -(pcVar5[0x1c] == '\0');
      auVar8[0xd] = -(pcVar5[0x1d] == '\0');
      auVar8[0xe] = -(pcVar5[0x1e] == '\0');
      auVar8[0xf] = -(pcVar5[0x1f] == '\0');
      auVar10 = auVar10 | auVar8;
      uVar2 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar10[0xf] >> 7) << 0xf;
      uVar3 = (uint)uVar2;
      pcVar5 = pcVar4;
    } while (uVar2 == 0);
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  pcVar5 = (char *)0x0;
  if (pcVar4[uVar1] == param_2) {
    pcVar5 = pcVar4 + uVar1;
  }
  return pcVar5;
}

// ---- Function: FUN_18014d4e8 ----
ushort * FUN_18014d4e8(ushort *param_1,ushort param_2)

{
  uint uVar1;
  longlong lVar2;
  ushort *puVar3;
  int32_t auVar4 [16];
  int32_t in_XMM1 [16];
  int32_t auVar5 [16];
  int32_t auVar6 [16];
  ushort uVar7;
  ushort uVar8;
  
  auVar5 = pshuflw(in_XMM1,ZEXT216(param_2),0);
  do {
    if (((uint)param_1 & 0xfff) < 0xff1) {
      auVar6._0_2_ = -(ushort)(*param_1 == 0);
      auVar6._2_2_ = -(ushort)(param_1[1] == 0);
      auVar6._4_2_ = -(ushort)(param_1[2] == 0);
      auVar6._6_2_ = -(ushort)(param_1[3] == 0);
      auVar6._8_2_ = -(ushort)(param_1[4] == 0);
      auVar6._10_2_ = -(ushort)(param_1[5] == 0);
      auVar6._12_2_ = -(ushort)(param_1[6] == 0);
      auVar6._14_2_ = -(ushort)(param_1[7] == 0);
      uVar7 = auVar5._0_2_;
      auVar4._0_2_ = -(ushort)(*param_1 == uVar7);
      uVar8 = auVar5._2_2_;
      auVar4._2_2_ = -(ushort)(param_1[1] == uVar8);
      auVar4._4_2_ = -(ushort)(param_1[2] == uVar7);
      auVar4._6_2_ = -(ushort)(param_1[3] == uVar8);
      auVar4._8_2_ = -(ushort)(param_1[4] == uVar7);
      auVar4._10_2_ = -(ushort)(param_1[5] == uVar8);
      auVar4._12_2_ = -(ushort)(param_1[6] == uVar7);
      auVar4._14_2_ = -(ushort)(param_1[7] == uVar8);
      auVar6 = auVar6 | auVar4;
      uVar7 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar6[0xf] >> 7) << 0xf;
      if (uVar7 != 0) {
        uVar1 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        puVar3 = (ushort *)0x0;
        if (*(ushort *)((longlong)param_1 + (ulonglong)uVar1) == param_2) {
          puVar3 = (ushort *)((longlong)param_1 + (ulonglong)uVar1);
        }
        return puVar3;
      }
      lVar2 = 0x10;
    }
    else {
      if (*param_1 == param_2) {
        return param_1;
      }
      if (*param_1 == 0) {
        return (ushort *)0x0;
      }
      lVar2 = 2;
    }
    param_1 = (ushort *)((longlong)param_1 + lVar2);
  } while( true );
}

// ---- Function: FUN_18014d560 ----
float FUN_18014d560(float param_1,float param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  float local_res8;
  
  dVar11 = (double)param_2;
  uVar15 = (uint)((ulonglong)dVar11 >> 0x20);
  dVar1 = (double)param_1;
  uVar3 = (uint)((ulonglong)dVar1 >> 0x20);
  iVar6 = (uVar3 >> 0x14 & 0x7ff) - (uVar15 >> 0x14 & 0x7ff);
  dVar9 = ABS(dVar11);
  dVar8 = ABS(dVar1);
  local_res8 = param_2;
  if ((0x7ff0000000000000 < (ulonglong)dVar9) ||
     (local_res8 = param_1, 0x7ff0000000000000 < (ulonglong)dVar8)) {
    fVar10 = (float)_handle_nanf((uint)local_res8);
    return fVar10;
  }
  uVar5 = 0;
  uVar7 = 0x20;
  if (dVar8 == 0.0) {
    if (-1 < (longlong)dVar11) goto LAB_18014d79c;
LAB_18014d62a:
    fVar10 = DAT_1801da58c;
    if (-1 < (longlong)dVar1) {
      fVar10 = DAT_1801d8e78;
    }
  }
  else {
    if (dVar9 == 0.0) {
      if (-1 < (longlong)dVar1) {
        _set_statfp(0x20);
        goto LAB_18014d659;
      }
    }
    else {
LAB_18014d659:
      if (iVar6 < 0x1b) {
        if ((iVar6 < -0xd) && (-1 < (longlong)dVar11)) {
          if (iVar6 < -0x96) {
            fVar10 = DAT_1801da580;
            if (-1 < (longlong)dVar1) {
              fVar10 = 0.0;
            }
          }
          else {
            if (-0x7f < iVar6) {
              dVar1 = dVar1 / dVar11;
LAB_18014d79c:
              return (float)dVar1;
            }
            dVar11 = (dVar1 * 1.2676506002282294e+30) / dVar11;
            uVar4 = (ulonglong)ABS(dVar11) >> 0x34;
            uVar3 = (uint)((ulonglong)ABS(dVar11) >> 0x34);
            if (uVar3 < 0x65) {
              if ((int)(0x65 - uVar3) < 0x37) {
                uVar5 = ((ulonglong)dVar11 & 0x1fffffffffffff | 0x10000000000000) >>
                        (100U - (char)uVar4 & 0x3f);
                uVar5 = (uVar5 >> 1) + (ulonglong)((uint)uVar5 & 1);
              }
            }
            else {
              uVar5 = uVar4 - 100 << 0x34 | (ulonglong)dVar11 & 0xfffffffffffff;
            }
            fVar10 = (float)(double)(uVar5 | (ulonglong)dVar11 & 0x8000000000000000);
            if ((uVar5 & 0x7ff0000000000000) != 0) {
              return fVar10;
            }
          }
          uVar7 = 0x30;
          goto LAB_18014d678;
        }
        if ((-0x1b < iVar6) || (-1 < (longlong)dVar11)) {
          if ((dVar8 == INFINITY) && (dVar9 == INFINITY)) {
            if ((longlong)dVar11 < 0) {
              fVar10 = DAT_1801da570;
              if ((longlong)dVar1 < 0) {
                fVar10 = DAT_1801da588;
              }
            }
            else {
              fVar10 = DAT_1801d8e2c;
              if ((longlong)dVar1 < 0) {
                fVar10 = DAT_1801da584;
              }
            }
            goto LAB_18014d678;
          }
          uVar7 = (uint)DAT_1801d9d50;
          uVar14 = (uint)((ulonglong)DAT_1801d9d50 >> 0x20);
          dVar8 = dVar11;
          if ((longlong)dVar11 < 0) {
            dVar8 = (double)CONCAT44(uVar15 ^ uVar14,SUB84(dVar11,0) ^ uVar7);
          }
          dVar9 = dVar1;
          if ((longlong)dVar1 < 0) {
            dVar9 = (double)CONCAT44(uVar3 ^ uVar14,SUB84(dVar1,0) ^ uVar7);
          }
          dVar12 = dVar8;
          dVar2 = dVar9;
          if (dVar8 < dVar9) {
            dVar12 = dVar9;
            dVar2 = dVar8;
          }
          dVar13 = dVar2 / dVar12;
          if (dVar13 <= _DAT_1801da530) {
            if (dVar13 < DAT_1801da528) goto LAB_18014d8ff;
            dVar12 = dVar13 * dVar13;
            dVar12 = (DAT_1801da550 - (DAT_1801da540 - dVar12 * _DAT_1801da538) * dVar12) *
                     dVar12 * dVar13;
          }
          else {
            uVar3 = (uint)(dVar13 * DAT_1801da578 + _DAT_1801da558);
            dVar13 = (double)uVar3;
            dVar12 = (dVar2 * DAT_1801da578 - dVar13 * dVar12) /
                     (dVar13 * dVar2 + dVar12 * DAT_1801da578);
            dVar13 = dVar12 + *(double *)(&DAT_1801d9da0 + (ulonglong)(uVar3 - 0x10) * 8);
            dVar12 = dVar12 * dVar12 * dVar12 * _DAT_1801da548;
          }
          dVar13 = dVar13 - dVar12;
LAB_18014d8ff:
          if (dVar8 < dVar9) {
            dVar13 = DAT_1801da560 - dVar13;
          }
          if ((longlong)dVar11 < 0) {
            dVar13 = DAT_1801da568 - dVar13;
          }
          if ((longlong)dVar1 < 0) {
            dVar13 = (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar14,
                                      SUB84(dVar13,0) ^ uVar7);
          }
          return (float)dVar13;
        }
        goto LAB_18014d62a;
      }
      fVar10 = DAT_1801d9d90;
      if (-1 < (longlong)dVar1) goto LAB_18014d678;
    }
    fVar10 = DAT_1801d9d94;
  }
LAB_18014d678:
  _set_statfp(uVar7);
  return fVar10;
}

// ---- Function: ceilf ----
/* Library Function - Single Match
    ceilf
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

float __cdecl ceilf(float _X)

{
  float fVar1;
  float fVar2;
  
  fVar1 = ABS(_X);
  fVar2 = _X;
  if ((uint)fVar1 < 0x4b800000) {
    if ((uint)fVar1 < 0x3f800000) {
      if ((fVar1 != 0.0) && (fVar2 = DAT_1801d8e38, _X != fVar1)) {
        fVar2 = -0.0;
      }
    }
    else {
      fVar2 = (float)(-1 << (0x96U - (char)((uint)_X >> 0x17) & 0x1f) & (uint)_X);
      if ((_X == fVar1) && (_X != fVar2)) {
        fVar2 = fVar2 + DAT_1801d8e38;
      }
    }
  }
  else if (0x7f800000 < (uint)fVar1) {
    fVar2 = (float)_handle_nanf((uint)_X);
    return fVar2;
  }
  return fVar2;
}

