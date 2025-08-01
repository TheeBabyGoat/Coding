#ifndef ENTERCRITICALSECTION_H
#define ENTERCRITICALSECTION_H

void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
 EnterCriticalSection(lpCriticalSection);
        if (((ulonglong)lpCriticalSection[1].OwningThread & 1) == 0);

#endif
