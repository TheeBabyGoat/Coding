#include "DeleteCriticalSection.h"
#include <stdint.h>
#include <stddef.h>

void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection) {
DeleteCriticalSection(lpCriticalSection);
  return;
}
}

