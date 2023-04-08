#include "main.h"

/**
 * main - program that prints its name
 *
 * @argc: agrument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	int argsno = argc - 1;
	{
		printf("%d\n" argsno);
	}
	return (0);
}
