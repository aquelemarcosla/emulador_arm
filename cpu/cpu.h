#ifndef CPU_H
#define CPU_H

#include <stdint.h>

typedef struct {
    uint64_t regs[32];  // 0 - 31
    uint64_t pc;        // Program Counter (reg 32)
    uint64_t sp;        // Stack Pointer (reg 33)
    uint8_t nzcv;       // NZCV flags
} CPU;

typedef struct {  // struct da instrução
    uint8_t opcode;
    uint8_t type;
    uint8_t rd;
    uint8_t rn;    // R1
    uint8_t rm;    // R2
    int64_t imm;   // Imediatos com sinal para possíveis negativos
} instruction;

uint8_t get_nzcv(CPU *cpu);

void set_nzcv(CPU *cpu, uint8_t nzcv);

uint64_t reg_read(CPU *cpu, int reg);  // Leitura de registrador

void reg_write(CPU *cpu, int reg, uint64_t value);  // Escrita de registrador

#endif
