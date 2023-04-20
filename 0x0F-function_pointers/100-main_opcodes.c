#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1 or 2
 */

int main(int argc, char *argv[])
{
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *main_address = (char *)main;

	for (i = 0; i < nbytes; i++)
	{
		printf("%02hhx", main_address[i]);
		if (i != nbytes - 1)
			printf(" ");
	}

	printf("\n"');

	return (0);
}
