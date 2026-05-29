#include <string.h>

#include "sort.h"


static void swap(
    void *a,
    void *b,
    size_t size
) {
    char tmp[size];

    memcpy(tmp, a, size);
    memcpy(a, b, size);
    memcpy(b, tmp, size);
}

void shaker_sort(
    void *base,
    size_t nmemb,
    size_t size,
    compare_func_t compar,
    swap_callback_t on_swap
) {
    if (nmemb < 2) {
        return;
    }

    char *arr = base;

    size_t left = 0;
    size_t right = nmemb - 1;

    while (left < right) {
        for (size_t i = left; i < right; i++) {

            void *a = arr + i * size;
            void *b = arr + (i + 1) * size;

            if (compar(a, b) > 0) {
                swap(a, b, size);

                if (on_swap != NULL) {
                    on_swap(i, i + 1);
                }
            }
        }

        right--;

        for (size_t i = right; i > left; i--) {
            void *a = arr + (i - 1) * size;
            void *b = arr + i * size;

            if (compar(a, b) > 0) {
                swap(a, b, size);

                if (on_swap != NULL) {
                    on_swap(i - 1, i);
                }
            }
        }

        left++;
    }
}
