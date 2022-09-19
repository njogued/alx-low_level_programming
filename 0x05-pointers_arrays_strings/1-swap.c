#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first value to swap
 * @b: second value
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int swwp;

	swwp = *a;
	*a = *b;
	*b = swwp;
}
