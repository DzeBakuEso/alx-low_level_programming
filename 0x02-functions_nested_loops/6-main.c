#include "main.h" /* Include the header file containing function prototypes */
#include <stdio.h> /* Include the standard input/output library */

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r; /* Declare an integer variable r */

	/* Compute the absolute value of -1 and store the result in r */
	r = _abs(-1);
	printf("%d\n", r); /* Print the result */

	/* Compute the absolute value of 0 and store the result in r */
	r = _abs(0);
	printf("%d\n", r); /* Print the result */

	/* Compute the absolute value of 1 and store the result in r */
	r = _abs(1);
	printf("%d\n", r); /* Print the result */

	/* Compute the absolute value of -98 and store the result in r */
	r = _abs(-98);
	printf("%d\n", r); /* Print the result */

	return (0); /* Return 0 indicating successful execution */
}

