#include "main.h"
/**
 * comment 
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr;

	ptr = s;
	i = 0;
	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (ptr);
}
