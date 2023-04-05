#include "main.h"

int is_palindrome_helper(char *s, int i,  int j);

/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: string
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	{
		return (is_palindrome_helper(s, 0, len - 1));
	}
}

/**
 * is_palindrome_helper  - helper function for is_palindrome
 * @s: number
 * @i: int
 * @j: int
 * Return: 1 or 0
 */

int is_palindrome_helper(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	return (is_palindrome_helper(s, i + 1, j - 1));
}
