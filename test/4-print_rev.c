#include "main.h"
#include <string.h>
/**
 * print_rev - print string in reverse
 * @s: string
 * Return: nothing
 */
void print_rev(char *s)
{
	/**
	 * int i, j;
	 * i = string length function (strlen) of s
	 * iterate from i to 0 using for loop (i--)
	 * _putchar s[i]
	 * close for loop
	 * _putchar new line
	 *
	 * STRING - GNIRTS
	 */
	int i;
	for (i = strlen(s); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
