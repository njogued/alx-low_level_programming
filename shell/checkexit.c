#include "shell.h"
int ext(char *buffer)
{
	char *exti = "exit\n", *eof = "EOF\n";
	if(strcmp(exti, buffer) == 0 || strcmp(eof, buffer) == 0)
	{
		printf("Let's exit, bye\n");
		return(-1);
	}
	return(0);
}
int main(void)
{
	char *buffer;
	size_t n, ex, line = 10;
	buffer = malloc(line);
	while (1)
	{
		printf("$ ");
		n = getline(&buffer, &line, stdin);
		ex = ext(buffer);
		if (ex == -1 || n == -1)
		{
			break;
		}
		else
		{
			printf("Lets try again\n");
		}
	}
	return(0);
}
