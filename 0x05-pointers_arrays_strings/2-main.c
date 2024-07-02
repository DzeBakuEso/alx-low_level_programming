#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char *str = "My first strlen!";
    int len;

    len = _strlen(str);
    printf("Length of '%s' is: %d\n", str, len);

    return (0);
}

