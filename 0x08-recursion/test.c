#include <stdio.h>
int sum_a(int x);
int main()
{
	int num = 10;
	int all;
	all = sum_a(num);
	printf("num + num - 1 + num - 2 + ... = %d\n", all);
	return (0);
}
int sum_a(int x)
{
	int sum;
	if (x = 1)
	{
		return(1);
	}
	return(x + (x - 1));
}
