#include <stdio.h>

/**
 * main - Entry point, prints the alphabet in lowercase excluding 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        if (letter != 'e' && letter != 'q')
            putchar(letter);
        letter++;
    }

    putchar('\n'); /* Print newline after the alphabet */

    return (0);
}
