#include "search_algos.h"

/**
 * linear_search - Function to execute the linear search
 * @array: The array to search in
 * @size: Thelength of the array
 * @value: The value to find in the array
 * Return: index of value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	int s = (int)size;

	if (array == NULL)
		return (-1);
	for (i = 0; i < s; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
