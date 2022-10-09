#include <stdio.h>
#include <string.h>
int main(void)
{
	char *name = "ALX";
	char name2[5];
	int n, i;
	printf("Enter password: ");
	scanf("%s", name2);
	for (i = 0; i <= 20; i++)
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
		printf("RUN!\n");
	return 0;
}
