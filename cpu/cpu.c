#include "cpu.h"
#include <stdint.h>

void reg_write(CPU *cpu, int reg, uint64_t value) {  // Escrita de registrador
    if (reg == 31) {  // caso XZR
        return;
    }

    if (reg == 32) {  // caso PC
        cpu->pc = value;
        return;
    }

    if (reg == 33) {  // caso SP
        cpu->sp = value;
        return;
    }

    if (reg < 0 || reg >= 34) {
        return;
    }

    cpu->regs[reg] = value;
}

uint64_t reg_read(CPU *cpu, int reg) {  // Leitura de registrador
    if (reg == 31) {  // caso XZR
        return 0;
    }

    if (reg == 32) {  // caso PC
        return cpu->pc;
    }

    if (reg == 33) {  // caso SP
        return cpu->sp;
    }

    if (reg < 0 || reg >= 34) {
        return 0;
    }

    return cpu->regs[reg];
}
