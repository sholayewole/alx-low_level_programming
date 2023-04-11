#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * count_nike - counts number of words in a string
 * @str: string
 * Return: number of words in string
 */

int count_nike(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			count++;
	}
	count++;
	return (count);
}

/**
 * strtow - function that splits a string into words
 * @str: string
 * Return: NULL
 */

char **strtow(char *str)
{
	char **nike;
	int i, j = 0, k, len, count;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	count = count_nike(str);
	nike = malloc((count + 1) * sizeof(char *));
	if (nike == NULL)
		return (NULL);

	for (i = 0, j = 0; i++;)
	{
		if (str[i] != ' ')
		{
			len = 0;
			while (str[i + len] != ' ' && str[i + len] != '\0')
				len++;

			nike[j] = malloc((len + 1) * sizeof(char));
			if (nike[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(nike[k]);
				free(nike);
				return (NULL);
			}

			for (k = 0; k < len; k++)
				nike[j][k] = str[i + k];
			nike[j][k] = '\0';
			j++;
			i += len;
		}
	}
	nike[count] = NULL;

	return (nike);
}
