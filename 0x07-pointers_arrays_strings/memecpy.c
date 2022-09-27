#include "main.h"
/**
 * comments
 */
char *_memcpy (char *dest, char* src, unsigned int n)
{
	unsigned int i;
	char *ptr;

	ptr = dest;
	i = 0;

	while(i < n)
	{
		dest[i] = src [i];
		i++;
	}
	return (ptr);
}
