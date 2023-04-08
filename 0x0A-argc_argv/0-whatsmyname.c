#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name
 *
 * @argc: agrument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	char *myProgram = argv[0];
	{
	printf("%s\n", myProgram);
	}
	return (0);
}
