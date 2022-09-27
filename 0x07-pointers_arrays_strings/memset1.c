#include "main.h"
/**
 * _memset - Function to fill n bytes
 * @s: POINTER TO STR
 * @b: bytes
 * @n: no of bytes
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
