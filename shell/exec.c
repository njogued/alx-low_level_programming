#include <stdio.h>
#include <unistd.h>
int main()
{
	char *ave[] = {"/bin/ls", "/usr/", NULL};
	execv(ave[0], ave);
	return (0);
}
