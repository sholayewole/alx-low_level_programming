#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 * @str: string
 * Return: a pointer or NULL
 */

char *_strdup(char *str)
{
	char *dup_str;
	int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup_str  = maloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i} = str[i];
	return (dup_str);
}
