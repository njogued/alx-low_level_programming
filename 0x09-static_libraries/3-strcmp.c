#include "main.h"
/**
 * _strcmp - Function to compare two strings
 * @s1: First string
 * @s2: Second string
 * Return: Returns value depending on comparison
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
