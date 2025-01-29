#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>  /* Include size_t here as well */

/* Function prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t low, size_t high, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);  /* Add this line */
int binary_search(int *array, size_t low, size_t high, int value);

#endif /* SEARCH_ALGOS_H */
