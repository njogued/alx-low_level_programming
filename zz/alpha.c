#include <stdio.h>
/**
 * PSEUDOCODE
 * declare an array of size 26, type char
 * declare int i to loop through array
 * declare char alph to fill array
 * Fill array with alphabet letters a to z
 * Print elements in the array
 * Return 0;
 */
int main(void)
{
	char alpha[26];
	char a = 'a';
	int z, i;
	
	for(i = 0; i <= 25; i++ )
	{
		alpha[i] = a;
		a++;
	}
	for (z = 0; z < 10; z++)
	{
	for (i = 0; i <= 25; i++)
	{
		printf("%c", alpha[i]);
	}
	printf("\n");
	}
	return (0);
}
