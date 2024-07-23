#include "main.h"
#include "1-pi.h"

/**
 * main - Check the code for the macro PI
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;  /**< Calculate the area of the circle using PI */
    printf("%.3f\n", a);  /**< Print the area */
    return (0);
}

