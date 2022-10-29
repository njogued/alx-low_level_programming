#include <stdio.h>
/**
 *
 */
int main(void)
{
	char *s;
	s = "Hello there childrens";
	printf("%s", s);
	putchar('\n');
	printf("Size of string: %ld\n", sizeof(*s));
	return 0;
}
