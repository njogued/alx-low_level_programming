#include "main.h"
#include <string.h>
/**
 * _strncat
 * @dest:
 * @src:
 * @n:
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len1;

	len1 = strlen(dest);
	
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[len1 + i] = '\0';
	return (dest);
}
