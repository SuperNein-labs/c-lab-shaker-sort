#ifndef SORT_H
#define SORT_H

#include "constants.h"


void shaker_sort(
    key_array_t keys,
    data_array_t data,
    size_t len,
    compare_func_t comparator
);

#endif
