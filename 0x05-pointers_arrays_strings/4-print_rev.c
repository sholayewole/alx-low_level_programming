#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * followed by a new line
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		b++;

	for (a = b - l; a >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
