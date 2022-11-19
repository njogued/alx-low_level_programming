#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int i, toi;
	size_t line = 0;
	char *buffer = NULL;

	printf("Prompt: ");
	i = getline(&buffer, &line, stdin);
	printf("You entered: %s\n", buffer);
	i = 0;
	for(i = 0; buffer[i] != '\0' && buffer[i] != '\n'; i++)
	{
		printf("char: %c\n", buffer[i]);
		toi = atoi(&buffer[i]);
		printf("%d", toi);
		printf("\n");
	}
	free(buffer);
	return (0);
}
