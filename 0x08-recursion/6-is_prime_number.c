#include "main.h"

/**
 * is_prime_number - if integer os a prime or not
 * @n: to evaluate
 * Return: 1 if n is a prime number, else 0
 */

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is primer recursively
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is a prime, 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
