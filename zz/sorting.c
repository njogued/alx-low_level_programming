#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
int randm(void);
int main(int argc, char *argv[])
{
	char names[][8] = {"name1", "name2", "name3", "name69", "name420", "namezz", "nameX"};
	int ran;
	ran = randm();
	if(!(ran >= 6))
		printf("%s\n", names[ran]);
	return (0);
}
int randm(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return(n%10);
}
