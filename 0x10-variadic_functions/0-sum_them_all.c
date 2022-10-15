#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all params
 * @n: number of parameters
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;

	va_list _args;

	va_start(_args, n);

	if (!n)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(_args, int);

	va_end(_args);
	return (sum);
}
