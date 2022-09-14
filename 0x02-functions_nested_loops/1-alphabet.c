#include "main.h"

/**
 * main - Entry point 
 * print_alphabet function prints from a to z
 *
 * return alphabets
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
