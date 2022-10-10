#include <stdio.h>
int main(int argc __attribute__((unused)), char *argv[])
{
	int i, j = 0;
	char *s[20];
	i = 0;
	while (argv[i])
	{
		s[j++] = argv[i++];
	}
	printf("%s\n", *s);
	return(0);
}
