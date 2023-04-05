#include "main.h"

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate
 * Return: n or -1 or i
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, 0));
	}
}

/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: number
 * @i: number
 * Return: n or -1
 */

int _sqrt_helper(int n, int i)
{
	if (i * 1 > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}
