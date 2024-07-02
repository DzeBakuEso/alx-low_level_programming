#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random valid password
 *
 * Return: Pointer to a string containing the generated password
 */
char *generate_password(void)
{
    static char password[12];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand(time(0));
    for (i = 0; i < 11; i++)
    {
        password[i] = charset[rand() % 62];
    }
    password[11] = '\0';

    return password;
}

