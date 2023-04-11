#include "main.h"

/**
 * create_array - function that creates an array of chars
 * And initilizes it with a specific char
 * @c: char
 * @size: size of the array
 * Return: a pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizepf(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
