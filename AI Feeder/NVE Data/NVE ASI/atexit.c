#include "atexit.h"
#include <stdint.h>
#include <stddef.h>

int __cdecl atexit(_func_5014 *param_1) {
_onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}
}

 atexit((_func_5014 *)&LAB_180155bd0);
        piVar17 = &DAT_1801fb330;
        _Init_thread_footer(&DAT_1801fb330);
      }
    }
    uVar9 = FUN_18011ccf0();
    _Filename = &DAT_1801ebce0;
    if (DAT_1801ebcf0 != 0) goto LAB_1800a83a6;
    local_1e0 = (int32_t **)CONCAT44(local_1e0._4_4_,uVar9);
    local_1e8 = (code *)0x1000000000000000;
    local_1d8._0_8_ = (FILE *)0x1;
    local_1d8._8_8_ = &local_1e8;
    local_1b8 = "hints-{}.dat";
    pcStack_1b0 = (char *)0xc;
    ppcVar23 = (code **)local_1d8;
    FUN_1800b7670((longlong *)local_198,(longlong *)&local_1b8,(ulonglong *)ppcVar23);
    ppppppppCVar20 = local_198;
    ppcVar14 = (char **)FUN_18011cb10(local_48,ppppppppCVar20,(int32_t **)ppcVar23);
    if (ppcVar14 != &DAT_1801ebce0) {
ppppppppCVar20 = (LPCSTR *******)DAT_1801ebcf8;
      if ((LPCSTR ****)0xf < DAT_1801ebcf8) {
        ppppppppCVar20 = (LPCSTR *******)((longlong)DAT_1801ebcf8 + 1);
        pcVar15 = DAT_1801ebce0;
        if ((LPCSTR *******)0xfff < ppppppppCVar20) {
          ppppppppCVar20 = (LPCSTR *******)(DAT_1801ebcf8 + 5);
          pcVar15 = *(char **)(DAT_1801ebce0 + -8);
          pWVar18 = (LPCWSTR)(DAT_1801ebce0 + (-8 - (longlong)pcVar15));
          if ((LPCWSTR)0x1f < pWVar18) {
            FUN_18012b7b4();
            goto LAB_1800a89d4;
          }
        }
        thunk_FUN_18012d5e8(pcVar15);
      }
      DAT_1801ebce0 = *ppcVar14;
      lRam00000001801ebce8 = ppcVar14[1];
      DAT_1801ebcf0 = (longlong)ppcVar14[2];
      DAT_1801ebcf8 = (LPCSTR ****)ppcVar14[3];
      ppcVar14[2] = (char *)0x0;
      ppcVar14[3] = (char *)0xf;
      *(int32_t *)ppcVar14 = 0;
    }
}

 atexit((_func_5014 *)&LAB_1801564e0);
    _Init_thread_footer(&DAT_1801fca98);
  }
  uVar11 = (((((((((ulonglong)local_b8[0] & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)local_b8[0] >> 8 & 0xff) * 0x100000001b3 ^
                (ulonglong)local_b8[0] >> 0x10 & 0xff) * 0x100000001b3 ^
               (ulonglong)local_b8[0] >> 0x18 & 0xff) * 0x100000001b3 ^
              (ulonglong)local_b8[0] >> 0x20 & 0xff) * 0x100000001b3 ^
             (ulonglong)local_b8[0] >> 0x28 & 0xff) * 0x100000001b3 ^
            (ulonglong)local_b8[0] >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)local_b8[0] >> 0x38)
           * 0x100000001b3 & DAT_1801fcad0;
  pvVar4 = (void *)DAT_1801fcab8[uVar11 * 2 + 1];
  pvVar15 = (void *)0x0;
  if (pvVar4 != DAT_1801fcaa8) {
puVar5 = *(int32_t **)((longlong)pvVar4 + 0x10);
    while ((pvVar15 = pvVar4, local_b8[0] != puVar5 &&
           (pvVar15 = (void *)0x0, pvVar4 != (void *)DAT_1801fcab8[uVar11 * 2]))) {
      pvVar4 = *(void **)((longlong)pvVar4 + 8);
      puVar5 = *(int32_t **)((longlong)pvVar4 + 0x10);
    }
  }
}

 atexit((_func_5014 *)&LAB_180156910);
      _Init_thread_footer(&DAT_1801fe368);
    }
  }
  if (DAT_1801ec2a8 == 0) {
pcVar3 = common_getenv<char>("appdata");
    uVar7 = 0xffffffffffffffff;
    do {
      uVar7 = uVar7 + 1;
    } while (pcVar3[uVar7] != '\0');
    FUN_1800de6e0((longlong *)&DAT_1801ec298,(int32_t *)pcVar3,uVar7);
    FUN_1800b9910((longlong *)&DAT_1801ec298,(int32_t *)"\\NVE\\",5);
    local_50 = DAT_1801ec2a8;
    puVar6 = &DAT_1801ec298;
    if (0xf < DAT_1801ec2b0) {
      puVar6 = DAT_1801ec298;
    }
    uVar7 = __std_fs_code_page();
    param_3 = &local_58;
    local_58 = puVar6;
    FUN_1800aab10((LPWSTR)local_40,(UINT)uVar7,param_3);
    pppWVar5 = local_40;
    if (7 < local_28) {
      pppWVar5 = (LPCWSTR **)local_40[0];
    }
    uVar4 = __std_fs_create_directory((LPCWSTR)pppWVar5);
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar2 != 0) goto LAB_18011ccd3;
    FUN_1800ba040((longlong *)local_40);
  }
}

