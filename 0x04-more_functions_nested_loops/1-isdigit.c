#include "main.h"
/**
 * _isdigit - will check digit
 * @c: input character
 * Return: 1 if digit and 0 if not
 */
int _isdigit(int c)
{
	int rete = 0;
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		if (c == a)
		{
			rete = 1;
			break;
		}
	}
	return (rete);
}
