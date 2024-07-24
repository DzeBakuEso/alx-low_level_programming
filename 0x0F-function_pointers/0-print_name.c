#include "function_pointers.h"

/**
 * print_name - Prints a name using the function pointer provided
 * @name: The name to be printed
 * @f: The function pointer that defines how the name is printed
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name && f)
        f(name);
}

