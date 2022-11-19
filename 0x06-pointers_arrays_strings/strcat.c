#include "main.h"
#include <string.h>
/**
 * strcat -
 * @dest:
 * @src:
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int len, i, len2;

	len = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i < (len2); i++)
	{
		dest[i + len] = src[i];
	}
	dest[i + len] = '\0';
	return (dest);
}
