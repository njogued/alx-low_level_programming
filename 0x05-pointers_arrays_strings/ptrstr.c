#include <stdio.h>
int main()
{
	int p = 50;
	char *string;
	int i;
	char alp = 65;
	char strarr[12] = "Hello world";
	string = "Hello world";
	int *ptr = &p;
	printf("The address of p in hex: %p\n", ptr);
	printf("The string is %s\n", string);
	printf("The string address is %p\n", string);
	printf("The character in the string is %c\n", *(string + 1));
	printf("The character in the string is %c\n", string[1]);
	printf("Array string: %s\n", strarr);
	for (i = 0; i < 12; i++)
	{
		strarr[i] = alp++;
	}
	printf("Array string: %s\n", strarr);
	return 0;
}
