#include <string.h>
#include <stdio.h>

int main(int ac, char *av[])
{
	int i;
	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
		//printf("%ld\n", strlen(av[i]));
		if (strcmp(av[i], "cat") == 0)
		{
			printf("dogs are better\n");
		}
	}
	printf("i is: %d, while argc is: %d\n", i, ac);
	return (0);
}
