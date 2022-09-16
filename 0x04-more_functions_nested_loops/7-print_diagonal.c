#include "main.h"
/**
 * print_diagonal - prints diagonals
 * @n: number of diagonals to be printed
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int b, a;

	b = 0;

	while (n > 0)
	{
		a = b;
		while (a > 0)
		{
			_putchar(' ');
			a--;
		}
		_putchar('\\');
		_putchar('\n');
		b++;
		n--;
	}
	if (b < 1)
	{
		_putchar('\n');
	}
}
