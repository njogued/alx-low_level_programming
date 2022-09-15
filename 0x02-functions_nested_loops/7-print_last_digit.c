#include "main.h"
/**
 * print_last_digit - Prints last digit
 * @lastlast: input number
 * Return: The last digit
 */
int print_last_digit(int lastlast)
{
	int lst;

	lst = lastlast % 10;

	if (lst < 0)
	{
		lst *= -1;
	}
	_putchar(lst + '0');

	return (lst);
}
