#include "main.h" /* Include the header file containing function prototypes */

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r; /* Declare an integer variable r */

	/* Print the sign of 98 and store the result in r */
	r = print_sign(98);
	/* Print a comma and a space */
	_putchar(',');
	_putchar(' ');
	/* Print the result of print_sign */
	_putchar(r + '0');
	_putchar('\n');

	/* Print the sign of 0 and store the result in r */
	r = print_sign(0);
	/* Print a comma and a space */
	_putchar(',');
	_putchar(' ');
	/* Print the result of print_sign */
	_putchar(r + '0');
	_putchar('\n');

	/* Print the sign of 0xff and store the result in r */
	r = print_sign(0xff);
	/* Print a comma and a space */
	_putchar(',');
	_putchar(' ');
	/* Print the result of print_sign */
	_putchar(r + '0');
	_putchar('\n');

	/* Print the sign of -1 and store the result in r */
	r = print_sign(-1);
	/* Print a comma and a space */
	_putchar(',');
	_putchar(' ');
	/* Print the result of print_sign */
	_putchar(r + '0');
	_putchar('\n');

	return (0); /* Return 0 indicating successful execution */
}

