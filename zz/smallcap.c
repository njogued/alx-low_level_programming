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
	char x;

        for(i = 0; i <= 25; i++ )
        {
                alpha[i] = a;
                a++;
        }
	for(z = 0; z < 5; z++)
	{
        scanf("%c", &x);
        for (i = 0; i <= 25; i++)
        {
               if(alpha[i] == x)
		       printf("%c is a small one", alpha[i]);
        }
        printf("\n");
	}
        return (0);
}
