#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	/* Check for NULL array */
	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		/* Calculate the probe position */
		pos = low + (((double)(high - low) /
			(array[high] - array[low]))) * (value - array[low]);

		/* Check if pos is out of range */
		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", (long)pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", (long)pos, array[pos]);

		/* Check if the value is found */
		if (array[pos] == value)
			return (pos);

		/* Update search range */
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
