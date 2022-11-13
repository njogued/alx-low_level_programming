#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string btwn numbers
 * @n: number of arguments
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
/**{
	unsigned int i = 0;
	va_list rgs;

	va_start(rgs, n);

	if (!separator)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(rgs, int), i != (n - 1) ? separator : "");
		}

	va_end(rgs);
	putchar('\n');

}*/
{
	unsigned int i = 0;
	va_list list;

	va_start(list, n);
	for(i = 0; i < n; i++)
	{
				if (separator)
		{


	va_end (list);
