#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - compute sum of numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = j = 0;

	for (; i <= 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			j += i;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", j);
	return (0);
}
