#include "./sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int comp_int(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int comp_float(const void *a, const void *b) {
    return (*(float*)a - *(float*)b);
}

int comp_char(const void *a, const void *b) {
    return ((*(char*)a) - (*(char*)b));
}

int comp_str (const void * a, const void * b ) {
    const char *pa = *(const char**)a;
    const char *pb = *(const char**)b;

    return strcmp(pa,pb);
}
