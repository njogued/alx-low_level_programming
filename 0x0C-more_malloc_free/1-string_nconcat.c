#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "main.h"
/**
 * string_nconcat - Function to allocate memory and concat string
 * @s1: String one aka destination string
 * @s2: string two aka source string
 * Return: pointer to the string s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *finalstr;
	unsigned int i, len3, len1, len2;

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
	if(n >= len2)
	{
		n = len2;
	}
	len3 = len1 + n + 1;
	finalstr = (char *)malloc(sizeof(*s1)*len3);
	if (finalstr = NULL)
	{
		return (NULL);
	}
	for(i = 0; i <= n; i++)
	{
		s1[len1] = s2[i];
		len1++;
	}
	s1[len3] = '\0';
	return (finalstr);
}
