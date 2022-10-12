#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
int randm(void);
int main(int argc, char *argv[])
{
	char names[][8] = {"name1", "name69", "name420", "nameX"};
	int array[4];
	int ran, inp, i;
	ran = randm();
	printf("%d\n", ran);
	printf("%s\n", names[ran]);
	for(i = 0; i < 5; i++)
	{
		
		array[i] = ran;
		array[i++] = inp;
		printf("%d\t", array[i]);
	}
	printf("\n");
	return (0);
}
int randm(void)
{
	int n;
	time_t t;
	srand((unsigned) time(&t));
	n = (rand() % 6);
	return(n);
}
