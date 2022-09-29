#include <stdio.h>
/**
 *
 */
int _sqrt_recursion(int x, int i);
int main()
{
	int i, x;

	x = 1;

	while (x < 100)
	{
		i = _sqrt_recursion(x, 1);
		printf("%d - %d\t", x, i);
		x++;
	}
	return (0);
}
int _sqrt_recursion(int x, int i)
{
	int sqr;
	
	sqr = i * i;

	if (x < 0)
	{
		return (-1);
	}
	else if (sqr == x)
	{
		return (i);
	}
	else if (sqr > x)
	{
		return (-1);
	}
	return(_sqrt_recursion(x, i+1));
}
