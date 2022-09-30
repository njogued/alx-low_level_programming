#include "main.h"
/**
 * _strncat - function to concatenate??idk
 * @dest: first string
 * @src: second string to be added to the first string
 * @n: number of bytes
 * Return: Concatenatenated(??) string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}
	dest += '\0';
	return (dest);
}
