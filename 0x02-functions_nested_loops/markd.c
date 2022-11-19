#include <stdio.h>
int main(void)
{
	int i;
	for(i = 0; i <= 20; i++)
	{
		printf("%d. [Task %d](#task%d)\n", i, i, i);
	}
	for(i = 0; i <= 20; i++)
	{
		printf("## Task %d.<a name=\"task%d\"></a>\n", i, i);
	}
	return (0);
}
