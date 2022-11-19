#include "main.h"
#include <string.h>
/**
 * puts_half - prints half
 * @str: string
 * Return: Nothing
 */
void puts_half(char *str)
{
	/**
	 * int iterator i
	 * find len = strlen(str)
	 * iterate through string
	 * print from i = len/2 to len
	 * if odd(print from i = len/2+1)
	 *
	 * len = 7 : HELLOOO (3) = OOO
	 * HEL
	 *
	 *
	 *
	 *
	 *
	 *
	 * LOO
	 */
	int i, len;
	len = strlen(str);
	if(len%2 == 0)
	{
		for (i = len/2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	if (len%2 != 0)
	{
		for (i = len/2+1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
