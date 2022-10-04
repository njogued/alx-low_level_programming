#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - Function that creates array of chars and intializes it
 * @size:  size of the array
 * @c: the char to initialize array
 * Return: Pointer the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;
	
	if (size < 1)
	{
		return(0);
	}

	ptr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
