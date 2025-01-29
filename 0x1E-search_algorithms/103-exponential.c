#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>  /* Added to ensure size_t is recognized */
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using
 *                     the Exponential search algorithm.
 *
 * @array: Pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	/** Check if the array is NULL or the size is zero **/
	if (!array || size == 0)
		return (-1);

	/** Check if the first element is the value **/
	if (array[0] == value)
		return (0);

	/** Find range where the value may be present **/
	size_t i = 1;
	while (i < size && array[i] <= value)
		i = i * 2;  /** Exponentially increase index **/

	/** Perform binary search in the range [i/2, min(i, size-1)] **/
	return (binary_search(array, i / 2, (i < size) ? i : size - 1, value));
}
