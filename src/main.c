#include <stdio.h>

#include "constants.h"
#include "compare.h"
#include "sort.h"
#include "table.h"
#include "io.h"


int main(void) {
    key_array_t keys;
    data_array_t data;

    size_t len = input_data(keys, data);

    printf("Table:");
    print_table(keys, data, len);

    shaker_sort(keys, data, len, compare_keys);

    printf("Sorted Table:");
    print_table(keys, data, len);

    searching_interface(keys, data, len, compare_keys);

    return 0;
}
