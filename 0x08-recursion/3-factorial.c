#include "main.h"
/**
 * factorial -  function to print the factorial of n
 * @n: Number to find factorial
 * Return: Factorial output
 */
int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n < 0)
	{
		return -1;
	}
	return(n * factorial(n - 1));
}
