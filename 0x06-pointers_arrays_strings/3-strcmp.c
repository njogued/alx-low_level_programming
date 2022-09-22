#include "main.h"
/**
 * _strcmp - Function to compare two strings
 * @s1: First string
 * @s2: Second string
 * Return: Returns value depending on comparison
 */
int _strcmp(char *s1, char *s2)
{
	int n;
	int x, y;

	for (x = 0; s1[x] != '\0'; x++)
	{
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
	}
	if (x > y)
		n = 1;
	else if (x < y)
		n = -1;
	else
		n = 0;
	return (n);
}
