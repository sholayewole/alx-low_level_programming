#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: value
 * @size: value
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		sum1 += a[i];
	}
	for (i = size - 1; i < size * size - 1; i += size - 1)
	{
		sum2 += a[i];
	}
	printf("Sum of diagonal 1: %d\n", sum1);
	printf("Sum of diagonal 2: %d\n", sum2);
}
