#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - Prints the current subarray being searched.
 * @array: The array to print.
 * @low: The starting index of the current subarray.
 * @high: The ending index of the current subarray.
 */
void print_array(int *array, size_t low, size_t high)
{
    size_t i;

    printf("Searching in array: ");
    for (i = low; i <= high; i++)
    {
        if (i > low)
            printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");
}

/**
 * recursive_binary_search - Searches for the first occurrence of a value
 * in a sorted array using binary search (recursive).
 *
 * @array: Pointer to the first element of the array to search.
 * @low: The starting index of the subarray.
 * @high: The ending index of the subarray.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int recursive_binary_search(int *array, size_t low, size_t high, int value)
{
    size_t mid;

    if (low > high)
        return (-1);

    print_array(array, low, high);

    mid = low + (high - low) / 2;

    if (array[mid] == value)
    {
        /* Check if this is the first occurrence */
        if (mid == low || array[mid - 1] != value)
            return (mid);
        return (recursive_binary_search(array, low, mid - 1, value)); /* Continue searching to the left */
    }

    if (array[mid] < value)
        return (recursive_binary_search(array, mid + 1, high, value)); /* Search right */
    else
        return (recursive_binary_search(array, low, mid - 1, value)); /* Search left */
}

/**
 * advanced_binary - Searches for the first occurrence of a value in a sorted
 * array using binary search with recursion.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (!array || size == 0)
        return (-1);

    return (recursive_binary_search(array, 0, size - 1, value));
}
