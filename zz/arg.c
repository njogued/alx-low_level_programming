#include <stdio.h>
#include <stdlib.h>
int GLBL = 100;
void print()
{
	printf("%d\n", GLBL);
}

/*void printarray(char **ptra, int bound)
{
	int i;
	for (i = 0; i < bound; i++)
	{
		printf("%s\n", **ptra[i]);
	}
}
*/
int main(int argc, char *argv[])
{
	int n;
	char **array;
	array = malloc(argc * sizeof(char));
	if (array == NULL)
		return (1);
	//printf("%d\n", argc);
	//printf("%s\n", argv[argc-1]);
	n = 0;
	while (n < argc)
	{
		array[n] = argv[n];
		printf("The string at index: %d is %s\n", n, array[n]);
		n++;
	}
	printf("The value of n: %d and argc is: %d\n", n, argc);
	printf("The global var: ");
	print();
	printf("The sum using atoi: %d\n", (atoi(argv[n-2]) + atoi(argv[n-1])));
	
	//printarray(array, n);
	free(array);
	return (0);
}
