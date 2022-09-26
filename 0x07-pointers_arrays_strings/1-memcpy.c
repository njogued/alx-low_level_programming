#include "main.h"
/**
 * _memcpy - Function that copies bytes
 * @n: bytes to be copied to string
 * @dest: destination mem area
 * @src: source string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
