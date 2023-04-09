#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
