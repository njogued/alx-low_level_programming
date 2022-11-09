#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t gtl = 1;
	int n = 1;
	char *ptr = malloc(1);
	char *ave[] = {"/bin/ls", "/usr", NULL};

	while (1)
	{
		printf("$ ");
		n = getline(&ptr, &gtl, stdin);
		if (n != -1)
		{
			printf("%s\n", ptr);
			free(ptr);
			execve(ave[0], ave, NULL);
		}
		if (n == -1)
		{
			printf("\n");
			break;
		}
		/*execve(ave[0], ave, NULL);*/
	}
	return (0);
}
