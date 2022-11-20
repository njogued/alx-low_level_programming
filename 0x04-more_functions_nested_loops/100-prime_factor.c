#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
        long int factors, itr = 1, prime = 0, nput = 612852475143;
	int facno = 0;

        for (factors = 2; factors < nput; factors++)
        {
                if ((nput % factors) == 0)
                {
                itr = 1;
                facno = 0;
                while (itr < factors)
                {
                        if ((factors % itr) == 0)
                        {
                                facno++;
                        }
                        itr++;
		}
                if (facno == 1)
                        prime = factors;
                }

        }
        printf("%ld\n", prime);
        return (0);
}
