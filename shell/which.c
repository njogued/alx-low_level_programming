#include "shell1.h"

int main(void)
{
	char *path;
	char *fpath, *line_got, **args;
	int iterator = 0, len1 = 0;
	pid_t my_pid;
        while (1)
        {
		path = getenv("PATH");
		printf("%s\n", path);
		putchar('$');
		putchar(' ');
		line_got = strdup(readline());
		printf("line_got: %s\n", line_got);
		if(!line_got)
		{
			break;
		}
		while(line_got[iterator] != '\0')
		{
			if (line_got[iterator] == ' ')
			{
				len1++;
			}
			iterator++;
		}
		args = malloc(sizeof(char *) * (len1 + 2));
		args = _strtok(line_got, len1);
		fpath = check_path(path, args[0]);
		if(fpath)
		{
			args[0] = fpath;
			my_pid = fork();
			if(my_pid == 0)
			{
				if(execve(args[0], args, environ) == -1)
					perror("./shell");
			}
			else
			{
				wait(NULL);
				free(args);
			}
		}
		else if(fpath == NULL)
		{
			free(args);
			perror("./shell");
		}
	}
	return (0);
}
char **_strtok(char *input_line, int len)
{
	char *token, **arguments;
	int iterator = 0;
	arguments = malloc(sizeof(char *) * (len + 2));
	token = strtok(input_line, " ");
	while (token)
	{
		arguments[iterator] = token;
		iterator++;
		token = strtok(NULL, " ");
	}
	arguments[iterator] = NULL;
	return (arguments);
}
char *readline(void)
{
	char *clean_buffer, *buffer = NULL;
	size_t bufsize = 0;
	int n = 0;
	n = getline(&buffer, &bufsize, stdin);
	if (n == -1)
	{
		return (NULL);
	}
	clean_buffer = malloc(sizeof(char) * n-1);
	clean_buffer = strndup(buffer, n-1);
	/*substitute strndup (not allowed)*/
	/*check exit condition(strcmp)*/
	free(buffer);
	return (clean_buffer);
}
char *check_path(char *path, char *av)
{
	char *filepath, *path_i;
	if(checkfile(av) == 0)
		return(av);
	path_i = strtok(path, ":");
	while (path_i)
	{
		filepath = malloc(sizeof(path_i)+sizeof(char)+sizeof(av));
		filepath = joiner(path_i, av);
		printf("%s\n", filepath);
		if(checkfile(filepath) == 0)
		{
			return(filepath);
		}
		path_i = strtok(NULL, ":");
	}
	free(path_i);
	free(filepath);
	return (NULL);
}
char *joiner(char *str1, char *str2)
{
	int i = 0, j = 0;
	char *file_path = NULL;

	while (str1[i++] != '\0');
	while (str2[j++] != '\0');
	file_path = malloc(sizeof(char) * (i+j));
	j = 0;
	i = 0;
	while (str1[j])
	{
		file_path[i] = str1[j];
		i++;
		j++;
	}
	file_path[i++] = '/';
	j = 0;
	while (str2[j])
	{
		file_path[i] = str2[j];
		i++;
		j++;
	}
	file_path[i] = '\0';
	return(file_path);
}
int checkfile(char *file)
{
	struct stat st;
	if(stat(file, &st) == 0)
	{
		return (0);
	}
	return (-1);
}
