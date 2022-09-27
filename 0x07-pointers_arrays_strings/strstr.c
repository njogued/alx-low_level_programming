#include "main.h"
/**
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *haystack != '\0'; i++)
	{
		for (j = 0; *needle != '\0'; j++)
		{
			if (needle[j] = haystack[i])
			{
				return (haystack);
			}
		}
	}
	return('\0');
}
