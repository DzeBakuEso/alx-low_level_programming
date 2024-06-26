#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a newline.
 */
void print_alphabet(void)
{
	/* Variable declaration */
	char letter;

	/* Loop through each letter from 'a' to 'z' */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter); /* Print the current letter */
	}
	_putchar('\n'); /* Print a newline character at the end */
}

