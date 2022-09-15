#include "main.h"
/**
 * times_table - Prints the times table
 * Return: 0
 */

void times_table(void)
{
	int i, j, tab;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			tab = i * j;
			if ((tab / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(tab + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((tab / 10) + '0');
				_putchar((tab % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}


