#include "main.h"
/**
 * print_rev - Print the alphabet in reverse
 * @s: string input
 * Return: 0
 */
void print_rev(char *s)
{
	int a, i;

	a = 0;
	for (i = 1; a < s[i]; i++)
	{
		i = i;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
