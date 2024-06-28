#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random number to the variable n
 * and prints whether it is positive, negative, or zero.
 * Return: Always 0.
 */
int main(void)
{
    int n;

    srand(time(0));  /* Initialization, should only be called once */

    n = rand() % 201 - 100;  /* Random number between -100 and 100 */

    printf("%d is ", n);

    if (n > 0)
        printf("positive\n");
    else if (n == 0)
        printf("zero\n");
    else
        printf("negative\n");

    return (0);
}

