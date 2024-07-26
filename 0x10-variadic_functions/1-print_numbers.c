#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args; /**< Declare a variable of type va_list to handle variable arguments */
    unsigned int i; /**< Loop index */
    
    va_start(args, n); /**< Initialize va_list variable with the number of arguments */

    for (i = 0; i < n; i++) /**< Loop through all arguments */
    {
        printf("%d", va_arg(args, int)); /**< Print the integer argument */
        if (separator && i < n - 1) /**< Check if a separator is provided and it's not the last number */
            printf("%s", separator); /**< Print the separator */
    }
    printf("\n"); /**< Print a new line at the end */

    va_end(args); /**< Clean up the va_list variable */
}

