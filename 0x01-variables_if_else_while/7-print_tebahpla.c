#include <stdio.h>

int main(void)
{
    char letter = 'z'; /* Start with 'z', the last lowercase letter */

    while (letter >= 'a') /* Loop from 'z' to 'a' */
    {
        putchar(letter); /* Print current letter */
        letter--; /* Move to the previous letter in the alphabet */
    }

    putchar('\n'); /* Print newline at the end */

    return 0;
}
