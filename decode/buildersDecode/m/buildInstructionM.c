#include "buildInstructionM.h"
#include <stdint.h>
#include "cpu.h"

/* Acesso a memória */
instruction buildLDR(uint32_t data);
instruction buildSTR(uint32_t data);