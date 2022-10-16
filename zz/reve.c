#include <stdio.h>
/**
 * Documentation
 */
void rever(int *array);
void main(void)
{
	int array[] = {1, 3, 4, 69, 420};
	int i, n = 5;
	int *prt  = array;
	printf("Size of array: %ld\n", sizeof(*prt)/sizeof(int));

	rever(array);

	for(i = 0; i < n; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("\n");
}
void rever(int *array)
{
	int n = sizeof(array)/sizeof(int);
	int temp[n], i, j = n - 1;

	printf("%d, %d\n", n, j);

        for(i = 0; i < n; i++)
        {
                temp[i] = array[j--];
        }
	for(i = 0; i < n; i++)
        {
                array[i] = temp[i];
	}
}
