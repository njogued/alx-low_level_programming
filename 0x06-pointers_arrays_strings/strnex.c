#include "main.h"
#include <string.h>
/**
 * _strncat - function to conc
 * @dest: input string
 * @src: input string 2
 * @n: no of bytes
 * Return: string 
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1, i;

	len1 =  strlen(dest); //find the string length of dest
	for(i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i]; //dest = "Str" src = "ing"
		//dest[3 + i] = src[0] = 'i'
		//dest[3 + 1] = dest[4] = src[1] = n
	}
	dest[len1 + i] = '\0';
	return(dest);
}
