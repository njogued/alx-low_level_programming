#include <stdio.h>
#include<stdlib.h>
/**
 * main - Function
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Zeroo
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", mul);
	}
	return (0);
}
