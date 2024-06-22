#include <stdio.h>

/**
 * main - Entry point, prints the alphabet in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }
    putchar('\n'); /* Print newline after the alphabet*/

    return (0);
}
