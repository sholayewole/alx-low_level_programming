#include "main.h"

/**
 * swap_int - function that swaps the value of two int
 * @a: first int
 * @b: second int
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
