#include "main.h"

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
	}
	n = _absl(n);
	if (n <= 9)
	{
		_putchar(n + '0');
		return;
	}
	print_number(n / 10);
	_putchar((n % 10) + '0');
}
int _absl(int x)
{
	if (x < 0)
	{
		x *= -1;
	}
	return (x);
}
