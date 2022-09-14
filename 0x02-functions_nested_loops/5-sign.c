#include "main.h"
/**
 * print_sign -prints the sign of an integer
 * @n: integer
 * Return: 1 if >0, 0 if 0, and -1 if <0
 */
int print_sign(int n)
{
	int ret = 0;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		ret = -1;
	}
	else
		_putchar ('0');
	return (ret);
}

