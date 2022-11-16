#include <sys/stat.h>
#include <stdio.h>
int check_file(char *filepath)
{
	struct stat st;
	if(stat(av[1], &st) == 0)
		return (1);
	return (0);
}
