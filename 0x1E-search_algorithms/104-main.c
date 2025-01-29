#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    /** Array of integers to search */
    int array[] = {
        0, 1, 2, 5, 5, 6, 6, 7, 8, 9
    };
    /** Calculate the number of elements in the array */
    size_t size = sizeof(array) / sizeof(array[0]);

    /** Search for the number 8 and print the result */
    printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));

    /** Search for the number 5 and print the result */
    printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));

    /** Search for a non-existent number 999 and print the result */
    printf("Found %d at index: %d\n", 999, advanced_binary(array, size, 999));

    return (EXIT_SUCCESS);
}
