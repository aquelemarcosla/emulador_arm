#ifndef MEMORY_H
#define MEMORY_H
#include <stdint.h>

#define MEM_SIZE 1310770

uint8_t memory[MEM_SIZE];

uint64_t mem_read(uint64_t address);

uint64_t mem_write(uint64_t address, uint64_t data);

#endif

