#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - function to concat arguments
 * @ac: Argument counter
 * @av: Argument vector
 * Return: Pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int a, i, len = 0, n = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0 ; a < ac ; a++)
	{
		for (i = 0 ; av[a][i] ; i++)
			len++;
	}
	len += ac;

	ptr = malloc(len  * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	for (a = 0 ; a < ac ; a++)
	{
		for (i = 0 ; av[a][i] ; i++)
		{
			ptr[n] = av[a][i];
			n++;
		}

		if (ptr[n] == '\0')
			ptr[n++] = '\n';
	}
	return (ptr);
}
