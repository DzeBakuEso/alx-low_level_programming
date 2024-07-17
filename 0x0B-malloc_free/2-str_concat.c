#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s_1: First string.
 * @s_2: Second string.
 *
 * Return: Pointer to newly allocated space in memory
 *         containing concatenated string, or NULL if failure.
 */
char *str_concat(char *s_1, char *s_2)
{
	/** declare variables for concatenation, lengths and iteration **/
	char *concat;
	unsigned int i, j, length1, length2;

	/** handle NULL strings by treating them as empty strings **/
	if (s_1 == NULL)
		s_1 = "";
	if (s_2 == NULL)
		s_2 = "";

	/** calculate length of the first string **/
	for (length1 = 0; s_1[length1] != '\0'; length1++)
		;

	/** calculate length of the second string **/
	for (length2 = 0; s_2[length2] != '\0'; length2++)
		;

	/** allocate memory for concatenated string **/
	concat = malloc((length1 + length2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/** copy characters from the first string **/
	for (i = 0; i < length1; i++)
		concat[i] = s_1[i];

	/** copy characters from the second string **/
	for (j = 0; j < length2; j++)
		concat[i + j] = s_2[j];

	/** add null terminator to the end of the concatenated string **/
	concat[i + j] = '\0';

	/** return pointer to the newly allocated space **/
	return (concat);
}

