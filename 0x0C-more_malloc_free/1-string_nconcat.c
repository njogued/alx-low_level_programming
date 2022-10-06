#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "main.h"
/**
 * string_nconcat - Function to allocate memory and concat string
 * @s1: String one aka destination string
 * @s2: string two aka source string
 * @n: Number of bytes
 * Return: pointer to the string s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *finalstr;
	unsigned int i, len1, len2, len3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	len3 = strlen(s1) + n + 1;
	finalstr = malloc(sizeof(*finalstr) * len3);
	if (finalstr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len1)
	{
		finalstr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		finalstr[len1] = s2[i];
		len1++;
		i++;
	}
	finalstr[len3] = '\0';
	return (finalstr);
}
