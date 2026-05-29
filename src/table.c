#include <stdio.h>
#include <string.h>

#include "table.h"
#include "sort.h"
#include "compare.h"


static data_t *current_data;

static void swap_data(size_t i, size_t j) {
    data_t tmp;
    memcpy(tmp, current_data[i], sizeof(data_t));

    memcpy(current_data[i], current_data[j], sizeof(data_t));
    memcpy(current_data[j], tmp, sizeof(data_t));
}

void sort_table(
    key_array_t keys,
    data_array_t data,
    size_t len
) {
    current_data = data;

    shaker_sort(
        keys,
        len,
        sizeof(key_t),
        compare_int_keys,
        swap_data
    );
}


static void print_horizontal_line(size_t len)
{
    for (size_t i = 0; i < len; i++)
        printf("-");
    printf("\n");
}

void print_table(
    key_array_t keys,
    data_array_t data,
    size_t len
) {
    printf("\n");
    print_horizontal_line(TABLE_WIDTH);

    printf("%-6s | Data\n", "Key");

    print_horizontal_line(TABLE_WIDTH);

    for (size_t i = 0; i < len; i++)
    {
        printf("%-6d | %s\n", keys[i], data[i]);
    }

    print_horizontal_line(TABLE_WIDTH);
    printf("\n");
}
