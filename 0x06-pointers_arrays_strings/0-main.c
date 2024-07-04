#include "main.h"
#include<stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    char s1[98] = "Hello "; /* Initialize s1 with "Hello " */
    char s2[] = "World!\n"; /* Initialize s2 with "World!\n" */
    char *ptr; /* Pointer to hold the result of the concatenation */

    printf("%s\n", s1); /* Print the initial value of s1 */
    printf("%s", s2); /* Print the initial value of s2 */
    ptr = _strcat(s1, s2); /* Concatenate s2 to s1 and store the result in ptr */
    printf("%s", s1); /* Print the new value of s1 */
    printf("%s", s2); /* Print the value of s2 (unchanged) */
    printf("%s", ptr); /* Print the value stored in ptr */
    return (0); /* Return 0 to indicate successful execution */
}
