#include "shell.h"
/*char **argcreator(char *buffer)
{
	int i = 0;
	char *tok, **args;
	tok = strtok(buffer, " ");
	while (tok)
	{
		args[i] = tok;
		i++;
		tok = (NULL, " ");
	}
	return (args);
} */
int main(void)
{
	char *tok, *line, **split_args;
	char *line1 = "/bin/ls -al /usr/";
	int i = 0, u;
	split_args = malloc(sizeof(strlen(line)));
	if (split_args == 0)
	{
		perror("Failed to allocate");
	}
	line =  malloc(sizeof(char) * 10);
	if (line == 0)
	{
		perror("Failed to allocate memory");
	}
	strcpy(line, line1);
        tok = strtok(line, " ");
        while (tok)
        {
                split_args[i] = tok;
                i++;
                tok = strtok(NULL, " ");
        }
	split_args[i] = NULL;
	printf("%d\n", i);

	printf("OK SO FAR\n");

	/*char **split_args = argcreator(line);*/
	for(u = 0; u < i; u++)
	{
		printf("args[%d]: %s\n", u, split_args[u]);
	}
	if(execve(split_args[0], split_args, NULL) == -1)
	{
		perror("Failed to execute command");
		return(-1);
	}
	return (0);
}
