#ifndef MAIN_H
#define MAIN_H

/* Function prototypes */

/**
 * _isupper - Checks for uppercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c);

/**
 * mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of a and b
 */
int mul(int a, int b);

/**
 * print_numbers - Prints the numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void);

/**
 * print_most_numbers - Prints the numbers from 0 to 9, excluding 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void);

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void);

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character _ should be printed
 *
 * Return: void
 */
void print_line(int n);

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: The number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n);

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

#endif /* MAIN_H */

