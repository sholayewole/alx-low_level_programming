#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - function that returns prime number
 * @n: int
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, 2));
	}
}

/**
 * is_prime_helper - helper function for is_prime_number
 * @n: number
 * @i: number
 * Return: n or -1
 */

int is_prime_helper(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}
