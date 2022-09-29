#include "main.h"
/**
 * _pow_recursion - Function to find the value of x raised to y
 * @x: number to find power to
 * @y: integer that is power to
 * Return: output
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
