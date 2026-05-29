#include <stdio.h>

#include "table.h"


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
