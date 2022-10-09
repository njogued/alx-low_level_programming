#include <stdio.h>
/**
 * Define the variable n and x, and sum
 * Declare n = 0
 * SCANF x to obtain input
 * WHILE n is less than or equal to x
 * increment n
 * Check IF n is divisible by 3
 * Check IF n is divisible by 5
 * Increment sum with the value of n
 * Loop though WHILE again
 */
int main()
{
	int n = 0, x, sum = 0;

	scanf("%d", &x);
	while (n <= x)
	{
		if (n % 3 == 0|| n % 5 == 0)
		{
			sum += n;
		}
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
