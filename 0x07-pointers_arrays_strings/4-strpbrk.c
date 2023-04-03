#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: value
 * @accept: string
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
