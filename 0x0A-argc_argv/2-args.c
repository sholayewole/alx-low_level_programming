#include <stdio.h>

/**
 * main - program that prints its name
 *
 * @argc: agrument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[]);
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
