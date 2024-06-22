#include <stdio.h>

/**
 * main - Entry point, prints the alphabet in lowercase and uppercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char lowercase = 'a';
    char uppercase = 'A';

    while (lowercase <= 'z')
    {
        putchar(lowercase);
        lowercase++;
    }

    while (uppercase <= 'Z')
    {
        putchar(uppercase);
        uppercase++;
    }

    putchar('\n'); /* Print newline after both lowercase and uppercase alphabets */

    return 0;
}
