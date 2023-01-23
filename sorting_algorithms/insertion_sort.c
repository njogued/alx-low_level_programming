#include "sort.h"

int recur_swap(int *array, size_t index, size_t next, size_t len)
{
    int temp = 0;
    if(array[index] <= array[next] || next == 0)
    {
        print_array(array, len);
        return (0);
    }
    else
    {
        temp = array[index];
        array[index] = array[next];
        array[next] = temp;
        print_array(array, len);
        recur_swap(array, index - 1, next - 1, len);
    }
    return (1);
}
int main()
{
    int check = 0, array[] = {3, 5, 7, 2, 1};
    size_t i;
    size_t len = sizeof(array) / sizeof(array[0]);

    for(i = 0; i < len - 1; i++)
    {
        check = recur_swap(array, i, i + 1, len);
        printf("Inserted");
        if (check == 1)
            printf("Failed");
    }
    return 0;
}
