#include "main.h"
/**
 * puts_half - Prints second half
 * @str: string to print
 * Return: Always 0
 */
void puts_half(char *str)
{
	int a, i;

	a = 0;
	for (i = 0; a < str[i]; i++)
	{
		i = i;
	}
	if (i % 2 == 0)
	{
		for (i = i / 2; a < str[i]; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (i + 1) / 2; a < str[i]; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
