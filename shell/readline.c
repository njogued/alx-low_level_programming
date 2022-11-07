#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char read_line(void)
{
	char *t1, *line = malloc(100);
	size_t bufsize = 100;
	int i, j;

	if (getline(&line, &bufsize, stdin))
	{
		t1 = strtok(line, " ");
		/*while (t1)
                {
                        printf("buffer strtok: %s\n", t1);
                        t1 = strtok(NULL, " ");
                }*/
		for (i = 0; line[i] != '\0'; i++)
		{
			if (line[i] == ' ')
				line[i] = '\0';
		}
		for (j = 0; j < i; j++)
		{
			if (line[j] != '\0')
				printf("%c", line[j]);
			else
				printf("\n");
		}
		printf("\n");		
		if (feof(stdin))
		{
			printf("\n");
			free(line);
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("readline");
		}
	}
	return (*line);
}
int main()
{
	while (1)
	{
		printf("$ ");
		read_line();
	}
	return (0);
}
