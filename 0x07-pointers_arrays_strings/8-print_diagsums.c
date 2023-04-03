#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: pointer
 * @size: width
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + 1;
		1 += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
