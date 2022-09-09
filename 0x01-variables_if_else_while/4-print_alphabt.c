#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char smallal, e, q;

	e = 'e';
	q = 'q';

	for (smallal = 'a'; smallal <= 'z'; smallal++)
	{
		if (smallal != e && smallal != q)
			putchar (smallal);
	}
	putchar ('\n');
	return (0);
}
