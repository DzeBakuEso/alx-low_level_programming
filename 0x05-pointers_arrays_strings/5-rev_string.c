#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */
void rev_string(char *s)
{
    int length = 0;
    int start, end;
    char temp;

    /* Calculate the length of the string */
    while (s[length] != '\0')
    {
        length++;
    }

    /* Initialize start and end indices for swapping */
    start = 0;
    end = length - 1;

    /* Swap characters from both ends towards the center */
    while (start < end)
    {
        /* Swap characters */
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        /* Move indices towards the center */
        start++;
        end--;
    }
}

