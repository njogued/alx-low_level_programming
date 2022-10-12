#include <stdio.h>
#include <stdlib.h>
typedef struct students
{
	char *name;
	int avg;
} sdtz;
int main(void)
{
	int i, j = 134;

	sdtz alx[5];
	for (i = 0; i < 5; i++)
	{
		alx[i].avg = j++;
		printf("%d\n", alx[i].avg);
	}
	alx[0].name = "eGG";
	alx[1].name = "DoG";
	alx[2].name = "ASL";
	alx[3].name = "Stip";
	alx[4].name = "Loko";
	for(j = 0; j < 5; j++)
	{
		printf("%s: %d\n", alx[j].name, alx[j].avg);
	}
	return (0);
}
