#include <stdio.h>
#include <unistd.h>
int main()
{
	
	char *str = "This";
	puts(str);
	printf("%c\n", str[0]);
	putchar('\n');
	write(1, "This\n", 5);
	return 0;
}
