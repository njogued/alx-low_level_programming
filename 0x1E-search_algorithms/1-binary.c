#include "search_algos.h"
/**
 * binary_search - Function to implement the binary search
 * @array: The array to search in
 * @size: The size of the array to search in
 * @value: The value that the algo is supposed to find
 * Return: The algo returns the index of the value and -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	/**
	 * This algorithm uses the iterative approach
	 */
	size_t l_ptr;
	size_t r_ptr;
	size_t middle, it;

	l_ptr = 0;
	r_ptr = size - 1;
	if (array == NULL)
		return (-1);
	while (l_ptr <= r_ptr)
	{
		it = l_ptr;
		printf("Searching in array: ");
		while (it < r_ptr)
		{
			printf("%d, ", array[it]);
			it++;
		}
		printf("%d\n", array[r_ptr]);
		middle = l_ptr + (r_ptr - l_ptr) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			r_ptr = middle - 1;
		else
			l_ptr = middle + 1;
	}
	return (-1);
}
