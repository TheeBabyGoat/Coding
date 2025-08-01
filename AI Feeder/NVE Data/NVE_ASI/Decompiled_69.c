#include <stdint.h>
#include <stddef.h>

// ---- Function: FUN_180136820 ----
int32_t FUN_180136820(void)

{
  __acrt_ptd *p_Var1;
  int32_t *local_res8 [4];
  
  p_Var1 = FUN_1801387d8();
  local_res8[0] = *(int32_t **)(p_Var1 + 0x90);
  FUN_18013c1fc((longlong)p_Var1,(longlong *)local_res8);
  return *local_res8[0];
}

// ---- Function: islower ----
/* Library Function - Single Match
    islower
   
   Library: Visual Studio 2019 Release */

int __cdecl islower(int _C)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  longlong *local_res10 [3];
  
  if (DAT_1801ee158 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1801eb2f0 + (longlong)_C * 2) & 2;
    }
  }
  else {
    p_Var2 = FUN_1801387d8();
    local_res10[0] = *(longlong **)(p_Var2 + 0x90);
    FUN_18013c1fc((longlong)p_Var2,(longlong *)local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 2;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,2,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}

// ---- Function: isupper ----
/* Library Function - Single Match
    isupper
   
   Library: Visual Studio 2019 Release */

int __cdecl isupper(int _C)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  longlong *local_res10 [3];
  
  if (DAT_1801ee158 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1801eb2f0 + (longlong)_C * 2) & 1;
    }
  }
  else {
    p_Var2 = FUN_1801387d8();
    local_res10[0] = *(longlong **)(p_Var2 + 0x90);
    FUN_18013c1fc((longlong)p_Var2,(longlong *)local_res10);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_res10[0] + (longlong)_C * 2) & 1;
    }
    if (1 < (int)local_res10[0][1]) {
      iVar1 = _isctype_l(_C,1,(_locale_t)0x0);
      return iVar1;
    }
  }
  return 0;
}

