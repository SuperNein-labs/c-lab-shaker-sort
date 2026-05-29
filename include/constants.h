#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <stddef.h>

#define MAX_STRING_LEN 256
#define MAX_DATA_NUM 50
#define TABLE_WIDTH 20


typedef int key_t;
typedef char data_t[MAX_STRING_LEN];

typedef key_t key_array_t[MAX_DATA_NUM];
typedef data_t data_array_t[MAX_DATA_NUM];

typedef int (*compare_func_t)(int, int);

#endif
