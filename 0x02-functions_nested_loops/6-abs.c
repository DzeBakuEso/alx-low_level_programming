#include "main.h" /* Include the header file containing function prototypes */

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n >= 0) /* Check if n is non-negative */
	{
		return (n); /* Return n if it is non-negative */
	}
	else
	{
		return (-n); /* Return -n if n is negative */
	}
}

