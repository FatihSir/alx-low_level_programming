#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);
int helper_binary_search(int *array, size_t low, size_t high, int value);
int jump_search(int *array, size_t size, int value);

#endif
