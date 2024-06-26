#include "main.h" /* Include the header file containing function prototypes */

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n is greater than zero
 *         0 if n is zero
 *         -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0) /* Check if the number is greater than zero */
	{
		_putchar('+'); /* Print '+' if n is greater than zero */
		return (1); /* Return 1 if n is greater than zero */
	}
	else if (n == 0) /* Check if the number is zero */
	{
		_putchar('0'); /* Print '0' if n is zero */
		return (0); /* Return 0 if n is zero */
	}
	else /* The number is less than zero */
	{
		_putchar('-'); /* Print '-' if n is less than zero */
		return (-1); /* Return -1 if n is less than zero */
	}
}

