#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: The operator passed as an argument
 *
 * Return: A pointer to the function that corresponds to the operator
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    for (i = 0; ops[i].op; i++)
    {
        if (*s == *ops[i].op)
        {
            return (ops[i].f);
        }
    }

    return (NULL);
}

