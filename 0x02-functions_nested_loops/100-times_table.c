#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Function to print times table for n
 * @n: input number
 * Return: Nada
 */
void print_times_table(int n)
{
	int row, col, prod;

	if (n <= 15 && n > 0)
	{
	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			prod = col * row;
			if (prod > 9 && prod < 100)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (prod < 10)
			{
				_putchar(prod + '0');
			}
			if (prod > 99)
			{
				_putchar((prod / 100) + '0');
				_putchar(((prod / 10) % 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (col != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}
