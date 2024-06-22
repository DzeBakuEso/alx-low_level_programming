#include <stdio.h>

int main(void)
{
    int digit = 0;

    while (digit <= 9)
    {
        putchar(digit + '0'); /* Print current digit */
        if (digit < 9)
        {
            putchar(','); /* Print comma */
            putchar(' '); /* Print space */
        }
        digit++; /* Move to the next digit */
    }

    putchar('\n'); /* Print newline at the end */

    return 0;
}
