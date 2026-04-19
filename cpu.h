#ifndef CPU_H
#define CPU_H

#include <stdint.h>

typedef struct {
    uint64_t regs[32]; // 32 registradores de 64 bits
    uint64_t pc;  // Registrador Program Counter
    uint64_t sp;  // Registrador Stack Pointer
} CPU;

typedef struct { // struct da estrutura das instruções
    uint8_t opcode;
    uint8_t type;
    uint8_t rd;
    uint8_t rn;
    uint8_t rm;
    uint64_t imm;
} instruction;

#endif