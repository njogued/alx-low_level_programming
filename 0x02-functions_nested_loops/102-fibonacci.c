#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int iterator;
	long int sum, temp, fib[2] = {1, 2};

	printf("1, 2, ");
	for (iterator = 0; iterator <= 50; iterator++)
	{
		sum = fib[0] + fib[1];
		temp = fib[1];
		fib[1] = sum;
		fib[0] = temp;
		if (iterator != 50)
		{
			printf("%ld, ", sum);
		}
		else
			printf("%ld", sum);
	}
	printf("\n");
	return (0);
}
