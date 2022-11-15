#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char* buffer = malloc(1);
	size_t bufsize = 1;
	int i;
	while (1)
	{
		i = getline(&buffer, &bufsize, stdin);

		printf("Input [1]: %s", getenv(buffer));
		if (i == -1)
		{
			break;
		}
	}
	return (0);
}
