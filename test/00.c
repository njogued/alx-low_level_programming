#include <stdio.h>
/**
 *
 */
int main()
{
	char stringz[10] = "Hello";
	int i;
	printf("%ld\n", sizeof(stringz));
	for(i = 0; stringz[i] != '\0'; i++);
	printf("%d\n", i);
	printf("%c\n", stringz[0]);
	return 0;
}
