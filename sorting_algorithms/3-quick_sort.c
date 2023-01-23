#include "sort.h"

void swap(int *array, int index_1, int index_2)
{
	int temp;

	temp = array[index_1];
	array[index_1] = array[index_2];
	array[index_2] = temp;
}

void quick_sort(int *array, size_t size)
{
	size_t pivot = 0;
	size_t low = 0, high = 0;

	pivot = size - 1; 

	high = pivot - 1;
	while(low < high)
	{
		if(array[low] < array[pivot])
		{
			low += 1;
			printf("Pivot > Low");
		}
		if(array[low] > array[pivot])
		{
			if(array[high] > array[pivot])
			{
				high -= 1;
			}
			if(array[high] < array[pivot])
			{
				swap(array, low, high);
			}
		
		printf("lOW: %ld\n", low);
		}
	}
	swap(array, low, pivot);
	print_array(array, size);

}
