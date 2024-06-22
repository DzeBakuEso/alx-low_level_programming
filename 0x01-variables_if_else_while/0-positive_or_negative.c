#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, prints whether a random number is positive, negative, or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0)); /* Seed for rand() based on current time */
    n = rand() - RAND_MAX / 2; /* Generate a random number and store it in n */

    printf("%d ", n);

    if (n > 0)
        printf("is positive\n");
    else if (n == 0)
        printf("is zero\n");
    else
        printf("is negative\n");

    return (0);
}
