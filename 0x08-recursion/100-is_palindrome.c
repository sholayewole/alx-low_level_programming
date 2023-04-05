#include "main.h"

/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not
 * is_palindrome_helper - checks if s is palindrome
 * @s: string
 * @i: int
 * @j: int
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	if  (len == 0 || len == 1)
	{
		return (1);
	}
	else
	{
		return (is_palindrome_helper(s, 0, len - 1));
	}
}

int is_palindrome_helper(char *s, int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	else if (s[i] != s[j])
	{
		return (0);
	}
	else if (i < j - 1)
	{
		return (is_palindrome_helper(s, i + 1, j - 1));
	}
	else
	{
		return (1);
	}
}
