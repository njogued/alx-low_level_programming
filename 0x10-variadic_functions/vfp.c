#include "funcs.h"
int main(void)
{
	char *tok, *buffer = NULL;
	size_t lsize = 0;
	int num, i = 0;

	printf("Enter your numbers: ");
	getline(&buffer, &lsize, stdin);
	tok = strtok(buffer, " ");
	while(buffer)
	{
		num = atoi(tok);
		tok = strtok(NULL, " ");

	}
