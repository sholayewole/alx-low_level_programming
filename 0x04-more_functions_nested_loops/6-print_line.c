#include "main.h"

/**
 * print_line - prints out a straight line
 * @n: this is the char to be checked
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
