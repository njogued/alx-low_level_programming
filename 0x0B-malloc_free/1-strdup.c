#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - contains copy of string and returns a pointer
 * @str: string to duplicate
 * Return: returns pointer to string
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);
	i = len = 0;
	len = strlen(str);
	len++;
	ptr = malloc(sizeof(*str) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i <= len)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
