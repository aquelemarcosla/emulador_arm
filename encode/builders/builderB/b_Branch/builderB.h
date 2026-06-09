#ifndef BUILDERB_H
#define BUILDERB_H
#include "stdint.h"

uint32_t builderB(char *buffer, char **saveptr);
uint32_t builderBL(char *buffer, char **saveptr);
uint32_t builderRET(char *buffer, char **saveptr);
uint32_t builderBEQ(char *buffer, char **saveptr);
uint32_t builderBNE(char *buffer, char **saveptr);

#endif // BUILDERB_H