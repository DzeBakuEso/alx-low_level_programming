/**
 * _strcat - concatenates two strings
 * @dest: destination string to which src is appended
 * @src: source string to append to dest
 *
 * This function appends the src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest, and then adds a
 * terminating null byte.
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    char *d = dest; /* Pointer to traverse the destination string */

    /* Find the end of the destination string */
    while (*d != '\0')
    {
        d++;
    }

    /* Append each character from the source string to the destination string */
    while (*src != '\0')
    {
        *d = *src;
        d++;
        src++;
    }

    /* Add the terminating null byte */
    *d = '\0';

    return dest; /* Return the pointer to the resulting string */
}

