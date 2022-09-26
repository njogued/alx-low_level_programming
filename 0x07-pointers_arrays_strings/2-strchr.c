#include "main.h"
/**
 * _strchr - locates character in string
 * @s: string
 * @c: char
 * Return: first occurence of c in string
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	return (s);
}
