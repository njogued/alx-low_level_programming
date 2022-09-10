#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return:  Always 0 (Success)
 */
int main(void)
{
	char reve;

	for (reve = 'z'; reve >= 'a'; reve--)
		putchar(reve);
	return (0);
}
