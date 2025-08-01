#ifndef _CONTROLFP_H
#define _CONTROLFP_H

 _controlfp_s(local_7a8,0,0);
  uVar8 = (ulonglong)puVar1 >> 0x34 & 0x7ff;
  if (uVar8 == 0);
 _controlfp_s(&local_7c0,0,0);
      _controlfp_s((uint *)&local_7e8,0x8001f,local_7bc);
      local_7c8 = param_2 + 1;
      local_7d0 = local_7d8;
      uVar8 = (ulonglong)local_7d8 >> 0x34 & 0x7ff;
      uVar15 = (-(ulonglong)(uVar8 != 0) & 0x10000000000000) +
               ((ulonglong)local_7d8 & 0xfffffffffffff);
      uVar22 = (2 - (uint)(uVar8 != 0)) + ((uint)((ulonglong)local_7d8 >> 0x34) & 0x7ff);
      dVar25 = FUN_18014c3a0();
      dVar25 = ceil(dVar25);
      uVar6 = -(uint)(((int)dVar25 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar25;
      uVar17 = (uint)(uVar15 >> 0x20);
      local_784 = uVar15;
      uVar23 = (uint)(uVar17 != 0);
      uVar14 = uVar23 + 1;
      if (uVar22 < 0x434);
 _controlfp_s(&local_7c4,local_7c0,local_7bc);
      goto LAB_18014a59f;
    }
    param_4[1] = 0;
    pcVar19 = "0";
LAB_18014949e:
    iVar5 = strcpy_s(param_5,param_6,pcVar19);
  }
  else {
    if (uVar8 != 0x7ff) goto LAB_1801494f2;
    if (((ulonglong)puVar1 & 0xfffffffffffff) == 0);
errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask);

#endif
