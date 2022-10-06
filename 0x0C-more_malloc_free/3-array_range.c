#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - function to print array
 * @min: Minimum value
 * @max: maximum value
 * Return: Pointer to array
 */
int *array_range(int min, int max)
{
	int *arr, i, j = 0;

	if (min > max)
		return (NULL);
	i =  max - min;
	i++;
	arr = malloc(sizeof(int) * i);
	if (arr == NULL)
		return (NULL);
	i = 0;
	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}
