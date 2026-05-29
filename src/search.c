#include "search.h"


int bin_search(
    key_array_t keys,
    key_t val,
    size_t len,
    compare_func_t comparator
) {
    int left = 0;
    int right = (int)len - 1;

    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int cmp = comparator(&keys[mid], &val);

        if (cmp == 0) {
            result = mid;
            right = mid - 1;
        }
        else if (cmp < 0) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return result;
}
