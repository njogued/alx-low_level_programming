#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int iterator;
	unsigned long long sum, temp, fib[2] = {1, 2};

	printf("1, 2, ");
	for (iterator = 0; iterator <= 98; iterator++)
	{
		sum = fib[0] + fib[1];
		temp = fib[1];
		fib[1] = sum;
		fib[0] = temp;
		if (iterator != 98)
		{
			printf("%llu, ", sum);
		}
		else
			printf("%llu", sum);
	}
	printf("\n");
	return (0);
}
