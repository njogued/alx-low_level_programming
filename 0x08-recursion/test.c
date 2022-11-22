#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int len;
	if (*s == '\0')
		return (0);
	else
	{
		len = 1 + _strlen_recursion(s+1);
	}
	return(len);
}
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
