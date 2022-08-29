#ifndef SEARCH_ALGOS_h
#define SEARCH_ALGOS_h

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binarySearch(int *array, int high, int low, int target);
#endif
