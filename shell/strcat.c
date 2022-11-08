#include <string.h>
#include <stdio.h>
int main(void)
{
	int n = -1;
	char *dest;
	char s1[5] = "Hel";
	char s2[] = "lo";
	dest = strcat(s1, s2);
	printf("%s", dest);
	if (n < 0)
	{
		perror("Error");
	}
	return (0);
}
