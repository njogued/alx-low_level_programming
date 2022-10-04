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

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	j = len1 = len2 = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);
	len2++;
	ptrs = malloc((sizeof(*s1) * len1) + (sizeof(*s2) * len2));
	if (ptrs == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptrs[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		ptrs[j++] = s2[i];
	ptrs[len1 + len2] = '\0';
	return (ptrs);
}
