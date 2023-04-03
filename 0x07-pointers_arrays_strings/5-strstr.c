#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;
	char *q = needle;

	if (*q == '\0')
	{
		return (p);
	}

	while (*p != '\0')
	{
		if (*p == *q)
		{
			char *p_temp = p;
			char *q_temp = q;

			while (*p_temp == *q_temp && *q_temp != '\0')
			{
				p_temp++;
				q_temp++;
			}

			if (*q_temp == '\0')
			{
				return (p);
			}
		}
		p++;
	}
	return (NULL);
}
