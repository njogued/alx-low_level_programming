#include <stdio.h>
int main()
{
	int a, b;
	for(a = 0; a < 10; a++)
	{
	for(b = 0; b < 10; b++)
	{
	if (a < b && a != b)
	{
	putchar(a + '0');
	putchar(b + '0');
	putchar(',');
	}
	}
	}
	return (0);
	}

