/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: destination string to which src is appended
 * @src: source string to append to dest
 * @n: maximum number of bytes to use from src
 *
 * This function appends the src string to the dest string, overwriting
 * the terminating null byte (\0) at the end of dest, and then adds a
 * terminating null byte. It will use at most n bytes from src.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
    char *d = dest; /* Pointer to traverse the destination string */

    /* Find the end of the destination string */
    while (*d != '\0')
    {
        d++;
    }

    /* Append up to n characters from the source string to the destination string */
    while (n > 0 && *src != '\0')
    {
        *d = *src;
        d++;
        src++;
        n--;
    }

    /* Add the terminating null byte */
    *d = '\0';

    return dest; /* Return the pointer to the resulting string */
}

