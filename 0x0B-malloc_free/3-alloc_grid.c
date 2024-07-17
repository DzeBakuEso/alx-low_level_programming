#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the allocated 2D array,
 *         NULL on failure or if width/height <= 0.
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int h, w;

    if (width <= 0 || height <= 0)
        return (NULL);

    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);

    for (h = 0; h < height; h++)
    {
        grid[h] = malloc(width * sizeof(int));
        if (grid[h] == NULL)
        {
            /* Free previously allocated memory */
            for (w = 0; w < h; w++)
                free(grid[w]);
            free(grid);
            return (NULL);
        }
        /* Initialize each element to 0 */
        for (w = 0; w < width; w++)
            grid[h][w] = 0;
    }

    return (grid);
}

