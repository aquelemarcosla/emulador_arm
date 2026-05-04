#include "memory.h"

uint8_t memory[MEM_SIZE];  // Memória declarada

uint64_t mem_read(uint64_t address) {
    uint64_t result = 0;

    if (address + 7 >= MEM_SIZE) {  // Verifica se o acesso de 8 bytes está no limite
        // limite
    }

    for (int i = 0; i < 8; i++) {
        result |= (uint64_t)memory[address + i] << (i * 8);
    }

    return result;
}

void mem_write(uint64_t address, uint64_t data) {
    if (address + 7 >= MEM_SIZE) {
        // limite
    }

    for (int i = 0; i < 8; i++) {
        memory[address + i] = (uint8_t)(data >> (i * 8));
    }
}
