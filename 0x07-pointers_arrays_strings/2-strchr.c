#include "main.h"
/**
 * _strchr - Function to find first occurrence
 * @s: String
 * @c: Character
 * Return: Pointer to first instance of c
 */
char *_strchr(char *s, char c)
{
	char *ptr;
	int i;

	ptr = s;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
			return (ptr + i);
		else if (s[i] != c)
			return (NULL);
	}
}
