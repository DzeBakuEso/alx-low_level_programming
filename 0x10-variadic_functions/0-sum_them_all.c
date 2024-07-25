#include "variadic_functions.h"  /** Include custom header file **/

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list args;                 /** Declare variable to store the arguments list **/
    unsigned int i;               /** Declare variable for iteration **/
    int sum = 0;                  /** Initialize sum variable to 0 **/

    if (n == 0)                   /** Check if no parameters are passed **/
        return (0);               /** Return 0 if no parameters **/

    va_start(args, n);            /** Initialize the argument list **/
    for (i = 0; i < n; i++)       /** Loop through each argument **/
        sum += va_arg(args, int); /** Add each argument to sum **/
    va_end(args);                 /** Clean up the argument list **/

    return (sum);                 /** Return the sum of the arguments **/
}

