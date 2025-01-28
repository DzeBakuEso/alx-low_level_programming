#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index of value if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		/* Calculate the mid index */
		mid = left + (right - left) / 2;

		/* Print the current array being searched */
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		/* Check if the value is at the mid index */
		if (array[mid] == value)
			return (mid);

		/* If value is smaller than mid, search the left subarray */
		if (array[mid] > value)
			right = mid - 1;
		/* If value is greater than mid, search the right subarray */
		else
			left = mid + 1;
	}

	return (-1); /* Return -1 if the value is not found */
}
