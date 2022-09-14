#include "main.h"
/**
 * _islower - Checks for lowercase characters
 *
 * Return 1 if lowercase
 * Return 0 if otherwise
 */
int _islower(int c)
{
	int ret;
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low == c)
		{
			ret = 1;
		}
	}
	return (ret);
}

