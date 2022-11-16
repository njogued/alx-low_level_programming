#include <stdlib.h>
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int checkfile(char *file);
char *check_path(char *path, char *av);
char *joiner(char *str1, char *str2);
extern char ** environ;
int main(void)
{
	char *path = getenv("PATH");
	char **av, *fpath;
	printf("%s\n", path);
	av =  malloc(sizeof(char *) * 2);
	av[0] = strdup("clear");
	av[1] = NULL;
	fpath = check_path(path, av[0]);
	if(fpath)
	{
		av[0] = fpath;
		execve(av[0], av, environ);
	}
	return (0);
}
char *check_path(char *path, char *av)
{
	char *filepath, *path_i;
	path_i = strtok(path, ":");
	while (path_i)
	{
		filepath = joiner(path_i, av);
		printf("%s\n", filepath);
		if(checkfile(filepath) == 0)
		{
			return(filepath);
		}
		path_i = strtok(NULL, ":");
	}
	return (NULL);
}
char *joiner(char *str1, char *str2)
{
	int i = 0, j = 0;
	char *file_path = NULL;

	while (str1[i++] != '\0');
	printf("str1 is: %s, and i is: %d\n", str1, i);
	while (str2[j++] != '\0');
	printf("str2 is: %s, and j is: %d\n", str2, j);
	printf("The total is: %d\n", i+j);
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
