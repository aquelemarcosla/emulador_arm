#include "cpu.h"
#include "stdint.h"

void reg_write(CPU *cpu, int reg, uint64_t value) {
    if (reg == 31) {
        return;
    }
    cpu->regs[reg] = value;
}

uint64_t reg_read(CPU *cpu, int reg) {
    if (reg == 31) {
        return 0;
    }
    return cpu->regs[reg];
}



