#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything, followed by a new line.
 * @format: The format of the arguments to be printed.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    char c;
    int num;
    float f;

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                c = va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                num = va_arg(args, int);
                printf("%d", num);
                break;
            case 'f':
                f = va_arg(args, double);
                printf("%f", f);
                break;
            case 's':
                str = va_arg(args, char *);
                if (str)
                    printf("%s", str);
                else
                    printf("(nil)");
                break;
            default:
                i++;
                continue;
        }
        if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
            printf(", ");
        i++;
    }
    printf("\n");

    va_end(args);
}

