#include "main.h"
/**
 * _sqrt_recursion - return sqrt
 * @n: The square
 * @i: The squareroot
 * Return: Int sqrt
 */
int _sqr(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqr(n, 1));
}
/**
 * _sqr - Function to check sqrt
 * @i: calculated root
 * @n: Int to compare with given sqrt
 * Return: Function return to sqrt_recursion
 */
int _sqr(int n, int i)
{
	int sqr;

	sqr = i * i;
	if (sqr > n)
	{
		return (-1);
	}
	if (sqr == n)
	{
		return (i);
	}
	return (_sqr(n, i + 1));
}
