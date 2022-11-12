#include <stdio.h>
#include<string.h>
int main()
{
	char str[] = "shello, world, 32ts";
	char chr[] = ",", i, j;
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i] == chr[0])
			str[i]='\0';
	}
	for(j=0; j<i; j++)
		if(str[j] != '\0')
			printf("%c",str[j]);
		else
			printf("\n");
	return 0;
} 
