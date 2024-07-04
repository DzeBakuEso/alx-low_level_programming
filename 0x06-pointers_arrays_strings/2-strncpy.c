/**
 * _strncpy - copies a string up to n bytes
 * @dest: destination buffer where the string will be copied
 * @src: source string to copy from
 * @n: maximum number of bytes to copy
 *
 * This function copies up to n bytes of the string src to the destination
 * string dest. If src is shorter than n bytes, the remaining bytes in dest
 * are filled with '\0' bytes to pad it up to n bytes.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    /* Copy at most n bytes from src to dest */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    /* Pad dest with '\0' bytes if n > length of src */
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest; /* Return the pointer to the resulting string */
}

