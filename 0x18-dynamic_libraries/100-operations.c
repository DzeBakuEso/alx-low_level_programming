#include <stdio.h>
/* Function to add two numbers */
int add(int a, int b)
{
	return (a + b);
}
/* Function to subtract two numbers */
int sub(int a, int b)
{
	return (a - b);
}
/* Function to multiply two numbers */
int mul(int a, int b)
{
	return (a * b);
}
/* Function to divide two numbers */
int div(int a, int b)
{
	if (b == 0)
	{
		/* Handle division by zero, you may return an error code or value */
		return (0); /* Or you could use some error handling */
	}
	return (a / b);
}
/* Function to calculate modulus of two numbers */
int mod(int a, int b)
{
	return (a % b);
}

