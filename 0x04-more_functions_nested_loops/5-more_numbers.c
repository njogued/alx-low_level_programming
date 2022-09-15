#include "main.h"
/**
 * more_numbers - function to print to 14
 * Return: Always 0
 */
void more_numbers(void)
{
	int a, b;
	for (a = 1; a <= 14; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			_putchar(b);
			_putchar('\n');
		}
	}
}
