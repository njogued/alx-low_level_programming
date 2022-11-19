#include "main.h"
#include <stdio.h>
/**
 * Documentation
 */
void print_array(int *a, int n)
{
	/**
	 * int iterator
	 * iterate through the array using i
	 * for loop, i=0, condition i <= n, i++
	 * print at index i
	 * print comma, unless i = n
	 * exit loop
	 * print new line
	 *
	 * a[i] or *(a + i)
	 * a[5] = 98, 402, 1024
	 * *a = a[0]
	 * *(a+1) = a[1]
	 *
	 */
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if(i != n-1)
			printf(", ");
	}
	printf("\n");
	printf("%d\n", *(a + 3));
	printf("\n");
}
