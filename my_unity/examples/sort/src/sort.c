#include "./sort.h"
#include <stdio.h>
#include <stdlib.h>

#define NELEMS(x)  (sizeof(x) / sizeof(x[0]))

int comp_int(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void sort_working(int *v, int size) {
    qsort(v, size, sizeof(int), comp_int);
}


// 'sort' that just shuffle the vector

static void shuffle(void *array, size_t n, size_t size) {
    char tmp[size];
    char *arr = array;
    size_t stride = size * sizeof(char);

    if (n > 1) {
        size_t i;
        for (i = 0; i < n - 1; ++i) {
            size_t rnd = (size_t) rand();
            size_t j = i + rnd / (RAND_MAX / (n - i) + 1);

            memcpy(tmp, arr + j * stride, size);
            memcpy(arr + j * stride, arr + i * stride, size);
            memcpy(arr + i * stride, tmp, size);
        }
    }
}

void sort_broke(int *v, int size) {    
    shuffle(v, NELEMS(v), size);
}

