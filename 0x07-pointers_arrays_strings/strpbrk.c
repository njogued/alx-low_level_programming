#include "main.h"
/**
 *
 */
char *_strpbrk(char *s, char *access)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; access[j] != '\0'; j++)
		{
			if(s[i] == access[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
