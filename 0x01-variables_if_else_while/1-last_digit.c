#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, prints last digit of a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, last_numb;

    srand(time(0)); /* Seed for rand() based on current time */
    n = rand() - RAND_MAX / 2; /* Generate a random number and store it in n */

    last_numb = n % 10; /* Calculate the last digit of n */

    printf("Last digit of %d is %d ", n, last_numb);

    if (last_numb > 5)
        printf("and is greater than 5\n");
    else if (last_numb == 0)
        printf("and is 0\n");
    else
        printf("and is less than 6 and not 0\n");

    return (0);
}
