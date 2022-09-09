#include <stdio.h>
/**
 * main-entrypoint
 *
 * Return:0 after printing
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("The size of int is: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("The size of long int is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("The size of loong int is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of char is: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("The size of float is: %lu byte(s)\n", (unsigned long)sizeof(f));
}
