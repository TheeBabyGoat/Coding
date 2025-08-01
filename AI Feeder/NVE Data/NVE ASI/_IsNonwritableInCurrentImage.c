#include "_IsNonwritableInCurrentImage.h"
#include <stdint.h>
#include <stddef.h>

BOOL __cdecl _IsNonwritableInCurrentImage(PBYTE pTarget) {
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
}

