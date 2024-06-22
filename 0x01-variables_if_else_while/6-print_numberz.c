#include <stdio.h>

/**
 * main - Entry point, prints all single digit numbers of base 10 followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit = 0;

    while (digit <= 9)
    {
        putchar(digit % 10 + '0'); /* Print the digit by converting to character */
        digit++;
    }

    putchar('\n'); /* Print newline after all digits */

    return 0;
}
