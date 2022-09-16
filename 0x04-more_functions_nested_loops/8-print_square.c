#include "main.h"

/**
 * print_square - prototype
 * @size: character
 */

void print_square(int size)
{
	int c, b;

	b = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; b < size; b++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
