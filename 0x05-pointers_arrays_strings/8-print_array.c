#include "main.h"
#include <stdio.h>
/**
 * print_array - function to print array of integers
 * @a: pointer to int
 * @n: int
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n-1); i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[i]);
	printf("\n");
}
