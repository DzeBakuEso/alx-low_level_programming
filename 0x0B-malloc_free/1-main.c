#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = _strdup("ALX SE"); /* calling the function and assign its return values*/
	if (s == NULL)
	{
		printf("failed to allocate memory\n");/*if memory is not allocatedd*/
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}

