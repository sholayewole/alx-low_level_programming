#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
	{
		return (haystack);
	}
	char (*p1) = haystack;

	while (*p1)
	{
		char *p2 = needle;
		char *p3 = p1;

		while (*p2 && *p3 && *p2 == *p3)
		{
			p2++;
			p3++;
		}
		if (!*p2)
		{
			return (p1);
		}
		p1++;
	}
	return (NULL);
}
