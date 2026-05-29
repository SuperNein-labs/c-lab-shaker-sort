#include <string.h>

#include "sort.h"


static void swap_data_val(
    data_array_t data,
    size_t ind_1,
    size_t ind_2
) {
    data_t val;
    strcpy(val, data[ind_1]);

    strcpy(data[ind_1], data[ind_2]);
    strcpy(data[ind_2], val);
}

static void swap_int_val(
    key_array_t keys,
    size_t ind_1,
    size_t ind_2
) {
    key_t val = keys[ind_1];

    keys[ind_1] = keys[ind_2];
    keys[ind_2] = val;
}


void shaker_sort(
    key_array_t keys,
    data_array_t data,
    size_t len,
    compare_func_t comparator
) {
    size_t left = 0;
    size_t right = len - 1;

    while (left < right) {
        for (size_t i = left; i < right; i++) {

            if (comparator(keys[i], keys[i + 1]) > 0) {
                swap_int_val(keys, i, i + 1);
                swap_data_val(data, i, i + 1);
            }
        }

        right--;

        for (size_t i = right; i > left; i--) {

            if (comparator(keys[i - 1], keys[i]) > 0) {
                swap_int_val(keys, i, i - 1);
                swap_data_val(data, i, i - 1);
            }
        }

        left++;
    }
}
