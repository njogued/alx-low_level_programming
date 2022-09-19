#include "main.h"
/**
 * _puts - function to print a string
 * @str: string to print
 * Return: Nothing
 */
void _puts(char *str)
{
	int a = 0;
	int i;

	for (i = 0; a < str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
