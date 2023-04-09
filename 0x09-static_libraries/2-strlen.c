#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: char to be checked
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int a = 0; /* starts the counting from 0*/

	for (; *s++;)
		a++;
	return (a);
}
