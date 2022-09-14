#include <unistd.h>
#include "main.h"
/**
 * main - Check description
 * Description: It pirnts the word _putchar followed by a new line
 * main - Entry point
 * _putchar - Function in main.h
 * Return: Always 0 Success
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
