#include "main.h"
/**
 * print_alphabetfunction prints from a to z
 *
 * return alphabets
 */
void print_alphabet(void)
{
	char a = 'a';
	while(a <= 'z');
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
