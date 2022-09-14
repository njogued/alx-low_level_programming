#include "main.h"
/**
 * _islower - Checks for lowercase characters
 * @c: -input character
 * Return: 1 if lowercase and 0 if otherwise
 */
int _islower(int c)
{
	int ret = 0;
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low == c)
			ret = 1;
	}
	return (ret);
}

