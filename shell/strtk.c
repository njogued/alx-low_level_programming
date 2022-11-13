#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
#include <stdio.h>
int main(void)
{
	char *str[] = {"ls -l", " "};
	char *tok, *catdest, *tokens[5], *args[3], *bin = "/bin/";
	int status, x, u, i = 0;
	pid_t pid;
	char *str1 = malloc(20);
	char *bin2 = malloc(10);
	strcpy(bin2, bin);
	strcpy(str1, str[0]);
	tok = strtok(str1, str[1]);
	printf("First: %s\n", tok);
	while (tok)
	{
		printf("%s\n", tok);
		tokens[i] = tok;
		i++;
		tok = strtok(NULL, str[1]);
	}
	u = 0;
	for(u = 0; u < i; u++)
	{
		printf("%s\n", tokens[u]);
	}
	catdest = strcat(bin2, tokens[0]);
	printf("%s\n", catdest);
	x = strlen(catdest);
	printf("%d\n", x);
	if (i == 1)
	{
		args[0] = catdest;
		args[1] = NULL;
		args[2] = NULL;
	}
	else if (i > 1)
	{
		args[0] = catdest;
		args[1] = tokens[1];
		args[2] = NULL;
	}
	pid = fork();
	if (pid == 0)
	{
		execve(args[0], args, NULL);
	}
	else
	{
		wait(&status);
	}
	/*free(str1);
	free(bin2);*/
	printf("Exit: %s\n", tok);
	return (0);
}
