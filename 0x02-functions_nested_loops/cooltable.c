#include <stdio.h>

int main(void)
{
    int a, b;
    for(a = 0; a < 10; a++)
    {
        for(b = 0; b < 10; b++)
        {
            if((a * b) < 10)
            {
                putchar('|');
                putchar((a*b) + 48);
                putchar('\t');
                putchar('|');
            }
            else if((a * b) >= 10)
            {
                putchar('|');
                putchar(((a*b)/10) + '0');
                putchar(((a*b)%10) + '0');
                putchar('\t');
                putchar('|');
            }
        }
        putchar('\n');
    }
    putchar('\n');
    return(0);
}
