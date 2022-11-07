#include <stdio.h>
#include <unistd.h>
int main(void)
{
	printf("%u\n", getppid());
	return (0);
}
