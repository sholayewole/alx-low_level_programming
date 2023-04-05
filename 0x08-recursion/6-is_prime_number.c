#include "main.h"

/**
 * is_prime_number - function that returns 1
 * if the input int is a prime number
 * is_prime_helper - helper funcion
 * @i: int
 * @n: int
 * Return: n
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
