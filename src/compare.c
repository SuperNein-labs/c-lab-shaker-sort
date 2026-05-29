#include "compare.h"


int compare_int_keys(
    const void *a,
    const void *b
) {
    const key_t x = *(const key_t *)a;
    const key_t y = *(const key_t *)b;

    if (x < y) return -1;
    if (x > y) return 1;

    return 0;
}
