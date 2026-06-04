#include <stdio.h>

int main() {
    int intType;

    int *ptr = &intType;

    unsigned long long start = (unsigned long long )ptr;

    ptr++;
    unsigned long long end = (unsigned long long)ptr;

    unsigned long long size = (unsigned long long)(end - start);
    printf("Size of int is: %llu bytes", size);

    return 0;
}