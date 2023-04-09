#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiples two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n * %d = %d\n", num1, num2, num1 * num2);
	return (0);
}
