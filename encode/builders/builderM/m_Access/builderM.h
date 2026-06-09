#ifndef BUILDERM_H
#define BUILDERM_H
#include "stdint.h"

uint32_t builderLDR(char *buffer, char **saveptr);
uint32_t builderSTR(char *buffer, char **saveptr);

#endif // BUILDERM_H