#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	/** Declare a pointer to hold the concatenated string **/
	char *s;

	/** Call the str_concat function to concatenate two strings **/
	s = str_concat("Betty ", "Holberton");

	/** Check if memory allocation failed **/
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}

	/** Print the concatenated string **/
	printf("%s\n", s);

	/** Free the allocated memory **/
	free(s);

	/** Return success status **/
	return (0);
}

