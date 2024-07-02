#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char *password;

    password = generate_password();
    printf("%s\n", password);

    return (0);
}

