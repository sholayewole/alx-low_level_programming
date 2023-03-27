#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints elements of an array of int
 * @a: array of int
 * @n: number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
