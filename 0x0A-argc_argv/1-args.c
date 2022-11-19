#include <stdio.h>
/**
 * main- Main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		;

	printf("%d\t%d\n", count - 1, argc);
	printf("%s\n", argv[count - 1]);
	return (0);
}
