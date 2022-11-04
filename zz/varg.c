#include <stdio.h>

int main(int ac__attribute(unused)__, char *av[])
{
	int i;
	for (i = 0; av[i]; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
