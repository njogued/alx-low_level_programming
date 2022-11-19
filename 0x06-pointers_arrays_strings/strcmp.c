#include "main.h"
/**
 * _strcmp - Function to compare two strings
 * @s1: First string
 * @s2: Second string
 * Return: Returns value depending on comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i, cmp;

	for(i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		cmp = *s1 - *s2;
	}
	return(cmp);
}
