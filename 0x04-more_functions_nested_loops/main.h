#ifndef MAIN_H
#define MAIN_H

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

#endif /* MAIN_H */

