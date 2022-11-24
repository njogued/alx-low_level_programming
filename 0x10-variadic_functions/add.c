#include "funcs.h"
int _add(int x, ...)
{
	int sum = 0, i = 0;
	va_list numz;
	va_start(numz, x);
	for(i = 0; i < x, i++)
	{
		sum += va_arg(numz, int);
	}

	va_end(numz);
}
