#include "main.h"

/**
 * print_alphabetfunction prints from a to z
 *
 * return alphabets
 */
int _putchar(char c);
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
