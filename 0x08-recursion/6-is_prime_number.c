#include "main.h"
/**
 * is_prime_number - check if number is a prime number
 * @n: Number
 * Return: Either 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (nprime(n, 2));
}
/**
 * nprime - Function to check prime numbers
 * @num: Big number
 * @i: Small number
 * Return: If prime or not
 */
int nprime(int num, int i)
{
	if (i > (num / 2))
		return (1);
	if (num % i == 0)
		return (0);
	return (nprime(num, i + 1));
}
