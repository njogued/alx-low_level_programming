#include <stdio.h>
int binint(const char* bina)
{
    int i = 0, itg = 0, base = 1;
    while(bina[i])
    {
        i++;
    }
    i--;
    while (i)
    {
        if(bina[i] == '1')
        {
            itg += base;
        }
        base *= 2;
        i--;
    }
    return(itg);
}

int main() {
    // Write C code here
    int uint = binint("00110101");
    printf("%d\n", uint);
    return 0;
}
