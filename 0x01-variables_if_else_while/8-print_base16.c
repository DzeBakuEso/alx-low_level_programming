#include <stdio.h>

int main(void)
{
    char digit = '0'; /* Start with the first hexadecimal digit '0' */

    while (digit <= '9') /* Loop through digits '0' to '9' */
    {
        putchar(digit); /* Print current digit */
        digit++; /* Move to the next digit */
    }

    digit = 'a'; /* Start with the first lowercase hexadecimal letter 'a' */

    while (digit <= 'f') /* Loop through letters 'a' to 'f' */
    {
        putchar(digit); /* Print current letter */
        digit++; /* Move to the next letter */
    }

    putchar('\n'); /* Print newline at the end */

    return 0;
}
