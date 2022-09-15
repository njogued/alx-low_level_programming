#include "main.h"
/**
 * print_line - Prints lines using _
 * @n: number of _
 * Return: Always 0
 */
void print_line(int n)
{
	int a;

	if (n >= 1)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
