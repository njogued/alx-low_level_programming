#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
typedef struct linkd_list List;
struct linkd_list{
	int numz;
	List *next;
};
int main(void)
{
	List *ptr;
	if ((ptr = malloc(sizeof(List))) == 0)
		return (1);
	else
	{
		ptr->numz = 100;
		ptr->next = NULL;
	}
	while (ptr)
	{
		printf("%d\n", ptr->numz);
		ptr = ptr->next;
	}
	free (ptr->numz);
	free (ptr);
	return (0);
}
