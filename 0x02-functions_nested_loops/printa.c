#include <stdio.h>
int main(void)
{
    int a, b;

    for(a = 0; a < 10; a++)
    {
        for(b = 'a'; b <= 'z'; b++)
        {
            putchar(b);
        }
        putchar('\n');
    }
    return(0);
}
