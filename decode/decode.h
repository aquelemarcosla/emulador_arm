#ifndef DECODE_H
#define DECODE_H

#include "../cpu/cpu.h"

Instruction decode(uint32_t data);  // Function that returns the decoded instruction

Instruction buildDPR(uint32_t data);
Instruction buildDPI(uint32_t data);
Instruction buildB(uint32_t data);
Instruction buildM(uint32_t data);

#endif
