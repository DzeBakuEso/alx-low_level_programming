#include <stdio.h>              /** Include standard input-output library **/
#include "variadic_functions.h" /** Include custom header file **/

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;                    /** Declare variable to store sum **/

    sum = sum_them_all(2, 98, 1024); /** Call sum_them_all function with 2 arguments **/
    printf("%d\n", sum);            /** Print the sum returned by sum_them_all **/
    sum = sum_them_all(4, 98, 1024, 402, -1024); /** Call sum_them_all with 4 arguments **/
    printf("%d\n", sum);             /** Print the sum returned by sum_them_all **/ 
    return (0);                     /** Return 0 to indicate successful execution **/
}

