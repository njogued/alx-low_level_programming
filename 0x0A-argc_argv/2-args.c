#include <stdio.h>
/**
 * main - Function main
 * @argc: argument counter
 * @argv: argument vector
 * Return: Zero
 */
int main(int argc, char *argv[])
{
	int count = 1;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
