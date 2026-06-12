#include "reader.h"
#include "string.h"
#include "opcode_table.h"
#include "encode.h"
#include "program_table.h"
#include "labels_table.h"

int reader(char *text) {

    if (text == NULL) {
        return 1; 
    }

    char *label = strchr(text, ':');

    if (label != NULL){
        *label = '\0'; 

        addLabel(text, getLastPC());

        return 2;
    }

    char text_copy[64];
    strncpy(text_copy, text, sizeof(text_copy) - 1);
    text_copy[sizeof(text_copy) - 1] = '\0'; 

    char *opcode = strtok(text, " \t\r\n");

    if (opcode == NULL) {
        return 1; 
    }

    for (int i = 0; i < opcode_table_size; i++) {
        if (strcmp(opcode, opcode_table[i].mnemonic) == 0) {
            addInstruction(encode(text_copy));
            return 3;
        }
    }

    return 0;
}