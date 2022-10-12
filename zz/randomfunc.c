#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int i, j, it;
	int nums[10] = {3, 5, 6, 1};

	for(it = 0; it < 10; it++)
	{
		for(j = 0; j < 10; j++)
		{
			i = rand() % 10;
			if (i != nums[j]);
			i;
		}
		printf("%d\n", i);
	}
	return (0);
}
