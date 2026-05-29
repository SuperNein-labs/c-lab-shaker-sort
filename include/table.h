#ifndef TABLE_H
#define TABLE_H

#include "constants.h"

void sort_table(
    key_array_t keys,
    data_array_t values,
    size_t len
);

void print_table(
    key_array_t keys,
    data_array_t data,
    size_t len
);

#endif
