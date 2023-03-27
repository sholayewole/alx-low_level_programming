#include "main.h"

/**
 * _puts - function that prints a string to the stdout
 * followed by a new line
 * @str: string
 * Return: the length of the string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
