#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - String concatenation
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *ptrs;
	int i, j, len1, len2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	i = j = len1 = len2 = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);
	len2++;
	ptrs = malloc((sizeof(*s1) * len1) + (sizeof(*s2) * len2));
	while (i < len1)
	{
		ptrs[i] = s1[i];
		i++;
	}
	i = 0;
	j = len1;
	while (j < len1 + len2)
	{
		ptrs[j] = s2[i];
		j++;
		i++;
	}
	ptrs[len1 + len2] = '\0';
	return (ptrs);
}
