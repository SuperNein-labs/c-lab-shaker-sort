#ifndef SORT_H
#define SORT_H

#include "constants.h"


void shaker_sort(
    void *base,
    size_t nmemb,
    size_t size,
    compare_func_t compar,
    swap_callback_t on_swap
);

#endif
