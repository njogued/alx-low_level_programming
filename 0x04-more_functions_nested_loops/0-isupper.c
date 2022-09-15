#include "main.h"
/**
 *_isupper - checks for uppercase
 *@c: input character
 *Return: 1 if uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	int ret = 0;
	char a;

	for (a = 'A'; a <= 'Z'; a++)
		if (c == a)
			ret = 1;
	return (ret);
}

