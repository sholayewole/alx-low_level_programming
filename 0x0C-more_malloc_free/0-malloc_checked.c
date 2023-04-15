#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: size of memory
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("Error: malloc failed\n");
		exit(98);
	}
	return (ptr);
}
