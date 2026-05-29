#ifndef SEARCH_H
#define SEARCH_H

#include "constants.h"

int bin_search(
    key_array_t keys,
    key_t val,
    size_t len,
    compare_func_t comparator
);

#endif
