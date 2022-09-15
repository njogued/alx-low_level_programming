#include "main.h"
/**
 * print_diagonal - prints diagonals
 * @n: number of diagonals to be printed
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int diag;

	if (n >= 1)
	{
		for (diag = 0; diag <= n; diag++)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar('\t');
		}
	}
	else
	{
		_putchar('\n');
	}
}

