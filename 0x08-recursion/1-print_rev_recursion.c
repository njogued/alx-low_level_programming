#include "main.h"
/**
 * _print_rev_recursion - function to print the string in reverse
 * @s: String to print in reverse
 * Return: Nada
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
