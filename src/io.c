#include <stdio.h>

#include "io.h"
#include "table.h"


size_t input_data(
    key_array_t keys,
    data_array_t data
) {
    key_t key;
    data_t string;

    size_t count = 0;

    while (
        (scanf("%d %[^\n]", &key, string) == 2)
        && (count < MAX_DATA_NUM)
    ) {
        keys[count] = key;
        strcpy(data[count], string);

        count++;
    }

    freopen("/dev/tty", "r", stdin);

    return count;
}

void print_search(
    key_array_t keys,
    data_array_t data,
    key_t key,
    size_t len,
    compare_func_t comparator
) {
    int ind = bin_search(keys, key, len, comparator);

    if (ind == -1) {
        printf("Key not found\n");
    }
    else {
        printf("%s\n", data[ind]);
    }
}

void searching_interface(
    key_array_t keys,
    data_array_t data,
    size_t len,
    compare_func_t comparator
) {
    printf("Enter key for searching\n");
    printf("Enter any other symbol to exit\n");
    printf("> ");

    key_t key;

    while (scanf("%d", &key) == 1) {
        print_search(keys, data, key, len, comparator);

        printf("> ");
    }

    printf("Exit searching interface\n");
}
