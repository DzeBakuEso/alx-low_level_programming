#include "main.h"  /* Include the header file containing function prototypes */

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');  /* Check if 'H' is lowercase */
    _putchar(r + '0');  /* Print the result as a character ('0' or '1') */
    
    r = _islower('o');  /* Check if 'o' is lowercase */
    _putchar(r + '0');  /* Print the result as a character ('0' or '1') */
    
    r = _islower(108);  /* Check if ASCII value 108 ('l') is lowercase */
    _putchar(r + '0');  /* Print the result as a character ('0' or '1') */
    
    _putchar('\n');  /* Print a newline character */
    
    return (0);
}

