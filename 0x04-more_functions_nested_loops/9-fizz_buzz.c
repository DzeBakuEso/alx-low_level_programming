#include "main.h"

/**
 * fizz_buzz - Implements the FizzBuzz logic for numbers 1 to 100
 */
void fizz_buzz(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            _putchar('F'), _putchar('i'), _putchar('z'), _putchar('z'), _putchar('B'), _putchar('u'), _putchar('z'), _putchar('z');
        else if (i % 3 == 0)
            _putchar('F'), _putchar('i'), _putchar('z'), _putchar('z');
        else if (i % 5 == 0)
            _putchar('B'), _putchar('u'), _putchar('z'), _putchar('z');
        else
        {
            int j = i;
            do
            {
                _putchar((j / 10) + '0');
                j /= 10;
            } while (j);
        }

        if (i < 100)
            _putchar(' ');
        else
            _putchar('\n');
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    fizz_buzz();
    return (0);
}

