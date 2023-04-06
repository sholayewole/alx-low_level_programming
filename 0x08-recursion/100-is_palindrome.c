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
	char *start = s;
	char *end = s + len - 1;

	while (start < end)
	{
		if (*start != *end)
		{
			return (0);
		}
		start++;
		end--;
	}
	return (1);
}
