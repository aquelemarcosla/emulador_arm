#include "buildInstructionB.h"
#include "stdint.h"
#include "cpu.h"
#include "stdint.h"

/* Branches (Desvios) */
instruction buildBranch(uint32_t data);
instruction buildBL(uint32_t data);

// Desvios condicionais
instruction buildBEQ(uint32_t data);
instruction buildBNE(uint32_t data);

// Desvio incondicional
instruction buildRET(uint32_t data);