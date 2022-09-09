#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char smallal, e, q;

	e = 'e';
	q = 'q';

	for(smallal = 'a'; smallal <= 'z'; smallal++)
	{
		if(smallal != e && smallal != q)
			putchar (smallal);
	}
	putchar ('\n');
	return (0);
}
