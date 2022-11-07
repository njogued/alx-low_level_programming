#include <stdio.h>
int main((void)int ac, char **av)
{
	int i;
	for (i = 0; av[i] != NULL; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
