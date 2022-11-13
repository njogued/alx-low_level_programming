#include <sys/stat.h>
#include <stdio.h>
int main(__attribute__((unused))int ac, char **av)
{
	struct stat st;
	if(stat(av[1], &st) == 0)
	{
		printf("Present Sir\n");
	}
	else
	{
		printf("Cricket sounds\n");
	}
	return(0);
}
