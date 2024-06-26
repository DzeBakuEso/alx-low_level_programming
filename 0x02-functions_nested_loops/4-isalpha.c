#include "main.h" /* Include the header file containing function prototypes */

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	/* Return 1 if c is a letter (either lowercase or uppercase), 0 otherwise */
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

