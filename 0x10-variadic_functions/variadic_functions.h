#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;                /**< The operator */
    int (*f)(int a, int b); /**< The function associated */
} op_t;

int sum_them_all(const unsigned int n, ...); /**< Function prototype for sum_them_all */
void print_numbers(const char *separator, const unsigned int n, ...); /**< Function prototype for print_numbers */
void print_strings(const char *separator, const unsigned int n, ...); /**< Function prototype for print_strings */
void print_all(const char * const format, ...); /**< Function prototype for print_all */

#endif /* VARIADIC_FUNCTIONS_H */

