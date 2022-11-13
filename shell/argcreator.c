#include "shell.h"
char **argcreator(char *buffer)
{
	int i = 0;
	char *tok, **args;
	tok = strtok(buffer, " ")
	while (tok)
	{
		args[i] = tok;
		i++;
		tok = (NULL, " ");
	}
	printf("%s\n", args);
	return (args);
}
