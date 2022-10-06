#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - function to allocate memory
 * @b: The size of memory to allocate
 * Return: The pointer to malloc or NULL if failed malloc
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
