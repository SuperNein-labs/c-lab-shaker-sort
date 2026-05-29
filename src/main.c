#include <stdio.h>

#include "constants.h"
#include "compare.h"
#include "table.h"
#include "io.h"


int main(void) {
    key_array_t keys;
    data_array_t data;

    size_t len = input_data(keys, data);

    printf("Table:");
    print_table(keys, data, len);

    sort_table(
        keys,
        data,
        len
    );

    printf("Sorted Table:");
    print_table(keys, data, len);

    searching_interface(
        keys,
        data,
        len,
        compare_int_keys
    );

    return 0;
}
