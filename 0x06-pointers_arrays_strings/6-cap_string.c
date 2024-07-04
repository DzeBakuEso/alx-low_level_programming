#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		/* Check if the current character is a separator */
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
			str[i - 1] == '\n' || str[i - 1] == ',' ||
			str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' ||
			str[i - 1] == '"' || str[i - 1] == '(' ||
			str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}')
		{
			/* Capitalize the current character if it is lowercase */
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}

	return (str);
}

