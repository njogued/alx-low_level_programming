#include <unistd.h>
#include "main.h"
/*
 * main function - calls putchar to print _putchar
 *
 * Return: Always 0 Success
 */
int main(void)
{
	char word[9] = "_putchar";
	int i;

	for(i = 0; i <= 9; i++)
		_putchar(word[9]);
	_putchar('\n');
	return (0);
}
