#include "main.h" /* Include the header file containing function prototypes */

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r; /* Declare an integer variable r */

	/* Check if 'H' is an alphabetic character and store the result in r */
	r = _isalpha('H');
	/* Print the result of the check */
	_putchar(r + '0');

	/* Check if 'o' is an alphabetic character and store the result in r */
	r = _isalpha('o');
	/* Print the result of the check */
	_putchar(r + '0');

	/* Check if 108 (which is 'l') is an alphabetic character and store the result in r */
	r = _isalpha(108);
	/* Print the result of the check */
	_putchar(r + '0');

	/* Check if ';' is an alphabetic character and store the result in r */
	r = _isalpha(';');
	/* Print the result of the check */
	_putchar(r + '0');

	/* Print a newline character */
	_putchar('\n');

	return (0); /* Return 0 indicating successful execution */
}

