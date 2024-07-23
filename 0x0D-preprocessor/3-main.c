#include "main.h"
#include "3-function_like_macro.h"

/**
 * main - Check the code for the macro ABS
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;  /**< Calculate the absolute value of -98 and multiply by 10 */
    j = ABS(98) * 10;   /**< Calculate the absolute value of 98 and multiply by 10 */
    printf("%d, %d\n", i, j);  /**< Print the results */
    return (0);
}

