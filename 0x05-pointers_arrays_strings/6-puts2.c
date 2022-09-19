#include "main.h"
/**
 * puts2 - prints any other character
 * @str: string input
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;
	int a;

	a = 0;
	for(i = 0; a < str[i]; i++)
	{
		if(i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
