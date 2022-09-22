#include "main.h"
/**
 * cap_string - function to capitalize
 * @s: string to capitalize
 * Return: string char with caps
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 32 || s[i] == 46 || s[i] == '\t' ||
				s[i] == '\n' || s[i] == 44 || s[i] == 59 ||
				s[i] == '!' || s[i] == '?' || s[i] == '(' ||
				s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i+1] <= 122 && s[i+1] >= 97)
			{
				s[i+1] -= 32;
			}
		}
	}
	return (s);
}
