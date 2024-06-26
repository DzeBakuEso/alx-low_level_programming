#include "main.h" /* Include the header file containing function prototypes */

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r; /* Declare an integer variable r */

	print_last_digit(98); /* Call print_last_digit function with 98 */
	print_last_digit(0); /* Call print_last_digit function with 0 */

	r = print_last_digit(-1024); /* Call print_last_digit function with -1024 */
	_putchar('0' + r); /* Print the last digit returned by print_last_digit */
	_putchar('\n'); /* Print a newline character */

	return (0); /* Return 0 indicating successful execution */
}

