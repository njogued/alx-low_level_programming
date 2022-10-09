#include <stdio.h>

int main() {
    int k;
    
    int unsigned long long fib[50] = {1, 2};
    k = 2;
    while(k < 50)
    {
        fib[k] = fib[k - 1] + fib[k - 2];
        k++;
    }
    for(k = 0; k < 50; k++)
    {
        printf("%llu, ", fib[k]);
    }
    return 0;
}
