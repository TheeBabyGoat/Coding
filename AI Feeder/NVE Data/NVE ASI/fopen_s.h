#ifndef FOPEN_S_H
#define FOPEN_S_H

errno_t __cdecl fopen_s(FILE **_File,char *_Filename,char *_Mode);
 fopen_s((FILE **)local_1d8,(char *)_Filename,"rb");
    puVar13 = DAT_1801f39b0;
    if ((FILE *)local_1d8._0_8_ != (FILE *)0x0);
 fopen_s(&local_588,(char *)pppppppcVar12,"r");
  if (local_588 == (FILE *)0x0);
 fopen_s(&local_588,(char *)pppppppcVar12,"w");
    pppppppuVar11 = &local_4b0;
    if (0xf < local_498);
 fopen_s(&local_58,(char *)pppppcVar2,_Mode);
    if (pppcStack_38 < (char ****)0x10);

#endif
