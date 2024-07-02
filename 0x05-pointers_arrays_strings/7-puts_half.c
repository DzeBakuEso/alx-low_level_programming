#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: The input string
 */
void puts_half(char *str)
{
    int length = 0;
    int i, start;

    /* Calculate the length of the string */
    while (str[length] != '\0')
    {
        length++;
    }

    /* Determine the starting point based on string length */
    if (length % 2 == 0)
    {
        start = length / 2;
    }
    else
    {
        start = (length + 1) / 2;
    }

    /* Print the second half of the string */
    for (i = start; i < length; i++)
    {
        putchar(str[i]);
    }
    putchar('\n');
}

