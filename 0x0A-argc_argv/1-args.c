#include <stdio.h>
/**
 * main- Main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int count;

	for(count = 0; count < argc; count++)
	{
	}
	printf("%d\n", count - 1);
	return (0);
}
