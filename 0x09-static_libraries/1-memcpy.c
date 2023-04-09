#include "main.h"

/**
 * _memcpy - funtion that copies memory area
 * @dest: destination
 * @src: source
 * @n: value
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	char *psrc = src;

	while (n-- > 0)
	{
		*pdest++ = *psrc++;
	}
	return (dest);
}
