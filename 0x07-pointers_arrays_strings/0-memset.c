#include "main.h"
/**
 * _memset - Function to fill memory area with const char
 * @s: pointer to memory area
 * @b: char to fill the memory area
 * @n: int of bytes
 * Return: Pointer to array with memset array
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
