#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: value
 * @b: value
 * @n: value
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
