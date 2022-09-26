#include "main.h"
/**
 * _memcpy - Function that copies bytes
 * @n: bytes to be copied to string
 * @dest: destination mem area
 * @src: source string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int a;
	unsigned int b;

	a = 0;
	b = 0;
	while (a <= n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (ptr);
}
