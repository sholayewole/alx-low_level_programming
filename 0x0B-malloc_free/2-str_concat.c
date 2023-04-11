#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: a pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *concat_str;
	int i, j;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';

	return (concat_str);
}
