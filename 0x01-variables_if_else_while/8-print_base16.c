#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base16;
	char atof;

	for (base16 = 0; base16 < 10; base16++)
		putchar(base16 + '0');
	for (atof = 'a'; atof < 'g'; atof++)
		putchar(atof);
	putchar('\n');
	return (0);
}

