#include "main.h"
#include <string.h>

/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: string
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			return (0);
	}
	return (1);
}
