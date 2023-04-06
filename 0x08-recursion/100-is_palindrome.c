#include "main.h"
#include <string.h>

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

int main(void)
{
	char s1[] = "madam";
	char s2[] = "panama";
	{
		printf("%s is %s palindrome\n", s1, is_palindrome(s1) ? "a" : "not a");
		printf("%s is %s palindrome\n", s2, is_palindrome(s1) ? "a" : "not a");
		return (0);
	}
}
