#ifndef IO_H
#define IO_H

#include "constants.h"


size_t input_data(
    key_array_t keys,
    data_array_t data
);

void print_search(
    key_array_t keys,
    data_array_t data,
    key_t key,
    size_t len,
    compare_func_t comparator
);

void searching_interface(
    key_array_t keys,
    data_array_t data,
    size_t len,
    compare_func_t comparator
);

#endif
