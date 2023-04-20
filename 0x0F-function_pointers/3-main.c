#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple arithmetic operations
 * @argc: number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 otherwise error code
 */

int main(int argc, char *argv[])
{
	int (*prtu)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	prtu = get_op_func(argv[2]);

	if (!prtu)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", prtu(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
