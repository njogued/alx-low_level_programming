#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: Insert character
 * Return: 1 if letter and 0 if not a letter
 */
int _isalpha(int c)
{
	char a, b;
	int letterz = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (c == a)
			letterz = 1;
		for (b = 'A'; b <= 'Z'; b++)
		{
			if (c == b)
				letterz = 1;
		}
	}
	return (letterz);
}
