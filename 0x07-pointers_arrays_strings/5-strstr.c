#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to search
 * @needle: The substring to locate
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *start = haystack;
        char *pattern = needle;

        /* Check for substring match */
        while (*haystack && *pattern && *haystack == *pattern)
        {
            haystack++;
            pattern++;
        }

        /* If we found the whole pattern */
        if (!*pattern)
            return start;

        /* Move to the next character in haystack */
        haystack = start + 1;
    }

    return NULL;
}

