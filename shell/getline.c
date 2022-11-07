#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t gtl = 1024;
	int n = 1;
	char *ptr = malloc(1024);

	while (n)
	{
		printf("$ ");
		n = getline(&ptr, &gtl, stdin);
		if (n != -1)
		{
			printf("%s\n", ptr);
		}
		if (n == -1)
		{
			printf("\n");
			break;
		}
	}
	return (0);
}
