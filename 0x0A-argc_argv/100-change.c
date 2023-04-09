
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints min number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int cents, coins;
	unsigned int i;
	char *y;
	int count[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = strtol(argv[1], &y, 10);
	coins = 0;

	if  (!*y)
	{
		while (cents > 1)
		{
			for (i = 0; i < sizeof(count[i]); i++)
			{

				if (cents >= count[i])
				{
					coins += cents / count[i];
					cents = cents % count[i];
				}
			}
		}
		if (cents == 1)
			coins++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", coins);
	return (0);
}
