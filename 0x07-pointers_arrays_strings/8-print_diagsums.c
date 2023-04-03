#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: value
 * @size: value
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i, j;

	for (1 = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *(a + i * size + j);
			}
			if (i == size - j - 1)
			{
				sum2 += *(a + i * size + j);
			}
		}
	}
	printf("Sum of diagonal 1: %d\n", sum1);
	printf("Sum of diagonal 2: %d\n", sum2);
}
