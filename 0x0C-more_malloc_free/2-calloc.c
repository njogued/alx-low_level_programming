#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - function to allocate memory for array
 * @nmemb: Unsigned int rep array elements
 * @size: bytes of each array element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		memset(ptr, 0, nmemb * size);
	}
	return (ptr);
	free (ptr);
}
