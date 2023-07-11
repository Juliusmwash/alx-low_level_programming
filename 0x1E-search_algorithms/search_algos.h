#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

/* helper functions */
int binary_search_helper(int left, size_t rt, int value
, int *array);
int binary_search2(int *array, int left, int right, int value);

#endif /*SEARCH_ALGOS_H*/
