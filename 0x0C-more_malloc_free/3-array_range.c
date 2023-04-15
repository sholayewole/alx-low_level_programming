#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: a pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min + 1;

	return (arr);
}
