#include "main.h"
/**
 * _strlen - Find string length
 * @s: - string
 * Return: int with string length
 */
int _strlen(char *s)
{
	int a;

	for(a = 0; s[a] != '\0'; a++);
	return (a);
}
