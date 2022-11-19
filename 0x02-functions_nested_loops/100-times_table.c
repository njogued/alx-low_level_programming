#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Function to print times table for n
 * @n: input number
 * Return: Nada
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 16 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				result = i * j;
				if (result > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(result / 100 + '0');
					_putchar((result / 10) % 10 + '0');
					_putchar(result % 10 + '0');
				}
				else if (result > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else if (result < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(result % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
