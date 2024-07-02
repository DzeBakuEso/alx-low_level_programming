#include "main.h"
#include <unistd.h> /* Needed for write function */

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: The string to be printed
 */
void _puts(char *str)
{
    while (*str != '\0')
    {
        putchar(*str); /* Using putchar instead of _putchar for simplicity */
        str++;
    }
    putchar('\n');
}

