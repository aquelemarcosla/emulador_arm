#ifndef BUILDER_DPR_LOGIC_H
#define BUILDER_DPR_LOGIC_H
#include "stdint.h"

uint32_t builderAND(char *buffer, char **saveptr);
uint32_t builderORR(char *buffer, char **saveptr);
uint32_t builderEOR(char *buffer, char **saveptr);

#endif