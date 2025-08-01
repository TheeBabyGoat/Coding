#include "_handle.h"
#include <stdint.h>
#include <stddef.h>

ulonglong _handle_nan(ulonglong param_1) {
return param_1 | 0x8000000000000;
}
}

uint _handle_nanf(uint param_1) {
return param_1 | 0x400000;
}
}

