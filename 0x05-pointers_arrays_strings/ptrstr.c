#include <stdio.h>
int main()
{
	int p = 50;
	char *string;
	string = "Hello world";
	int *ptr = &p;
	printf("The address of p in hex: %p\n", ptr);
	printf("The string is %s\n", string);
	printf("The string address is %p\n", string);
	printf("The character in the string is %c\n", *(string + 1));
	string[1] = 'a';
	printf("The character in the string is %c\n", string[1]);
	return 0;
}
