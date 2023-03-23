#include "main.h"

/**
 * print_line - prints out a straight line
 * @n: this is the char to be checked
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
}
