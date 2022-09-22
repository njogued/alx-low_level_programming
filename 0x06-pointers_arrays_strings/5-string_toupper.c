#include "main.h"
/**
 * string_toupper - function to change to uppercase
 * @s: string in lowercase
 * Return: String in uppercase
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
	}
	return (s);
}
