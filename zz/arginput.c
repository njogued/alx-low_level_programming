#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc __attribute__((unused)), char *argv[])
{
	char *name = "ALX";
	char name2[5];
	int n, i;
	char *name3 = argv[1];
	printf("%s\n", argv[1]);
	if (argv[1] == "B")
	{
	printf("Enter password: ");
	scanf("%s", name2);
	for (i = 0; i <= 5; i++)
	{
		if(name2[i] >= 97 && name[i] <= 123)
		{
			name2[i] -= 32;
		}
	}
	n = strcmp(name, name2);
	if(n == 0)
	{
		printf("Access granted\n");
	}
	else
	{
		printf("RUN!\n");
	}
	}
	else
		printf("RUN");
	return 0;
}
