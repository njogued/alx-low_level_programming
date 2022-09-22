#include "main.h"
/**
 * _strncpy - Function to copy strings
 * @dest: First string
 * @src: Second string
 * @n: Int
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (i < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	for (; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
