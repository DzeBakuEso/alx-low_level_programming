#include "0-object_like_macro.h"
#include "main.h"

/**
 * main - Check the code for the macro SIZE
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;  /**< Variable to store the result of 98 + SIZE */

    s = 98 + SIZE;  /**< Calculate 98 + SIZE and store in variable s */
    printf("%d\n", s);  /**< Print the result of the calculation */
    return (0);  /**< Return 0 to indicate successful execution */
}

