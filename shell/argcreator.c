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
	char *line1 = "/bin/ls -a /alx-low_level_programming/shell\n";
	int i = 0, u;
	split_args = malloc(sizeof(strlen(line1)));
	if (split_args == 0)
	{
		perror("Failed to allocate");
	}
	line =  malloc(sizeof(char) * strlen(line1));
	if (line == 0)
	{
		perror("Failed to allocate memory");
	}
	strncpy(line, line1, strlen(line1) - 1);
        tok = strtok(line, " ");
        while (tok)
        {
                split_args[i] = strdup(tok);
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
	free(split_args);
	return (0);
}
