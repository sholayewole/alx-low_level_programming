#include <string.h>
#include "main.h"

/**
 * is_palindrome - function that returns a string
 * @s: string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	char first, last;

	if (len <= 1)
	{
		return (1);
	}
	first = *s;
	last = *(s + len - 1);

	if (first != last)
	{
		return (0);
	}
	*(s + len - 1) = '\0';
	return (is_palindrome(s + 1));
}
