#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: the index of the first element for which the cmp function does not return 0.
 *         If no element matches, return -1.
 *         If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    /* Check if the size is valid */
    if (size <= 0)
    {
        return (-1);
    }

    /* Iterate through the array */
    for (i = 0; i < size; i++)
    {
        /* Check if the cmp function returns a non-zero value */
        if (cmp(array[i]) != 0)
        {
            return (i);
        }
    }

    /* If no element matches, return -1 */
    return (-1);
}

