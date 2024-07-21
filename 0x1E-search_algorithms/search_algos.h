#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#define min(a, b) ((a) < (b) ? (a) : (b))

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);
int helper_binary_search(int *array, size_t low, size_t high, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int helper_interpolation_search(int *array, size_t low,
				size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int exp_binary_search(int *array, size_t low, size_t high, int value);
int helper_advanced_binary(int *array, size_t low, size_t high, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
