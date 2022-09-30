#include "main.h"
/**
 * _strcat - string that appends one string to another
 * @dest: string one
 * @src: string to append to dest
 * Return: Pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