// ---- Function: _wcsdup ----
/* Library Function - Single Match
    _wcsdup
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

wchar_t * __cdecl _wcsdup(wchar_t *_Str)

{
  errno_t eVar1;
  wchar_t *_Dst;
  longlong lVar2;
  rsize_t _SizeInWords;
  longlong lVar3;
  
  if (_Str != (wchar_t *)0x0) {
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (_Str[lVar2] != L'\0');
    _SizeInWords = lVar3 + 2;
    _Dst = (wchar_t *)_malloc_base(_SizeInWords * 2);
    if (_Dst != (wchar_t *)0x0) {
      eVar1 = wcscpy_s(_Dst,_SizeInWords,_Str);
      if (eVar1 == 0) {
        return _Dst;
      }
                    
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return (wchar_t *)0x0;
}

// ---- Function: __strncnt ----
/* Library Function - Single Match
    __strncnt
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

size_t __cdecl __strncnt(char *_String,size_t _Cnt)

{
  char cVar1;
  size_t sVar2;
  
  sVar2 = 0;
  cVar1 = *_String;
  while ((cVar1 != '\0' && (sVar2 != _Cnt))) {
    sVar2 = sVar2 + 1;
    cVar1 = _String[sVar2];
  }
  return sVar2;
}

// ---- Function: FUN_180136a44 ----
ulonglong FUN_180136a44(int32_t (*param_1) [32],ulonglong param_2)

{
  bool bVar1;
  int32_t auVar2 [32];
  int32_t *puVar3;
  int32_t (*pauVar4) [32];
  ulonglong uVar5;
  int32_t auVar6 [16];
  
  pauVar4 = param_1;
  if (DAT_1801eb0d0 < 5) {
    if (DAT_1801eb0d0 < 1) {
      if (param_1 != (int32_t (*) [32])(*param_1 + param_2)) {
        do {
          if ((*pauVar4)[0] == '\0') break;
          pauVar4 = (int32_t (*) [32])(*pauVar4 + 1);
        } while (pauVar4 != (int32_t (*) [32])(*param_1 + param_2));
      }
    }
    else {
      uVar5 = (ulonglong)((uint)param_1 & 0xf);
      uVar5 = -(ulonglong)(uVar5 != 0) & 0x10 - uVar5;
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      if (param_1 != (int32_t (*) [32])(*param_1 + uVar5)) {
        do {
          if ((*pauVar4)[0] == '\0') break;
          pauVar4 = (int32_t (*) [32])(*pauVar4 + 1);
        } while (pauVar4 != (int32_t (*) [32])(*param_1 + uVar5));
      }
      if ((longlong)pauVar4 - (longlong)param_1 != uVar5) {
        return (longlong)pauVar4 - (longlong)param_1;
      }
      puVar3 = *pauVar4;
      while ((pauVar4 != (int32_t (*) [32])(puVar3 + (param_2 - uVar5 & 0xfffffffffffffff0)) &&
             (auVar6[0] = -((*pauVar4)[0] == '\0'), auVar6[1] = -((*pauVar4)[1] == '\0'),
             auVar6[2] = -((*pauVar4)[2] == '\0'), auVar6[3] = -((*pauVar4)[3] == '\0'),
             auVar6[4] = -((*pauVar4)[4] == '\0'), auVar6[5] = -((*pauVar4)[5] == '\0'),
             auVar6[6] = -((*pauVar4)[6] == '\0'), auVar6[7] = -((*pauVar4)[7] == '\0'),
             auVar6[8] = -((*pauVar4)[8] == '\0'), auVar6[9] = -((*pauVar4)[9] == '\0'),
             auVar6[10] = -((*pauVar4)[10] == '\0'), auVar6[0xb] = -((*pauVar4)[0xb] == '\0'),
             auVar6[0xc] = -((*pauVar4)[0xc] == '\0'), auVar6[0xd] = -((*pauVar4)[0xd] == '\0'),
             auVar6[0xe] = -((*pauVar4)[0xe] == '\0'), bVar1 = (*pauVar4)[0xf] == '\0',
             auVar6[0xf] = -bVar1,
             (((((((((((((((auVar6 >> 7 & (int32_t  [16])0x1) == (int32_t  [16])0x0 &&
                          (auVar6 >> 0xf & (int32_t  [16])0x1) == (int32_t  [16])0x0) &&
                         (auVar6 >> 0x17 & (int32_t  [16])0x1) == (int32_t  [16])0x0) &&
                        (auVar6 >> 0x1f & (int32_t  [16])0x1) == (int32_t  [16])0x0) &&
                       (auVar6 >> 0x27 & (int32_t  [16])0x1) == (int32_t  [16])0x0) &&
                      (auVar6 >> 0x2f & (int32_t  [16])0x1) == (int32_t  [16])0x0) &&
                     (auVar6 >> 0x37 & (int32_t  [16])0x1) == (int32_t  [16])0x0) &&
                    (auVar6 >> 0x3f & (int32_t  [16])0x1) == (int32_t  [16])0x0) &&
                   (auVar6 >> 0x47 & (int32_t  [16])0x1) == (int32_t  [16])0x0) &&
                  (auVar6 >> 0x4f & (int32_t  [16])0x1) == (int32_t  [16])0x0) &&
                 (auVar6 >> 0x57 & (int32_t  [16])0x1) == (int32_t  [16])0x0) &&
                (auVar6 >> 0x5f & (int32_t  [16])0x1) == (int32_t  [16])0x0) &&
               (auVar6 >> 0x67 & (int32_t  [16])0x1) == (int32_t  [16])0x0) &&
              (auVar6 >> 0x6f & (int32_t  [16])0x1) == (int32_t  [16])0x0) &&
             (auVar6 >> 0x77 & (int32_t  [16])0x1) == (int32_t  [16])0x0) && !bVar1))) {
        pauVar4 = (int32_t (*) [32])(*pauVar4 + 0x10);
      }
      for (; (pauVar4 != (int32_t (*) [32])(*param_1 + param_2) && ((*pauVar4)[0] != '\0'));
          pauVar4 = (int32_t (*) [32])(*pauVar4 + 1)) {
      }
    }
  }
  else {
    uVar5 = (ulonglong)((uint)param_1 & 0x1f);
    uVar5 = -(ulonglong)(uVar5 != 0) & 0x20 - uVar5;
    if (param_2 < uVar5) {
      uVar5 = param_2;
    }
    if (param_1 != (int32_t (*) [32])(*param_1 + uVar5)) {
      do {
        if ((*pauVar4)[0] == '\0') break;
        pauVar4 = (int32_t (*) [32])(*pauVar4 + 1);
      } while (pauVar4 != (int32_t (*) [32])(*param_1 + uVar5));
    }
    if ((longlong)pauVar4 - (longlong)param_1 != uVar5) {
      return (longlong)pauVar4 - (longlong)param_1;
    }
    puVar3 = *pauVar4;
    while ((pauVar4 != (int32_t (*) [32])(puVar3 + (param_2 - uVar5 & 0xffffffffffffffe0)) &&
           (auVar2 = vpcmpeqb_avx2(SUB6432(ZEXT1664((int32_t  [16])0x0),0),*pauVar4),
           (((((((((((((((((((((((((((((((auVar2 >> 7 & (int32_t  [32])0x1) ==
                                         (int32_t  [32])0x0 &&
                                        (auVar2 >> 0xf & (int32_t  [32])0x1) ==
                                        (int32_t  [32])0x0) &&
                                       (auVar2 >> 0x17 & (int32_t  [32])0x1) ==
                                       (int32_t  [32])0x0) &&
                                      (auVar2 >> 0x1f & (int32_t  [32])0x1) ==
                                      (int32_t  [32])0x0) &&
                                     (auVar2 >> 0x27 & (int32_t  [32])0x1) ==
                                     (int32_t  [32])0x0) &&
                                    (auVar2 >> 0x2f & (int32_t  [32])0x1) ==
                                    (int32_t  [32])0x0) &&
                                   (auVar2 >> 0x37 & (int32_t  [32])0x1) == (int32_t  [32])0x0
                                   ) && (auVar2 >> 0x3f & (int32_t  [32])0x1) ==
                                        (int32_t  [32])0x0) &&
                                 (auVar2 >> 0x47 & (int32_t  [32])0x1) == (int32_t  [32])0x0)
                                && (auVar2 >> 0x4f & (int32_t  [32])0x1) == (int32_t  [32])0x0
                                ) && (auVar2 >> 0x57 & (int32_t  [32])0x1) ==
                                     (int32_t  [32])0x0) &&
                              (auVar2 >> 0x5f & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                             (auVar2 >> 0x67 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                            (auVar2 >> 0x6f & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                           (auVar2 >> 0x77 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                          SUB321(auVar2 >> 0x7f,0) == '\0') &&
                         (auVar2 >> 0x87 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                        (auVar2 >> 0x8f & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                       (auVar2 >> 0x97 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                      (auVar2 >> 0x9f & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                     (auVar2 >> 0xa7 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                    (auVar2 >> 0xaf & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                   (auVar2 >> 0xb7 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                  SUB321(auVar2 >> 0xbf,0) == '\0') &&
                 (auVar2 >> 199 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                (auVar2 >> 0xcf & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
               (auVar2 >> 0xd7 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
              (auVar2 >> 0xdf & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
             (auVar2 >> 0xe7 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
            (auVar2 >> 0xef & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
           (auVar2 >> 0xf7 & (int32_t  [32])0x1) == (int32_t  [32])0x0) && -1 < auVar2[0x1f]))
          ) {
      pauVar4 = pauVar4 + 1;
    }
    for (; (pauVar4 != (int32_t (*) [32])(*param_1 + param_2) && ((*pauVar4)[0] != '\0'));
        pauVar4 = (int32_t (*) [32])(*pauVar4 + 1)) {
    }
  }
  return (longlong)pauVar4 - (longlong)param_1;
}

// ---- Function: FUN_180136b94 ----
ulonglong FUN_180136b94(int32_t (*param_1) [32],ulonglong param_2)

{
  int32_t auVar1 [32];
  ulonglong uVar2;
  int32_t (*pauVar3) [32];
  ulonglong uVar4;
  int32_t auVar5 [16];
  
  pauVar3 = param_1;
  if (DAT_1801eb0d0 < 5) {
    if (DAT_1801eb0d0 < 1) {
      if (param_1 != (int32_t (*) [32])(*param_1 + param_2 * 2)) {
        do {
          if (*(short *)*pauVar3 == 0) break;
          pauVar3 = (int32_t (*) [32])(*pauVar3 + 2);
        } while (pauVar3 != (int32_t (*) [32])(*param_1 + param_2 * 2));
      }
    }
    else if (((ulonglong)param_1 & 1) == 0) {
      uVar4 = (ulonglong)((uint)param_1 & 0xf);
      uVar4 = (-(ulonglong)(uVar4 != 0) & 0x10 - uVar4) >> 1;
      if (param_2 < uVar4) {
        uVar4 = param_2;
      }
      if (param_1 != (int32_t (*) [32])(*param_1 + uVar4 * 2)) {
        do {
          if (*(short *)*pauVar3 == 0) break;
          pauVar3 = (int32_t (*) [32])(*pauVar3 + 2);
        } while (pauVar3 != (int32_t (*) [32])(*param_1 + uVar4 * 2));
      }
      uVar2 = (longlong)pauVar3 - (longlong)param_1 >> 1;
      if (uVar2 != uVar4) {
        return uVar2;
      }
      for (pauVar3 = (int32_t (*) [32])(*param_1 + uVar2 * 2);
          pauVar3 !=
          (int32_t (*) [32])(*param_1 + ((param_2 - uVar4 & 0xfffffffffffffff0) + uVar2) * 2);
          pauVar3 = (int32_t (*) [32])(*pauVar3 + 0x10)) {
        auVar5._0_2_ = -(ushort)(*(short *)*pauVar3 == 0);
        auVar5._2_2_ = -(ushort)(*(short *)(*pauVar3 + 2) == 0);
        auVar5._4_2_ = -(ushort)(*(short *)(*pauVar3 + 4) == 0);
        auVar5._6_2_ = -(ushort)(*(short *)(*pauVar3 + 6) == 0);
        auVar5._8_2_ = -(ushort)(*(short *)(*pauVar3 + 8) == 0);
        auVar5._10_2_ = -(ushort)(*(short *)(*pauVar3 + 10) == 0);
        auVar5._12_2_ = -(ushort)(*(short *)(*pauVar3 + 0xc) == 0);
        auVar5._14_2_ = -(ushort)(*(short *)(*pauVar3 + 0xe) == 0);
        if ((((((((((((((((auVar5 >> 7 & (int32_t  [16])0x1) != (int32_t  [16])0x0 ||
                         (auVar5 >> 0xf & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                        (auVar5 >> 0x17 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                       (auVar5 >> 0x1f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                      (auVar5 >> 0x27 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                     (auVar5 >> 0x2f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                    (auVar5 >> 0x37 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                   (auVar5 >> 0x3f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                  (auVar5 >> 0x47 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                 (auVar5 >> 0x4f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
                (auVar5 >> 0x57 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
               (auVar5 >> 0x5f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
              (auVar5 >> 0x67 & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
             (auVar5 >> 0x6f & (int32_t  [16])0x1) != (int32_t  [16])0x0) ||
            (auVar5._14_2_ >> 7 & 1) != 0) || (auVar5._14_2_ & 0x8000) != 0) break;
      }
      for (; (pauVar3 != (int32_t (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0))
          ; pauVar3 = (int32_t (*) [32])(*pauVar3 + 2)) {
      }
    }
    else if (param_1 != (int32_t (*) [32])(*param_1 + param_2 * 2)) {
      do {
        if (*(short *)*pauVar3 == 0) break;
        pauVar3 = (int32_t (*) [32])(*pauVar3 + 2);
      } while (pauVar3 != (int32_t (*) [32])(*param_1 + param_2 * 2));
    }
  }
  else if (((ulonglong)param_1 & 1) == 0) {
    uVar4 = (ulonglong)((uint)param_1 & 0x1f);
    uVar4 = (-(ulonglong)(uVar4 != 0) & 0x20 - uVar4) >> 1;
    if (param_2 < uVar4) {
      uVar4 = param_2;
    }
    if (param_1 != (int32_t (*) [32])(*param_1 + uVar4 * 2)) {
      do {
        if (*(short *)*pauVar3 == 0) break;
        pauVar3 = (int32_t (*) [32])(*pauVar3 + 2);
      } while (pauVar3 != (int32_t (*) [32])(*param_1 + uVar4 * 2));
    }
    uVar2 = (longlong)pauVar3 - (longlong)param_1 >> 1;
    if (uVar2 != uVar4) {
      return uVar2;
    }
    pauVar3 = (int32_t (*) [32])(*param_1 + uVar2 * 2);
    while ((pauVar3 !=
            (int32_t (*) [32])(*param_1 + ((param_2 - uVar4 & 0xffffffffffffffe0) + uVar2) * 2)
           && (auVar1 = vpcmpeqw_avx2(SUB6432(ZEXT1664((int32_t  [16])0x0),0),*pauVar3),
              (((((((((((((((((((((((((((((((auVar1 >> 7 & (int32_t  [32])0x1) ==
                                            (int32_t  [32])0x0 &&
                                           (auVar1 >> 0xf & (int32_t  [32])0x1) ==
                                           (int32_t  [32])0x0) &&
                                          (auVar1 >> 0x17 & (int32_t  [32])0x1) ==
                                          (int32_t  [32])0x0) &&
                                         (auVar1 >> 0x1f & (int32_t  [32])0x1) ==
                                         (int32_t  [32])0x0) &&
                                        (auVar1 >> 0x27 & (int32_t  [32])0x1) ==
                                        (int32_t  [32])0x0) &&
                                       (auVar1 >> 0x2f & (int32_t  [32])0x1) ==
                                       (int32_t  [32])0x0) &&
                                      (auVar1 >> 0x37 & (int32_t  [32])0x1) ==
                                      (int32_t  [32])0x0) &&
                                     (auVar1 >> 0x3f & (int32_t  [32])0x1) ==
                                     (int32_t  [32])0x0) &&
                                    (auVar1 >> 0x47 & (int32_t  [32])0x1) ==
                                    (int32_t  [32])0x0) &&
                                   (auVar1 >> 0x4f & (int32_t  [32])0x1) == (int32_t  [32])0x0
                                   ) && (auVar1 >> 0x57 & (int32_t  [32])0x1) ==
                                        (int32_t  [32])0x0) &&
                                 (auVar1 >> 0x5f & (int32_t  [32])0x1) == (int32_t  [32])0x0)
                                && (auVar1 >> 0x67 & (int32_t  [32])0x1) == (int32_t  [32])0x0
                                ) && (auVar1 >> 0x6f & (int32_t  [32])0x1) ==
                                     (int32_t  [32])0x0) &&
                              (auVar1 >> 0x77 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                             SUB321(auVar1 >> 0x7f,0) == '\0') &&
                            (auVar1 >> 0x87 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                           (auVar1 >> 0x8f & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                          (auVar1 >> 0x97 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                         (auVar1 >> 0x9f & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                        (auVar1 >> 0xa7 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                       (auVar1 >> 0xaf & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                      (auVar1 >> 0xb7 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                     SUB321(auVar1 >> 0xbf,0) == '\0') &&
                    (auVar1 >> 199 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                   (auVar1 >> 0xcf & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                  (auVar1 >> 0xd7 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                 (auVar1 >> 0xdf & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
                (auVar1 >> 0xe7 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
               (auVar1 >> 0xef & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
              (auVar1 >> 0xf7 & (int32_t  [32])0x1) == (int32_t  [32])0x0) &&
              -1 < auVar1[0x1f]))) {
      pauVar3 = pauVar3 + 1;
    }
    for (; (pauVar3 != (int32_t (*) [32])(*param_1 + param_2 * 2) && (*(short *)*pauVar3 != 0));
        pauVar3 = (int32_t (*) [32])(*pauVar3 + 2)) {
    }
  }
  else if (param_1 != (int32_t (*) [32])(*param_1 + param_2 * 2)) {
    do {
      if (*(short *)*pauVar3 == 0) break;
      pauVar3 = (int32_t (*) [32])(*pauVar3 + 2);
    } while (pauVar3 != (int32_t (*) [32])(*param_1 + param_2 * 2));
  }
  return (longlong)pauVar3 - (longlong)param_1 >> 1;
}

// ---- Function: FUN_180136d6c ----
void FUN_180136d6c(int32_t param_1)

{
  DAT_1801edfd8 = param_1;
  return;
}

// ---- Function: FUN_180136d74 ----
int32_t * FUN_180136d74(int32_t param_1)

{
  int iVar1;
  int32_t *puVar2;
  
  puVar2 = (int32_t *)FUN_180136db4();
  if (puVar2 != (int32_t *)0x0) {
    iVar1 = (*(code *)PTR__guard_dispatch_icall_180157478)(param_1);
    puVar2 = (int32_t *)(ulonglong)(iVar1 != 0);
  }
  return puVar2;
}

// ---- Function: FUN_180136db4 ----
ulonglong FUN_180136db4(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  __acrt_lock(0);
  bVar1 = (byte)DAT_1801eb080 & 0x3f;
  uVar2 = DAT_1801edfd8 ^ DAT_1801eb080;
  __acrt_unlock(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}

// ---- Function: FUN_180136dec ----
void FUN_180136dec(void)

{
  __acrt_ptd *p_Var1;
  
  p_Var1 = FUN_1801387d8();
  if (*(longlong *)(p_Var1 + 0x18) != 0) {
    (*(code *)PTR__guard_dispatch_icall_180157478)();
  }
                    
  abort();
}

// ---- Function: FUN_180136e18 ----
int32_t FUN_180136e18(int param_1,int32_t param_2)

{
  int32_t uVar1;
  int *piVar2;
  longlong lVar3;
  int32_t uVar4;
  __acrt_ptd *p_Var5;
  int *piVar6;
  int *piVar7;
  int32_t uVar8;
  
  if (param_1 != -0x1f928c9d) {
    return 0;
  }
  p_Var5 = FUN_180138950();
  if (p_Var5 != (__acrt_ptd *)0x0) {
    piVar2 = *(int **)p_Var5;
    for (piVar6 = piVar2; piVar6 != piVar2 + 0x30; piVar6 = piVar6 + 4) {
      if (*piVar6 == -0x1f928c9d) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        lVar3 = *(longlong *)(piVar6 + 2);
        if (lVar3 == 0) {
          return 0;
        }
        if (lVar3 == 5) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 1;
        }
        if (lVar3 != 1) {
          uVar4 = *(int32_t *)(p_Var5 + 8);
          *(int32_t *)(p_Var5 + 8) = param_2;
          if (piVar6[1] == 8) {
            for (piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            uVar1 = *(int32_t *)(p_Var5 + 0x10);
            if (*piVar6 == -0x3fffff73) {
              uVar8 = 0x82;
LAB_180136f6a:
              *(int32_t *)(p_Var5 + 0x10) = uVar8;
            }
            else {
              if (*piVar6 == -0x3fffff72) {
                uVar8 = 0x83;
                goto LAB_180136f6a;
              }
              if (*piVar6 == -0x3fffff71) {
                uVar8 = 0x86;
                goto LAB_180136f6a;
              }
              if (*piVar6 == -0x3fffff70) {
                uVar8 = 0x81;
                goto LAB_180136f6a;
              }
              if (*piVar6 == -0x3fffff6f) {
                uVar8 = 0x84;
                goto LAB_180136f6a;
              }
              if (*piVar6 == -0x3fffff6e) {
                uVar8 = 0x8a;
                goto LAB_180136f6a;
              }
              if (*piVar6 == -0x3fffff6d) {
                uVar8 = 0x85;
                goto LAB_180136f6a;
              }
              if (*piVar6 == -0x3ffffd4c) {
                uVar8 = 0x8e;
                goto LAB_180136f6a;
              }
              uVar8 = uVar1;
              if (*piVar6 == -0x3ffffd4b) {
                uVar8 = 0x8d;
                goto LAB_180136f6a;
              }
            }
            (*(code *)PTR__guard_dispatch_icall_180157478)(8,uVar8);
            *(int32_t *)(p_Var5 + 0x10) = uVar1;
          }
          else {
            piVar6[2] = 0;
            piVar6[3] = 0;
            (*(code *)PTR__guard_dispatch_icall_180157478)(piVar6[1]);
          }
          *(int32_t *)(p_Var5 + 8) = uVar4;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}

// ---- Function: operator____ ----
/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95>,class <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> &
   __ptr64,class <lambda_f7424dd8d45958661754dc4f2697e9c3> >(class
   <lambda_99476a1ad63dd22509b5d3e65b0ffc95> && __ptr64,class
   <lambda_ad1ced32f4ac17aa236e5ef05d6b3b7c> & __ptr64,class
   <lambda_f7424dd8d45958661754dc4f2697e9c3> && __ptr64) __ptr64
    public: void __cdecl __crt_seh_guarded_call<void>::operator()<class
   <lambda_d80eeec6fff315bfe5c115232f3240e3>,class <lambda_6e4b09c48022b2350581041d5f6b0c4c> &
   __ptr64,class <lambda_2358e3775559c9db80273638284d5e45> >(class
   <lambda_d80eeec6fff315bfe5c115232f3240e3> && __ptr64,class
   <lambda_6e4b09c48022b2350581041d5f6b0c4c> & __ptr64,class
   <lambda_2358e3775559c9db80273638284d5e45> && __ptr64) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void operator()<>(int32_t param_1,int *param_2,int32_t *param_3,int *param_4)

{
  __acrt_lock(*param_2);
  FUN_180136fe8(param_3);
  __acrt_unlock(*param_4);
  return;
}

// ---- Function: FUN_180136fe8 ----
void FUN_180136fe8(int32_t *param_1)

{
  int32_t *puVar1;
  
  if (DAT_1801edff0 != '\0') {
    return;
  }
  LOCK();
  DAT_1801edfe0 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_1801edfe8 != DAT_1801eb080) {
      (*(code *)PTR__guard_dispatch_icall_180157478)(0,0,0);
    }
    puVar1 = &DAT_1801ee128;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_180137062;
    puVar1 = &DAT_1801ee140;
  }
  FUN_180137f64(puVar1);
LAB_180137062:
  if (*(int *)*param_1 == 0) {
    FUN_1801381c4((int32_t *)&DAT_180157718,(int32_t *)&DAT_180157738);
  }
  FUN_1801381c4((int32_t *)&DAT_180157740,(int32_t *)&DAT_180157748);
  if (*(int *)param_1[1] == 0) {
    DAT_1801edff0 = '\x01';
    *(int32_t *)param_1[2] = 1;
  }
  return;
}

// ---- Function: FUN_1801370b4 ----
void FUN_1801370b4(UINT param_1,int32_t param_2,int param_3)

{
  code *pcVar1;
  HMODULE pHVar2;
  int *piVar3;
  int32_t local_res10 [2];
  int local_res18 [2];
  int32_t local_res20 [8];
  int32_t local_38 [4];
  int local_34 [3];
  int32_t local_28;
  int32_t *local_20;
  int *local_18;
  int32_t *local_10;
  
  local_28 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    pHVar2 = GetModuleHandleW((LPCWSTR)0x0);
    if ((((pHVar2 != (HMODULE)0x0) && ((short)pHVar2->unused == 0x5a4d)) &&
        (piVar3 = (int *)((longlong)&pHVar2->unused + (longlong)pHVar2[0xf].unused),
        *piVar3 == 0x4550)) &&
       ((((short)piVar3[6] == 0x20b && (0xe < (uint)piVar3[0x21])) && (piVar3[0x3e] != 0)))) {
      FUN_1801371d4(param_1);
    }
  }
  local_res20[0] = 0;
  local_20 = local_res10;
  local_18 = local_res18;
  local_10 = local_res20;
  local_34[0] = 2;
  local_34[1] = 2;
  operator()<>(local_38,local_34 + 1,&local_20,local_34);
  if (local_res18[0] != 0) {
    return;
  }
  FUN_18013717c(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ---- Function: FUN_18013717c ----
void FUN_18013717c(UINT param_1)

{
  bool bVar1;
  HANDLE hProcess;
  
  bVar1 = FUN_1801371b0();
  if (bVar1) {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_1801371d4(param_1);
                    
  ExitProcess(param_1);
}

// ---- Function: FUN_1801371b0 ----
bool FUN_1801371b0(void)

{
  bool bVar1;
  int32_t extraout_var;
  uint uVar2;
  
  bVar1 = FUN_1801428ac();
  if (CONCAT31(extraout_var,bVar1) == 1) {
    bVar1 = false;
  }
  else {
    uVar2 = FUN_180142878();
    bVar1 = (char)uVar2 == '\0';
  }
  return bVar1;
}

