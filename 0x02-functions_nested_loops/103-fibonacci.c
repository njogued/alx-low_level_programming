#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int iterator;
	long int even_sum = 0, sum, temp, fib[2] = {1, 2};

	for (iterator = 0; iterator <= 47; iterator++)
	{
		sum = fib[0] + fib[1];
		if (sum > 4000000)
		{
			break;
		}
		if (sum % 2 == 0)
		{
			even_sum += sum;
		}
		temp = fib[1];
		fib[1] = sum;
		fib[0] = temp;
	}
	printf("\n");
	printf("%ld\n", even_sum);
	return (0);
}
