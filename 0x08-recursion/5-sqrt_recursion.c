#include "main.h"

/**
 * _sqrt_recursion - returns the natural number of square root of a number
 * Return: the resulting in square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_aqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural squre root of a number
 * @n: number to calculate the square root of 
 * @i: iterator
 * Return: the resulting square rot
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (1);
	}
	return (actual_sqrt_recursion(n i + 1));
}
