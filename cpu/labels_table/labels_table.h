#ifndef LABELS_TABLE_H
#define LABELS_TABLE_H
#include "stdint.h"
#define MAX_LABELS 30

typedef struct {
    char name[32];
    uint64_t address;
} LabelsTable;

extern LabelsTable labels_table[MAX_LABELS];

void addLabel(const char *name, uint64_t address);
uint64_t getLabelAddress(const char *name);

#endif // LABELS_TABLE_H