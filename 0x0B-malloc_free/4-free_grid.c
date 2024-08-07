#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid.
 * @grid: Pointer to the grid to free.
 * @height: Height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
    int h;

    if (grid == NULL || height <= 0)
        return;

    for (h = 0; h < height; h++)
    {
        free(grid[h]);
    }
    free(grid);
}

