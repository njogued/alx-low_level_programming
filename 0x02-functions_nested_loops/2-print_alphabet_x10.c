#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{

	char q;

	int x10;

	for (x10 = 1; x10 <= 10; x10++)
	{
		for (q = 'a'; q <= 'z'; q++)
		{
			_putchar(q);
		}
	_putchar('\n');
	}
}
