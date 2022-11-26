#include <stdio.h>
int fibo(int input);
int main(void)
{
	int input, i = 0;
	while (i < 10)
	{
		printf("Enter number: ");
		scanf("%d", &input);
		printf("The fibonacci number[%d]: %d\n", input, fibo(input));
		i++;
	}
	return (0);
}
int fibo(int input)
{
	if (input == 1 || input == 0)
	{
		return(1);
	}
	return(fibo(input - 1) + fibo(input - 2));
}
