#include "main.h"
/**
 * print_last_digit - Prints last digit
 * @lastlast: input number
 * Return: The last digit
 */
int print_last_digit(int lastlast)
{
	int lst;

	if (lastlast > 0)
	{
		lst = lastlast % 10;
		_putchar(lst + '0');
	}
	else
	{
		lastlast = lastlast * -1;
		lst = lastlast % 10;
		_putchar(lst + '0');
		lst = lst * -1;
	}
	return (lst);
}
