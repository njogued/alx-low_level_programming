#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int factors, itr, nput = 1231952, facno = 0;
	
	for (factors = 2; factors < nput; factors++)
	{
		if ((nput % factors) == 0)
		{
			printf("%d\n", factors);
			for (facno = 0, itr = 1; itr < factors; itr++)
			{
				if ((factors % itr) == 0)
					facno++;
				/*if (facno > 2)
					break;
				else if (facno <= 2)
				{
					prime = factors;
				}*/
			}
		if (facno == 0)
			break;
		}
	}
	printf("%d\n", factors);
	return (0);
}
