#include "main.h"
/**
 * _sqrt_recursion - return sqrt
 * _sqr - sqrt function
 * @n: The square
 * @i: The squareroot
 * Return: Int sqrt
 */
int _sqr(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqr(n, 1));
}
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
