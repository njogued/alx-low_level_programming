#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	va_list stuff;
	int i = 0;
	char chr;
	int tin;
	char *s;

	va_start(stuff, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				chr = va_arg(stuff, int);
				putchar(chr);
				break;
			case 'i':
				tin = (va_arg(stuff, int));
				putchar(tin + '0');
				break;
			case 'f':
				printf("%f", (float)va_arg(stuff, double));
				break;
			case 's':
				s = va_arg(stuff, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(stuff);
}
