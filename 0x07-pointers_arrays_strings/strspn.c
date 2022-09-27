#include "main.h"
/**
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	for(i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{			
				k++;
				break;
			}			
		}
	}
	return(k);
}
