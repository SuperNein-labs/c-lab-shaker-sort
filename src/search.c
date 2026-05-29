#include "search.h"

int bin_search(
    key_array_t keys,
    key_t val,
    size_t len,
    compare_func_t comparator
) {
    size_t left = 0;
    size_t right = len - 1;

    while (left <= right) {
        size_t mid = left + (right - left) / 2;

        int cmp = comparator(keys[mid], val);

        if (cmp == 0)
            return mid;

        else if (cmp < 0)
            left = mid + 1;

        else
            right = mid - 1;
    }
    return -1;
}
