#include "main.h" /* Include the header file containing function prototypes */

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, col; /* Declare variables for row and column */

	for (row = 0; row <= 9; row++) /* Loop through rows from 0 to 9 */
	{
		for (col = 0; col <= 9; col++) /* Loop through columns from 0 to 9 */
		{
			int result = row * col; /* Calculate the product of row and column */

			if (col == 0)
			{
				_putchar('0'); /* Print leading '0' for the first column */
			}
			else
			{
				_putchar(','); /* Print comma to separate columns */
				_putchar(' '); /* Print space for formatting */
				if (result >= 10) /* Handle two-digit numbers */
				{
					_putchar((result / 10) + '0'); /* Print tens digit */
					_putchar((result % 10) + '0'); /* Print ones digit */
				}
				else
				{
					_putchar(' '); /* Print extra space for alignment */
					_putchar(result + '0'); /* Print single digit */
				}
			}
		}
		_putchar('\n'); /* Move to the next line after each row */
	}
}

