#include "main.h"

/* Declaring _putchar function to avoid implicit declaration */
int _putchar(char c);

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 *
 * Description: Prints a string using recursion.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        _putchar('\n'); /* Print newline when end of string is reached */
        return;
    }
    _putchar(*s); /* Print current character */
    _puts_recursion(s + 1); /* Recursively call _puts_recursion with next character */
}

