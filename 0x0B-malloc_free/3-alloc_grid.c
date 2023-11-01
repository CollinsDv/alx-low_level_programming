#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc - prints a grid sized width x height 
 * populated with 0 * 
 * @width: 1st array subscript
 * @height: 2nd array subscript 
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
        int c, r, i;
        int **array;
        
        if (width == 0 || height == 0)
                return (NULL);
        /*make multidimensional 2D array*/
        array = (int **)malloc(height * sizeof(*array));
        if (array == NULL)
                return (NULL);
        
        for (r = 0; r < height; r++)
        {
                array[r] = malloc(width * sizeof(**array));
                if (array[r] == NULL)
                {
                        for ( i = 0; i < r; i++)
                        {
                                free(array[i]);
                        }
                        free(array);
                        return NULL;
                }
                for (c = 0; c < width; c++)
                        array[r][c] = 0;
        }                
        return (array);
}
