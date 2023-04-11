#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

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
