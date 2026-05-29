#include "compare.h"


int compare_keys(key_t a, key_t b) {
    if (a < b) return -1;
    if (a > b) return 1;

    return 0;
}
