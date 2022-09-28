#include "main.h"

int tmp_prime(int n, int i);

/**
 * divisors - is number a prime?
 * @n: integer parameters
 * @m: integer parameters
 * Return: boolean
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}
