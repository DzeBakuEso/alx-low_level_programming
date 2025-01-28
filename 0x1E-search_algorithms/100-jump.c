#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches a value in a sorted array using jump search algorithm
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: Index of the value, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, current;

	/* Check if array is NULL */
	if (array == NULL || size == 0)
		return (-1);

	/* Calculate step size */
	step = sqrt(size);
	prev = 0;

	/* Jump in steps of size */
	while (array[step - 1] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	/* Linear search within the block */
	for (current = prev; current < step && current < size; current++)
	{
		printf("Value checked array[%lu] = [%d]\n", current, array[current]);
		if (array[current] == value)
			return (current);
	}

	/* If value is not found */
	return (-1);
}
