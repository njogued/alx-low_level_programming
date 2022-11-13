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
	char *tok, *line, *split_args[3];
	char *line1 = "ls -a -l";
	int i = 0, u;
	line =  malloc(sizeof(char) * 10);
	strcpy(line, line1);
        tok = strtok(line, " ");
        while (tok)
        {
                split_args[i] = tok;
                i++;
                tok = strtok(NULL, " ");
        }
	printf("OK SO FAR\n");

	/*char **split_args = argcreator(line);*/
	for(u = 0; u < i; u++)
	{
		printf("%s\n", split_args[u]);
	}
	return (0);
}
