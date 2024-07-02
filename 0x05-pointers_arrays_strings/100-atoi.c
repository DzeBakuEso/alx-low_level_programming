#include "main.h"
#include <limits.h> /* Include for INT_MAX and INT_MIN*/
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the converted string
 *
 * Description:
 * This function converts the initial portion of the string @s to an integer.
 * It takes into account leading spaces and optional signs ('+' or '-').
 * Conversion stops when the first non-digit character is encountered,
 * or if the string is empty or does not contain any valid digits.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    /* Handle leading whitespace */
    while (s[i] == ' ')
    {
        i++;
    }

    /* Handle optional sign */
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    /* Convert string to integer */
    while (s[i] >= '0' && s[i] <= '9')
    {
        /* Check for integer overflow */
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
        {
            return sign == -1 ? INT_MIN : INT_MAX;
        }
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return sign * result;
}

