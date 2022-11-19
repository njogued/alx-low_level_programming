#include "main.h"
#include <string.h>
/**
 * puts2 - every other character
 * @str: string 
 * Return: Nothing
 */
void puts2(char *str)
{
	/**
	 * int iterator, len
	 * find strlen(str)
	 * loop through the string
	 * print character 0, 2, 4... etc
	 * exit loop
	 * print new line
	 */
	int i, len;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
