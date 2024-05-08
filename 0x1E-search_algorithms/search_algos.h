# ifndef SEARCH_ALGO
# define SEARCH_ALGO

/* system headers */
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <math.h>

/* func prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

# endif
