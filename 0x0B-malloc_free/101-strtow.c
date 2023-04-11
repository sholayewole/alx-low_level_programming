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
	int count = 0, i = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + j] == '\0'))
			count++;
		i++;
	}
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
	int i, j, k, len, count;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	count = count_nike(str);
	nike = malloc((count + 1) * sizeof(char *));
	if (nike == NULL)
		return (NULL);

	for (i = 0; j = 0; j < count; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			len = 0;
			while (str[i + len] != '\0' && str[i + len] != ' ')
				len++;
			nike[j] = _strdup(str + i);
			if (nike[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(nike[k]);
				free(nike);
				return (NULL);
			}
			j++;
			i += len;
		}
	}
	nike[count] = NULL;

	return (nike);
}
