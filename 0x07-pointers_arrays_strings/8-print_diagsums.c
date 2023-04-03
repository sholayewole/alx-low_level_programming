#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: pointer
 * @size: value
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;

	for (int i = 0; i <  size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - i - 1);
	}
	printf("Sum of first diagonal: %d\n", sum1);
	printf("Sum of second diagonal: %d\n", sum2);
}
