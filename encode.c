#include "encode/encode.h"
#include "stdio.h"
#include "string.h"

uint32_t encode(const char *instruction) {
    if (instruction == NULL){
        return 0;
    }

    char *saveptr;
    const char *delimitadoresIniciais = " ,";

    typedef struct {
        char *opcode;
    } tokenOpcode;

    char buffer[128];

    // instruction para buffer.
    strncpy(buffer, instruction, sizeof(buffer) - 1);

    // Null no final.
    buffer[sizeof(buffer) - 1] = '\0';

    char *token = strtok_r(buffer, delimitadoresIniciais, &saveptr);

    
}
